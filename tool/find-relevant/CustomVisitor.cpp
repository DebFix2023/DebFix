#include "clang/AST/DeclarationName.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/Basic/SourceManager.h"

#include <iostream>
#include <vector>

using namespace std;
using namespace clang;

extern string KeyLineStr;
extern vector<int> RelevantLines;
extern bool DebugMode;
extern bool SkipVarDeclMode;
extern vector<string> IgnoreFuncVec;

class CustomVisitor : public RecursiveASTVisitor<CustomVisitor> {
   public:
    explicit CustomVisitor(ASTContext* Context) : Context(Context){};
    virtual bool VisitDecl(Decl* d) {
        int stmtBeginLineNo = SourceLocToLineNo(d->getBeginLoc());
        if (SkipVarDeclMode && stmtBeginLineNo == stoi(KeyLineStr)) {
            if (DebugMode) cout << "[Info] Key Line is a VarDecl. Skip it."<< endl;
            if (isa<VarDecl>(d)) {
                RelevantLines.clear();
                RelevantLines.push_back(-1);
                return false;
            }
        }
        return true;
    }
    virtual bool VisitStmt(Stmt* s) {
        if (s != nullptr) {
            int stmtBeginLineNo = SourceLocToLineNo(s->getBeginLoc());
            // cout << "StmtLineNumber: " << stmtLineNumber << endl;
            if (find(RelevantLines.begin(), RelevantLines.end(),
                     stmtBeginLineNo) != RelevantLines.end()) {
                if (DebugMode) {
                    cout << "[Info] Function VisitStmt: " << endl;
                    cout << "Find interesting stmt: " << endl;
                    s->dumpPretty(*Context);
                    cout << endl;
                }

                int stmtEndLineNo = SourceLocToLineNo(s->getEndLoc());
                for (int i = stmtBeginLineNo; i <= stmtEndLineNo; i++) {
                    RelevantLines.emplace_back(i);
                }
            }
        }

        return true;
    }
    virtual bool VisitGotoStmt(GotoStmt* gs) {
        if (gs != nullptr) {
            // get goto stmt line number.
            int gStmtBeginLineNo = SourceLocToLineNo(gs->getBeginLoc());
            // check if it is interesting.
            if (find(RelevantLines.begin(), RelevantLines.end(),
                     gStmtBeginLineNo) != RelevantLines.end()) {
                if (DebugMode) {
                    cout << "[Info] Function VisitGotoStmt: " << endl;
                    cout << "Find interesting GotoStmt at Line "
                         << gStmtBeginLineNo << endl;
                    gs->dumpPretty(*Context);
                    cout << endl;
                }
                // find label stmt
                Stmt* labelStmt = gs->getLabel()->getStmt();

                if (labelStmt != nullptr) {
                    // add label stmt back
                    int labelBeginLineNo =
                        SourceLocToLineNo(labelStmt->getBeginLoc());
                    int labelEndLineNo =
                        SourceLocToLineNo(labelStmt->getEndLoc());
                    if (DebugMode) {
                        cout << "Its label stmt from Line " << labelBeginLineNo
                             << " to Line " << labelEndLineNo << endl;
                        labelStmt->dumpPretty(*Context);
                    }
                    for (int i = labelBeginLineNo; i <= labelEndLineNo; i++) {
                        RelevantLines.emplace_back(i);
                    }
                }
            }
        }
        return true;
    }
    virtual bool VisitCallExpr(CallExpr* call) {
        bool ignored = false;
        if (call != nullptr) {
            // get call expr line number.
            int callBeginLineNo = SourceLocToLineNo(call->getBeginLoc());
            // check if it is interesting.
            if (find(RelevantLines.begin(), RelevantLines.end(),
                     callBeginLineNo) != RelevantLines.end()) {
                if (DebugMode) {
                    cout << "[Info] Function VisitCallExpr: " << endl;
                    cout << "Find interesting call expr at Line "
                         << callBeginLineNo << endl;
                    call->dumpPretty(*Context);
                    cout << endl;
                }
                // find calleeDecl
                Decl* calleeDecl = call->getCalleeDecl();
                if (FunctionDecl* funcDecl =
                        dyn_cast<FunctionDecl>(calleeDecl)) {
                    if (find(IgnoreFuncVec.begin(), IgnoreFuncVec.end(),
                             funcDecl->getNameAsString()) !=
                        IgnoreFuncVec.end()) {
                        if (DebugMode)
                            cout << "Ingored: " << funcDecl->getNameAsString()
                                 << endl;
                        ignored = true;
                    }
                }
                if (calleeDecl != nullptr && !ignored) {
                    // add callee decl back
                    int calleeBeginLineNo =
                        SourceLocToLineNo(calleeDecl->getBeginLoc());
                    int calleeEndLineNo =
                        SourceLocToLineNo(calleeDecl->getEndLoc());
                    if (DebugMode) {
                        cout << "Callee Decl from Line " << calleeBeginLineNo
                             << " to Line " << calleeEndLineNo << endl;
                    }
                    for (int i = calleeBeginLineNo; i <= calleeEndLineNo; i++) {
                        RelevantLines.emplace_back(i);
                    }
                }

                // if CalleeDecl is not a definition
                FunctionDecl* directCallee = call->getDirectCallee();
                if (find(IgnoreFuncVec.begin(), IgnoreFuncVec.end(),
                         directCallee->getNameAsString()) !=
                    IgnoreFuncVec.end()) {
                    if (DebugMode)
                        cout << "Ingored: " << directCallee->getNameAsString()
                             << endl;
                    ignored = true;
                }
                if (directCallee != nullptr && !ignored) {
                    int directCalleeBeginLineNo =
                        SourceLocToLineNo(directCallee->getBeginLoc());
                    int directCalleeEndLineNo =
                        SourceLocToLineNo(directCallee->getEndLoc());
                    if (DebugMode) {
                        cout << "Direct Callee Decl from Line "
                             << directCalleeBeginLineNo << " to Line "
                             << directCalleeEndLineNo << endl;
                    }
                    for (int i = directCalleeBeginLineNo;
                         i <= directCalleeBeginLineNo; i++) {
                        RelevantLines.emplace_back(i);
                    }

                    Stmt* directCalleeBody = directCallee->getBody();
                    if (directCalleeBody != nullptr) {
                        int bodyBeginLineNo =
                            SourceLocToLineNo(directCalleeBody->getBeginLoc());
                        int bodyEndLineNo =
                            SourceLocToLineNo(directCalleeBody->getEndLoc());
                        if (DebugMode) {
                            cout << "Direct Callee Body from Line "
                                 << bodyBeginLineNo << " to Line "
                                 << bodyEndLineNo << endl;
                        }
                        for (int i = bodyBeginLineNo; i <= bodyEndLineNo; i++) {
                            RelevantLines.emplace_back(i);
                        }
                    }
                }
            }
        }

        return true;
    }
    virtual bool VisitDeclRefExpr(DeclRefExpr* dre) {
        bool ignored = false;
        if (find(IgnoreFuncVec.begin(), IgnoreFuncVec.end(),
                 dre->getNameInfo().getAsString()) != IgnoreFuncVec.end()) {
            if (DebugMode)
                cout << "Ingored: " << dre->getNameInfo().getAsString() << endl;
            ignored = true;
        }
        if (dre != nullptr && !ignored) {
            // get call expr line number.
            int declRefExprBeginLineNo = SourceLocToLineNo(dre->getBeginLoc());
            // check if it is interesting.
            if (find(RelevantLines.begin(), RelevantLines.end(),
                     declRefExprBeginLineNo) != RelevantLines.end()) {
                if (DebugMode) {
                    cout << "[Info] Function VisitDeclRefExpr: " << endl;
                    cout << "Find interesting DeclRefExpr at Line "
                         << declRefExprBeginLineNo << endl;
                    dre->dumpPretty(*Context);
                    cout << endl;
                }
                // check if it is ParmVarDecl.
                NamedDecl* ND = dre->getFoundDecl();
                if (isa<ParmVarDecl>(ND)) {
                    if (DebugMode)
                        cout << "Ignored: It's a ParmVarDecl." << endl;
                    return true;
                }
                ValueDecl* vd = dre->getDecl();
                if (vd != nullptr) {
                    int vdBeginLineNo = SourceLocToLineNo(vd->getBeginLoc());
                    int vdEndLineNo = SourceLocToLineNo(vd->getEndLoc());

                    if (DebugMode) {
                        cout << "It's Decl:  From Line " << vdBeginLineNo
                             << " to Line " << vdEndLineNo << endl;
                    }
                    for (int i = vdBeginLineNo; i <= vdEndLineNo; i++) {
                        RelevantLines.emplace_back(i);
                    }
                }
            }
        }

        return true;
    }
    virtual bool VisitFunctionDecl(FunctionDecl* fd) {
        // add each decl for a added function body.
        if (fd->hasBody() &&
            find(IgnoreFuncVec.begin(), IgnoreFuncVec.end(),
                 fd->getNameAsString()) == IgnoreFuncVec.end()) {
            int functionBodyBeginLineNo =
                SourceLocToLineNo(fd->getBody()->getBeginLoc());
            if (find(RelevantLines.begin(), RelevantLines.end(),
                     functionBodyBeginLineNo) != RelevantLines.end()) {
                int fdBeginLineNo = SourceLocToLineNo(fd->getBeginLoc());
                int fdEndLineNo = SourceLocToLineNo(fd->getEndLoc());
                if (DebugMode) {
                    cout << "[Info] Function VisitFunctionDecl: " << endl;
                    cout << "Find interesting FunctionDecl of "
                         << fd->getNameInfo().getAsString() << " from Line "
                         << fdBeginLineNo << " to Line " << fdEndLineNo << endl;
                }

                for (int i = fdBeginLineNo; i <= fdEndLineNo; i++) {
                    RelevantLines.emplace_back(i);
                }
            }
        }
        return true;
    }

    int SourceLocToLineNo(SourceLocation sl) {
        if(sl.isValid()){
            string locStr = sl.printToString(Context->getSourceManager());
            int lineNoBeginLoc = locStr.find_first_of(':') + 1;
            int lineNoEndLoc = locStr.find_last_of(':');
            return stoi(
                locStr.substr(lineNoBeginLoc, lineNoEndLoc - lineNoBeginLoc)
            );
        }
        return 0;
    }

   private:
    ASTContext* Context;
};