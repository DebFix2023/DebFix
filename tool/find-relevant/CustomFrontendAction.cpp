#include "clang/Frontend/CompilerInstance.h"
#include "clang/Frontend/FrontendAction.h"

#include "CustomASTConsumer.h"

using namespace clang;

class CustomFrontendAction : public ASTFrontendAction {
   public:
    CustomFrontendAction(){};
    virtual std::unique_ptr<ASTConsumer> CreateASTConsumer(CompilerInstance& CI,
                                                           StringRef InFile) {
        return std::make_unique<CustomASTConsumer>(&CI.getASTContext());
    }
};