#!/bin/bash
PROGNAME=$1
CRASH_ID=$2
PROGLIST=("bzip2-argv-fuzz" "bzip2-input-fuzz" "chown-argv-fuzz" "date-argv-fuzz" "grep-argv-fuzz" "grep-input-fuzz" 
"gzip-argv-fuzz" "gzip-input-fuzz" "mkdir-argv-fuzz" "rm-argv-fuzz" "schedule-input-fuzz" "sort-argv-fuzz" 
"sort-input-fuzz" "tar-argv-fuzz" "tar-input-fuzz" "tcas-argv-fuzz" "totinfo-input-fuzz" "uniq-argv-fuzz" "uniq-input-fuzz")


if [ -z $PROGNAME ] || [ -z $CRASH_ID ] ; then
    echo "Missing arguments!"
    exit 1
fi

for PROG in ${PROGLIST[@]}; do
    if [ ${PROGNAME} = $PROG ]
    then 
        legal_prog=1
    fi
done

if [ ${legal_prog} = 1 ]
then 
    CRASH_DIR=$PROGNAME/crash_$CRASH_ID

    PROGNAME_PRE=${PROGNAME%-*-*}

    # Create the workdir for a program
    mkdir -p $PROGNAME/src/origin $PROGNAME/src/reduced
    touch $PROGNAME/src/origin/$PROGNAME_PRE.origin.c $PROGNAME/src/reduced/$PROGNAME_PRE.reduced.c 
    mkdir -p $PROGNAME/bin
    touch $PROGNAME/bin/.gitkeep
    cp schedule-input-fuzz/compile.sh $PROGNAME/compile.sh
    cp schedule-input-fuzz/run_cov.sh $PROGNAME/run_cov.sh
    cp schedule-input-fuzz/getprog_cov.sh $PROGNAME/getprog_cov.sh

    # Create the workdir for a single crash case
    mkdir -p $CRASH_DIR/cov_src/origin/ $CRASH_DIR/cov_src/reduced/ $CRASH_DIR/cov_src/fixed/ 
    touch $CRASH_DIR/cov_src/origin/.gitkeep $CRASH_DIR/cov_src/reduced/.gitkeep $CRASH_DIR/cov_src/fixed/$PROGNAME_PRE.fixed.c

    mkdir -p $CRASH_DIR/input/ 
    touch $CRASH_DIR/input/.gitkeep 


    mkdir -p $CRASH_DIR/testscript/
    cp schedule-input-fuzz/crash_0/testscript/input_0 $CRASH_DIR/testscript/input_$CRASH_ID
    mkdir -p $CRASH_DIR/callgraph
    touch $CRASH_DIR/callgraph/.gitkeep

    cp crash_info_template.txt $CRASH_DIR/crash_info.txt
else
    echo -e "Error: wrong PROGNAME!"
    echo -e "Please choose from following progs: ${PROGLIST[@]}"
fi