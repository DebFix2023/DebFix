#!/bin/bash
PROGNAME=$1
CRASH_ID=$2
CURRDIR=$(pwd)
TYPE=$3


if [ -z $PROGNAME ] || [ -z $CRASH_ID ] || [ -z $TYPE ]; then
    echo "Missing arguments!"
    exit 1
fi

# cd ../debaug/$BENCH/$PROGNAME || exit 1


LINE_PRINTER_BIN=${DEBAUG_DIR}/bin/startandendlineprinter
REMOVER_BIN=${DEBAUG_DIR}/bin/gcovbasedcoderemover
MERGE_BIN=${DEBAUG_DIR}/bin/gcovbasedcoveragemerger

#Generate line file
if [ ! -f line.$TYPE.txt ]; then
    ${LINE_PRINTER_BIN} src/$TYPE/$PROGNAME.$TYPE.c >line.$TYPE.txt
fi

BIN=$CURRDIR/bin/$TYPE.out

#Compile with instrumentation
./compile.sh $CURRDIR/src/$TYPE/$PROGNAME.$TYPE.c $BIN "-fprofile-instr-generate -fcoverage-mapping"

GCOVDIR=$CURRDIR/crash_$CRASH_ID/gcov/$TYPE

#Clean old gcov files
if [ ! -d $GCOVDIR ]; then
    mkdir -p $GCOVDIR
else
    rm -fr $GCOVDIR/*
fi

#Use a tmp directory for running
if [ ! -d $CURRDIR/tmp ]; then
    mkdir $CURRDIR/tmp
else
    chmod 755 -R $CURRDIR/tmp
    rm -fr $CURRDIR/tmp/*
fi
cd $CURRDIR/tmp

GCOV_ANAL_BIN=${DEBAUG_DIR}/bin/gcovanalyzer
LCOV2GCOV_BIN=${DEBAUG_DIR}/bin/lcov2gcov

produce_gcov_file () {
    llvm-profdata merge -o $PROGNAME.$TYPE.profdata default.profraw
    llvm-cov export -format=lcov $BIN -instr-profile=$PROGNAME.$TYPE.profdata $CURRDIR/src/$TYPE/$PROGNAME.$TYPE.c >$PROGNAME.$TYPE.lcov
    ${LCOV2GCOV_BIN} $PROGNAME.$TYPE.lcov >$PROGNAME.$TYPE.gcov
    ${GCOV_ANAL_BIN} $PROGNAME.$TYPE.gcov getbcov >$1
}

CRASH_DIR=$CURRDIR/crash_$CRASH_ID

OUTDIR=$CRASH_DIR/output.instru/$TYPE/${CRASH_ID}_cov
TIMEOUT=30
INDIR=$CRASH_DIR/input

#Clean old output files
if [ ! -d $OUTDIR ]; then
    mkdir -p $OUTDIR
else
    rm -fr $OUTDIR/*
fi


#Run tests
INSTRU=true
for testf in $CRASH_DIR/testscript/*; do
    testfname=$(basename ${testf})
    gcovfname=$GCOVDIR/crash_${CRASH_ID}_cov

    ###########
    #echo "${testf} $BIN $OUTDIR $TIMEOUT $INDIR $INSTRU"
    ###########
    ${testf} $BIN $OUTDIR $TIMEOUT $INDIR $INSTRU

    #Create gcov report
    if [ -f default.profraw ]; then
	produce_gcov_file ${gcovfname}

	#Sometimes, producing a valid gcov would fail.
	#When this happens, try running the test again.
	if [ ! -f ${gcovfname} ] || ! grep -q '[^[:space:]]' ${gcovfname}; then
	    ${testf} $BIN $OUTDIR $TIMEOUT $INDIR $INSTRU
	    produce_gcov_file ${gcovfname}
	fi
    else
	    echo "No profraw file generated for ${inputset}/${testfname} by llvm-cov."
    fi

    #Report failure (if any)
    if [ ! -f ${gcovfname} ] || ! grep -q '[^[:space:]]' ${gcovfname}; then
	    echo "No .gcov file generated for testscript/${testfname} by llvm-cov."
    fi
    
    cd $CURRDIR

    #Clean
    chmod 755 -R $CURRDIR/tmp
    rm -fr $CURRDIR/tmp
done


#Remove old result
if [ ! -d $CRASH_DIR/cov_src/$TYPE ]; then
    mkdir -p $CRASH_DIR/cov_src/$TYPE/
else
    rm $CRASH_DIR/cov_src/$TYPE/*
fi

#Merge all coverage files into one
if [ ! -d $GCOVDIR ]; then
    echo "Missing $GCOVDIR."
    exit 1
fi
${MERGE_BIN} binary $GCOVDIR/crash_${CRASH_ID}_cov > $GCOVDIR/crash_${CRASH_ID}_cov_merged

#Generate cov-based code
${REMOVER_BIN} src/$TYPE/$PROGNAME.$TYPE.c line.$TYPE.txt $GCOVDIR/crash_${CRASH_ID}_cov_merged > $CRASH_DIR/cov_src/$TYPE/$PROGNAME.$TYPE.nodce.c


#Remove dead code
${DEBAUG_DIR}/bin/debdce $CRASH_DIR/cov_src/$TYPE/$PROGNAME.$TYPE.nodce.c $CRASH_DIR/cov_src/$TYPE/$PROGNAME.$TYPE.c



#Clean intermediates
chmod 755 -R $CURRDIR/debop-out
rm -fr $CURRDIR/debop-out

chmod 755 -R $CRASH_DIR/gcov
rm -fr $CRASH_DIR/gcov

chmod 755 -R $CRASH_DIR/output.instru
rm -fr $CRASH_DIR/output.instru

rm line.*.txt
