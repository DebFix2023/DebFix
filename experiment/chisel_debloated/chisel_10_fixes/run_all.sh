#!/bin/bash
source setenv
bash -x $TOOL_DIR/run.sh benchmark/date-argv-fuzz/src/date.original.c benchmark/date-argv-fuzz/src/date.debloated.c benchmark/date-argv-fuzz/crashes/crash_1/input benchmark/date-argv-fuzz/crashes/crash_1 benchmark/date-argv-fuzz/crashes/crash_1/testscript benchmark/date-argv-fuzz/test/runDebInputs.sh benchmark/date-argv-fuzz/compile.sh
# bash -x $TOOL_DIR/run.sh benchmark/date-argv-fuzz/src/date.original.c benchmark/date-argv-fuzz/src/date.debloated.c benchmark/date-argv-fuzz/crashes/crash_2/input benchmark/date-argv-fuzz/crashes/crash_2 benchmark/date-argv-fuzz/crashes/crash_2/testscript benchmark/date-argv-fuzz/test/runDebInputs.sh benchmark/date-argv-fuzz/compile.sh
# bash -x $TOOL_DIR/run.sh benchmark/date-argv-fuzz/src/date.original.c benchmark/date-argv-fuzz/src/date.debloated.c benchmark/date-argv-fuzz/crashes/crash_3/input benchmark/date-argv-fuzz/crashes/crash_3 benchmark/date-argv-fuzz/crashes/crash_3/testscript benchmark/date-argv-fuzz/test/runDebInputs.sh benchmark/date-argv-fuzz/compile.sh

# bash -x $TOOL_DIR/run.sh benchmark/schedule-input-fuzz/src/schedule.original.c benchmark/schedule-input-fuzz/src/schedule.debloated.c benchmark/schedule-input-fuzz/crashes/crash_1/input benchmark/schedule-input-fuzz/crashes/crash_1 benchmark/schedule-input-fuzz/crashes/crash_1/testscript benchmark/schedule-input-fuzz/compile.sh
# bash -x $TOOL_DIR/run.sh benchmark/schedule-input-fuzz/src/schedule.original.c benchmark/schedule-input-fuzz/src/schedule.debloated.c benchmark/schedule-input-fuzz/crashes/crash_2/input benchmark/schedule-input-fuzz/crashes/crash_2 benchmark/schedule-input-fuzz/crashes/crash_2/testscript benchmark/schedule-input-fuzz/compile.sh

# bash -x $TOOL_DIR/run.sh benchmark/totinfo-input-fuzz/src/totinfo.original.c benchmark/totinfo-input-fuzz/src/totinfo.debloated.c benchmark/totinfo-input-fuzz/crashes/crash_1/input benchmark/totinfo-input-fuzz/crashes/crash_1 benchmark/totinfo-input-fuzz/crashes/crash_1/testscript benchmark/totinfo-input-fuzz/compile.sh 

# bash -x $TOOL_DIR/run.sh benchmark/tcas-argv-fuzz/src/tcas.original.c benchmark/tcas-argv-fuzz/src/tcas.debloated.c benchmark/tcas-argv-fuzz/crashes/crash_1/input benchmark/tcas-argv-fuzz/crashes/crash_1 benchmark/tcas-argv-fuzz/crashes/crash_1/testscript benchmark/tcas-argv-fuzz/compile.sh 

# bash -x $TOOL_DIR/run.sh benchmark/grep-argv-fuzz/src/grep.original.c benchmark/grep-argv-fuzz/src/grep.debloated.c benchmark/grep-argv-fuzz/crashes/crash_1/input benchmark/grep-argv-fuzz/crashes/crash_1 benchmark/grep-argv-fuzz/crashes/crash_1/testscript benchmark/grep-argv-fuzz/compile.sh 

# bash -x $TOOL_DIR/run.sh benchmark/tar-argv-fuzz/src/tar.original.c benchmark/tar-argv-fuzz/src/tar.debloated.c benchmark/tar-argv-fuzz/crashes/crash_1/input benchmark/tar-argv-fuzz/crashes/crash_1 benchmark/tar-argv-fuzz/crashes/crash_1/testscript benchmark/tar-argv-fuzz/compile.sh  

# bash -x $TOOL_DIR/run.sh benchmark/rm-argv-fuzz/src/rm.original.c benchmark/rm-argv-fuzz/src/rm.debloated.c benchmark/rm-argv-fuzz/crashes/crash_1/input benchmark/rm-argv-fuzz/crashes/crash_1 benchmark/rm-argv-fuzz/crashes/crash_1/testscript benchmark/rm-argv-fuzz/compile.sh  