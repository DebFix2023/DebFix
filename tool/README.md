# CrashRepairTool
## Dependencies.
```
sudo apt-get install binutils
```

## Usage
```bash
. setenv
# please compile find-relevant using cmake first
sudo cp find-relevant/build/bin/find-relevant /usr/local/bin
bash ./run.sh <src> <debSrc> <outDir> <runScript> <runDebInputs> <compileScript> 
```

## Scripts needed for validation
* runScript:
    * define how to run the crashed input.
    * args: 
        * $1: the binary file of the fixed program.
* runDebInputs:
    * define how to run all the debloating inputs.
    * args:
        * $1: the source file of the fixed program.
    * retcode:
        * return 0 when all the debloating inputs run successfully and the outputs are as expected.
        * otherwise, return 1.