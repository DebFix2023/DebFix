# Pre-Slicing Analysis Tools
## Introduction
- Align the source codes of original and debloated programs
- Instrument the source code to get statement execution and function call trace
- Help you choose slicing criteria for crash repair

## Requirements
### Hardware Requirements
- Memory: 1GB (for building the instrumenter)

### Dependencies
```bash
# If version 15 (or version 9) is not in your system's apt sources list, run the command below.
# For more information, please refer to "https://apt.llvm.org".
wget https://apt.llvm.org/llvm.sh && chmod +x llvm.sh
sudo ./llvm.sh 15  # or 9

sudo apt install python3 cmake ninja-build gdb libpcre3 libpcre3-dev
# for compiling instrumenter and more
sudo apt install libclang-15-dev llvm-15 llvm-15-dev clang-15 lld-15 clang-format-15
# for compiling debaug
sudo apt install libclang-9-dev llvm-9 llvm-9-dev
sudo apt install default-jre default-jdk
```

## Usage
### Basic Example
```bash
# get the tools
git clone https://github.com/Isabel0715/CrashRepairTool
cd CrashRepairTool/pre-slicing

# build the instrumenter and the debaug dependency
# if you have small RAM space, use "bash setup.sh <N>" to limit parallel jobs count
bash setup.sh

# run all tools on program "date" in "demo-inputs/date" folder
bash run.sh date
```

### Further Usage
The suggested way of using our tools is to use the convenience script `run.sh`.\
First, put debloated source code (`name.debloated.c`), original source code (`name.original.c`), header files, crash input file (`crash_input`) inside `demo-inputs/name/` subfolder. A `compile.sh` for compiling and a `run.sh` for running compiled file are also needed. You can refer to examples in `demo-inputs` folder to get a hint on how to write those files.\
Then, invoke the script by `bash run.sh name`.

If you want to use our tools with more control, you can follow the instructions below and use them separately.

## Tool 1: Aligner
A temporary solution to align the debloated and original versions of source codes.
Note that the source codes should be grammatically correct, or you should insert a `--no-reformat` argument.

Example Usage: `python3 align-source-codes.py program.debloated.c program.original.c` (order does not matter)\
Example Output Files: `program.debloated.aligned.c`, `program.original.aligned.c`

For more help, you can run it with "-h" or "--help" option.

## Tool 2: Instrumenter
Instrument source code to get statement execution trace.
The implementation was taken and modified from [debaug](https://github.com/qixin5/debaug).

Example Usage: `./instrumenter program.c`\
Example Output File: `program.instru.c` (compile and run it manually to generate execution trace)

Output File Format: `type;func_signature;stmt_line`

For more help, you can run it with "-h" or "--help" option.

## Tool 3: Analyzer
Find the last aligned position by comparing the two traces of the debloated and original program. Suggest several fix positions to add back (not guarantee a fix).

Example Usage: `python3 pre-slicing-analyze.py program.debloated.trace program.original.trace -o program.criterion` (order matters)\
Example Output Files: `a.analyze.result`, cleaned version of `program.debloated.trace` and `program.original.trace`

For more help, you can run it with "-h" or "--help" option.
