#!/bin/bash
valid_count=0
total=0
for ((group_num=0; group_num<=22; group_num++))
do
    crash_count=`ls group_$group_num | wc -l `
    for (( i=0; i<=$crash_count; i++ ));
    do
        echo "Crash $i: "
        summary=group_$group_num/crash_$i/OverallSummary
        if [ -f $summary ]
        then 
            ((total++))
            cat $summary
            validFixes=`cat $summary | grep "Conv. 1 " | awk '{print $(NF-1)}'`
            if [ $validFixes -ge 1 ]
            then 
                ((valid_count++))  
                echo "Valid Count : $valid_count"
                echo "Total : $total"
            fi
            echo "Next Crash:"
            read m
        fi
        echo 
        echo 
    done
done
echo "Valid Count: $valid_count"
echo "Total: $total"
