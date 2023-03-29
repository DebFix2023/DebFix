#!/bin/bash
crash_count=100
for (( i=0; i<=$crash_count; i++ ));
do
    if [ -f afl_crashes/crash_$i/callseq/coveredLines* ]
    then
        rm afl_crashes/crash_$i/callseq/coveredLines*
    fi
    if [ ! -d afl_crashes/crash_$i/callseq ]
    then
        echo crash_$i can not be reproduced.
        ls afl_crashes/crash_$i
        read command
        # if [ $command == 'y' ]
        # then
            echo "rm -rf afl_crashes/crash_$i"      
            rm -rf afl_crashes/crash_$i
        # fi
    fi
done

