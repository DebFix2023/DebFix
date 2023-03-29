#include "GlobalReduction.h"
#include "FileManager.h"
#include "Reduction.h"
#include "SourceManager.h"

#include "llvm/ADT/Optional.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Program.h"

#include <optional>
#include <vector>

int currentVisitingDeclStartLine = -1;

void GlobalReduction::Initialize(clang::ASTContext &Ctx) {
    Reduction::Initialize(Ctx);
    CollectionVisitor = new GlobalElementCollectionVisitor(this);
}

void GlobalReduction::HandleTranslationUnit(clang::ASTContext &Ctx) {
    CollectionVisitor->TraverseDecl(Ctx.getTranslationUnitDecl());

    // filter Decls to only include those that contains debloated lines AND ARE CONTAINED IN DEBLOATED FILE
    DDElementVector filteredDecls;
    for (auto const &element : globalDecls) {
        // Why will there be (-1, -1)?
        // Because some function declarations are using definitions in other files (such as "extern printf").
        if (element.first < 0 || element.second < 0) {
            llvm::errs() << "Error in HandleTranslationUnit: element is null\n";
            continue;
        }

        if (debloatedLines.find(element.first) != debloatedLines.end())
            continue;

        for (int line : debloatedLines) {
            if (line >= element.first && line <= element.second) {
                filteredDecls.emplace_back(element);
                break;
            }
        }
    }

    doDeltaDebugging(filteredDecls);
}

extern bool reduction_dirty_flag;
DDElementVector GlobalReduction::doDeltaDebugging(const DDElementVector &lineGroups) {
    std::set<DDElementVector> visited;
    DDElementVector lineGroupsToAddBack = lineGroups;

    // get the "fallback" result of this round of delta debugging (meaning all lines are added back)
    addBackAndOutputToFile(lineGroupsToAddBack, false);

    int chunkSize = (lineGroupsToAddBack.size() + 1) / 2;
    llvm::outs() << "Running delta debugging - Size: " << lineGroupsToAddBack.size() << "\n";

    while (lineGroupsToAddBack.size() > 0) {
        bool success = false;
        auto candidates = getCandidates(lineGroupsToAddBack, chunkSize);
        for (auto candidate : candidates) {
            if (std::find(visited.begin(), visited.end(), candidate) != visited.end()) {
                // llvm::outs() << "Cache hit.\n";
                continue;
            }
            visited.insert(candidate);

            if (test(candidate)) {
                lineGroupsToAddBack = toVector(toSet(candidate));
                success = true;
                break;
            }
        }
        if (success) {
            reduction_dirty_flag = true;
            llvm::outs() << "---------------- Success - Size: " << lineGroupsToAddBack.size() << "\n";
            llvm::outs() << "Added Back: ";
            for (auto R : lineGroupsToAddBack)
                llvm::outs() << R.first << "-" << R.second << " ";
            llvm::outs() << "\n";
            chunkSize = (lineGroupsToAddBack.size() + 1) / 2;
        } else {
            if (chunkSize == 1)
                break;
            chunkSize = (chunkSize + 1) / 2;
        }
    }

    // get the "final" result of this round of delta debugging
    // must be before reducing debloatedLines
    addBackAndOutputToFile(lineGroupsToAddBack, false);

    // only keep added back lines in debloatedLines
    for (auto it = debloatedLines.begin(); it != debloatedLines.end();) {
        bool found = false;
        for (auto const &element : lineGroupsToAddBack) {
            if (*it >= element.first && *it <= element.second) {
                found = true;
                break;
            }
        }
        if (!found)
            it = debloatedLines.erase(it);
        else
            ++it;
    }

    return lineGroupsToAddBack;
}

std::string GlobalReduction::addBackAndOutputToFile(const DDElementVector &toAddBack, bool isTemp) {
    const clang::SourceManager &SM = Context->getSourceManager();

    std::set<DDElement> ranges;
    for (auto const &element : toAddBack) {
        // if (element.isNull())
        //     continue;
        if (element.first < 0 || element.second < 0) {
            // llvm::errs() << "Error in addBackAndOutputToFile: (-1, -1)\n";
            continue;
        }
        ranges.insert(element);
    }
    // also add back all dependencies (recursively)
    for (bool dirty_flag = true; dirty_flag;) {
        dirty_flag = false;
        for (auto const &element : ranges) {
            for (auto const &dep : mapLineToDependencies[element.first]) {
                if (dep.first > 0 && dep.second > 0) {
                    if (debloatedLines.find(dep.first) != debloatedLines.end()) {
                        if (ranges.find(dep) == ranges.end()) {
                            dirty_flag = true;
                            ranges.insert(dep);
                        }
                    }
                }
            }
        }
    }

    // replace ranges of lines in the debloated (temp) file with lines in the original file
    std::string outputFile =
        isTemp ? FileManager::getStemName(opt_debloated_file) + ".temp.c" : outputFileName;
    llvm::sys::fs::copy_file(opt_debloated_file, outputFile);
    // CANNOT use `sed -i 10c\ "$(sed -n 10p original_file)" outputFile` (when 10th line is empty, it fails)
    // use python instead
    std::string rangesStr;
    for (auto const &range : ranges)
        rangesStr += std::to_string(range.first) + "-" + std::to_string(range.second) + ",";
    std::string programDir = FileManager::getParentDir(llvm::sys::fs::getMainExecutable(nullptr, nullptr));
    if (llvm::sys::ExecuteAndWait("/usr/bin/python3", {"/usr/bin/python3", programDir + "/add-back.py", "--lines",
                                                   rangesStr, outputFile, opt_original_file}) != 0) {
        llvm::errs() << "Failed to execute add-back.py (with args " << rangesStr << ")\n";
        exit(1);
    }

    return outputFile;
}

void GlobalReduction::addDependencies(clang::Decl *decl) {
    auto range = getStartAndEnd(decl);
    if (range.first > 0 && range.second > 0)
        mapLineToDependencies[currentVisitingDeclStartLine].insert(range);
}

bool GlobalElementCollectionVisitor::VisitFunctionDecl(clang::FunctionDecl *FD) {
    if (SourceManager::IsInHeader(globalReduction->Context->getSourceManager(), FD))
        return true;

    // TODO: currently only considers FD's definition because Chisel only removes function definitions
    DDElement range = globalReduction->getStartAndEnd(FD->getDefinition());
    if (range.first < 0 || range.second < 0)
        return true;
    // globalReduction->mapLineToRange[range.first] = range;
    currentVisitingDeclStartLine = range.first;

    // only add back functions that are also in the debloated program
    if (globalReduction->debloatedLines.find(range.first) == globalReduction->debloatedLines.end())
        globalReduction->globalDecls.emplace_back(range);

    return true;
}

bool GlobalElementCollectionVisitor::VisitVarDecl(clang::VarDecl *VD) {
    if (SourceManager::IsInHeader(globalReduction->Context->getSourceManager(), VD))
        return true;

    if (VD->hasGlobalStorage()) {
        DDElement range = globalReduction->getStartAndEnd(VD);
        if (range.first < 0 || range.second < 0)
            return true;
        // globalReduction->mapLineToRange[range.first] = range;
        currentVisitingDeclStartLine = range.first;

        // only do delta-debugging on functions (not variable declarations)
        // globalReduction->globalDecls.emplace_back(globalReduction->getStartAndEnd(VD));
    }

    return true;
}

bool GlobalElementCollectionVisitor::VisitDeclRefExpr(clang::DeclRefExpr *DRE) {
    auto D = DRE->getDecl();
    if (D == nullptr)
        return true;

    if (clang::VarDecl *VD = llvm::dyn_cast<clang::VarDecl>(D)) {
        if (VD->hasGlobalStorage()) {
            // add back the variable declaration and definition
            //   (1) `extern int x` & `x = 1`
            //   (2) `int x` & `x = 1`
            globalReduction->addDependencies(VD);
            globalReduction->addDependencies(VD->getCanonicalDecl());
            globalReduction->addDependencies(VD->getInitializingDeclaration()); // TODO: needed?
            globalReduction->addDependencies(VD->getDefinition());              // TODO: needed?
        }
    } else if (clang::FunctionDecl *FD = llvm::dyn_cast<clang::FunctionDecl>(D)) {
        // add back the function declaration and definition
        globalReduction->addDependencies(FD);
        globalReduction->addDependencies(FD->getDefinition());
        globalReduction->addDependencies(FD->getCanonicalDecl()); // TODO: needed?
    } else {
        globalReduction->addDependencies(D);
        globalReduction->addDependencies(D->getCanonicalDecl()); // TODO: needed?
    }

    return true;
}
