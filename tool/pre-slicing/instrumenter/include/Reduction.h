#ifndef REDUCTION_H
#define REDUCTION_H

#include <set>
#include <vector>

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/Expr.h"
#include "clang/Rewrite/Core/Rewriter.h"
#include "llvm/Support/CommandLine.h"

// Delta debugging elements
// make sure each line can contain at most one statement
using DDElement = std::pair<int, int>;
using DDElementVector = std::vector<DDElement>;
using DDElementSet = std::set<DDElement>;

extern std::vector<std::string> opt_input_files;
extern std::string opt_debloated_file;
extern llvm::cl::opt<std::string> opt_original_file;
extern llvm::cl::opt<std::string> opt_compile_script;
extern llvm::cl::opt<std::string> opt_reproduce_script;
extern llvm::cl::opt<std::string> opt_other_test_script;

// using DDVector = std::vector<std::pair<int, int>>;

/// \brief Represents a general reduction step
class Reduction : public clang::ASTConsumer {
  public:
    Reduction(std::set<int> &debloatedLines, std::string outputFileName)
        : debloatedLines(debloatedLines), outputFileName(outputFileName) {}
    virtual ~Reduction() {}

  protected:
    virtual void Initialize(clang::ASTContext &Ctx) { Context = &Ctx; }

    virtual DDElementVector doDeltaDebugging(const DDElementVector &lineGroups) = 0;
    std::vector<DDElementVector> getCandidates(DDElementVector &Decls, int ChunkSize);

    bool test(const DDElementVector &toAddBack);
    virtual std::string addBackAndOutputToFile(const DDElementVector &toAddBack, bool isTemp = true) = 0;

    DDElement getStartAndEnd(clang::SourceRange range);
    DDElement getStartAndEnd(clang::Decl *decl);
    DDElement getStartAndEnd(clang::Stmt *stmt);

    DDElementSet toSet(const DDElementVector &Vec);
    DDElementVector toVector(const DDElementSet &Set);
    DDElementSet setDifference(const DDElementSet &A, const DDElementSet &B);

    std::vector<clang::Stmt *> getAllChildren(clang::Stmt *S);

    clang::ASTContext *Context;
    std::set<int> &debloatedLines;

    std::string outputFileName;
};

#endif // REDUCTION_H
