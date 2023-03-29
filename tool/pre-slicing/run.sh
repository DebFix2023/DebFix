#!/bin/bash

# This is a convenience script for running pre-slicing tools.
# Before using it, please make sure all required files are properly named
#   and placed in the "demo-inputs/" directory.
# Invoke this bash script by `bash run.sh <foldername>`.
# For example, `bash run.sh grep`.

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

if [[ -z "$1" ]]; then
    echo Please provide an argument \(check the source code for help\).
    echo For example, \`bash run.sh date\`.
    exit 1
fi

if [[ ! -f "instrumenter/build/bin/instrumenter" ]]; then
    echo Please build the instrumenter tool first.
    exit 1
fi

if [[ ! -d "$SCRIPT_DIR/demo-inputs/$1" ]]; then
    echo Folder \"demo-inputs/$1\" does not exist.
    exit 1
fi

SRC_DIR=$SCRIPT_DIR/demo-inputs/$1
COMPILE_SCRIPT=$SRC_DIR/compile.sh
RUN_SCRIPT=$SRC_DIR/run.sh

ALIGNER="python3 $SCRIPT_DIR/aligner/align-source-codes.py"
GET_DEBLOATED_LINES="bash $SCRIPT_DIR/get_debloated_lines.sh"
INSTRUMENTER="$SCRIPT_DIR/instrumenter/build/bin/instrumenter"
FIXER="$SCRIPT_DIR/instrumenter/build/bin/fixer"
ANALYZER="python3 $SCRIPT_DIR/analyzer/pre-slicing-analyze.py"

echo ---- Step 1: Align Source Codes ----
$ALIGNER $SRC_DIR/$1.debloated.c $SRC_DIR/$1.original.c
$GET_DEBLOATED_LINES $1.debloated.aligned.c $1.original.aligned.c $1.debloated-lines

echo
echo ---- Step 2: Remove Unexecuted Codes ----
bash run_cov.sh $1.debloated.aligned.c $RUN_SCRIPT $COMPILE_SCRIPT
bash run_cov.sh $1.original.aligned.c $RUN_SCRIPT $COMPILE_SCRIPT

echo
echo ---- Step 3: Instrument, Compile, Trace ----
$INSTRUMENTER $1.debloated.aligned.c $1.original.aligned.c --no-compilation --
bash $COMPILE_SCRIPT $1.debloated.aligned.instru.c $1.debloated.out
bash $COMPILE_SCRIPT $1.original.aligned.instru.c $1.original.out
# use `stdbuf` to avoid incomplete output when program crashes
# https://serverfault.com/questions/294218/is-there-a-way-to-redirect-output-to-a-file-without-buffering-on-unix-linux
{ stdbuf -oL bash $RUN_SCRIPT ./$1.debloated.out > $1.debloated.trace; } 2>/dev/null
{ stdbuf -oL bash $RUN_SCRIPT ./$1.original.out > $1.original.trace; } 2>/dev/null
rm $1.debloated.out $1.original.out

echo
echo ---- Step 4: Analyze Traces ----
$ANALYZER -o $1.analyze.result $1.debloated.trace $1.original.trace

echo
echo ---- Step 5: Run Baseline Fixer ----
$FIXER --skip-local --original-src=$1.original.aligned.c --compile-script=$COMPILE_SCRIPT --reproduce-script=$RUN_SCRIPT --debloated-lines=$1.debloated-lines $1.debloated.aligned.c --
