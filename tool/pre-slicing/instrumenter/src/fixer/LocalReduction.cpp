#include "LocalReduction.h"

#include "clang/Lex/Lexer.h"
#include "llvm/Support/Program.h"

#include "FileManager.h"
#include "Reduction.h"
#include "SourceManager.h"

void LocalReduction::Initialize(clang::ASTContext &Ctx) {
    Reduction::Initialize(Ctx);
    CollectionVisitor = new LocalElementCollectionVisitor(this);
}

void LocalReduction::HandleTranslationUnit(clang::ASTContext &Ctx) {
    CollectionVisitor->TraverseDecl(Ctx.getTranslationUnitDecl());

    for (auto const &FD : Functions) {
        DDElementVector toRemove;
        auto range = getStartAndEnd(FD->getBody());
        if (range.first >= 0 && range.second >= 0) {
            for (int debloatedLine : debloatedLines) {
                if (debloatedLine >= range.first && debloatedLine <= range.second)
                    toRemove.emplace_back(std::make_pair(debloatedLine, debloatedLine));
            }
            if (!toRemove.empty()) {
                llvm::outs() << "Reduce " << FD->getNameInfo().getAsString() << "\n";
                auto removed = doDeltaDebugging(toRemove);
                cumulatedRemove.insert(cumulatedRemove.end(), removed.begin(), removed.end());
            }
        }
    }
}

extern bool reduction_dirty_flag;
DDElementVector LocalReduction::doDeltaDebugging(const DDElementVector &lineGroups) {
    std::set<DDElementVector> visited;
    DDElementVector lineGroupsToKeep = lineGroups;
    DDElementSet lineGroupsToRemove;

    // get the "fallback" result of this round of delta debugging (meaning all lines are added back)
    addBackAndOutputToFile(toVector(lineGroupsToRemove), false);

    int chunkSize = (lineGroupsToKeep.size() + 1) / 2;
    llvm::outs() << "Running delta debugging - Size: " << lineGroupsToKeep.size() << "\n";

    while (lineGroupsToKeep.size() > 0) {
        bool success = false;
        auto candidates = getCandidates(lineGroupsToKeep, chunkSize);
        for (auto candidate : candidates) {
            if (std::find(visited.begin(), visited.end(), candidate) != visited.end()) {
                // llvm::outs() << "Cache hit.\n";
                continue;
            }
            visited.insert(candidate);

            // cumulative remove
            candidate.insert(candidate.end(), lineGroupsToRemove.begin(), lineGroupsToRemove.end());
            if (test(candidate)) {
                lineGroupsToKeep = toVector(setDifference(toSet(lineGroups), toSet(candidate)));
                lineGroupsToRemove.insert(candidate.begin(), candidate.end());
                success = true;
                break;
            }
        }
        if (success) {
            reduction_dirty_flag = true;
            llvm::outs() << "---------------- Success - Size: " << lineGroupsToKeep.size() << "\n";
            llvm::outs() << "Removed: ";
            for (auto R : lineGroupsToRemove)
                llvm::outs() << R.first << "-" << R.second << " ";
            llvm::outs() << "\n";
            chunkSize = (lineGroupsToKeep.size() + 1) / 2;
        } else {
            if (chunkSize == 1)
                break;
            chunkSize = (chunkSize + 1) / 2;
        }
    }

    // get the "final" result of this round of delta debugging
    addBackAndOutputToFile(toVector(lineGroupsToRemove), false);

    // remove removed lines in debloatedLines
    for (auto it = debloatedLines.begin(); it != debloatedLines.end();) {
        bool found = false;
        for (auto const &element : lineGroupsToRemove) {
            if (*it >= element.first && *it <= element.second) {
                found = true;
                break;
            }
        }
        if (found)
            it = debloatedLines.erase(it);
        else
            ++it;
    }

    return toVector(lineGroupsToRemove);
}

// FIXME: not ADD BACK!!! It's remove!!!
std::string LocalReduction::addBackAndOutputToFile(const DDElementVector &toAddBack, bool isTemp) {
    const clang::SourceManager &SM = Context->getSourceManager();

    std::set<DDElement> ranges(cumulatedRemove.begin(), cumulatedRemove.end());
    for (auto const &element : toAddBack) {
        // if (element.isNull())
        //     continue;
        if (element.first < 0 || element.second < 0) {
            // llvm::errs() << "Error in addBackAndOutputToFile: (-1, -1)\n";
            continue;
        }
        ranges.insert(element);
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
    if (llvm::sys::ExecuteAndWait("/usr/bin/python3", {"/usr/bin/python3", programDir + "/add-back.py", "--remove",
                                                   "--lines", rangesStr, outputFile, opt_original_file}) !=
        0) {
        llvm::errs() << "Failed to execute add-back.py (with args " << rangesStr << ")\n";
        exit(1);
    }

    return outputFile;
}

bool LocalElementCollectionVisitor::VisitFunctionDecl(clang::FunctionDecl *FD) {
    if (SourceManager::IsInHeader(localReduction->Context->getSourceManager(), FD))
        return true;
    if (FD->isThisDeclarationADefinition())
        localReduction->Functions.emplace_back(FD);
    return true;
}
