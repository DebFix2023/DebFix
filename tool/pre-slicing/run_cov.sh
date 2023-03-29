#!/bin/bash

if [ -z $1 ] || [ -z $2 ] || [ -z $3 ]; then echo "Missing arguments!" && exit 1; fi
SOURCE_FILE=$(realpath "$1")
RUN_SCRIPT=$(realpath "$2")
COMPILE_SCRIPT=$(realpath "$3")
SOURCE_FILENAME=$(basename $SOURCE_FILE)
# SOURCE_FILENAME_TRIM=$(basename $SOURCE_FILE .c)
SOURCE_FILENAME_TRIM="${SOURCE_FILENAME%.*}"

CURRENT_DIR=$(pwd)
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

export DEBAUG_DIR=$SCRIPT_DIR/third-party/debaug
LINE_PRINTER_BIN=$DEBAUG_DIR/bin/startandendlineprinter
REMOVER_BIN=$DEBAUG_DIR/bin/gcovbasedcoderemover
MERGER_BIN=$DEBAUG_DIR/bin/gcovbasedcoveragemerger
GCOV_ANALYZER_BIN=$DEBAUG_DIR/bin/gcovanalyzer
LCOV2GCOV_BIN=$DEBAUG_DIR/bin/lcov2gcov
DEBDCE_BIN=$DEBAUG_DIR/bin/debdce

TMP_DIR=$CURRENT_DIR/$SOURCE_FILENAME.tmp.dir
mkdir -p $TMP_DIR && rm -rf $TMP_DIR/*
cd $TMP_DIR

$LINE_PRINTER_BIN $SOURCE_FILE > $SOURCE_FILENAME.line.txt

# "-fprofile-instr-generate -fcoverage-mapping" for profiling
# "-mllvm -runtime-counter-relocation=true" for proper profiling in crash cases
# https://releases.llvm.org/15.0.0/tools/clang/docs/SourceBasedCodeCoverage.html
bash $COMPILE_SCRIPT $SOURCE_FILE $SOURCE_FILENAME.out "-fprofile-instr-generate -fcoverage-mapping -mllvm -runtime-counter-relocation=true" clang-15

# FIXME: "Sometimes, producing a valid gcov would fail"??? (too slow to grep)
# use absolute path to avoid "cd" in "$RUN_SCRIPT" changing the output path of "default.profraw"
LLVM_PROFILE_FILE="$(pwd)/default.profraw%c" bash $RUN_SCRIPT ./$SOURCE_FILENAME.out &> /dev/null
llvm-profdata-15 merge -o $SOURCE_FILENAME.profdata default.profraw
llvm-cov-15 export -format=lcov $SOURCE_FILENAME.out -instr-profile=$SOURCE_FILENAME.profdata $SOURCE_FILE > $SOURCE_FILENAME.lcov
$LCOV2GCOV_BIN $SOURCE_FILENAME.lcov > $SOURCE_FILENAME.gcov
mkdir -p gcov
$GCOV_ANALYZER_BIN $SOURCE_FILENAME.gcov getbcov > gcov/0
if [ ! -f gcov/0 ] || ! grep -q '[^[:space:]]' gcov/0; then
    echo What happened?
fi

$MERGER_BIN binary gcov > gcov_merged

$REMOVER_BIN $SOURCE_FILE $SOURCE_FILENAME.line.txt gcov_merged > $SOURCE_FILENAME_TRIM.nodce.c

# remove dead codes such as empty if blocks
echo Output Cov-reduced source file to \'$SOURCE_FILENAME_TRIM.cov.c\'.
$DEBDCE_BIN $SOURCE_FILENAME_TRIM.nodce.c $CURRENT_DIR/$SOURCE_FILENAME_TRIM.cov.c > /dev/null

cd $CURRENT_DIR
rm -rf $TMP_DIR
# rm -rf $SOURCE_FILENAME.line.txt $SOURCE_FILENAME.out $SOURCE_FILENAME.lcov $SOURCE_FILENAME.gcov
# rm -rf default.profraw $SOURCE_FILENAME.profdata
# rm -rf gcov gcov_merged debop-out
