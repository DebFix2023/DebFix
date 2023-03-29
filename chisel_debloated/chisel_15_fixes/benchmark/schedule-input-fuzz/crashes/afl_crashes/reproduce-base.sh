#!/bin/bash

# prepare testing environment
function getReproduceArgs() {
    case $1 in
    0) # $BIN 2 5 3 < $INDIR/input/dat541
        args="2 5 3"
        ;;
    1) # $BIN 0 4 0 < $INDIR/input/tc.22
        args="0 4 0"
        ;;
    2) # $BIN 5 0 4 < $INDIR/input/dat217
        args="5 0 4"
        ;;
    3) # $BIN 10  9  8  < $INDIR/input/lu56
        args="10  9  8"
        ;;
    4) # $BIN 5  4  9  < $INDIR/input/lu159
        args="5  4  9 "
        ;;
    5) # $BIN 3 4 1 < $INDIR/input/tc.65
        args="3 4 1"
        ;;
    6) # $BIN 1 1 < $INDIR/input/ad.2
        args="1 1"
        ;;
    7) # $BIN 2 5 1 < $INDIR/input/dat028
        args="2 5 1 "
        ;;
    8) # $BIN 1  6  7  < $INDIR/input/lu295
        args="1  6  7"
        ;;
    9) # $BIN 0 0 0 < $INDIR/input/tc.99
        args="0 0 0"
        ;;
    esac
    echo $args
}
