#ifndef SOURCE_MANAGER_H
#define SOURCE_MANAGER_H

#include "clang/AST/ASTContext.h"
#include "clang/AST/Expr.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Basic/SourceManager.h"
#include "llvm/ADT/PointerUnion.h"

#include <utility>

class SourceManager {
  public:
    static bool IsInHeader(const clang::SourceManager &SM, clang::Decl *D);
    static int GetStartingColumn(clang::SourceManager &SM, int Line);
    static clang::SourceLocation FindLocationAfterCond(const clang::SourceManager &SM, clang::Expr *E);
    static clang::SourceLocation GetRealLocation(clang::ASTContext *Context, clang::SourceLocation Loc);
    static clang::SourceLocation GetEndOfCond(const clang::SourceManager &SM, clang::Expr *E);
    static clang::SourceLocation GetBeginOfStmt(clang::ASTContext *Context, clang::Stmt *S);
    static clang::SourceLocation GetEndOfStmt(clang::ASTContext *Context, clang::Stmt *S);
    static clang::SourceLocation GetEndLocation(clang::ASTContext *Context, clang::SourceLocation Loc);
    static clang::SourceLocation GetEndLocationAfter(const clang::SourceManager &SM, clang::SourceRange Range,
                                                     char Symbol);
    static clang::SourceLocation GetEndLocationUntil(const clang::SourceManager &SM, clang::SourceRange Range,
                                                     char Symbol);
    static clang::SourceLocation GetEndLocationFromBegin(const clang::SourceManager &SM,
                                                         clang::SourceRange Range);
    static llvm::StringRef GetSourceText(const clang::SourceManager &SM, const clang::SourceLocation &B,
                                         const clang::SourceLocation &E);
    static llvm::StringRef GetSourceText(const clang::SourceManager &SM, const clang::SourceRange &SR);

    // don't use it (doesn't work in some cases)
    static std::pair<clang::SourceLocation, clang::SourceLocation>
    getStartAndEnd(clang::ASTContext *context, llvm::PointerUnion<clang::Decl *, clang::Stmt *> node);
};

#endif // SOURCE_MANAGER_H
