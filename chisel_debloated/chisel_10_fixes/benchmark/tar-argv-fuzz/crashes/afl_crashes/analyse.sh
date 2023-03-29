#!/bin/bash
valid_count=0
validFixesCount=0
total=0
total_time=0
valid_total_time=0
linesAdded=0
rm addBackLineFile
for ((group_num=0; group_num<=22; group_num++))
do
    crash_count=`ls group_$group_num | wc -l `
    for (( i=0; i<=$crash_count; i++ ));
    do
        echo "Crash $i: "
        if [ -f group_$group_num/crash_$i/OverallSummary ]
        then 
            summary=group_$group_num/crash_$i/OverallSummary
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
                    echo "Valid Count : $valid_count"
                    echo "Total : $total"
                    convSummary=group_$group_num/crash_$i/convergences/conv_1*/summary
                    grep "Valid   " $convSummary | while read line
                    do 
                        addBackLine=`echo $line | awk '{print $(NF-1)}'`
                        echo $addBackLine >> addBackLineFile
                    done
                fi
            fi
            echo "Next Crash:"
            read m
        fi
        echo 
        echo 
    done
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

    