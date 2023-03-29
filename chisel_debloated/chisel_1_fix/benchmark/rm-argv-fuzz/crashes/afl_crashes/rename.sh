#!/bin/bash
for (( group_num=0; group_num<=8; group_num++ ))
do
    crash_count=50
    j=0
    for (( i=0; i<=$crash_count; i++ ));
    do
        if [ -d group_$group_num/crash_$i ]
        then
            echo "mv group_$group_num/crash_$i group_$group_num/crash_$j"
            read command
            # if [ $command == 'y' ]
            # then
                mv group_$group_num/crash_$i group_$group_num/crash_$j
                (( j++ ))
            # fi
        fi
    done
done
