#!/bin/bash

export BENCHMARK_NAME=totinfo-input-fuzz
export PROG_NAME=${BENCHMARK_NAME%%-*}
export BENCHMARK_DIR=$TESTDIR/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/src/${PROG_NAME}.original.c
export ORIGIN_BIN=$BENCHMARK_DIR/bin/origin.noafl.out
export REPAIRED_SRC=$(realpath $1)
export REPAIRED_BIN=$BENCHMARK_DIR/bin/repaired.noafl.out
export TIMEOUT="-k 0.5 0.5"
export LOG=$BENCHMARK_DIR/log.reduced
export INDIR=$BENCHMARK_DIR/n10train
export BENCHMARK_CFLAGS="-lm"

source $TESTDIR/test-base.sh

# override the main function in test-base.sh
function main() {
  # for ((i = 0; i < ${#sanitizers[@]}; i++)); do
    echo "clean"
    clean
    # compile "${sanitizers[$i]}" || exit 1
    # desired "${sanitizers[$i]}" || exit 1
    echo "compile_${sanitizers[$i]}"
    compile "${sanitizers[$i]}" || exit 1
    echo "desired_${sanitizers[$i]}"
    desired "${sanitizers[$i]}" || exit 1
    echo "undesired_${sanitizers[$i]}"
    undesired || exit 1
    echo "clean"
    clean
  # done
  for ((i = 0; i < ${#environments[@]}; i++)); do
    echo "env: ${environments[$i]}"
    echo "clean"
    clean
    echo "compile"
    compile "${environment_libs[$i]}" || exit 1
    echo "desired_disaster"
    desired_disaster "${environments[$i]}" || exit 1
    echo "clean"
    clean
  done
}

function clean() {
  rm -f $REPAIRED_BIN $LOG log.txt
  return 0
}

function desired() {
  echo 0
  { timeout $TIMEOUT $REPAIRED_BIN  < $INDIR/12new44 >&$LOG; } 
  $ORIGIN_BIN < $INDIR/12new44 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 1
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/test331.inc  >&$LOG; } 
  $ORIGIN_BIN < $INDIR/test331.inc >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 2
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/test30.inc >&$LOG ;} 
  $ORIGIN_BIN  < $INDIR/test30.inc >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 3
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/jk2AAX.mat >&$LOG  ;} 
  $ORIGIN_BIN < $INDIR/jk2AAX.mat >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 4
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/test405.inc >&$LOG ;}
  $ORIGIN_BIN < $INDIR/test405.inc >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 5
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/jkACF.mat >&$LOG  ;} 
  $ORIGIN_BIN < $INDIR/jkACF.mat >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1 
  # cat log.txt
  echo 6
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/tst2f.mat >&$LOG  ;}  
  $ORIGIN_BIN < $INDIR/tst2f.mat >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt 
  echo 7
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/test70.inc >&$LOG    ;} 
  $ORIGIN_BIN < $INDIR/test70.inc >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 8
  { timeout $TIMEOUT $REPAIRED_BIN  < $INDIR/jkAAW.mat >&$LOG  ;} 
  $ORIGIN_BIN  < $INDIR/jkAAW.mat >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 9
  { timeout $TIMEOUT $REPAIRED_BIN < $INDIR/test32.inc  >&$LOG ;}  
  $ORIGIN_BIN < $INDIR/test32.inc  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  return 0

}

function undesired() {
  # TODO
  return 0
}

function desired_disaster() {
  # TODO
  return 0
}

main