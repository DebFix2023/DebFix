#!/bin/bash

PARALLEL_JOBS=$1
if [[ ! -z $PARALLEL_JOBS ]]; then PARALLEL_JOBS="-j $1"; fi

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
cd $SCRIPT_DIR

# clone debaug repo, build debaug's C++ and Java code
if [[ ! -d "third-party/debaug" ]]; then
    cd third-party
    git clone https://github.com/qixin5/debaug
    # rm -rf debaug/.git
    cd $SCRIPT_DIR
fi
# build debaug's C++ code
if [[ ! -f "third-party/debaug/build/bin/instrumenter" ]]; then
    mkdir -p third-party/debaug/build && cd third-party/debaug/build
    CC=clang-15 CXX=clang++-15 cmake -DCUSTOM_LINK_OPTIONS="-fuse-ld=lld-15" -DBUILD_DEBAUG=true -G Ninja ../..
    ninja $PARALLEL_JOBS
    cd $SCRIPT_DIR
fi
# build debdce
if [[ ! -f "third-party/debaug/build/bin/debdce" ]]; then
    mkdir -p third-party/debaug/debdce/build && cd third-party/debaug/debdce/build
    CC=clang-15 CXX=clang++-15 cmake -DCUSTOM_LINK_OPTIONS="-fuse-ld=lld-15" -DBUILD_DEBDCE=true -G Ninja ../../..
    ninja $PARALLEL_JOBS
    cp bin/debdce ../../build/bin/
    cd $SCRIPT_DIR
fi
# build debaug's java code
if [[ ! -d "third-party/debaug/build/java" ]]; then
    cd third-party/debaug
    ./compile_java
    cd $SCRIPT_DIR
fi

# build instrumenter
cd instrumenter
bash ./make.sh $1
