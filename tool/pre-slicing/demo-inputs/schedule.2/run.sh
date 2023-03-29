#!/bin/bash

BIN_FILE=$(realpath $1)

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

timeout 3 $BIN_FILE 2 5 3 < $SCRIPT_DIR/crash_input
