LineNo:629
{
LineNo:630
  AFL_INIT_SET0("tcas");
LineNo:635
    if (argc < 13)
LineNo:649
      High_Confidence = atoi(*(argv + 2));
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:48
static char** afl_init_argv(int* argc) {
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:53
  char* ptr = in_buf;
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:54
  int   rc  = 1; /* start after argv[0] */
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:58
  while (*ptr) {
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:60
    ret[rc] = ptr;
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:63
    while (*ptr && !isspace(*ptr)) ptr++;
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:64
    *ptr = '\0';
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:65
    ptr++;
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:68
    while (*ptr && isspace(*ptr)) ptr++;
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:70
    rc++;
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:73
  *argc = rc;
/home/isabel0715/workspace/CrashRepair/benchmark/tcas-argv-fuzz/src/argv-fuzz-inl.h:75
  return ret;
