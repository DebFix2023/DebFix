repairedFile=$1
debSrc=$2
originDir=$3
runScript=$4
reportFile=$5
runDebInputs=$6
compileScript=$7


repairedBin=$originDir/repaired.out

# compile
bash $compileScript $repairedFile $repairedBin 

if [ $? == 1 ]
then 
    echo -e "\033[31;1m [Fail] \033[0m Unable to compile. "
    # sleep 2
    rm  $repairedBin
    exit 1
fi

if [ $# -lt 7 ] 
then 
    echo "Missing arguments."
    exit 1 
fi

# test
bash -x $runScript $repairedBin 

retCode=$?
echo "RetCode: $retCode" >> $reportFile
# check if it still crashes.
echo $retCode | grep 13[0-9] 
if [ $? == 0 ] 
then
    # Crashed.
    echo -e "\033[31;1m [Fail] \033[0m This patch is invalid. "
    # sleep 2
    rm $originDir/$(basename $repairedFile) $repairedBin
    exit 1
else 
    # Did not crash.
    # check if the original features were preserved.
    bash $runDebInputs $repairedFile
    if [ $? == 1 ]
    then 
        echo -e "\033[34;1m [Fail] \033[0m Original features were not preserved. "
        # sleep 2
        rm $originDir/$(basename $repairedFile) $repairedBin
        exit 2
    fi

    echo -e "\033[32;1m [Succeed] \033[0m This patch is valid. "
    # sleep 2
    rm $originDir/$(basename $repairedFile) $repairedBin
    exit 0
fi
