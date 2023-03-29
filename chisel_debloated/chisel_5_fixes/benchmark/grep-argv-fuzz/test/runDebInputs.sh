#!/bin/bash

export BENCHMARK_NAME=grep-argv-fuzz
export PROG_NAME=${BENCHMARK_NAME%%-*}
export BENCHMARK_DIR=$TESTDIR/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/src/${PROG_NAME}.original.c
export ORIGIN_BIN=$BENCHMARK_DIR/bin/origin.noafl.out
export REPAIRED_SRC=$(realpath $1)
export REPAIRED_BIN=$BENCHMARK_DIR/bin/repaired.noafl.out
export TIMEOUT="-k 0.8 0.8"
export LOG=$BENCHMARK_DIR/log.txt

source $TESTDIR/test-base.sh

# override the compile function in test-base.sh
function compile() {
  before_compile

  if [[ $1 == "-fsanitize=memory -fsanitize-memory-use-after-dtor" ]]; then
    CFLAGS="-w $1 -lpcre"
  else
    CFLAGS="-w $1 -D __msan_unpoison(s,z) -lpcre"
  fi
  $CC $NOAFL_SRC $CFLAGS -o $ORIGIN_BIN >&$LOG || exit 1
  $CC $NOAFL_REPAIRED_SRC $CFLAGS -o $REPAIRED_BIN >&$LOG || exit 1
  return 0
}

function clean() {
  rm -f $REPAIRED_BIN $LOG file log2
  rm -rf gt-*
  rm -f lists.txt
  return 0
}

function desired() {
  { timeout $TIMEOUT $REPAIRED_BIN "a" input2; } >&$LOG || exit 1
  $ORIGIN_BIN "a" input2 >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "a" -v -H -r input_dir; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "a" -v -H -r input_dir; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -h -r input_dir; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "1" -h -r input_dir; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -n "si" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -n "si" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -l; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "1" -r input_dir -l; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -L; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "1" -r input_dir -L; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "randomtext" -r input_dir -c; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "randomtext" -r input_dir -c; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -o [r][a][n][d]* input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -o [r][a][n][d]* input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -q; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "1" -r input_dir -q; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -s; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "1" -r input_dir -s; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -v "a" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -v "a" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -i "Si" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -i "Si" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -w "Si" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -w "Si" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -x "Don't" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -x "Don't" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -F "randomtext*" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -F "randomtext*" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -E "randomtext*" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -E "randomtext*" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "ye " input; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "ye " input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "cold" input; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN "cold" input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "not exist" input; } >&$LOG
  { timeout $TIMEOUT $ORIGIN_BIN "not exist" input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN ^D input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN ^D input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN .$ input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN .$ input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN \^ input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN \^ input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN \^$ input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN \^$ input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN ^[AEIOU] input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN ^[AEIOU] input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN ^[^AEIOU] input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN ^[^AEIOU] input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -E "free[^[:space:]]+" input2; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -E "free[^[:space:]]+" input2; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' input; } >&$LOG || exit 1
  { timeout $TIMEOUT $ORIGIN_BIN -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' input; } >&log2
  diff -q $LOG log2 >&/dev/null || exit 1
  return 0
}

function desired_disaster() {
  case $1 in
  memory)
    MESSAGE="memory exhausted"
    ;;
  file)
    MESSAGE="write error"
    ;;
  *)
    return 1
    ;;
  esac

  { timeout $TIMEOUT $REPAIRED_BIN "a" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "a" -v -H -r input_dir; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -h -r input_dir; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -n "si" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -l; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -L; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "randomtext" -r input_dir -c; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -o [r][a][n][d]* input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -q; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "1" -r input_dir -s; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -v "a" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -i "Si" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -w "Si" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -x "Don't" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -F "randomtext*" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -E "randomtext*" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "ye " input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "cold" input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN "not exist" input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN ^D input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN .$ input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN \^ input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN \^$ input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN ^[AEIOU] input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN ^[^AEIOU] input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -E "free[^[:space:]]+" input2; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  { timeout $TIMEOUT $REPAIRED_BIN -E '\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)' input; } >&$LOG
  grep -q -E "$MESSAGE" $LOG || exit 1

  return 0
}

function infinite() {
  r=$1
  /bin/grep "Sanitizer" $LOG >&/dev/null && return 0
  if [[ $r -eq 124 ]]; then # timeout
    return 0
  else
    return 1
  fi
}

function outputcheckerror() {
  r="$1"
  if grep -q -E "$r" $LOG; then
    return 1
  fi
  return 0
}

OPT=("-G" "--basic-regexp" "-P" "--perl-regexp" "-e" "-z" "--null-data"
  "-V" "--version" "--help" "-b" "--byte-offset" "--line-buffered"
  "-a" "--text" "-I" "-R" "--dereference-recursive"
  "-T" "--initial-tab" "-Z" "--null" "-U"
  "-binary" "-u" "--unix-byte-offsets")
function undesired() {
  { timeout $TIMEOUT $REPAIRED_BIN; } >&$LOG
  err=$?
  outputcheckerror "OPTION" && exit 1
  crash $err && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN notexist; } >&$LOG # infite loop
  infinite $r && exit 1
  { $timeout $REPAIRED_BIN notexist1 notexit2 notexist3; } >&$LOG
  err=$?
  outputcheckerror "No such file or directory" && exit 1
  crash $err && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN "weird"; } >&$LOG
  infinite $r && exit 1
  # cheap
  for opt in ${OPT[@]}; do
    { timeout 0.2 $REPAIRED_BIN a $opt input; } >&$LOG
    crash $? && exit 1
  done
  # expensive
  { timeout 0.5 $REPAIRED_BIN a -f input; } >&$LOG
  crash $? && exit 1

  { timeout $TIMEOUT $REPAIRED_BIN a -A input; } >&$LOG
  outputcheckerror "input: invalid context length argument" && exit 1
  crash $err && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN a -B input; } >&$LOG
  outputcheckerror "input: invalid context length argument" && exit 1
  crash $err && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN a -C input; } >&$LOG
  outputcheckerror "input: invalid context length argument" && exit 1
  crash $err && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN a -m input; } >&$LOG
  outputcheckerror "invalid max count" && exit 1
  crash $err && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN a -d input; } >&$LOG
  outputcheckerror "invalid argument" && exit 1
  crash $err && exit 1
  { timeout $TIMEOUT $REPAIRED_BIN a -D input; } >&$LOG
  outputcheckerror "unknown devices method" && exit 1
  crash $err && exit 1

  export srcdir=$BENCHMARK_HOME/tests
  export abs_top_srcdir=$BENCHMARK_HOME
  export PATH_BK=$PATH
  export PATH="$(pwd):$PATH"
  for t in $(find tests/ -maxdepth 1 -perm -100 -type f); do
    { timeout 1 $t; } >&$LOG
    crash $? && exit 1
  done
  export PATH=$PATH_BK
  return 0
}

main
