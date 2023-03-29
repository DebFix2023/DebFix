#!/bin/bash

export BENCHMARK_NAME=tcas-argv-fuzz
export PROG_NAME=${BENCHMARK_NAME%%-*}
export BENCHMARK_DIR=$TESTDIR/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/src/${PROG_NAME}.original.c
export ORIGIN_BIN=$BENCHMARK_DIR/bin/origin.noafl.out
export REPAIRED_SRC=$(realpath $1)
export REPAIRED_BIN=$BENCHMARK_DIR/bin/repaired.noafl.out
export TIMEOUT="-k 0.5 0.5"
export LOG=$BENCHMARK_DIR/log.reduced

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
  { timeout $TIMEOUT $REPAIRED_BIN 990 1 1 9671 622 173 2 0 766 0 2 1 >&$LOG; } 
  $ORIGIN_BIN 990 1 1 9671 622 173 2 0 766 0 2 1 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 1
  { timeout $TIMEOUT $REPAIRED_BIN 700 1 1 575 415 1 0 795 796 2 2 0  >&$LOG; } 
  $ORIGIN_BIN 700 1 1 575 415 1 0 795 796 2 2 0  >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 2
  { timeout $TIMEOUT $REPAIRED_BIN 65 0 1 300 700 424 2 600 500 1 1 1 >&$LOG ;} 
  $ORIGIN_BIN  65 0 1 300 700 424 2 600 500 1 1 1 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 3
  { timeout $TIMEOUT $REPAIRED_BIN 0 1 -1 0 388 737 3 0 470 0 2 1 >&$LOG  ;} 
  $ORIGIN_BIN 0 1 -1 0 388 737 3 0 470 0 2 1 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 4
  { timeout $TIMEOUT $REPAIRED_BIN 775 1 1 1142  411 1704 1  540  500 1 0 1 >&$LOG ;}
  $ORIGIN_BIN 775 1 1 1142  411 1704 1  540  500 1 0 1 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 5
  { timeout $TIMEOUT $REPAIRED_BIN 698 1 0 2071 59 307 0 849 904 1 2 0 >&$LOG  ;} 
  $ORIGIN_BIN 698 1 0 2071 59 307 0 849 904 1 2 0 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1 
  # cat log.txt
  echo 6
  { timeout $TIMEOUT $REPAIRED_BIN 804 0 1 1933  194 1176 0  640  639 1 0 0 >&$LOG  ;}  
  $ORIGIN_BIN 804 0 1 1933  194 1176 0  640  639 1 0 0 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt 
  echo 7
  { timeout $TIMEOUT $REPAIRED_BIN 826 0 0 3619  369 2109 1  741  639 0 1 1 >&$LOG    ;} 
  $ORIGIN_BIN 826 0 0 3619  369 2109 1  741  639 0 1 1 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 8
  { timeout $TIMEOUT $REPAIRED_BIN  643 1 1 5514  362 2288 1  400  741 1 1 0 >&$LOG  ;} 
  $ORIGIN_BIN  643 1 1 5514  362 2288 1  400  741 1 1 0 >&log.txt
  diff -q $LOG log.txt >&/dev/null || exit 1
  # cat log.txt
  echo 9
  { timeout $TIMEOUT $REPAIRED_BIN 675 0 0 300 0 424 5 600 500 1 1 1 >&$LOG ;}  
  $ORIGIN_BIN 675 0 0 300 0 424 5 600 500 1 1 1 >&log.txt
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