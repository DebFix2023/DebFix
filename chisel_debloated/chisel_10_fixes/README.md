### How to create a crash case

```
cd benchmark
bash mk_wdkir.sh $PROG_NAME $CRASH_ID
cd $PROG_NAME/crash_$CRASH_ID
```
Then, modify the files you need.

### Structure of a program's work directory

```
.
├── bin 
│   ├── origin.out
│   └── reduced.out
├── compile.sh
├── crash_0
│   ├── callgraph
│   │   ├── origin.jpeg
│   │   └── reduced.jpeg
│   ├── cov_src
│   │   ├── fixed
│   │   │   └── $PROG.fixed.c
│   │   ├── origin
│   │   │   ├── $PROG.origin.c
│   │   │   └── $PROG.origin.nodce.c
│   │   └── reduced
│   │       ├── $PROG.reduced.c
│   │       └── $PROG.reduced.nodce.c
│   ├── crash_info.txt
│   ├── input
│   │   └── fuzzed_file
│   └── testscript
│       └── input_0
├── crash_1
│   └── ...
├── crash_2
│   └── ...
├── crash_3
│   └── ...
├── getprog_cov.sh
├── run_cov.sh
└── src
    ├── origin
    │   └── $PROG.origin.c
    └── reduced
        └── $PROG.reduced.c
```


### How to run Cov for a crash case
First, install Cov. See https://github.com/qixin5/debaug.

Then, make sure you have set DEBAUG_DIR.
```
cd benchmark/$PROG_NAME/crash_$CRASH_ID
bash ./run_cov.sh $CRASH_ID
```
You'll see the source code debloated by Cov in `cov_src` directory.