#!/bin/bash

BIN_FILE=$1

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

timeout -k 0.5 0.5 $BIN_FILE < $SCRIPT_DIR/crash_input
