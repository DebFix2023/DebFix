#!/bin/bash

BIN_FILE=$(realpath $1)

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

source $SCRIPT_DIR/../../reproduce-base.sh

# go to parent folder to use "train_input" folder
cd $SCRIPT_DIR/../..
# fuzzing results generated from input_0
prepare 17
timeout -k 0.5 0.5 $BIN_FILE < $SCRIPT_DIR/crash_input
err=$?
clean
(( $err == 0 )) || exit $err
