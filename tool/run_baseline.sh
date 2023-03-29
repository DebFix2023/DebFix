if [[ $# -lt 6 ]]; then echo "Missing arguments." && exit 1; fi

ORIGINAL_SRC=$(realpath $1)
DEBLOATED_SRC=$(realpath $2)
OUTPUT_DIR=$(realpath $3)
RUN_SCRIPT=$(realpath $4)
TEST_SCRIPT=$(realpath $5)
COMPILE_SCRIPT=$(realpath $6)
EXTRA_ARGS=$7  # "--skip-local"

PROG_NAME=$(basename $DEBLOATED_SRC .debloated.c)
SRC_DIR=$(dirname $ORIGINAL_SRC)

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

ALIGNER="python3 $SCRIPT_DIR/pre-slicing/aligner/align-source-codes.py"
GET_DEBLOATED_LINES="bash $SCRIPT_DIR/pre-slicing/get_debloated_lines.sh"
FIXER="$SCRIPT_DIR/pre-slicing/instrumenter/build/bin/fixer"


start_time=$(date +%s)


echo ---- Step 1: Align Source Codes ----
if [[ ! -f $SRC_DIR/$PROG_NAME.debloated.aligned.c ]]; then
    $ALIGNER $DEBLOATED_SRC $ORIGINAL_SRC
    mv $PROG_NAME.debloated.aligned.c $SRC_DIR
    mv $PROG_NAME.original.aligned.c $SRC_DIR
fi
original_aligned_src=$SRC_DIR/$PROG_NAME.original.aligned.c
debloated_aligned_src=$SRC_DIR/$PROG_NAME.debloated.aligned.c


echo
echo ---- Step 2: Run Baseline Fixer ----
fix_dir=$OUTPUT_DIR/baseline_fixes
mkdir -p $fix_dir
fixed_src=$(basename $debloated_aligned_src .c).fixed.c
$GET_DEBLOATED_LINES $debloated_aligned_src $original_aligned_src $PROG_NAME.debloated-lines
$FIXER $EXTRA_ARGS --original-src=$original_aligned_src --compile-script=$COMPILE_SCRIPT --reproduce-script=$RUN_SCRIPT --other-test-script=$TEST_SCRIPT --debloated-lines=$PROG_NAME.debloated-lines $debloated_aligned_src --
mv $fixed_src $fix_dir
rm $PROG_NAME.debloated-lines
fixed_src=$fix_dir/$fixed_src

result_file=$fix_dir/result.txt
debloated_line_count=$(cat $debloated_aligned_src | sed '/^\s*$/d' | wc -l)
fixed_line_count=$(cat $fixed_src | sed '/^\s*$/d' | wc -l)
add_back_ratio=$(awk -v a="$fixed_line_count" -v b="$debloated_line_count" 'BEGIN{ print ((a - b) / b) }')
echo "Add Back Lines Ratio: $add_back_ratio" > $result_file
end_time=$(date +%s)
echo "Total Time: $(($end_time - $start_time))" >> $result_file
