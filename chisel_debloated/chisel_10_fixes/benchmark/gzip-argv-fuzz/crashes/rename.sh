#!/bin/bash
crash_count=300
j=0
for (( i=0; i<=$crash_count; i++ ));
do
    if [ -d afl_crashes/crash_$i ]
    then
        echo "mv afl_crashes/crash_$i afl_crashes/crash_$j"
        read command
        #  if [ $command == 'y' ]
        #  then 
            mv afl_crashes/crash_$i afl_crashes/crash_$j
            (( j++ ))
        #  fi
    fi
done
