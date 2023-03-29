#!/bin/bash
group_begin_num=$1
group_end_num=$2
begin_num=$3
end_num=$4
if [ ! $TOOL_DIR ] || [ ! $TESTDIR ]
then 
    echo "Please set TOOL_DIR and TESTDIR first."
    exit 1
fi

cur_dir=$(pwd)
compile_script=compile.sh
ORIG_BIN=bin/original.out
DEB_BIN=bin/debloated.out
bash $compile_script src/rm.debloated.c $DEB_BIN
bash $compile_script src/rm.original.c  $ORIG_BIN 

if [ ! $group_begin_num ] 
then 
    group_begin_num=0
fi

if [ ! $group_end_num ] 
then 
    group_end_num=8
fi

group_end_num=$(( $group_end_num<8?$group_end_num:8 ))

for (( group_id=$group_begin_num; group_id <= $group_end_num; group_id++));
do
    max_num=`ls crashes/afl_crashes/group_$group_id | wc -l`

    if [ ! $begin_num ] 
    then 
        begin_num=0
    fi
    if [ ! $end_num ]
    then 
        end_num=max_num
    fi
    end=$(( $end_num<$max_num?$end_num:$max_num ))
    for ((i=$begin_num; i < $end; i++));
    do
        crash_dir=crashes/afl_crashes/group_$group_id/crash_$i
        testscript=$crash_dir/reproduce.sh
        chmod u+x $testscript
        $testscript $ORIG_BIN 
        echo $? | grep 13[0-9]
        CHECK_ORIGIN_CRASH=$?
        if [ $CHECK_ORIGIN_CRASH -eq 0 ] 
        then 
            echo "The original program crashed." > $crash_dir/report
            continue;
        fi

        $testscript $DEB_BIN 
        echo $? | grep 13[0-9]
        CHECK_DEB_CRASH=$?
        if [ $CHECK_DEB_CRASH -ne 0 ] 
        then 
            echo "The debloated program did not crash." > $crash_dir/report
            continue;
        fi

        cd $cur_dir
        bash -x $TOOL_DIR/run.sh $cur_dir/src/rm.original.c $cur_dir/src/rm.debloated.c $crash_dir $crash_dir/reproduce.sh $cur_dir/test/runDebInputs.sh $cur_dir/compile.sh
        cd $cur_dir
    done
done