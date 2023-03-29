#!/bin/bash

export BENCHMARK_NAME=tar-input-fuzz
export PROG_NAME=${BENCHMARK_NAME%%-*}
export BENCHMARK_DIR=$TESTDIR/benchmark/$BENCHMARK_NAME
export SRC=$BENCHMARK_DIR/src/${PROG_NAME}.original.c
export ORIGIN_BIN=$BENCHMARK_DIR/bin/origin.noafl.out
export REPAIRED_SRC=$(realpath $1)
export REPAIRED_BIN=$BENCHMARK_DIR/bin/repaired.noafl.out
export TIMEOUT="-k 2 2"
export LOG=$BENCHMARK_DIR/log.txt

source $TESTDIR/test-base.sh

TIMEOUT_LOW="timeout -k 0.4 0.4"

function clean() {
  chmod 777 -Rf f* b*
  rm -rf $BIN f* b*
  find . -not -path "./optional*" -not -path "./afl_crash*" \
    -not -path "./reducer-out*" \
    -not -path "./chisel-out*" \
    -not -path "./lib*" \
    -not -path "./tar-1.14.c.chisel.c" \
    -not -path "./tar-1.14.c.reduced.c" \
    -not -path "./*bin*" \
    -not -path "./status*" \
    -not -path "./*json" \
    -not -path "./tests*" -not -path "./tar*" \
    -not -path "./test*" \
    -not -path "./afl_input*" -not -path "./Makefile" -not -path "./setenv" \
    -not -path "./.config" -delete >&/dev/null
  return 0
}

function desired() {
  if [[ $1 == "-fsanitize=leak" ]]; then # ignore leak sanitizer
    return 0
  fi
  cp $REPAIRED_BIN tar
  for file in $(ls tests/tar*); do
    { timeout $TIMEOUT sh -e $file; } >&$LOG || exit 1
    rm -rf f* b*
  done
  return 0
}

function desired_disaster() {
  case $1 in
  memory)
    MESSAGE="exiting now|option|memory exhausted"
    ;;
  file)
    MESSAGE="option|exiting now|Error in writing to standard output"
    ;;
  *)
    return 1
    ;;
  esac
  cp $REPAIRED_BIN tar
  for file in $(ls tests/tar*); do
    { timeout $TIMEOUT sh -e $file; } >&$LOG
    rm -rf f* b*
    grep -q -E "$MESSAGE" $LOG || exit 1
  done
  return 0
}

OPT=("" "-R" "-w" "-j" "-T" "--null" "--exclude" "-o" "-Z" "--ungzip" "--no-wildcards"
  "--wildcards-match-slash" "--gzip" "--wildcards" "--files-from" "--backup"
  "--utc" "--index-file" "--totals" "--checkpoint"
  "--suffix" "--after-date" "--newer-mtime" "-N" "--strip-path" "-K" "--one-file-system" "-l"
  "-P" "-W" "--no-wildcards-match-slash" "--no-ignore-case" "--ignore-case" "--exclude-from"
  "--anchored" "--no-anchored" "--directory" "--label" "--use-compress-program" "-V" "--pax-option" "--posix"
  "--portability" "--old-archive" "-B" "--format" "--read-full-records" "-i" "--record-size" "-b"
  "--volno-file" "--new-volume-script" "-F" "-L"
  "-M" "--rsh-command" "--no-same-permissions" "--force-local" "--rmt-command"
  "--modification-time" "--same-owner" "--no-same-owner" "--numeric-owner" "-p" "-g"
  "--ignore-failed-read" "--occurrence" "--owner" "--group" "--mode" "--atime-preserve" "-m"
  "--remove-files" "-k" "--keep-newer-files" "--overwrite"
  "--no-overwrite-dir" "-U" "--recursive-unlink" "-S" "-O" "-G"
  "-A" "-u" "-r")
function undesired() {
  { timeout $TIMEOUT_LOW $REPAIRED_BIN; } >&$LOG
  crash $? && exit 1

  { timeout $TIMEOUT_LOW $REPAIRED_BIN notexist; } >&$LOG
  crash $? && exit 1

  { timeout $TIMEOUT_LOW $REPAIRED_BIN --help; } >&$LOG
  crash $? && exit 1

  { timeout $TIMEOUT_LOW $REPAIRED_BIN --version; } >&$LOG
  crash $? && exit 1

  for opt in ${OPT[@]}; do
    { timeout $TIMEOUT_LOW $REPAIRED_BIN $opt; } >&$LOG
    crash $? && exit 1
  done

  for c in $(find afl_crash -type f); do
    { timeout $TIMEOUT_LOW $REPAIRED_BIN $(cat $c); } >&$LOG
    crash $? && exit 1
  done
  return 0
}

main
