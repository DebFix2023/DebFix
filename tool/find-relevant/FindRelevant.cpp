#include "clang/Frontend/FrontendActions.h"

// Declares clang::SyntaxOnlyAction.
#include "clang/Frontend/FrontendActions.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/Tooling.h"
// Declares llvm::cl::extrahelp.
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/Signals.h"

#include <iostream>
#include <vector>

#include "CustomFrontendAction.h"

using namespace std;
using namespace clang::tooling;
using namespace llvm;

// Apply a custom category to all command-line options so that they are the
// only ones displayed.
static llvm::cl::OptionCategory FindRelevantCategory(
    "find-relevant tool options");

// CommonOptionsParser declares HelpMessage with a description of the common
// command-line options related to the compilation database and input files.
// It's nice to have this help message in all tools.

static cl::opt<string> KeyLine(
    "kl",
    cl::desc("Specify the key line to find its relevant lines."),
    cl::value_desc("number"),
    cl::cat(FindRelevantCategory)
);

static cl::opt<bool> Debug(
    "d",
    cl::desc("Debug Mode."),
    cl::value_desc("bool"),
    cl::init(false),
    cl::cat(FindRelevantCategory)
);

static cl::opt<bool> SkipVarDecl(
    "skip",
    cl::desc("If the key line is a declaration of a variable, skip it with returning -1."),
    cl::value_desc("bool"),
    cl::init(false),
    cl::cat(FindRelevantCategory)
);

static cl::list<string> IgnoreFunctions(
    "ignore",
    cl::CommaSeparated,
    cl::desc("Ignore the relevant lines in these functions."),
    cl::value_desc("array"),
    cl::cat(FindRelevantCategory)
);
// A help message for this specific tool can be added afterwards.
static cl::extrahelp CommonHelp(CommonOptionsParser::HelpMessage);

string KeyLineStr = "";
vector<int> RelevantLines;
vector<string> IgnoreFuncVec;
bool DebugMode = false;
bool SkipVarDeclMode = false;

int main(int argc, const char** argv) {
    llvm::sys::PrintStackTraceOnErrorSignal(argv[0]);
    auto ExpectedParser =
        CommonOptionsParser::create(argc, argv, FindRelevantCategory);
    if (!ExpectedParser) {
        // Fail gracefully for unsupported options.
        llvm::errs() << ExpectedParser.takeError();
        return 1;
    }

    if (Debug.getValue() == true) {
        DebugMode = true;
    }

    if (SkipVarDecl.getValue() == true) {
        SkipVarDeclMode = true;
    }

    CommonOptionsParser& OptionsParser = ExpectedParser.get();
    if (!KeyLine.empty()) {
        KeyLineStr = KeyLine.getValue();
        RelevantLines.emplace_back(stoi(KeyLineStr));
    }

    if (!IgnoreFunctions.empty()){
        for(auto &func : IgnoreFunctions){
          IgnoreFuncVec.push_back(func);
        }
    }
    ClangTool Tool(OptionsParser.getCompilations(),
                   OptionsParser.getSourcePathList());
    return Tool.run(newFrontendActionFactory<CustomFrontendAction>().get());
}