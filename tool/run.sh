src=$(realpath $1)
debSrc=$(realpath $2)
outDir=$(realpath $3)
runScript=$(realpath $4)
runDebInputs=$(realpath $5)
compileScript=$(realpath $6)
maxFixCount=$7
if [ ! $TOOL_DIR ]
then
    echo "Please run . setenv in current directory first."
    exit 1
fi

if [ $# -lt 6 ]
then
    echo "Missing arguments."
    exit 1
fi

if [ ! $maxFixCount ]
then
    maxFixCount=10
fi

convDir=$outDir/convergences

if [ -d $convDir ]
then
    rm -rf $convDir
fi
mkdir -p $convDir


# check if a line is debloated
function checkDebloated(){
    line=$1
    grep " $line " $debloatedLineNoFile -o
}

function fixFromConvergence(){
    convLineNo=$1
    seqAfterConv=(${@:2})
    currentConvDir=$convDir/conv_${convCount}:${convLineNo}
    mkdir -p $currentConvDir

    currentConvSummary=$currentConvDir/summary
    printf "%.100s\n" "==========================================  Summary  =========================================" > $currentConvSummary
    printf "%-10s %20s %10s %15s %20s %20s\n" "No." "KeyLineNo" "Validity" "RetCode" "#AddedLines" "#RelevantLine" >> $currentConvSummary

    fixCount=0
    validFixCount=0
    for keyLine in ${seqAfterConv[@]}
    do
        checkDebloated ${keyLine}
        if [ $? -eq 1 ];
        then
            # if it isn't, then no need to add back, try next stmt.
            echo -e "Line ${keyLine} is not debloated."
        else
            # if it is, then try add it and its relevant lines back
            ((fixCount++))
            echo -e "Line ${keyLine} is debloated."
            fixDir=$currentConvDir/fix_${fixCount}:${keyLine}
            mkdir -p $fixDir
            reportFile=$fixDir/report
            stddefIncludePath=`gcc --print-file-name=include`
            ignoredFunctions=`nm -C $debBin | grep ' [tT] ' | grep ' .*' -o | sed 's/ [tT] //' | tr '\n' ','`
            { timeout -k 60 60 find-relevant $src -kl ${keyLine} --skip --ignore=${ignoredFunctions%?} -- -w -I${stddefIncludePath} -I${srcDir} > $reportFile; }
            # add back
            fixedFile=$baseName.add${keyLine}.fixed.c
            cp $debSrc $fixDir/$fixedFile
            grep [-0-9]* $reportFile -o > RelevantLines
            relevantLinesCount=`cat RelevantLines | wc -l`

            if [ $relevantLinesCount == 1 ] && [ `cat RelevantLines` == -1 ]
            then
                # KeyLine is a VarDecl, skip it.
                ((fixCount--))
                rm -rf $fixDir
                continue;
            fi

            echo -n "Add back Lines: " >> $reportFile
            cat RelevantLines |  while read relLine;
            do
                checkDebloated $relLine
                if [ $? == 0 ]
                then
                    echo -n " ${relLine}" >> $reportFile
                    replacement=$(sed -n "${relLine}p" "${src}")
                    escapedReplacement=$(echo "${replacement}" | sed 's/\([[\.*^$&/]\)/\\\1/g')
                    sed -i "${relLine}s/.*/${escapedReplacement}/" $fixDir/$fixedFile
                fi
            done
            echo "" >> $reportFile
            addBackLinesCount=`grep "Add" $reportFile | grep [0-9]* -o | wc -l`

            # validate
            bash -x $TOOL_DIR/validate.sh $fixDir/$fixedFile $debSrc $outDir $runScript $reportFile $runDebInputs $compileScript
            validateResult=$?
            retCode=`grep "RetCode" $reportFile | grep [0-9]* -o`
            if [ ! $retCode ]
            then
                retCode="Failure"
            fi
            case $validateResult in
            0)
                echo "[Result] Valid Fix." >> $reportFile
                printf "%-10s %20s %10s %15s %20s %20s\n" "Fix ${fixCount}" $keyLine "Valid" $retCode $addBackLinesCount $relevantLinesCount >> $currentConvSummary
                ((validFixCount++))
                ;;
            1)
                echo "[Result] Invalid Fix." >> $reportFile
                printf "%-10s %20s %10s %15s %20s %20s\n" "Fix ${fixCount}" $keyLine "Invalid" $retCode $addBackLinesCount $relevantLinesCount >> $currentConvSummary
                ;;
            2)  echo "[Result] Invalid Fix: unable to preserve original features." >> $reportFile
                printf "%-10s %20s %10s %15s %20s %20s\n" "Fix ${fixCount}" $keyLine "DebInFail" $retCode $addBackLinesCount $relevantLinesCount >> $currentConvSummary
                ;;
            esac
            if [ $fixCount -ge $maxFixCount ]
            then
                break
            fi
        fi
    done



    printf "%.100s\n" "=========================================================================================================" >> $currentConvSummary
    echo "Total: " ${fixCount} >> $currentConvSummary
    echo "Valid Fixes: "${validFixCount} >> $currentConvSummary
    printf "%-10s %20s %15s %10s\n" "Conv. ${convCount}" $convLineNo $validFixCount $fixCount >> $overallSummary
}


baseName=$(basename $debSrc .debloated.c)
srcDir=`dirname $src`
startTime=$(date +%s)
echo ---- Step 1: Align Source Codes ----
if [ ! -f $srcDir/$baseName.debloated.aligned.c ]
then
    python3 $TOOL_DIR/pre-slicing/aligner/align-source-codes.py $debSrc $src
    mv $baseName.debloated.aligned.c $srcDir
    mv $baseName.original.aligned.c $srcDir
fi

src=$srcDir/$baseName.original.aligned.c
debSrc=$srcDir/$baseName.debloated.aligned.c

debloatedLineNoFile=$srcDir/debloatedlines
echo -n " " > $debloatedLineNoFile
sed 's/^[ \t]*//;s/[ \t]*$//' $src > $src.tmp.trimmed.c
sed 's/^[ \t]*//;s/[ \t]*$//' $debSrc > $debSrc.tmp.trimmed.c
diff --unchanged-line-format= --new-line-format="%dn%c' '" --old-line-format= \
    <(nl -b a $src.tmp.trimmed.c) <(nl -b a $debSrc.tmp.trimmed.c) >> $debloatedLineNoFile
rm $src.tmp.trimmed.c $debSrc.tmp.trimmed.c

echo
echo ---- Step 2: Remove Unexecuted Codes ----
bash $TOOL_DIR/pre-slicing/run_cov.sh $debSrc $runScript $compileScript
bash $TOOL_DIR/pre-slicing/run_cov.sh $src $runScript $compileScript
covSrcDir=$outDir/cov_src
mkdir -p $covSrcDir
mv $baseName.debloated.aligned.cov.c $covSrcDir
mv $baseName.original.aligned.cov.c $covSrcDir
p_o_cov=$covSrcDir/$baseName.original.aligned.cov.c

echo
echo ---- Step 3: Instrument, Compile, Trace ----
# Instrument
$TOOL_DIR/pre-slicing/instrumenter/build/bin/instrumenter $srcDir/$baseName.debloated.aligned.c $srcDir/$baseName.original.aligned.c --no-compilation --
mv $baseName.debloated.aligned.instru.c $srcDir
mv $baseName.original.aligned.instru.c $srcDir

# Compile
bash $compileScript $srcDir/$baseName.debloated.aligned.instru.c $srcDir/$baseName.debloated.out
bash $compileScript $srcDir/$baseName.original.aligned.instru.c $srcDir/$baseName.original.out

callseqDir=$outDir/callseq
mkdir -p $callseqDir

# Trace
{ stdbuf -oL bash $runScript $srcDir/$baseName.debloated.out > $callseqDir/$baseName.debloated.trace; } 2>/dev/null
{ stdbuf -oL bash $runScript $srcDir/$baseName.original.out > $callseqDir/$baseName.original.trace; } 2>/dev/null
rm $srcDir/$baseName.debloated.out $srcDir/$baseName.original.out

echo
echo ---- Step 4: Analyze Traces ----
python3 $TOOL_DIR/pre-slicing/analyzer/pre-slicing-analyze.py -o $convDir/$baseName.criterion $callseqDir/$baseName.debloated.trace $callseqDir/$baseName.original.trace


echo ---- Step 5: Analyze Convergences ----
debloatedLineNoFile=$srcDir/debloatedlines
debloatedLines=$( cat $debloatedLineNoFile )

debBin=$outDir/deb.out
bash $compileScript $srcDir/$baseName.debloated.aligned.c $debBin


overallSummary=$outDir/OverallSummary
printf "%.60s\n" "=====================  Overall Summary  ==========================" > $overallSummary
printf "%-10s %20s %15s %10s\n" "No." "ConvergentLineNo" "#ValidFixes" "#Fixes" >> $overallSummary

convCount=0
tail -n +3 $convDir/$baseName.criterion | while read convLine
do
    if [ $convCount -lt 1 ]
    then
        ((convCount++))
        fixFromConvergence $convLine
    else
        break
    fi
done
printf "%.60s\n" "====================================================================================================" >> $overallSummary
rm RelevantLines
endTime=$(date +%s)
echo "Total Time: $((endTime-startTime))" >> $overallSummary


