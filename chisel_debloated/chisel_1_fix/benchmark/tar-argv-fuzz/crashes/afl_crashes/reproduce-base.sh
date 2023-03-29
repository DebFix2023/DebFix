#!/bin/bash
CUR_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

# prepare testing environment
function prepare() {
    case $1 in
    0) # echo "foo foo" > foo.orig
        # cp foo.orig foo
        # echo "bar " > bar.orig
        # cp bar.orig bar
        # ./tar cf foo.tar foo bar (tar-archives-multiple-files)
        echo "foo foo" > foo
        echo "bar " > bar
        ;;    
    1)  # rm foo bar
        # ./tar xf foo.tar (tar-archives-multiple-files)
        rm foo bar
        cp ${CUR_DIR}/../file_copy/foo.tar_copy ${CUR_DIR}/../foo.tar
        ;;  
    2)  # touch foo
        # ./tar cf foo.tar foo (tar-complains-about-missing-file)
        rm -rf foo foo.tar
        touch foo 
        ;;  
    3)  # touch foo
        # ./tar xf foo.tar bar (tar-complains-about-missing-file)
        rm -rf foo.tar bar
        touch foo 
        ;;  
    4|5) # ./tar v (tar-demands-at-least-one-ctx)
         # ./tar tx (tar-demands-at-most-one-ctx)
        rm -rf foo.tar bar
        touch foo 
        ;;
    6)  # mkdir -p foo/{1,2,3}
        # mkdir -p foo/1/{10,11}
        # mkdir -p foo/1/10/{100,101,102}
        # ./tar cf foo.tar -C foo . (tar-extracts-all-subdirs)
        rm -rf foo*
        mkdir -p foo/{1,2,3}
        mkdir -p foo/1/{10,11}
        mkdir -p foo/1/10/{100,101,102}
        ;;  
    7|8)  # rm -rf foo/*
          # ./tar xf foo.tar -C foo ./1/10 (tar-extracts-all-subdirs)
        rm -rf foo/*
        cp ${CUR_DIR}/../file_copy/foo.tar_7_8_copy ${CUR_DIR}/../foo.tar
        ;;  
    9|11)  # touch foo
           # ./tar cf foo.tar foo
        rm -rf foo foo.tar
        touch foo
        ;; 
    10)  # ./tar xf foo.tar (tar-extracts-file)
        rm -rf foo foo.tar
        cp ${CUR_DIR}/../file_copy/foo.tar_10_copy ${CUR_DIR}/../foo.tar
        ;; 
    12)  # rm foo
         # cat foo.tar | ./tar x （the same "foo.tar" with input_10) (tar-extracts-from-standard-input)
        rm -rf foo
        cp ${CUR_DIR}/../file_copy/foo.tar_10_copy ${CUR_DIR}/../foo.tar
        ;;
    13)  # touch foo bar
         # ./tar cf foo.tar foo bar (tar-extracts-multiple-files)
        rm -rf foo bar
        touch foo bar
        ;;
    14)  # rm foo bar
         # ./tar -xf foo.tar (tar-extracts-multiple-files)
        rm -rf foo bar
        cp ${CUR_DIR}/../file_copy/foo.tar_14_copy ${CUR_DIR}/../foo.tar
        ;;
    15)  # echo foo > foo
         # ./tar cf foo.tar foo (tar-extracts-to-standard-output)
        rm -rf foo
        echo foo > foo
        ;;
    16)  # cat foo.tar | ./tar Ox | cmp foo -   (tar-extracts-to-standard-output)
        rm -rf foo
        cp ${CUR_DIR}/../file_copy/foo.tar_16_copy ${CUR_DIR}/../foo.tar
        ;;
    17)  # echo "foo foo bar" > foo.orig
         # cp foo.orig foo
         # ./tar czf foo.tar.gz foo (tar-handles-cz-options)
        rm -rf foo
        echo "foo foo bar" > foo
        ;;
    18)  # rm foo
         # ./tar xzf foo.tar.gz (tar-handles-cz-options)
        rm -rf foo
        cp ${CUR_DIR}/../file_copy/foo.tar.gz_18_copy ${CUR_DIR}/../foo.tar.gz
        ;;
    19)  # touch foo
         # tar cf foo.tar foo
         # echo foo >foo.exclude
         # ./tar xf foo.tar -X foo.exclude （tar-handles-empty-include-and-non-empty-exclude-list）
        rm -rf foo foo.exclude
        cp ${CUR_DIR}/../file_copy/foo.tar_19_copy ${CUR_DIR}/../foo.tar
        cp ${CUR_DIR}/../file_copy/foo.exclude_19_copy ${CUR_DIR}/../foo.exclude
        ;;
    20) # echo "abcd abcd" > foo.orig
        # echo "qwerqwerqwer" > bar.orig
        # echo "" > baz.orig
        # cp foo.orig foo
        # cp bar.orig bar
        # cp baz.orig baz
        # tar cf foo.tar foo bar baz
        # echo foo >foo.exclude
        # rm foo bar baz
        # ./tar xf foo.tar foo bar -X foo.exclude （tar-handles-exclude-and-extract-lists）
        rm -rf foo.tar foo bar baz foo.exclude
        cp ${CUR_DIR}/../file_copy/foo.tar_20_copy ${CUR_DIR}/../foo.tar
        cp ${CUR_DIR}/../file_copy/foo.exclude_20_copy ${CUR_DIR}/../foo.exclude
        ;;
    21) # touch foo
        # touch bar
        # ./tar cf foo.tar foo bar
        # echo foo > foo.exclude
        # echo bar > bar.exclude
        # rm foo bar
        # ./tar xf foo.tar -X foo.exclude -X bar.exclude (tar-handles-multiple-X-options)
        rm -rf foo.tar foo bar foo.exclude bar.exclude
        cp ${CUR_DIR}/../file_copy/foo.tar_21_copy ${CUR_DIR}/../foo.tar
        cp ${CUR_DIR}/../file_copy/foo.exclude_21_copy ${CUR_DIR}/../foo.exclude
        cp ${CUR_DIR}/../file_copy/bar.exclude_21_copy ${CUR_DIR}/../bar.exclude
        ;;
    22) # mkdir foo
        # touch foo/bar
        # tar cf foo.tar foo
        # rm -rf foo
        # echo foo/bar >foobar.exclude
        # ./tar xf foo.tar foo -X foobar.exclude （tar-handles-nested-exclude）
        rm -rf foo foo/bar foo.tar foobar.exclude
        cp ${CUR_DIR}/../file_copy/foo.tar_22_copy ${CUR_DIR}/../foo.tar
        cp ${CUR_DIR}/../file_copy/foobar.exclude_22_copy ${CUR_DIR}/../foobar.exclude
        ;;
    esac
}

# clean up temporary files and folders
function clean() {
    rm -rf dir d1 d1/file di/file file file2 core
}
