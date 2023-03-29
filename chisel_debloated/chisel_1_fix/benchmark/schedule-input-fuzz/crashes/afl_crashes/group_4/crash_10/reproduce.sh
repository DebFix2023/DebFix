#!/bin/bash

BIN_FILE=$(realpath $1)

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

source $SCRIPT_DIR/../../reproduce-base.sh

# go to parent folder to use "train_input" folder
cd $SCRIPT_DIR/../..
# get arguments for fuzzing seed 4
args=$( getReproduceArgs 4 )
timeout -k 0.5 0.5 $BIN_FILE $args < $SCRIPT_DIR/crash_input
err=$?
(( $err == 0 )) || exit $err
