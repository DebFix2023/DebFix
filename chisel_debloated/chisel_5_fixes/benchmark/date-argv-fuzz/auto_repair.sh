#!/bin/bash
begin_num=$1
end_num=$2
if [ ! $TOOL_DIR ] || [ ! $TESTDIR ]
then 
    echo "Please set TOOL_DIR and TESTDIR first."
    exit 1
fi

cur_dir=$(pwd)
compile_script=compile.sh
ORIG_BIN=bin/original.out
DEB_BIN=bin/debloated.out
bash $compile_script src/date.debloated.c $DEB_BIN
bash $compile_script src/date.original.c  $ORIG_BIN 

max_num=`ls crashes/afl_crashes | wc -l`

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
    crash_dir=crashes/afl_crashes/crash_$i
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
    bash -x $TOOL_DIR/run.sh $cur_dir/src/date.original.c $cur_dir/src/date.debloated.c $crash_dir $crash_dir/reproduce.sh $cur_dir/test/runDebInputs.sh $cur_dir/compile.sh 5
    cd $cur_dir
done
