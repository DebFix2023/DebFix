#!/bin/bash

export BENCHMARK_NAME=schedule-input-fuzz
export PROG_NAME=${BENCHMARK_NAME%%-*}
export BENCHMARK_DIR=$TESTDIR/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/src/${PROG_NAME}.original.c
export ORIGIN_BIN=$BENCHMARK_DIR/bin/origin.noafl.out
export REPAIRED_SRC=$(realpath $1)
export REPAIRED_BIN=$BENCHMARK_DIR/bin/repaired.noafl.out
export TIMEOUT="-k 0.5 0.5"
export LOG=$BENCHMARK_DIR/log.txt
export INDIR=$BENCHMARK_DIR/test/n10train

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
  rm -f $REPAIRED_BIN $LOG temp
  return 0
}

function desired() {
  #echo 0
  { timeout $TIMEOUT $REPAIRED_BIN 2 5 3 < $INDIR/dat541 >&$LOG; } 
  $ORIGIN_BIN 2 5 3 < $INDIR/dat541 >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  #echo 1
  { timeout $TIMEOUT $REPAIRED_BIN 0 4 0 < $INDIR/tc.22  >&$LOG; } 
  $ORIGIN_BIN 0 4 0 < $INDIR/tc.22 >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  #echo 2
  { timeout $TIMEOUT $REPAIRED_BIN 0 0 0 < $INDIR/tc.99 >&$LOG ;} 
  $ORIGIN_BIN  0 0 0 < $INDIR/tc.99 >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  # cat temp
  #echo 3
  { timeout $TIMEOUT $REPAIRED_BIN 5 0 4 < $INDIR/dat217  >&$LOG  ;} 
  $ORIGIN_BIN 5 0 4 < $INDIR/dat217  >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  #echo 4
  { timeout $TIMEOUT $REPAIRED_BIN 10  9  8  < $INDIR/lu56    >&$LOG ;}
  $ORIGIN_BIN 10  9  8  < $INDIR/lu56  >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  # cat temp
  #echo 5
  { timeout $TIMEOUT $REPAIRED_BIN 5  4  9  < $INDIR/lu159   >&$LOG  ;} 
  $ORIGIN_BIN 5  4  9  < $INDIR/lu159  >&temp
  diff -q $LOG temp >&/dev/null || exit 1 
  #echo 6
  { timeout $TIMEOUT $REPAIRED_BIN 3 4 1 < $INDIR/tc.65  >&$LOG  ;}  
  $ORIGIN_BIN 3 4 1 < $INDIR/tc.65  >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  #echo 7
  { timeout $TIMEOUT $REPAIRED_BIN 1 1 < $INDIR/ad.2 >&$LOG    ;} 
  $ORIGIN_BIN 1 1 < $INDIR/ad.2  >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  #echo 8
  { timeout $TIMEOUT $REPAIRED_BIN 2 5 1 < $INDIR/dat028  >&$LOG  ;} 
  $ORIGIN_BIN 2 5 1 < $INDIR/dat028  >&temp
  diff -q $LOG temp >&/dev/null || exit 1
  #echo 9
  { timeout $TIMEOUT $REPAIRED_BIN 1  6  7  < $INDIR/lu295  >&$LOG ;}  
  $ORIGIN_BIN 1  6  7  < $INDIR/lu295 >&temp
  diff -q $LOG temp >&/dev/null || exit 1
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