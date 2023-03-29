#!/bin/bash
for (( i=0; i<=9; i++ ));
do
    echo "Group $i: "
    for crash_dir in `ls group_$i`;
    do
	    echo $crash_dir
     	cat group_$i/$crash_dir/OverallSummary
    # for conv_dir in `ls afl_crashes/crash_$i/convergences/`;
    #  do
    #      echo "      $conv_dir:"
    #      cat afl_crashes/crash_$i/convergences/$conv_dir/summary
    #      read n
    #      echo 
    #  done
     echo "Next Crash:"
     read m
    done 
    echo "Next Group"
    read n
    echo 
    echo 
done

