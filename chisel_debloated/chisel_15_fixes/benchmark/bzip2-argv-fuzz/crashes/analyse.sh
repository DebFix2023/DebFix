#!/bin/bash
valid_count=0
total=0
crash_count=`ls afl_crashes | wc -l `
for (( i=0; i<=$crash_count; i++ ));
do
    echo "Crash $i: "
    summary=afl_crashes/crash_$i/OverallSummary
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
        # for conv_dir in `ls afl_crashes/crash_$i/convergences/`;
        #  do
        #      echo "      $conv_dir:"
        #      cat afl_crashes/crash_$i/convergences/$conv_dir/summary
        #      read n
        #      echo 
        #  done
    fi
    echo "Next Crash:"
    read m
  
    echo 
    echo 
done

echo "Valid Count : $valid_count"
echo "Total : $total"
