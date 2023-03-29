#!/bin/bash

export BENCHMARK_NAME=bzip2-input-fuzz
export PROG_NAME=${BENCHMARK_NAME%%-*}
export BENCHMARK_DIR=$TESTDIR/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/src/${PROG_NAME}.original.c
export ORIGIN_BIN=$BENCHMARK_DIR/bin/origin.noafl.out
export REPAIRED_SRC=$(realpath $1)
export REPAIRED_BIN=$BENCHMARK_DIR/bin/repaired.noafl.out
export TIMEOUT="-k 1 1"
export LOG=$BENCHMARK_DIR/log.txt

source $TESTDIR/test-base.sh

function clean() {
  rm -rf -- *.bz2
  rm -rf $LOG $REPAIRED_BIN *.bz2 *.rb2 *.tst log foo* bar*
  rm -f \(*\)
  return 0
}

function desired() {
  # -c
  { timeout $TIMEOUT $REPAIRED_BIN -c <references/sample1.ref >sample1.rb2; } &>$LOG || exit 1
  cmp references/sample1.bz2.ref sample1.rb2 >&/dev/null || exit 1
  # -d
  { timeout $TIMEOUT $REPAIRED_BIN -d <references/sample1.bz2.ref >sample1.tst; } &>$LOG || exit 1
  cmp references/sample1.ref sample1.tst >&/dev/null || exit 1
  # -f
  echo "1234" >foo
  { timeout $TIMEOUT $REPAIRED_BIN -f foo; } >&$LOG || exit 1
  # -t
  echo "1234" >foo
  { timeout $TIMEOUT $REPAIRED_BIN -t foo; } >&$LOG && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN -t references/sample1.bz2.ref; } >&$LOG || exit 1
  # -k
  rm foo*
  echo "1234" >foo
  { timeout $TIMEOUT $REPAIRED_BIN -k foo; } >&$LOG || exit 1
  test -f foo -a -f foo.bz2 || exit 1
  return 0
}

function default_disaster_mem() {
  # -c
  { timeout $TIMEOUT $REPAIRED_BIN -c <references/sample1.ref >sample1.rb2; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  # -d
  { timeout $TIMEOUT $REPAIRED_BIN -d <references/sample1.bz2.ref >sample1.tst; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  # -f
  echo "1234" >foo
  { timeout $TIMEOUT $REPAIRED_BIN -f foo; } >&$LOG
  grep -q -E "$1" $LOG || exit 1
  # -t
  echo "1234" >foo
  { timeout $TIMEOUT $REPAIRED_BIN -t foo; } >&$LOG
  grep -q -E "$1" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -t references/sample1.bz2.ref; } >&$LOG
  grep -q -E "$1" $LOG || exit 1
  # -k
  rm foo*
  echo "1234" >foo
  { timeout $TIMEOUT $REPAIRED_BIN -k foo; } >&$LOG
  grep -q -E "$1" $LOG || exit 1
  return 0
}

function default_disaster_file() {
  # -c
  { timeout $TIMEOUT $REPAIRED_BIN -c <references/sample1.ref >sample1.rb2; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  # -d
  { timeout $TIMEOUT $REPAIRED_BIN -d <references/sample1.bz2.ref >sample1.tst; } &>$LOG
  grep -q -E "$1" $LOG || exit 1
  return 0
}

OPT1=("-h")
OPT2=("-z" "-q" "-v" "-s" "-1" "-2" "-3" "-4" "-5" "-6" "-7" "-8" "-9")
OPT3=("-L" "-V")
function undesired() {
  { timeout $TIMEOUT $REPAIRED_BIN $(cat crash_input); } &>$LOG
  crash $? && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN; } 2>$LOG
  crash $? && exit 1

  # keeping the output in the following cases:

  { timeout $TIMEOUT $REPAIRED_BIN notexist; } 2>$LOG
  crash $? && exit 1
  diff -q references/side0 $LOG >&/dev/null || exit 1
  rm -rf log

  for opt in ${OPT1[@]}; do
    { timeout $TIMEOUT $REPAIRED_BIN $opt; } 2>$LOG
    crash $? && exit 1
    diff -q references/side1 $LOG >&/dev/null || exit 1
    rm -rf log*
  done

  for opt in ${OPT2[@]}; do
    { timeout $TIMEOUT $REPAIRED_BIN $opt; } 2>$LOG
    crash $? && exit 1
    diff -q references/side2 $LOG >&/dev/null || exit 1
    rm -rf log*
  done

  for opt in ${OPT3[@]}; do
    { timeout $TIMEOUT $REPAIRED_BIN $opt; } 2>$LOG
    crash $? && exit 1
    diff -q references/side3 $LOG >&/dev/null || exit 1
    rm -rf log*
  done

  echo "1234" >foo
  $REPAIRED_BIN -c <foo >foo.bz2 || exit 1
  for opt in ${OPT2[@]}; do
    { timeout $TIMEOUT $REPAIRED_BIN -d $opt <foo.bz2 >sample1.tst; } 2>$LOG
    crash $? && exit 1
    { timeout $TIMEOUT $REPAIRED_BIN -c $opt <references/sample1.ref >sample1.rb2; } 2>$LOG
    crash $? && exit 1
  done

  return 0
}

function desired_disaster() {
  case $1 in
  memory)
    MESSAGE="couldn't allocate enough memory"
    default_disaster_mem "$MESSAGE" || exit 1
    ;;
  file)
    MESSAGE="Bad file descriptor"
    default_disaster_file "$MESSAGE" || exit 1
    ;;
  *)
    return 1
    ;;
  esac
  return 0
}

main
