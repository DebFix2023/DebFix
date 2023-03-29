#ifndef CUSTOM_AST_CONSUMER
#define CUSTOM_AST_CONSUMER

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/ASTContext.h"
#include "clang/Frontend/CompilerInstance.h"

#include <iostream>

#include "CustomVisitor.h"

using namespace clang;
using namespace std;

extern vector<int> RelevantLines;

class CustomASTConsumer : public ASTConsumer {
   public:
    explicit CustomASTConsumer(ASTContext* Context) : Visitor(Context){};

    virtual void HandleTranslationUnit(ASTContext& Context) {
        int traversalCount = 1;
        int prevRelLineSize = RelevantLines.size();
         do {
            if (DebugMode) {
                cout << "================== Traversal Count: " << traversalCount
                     << " ==================" << endl;
            }
            prevRelLineSize = RelevantLines.size();
            Visitor.TraverseDecl(Context.getTranslationUnitDecl());
            traversalCount++;

            // deduplicate
            set<int> s(RelevantLines.begin(), RelevantLines.end());
            RelevantLines.assign(s.begin(), s.end());
            if (DebugMode) {
                cout << "======================== Report "
                        "========================"
                     << endl;
                cout << "Find Relevant Lines: ";
                for (auto line : RelevantLines) {
                    cout << line << " ";
                }
                cout << endl;
            }
        }
        while ( RelevantLines.size() > prevRelLineSize);

        cout << "===================== Final Report ====================="
             << endl;
        cout << "Find Relevant Lines: ";
        for (auto line : RelevantLines) {
            cout << line << " ";
        }
        cout << endl;
        cout << "========================================================"
             << endl;
    }

   private:
    CustomVisitor Visitor;
};
#endif