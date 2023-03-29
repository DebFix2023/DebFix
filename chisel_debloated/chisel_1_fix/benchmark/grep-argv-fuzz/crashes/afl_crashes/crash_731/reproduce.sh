#!/bin/bash

BIN_FILE=$(realpath $1)

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

# go to parent folder to use "train_input" folder
cd $SCRIPT_DIR/../..
timeout -k 0.5 0.5 $BIN_FILE < $SCRIPT_DIR/crash_input
