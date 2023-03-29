#!/bin/bash

SRC=$1
BIN=$2
flags=$3

if [ -z $4 ]; then
    COMPILER=clang #Default
else
    COMPILER=$4
fi

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

$COMPILER -I$SCRIPT_DIR/src ${flags} -w -o $BIN $SRC -D "__msan_unpoison(s,z)" -lpcre
