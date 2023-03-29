#!/bin/bash

# some runDebInputs.sh will depend on the current directory
cd $BENCHMARK_DIR/test

function crash() {
  retval=$1
  log=$2
  # crash detected by shell
  if [[ $retval -eq 124 ]]; then # timeout
    return 0
  elif [[ $retval -gt 128 ]]; then
    return 0
  fi
  # crash detected by sanitizer
  echo $log | grep "Sanitizer" >&/dev/null && return 0
  return 1
}

function before_compile() {
  export NOAFL_SRC=$SRC
  export NOAFL_REPAIRED_SRC=$REPAIRED_SRC
  grep "#include \"argv-fuzz-inl.h\"" $SRC
  if [ $? == 0 ]
  then 
    export NOAFL_SRC=$(dirname $SRC)/$PROG_NAME.original.noafl.c
    export NOAFL_REPAIRED_SRC=$(dirname $REPAIRED_SRC)/$PROG_NAME.repaired.noafl.c
    sed '/^#include \"argv-fuzz-inl.h\"/d' $SRC > $NOAFL_SRC
    sed -i '/AFL_INIT_SET0.*/d' $NOAFL_SRC
  
    sed '/^#include \"argv-fuzz-inl.h\"/d' $REPAIRED_SRC > $NOAFL_REPAIRED_SRC
    sed -i '/AFL_INIT_SET0.*/d' $NOAFL_REPAIRED_SRC 
  fi
}

function compile() {
  before_compile

  case $COV in
  1) CFLAGS="-w -fprofile-arcs -ftest-coverage --coverage $BENCHMARK_CFLAGS" ;;
  *) CFLAGS="-w $1 $BENCHMARK_CFLAGS" ;;
  esac
  $CC $NOAFL_SRC $CFLAGS -I$(dirname $SRC) -o $ORIGIN_BIN  >&/dev/null || exit 1
  $CC $NOAFL_REPAIRED_SRC $CFLAGS -I$(dirname $SRC) -o $REPAIRED_BIN  >&/dev/null || exit 1
  return 0
}

sanitizers=("-fsanitize=cfi -flto -fvisibility=hidden" "-fsanitize=address"
  "-fsanitize=memory -fsanitize-memory-use-after-dtor"
  "-fno-sanitize-recover=undefined,nullability"
  "-fsanitize=leak")

environments=("memory" "file")
environment_libs=("-L$TESTDIR/lib -lmemwrap" "-L$TESTDIR/lib -lfilewrap")

function main() {
  for ((i = 0; i < ${#sanitizers[@]}; i++)); do
    clean
    compile "${sanitizers[$i]}" || exit 1
    desired "${sanitizers[$i]}" || exit 1
    undesired || exit 1
    clean
  done
  for ((i = 0; i < ${#environments[@]}; i++)); do
    clean
    compile "${environment_libs[$i]}" || exit 1
    desired_disaster "${environments[$i]}" || exit 1
    clean
  done
}
