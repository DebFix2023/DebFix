#ifndef LOCAL_REDUCTION_H
#define LOCAL_REDUCTION_H

#include <vector>

#include "clang/AST/RecursiveASTVisitor.h"

#include "Reduction.h"

class LocalReduction;

class LocalElementCollectionVisitor : public clang::RecursiveASTVisitor<LocalElementCollectionVisitor> {
  public:
    LocalElementCollectionVisitor(LocalReduction *R) : localReduction(R) {}

    bool VisitFunctionDecl(clang::FunctionDecl *FD);

  private:
    LocalReduction *localReduction;
};

/// \brief Represents a local reduction phase
///
/// In local reduction phase, local statements are reduced
/// hierarchically with respect to AST.
class LocalReduction : public Reduction {
    friend class LocalElementCollectionVisitor;

  public:
    LocalReduction(std::set<int> &debloatedLines, std::string outputFileName)
        : Reduction(debloatedLines, outputFileName), CollectionVisitor(NULL) {}
    ~LocalReduction() { delete CollectionVisitor; }

  private:
    void Initialize(clang::ASTContext &Ctx);
    void HandleTranslationUnit(clang::ASTContext &Ctx);

    DDElementVector doDeltaDebugging(const DDElementVector &lineGroups);

    std::string addBackAndOutputToFile(const DDElementVector &toAddBack, bool isTemp = true);

    DDElementVector localStmts;
    DDElementVector cumulatedRemove;

    std::vector<clang::FunctionDecl *> Functions;

    LocalElementCollectionVisitor *CollectionVisitor;
};

#endif // LOCAL_REDUCTION_H
