#!/bin/bash

# prepare testing environment
function prepare() {
    case $1 in
        0) # file
            touch file
            ;;
        1) # file file2
            touch file file2
            ;;
        2) # dir
            mkdir dir
            ;;
        3) # -r dir
            mkdir dir
            ;;
        4) # -r -f dir
            mkdir dir
            ;;
        5)  # -f dir
            mkdir dir
            ;;
        6)  # d1/file
            mkdir d1
            touch d1/file
            ;;
        7)  # -i file
            touch file
            ;;
        8)  # -i file file2
                touch file file2
            ;;
    esac
}

# clean up temporary files and folders
function clean() {
    rm -rf dir d1 d1/file di/file file file2 core
}
