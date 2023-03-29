#include <fstream>
#include <memory>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>

#include "FileManager.h"
#include "Frontend.h"
#include "InstruVisitors.h"
#include "Instrumentation.h"
#include "clang/Frontend/FrontendAction.h"
#include "clang/Tooling/CommonOptionsParser.h"
#include "clang/Tooling/CompilationDatabase.h"
#include "clang/Tooling/Tooling.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/raw_ostream.h"

#include "GlobalReduction.h"
#include "LocalReduction.h"
#include "Reduction.h"

using namespace clang::tooling;

void reduceOneFile(std::string &inputFile, std::set<int> &debloatedLines);

llvm::cl::OptionCategory fixerOptionsCategory("Fixer Options");
// llvm::cl::opt<bool> opt_no_compilation("no-compilation", llvm::cl::desc("Do not compile during crash
//     repair"), llvm::cl::cat(fixerOptionsCategory));
std::string opt_debloated_file;
llvm::cl::opt<std::string> opt_original_file("original-src",
                                             llvm::cl::desc("file path to the original source file"),
                                             llvm::cl::value_desc("FILEPATH"), llvm::cl::Required,
                                             llvm::cl::cat(fixerOptionsCategory));
llvm::cl::opt<std::string> opt_compile_script("compile-script",
                                              llvm::cl::desc("file path to the compile script"),
                                              llvm::cl::value_desc("FILEPATH"), llvm::cl::Required,
                                              llvm::cl::cat(fixerOptionsCategory));
llvm::cl::opt<std::string> opt_reproduce_script("reproduce-script",
                                                llvm::cl::desc("file path to the reproduce script"),
                                                llvm::cl::value_desc("FILEPATH"), llvm::cl::Required,
                                                llvm::cl::cat(fixerOptionsCategory));
llvm::cl::opt<std::string>
    opt_debloated_lines_file("debloated-lines", llvm::cl::init("debloatedLines.txt"),
                             llvm::cl::desc("file path to the text file containing all debloated lines"),
                             llvm::cl::value_desc("FILEPATH"), llvm::cl::Required,
                             llvm::cl::cat(fixerOptionsCategory));
// optional
llvm::cl::opt<std::string>
    opt_other_test_script("other-test-script",
                          llvm::cl::desc("file path to the other test script (such as runDebInputs.sh)"),
                          llvm::cl::value_desc("FILEPATH"), llvm::cl::cat(fixerOptionsCategory));
llvm::cl::opt<bool> opt_no_local_reduction("skip-local",
                                           llvm::cl::desc("Do not perform local reduction"),
                                           llvm::cl::cat(fixerOptionsCategory));

int main(int argc, const char **argv) {
    llvm::cl::SetVersionPrinter([](llvm::raw_ostream &OS) { OS << "Fixer version 0.1\n"; });
    // FIXME: make sure each line can contain at most one statement
    auto expectedOptions = CommonOptionsParser::create(
        argc, argv, fixerOptionsCategory, llvm::cl::OneOrMore,
        "An baseline crash repair tool for debloated program (only supports C language)");
    if (!expectedOptions) {
        llvm::errs() << expectedOptions.takeError();
        return 1;
    }
    CommonOptionsParser &options = expectedOptions.get();
    // FIXME: currently only supports one input file
    opt_debloated_file = options.getSourcePathList()[0];

    // input from file
    // file contains single line with numbers separated by space
    std::set<int> debloatedLines;
    std::ifstream debloatedLinesFile(opt_debloated_lines_file);
    for (int line; debloatedLinesFile >> line;)
        debloatedLines.insert(line);
    debloatedLinesFile.close();

    // the REDUCE is based on the original file
    reduceOneFile(opt_original_file, debloatedLines);

    return 0;
}

// dirty flag and dirty global variable...
bool reduction_dirty_flag = true;
void reduceOneFile(std::string &inputFile, std::set<int> &debloatedLines) {
    // only do one round of global add-back
    llvm::outs() << "Global Add-Back\n";
    std::string resultFile = FileManager::getStemName(opt_debloated_file) + ".fixed.c";
    // this will change debloatedLines (in place)
    Frontend::runWithoutCompilation(inputFile, new GlobalReduction(debloatedLines, resultFile));

    if (opt_no_local_reduction)
        return;

    // after doing global add-back, do local reduction to remove redundant statements
    llvm::outs() << "Local Reduction\n";
    std::string tempFile = FileManager::getStemName(opt_debloated_file) + ".local.temp.c";
    // FIXME: ugly way of passing the result file name to LocalReduction
    opt_debloated_file = resultFile;
    for (int i = 1; reduction_dirty_flag; i++) {
        reduction_dirty_flag = false;
        llvm::outs() << "Iteration " << i << "\n";
        Frontend::runWithoutCompilation(resultFile, new LocalReduction(debloatedLines, tempFile));
        llvm::sys::fs::copy_file(tempFile, resultFile);
    }
    llvm::sys::fs::remove(tempFile);
}
