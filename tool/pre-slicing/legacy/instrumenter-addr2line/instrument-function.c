#include <stdio.h>
#include <time.h>

#define TRACE_OUTPUT_FILE ".trace-output.tmp"

void __attribute__((constructor)) trace_begin(void) {
    FILE *fp_trace = fopen(TRACE_OUTPUT_FILE, "w");
    fclose(fp_trace);
}

// Do not close the file descriptor in trace_end function.
// Close it as soon as possible to make sure the file is closed when the program crashes.
// static FILE *fp_trace;
// void __attribute__((destructor)) trace_end(void) {
//     if (fp_trace != NULL) fclose(fp_trace);
// }

void __cyg_profile_func_enter(void *func, void *caller) {
    FILE *fp_trace = fopen(TRACE_OUTPUT_FILE, "a");
    fprintf(fp_trace, "e %p %p %lu\n", func, caller, time(NULL));
    fclose(fp_trace);
}

void __cyg_profile_func_exit(void *func, void *caller) {
    FILE *fp_trace = fopen(TRACE_OUTPUT_FILE, "a");
    fprintf(fp_trace, "x %p %p %lu\n", func, caller, time(NULL));
    fclose(fp_trace);
}
