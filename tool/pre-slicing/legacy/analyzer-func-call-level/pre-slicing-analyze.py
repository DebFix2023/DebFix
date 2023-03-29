#!/usr/bin/env python3

# Example:
#     Basic Usage: python pre-slicing-analyze.py <filename_debloated>.trace <filename_original>.trace
#            (order matters)
#     Output: a hint on choosing slicing criterion

# Note that this script may fail sometimes because of the imperfect alignment of the two programs.
# Or simply because it only analyzes on function call level.

# TODO: Use CSV - "type;func_signature;stmt_line(;stack_trace)"
# FIXME: annotate_trace(seq) assumes single thread


import sys
import argparse
import difflib
from pathlib import Path
from typing import Tuple


# represent a single line in the trace file
# Line Format: type;func_signature;stmt_line(;stack_trace)
class TraceRecord:
    __slots__ = ["type", "func_signature", "stmt_line", "stack_trace"]
    def __init__(self, type, func_signature = "", stmt_line = "", stack_trace = ""):
        self.type = type
        self.func_signature = func_signature
        self.stmt_line = stmt_line
        self.stack_trace = stack_trace
    @property
    def func_name(self):
        return self.func_signature.split("(")[0]
    def __hash__(self):
        return hash((self.type, self.func_signature, self.stmt_line, self.stack_trace))
    def __str__(self):
        return ";".join((self.type, self.func_signature, self.stmt_line, self.stack_trace))


def read_args():
    parser = argparse.ArgumentParser(description='Suggest several slicing criteria by comparing traces.')
    parser.add_argument("-o", "--output", dest="filepath_output", metavar="FILEPATH", default="a.criterion",
                        help="output file for slicing criteria (default: 'a.criterion')")
    parser.add_argument("--no-call-count-compare", action='store_true', dest="no_call_count_compare",
                        help="do not compare call count of each function when matching call sequences")
    parser.add_argument("--output-alignment-result", action='store_true', dest="output_alignment_result",
                        help="output the result of aligning two sequences to files")
    parser.add_argument("filepath1", metavar="DEBLOATED_TRACE",
                        help="file path to the trace file of debloated program")
    parser.add_argument("filepath2", metavar="ORIGINAL_TRACE",
                        help="file path to the trace file of original program")
    return parser.parse_args()


def read_file(filepath: str):
    # read sequence from file
    with open(filepath, errors="ignore") as fd:
        seq = fd.readlines()
    # preprocess the sequence
    seq = tuple(s.strip("\r\n") for s in seq)
    seq = tuple(filter(lambda s: s.startswith(("FUNC_CALL", "FUNC_RETURN", "STMT_EXEC")), seq))
    seq = tuple(TraceRecord(*s.split(";")) for s in seq)
    return seq


def annotate_trace(seq: Tuple[TraceRecord], no_call_count_compare: bool):
    # append "stack trace" information to each function call trace record
    # this is not a typical stack trace
    # each element is a "call id": (func_name, func_caller_line, func_call_count)
    stack_trace = []
    last_stmt_exec_line = 0
    for i, s in enumerate(seq):
        if s.type == "FUNC_CALL":
            func_name = s.func_name
            func_caller_line = last_stmt_exec_line
            call_id = ":".join((func_name, str(func_caller_line)))
            if not no_call_count_compare:
                func_call_count = 1
                if len(stack_trace):
                    if call_id in stack_trace[-1][1]:
                        func_call_count = stack_trace[-1][1][call_id] + 1
                    stack_trace[-1][1][call_id] = func_call_count
                call_id = ":".join((call_id, str(func_call_count)))
            stack_trace.append((call_id, dict()))
            seq[i].stmt_line = str(func_caller_line)
            seq[i].stack_trace = ",".join((t[0] for t in stack_trace))
        elif s.type == "FUNC_RETURN":
            stack_trace.pop()
        elif s.type == "STMT_EXEC":
            last_stmt_exec_line = s.stmt_line
    return seq


def extract_func_call_trace(seq: Tuple[TraceRecord]):
    # Alternative Solution: not filtering, just mapping (way too slow for matching)
    # return list((s if s.type == "FUNC_CALL" else "") for s in seq)
    return tuple(filter(lambda s: s.type == "FUNC_CALL", seq))


def suggest_slicing_criteria(turning_point_debloated: int,
                             turning_point_original: int,
                             seq_func_debloated: Tuple[TraceRecord],
                             seq_func_original: Tuple[TraceRecord],
                             seq_debloated: Tuple[TraceRecord]):
    # return the suggested slicing criteria
    # `slicing_criteria == []` means this tool fails to locate slicing criterion
    slicing_criteria_debloated, slicing_criteria_original = [], []
    # 0 crash location
    crash_location = "?"
    for s in reversed(seq_debloated):
        if s.type == "STMT_EXEC":
            crash_location = s.stmt_line
            break
    # 1 debloated program
    lowest_level = sys.maxsize
    for i in range(turning_point_debloated + 1, len(seq_func_debloated)):
        # reason: these are function calls after the last aligned function call in the debloated program
        # only return the outer most function calls as slicing criteria (TODO: explain it)
        func_call_level = len(seq_func_debloated[i].stack_trace.split(","))
        if func_call_level <= lowest_level:
            slicing_criteria_debloated.append((seq_func_debloated[i].stmt_line or "?",
                                               seq_func_debloated[i].func_name or "?"))
            lowest_level = func_call_level
    if not len(slicing_criteria_debloated) and seq_debloated[-1].type == "STMT_EXEC":
        # reason: the last function call of the debloated program's call sequence can be aligned
        slicing_criteria_debloated.append((crash_location, "?"))
    # 2 original program
    lowest_level = sys.maxsize
    for i in range(turning_point_original + 1, len(seq_func_original)):
        # reason: these are function calls after the last aligned function call in the original program
        # only return the outer most function calls as slicing criteria (TODO: explain it)
        func_call_level = len(seq_func_original[i].stack_trace.split(","))
        if func_call_level <= lowest_level:
            slicing_criteria_original.append((seq_func_original[i].stmt_line or "?",
                                              seq_func_original[i].func_name or "?"))
            lowest_level = func_call_level

    # deduplicate and return the slicing criteria (use dict rather than set to preserve order)
    slicing_criteria_debloated = list(dict().fromkeys(slicing_criteria_debloated).keys())
    slicing_criteria_original = list(dict().fromkeys(slicing_criteria_original).keys())
    return slicing_criteria_debloated, slicing_criteria_original, crash_location


def align_func_traces(seq_func_debloated: Tuple[TraceRecord],
                      seq_func_original: Tuple[TraceRecord]):
    # output the aligned version of the two function call traces
    matcher = difflib.SequenceMatcher(None,
                                      tuple(hash(s) for s in seq_func_debloated),
                                      tuple(hash(s) for s in seq_func_original),
                                      False)
    matching_blocks = matcher.get_matching_blocks()  # List[Match]
    # last_aligned_debloated_index = matching_blocks[-2].a + matching_blocks[-2].size - 1
    # last_aligned_original_index = matching_blocks[-2].b + matching_blocks[-2].size - 1
    
    aligned_seq_debloated, aligned_seq_original = [], []
    last_handled_line_debloated, last_handled_line_original = -1, -1  # line index starts from 0
    block_index = 1
    for matching_block in matching_blocks:
        # There will always be an empty matching_block at the back. No need to worry about the last loop.
        if matching_block.a + matching_block.b - last_handled_line_debloated -last_handled_line_original > 2:
            aligned_seq_debloated += [f"++++++++ Unmatched {block_index} ++++++++"]
            aligned_seq_debloated += seq_func_debloated[last_handled_line_debloated+1:matching_block.a]
            aligned_seq_debloated += [f"-------- Unmatched {block_index} --------", ""]
            aligned_seq_original += [f"++++++++ Unmatched {block_index} ++++++++"]
            aligned_seq_original += seq_func_original[last_handled_line_original+1:matching_block.b]
            aligned_seq_original += [f"-------- Unmatched {block_index} --------", ""]
            block_index += 1
        
        if matching_block.size > 0:
            aligned_seq_debloated += [f"++++++++ Matched {block_index} ++++++++"]
            aligned_seq_debloated += seq_func_debloated[matching_block.a:matching_block.a+matching_block.size]
            aligned_seq_debloated += [f"-------- Matched {block_index} --------", ""]
            aligned_seq_original += [f"++++++++ Matched {block_index} ++++++++"]
            aligned_seq_original += seq_func_original[matching_block.b:matching_block.b+matching_block.size]
            aligned_seq_original += [f"-------- Matched {block_index} --------", ""]
            block_index += 1
        
        last_handled_line_debloated = matching_block.a + matching_block.size - 1
        last_handled_line_original = matching_block.b + matching_block.size - 1
    
    aligned_seq_debloated = tuple((str(s) for s in aligned_seq_debloated))
    aligned_seq_original = tuple((str(s) for s in aligned_seq_original))
    return aligned_seq_debloated, aligned_seq_original


def main():
    args = read_args()
    
    # read files
    seq_debloated, seq_original = read_file(args.filepath1), read_file(args.filepath2)
    seq_debloated = annotate_trace(seq_debloated, args.no_call_count_compare)
    seq_original = annotate_trace(seq_original, args.no_call_count_compare)
    
    # extract and only compare function call traces, because:
    #   - comparing function returns is useless and incurs misalignment
    #   - comparing statement executions is error-prone and time-consuming
    seq_func_debloated = extract_func_call_trace(seq_debloated)
    seq_func_original = extract_func_call_trace(seq_original)
    
    # compare the two traces
    # count_match = 0
    last_aligned_debloated_index, last_aligned_original_index = -1, -1
    for idx_deb, deb in reversed(list(enumerate(seq_func_debloated))):
        if last_aligned_debloated_index >= 0:
            break
        for idx_ori, ori in reversed(list(enumerate(seq_func_original))):
            if hash(deb) == hash(ori):
                # if count_match == 0:
                #     last_aligned_debloated_index, last_aligned_original_index = idx_deb, idx_ori
                # count_match += 1
                last_aligned_debloated_index, last_aligned_original_index = idx_deb, idx_ori
    # print("count:", count_match)
    
    # analyze the two traces and output suggested slicing criteria
    sc1, sc2, cl = suggest_slicing_criteria(last_aligned_debloated_index, last_aligned_original_index,
                                            seq_func_debloated, seq_func_original, seq_debloated)
    print(f"Write slicing criteria to file '{args.filepath_output}'.")
    with open(args.filepath_output, "w") as fsc:
        sc1 = f"{len(sc1)}\n{' '.join([(c[0] + ':' + c[1]) for c in sc1])}\n"
        sc2 = f"{len(sc2)}\n{' '.join([(c[0] + ':' + c[1]) for c in sc2])}\n"
        cl = str(cl)
        format_spec = ("\n\n# Format:\n" +
                       "#   number_of_slicing_criteria_in_debloated_program\n" +
                       "#   line1:func1 line2:func2 ...\n" +
                       "#   number_of_slicing_criteria_in_original_program\n" +
                       "#   line1:func1 line2:func2 ...\n" +
                       "#   line_number_of_crash_statement\n" +
                       "# (line number is '?' when failing to locate the line)\n" +
                       "# (function name is '?' for crash location)\n")
        fsc.write(sc1 + sc2 + cl + format_spec)
    
    # align two function call sequences, and output to files for future use
    if args.output_alignment_result:
        aligned_seq_debloated, aligned_seq_original = align_func_traces(seq_func_debloated,
                                                                        seq_func_original)
        filename_debloated_output = f"{Path(args.filepath1).stem}.call{Path(args.filepath1).suffix}"
        filename_original_output = f"{Path(args.filepath2).stem}.call{Path(args.filepath2).suffix}"
        with open(filename_debloated_output, "w") as fd, open(filename_original_output, "w") as fo:
            fd.write("\n".join(aligned_seq_debloated))
            fo.write("\n".join(aligned_seq_original))


if __name__ == "__main__":
    main()
