#!/bin/bash
for (( group_num=0; group_num<=22; group_num++ ))
do

    crash_count=`ls group_$group_num | wc -l`
    for (( i=0; i<=$crash_count; i++ ));
    do
        if [ -f group_$group_num/crash_$i/callseq/coveredLines* ]
        then 
            rm group_$group_num/crash_$i/callseq/coveredLines*
        fi
        if [ ! -d group_$group_num/crash_$i/callseq ]
        then 
            echo crash_$i can not be reproduced.
            ls group_$group_num/crash_$i
            # read command
            # if [ $command == 'y' ]
            # then
                echo "rm -rf group_$group_num/crash_$i"	
                rm -rf group_$group_num/crash_$i
            # fi
        fi
    done
done
