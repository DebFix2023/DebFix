#!/usr/bin/env python3

# Note that this script may fail sometimes because of the imperfect alignment of the two programs.
# Or simply because it only analyzes on function call level.

# FIXME: annotate_trace(seq) assumes single thread


import argparse
import difflib
import subprocess
from typing import Tuple


# represent a single line in the trace file
# Line Format: type;func_signature;line(;stack_trace)
class TraceRecord:
    __slots__ = ["type", "func_signature", "line", "exec_count", "stack_trace"]
    def __init__(self, type, func_signature = "", line = "", exec_count="", stack_trace = ""):
        self.type = type
        self.func_signature = func_signature
        self.line = line
        self.exec_count = exec_count
        self.stack_trace = stack_trace
    @property
    def func_name(self):
        return self.func_signature.split("(")[0]
    def __hash__(self):
        return hash(str(self))
    def __str__(self):
        return ";".join((self.type, self.func_signature, str(self.line),
                         str(self.exec_count), self.stack_trace))


def read_args():
    parser = argparse.ArgumentParser(description="Suggest several groups of possible fix positions by comparing traces.")

    parser.add_argument("-o", "--output", dest="filepath_output", metavar="FILEPATH", default="a.analyze.result",
                        help="output file to store analysis result (default: 'a.analyze.result')")
    parser.add_argument("--use-extra-info", dest="extra_info_list", metavar="EXTRA_INFO_LIST",
                        help="leverage extra information when aligning (example: 'stack_trace,exec_count')")
    parser.add_argument("-d", "--debug", action='store_true', dest="debug",
                        help="output verbose information for debugging this script")
    parser.add_argument("-k", metavar="group_count", dest="group_count", type=int, default=50,
                        help="show up to how many groups of possible fix positions (default: 50)")

    parser.add_argument("filepath1", metavar="DEBLOATED_TRACE",
                        help="file path to the trace file of debloated program")
    parser.add_argument("filepath2", metavar="ORIGINAL_TRACE",
                        help="file path to the trace file of original program")

    # args = vars(parser.parse_args())
    args = parser.parse_args()
    args.extra_info_list = tuple(args.extra_info_list.split(",")) if args.extra_info_list else []

    return args


def read_files(args: argparse.Namespace):
    def read_file(filepath: str):
        # read sequence from file
        with open(filepath, errors="ignore") as fd:
            seq = fd.readlines()
        # preprocess the sequence
        seq = tuple(s.strip("\r\n") for s in seq)
        seq = tuple(filter(lambda s: s.startswith(("FUNC_CALL", "FUNC_RETURN", "STMT_EXEC")), seq))
        seq = tuple(TraceRecord(*s.split(";")) for s in seq)
        seq = annotate_trace(seq, args.extra_info_list)
        seq = tuple(filter(lambda s: s.type in ("FUNC_CALL", "STMT_EXEC"), seq))
        return seq

    seq1, seq2 = read_file(args.filepath1), read_file(args.filepath2)

    # also write back a cleaner and annotated trace to the input trace file
    with open(args.filepath1, "w") as fd, open(args.filepath2, "w") as fo:
        print(f"Rewrite files '{args.filepath1}' and '{args.filepath2}' to make them cleaner.")
        fd.write("\n".join((str(s) for s in seq1)))
        fo.write("\n".join((str(s) for s in seq2)))

    return seq1, seq2


def annotate_trace(seq: Tuple[TraceRecord], extra_info_list: Tuple[str]):
    # append a "non-typical stack trace" information to each trace record
    # each element of it is a "call id": (func_name, func_caller_line, func_call_count)
    stack_trace = []
    last_stmt_exec_line = 0
    use_stack_trace, use_exec_count = "stack_trace" in extra_info_list, "exec_count" in extra_info_list
    for i, s in enumerate(seq):
        if s.type == "FUNC_CALL":
            func_name = s.func_name
            func_caller_line = last_stmt_exec_line
            call_id = ":".join((func_name, str(func_caller_line)))
            if use_exec_count:
                func_call_count = 1
                if len(stack_trace):
                    if call_id in stack_trace[-1][1]:
                        func_call_count = stack_trace[-1][1][call_id] + 1
                    stack_trace[-1][1][call_id] = func_call_count
                call_id = ":".join((call_id, str(func_call_count)))
                seq[i].exec_count = func_call_count
            stack_trace.append((call_id, dict()))
            seq[i].line = func_caller_line
            if use_stack_trace:
                seq[i].stack_trace = ",".join((t[0] for t in stack_trace))
        elif s.type == "STMT_EXEC":
            last_stmt_exec_line = s.line
            exec_id = s.line
            if use_stack_trace:
                s.stack_trace = ",".join((t[0] for t in stack_trace))
            if use_exec_count:
                stmt_exec_count = 1
                if len(stack_trace):
                    if exec_id in stack_trace[-1][1]:
                        stmt_exec_count = stack_trace[-1][1][exec_id] + 1
                    stack_trace[-1][1][exec_id] = stmt_exec_count
                seq[i].exec_count = stmt_exec_count
        elif s.type == "FUNC_RETURN":
            stack_trace.pop()
    return seq


def match_sequences_gnu_diff(filepath1: str, filepath2: str):
    # "-B": will output "===" when diff-ing "\n\naaa" and "aaa"
    line_count_1, line_count_2 = sum(1 for _ in open(filepath1)), sum(1 for _ in open(filepath2))
    diff_result = subprocess.run(["diff", r"--unchanged-group-format=%df,%dF,%dn,",
                                  r"--unchanged-line-format=",
                                  r"--new-line-format=", r"--old-line-format=",
                                  filepath1, filepath2],
                                 capture_output=True, text=True,
                                 errors="ignore").stdout
    diff_result = diff_result.strip().strip(",").split(",")
    diff_result = [diff_result[i:i+3] for i in range(0, len(diff_result), 3)]
    matching_blocks = [difflib.Match(int(group[0]) - 1, int(group[1]) - 1, int(group[2]))
                       for group in diff_result]
    matching_blocks.append(difflib.Match(line_count_1, line_count_2, 0))
    return matching_blocks  # List[Match]
def match_sequences_gnu_diff_legacy(filepath1: str, filepath2: str):
    # "--side-by-side", "--left-column"
    # "-B": will output "===" when diff-ing "\n\naaaa" and "aaa"
    diff_result = subprocess.run(["diff", "--unchanged-line-format==",
                                    "--new-line-format=+", "--old-line-format=-",
                                    filepath1, filepath2],
                                    capture_output=True, text=True,
                                    errors="ignore").stdout
    matching_blocks = []
    index_1, index_2, common_size = 0, 0, 0
    for c in diff_result:
        if c == "=":
            common_size += 1
        else:
            if common_size > 0:
                matching_blocks.append(difflib.Match(index_1, index_2, common_size))
                index_1 += common_size
                index_2 += common_size
                common_size = 0
            if c == "+":
                index_2 += 1
            elif c == "-":
                index_1 += 1
    matching_blocks.append(difflib.Match(index_1, index_2, 0))
    return matching_blocks  # List[Match]
def match_sequences_difflib(seq_debloated: Tuple[TraceRecord], seq_original: Tuple[TraceRecord]):
    matcher = difflib.SequenceMatcher(None,
                                      tuple(hash(s) for s in seq_debloated),
                                      tuple(hash(s) for s in seq_original),
                                      False)
    return matcher.get_matching_blocks()  # List[Match]


def main():
    args = read_args()

    # read trace files, clean and annotate traces, write back to trace files
    seq_debloated, seq_original = read_files(args)

    # diff two sequences to get all matching subsequences
    matching_blocks = match_sequences_gnu_diff(args.filepath1, args.filepath2)

    interesting_groups_collection = []
    for i in range(args.group_count):
        if i + 1 >= len(matching_blocks):
            break
        _start = matching_blocks[-2 - i].b + matching_blocks[-2 - i].size
        _end = matching_blocks[-1 - i].b
        # add last aligned position to interesting positions first (don't check if it's "STMT_EXEC")
        _interesting_positions = [seq_original[_start - 1].line]
        # all execution trace after the matching trace record cannot be aligned
        _interesting_positions += [seq_original[i].line for i in range(_start, _end)
                                   if seq_original[i].type == "STMT_EXEC"]
        # deduplicated (while retained order) line numbers
        _interesting_positions = tuple(dict().fromkeys(_interesting_positions).keys())
        interesting_groups_collection.append(_interesting_positions)

    # print(f"Interesting positions to consider: {', '.join(_interesting_positions[:10])}",
    #       f"(full result is in file '{args.filepath_output})'")
    with open(args.filepath_output, "w") as fo:
        print(f"Output analysis result to file '{args.filepath_output}'.")
        fo.write("# Each line is one aligned line number followed by multiple unaligned line numbers.\n\n")
        for i, g in enumerate(interesting_groups_collection):
            # fo.write(f"# {i + 1}\n")
            fo.write(" ".join(g) + "\n")

    if args.debug:
        crash_index = max((i for i, v in enumerate(seq_debloated) if v.type == "STMT_EXEC"), default=-1)
        crash_location = seq_debloated[crash_index].line if crash_index >= 0 else "UNKNOWN"
        last_aligned_original_index = matching_blocks[-2].b + matching_blocks[-2].size - 1
        print()
        print("------------------DEBUG_INFO------------------")
        print(f"Aligned Subsequences: {matching_blocks[:-1]} (every line index starts from 0)")
        print(f"Last Aligned Location: {seq_original[last_aligned_original_index].line}")
        print(f"Crash Location: {crash_location}")
        print("----------------END_DEBUG_INFO----------------")


if __name__ == "__main__":
    main()
