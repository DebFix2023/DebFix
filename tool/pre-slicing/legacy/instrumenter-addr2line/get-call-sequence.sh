#!/bin/bash

# Usage: bash ./get-call-sequence.sh <source_code_file> <crash_input_file> [<compiler_options>]
# Example 1: bash ./get-call-sequence.sh ./date-debloated.c ./crash_input
# Example 2: bash ./get-call-sequence.sh ./grep-original.c ./crash_input -D "__msan_unpoison(s,z)" -lpcre
# Output File: <source_code_filename>.trace

# FIXME: cannot trace library function calls
# FIXME: sometimes addr2line cannot get the correct line of a function call (e.g.: path_check in rm)

# meta
SOURCE_FILENAME="${1##*/}"
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

# compile
gcc -finstrument-functions -no-pie -g -c -w -o .__main.o "$1" "${@:3}"
gcc -no-pie -g -c -w -o .__trace.o "${SCRIPT_DIR}/src/instrument-function.c"
gcc -no-pie -g -w .__main.o .__trace.o -o .main "${@:3}"
rm .__main.o .__trace.o

# run and trace
{ ./.main < "$2"; } &> /dev/null

# read trace log
EXECUTABLE="./.main"
TRACELOG="./.trace-output.tmp"
# LINE_COUNT="$(wc -l < ${TRACELOG})"
depth=0
while read LINETYPE FADDR CADDR CTIME; do
    # Enter a function
    if test "${LINETYPE}" = "e"; then
        func_name="$(addr2line -f -e ${EXECUTABLE} ${FADDR}|head -1)"
        exec_timestamp="$(date -Iseconds -d @${CTIME})"
        caller_func_name="$(addr2line -f -e ${EXECUTABLE} ${CADDR}|head -1)"
        caller_filename_and_line="$(addr2line -s -e ${EXECUTABLE} ${CADDR})"
        caller_line="${caller_filename_and_line##*:}"

        [[ "${depth}" > 0 ]] && printf '  %.0s' $(seq $depth)
        echo "+ ${func_name} ${caller_func_name}:${caller_line}"
        
        ((depth++))
    fi
    # Exit a function (only records CALL sequence)
    if test "${LINETYPE}" = "x"; then
        ((depth--))
    #     [[ "${depth}" > 0 ]] && printf '  %.0s' $(seq $depth)
    #     echo "- ${func_name} ${caller_func_name}:${caller_line}"  # don't know where it returned
    fi
done < "${TRACELOG}" > "./${SOURCE_FILENAME}.trace"
rm "${EXECUTABLE}" "${TRACELOG}"
