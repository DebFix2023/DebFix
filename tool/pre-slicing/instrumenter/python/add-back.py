#!/usr/bin/env python3

import argparse


def read_args():
    parser = argparse.ArgumentParser(description="Add back several lines of code and test if the crash is fixed.")

    parser.add_argument("--lines", dest="lines_list", metavar="LINES_LIST", help="lines to add back (example: '1-2,5-6')")
    parser.add_argument("--remove", action="store_true", dest="is_remove", help="remove lines rather than adding them back")

    parser.add_argument("filepath_debloated", metavar="DEBLOATED_FILEPATH", help="file path to the debloated source file")
    parser.add_argument("filepath_original", metavar="ORIGINAL_FILEPATH", help="file path to the original source file")

    args = parser.parse_args()
    args.lines_list = tuple(args.lines_list.split(",")) if args.lines_list else []

    return args


if __name__ == "__main__":
    args = read_args()
    # print(args)
    # print(len(args.lines_list))
    # read lines from debloated and original file
    with open(args.filepath_debloated, "r") as fd, open(args.filepath_original, "r") as fo:
        lines_debloated = fd.readlines()
        lines_original = fo.readlines()
    # perform patching
    for line_range in args.lines_list:
        if "-" in line_range:
            start, end = line_range.split("-")
            start, end = int(start) - 1, int(end)
            lines_debloated[start:end] = lines_original[start:end] if not args.is_remove else ["\n"] * (end - start)
        elif len(line_range):
            line = int(line_range) - 1
            lines_debloated[line] = "\n" if args.is_remove else lines_original[line]
    # write lines to debloated file
    with open(args.filepath_debloated, "w") as f:
        f.writelines(lines_debloated)
