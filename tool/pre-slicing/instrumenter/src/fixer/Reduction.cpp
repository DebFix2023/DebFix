#include "Reduction.h"
#include "SourceManager.h"

#include "clang/AST/Stmt.h"
#include "clang/Basic/SourceLocation.h"
#include "llvm/Support/Program.h"

#include <queue>

std::vector<clang::Stmt *> Reduction::getAllChildren(clang::Stmt *S) {
    std::queue<clang::Stmt *> ToVisit;
    std::vector<clang::Stmt *> AllChildren;
    ToVisit.push(S);
    while (!ToVisit.empty()) {
        auto C = ToVisit.front();
        ToVisit.pop();
        AllChildren.emplace_back(C);
        for (auto const &Child : C->children()) {
            if (Child != NULL)
                ToVisit.push(Child);
        }
    }
    return AllChildren;
}

DDElement Reduction::getStartAndEnd(clang::SourceRange range) {
    const clang::SourceManager &SM = Context->getSourceManager();

    clang::SourceLocation Start = range.getBegin(), End = range.getEnd();

    if (Start.isMacroID())
        Start = SM.getFileLoc(Start);
    if (End.isMacroID())
        End = SM.getFileLoc(End);

    if (End.isInvalid() || Start.isInvalid())
        return std::make_pair(-1, -1);

    // a pair of start and end line numbers
    return std::make_pair(SM.getSpellingLineNumber(Start), SM.getSpellingLineNumber(End));
}
DDElement Reduction::getStartAndEnd(clang::Decl *decl) {
    if (decl == nullptr) {
        // Why will there be some decls that are null?
        // Because some function declarations are using definitions in other files (such as "extern printf").
        return std::make_pair(-1, -1);
    }

    return getStartAndEnd(decl->getSourceRange());
}
DDElement Reduction::getStartAndEnd(clang::Stmt *stmt) {
    if (stmt == nullptr) {
        return std::make_pair(-1, -1);
    }

    return getStartAndEnd(stmt->getSourceRange());
}

DDElementSet Reduction::toSet(const DDElementVector &Vec) {
    DDElementSet S(Vec.begin(), Vec.end());
    return S;
}
DDElementVector Reduction::toVector(const DDElementSet &Set) {
    DDElementVector Vec(Set.begin(), Set.end());
    return Vec;
}
DDElementSet Reduction::setDifference(const DDElementSet &A, const DDElementSet &B) {
    DDElementSet Result;
    std::set_difference(A.begin(), A.end(), B.begin(), B.end(), std::inserter(Result, Result.begin()));
    return Result;
}

bool Reduction::test(const DDElementVector &toAddBack) {
    llvm::Optional<llvm::StringRef> redirect_to_null[] = {llvm::None, llvm::StringRef("/dev/null"),
                                                          llvm::StringRef("/dev/null")};

    // replace ranges of lines in the debloated (temp) file with lines in the original file
    std::string temp_file = addBackAndOutputToFile(toAddBack);
    std::string temp_bin_file = temp_file + ".out";
    if (temp_file.empty())
        return false;

    // compile and test the temp file
    bool success = false;
    if (llvm::sys::ExecuteAndWait("/bin/bash", {"/bin/bash", opt_compile_script, temp_file, temp_bin_file},
                                  llvm::None, redirect_to_null) == 0) {
        // check if it crashes (segmentation fault)

        // std::string cmd = "./" + temp_file + ".out " + opt_crash_args + " < " + opt_crash_input_file;
        // int retcode =
        //     llvm::sys::ExecuteAndWait("/bin/bash", {"/bin/bash", "-c", cmd}, llvm::None, redirect_to_null);

        int retcode = llvm::sys::ExecuteAndWait(
            "/bin/bash", {"/bin/bash", opt_reproduce_script, temp_bin_file}, llvm::None, redirect_to_null);
        success = !((retcode >= 131 && retcode <= 136) || retcode == 139);

        if (success) {
            // check if it passes other tests
            if (!opt_other_test_script.empty()) {
                // llvm::outs() << "---------------------------------Testing with other tests...\n";
                success =
                    (llvm::sys::ExecuteAndWait("/bin/bash", {"/bin/bash", opt_other_test_script, temp_file},
                                               llvm::None, redirect_to_null) == 0);
            }
        }
    }

    // remove temp files
    llvm::sys::fs::remove(temp_file);
    llvm::sys::fs::remove(temp_bin_file);

    return success;
}

std::vector<DDElementVector> Reduction::getCandidates(DDElementVector &Decls, int ChunkSize) {
    if (Decls.size() == 1)
        return {Decls};
    std::vector<DDElementVector> Result;
    int Partitions = Decls.size() / ChunkSize;
    for (int Idx = 0; Idx < Partitions; Idx++) {
        DDElementVector Target;
        Target.insert(Target.end(), Decls.begin() + Idx * ChunkSize, Decls.begin() + (Idx + 1) * ChunkSize);
        if (Target.size() > 0)
            Result.emplace_back(Target);
    }
    for (int Idx = 0; Idx < Partitions; Idx++) {
        DDElementVector Complement;
        Complement.insert(Complement.end(), Decls.begin(), Decls.begin() + Idx * ChunkSize);
        Complement.insert(Complement.end(), Decls.begin() + (Idx + 1) * ChunkSize, Decls.end());
        if (Complement.size() > 0)
            Result.emplace_back(Complement);
    }

    return Result;
}
