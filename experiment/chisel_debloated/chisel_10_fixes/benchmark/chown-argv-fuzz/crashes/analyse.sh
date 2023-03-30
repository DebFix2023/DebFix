#!/bin/bash
valid_count=0
validFixesCount=0
total=0
total_time=0
valid_total_time=0
linesAdded=0
crash_count=`ls afl_crashes | wc -l `
rm addBackLineFile
for (( i=0; i<=$crash_count; i++ ));
do
    echo "Crash $i: "
    summary=afl_crashes/crash_$i/OverallSummary
    if [ -f $summary ]
    then 
        ((total++))
        cat $summary
        validFixes=`cat $summary | grep "Conv. 1 " | awk '{print $(NF-1)}'`
        timeConsumed=`cat $summary | grep "Total Time" | grep [0-9]* -o`
        total_time=`expr $total_time + $timeConsumed`
        if [ $validFixes -ge 1 ]
        then 
            valid_total_time=`expr $valid_total_time + $timeConsumed`
            ((valid_count++))  

            convSummary=afl_crashes/crash_$i/convergences/conv_1*/summary
            grep "Valid   " $convSummary | while read line
            do 
                addBackLine=`echo $line | awk '{print $(NF-1)}'`
                echo $addBackLine >> addBackLineFile
            done
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

echo "================================================"
echo "Valid Count : $valid_count"
echo "Total Time for Valid Cases: $valid_total_time "
printf "Avg. Repair Time : "
printf "%.2f\n" `echo "scale=2; $valid_total_time/$valid_count" | bc -l`
echo "================================================"
echo "Total Count : $total"
echo "Total Time: $total_time"
printf "Avg. Run Time : "
printf "%.2f\n" `echo "scale=2; $total_time/$total" | bc -l`
echo "================================================"
validFixesCount=`cat addBackLineFile | wc -l`
for ((i=1; i <= $validFixesCount; i++))
do
    line=`sed -n "${i}p" addBackLineFile`
    linesAdded=`expr $linesAdded + $line`
done 
echo "validFixesCount: $validFixesCount"
printf "Avg. Added Lines : "
printf "%.2f\n" `echo "scale=2; $linesAdded/$validFixesCount" | bc -l`
echo "================================================"

