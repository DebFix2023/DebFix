#!/bin/bash
crash_count=`ls . | wc -l`
file_list=()
for (( i=0; i<$crash_count; i++ ));
do
    callseqDir=crash_$i/callseq
    trace=$callseqDir/date.original.trace
    if [ -f $trace ]
    then 
        grep "STMT_EXEC;;" $trace | grep "[0-9]*" -o > stmts
        sort -n stmts | uniq > $callseqDir/coveredLines_$i
        file_list[i]=$callseqDir/coveredLines_$i
    fi
done

for (( i=0; i<$crash_count; i++ ));
do
    file_i=crash_$i/callseq/coveredLines_$i
    if [ -f $file_i ]
    then 
        for (( j=$i+1; j<$crash_count; j++ ));
        do
            file_j=crash_$j/callseq/coveredLines_$j
            if [ -f $file_j ]
            then 
                diff -q $file_i $file_j &> /dev/null
                if [ $? == 0 ] # no difference
                then 
                    echo "Crash_$i and Crash_$j are the same."
                    rm -rf crash_$j
                fi
            fi
        done
    fi
done


