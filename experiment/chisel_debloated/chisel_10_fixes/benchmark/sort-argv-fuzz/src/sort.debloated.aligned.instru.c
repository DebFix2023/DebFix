#include "argv-fuzz-inl.h"
typedef long __time_t;
typedef long __syscall_slong_t;
typedef __time_t time_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef unsigned long size_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __uid_t uid_t;
struct stat
{
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
typedef __ino_t ino_t;
typedef __dev_t dev_t;
struct hash_tuning
{
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
typedef unsigned long uintmax_t;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker
{
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[(15UL * sizeof(int) - 4UL * sizeof(void *)) - sizeof(size_t)];
};
typedef __off_t off_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
struct allocator;
struct allocator;
struct allocator;
struct allocator
{
  void *(*allocate)(size_t);
  void *(*reallocate)(void *, size_t);
  void (*free)(void *);
  void (*die)(size_t);
};
typedef long ptrdiff_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
enum quoting_style
{
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  c_maybe_quoting_style = 4,
  escape_quoting_style = 5,
  locale_quoting_style = 6,
  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
enum strtol_error
{
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct option
{
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
typedef unsigned int uint32_t;
typedef int __pid_t;
typedef __pid_t pid_t;
typedef int wchar_t;
typedef int nl_item;
typedef unsigned int wint_t;
typedef long __suseconds_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
union __anonunion___value_23
{
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22
{
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef __mbstate_t mbstate_t;
struct mbchar
{
  char const *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
struct __anonstruct___sigset_t_9
{
  unsigned long __val[1024UL / (8UL * sizeof(unsigned long))];
};
typedef struct __anonstruct___sigset_t_9 __sigset_t;
typedef __sigset_t sigset_t;
struct timezone
{
  int tz_minuteswest;
  int tz_dsttime;
};
struct obstack;
struct obstack;
struct obstack;
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_26
{
  long tempint;
  void *tempptr;
};
struct obstack
{
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  union __anonunion_temp_26 temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct Tokens
{
  size_t n_tok;
  char **tok;
  size_t *tok_len;
  struct obstack o_data;
  struct obstack o_tok;
  struct obstack o_tok_len;
};
struct randread_source;
struct randread_source;
struct randread_source;
typedef unsigned long uint_least64_t;
typedef struct timezone *__restrict __timezone_ptr_t;
typedef uint_least64_t isaac_word;
struct isaac_state
{
  isaac_word m[1 << 8];
  isaac_word a;
  isaac_word b;
  isaac_word c;
};
union __anonunion_data_31
{
  isaac_word w[1 << 8];
  unsigned char b[(unsigned long)(1 << 8) * sizeof(isaac_word)];
};
struct isaac
{
  size_t buffered;
  struct isaac_state state;
  union __anonunion_data_31 data;
};
union __anonunion_buf_30
{
  char c[2UL * ((unsigned long)(1 << 8) * sizeof(isaac_word))];
  struct isaac isaac;
};
struct randread_source
{
  FILE *source;
  void (*handler)(void const *);
  void const *handler_arg;
  union __anonunion_buf_30 buf;
};
struct quoting_options;
struct quoting_options;
struct quoting_options;
struct quoting_options
{
  enum quoting_style style;
  int flags;
  unsigned int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
  char const *left_quote;
  char const *right_quote;
};
struct slotvec
{
  size_t size;
  char *val;
};
struct mbuiter_multi
{
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
enum nproc_query
{
  NPROC_ALL = 0,
  NPROC_CURRENT = 1,
  NPROC_CURRENT_OVERRIDABLE = 2
};
typedef unsigned long __cpu_mask;
struct __anonstruct_cpu_set_t_24
{
  __cpu_mask __bits[1024UL / (8UL * sizeof(__cpu_mask))];
};
typedef struct __anonstruct_cpu_set_t_24 cpu_set_t;
struct md5_ctx
{
  uint32_t A;
  uint32_t B;
  uint32_t C;
  uint32_t D;
  uint32_t total[2];
  uint32_t buflen;
  uint32_t buffer[32];
};
struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
};
typedef struct __pthread_internal_list __pthread_list_t;
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;
  unsigned int __nusers;
  int __kind;
  short __spins;
  short __elision;
  __pthread_list_t __list;
};
union __anonunion_pthread_mutex_t_11
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long __align;
};
typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_12
{
  char __size[4];
  int __align;
};
typedef union __anonunion_pthread_mutexattr_t_12 pthread_mutexattr_t;
struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;
};
struct heap;
struct heap;
struct heap;
struct heap
{
  void **array;
  size_t capacity;
  size_t count;
  int (*compare)(void const *, void const *);
};
struct hash_entry
{
  void *data;
  struct hash_entry *next;
};
struct hash_table
{
  struct hash_entry *bucket;
  struct hash_entry const *bucket_limit;
  size_t n_buckets;
  size_t n_buckets_used;
  size_t n_entries;
  Hash_tuning const *tuning;
  size_t (*hasher)(void const *, size_t);
  _Bool (*comparator)(void const *, void const *);
  void (*data_freer)(void *);
  struct hash_entry *free_entry_list;
};
struct F_triple
{
  char *name;
  ino_t st_ino;
  dev_t st_dev;
};
typedef long __clock_t;
union sigval
{
  int sival_int;
  void *sival_ptr;
};
typedef union sigval sigval_t;
typedef __clock_t __sigchld_clock_t;
struct __anonstruct__kill_23
{
  __pid_t si_pid;
  __uid_t si_uid;
};
struct __anonstruct__timer_24
{
  int si_tid;
  int si_overrun;
  sigval_t si_sigval;
};
struct __anonstruct__rt_25
{
  __pid_t si_pid;
  __uid_t si_uid;
  sigval_t si_sigval;
};
struct __anonstruct__sigchld_26
{
  __pid_t si_pid;
  __uid_t si_uid;
  int si_status;
  __sigchld_clock_t si_utime;
  __sigchld_clock_t si_stime;
};
struct __anonstruct__sigfault_27
{
  void *si_addr;
  short si_addr_lsb;
};
struct __anonstruct__sigpoll_28
{
  long si_band;
  int si_fd;
};
struct __anonstruct__sigsys_29
{
  void *_call_addr;
  int _syscall;
  unsigned int _arch;
};
union __anonunion__sifields_22
{
  int _pad[128UL / sizeof(int) - 4UL];
  struct __anonstruct__kill_23 _kill;
  struct __anonstruct__timer_24 _timer;
  struct __anonstruct__rt_25 _rt;
  struct __anonstruct__sigchld_26 _sigchld;
  struct __anonstruct__sigfault_27 _sigfault;
  struct __anonstruct__sigpoll_28 _sigpoll;
  struct __anonstruct__sigsys_29 _sigsys;
};
struct __anonstruct_siginfo_t_21
{
  int si_signo;
  int si_errno;
  int si_code;
  union __anonunion__sifields_22 _sifields;
};
typedef struct __anonstruct_siginfo_t_21 siginfo_t;
union __anonunion___sigaction_handler_41
{
  void (*sa_handler)(int);
  void (*sa_sigaction)(int, siginfo_t *, void *);
};
struct sigaction
{
  union __anonunion___sigaction_handler_41 __sigaction_handler;
  __sigset_t sa_mask;
  int sa_flags;
  void (*sa_restorer)(void);
};
enum __anonenum_fadvice_t_19
{
  FADVISE_NORMAL = 0,
  FADVISE_SEQUENTIAL = 2,
  FADVISE_NOREUSE = 5,
  FADVISE_DONTNEED = 4,
  FADVISE_WILLNEED = 3,
  FADVISE_RANDOM = 1
};
typedef enum __anonenum_fadvice_t_19 fadvice_t;
typedef unsigned long __rlim_t;
typedef unsigned long pthread_t;
union pthread_attr_t
{
  char __size[56];
  long __align;
};
typedef union pthread_attr_t pthread_attr_t;
struct __anonstruct___data_7
{
  int __lock;
  unsigned int __futex;
  unsigned long long __total_seq;
  unsigned long long __wakeup_seq;
  unsigned long long __woken_seq;
  void *__mutex;
  unsigned int __nwaiters;
  unsigned int __broadcast_seq;
};
union __anonunion_pthread_cond_t_6
{
  struct __anonstruct___data_7 __data;
  char __size[48];
  long long __align;
};
typedef union __anonunion_pthread_cond_t_6 pthread_cond_t;
union __anonunion_pthread_condattr_t_8
{
  char __size[4];
  int __align;
};
typedef union __anonunion_pthread_condattr_t_8 pthread_condattr_t;
typedef void (*__sighandler_t)(int);
enum __rlimit_resource
{
  RLIMIT_CPU = 0,
  RLIMIT_FSIZE = 1,
  RLIMIT_DATA = 2,
  RLIMIT_STACK = 3,
  RLIMIT_CORE = 4,
  __RLIMIT_RSS = 5,
  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = 7,
  RLIMIT_AS = 9,
  __RLIMIT_NPROC = 6,
  __RLIMIT_MEMLOCK = 8,
  __RLIMIT_LOCKS = 10,
  __RLIMIT_SIGPENDING = 11,
  __RLIMIT_MSGQUEUE = 12,
  __RLIMIT_NICE = 13,
  __RLIMIT_RTPRIO = 14,
  __RLIMIT_RTTIME = 15,
  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = 16
};
typedef __rlim_t rlim_t;
struct rlimit
{
  rlim_t rlim_cur;
  rlim_t rlim_max;
};
typedef enum __rlimit_resource __rlimit_resource_t;
enum blanktype
{
  bl_start = 0,
  bl_end = 1,
  bl_both = 2
};
struct line
{
  char *text;
  size_t length;
  char *keybeg;
  char *keylim;
};
struct buffer
{
  char *buf;
  size_t used;
  size_t nlines;
  size_t alloc;
  size_t left;
  size_t line_bytes;
  _Bool eof;
};
struct keyfield
{
  size_t sword;
  size_t schar;
  size_t eword;
  size_t echar;
  _Bool const *ignore;
  char const *translate;
  _Bool skipsblanks;
  _Bool skipeblanks;
  _Bool numeric;
  _Bool random;
  _Bool general_numeric;
  _Bool human_numeric;
  _Bool month;
  _Bool reverse;
  _Bool version;
  _Bool obsolete_used;
  struct keyfield *next;
};
struct month
{
  char const *name;
  int val;
};
struct merge_node
{
  struct line *lo;
  struct line *hi;
  struct line *end_lo;
  struct line *end_hi;
  struct line **dest;
  size_t nlo;
  size_t nhi;
  struct merge_node *parent;
  struct merge_node *lo_child;
  struct merge_node *hi_child;
  unsigned int level;
  _Bool queued;
  pthread_mutex_t lock;
};
struct merge_node_queue
{
  struct heap *priority_queue;
  pthread_mutex_t mutex;
  pthread_cond_t cond;
};
struct cs_status
{
  _Bool valid;
  sigset_t sigs;
};
struct tempnode
{
  struct tempnode *volatile next;
  pid_t pid;
  char state;
  char name[1];
};
struct sortfile
{
  char const *name;
  struct tempnode *temp;
};
union __anonunion_101
{
  int __in;
  int __i;
};
union __anonunion_102
{
  int __in;
  int __i;
};
struct thread_args
{
  struct line *lines;
  size_t nthreads;
  size_t total_lines;
  struct merge_node *node;
  struct merge_node_queue *queue;
  FILE *tfp;
  char const *output_temp;
};
struct timespec dtotimespec(double sec);











































__attribute__((__noreturn__)) void xalloc_die(void);
char *last_component(char const *name) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2), __leaf__)) memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int *(__attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd, struct stat *__buf);
extern int close(int __fd);




Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate, Hash_tuning const *tuning, size_t (*hasher)(void const *, size_t), _Bool (*comparator)(void const *, void const *), void (*data_freer)(void *));
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0, void const *entry);
int hash_insert_if_absent(Hash_table *table___0, void const *entry, void const **matched_ent);
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) free)(void *__ptr);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) __assert_fail)(char const *__assertion, char const *__file, unsigned int __line, char const *__function);
int fd_safer(int fd);
extern void error(int __status, int __errnum, char const *__format, ...);
char const *quote(char const *name);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) gettext)(char const *__msgid) __attribute__((__format_arg__(1)));
void close_stdout(void);
extern struct _IO_FILE *stdout;

extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
int volatile exit_failure;
char *quotearg_colon(char const *arg);


void close_stdout(void)
{
  printf("\nFUNC_CALL;close_stdout();\n");
printf("\nSTMT_EXEC;;733\n");
char const *write_error;
  printf("\nSTMT_EXEC;;734\n");
char const *tmp;


  printf("\nSTMT_EXEC;;737\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;738\n");
int tmp___3;


  {
    printf("\nSTMT_EXEC;;742\n");
tmp___3 = close_stream(stdout);
    printf("\nSTMT_EXEC;;743\n");
if (tmp___3 != 0)
    {











      printf("\nSTMT_EXEC;;756\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = (char const *)gettext("write error");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;757\n");
write_error = tmp;







      {
        printf("\nSTMT_EXEC;;766\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;767\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___2, "%s", write_error);printf("\nFUNC_RETURN;;\n");

      }

    }







  }
printf("\nFUNC_RETURN;;\n");
}
extern struct _IO_FILE *stdin;
int rpl_fflush(FILE *stream);
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset, int whence);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) ferror_unlocked)(FILE *__stream);
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp);
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
int close_stream(FILE *stream)
{




  printf("\nFUNC_CALL;close_stream(FILE *);\n");
printf("\nSTMT_EXEC;;792\n");
_Bool fclose_fail;
  printf("\nSTMT_EXEC;;793\n");
int tmp___1;


  {




    printf("\nSTMT_EXEC;;801\n");
tmp___1 = rpl_fclose(stream);
    printf("\nSTMT_EXEC;;802\n");
fclose_fail = (_Bool)(tmp___1 != 0);





    {
      printf("\nSTMT_EXEC;;809\n");
if (fclose_fail)
      {















        printf("\nSTMT_EXEC;;826\n");
printf("\nFUNC_RETURN;;\n");
return (-1);


      }
    }
    printf("\nSTMT_EXEC;;831\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int rpl_fcntl(int fd, int action, ...);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1), __leaf__)) memchr)(void const *__s, int __c, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s) __attribute__((__pure__));
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) abort)(void);

extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2), __leaf__)) memmove)(void *__dest, void const *__src, size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strchr)(char const *__s, int __c) __attribute__((__pure__));
size_t triple_hash(void const *x, size_t table_size) __attribute__((__pure__));
_Bool triple_compare_ino_str(void const *x, void const *y) __attribute__((__pure__));
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strdup)(char const *__s) __attribute__((__malloc__));
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
































_Bool c_isalnum(int c) __attribute__((__const__));
_Bool c_isalpha(int c) __attribute__((__const__));
_Bool c_isdigit(int c) __attribute__((__const__));
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isalnum(int c) __attribute__((__const__));





































_Bool c_isalpha(int c) __attribute__((__const__));






















_Bool c_isdigit(int c) __attribute__((__const__));






















_Bool c_isspace(int c) __attribute__((__const__));


















































int c_tolower(int c) __attribute__((__const__));






















char *last_component(char const *name) __attribute__((__pure__));


















































ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist, char const *vallist, size_t valsize, void (*exit_fn)(void));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) getenv)(char const *__name);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) memcmp)(void const *__s1, void const *__s2, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strcpy)(char *__restrict __dest, char const *__restrict __src);

ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist, size_t valsize) __attribute__((__pure__));
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize);
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int putc_unlocked(int __c, FILE *__stream);
extern int fputs_unlocked(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strncmp)(char const *__s1, char const *__s2, size_t __n) __attribute__((__pure__));
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char const *quote_n(int n, char const *name);
__attribute__((__noreturn__)) void usage(int status);








ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist, size_t valsize) __attribute__((__pure__));


























































































































































extern __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__, __leaf__)) realloc)(void *__ptr, size_t __size);

__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
__inline static void *xnmalloc(size_t n, size_t s)
{

  printf("\nFUNC_CALL;xnmalloc(size_t,size_t);\n");
printf("\nSTMT_EXEC;;1279\n");
void *tmp___0;
  {












    printf("\nSTMT_EXEC;;1293\n");
tmp___0 = xmalloc(n * s);
    printf("\nSTMT_EXEC;;1294\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) unsigned short const **(__attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) uintmax_t(__attribute__((__leaf__)) strtoumax)(char const *__restrict __nptr, char **__restrict __endptr, int __base);
strtol_error xstrtoumax(char const *s, char **ptr, int strtol_base, uintmax_t *val, char const *valid_suffixes);


































strtol_error xstrtoumax(char const *s, char **ptr, int strtol_base, uintmax_t *val, char const *valid_suffixes)
{


























































  printf("\nFUNC_CALL;xstrtoumax(const char *,char **,int,uintmax_t *,const char *);\n");
printf("\nSTMT_EXEC;;1394\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);









































































































































































































printf("\nFUNC_RETURN;;\n");
}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base, unsigned long *val, char const *valid_suffixes);
extern __attribute__((__nothrow__)) unsigned long(__attribute__((__nonnull__(1), __leaf__)) strtoul)(char const *__restrict __nptr, char **__restrict __endptr, int __base);









































































































































































































































































































extern __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__)) strtol)(char const *__restrict __nptr, char **__restrict __endptr, int __base);
__attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error err, int opt_idx, char c, struct option const *long_options___2, char const *arg);
static void xstrtol_error(enum strtol_error err, int opt_idx, char c, struct option const *long_options___2, char const *arg, int exit_status)
{
  printf("\nFUNC_CALL;xstrtol_error(enum strtol_error,int,char,const struct option *,const char *,int);\n");
printf("\nSTMT_EXEC;;1900\n");
char const *hyphens;
  printf("\nSTMT_EXEC;;1901\n");
char const *msgid;
  printf("\nSTMT_EXEC;;1902\n");
char const *option;
  printf("\nSTMT_EXEC;;1903\n");
char option_buffer[2];
  printf("\nSTMT_EXEC;;1904\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;1906\n");
hyphens = "--";




















    printf("\nSTMT_EXEC;;1927\n");
msgid = "invalid %s%s argument \'%s\'";









    {
      printf("\nSTMT_EXEC;;1938\n");
hyphens -= opt_idx;
      printf("\nSTMT_EXEC;;1939\n");
option_buffer[0] = c;

      printf("\nSTMT_EXEC;;1941\n");
option = (char const *)(option_buffer);
    }




    printf("\nSTMT_EXEC;;1947\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext(msgid);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1948\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(exit_status, 0, (char const *)tmp, hyphens, option, arg);printf("\nFUNC_RETURN;;\n");


  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error err, int opt_idx, char c, struct option const *long_options___2, char const *arg);
void xstrtol_fatal(enum strtol_error err, int opt_idx, char c, struct option const *long_options___2, char const *arg)
{

  printf("\nFUNC_CALL;xstrtol_fatal(enum strtol_error,int,char,const struct option *,const char *);\n");
printf("\nSTMT_EXEC;;1956\n");
xstrtol_error(err, opt_idx, c, long_options___2, arg, (int)exit_failure);


printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) ferror)(FILE *__stream);
int xnanosleep(double seconds);
int(__attribute__((__nonnull__(1))) rpl_nanosleep)(struct timespec const *requested_delay, struct timespec *remaining_delay);


































int memcoll0(char const *s1, size_t s1size, char const *s2, size_t s2size);
char *quotearg_n_style_mem(int n, enum quoting_style s, char const *arg, size_t argsize);
int xmemcoll0(char const *s1, size_t s1size, char const *s2, size_t s2size);





































void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));



























extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) calloc)(size_t __nmemb, size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1), __leaf__)) memset)(void *__s, int __c, size_t __n);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xmalloc(size_t n)
{
  printf("\nFUNC_CALL;xmalloc(size_t);\n");
printf("\nSTMT_EXEC;;2071\n");
void *p;
  printf("\nSTMT_EXEC;;2072\n");
void *tmp;
  {
    printf("\nSTMT_EXEC;;2074\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
tmp = malloc(n);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2075\n");
p = tmp;
    printf("\nSTMT_EXEC;;2076\n");
if (!p)
    {


      printf("\nSTMT_EXEC;;2080\n");
xalloc_die();

    }
    printf("\nSTMT_EXEC;;2083\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));






















void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));












void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));










__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void)
{
  printf("\nFUNC_CALL;xalloc_die();\n");
printf("\nSTMT_EXEC;;2136\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;2138\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("memory exhausted");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2139\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error((int)exit_failure, 0, "%s", tmp);printf("\nFUNC_RETURN;;\n");


  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void));
extern __pid_t waitpid(__pid_t __pid, int *__stat_loc, int __options);
extern int printf(char const *__restrict __format, ...);

void version_etc_arn(FILE *stream, char const *command_name, char const *package, char const *version, char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package, char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...) __attribute__((__sentinel__));


















































































































































void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...) __attribute__((__sentinel__));











extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) nl_langinfo)(nl_item __item);
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i, char *buf___1);
char const *locale_charset(void);
#pragma GCC diagnostic ignored "-Wtype-limits"







































#pragma GCC diagnostic ignored "-Wtype-limits"
char *(__attribute__((__warn_unused_result__)) uinttostr)(unsigned int i, char *buf___1);







































extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) mbsinit)(mbstate_t const *__ps) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s, size_t __n, mbstate_t *__restrict __p);







#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
int __attribute__((__pure__)) strnumcmp(char const *a, char const *b, int decimal_point___0, int thousands_sep___0);

































































































































































































































































































































































































































































































































size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));

















extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) tolower)(int __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) toupper)(int __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) sigprocmask)(int __how, sigset_t const *__restrict __set, sigset_t *__restrict __oset);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) feof_unlocked)(FILE *__stream);







extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) raise)(int __sig);
extern __attribute__((__nothrow__)) __pid_t fork(void);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) unlink)(char const *__name);
extern int fgetc(FILE *__stream);
extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
void readtokens0_init(struct Tokens *t);
_Bool readtokens0(FILE *in, struct Tokens *t);






















































































































































































































extern int getc_unlocked(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) fileno)(FILE *__stream);
struct randread_source *randread_new(char const *name, size_t bytes_bound);
void randread(struct randread_source *s, void *buf___1, size_t size);
int randread_free(struct randread_source *s);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) setvbuf)(FILE *__restrict __stream, char *__restrict __buf, int __modes, size_t __n);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) gettimeofday)(struct timeval *__restrict __tv, __timezone_ptr_t __tz);
extern __attribute__((__nothrow__)) __pid_t(__attribute__((__leaf__)) getpid)(void);
extern __attribute__((__nothrow__)) __pid_t(__attribute__((__leaf__)) getppid)(void);
extern __attribute__((__nothrow__)) __uid_t(__attribute__((__leaf__)) getuid)(void);
extern __attribute__((__nothrow__)) __gid_t(__attribute__((__leaf__)) getgid)(void);
void isaac_seed(struct isaac_state *s);
void isaac_refill(struct isaac_state *s, isaac_word *result);
FILE *fopen_safer(char const *file, char const *mode);

































































































































































































































































































































void *hash_delete(Hash_table *table___0, void const *entry);























































































































































































































































































































































































































































































































































#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"


int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);

__inline static char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));



















extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) iswprint)(wint_t __wc);
























































static char const *gettext_quote(char const *msgid, enum quoting_style s)
{







  printf("\nFUNC_CALL;gettext_quote(const char *,enum quoting_style);\n");
printf("\nSTMT_EXEC;;4143\n");
char const *tmp___4;
  {






































    {
      printf("\nSTMT_EXEC;;4184\n");
tmp___4 = "\'";
    }
    printf("\nSTMT_EXEC;;4186\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___4);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t quotearg_buffer_restyled(char *buffer, size_t buffersize, char const *arg, size_t argsize, enum quoting_style quoting_style, int flags, unsigned int const *quote_these_too, char const *left_quote, char const *right_quote)
{
  printf("\nFUNC_CALL;quotearg_buffer_restyled(char *,size_t,const char *,size_t,enum quoting_style,int,const unsigned int *,const char *,const char *);\n");
printf("\nSTMT_EXEC;;4191\n");
size_t i;
  printf("\nSTMT_EXEC;;4192\n");
size_t len;
  printf("\nSTMT_EXEC;;4193\n");
char const *quote_string;





  printf("\nSTMT_EXEC;;4199\n");
unsigned char c;















  printf("\nSTMT_EXEC;;4215\n");
int tmp___6;

  {
    printf("\nSTMT_EXEC;;4218\n");
len = (size_t)0;






































































    {
      printf("\nSTMT_EXEC;;4290\n");
left_quote = gettext_quote("`", quoting_style);

    }

    {
      printf("\nSTMT_EXEC;;4295\n");
quote_string = left_quote;

      {







        {
          printf("\nSTMT_EXEC;;4306\n");
*(buffer + len) = (char)*quote_string;
        }
        printf("\nSTMT_EXEC;;4308\n");
len++;

      };


    }
































    printf("\nSTMT_EXEC;;4346\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;4347\n");
while (1)
    {

      {
        printf("\nSTMT_EXEC;;4351\n");
tmp___6 = (int const) * (arg + i) == 0;
      }




      printf("\nSTMT_EXEC;;4357\n");
if (tmp___6)
      {
        printf("\nSTMT_EXEC;;4359\n");
goto while_break___3;
      }



















      printf("\nSTMT_EXEC;;4380\n");
c = (unsigned char)*(arg + i);

      {

































































































































































































































































































































































































































































































































































































































































































































































































































































































































        {
          printf("\nSTMT_EXEC;;5281\n");
*(buffer + len) = (char)c;
        }
        printf("\nSTMT_EXEC;;5283\n");
len++;

      };

      printf("\nSTMT_EXEC;;5287\n");
i++;


































































    }
  while_break___3:;

    {





















      {
        printf("\nSTMT_EXEC;;5380\n");
*(buffer + len) = (char)*quote_string;
      };


    }










    printf("\nSTMT_EXEC;;5395\n");
printf("\nFUNC_RETURN;;\n");
return (len);



  }
printf("\nFUNC_RETURN;;\n");
}
static char slot0[256];

static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize, struct quoting_options const *options)
{



  printf("\nFUNC_CALL;quotearg_n_options(int,const char *,size_t,const struct quoting_options *);\n");
printf("\nSTMT_EXEC;;5410\n");
struct slotvec *sv;




  printf("\nSTMT_EXEC;;5415\n");
size_t size;
  printf("\nSTMT_EXEC;;5416\n");
char *val;
  printf("\nSTMT_EXEC;;5417\n");
int flags;

  printf("\nSTMT_EXEC;;5419\n");
size_t tmp___2;

  {



    printf("\nSTMT_EXEC;;5425\n");
sv = slotvec;





































    printf("\nSTMT_EXEC;;5463\n");
size = (sv + n)->size;
    printf("\nSTMT_EXEC;;5464\n");
val = (sv + n)->val;
    printf("\nSTMT_EXEC;;5465\n");
flags = (int)(options->flags | 1);
    printf("\nSTMT_EXEC;;5466\n");
tmp___2 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style)options->style, flags, (unsigned int const *)(options->quote_these_too), (char const *)options->left_quote, (char const *)options->right_quote);















    printf("\nSTMT_EXEC;;5482\n");
printf("\nFUNC_RETURN;;\n");
return (val);
  }
printf("\nFUNC_RETURN;;\n");
}



















































struct quoting_options quote_quoting_options = {(enum quoting_style)6, 0, {0U}, (char const *)((void *)0), (char const *)((void *)0)};
char const *quote_n(int n, char const *name)
{
  printf("\nFUNC_CALL;quote_n(int,const char *);\n");
printf("\nSTMT_EXEC;;5539\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;5541\n");
tmp = (char const *)quotearg_n_options(n, name, (size_t)-1, (struct quoting_options const *)(&quote_quoting_options));
    printf("\nSTMT_EXEC;;5542\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char const *quote(char const *name)
{
  printf("\nFUNC_CALL;quote(const char *);\n");
printf("\nSTMT_EXEC;;5547\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;5549\n");
tmp = quote_n(0, name);
    printf("\nSTMT_EXEC;;5550\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"




















































































void set_program_name(char const *argv0);


extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strrchr)(char const *__s, int __c) __attribute__((__pure__));









































int posix2_version(void);













































extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) stpcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) pipe)(int *__pipedes);
double physmem_total(void);
double physmem_available(void);
extern __attribute__((__nothrow__)) long(__attribute__((__leaf__)) sysconf)(int __name);












































int dup_safer(int fd);
#pragma GCC diagnostic ignored "-Wtype-limits"
unsigned long num_processors(enum nproc_query query);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) __sched_cpucount)(size_t __setsize, cpu_set_t const *__setp);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) sched_getaffinity)(__pid_t __pid, size_t __cpusetsize, cpu_set_t *__cpuset);


















unsigned long num_processors(enum nproc_query query)
{




















































































































  printf("\nFUNC_CALL;num_processors(enum nproc_query);\n");
printf("\nSTMT_EXEC;;5920\n");
printf("\nFUNC_RETURN;;\n");
return (1UL);

printf("\nFUNC_RETURN;;\n");
}
extern int nanosleep(struct timespec const *__requested_time, struct timespec *__remaining);




















































int mkstemp_safer(char *templ);
extern int(__attribute__((__nonnull__(1))) mkstemp)(char *__template);










extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcoll)(char const *__s1, char const *__s2) __attribute__((__pure__));





















































































__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx);
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_block)(void const *buffer, size_t len, struct md5_ctx *ctx);
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_bytes)(void const *buffer, size_t len, struct md5_ctx *ctx);
__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx, void *resbuf);
__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx const *ctx, void *resbuf);

__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx);















__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx const *ctx, void *resbuf);












__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx, void *resbuf);






























__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_bytes)(void const *buffer, size_t len, struct md5_ctx *ctx);




















































__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_block)(void const *buffer, size_t len, struct md5_ctx *ctx);




































































































































































































































































































































































































































































































































































































































































































int mbsnwidth(char const *string, size_t nbytes, int flags);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) wcwidth)(wchar_t __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) iswcntrl)(wint_t __wc);











































































































































































































































































































































































































































































































































int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2);
extern __attribute__((__nothrow__)) wint_t(__attribute__((__leaf__)) towlower)(wint_t __wc);
























































































































































































































































extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) exit)(int __status);

extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getopt_long)(int ___argc, char *const *___argv, char const *__shortopts, struct option const *__longopts, int *__longind);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) pthread_mutex_init)(pthread_mutex_t *__mutex, pthread_mutexattr_t const *__mutexattr);
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
extern __attribute__((__nothrow__)) FILE *(__attribute__((__leaf__)) fdopen)(int __fd, char const *__modes);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int ungetc(int __c, FILE *__stream);





















































































































































































































































extern __attribute__((__nothrow__)) long double(__attribute__((__nonnull__(1), __leaf__)) strtold)(char const *__restrict __nptr, char **__restrict __endptr);
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
extern __attribute__((__nothrow__)) struct lconv *(__attribute__((__leaf__)) localeconv)(void);
struct heap *heap_alloc(int (*compare___0)(void const *, void const *), size_t n_reserve);
void heap_free(struct heap *heap);
int heap_insert(struct heap *heap, void *item);
void *heap_remove_top(struct heap *heap);
static size_t heapify_down(void **array, size_t count, size_t initial, int (*compare___0)(void const *, void const *));
static void heapify_up(void **array, size_t count, int (*compare___0)(void const *, void const *));






struct heap *heap_alloc(int (*compare___0)(void const *, void const *), size_t n_reserve)
{
  printf("\nFUNC_CALL;heap_alloc(int (*)(const void *, const void *),size_t);\n");
printf("\nSTMT_EXEC;;7936\n");
struct heap *heap;
  printf("\nSTMT_EXEC;;7937\n");
struct heap *tmp;
  {
    printf("\nSTMT_EXEC;;7939\n");
tmp = (struct heap *)xmalloc(sizeof(*heap));
    printf("\nSTMT_EXEC;;7940\n");
heap = tmp;




    printf("\nSTMT_EXEC;;7945\n");
heap->array = (void **)xnmalloc(n_reserve, sizeof(*(heap->array)));


    printf("\nSTMT_EXEC;;7948\n");
heap->count = (size_t)0;








    printf("\nSTMT_EXEC;;7957\n");
printf("\nFUNC_RETURN;;\n");
return (heap);
  }
printf("\nFUNC_RETURN;;\n");
}
void heap_free(struct heap *heap)
{

  printf("\nFUNC_CALL;heap_free(struct heap *);\n");
printf("\nSTMT_EXEC;;7963\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)heap->array);printf("\nFUNC_RETURN;;\n");

  printf("\nSTMT_EXEC;;7964\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)heap);printf("\nFUNC_RETURN;;\n");



printf("\nFUNC_RETURN;;\n");
}
int heap_insert(struct heap *heap, void *item)
{





  printf("\nFUNC_CALL;heap_insert(struct heap *,void *);\n");
printf("\nSTMT_EXEC;;7975\n");
(heap->count)++;
  printf("\nSTMT_EXEC;;7976\n");
*(heap->array + heap->count) = item;

  printf("\nSTMT_EXEC;;7978\n");
printf("\nFUNC_RETURN;;\n");
return (0);

printf("\nFUNC_RETURN;;\n");
}
void *heap_remove_top(struct heap *heap)
{
  printf("\nFUNC_CALL;heap_remove_top(struct heap *);\n");
printf("\nSTMT_EXEC;;7983\n");
void *top;

  {




    printf("\nSTMT_EXEC;;7990\n");
top = *(heap->array + 1);

    printf("\nSTMT_EXEC;;7992\n");
(heap->count)--;


    printf("\nSTMT_EXEC;;7995\n");
printf("\nFUNC_RETURN;;\n");
return (top);
  }
printf("\nFUNC_RETURN;;\n");
}




































































size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table___0, size_t candidate);





















size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));




















static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate) __attribute__((__const__));





































static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) __attribute__((__const__));



























































































































































































































































































































































































































































































































































































size_t hash_pjw(void const *x, size_t tablesize) __attribute__((__pure__));
size_t triple_hash(void const *x, size_t table_size) __attribute__((__pure__));












_Bool triple_compare_ino_str(void const *x, void const *y) __attribute__((__pure__));



































size_t hash_pjw(void const *x, size_t tablesize) __attribute__((__pure__));




















_Bool hard_locale(int category);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) setlocale)(int __category, char const *__locale);









































































extern int fflush_unlocked(FILE *__stream);
extern void(__attribute__((__nonnull__(1, 4))) qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __attribute__((__nothrow__)) __off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset, int __whence);






























extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) dup2)(int __fd, int __fd2);
FILE *fopen_safer(char const *file, char const *mode)
{
  printf("\nFUNC_CALL;fopen_safer(const char *,const char *);\n");
printf("\nSTMT_EXEC;;8905\n");
FILE *fp;
  printf("\nSTMT_EXEC;;8906\n");
FILE *tmp;











  {
    printf("\nSTMT_EXEC;;8919\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
tmp = fopen(file, mode);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8920\n");
fp = tmp;









































    printf("\nSTMT_EXEC;;8962\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
  }
printf("\nFUNC_RETURN;;\n");
}
int filevercmp(char const *s1, char const *s2);








































































































































































































































































































































































#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern int fflush(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) __freading)(FILE *__fp);




























































extern int fcntl(int __fd, int __cmd, ...);





























































































extern int fclose(FILE *__stream);
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp)
{


  printf("\nFUNC_CALL;rpl_fclose(FILE *);\n");
printf("\nSTMT_EXEC;;9488\n");
int result;







  {




























    printf("\nSTMT_EXEC;;9525\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
result = fclose(fp);printf("\nFUNC_RETURN;;\n");







    printf("\nSTMT_EXEC;;9532\n");
printf("\nFUNC_RETURN;;\n");
return (result);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) sigemptyset)(sigset_t *__set);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) sigaddset)(sigset_t *__set, int __signo);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) sigaction)(int __sig, struct sigaction const *__restrict __act, struct sigaction *__restrict __oact);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) posix_fadvise)(int __fd, off_t __offset, off_t __len, int __advise);
void fdadvise(int fd, off_t offset, off_t len, fadvice_t advice);
void fadvise(FILE *fp, fadvice_t advice);































#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"

extern char *optarg;
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 3))) pthread_create)(pthread_t *__restrict __newthread, pthread_attr_t const *__restrict __attr, void *(*__start_routine)(void *), void *__restrict __arg);
extern int pthread_join(pthread_t __th, void **__thread_return);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) pthread_mutex_destroy)(pthread_mutex_t *__mutex);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) pthread_mutex_lock)(pthread_mutex_t *__mutex);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) pthread_mutex_unlock)(pthread_mutex_t *__mutex);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) pthread_cond_init)(pthread_cond_t *__restrict __cond, pthread_condattr_t const *__restrict __cond_attr);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) pthread_cond_destroy)(pthread_cond_t *__cond);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) pthread_cond_signal)(pthread_cond_t *__cond);
extern int(__attribute__((__nonnull__(1, 2))) pthread_cond_wait)(pthread_cond_t *__restrict __cond, pthread_mutex_t *__restrict __mutex);
extern __attribute__((__nothrow__)) __sighandler_t(__attribute__((__leaf__)) signal)(int __sig, void (*__handler)(int));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) sigismember)(sigset_t const *__set, int __signo);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) execlp)(char const *__file, char const *__arg, ...);
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(2), __leaf__)) strxfrm)(char *__restrict __dest, char const *__restrict __src, size_t __n);










extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) ngettext)(char const *__msgid1, char const *__msgid2, unsigned long __n) __attribute__((__format_arg__(2), __format_arg__(1)));
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);















extern int fputc_unlocked(int __c, FILE *__stream);
extern int putchar_unlocked(int __c);
extern size_t fwrite_unlocked(void const *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) clearerr_unlocked)(FILE *__stream);

















































extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getrlimit)(__rlimit_resource_t __resource, struct rlimit *__rlimits);




static char eolchar = (char)'\n';










static _Bool reverse;
static _Bool stable;

static _Bool unique;





static __attribute__((__noreturn__)) void die(char const *message, char const *file);
static __attribute__((__noreturn__)) void die(char const *message, char const *file);
static void die(char const *message, char const *file)
{

  printf("\nFUNC_CALL;die(const char *,const char *);\n");
printf("\nSTMT_EXEC;;9732\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;9733\n");
int *tmp___1;
  {

    {
      printf("\nSTMT_EXEC;;9737\n");
tmp___0 = file;
    }





    printf("\nSTMT_EXEC;;9744\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9745\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___1, "%s: %s", message, tmp___0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9746\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(2);printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__noreturn__)) void usage(int status);































































































































static char const short_options[31] = {(char const)'-', (char const)'b', (char const)'c', (char const)'C', (char const)'d', (char const)'f', (char const)'g', (char const)'h', (char const)'i', (char const)'k', (char const)':', (char const)'m', (char const)'M', (char const)'n', (char const)'o', (char const)':', (char const)'r', (char const)'R', (char const)'s', (char const)'S', (char const)':', (char const)'t', (char const)':', (char const)'T', (char const)':', (char const)'u', (char const)'V', (char const)'y', (char const)':', (char const)'z', (char const)'\000'};
static struct option const long_options___1[31] = {{"ignore-leading-blanks", 0, (int *)((void *)0), 'b'}, {"check", 2, (int *)((void *)0), 128}, {"compress-program", 1, (int *)((void *)0), 129}, {"debug", 0, (int *)((void *)0), 130}, {"dictionary-order", 0, (int *)((void *)0), 'd'}, {"ignore-case", 0, (int *)((void *)0), 'f'}, {"files0-from", 1, (int *)((void *)0), 131}, {"general-numeric-sort", 0, (int *)((void *)0), 'g'}, {"ignore-nonprinting", 0, (int *)((void *)0), 'i'}, {"key", 1, (int *)((void *)0), 'k'}, {"merge", 0, (int *)((void *)0), 'm'}, {"month-sort", 0, (int *)((void *)0), 'M'}, {"numeric-sort", 0, (int *)((void *)0), 'n'}, {"human-numeric-sort", 0, (int *)((void *)0), 'h'}, {"version-sort", 0, (int *)((void *)0), 'V'}, {"random-sort", 0, (int *)((void *)0), 'R'}, {"random-source", 1, (int *)((void *)0), 133}, {"sort", 1, (int *)((void *)0), 134}, {"output", 1, (int *)((void *)0), 'o'}, {"reverse", 0, (int *)((void *)0), 'r'}, {"stable", 0, (int *)((void *)0), 's'}, {"batch-size", 1, (int *)((void *)0), 132}, {"buffer-size", 1, (int *)((void *)0), 'S'}, {"field-separator", 1, (int *)((void *)0), 't'}, {"temporary-directory", 1, (int *)((void *)0), 'T'}, {"unique", 0, (int *)((void *)0), 'u'}, {"zero-terminated", 0, (int *)((void *)0), 'z'}, {"parallel", 1, (int *)((void *)0), 135}, {"help", 0, (int *)((void *)0), -130}, {"version", 0, (int *)((void *)0), -131}, {(char const *)((void *)0), 0, (int *)((void *)0), 0}};















































static _Bool delete_proc(pid_t pid);
































































































































































































static void exit_cleanup(void)
{










  printf("\nFUNC_CALL;exit_cleanup();\n");
printf("\nSTMT_EXEC;;10131\n");
close_stdout();


printf("\nFUNC_RETURN;;\n");
}
static struct tempnode *create_temp_file(int *pfd, _Bool survive_fd_exhaustion);









































































static FILE *stream_open(char const *file, char const *how)
{
  printf("\nFUNC_CALL;stream_open(const char *,const char *);\n");
printf("\nSTMT_EXEC;;10211\n");
FILE *fp;
  printf("\nSTMT_EXEC;;10212\n");
int tmp;

  {
    printf("\nSTMT_EXEC;;10215\n");
if (!file)
    {
      printf("\nSTMT_EXEC;;10217\n");
printf("\nFUNC_RETURN;;\n");
return (stdout);
    }

    {
      printf("\nSTMT_EXEC;;10221\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp(file, "-");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10222\n");
if (tmp == 0)
      {

        printf("\nSTMT_EXEC;;10225\n");
fp = stdin;
      }
      else
      {
        printf("\nSTMT_EXEC;;10229\n");
fp = fopen_safer(file, how);
      }

      printf("\nSTMT_EXEC;;10232\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
    }


  }
printf("\nFUNC_RETURN;;\n");
}
static FILE *xfopen(char const *file, char const *how)
{
  printf("\nFUNC_CALL;xfopen(const char *,const char *);\n");
printf("\nSTMT_EXEC;;10240\n");
FILE *fp;
  printf("\nSTMT_EXEC;;10241\n");
FILE *tmp;
  printf("\nSTMT_EXEC;;10242\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;10244\n");
tmp = stream_open(file, how);
    printf("\nSTMT_EXEC;;10245\n");
fp = tmp;
    printf("\nSTMT_EXEC;;10246\n");
if (!fp)
    {
      printf("\nSTMT_EXEC;;10248\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("open failed");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10249\n");
die((char const *)tmp___0, file);
    }
    printf("\nSTMT_EXEC;;10251\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
  }
printf("\nFUNC_RETURN;;\n");
}
















































































































































































































































































































































































































































































































































































static void specify_sort_size(int oi, char c, char const *s)
{
  printf("\nFUNC_CALL;specify_sort_size(int,char,const char *);\n");
printf("\nSTMT_EXEC;;10816\n");
uintmax_t n;
  printf("\nSTMT_EXEC;;10817\n");
char *suffix;
  printf("\nSTMT_EXEC;;10818\n");
enum strtol_error e;
  printf("\nSTMT_EXEC;;10819\n");
enum strtol_error tmp;


  {
    printf("\nSTMT_EXEC;;10823\n");
tmp = xstrtoumax(s, &suffix, 10, &n, "EgGkKmMPtTYZ");
    printf("\nSTMT_EXEC;;10824\n");
e = tmp;






































































    printf("\nSTMT_EXEC;;10895\n");
xstrtol_fatal(e, oi, c, long_options___1, s);
  }
printf("\nFUNC_RETURN;;\n");
}



































































































static size_t sort_buffer_size(FILE *const *fps, size_t nfps, char *const *files, size_t nfiles, size_t line_bytes)
{
  printf("\nFUNC_CALL;sort_buffer_size(FILE *const *,size_t,char *const *,size_t,size_t);\n");
printf("\nSTMT_EXEC;;10999\n");
size_t worst_case_per_input_byte;
  printf("\nSTMT_EXEC;;11000\n");
size_t size;
  printf("\nSTMT_EXEC;;11001\n");
size_t i;
  printf("\nSTMT_EXEC;;11002\n");
struct stat st;
  printf("\nSTMT_EXEC;;11003\n");
off_t file_size;
  printf("\nSTMT_EXEC;;11004\n");
size_t worst_case;

  printf("\nSTMT_EXEC;;11006\n");
int tmp___0;
  printf("\nSTMT_EXEC;;11007\n");
int tmp___1;





  {
    printf("\nSTMT_EXEC;;11014\n");
worst_case_per_input_byte = line_bytes + 1UL;
    printf("\nSTMT_EXEC;;11015\n");
size = worst_case_per_input_byte + 1UL;
    printf("\nSTMT_EXEC;;11016\n");
i = (size_t)0;

    {





      {
        printf("\nSTMT_EXEC;;11025\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___0 = fileno((FILE *)*(fps + i));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11026\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___1 = fstat(tmp___0, &st);printf("\nFUNC_RETURN;;\n");


      }





















      {
        printf("\nSTMT_EXEC;;11051\n");
file_size = st.st_size;
      }
















      printf("\nSTMT_EXEC;;11069\n");
worst_case = (size_t)file_size * worst_case_per_input_byte + 1UL;











      printf("\nSTMT_EXEC;;11081\n");
size += worst_case;

    };

    printf("\nSTMT_EXEC;;11085\n");
printf("\nFUNC_RETURN;;\n");
return (size);
  }
printf("\nFUNC_RETURN;;\n");
}
static void initbuf(struct buffer *buf___1, size_t line_bytes, size_t alloc)
{
  printf("\nFUNC_CALL;initbuf(struct buffer *,size_t,size_t);\n");
printf("\nSTMT_EXEC;;11090\n");
size_t tmp;
  printf("\nSTMT_EXEC;;11091\n");
size_t tmp___0;
  {

    {

      printf("\nSTMT_EXEC;;11096\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
buf___1->buf = (char *)malloc(alloc);printf("\nFUNC_RETURN;;\n");




    }







    printf("\nSTMT_EXEC;;11108\n");
buf___1->line_bytes = line_bytes;
    printf("\nSTMT_EXEC;;11109\n");
buf___1->alloc = alloc;
    printf("\nSTMT_EXEC;;11110\n");
tmp___0 = (size_t)0;
    printf("\nSTMT_EXEC;;11111\n");
buf___1->nlines = tmp___0;
    printf("\nSTMT_EXEC;;11112\n");
tmp = tmp___0;

    printf("\nSTMT_EXEC;;11114\n");
buf___1->used = tmp;


  }
printf("\nFUNC_RETURN;;\n");
}
__inline static struct line *buffer_linelim(struct buffer const *buf___1)
{

  printf("\nFUNC_CALL;buffer_linelim(const struct buffer *);\n");
printf("\nSTMT_EXEC;;11122\n");
printf("\nFUNC_RETURN;;\n");
return ((struct line *)(buf___1->buf + buf___1->alloc));
printf("\nFUNC_RETURN;;\n");
}












































































































































































































































































































static _Bool fillbuf___7(struct buffer *buf___1, FILE *fp, char const *file)
{

  printf("\nFUNC_CALL;fillbuf___7(struct buffer *,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;11427\n");
char eol;
  printf("\nSTMT_EXEC;;11428\n");
size_t line_bytes;

  printf("\nSTMT_EXEC;;11430\n");
char *ptr;
  printf("\nSTMT_EXEC;;11431\n");
struct line *linelim;
  printf("\nSTMT_EXEC;;11432\n");
struct line *tmp;
  printf("\nSTMT_EXEC;;11433\n");
struct line *line;
  printf("\nSTMT_EXEC;;11434\n");
size_t avail;
  printf("\nSTMT_EXEC;;11435\n");
char *line_start;
  printf("\nSTMT_EXEC;;11436\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;11437\n");
size_t readsize;
  printf("\nSTMT_EXEC;;11438\n");
size_t bytes_read;
  printf("\nSTMT_EXEC;;11439\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;11440\n");
char *ptrlim;
  printf("\nSTMT_EXEC;;11441\n");
char *p;


  printf("\nSTMT_EXEC;;11444\n");
char *tmp___4;



  printf("\nSTMT_EXEC;;11448\n");
struct line *tmp___8;

  {

    printf("\nSTMT_EXEC;;11452\n");
eol = eolchar;
    printf("\nSTMT_EXEC;;11453\n");
line_bytes = buf___1->line_bytes;












    {
      printf("\nSTMT_EXEC;;11467\n");
ptr = buf___1->buf + buf___1->used;
      printf("\nSTMT_EXEC;;11468\n");
tmp = buffer_linelim((struct buffer const *)buf___1);
      printf("\nSTMT_EXEC;;11469\n");
linelim = tmp;
      printf("\nSTMT_EXEC;;11470\n");
line = linelim - buf___1->nlines;
      printf("\nSTMT_EXEC;;11471\n");
avail = (size_t)(((char *)linelim - buf___1->nlines * line_bytes) - ptr);





      {
        printf("\nSTMT_EXEC;;11478\n");
tmp___0 = buf___1->buf;
      }
      printf("\nSTMT_EXEC;;11480\n");
line_start = tmp___0;

      {




        printf("\nSTMT_EXEC;;11487\n");
readsize = (avail - 1UL) / (line_bytes + 1UL);
        printf("\nSTMT_EXEC;;11488\n");
printf("\nFUNC_CALL;fread_unlocked(void *__restrict,size_t,size_t,FILE *__restrict);\n");
tmp___1 = fread_unlocked((void *)ptr, (size_t)1, readsize, fp);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11489\n");
bytes_read = tmp___1;
        printf("\nSTMT_EXEC;;11490\n");
ptrlim = ptr + bytes_read;


        {










          printf("\nSTMT_EXEC;;11504\n");
if ((unsigned long)buf___1->buf == (unsigned long)ptrlim)
          {
            printf("\nSTMT_EXEC;;11506\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
          }

          {
            printf("\nSTMT_EXEC;;11510\n");
if ((int)*(ptrlim + -1) != (int)eol)
            {
              printf("\nSTMT_EXEC;;11512\n");
tmp___4 = ptrlim;
              printf("\nSTMT_EXEC;;11513\n");
ptrlim++;
              printf("\nSTMT_EXEC;;11514\n");
*tmp___4 = eol;
            }
          }
        }

        printf("\nSTMT_EXEC;;11519\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11521\n");
printf("\nFUNC_CALL;memchr(const void *,int,size_t);\n");
p = (char *)memchr((void const *)ptr, (int)eol, (size_t)(ptrlim - ptr));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;11522\n");
if (!p)
          {
            printf("\nSTMT_EXEC;;11524\n");
goto while_break___1;
          }

          printf("\nSTMT_EXEC;;11527\n");
ptr = p + 1;
          printf("\nSTMT_EXEC;;11528\n");
line--;
          printf("\nSTMT_EXEC;;11529\n");
line->text = line_start;
          printf("\nSTMT_EXEC;;11530\n");
line->length = (size_t)(ptr - line_start);










































          printf("\nSTMT_EXEC;;11573\n");
line_start = ptr;
        }
      while_break___1:
        {
printf("\nSTMT_EXEC;;11576\n");
ptr = ptrlim;
}




      }



      printf("\nSTMT_EXEC;;11584\n");
tmp___8 = buffer_linelim((struct buffer const *)buf___1);
      printf("\nSTMT_EXEC;;11585\n");
buf___1->nlines = (size_t)(tmp___8 - line);















































































    }
  }
printf("\nFUNC_RETURN;;\n");
}


























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































static int compare(struct line const *a, struct line const *b)
{
  printf("\nFUNC_CALL;compare(const struct line *,const struct line *);\n");
printf("\nSTMT_EXEC;;13552\n");
int diff;
  printf("\nSTMT_EXEC;;13553\n");
size_t alen;
  printf("\nSTMT_EXEC;;13554\n");
size_t blen;
  printf("\nSTMT_EXEC;;13555\n");
size_t tmp;
  printf("\nSTMT_EXEC;;13556\n");
int tmp___0;
  {






















    printf("\nSTMT_EXEC;;13580\n");
alen = (size_t)(a->length - 1UL);
    printf("\nSTMT_EXEC;;13581\n");
blen = (size_t)(b->length - 1UL);

    {
















      printf("\nSTMT_EXEC;;13600\n");
if (alen < blen)
      {
        printf("\nSTMT_EXEC;;13602\n");
tmp = alen;
      }
      else
      {
        printf("\nSTMT_EXEC;;13606\n");
tmp = blen;
      }
      printf("\nSTMT_EXEC;;13608\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
diff = memcmp((void const *)a->text, (void const *)b->text, tmp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;13609\n");
if (!diff)
      {
        printf("\nSTMT_EXEC;;13611\n");
if (alen < blen)
        {
          printf("\nSTMT_EXEC;;13613\n");
diff = -1;
        }
        else
        {
          printf("\nSTMT_EXEC;;13617\n");
diff = alen != blen;


        }
      }
    }
    printf("\nSTMT_EXEC;;13623\n");
if (reverse)
    {
      printf("\nSTMT_EXEC;;13625\n");
tmp___0 = -diff;
    }
    else
    {
      printf("\nSTMT_EXEC;;13629\n");
tmp___0 = diff;
    }
    printf("\nSTMT_EXEC;;13631\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
static void write_line(struct line const *line, FILE *fp, char const *output_file)
{
  printf("\nFUNC_CALL;write_line(const struct line *,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;13636\n");
char *buf___1;
  printf("\nSTMT_EXEC;;13637\n");
size_t n_bytes;







  printf("\nSTMT_EXEC;;13645\n");
size_t tmp___3;
  {
    printf("\nSTMT_EXEC;;13647\n");
buf___1 = (char *)line->text;
    printf("\nSTMT_EXEC;;13648\n");
n_bytes = (size_t)line->length;


    {










































      printf("\nSTMT_EXEC;;13694\n");
printf("\nFUNC_CALL;fwrite_unlocked(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
tmp___3 = fwrite_unlocked((void const *)buf___1, (size_t)1, n_bytes, fp);printf("\nFUNC_RETURN;;\n");

































































































































































































































































































































































    }
  }
printf("\nFUNC_RETURN;;\n");
}

































































































































































static void mergelines(struct line *__restrict t, size_t nlines, struct line const *__restrict lo)
{
  printf("\nFUNC_CALL;mergelines(struct line *__restrict,size_t,const struct line *__restrict);\n");
printf("\nSTMT_EXEC;;14213\n");
size_t nlo;
  printf("\nSTMT_EXEC;;14214\n");
size_t nhi;
  printf("\nSTMT_EXEC;;14215\n");
struct line *hi;
  printf("\nSTMT_EXEC;;14216\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;14218\n");
nlo = nlines / 2UL;
    printf("\nSTMT_EXEC;;14219\n");
nhi = nlines - nlo;
    printf("\nSTMT_EXEC;;14220\n");
hi = (struct line *)(t - nlo);
    printf("\nSTMT_EXEC;;14221\n");
while (1)
    {
      printf("\nSTMT_EXEC;;14223\n");
tmp = compare((struct line const *)(lo - 1), (struct line const *)(hi - 1));
      printf("\nSTMT_EXEC;;14224\n");
if (tmp <= 0)
      {
        printf("\nSTMT_EXEC;;14226\n");
t--;
        printf("\nSTMT_EXEC;;14227\n");
lo--;
        printf("\nSTMT_EXEC;;14228\n");
*t = (struct line) * lo;
        printf("\nSTMT_EXEC;;14229\n");
nlo--;
        printf("\nSTMT_EXEC;;14230\n");
if (!nlo)
        {
          printf("\nSTMT_EXEC;;14232\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;14237\n");
t--;
        printf("\nSTMT_EXEC;;14238\n");
hi--;
        printf("\nSTMT_EXEC;;14239\n");
*t = *hi;
        printf("\nSTMT_EXEC;;14240\n");
nhi--;
        printf("\nSTMT_EXEC;;14241\n");
if (!nhi)
        {
          printf("\nSTMT_EXEC;;14243\n");
while (1)
          {
            printf("\nSTMT_EXEC;;14245\n");
t--;
            printf("\nSTMT_EXEC;;14246\n");
lo--;
            printf("\nSTMT_EXEC;;14247\n");
*t = (struct line) * lo;
            printf("\nSTMT_EXEC;;14248\n");
nlo--;
            printf("\nSTMT_EXEC;;14249\n");
if (!nlo)
            {
              printf("\nSTMT_EXEC;;14251\n");
goto while_break___0;
            }
          }
        while_break___0:;
          printf("\nSTMT_EXEC;;14255\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void sequential_sort(struct line *__restrict lines, size_t nlines, struct line *__restrict temp, _Bool to_temp)
{
  printf("\nFUNC_CALL;sequential_sort(struct line *__restrict,size_t,struct line *__restrict,_Bool);\n");
printf("\nSTMT_EXEC;;14264\n");
int swap___1;
  printf("\nSTMT_EXEC;;14265\n");
int tmp;
  printf("\nSTMT_EXEC;;14266\n");
size_t nlo;
  printf("\nSTMT_EXEC;;14267\n");
size_t nhi;
  printf("\nSTMT_EXEC;;14268\n");
struct line *lo;
  printf("\nSTMT_EXEC;;14269\n");
struct line *hi;
  printf("\nSTMT_EXEC;;14270\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;14271\n");
struct line *dest;
  printf("\nSTMT_EXEC;;14272\n");
struct line const *sorted_lo;
  {
    printf("\nSTMT_EXEC;;14274\n");
if (nlines == 2UL)
    {
      printf("\nSTMT_EXEC;;14276\n");
tmp = compare((struct line const *)(lines + -1), (struct line const *)(lines + -2));
      printf("\nSTMT_EXEC;;14277\n");
swap___1 = 0 < tmp;
      printf("\nSTMT_EXEC;;14278\n");
if (to_temp)
      {
        printf("\nSTMT_EXEC;;14280\n");
*(temp + -1) = *(lines + (-1 - swap___1));
        printf("\nSTMT_EXEC;;14281\n");
*(temp + -2) = *(lines + (-2 + swap___1));
      }
      else
      {
        printf("\nSTMT_EXEC;;14285\n");
if (swap___1)
        {
          printf("\nSTMT_EXEC;;14287\n");
*(temp + -1) = *(lines + -1);
          printf("\nSTMT_EXEC;;14288\n");
*(lines + -1) = *(lines + -2);
          printf("\nSTMT_EXEC;;14289\n");
*(lines + -2) = *(temp + -1);
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;14295\n");
nlo = nlines / 2UL;
      printf("\nSTMT_EXEC;;14296\n");
nhi = nlines - nlo;
      printf("\nSTMT_EXEC;;14297\n");
lo = (struct line *)lines;
      printf("\nSTMT_EXEC;;14298\n");
hi = (struct line *)(lines - nlo);
      printf("\nSTMT_EXEC;;14299\n");
if (to_temp)
      {
        printf("\nSTMT_EXEC;;14301\n");
tmp___0 = nlo;
      }
      else
      {
        printf("\nSTMT_EXEC;;14305\n");
tmp___0 = (size_t)0;
      }
      printf("\nSTMT_EXEC;;14307\n");
sequential_sort(hi, nhi, temp - tmp___0, to_temp);
      printf("\nSTMT_EXEC;;14308\n");
if (1UL < nlo)
      {
        printf("\nSTMT_EXEC;;14310\n");
sequential_sort(lo, nlo, temp, (_Bool)(!to_temp));
      }
      else
      {


        printf("\nSTMT_EXEC;;14316\n");
*(temp + -1) = *(lo + -1);
      }

      printf("\nSTMT_EXEC;;14319\n");
if (to_temp)
      {
        printf("\nSTMT_EXEC;;14321\n");
dest = (struct line *)temp;
        printf("\nSTMT_EXEC;;14322\n");
sorted_lo = (struct line const *)lines;
      }
      else
      {
        printf("\nSTMT_EXEC;;14326\n");
dest = (struct line *)lines;
        printf("\nSTMT_EXEC;;14327\n");
sorted_lo = (struct line const *)temp;
      }
      printf("\nSTMT_EXEC;;14329\n");
mergelines(dest, nlines, sorted_lo);
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static struct merge_node *init_node(struct merge_node *__restrict parent, struct merge_node *__restrict node_pool, struct line *dest, size_t nthreads, size_t total_lines, _Bool is_lo_child);
static struct merge_node *merge_tree_init(size_t nthreads, size_t nlines, struct line *dest)
{
  printf("\nFUNC_CALL;merge_tree_init(size_t,size_t,struct line *);\n");
printf("\nSTMT_EXEC;;14337\n");
struct merge_node *merge_tree;
  printf("\nSTMT_EXEC;;14338\n");
struct merge_node *tmp;
  printf("\nSTMT_EXEC;;14339\n");
struct merge_node *root;



  printf("\nSTMT_EXEC;;14343\n");
size_t tmp___3;
  {
    printf("\nSTMT_EXEC;;14345\n");
tmp = (struct merge_node *)xmalloc((2UL * sizeof(*merge_tree)) * nthreads);
    printf("\nSTMT_EXEC;;14346\n");
merge_tree = tmp;
    printf("\nSTMT_EXEC;;14347\n");
root = merge_tree;








    printf("\nSTMT_EXEC;;14356\n");
tmp___3 = nlines;
    printf("\nSTMT_EXEC;;14357\n");
root->nhi = tmp___3;


    printf("\nSTMT_EXEC;;14360\n");
root->level = 0U;


    printf("\nSTMT_EXEC;;14363\n");
init_node(root, root + 1, dest, nthreads, nlines, (_Bool)0);
    printf("\nSTMT_EXEC;;14364\n");
printf("\nFUNC_RETURN;;\n");
return (merge_tree);
  }
printf("\nFUNC_RETURN;;\n");
}
static void merge_tree_destroy(struct merge_node *merge_tree)
{

  printf("\nFUNC_CALL;merge_tree_destroy(struct merge_node *);\n");
printf("\nSTMT_EXEC;;14370\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)merge_tree);printf("\nFUNC_RETURN;;\n");



printf("\nFUNC_RETURN;;\n");
}
static struct merge_node *init_node(struct merge_node *__restrict parent, struct merge_node *__restrict node_pool, struct line *dest, size_t nthreads, size_t total_lines, _Bool is_lo_child)
{
  printf("\nFUNC_CALL;init_node(struct merge_node *__restrict,struct merge_node *__restrict,struct line *,size_t,size_t,_Bool);\n");
printf("\nSTMT_EXEC;;14376\n");
size_t nlines;
  printf("\nSTMT_EXEC;;14377\n");
size_t tmp;
  printf("\nSTMT_EXEC;;14378\n");
size_t nlo;
  printf("\nSTMT_EXEC;;14379\n");
size_t nhi;




  printf("\nSTMT_EXEC;;14384\n");
struct merge_node *node;
  printf("\nSTMT_EXEC;;14385\n");
struct merge_node *__restrict tmp___1;






  {





    {
      printf("\nSTMT_EXEC;;14399\n");
tmp = parent->nhi;
    }
    printf("\nSTMT_EXEC;;14401\n");
nlines = tmp;
    printf("\nSTMT_EXEC;;14402\n");
nlo = nlines / 2UL;
    printf("\nSTMT_EXEC;;14403\n");
nhi = nlines - nlo;











    printf("\nSTMT_EXEC;;14415\n");
tmp___1 = node_pool;

    printf("\nSTMT_EXEC;;14417\n");
node = (struct merge_node *)tmp___1;







    printf("\nSTMT_EXEC;;14425\n");
node->nlo = nlo;
    printf("\nSTMT_EXEC;;14426\n");
node->nhi = nhi;
    printf("\nSTMT_EXEC;;14427\n");
node->parent = (struct merge_node *)parent;
    printf("\nSTMT_EXEC;;14428\n");
node->level = parent->level + 1U;


















    printf("\nSTMT_EXEC;;14447\n");
printf("\nFUNC_RETURN;;\n");
return ((struct merge_node *)node_pool);
  }
printf("\nFUNC_RETURN;;\n");
}
static int compare_nodes(void const *a, void const *b)
{
  printf("\nFUNC_CALL;compare_nodes(const void *,const void *);\n");
printf("\nSTMT_EXEC;;14452\n");
struct merge_node const *nodea;
  printf("\nSTMT_EXEC;;14453\n");
struct merge_node const *nodeb;
  {
    printf("\nSTMT_EXEC;;14455\n");
nodea = (struct merge_node const *)a;
    printf("\nSTMT_EXEC;;14456\n");
nodeb = (struct merge_node const *)b;




    printf("\nSTMT_EXEC;;14461\n");
printf("\nFUNC_RETURN;;\n");
return (nodea->level < nodeb->level);
  }
printf("\nFUNC_RETURN;;\n");
}














static void queue_destroy(struct merge_node_queue *queue)
{

  printf("\nFUNC_CALL;queue_destroy(struct merge_node_queue *);\n");
printf("\nSTMT_EXEC;;14481\n");
heap_free(queue->priority_queue);




printf("\nFUNC_RETURN;;\n");
}
static void queue_init(struct merge_node_queue *queue, size_t nthreads)
{

  printf("\nFUNC_CALL;queue_init(struct merge_node_queue *,size_t);\n");
printf("\nSTMT_EXEC;;14490\n");
queue->priority_queue = heap_alloc(&compare_nodes, 2UL * nthreads);




printf("\nFUNC_RETURN;;\n");
}
static void queue_insert(struct merge_node_queue *queue, struct merge_node *node)
{


  printf("\nFUNC_CALL;queue_insert(struct merge_node_queue *,struct merge_node *);\n");
printf("\nSTMT_EXEC;;14500\n");
heap_insert(queue->priority_queue, (void *)node);





printf("\nFUNC_RETURN;;\n");
}
static struct merge_node *queue_pop(struct merge_node_queue *queue)
{
  printf("\nFUNC_CALL;queue_pop(struct merge_node_queue *);\n");
printf("\nSTMT_EXEC;;14509\n");
struct merge_node *node;
  {


    {
      printf("\nSTMT_EXEC;;14514\n");
node = (struct merge_node *)heap_remove_top(queue->priority_queue);



    }






    printf("\nSTMT_EXEC;;14525\n");
printf("\nFUNC_RETURN;;\n");
return (node);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct line saved;
static void write_unique(struct line const *line, FILE *tfp, char const *temp_output)
{
  printf("\nFUNC_CALL;write_unique(const struct line *,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;14531\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;14533\n");
if (unique)
    {
      printf("\nSTMT_EXEC;;14535\n");
if (saved.text)
      {
        printf("\nSTMT_EXEC;;14537\n");
tmp = compare(line, (struct line const *)(&saved));
        printf("\nSTMT_EXEC;;14538\n");
if (!tmp)
        {
          printf("\nSTMT_EXEC;;14540\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
      printf("\nSTMT_EXEC;;14543\n");
saved = (struct line) * line;
    }
    printf("\nSTMT_EXEC;;14545\n");
write_line(line, tfp, temp_output);

  }
printf("\nFUNC_RETURN;;\n");
}
static void mergelines_node(struct merge_node *__restrict node, size_t total_lines, FILE *tfp, char const *temp_output)
{
  printf("\nFUNC_CALL;mergelines_node(struct merge_node *__restrict,size_t,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;14551\n");
struct line *lo_orig;
  printf("\nSTMT_EXEC;;14552\n");
struct line *hi_orig;

  printf("\nSTMT_EXEC;;14554\n");
size_t merged_lo;
  printf("\nSTMT_EXEC;;14555\n");
size_t merged_hi;





  printf("\nSTMT_EXEC;;14561\n");
int tmp___3;



  {
    printf("\nSTMT_EXEC;;14566\n");
lo_orig = node->lo;
    printf("\nSTMT_EXEC;;14567\n");
hi_orig = node->hi;


    {


      {
        printf("\nSTMT_EXEC;;14574\n");
if ((unsigned long)node->lo != (unsigned long)node->end_lo)
        {
          printf("\nSTMT_EXEC;;14576\n");
if ((unsigned long)node->hi != (unsigned long)node->end_hi)
          {






          }
          else
          {























































































            printf("\nSTMT_EXEC;;14674\n");
goto while_break___2;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;14679\n");
goto while_break___2;





        }
        printf("\nSTMT_EXEC;;14686\n");
tmp___3 = compare((struct line const *)(node->lo - 1), (struct line const *)(node->hi - 1));
        printf("\nSTMT_EXEC;;14687\n");
if (tmp___3 <= 0)
        {
          printf("\nSTMT_EXEC;;14689\n");
(node->lo)--;
          printf("\nSTMT_EXEC;;14690\n");
write_unique((struct line const *)node->lo, tfp, temp_output);
        }
        else
        {
          printf("\nSTMT_EXEC;;14694\n");
(node->hi)--;
          printf("\nSTMT_EXEC;;14695\n");
write_unique((struct line const *)node->hi, tfp, temp_output);
        }
      }
    while_break___2:
      {
printf("\nSTMT_EXEC;;14699\n");
merged_lo = (size_t)(lo_orig - node->lo);
}

      printf("\nSTMT_EXEC;;14700\n");
merged_hi = (size_t)(hi_orig - node->hi);
      printf("\nSTMT_EXEC;;14701\n");
if (node->nhi == merged_hi)
      {

        {













          printf("\nSTMT_EXEC;;14718\n");
(node->lo)--;
          printf("\nSTMT_EXEC;;14719\n");
write_unique((struct line const *)node->lo, tfp, temp_output);
        };

      }
      else
      {
        printf("\nSTMT_EXEC;;14725\n");
if (node->nlo == merged_lo)
        {

          {













            printf("\nSTMT_EXEC;;14742\n");
(node->hi)--;
            printf("\nSTMT_EXEC;;14743\n");
write_unique((struct line const *)node->hi, tfp, temp_output);
          };

        }
      }
    }
    printf("\nSTMT_EXEC;;14749\n");
merged_lo = (size_t)(lo_orig - node->lo);
    printf("\nSTMT_EXEC;;14750\n");
merged_hi = (size_t)(hi_orig - node->hi);
    printf("\nSTMT_EXEC;;14751\n");
node->nlo -= merged_lo;
    printf("\nSTMT_EXEC;;14752\n");
node->nhi -= merged_hi;

  }
printf("\nFUNC_RETURN;;\n");
}
static void queue_check_insert(struct merge_node_queue *queue, struct merge_node *node)
{
  printf("\nFUNC_CALL;queue_check_insert(struct merge_node_queue *,struct merge_node *);\n");
printf("\nSTMT_EXEC;;14758\n");
_Bool lo_avail;
  printf("\nSTMT_EXEC;;14759\n");
_Bool hi_avail;
  printf("\nSTMT_EXEC;;14760\n");
int tmp;
  printf("\nSTMT_EXEC;;14761\n");
int tmp___0;
  printf("\nSTMT_EXEC;;14762\n");
int tmp___1;
  {


    printf("\nSTMT_EXEC;;14766\n");
lo_avail = (_Bool)(node->lo - node->end_lo != 0L);
    printf("\nSTMT_EXEC;;14767\n");
hi_avail = (_Bool)(node->hi - node->end_hi != 0L);
    printf("\nSTMT_EXEC;;14768\n");
if (lo_avail)
    {

      {
        printf("\nSTMT_EXEC;;14772\n");
tmp = 1;
      }











      printf("\nSTMT_EXEC;;14785\n");
tmp___1 = tmp;
    }
    else
    {
      printf("\nSTMT_EXEC;;14789\n");
if (hi_avail)
      {


        printf("\nSTMT_EXEC;;14793\n");
tmp___0 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;14797\n");
tmp___0 = 0;
      }





      printf("\nSTMT_EXEC;;14804\n");
tmp___1 = tmp___0;
    }
    printf("\nSTMT_EXEC;;14806\n");
if (tmp___1)
    {
      printf("\nSTMT_EXEC;;14808\n");
queue_insert(queue, node);
    }


  }
printf("\nFUNC_RETURN;;\n");
}
static void queue_check_insert_parent(struct merge_node_queue *queue, struct merge_node *node)
{









  printf("\nFUNC_CALL;queue_check_insert_parent(struct merge_node_queue *,struct merge_node *);\n");
printf("\nSTMT_EXEC;;14825\n");
if (node->nlo + node->nhi == 0UL)
  {
    printf("\nSTMT_EXEC;;14827\n");
queue_insert(queue, node->parent);



  }
printf("\nFUNC_RETURN;;\n");
}
static void merge_loop(struct merge_node_queue *queue, size_t total_lines, FILE *tfp, char const *temp_output)
{
  printf("\nFUNC_CALL;merge_loop(struct merge_node_queue *,size_t,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;14835\n");
struct merge_node *node;
  printf("\nSTMT_EXEC;;14836\n");
struct merge_node *tmp;
  {
    printf("\nSTMT_EXEC;;14838\n");
while (1)
    {
      printf("\nSTMT_EXEC;;14840\n");
tmp = queue_pop(queue);
      printf("\nSTMT_EXEC;;14841\n");
node = tmp;
      printf("\nSTMT_EXEC;;14842\n");
if (node->level == 0U)
      {


        printf("\nSTMT_EXEC;;14846\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;14848\n");
mergelines_node(node, total_lines, tfp, temp_output);
      printf("\nSTMT_EXEC;;14849\n");
queue_check_insert(queue, node);
      printf("\nSTMT_EXEC;;14850\n");
queue_check_insert_parent(queue, node);

    }
  while_break:;

  }
printf("\nFUNC_RETURN;;\n");
}
static void sortlines(struct line *__restrict lines, size_t nthreads, size_t total_lines, struct merge_node *node, struct merge_node_queue *queue, FILE *tfp, char const *temp_output);









static void sortlines(struct line *__restrict lines, size_t nthreads, size_t total_lines, struct merge_node *node, struct merge_node_queue *queue, FILE *tfp, char const *temp_output)
{





  printf("\nFUNC_CALL;sortlines(struct line *__restrict,size_t,size_t,struct merge_node *,struct merge_node_queue *,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;14874\n");
size_t nlo;
  printf("\nSTMT_EXEC;;14875\n");
size_t nhi;
  printf("\nSTMT_EXEC;;14876\n");
struct line *temp;

  {

































    printf("\nSTMT_EXEC;;14912\n");
nlo = node->nlo;
    printf("\nSTMT_EXEC;;14913\n");
nhi = node->nhi;
    printf("\nSTMT_EXEC;;14914\n");
temp = (struct line *)(lines - total_lines);
    printf("\nSTMT_EXEC;;14915\n");
if (1UL < nhi)
    {
      printf("\nSTMT_EXEC;;14917\n");
sequential_sort(lines - nlo, nhi, temp - nlo / 2UL, (_Bool)0);
    }
    printf("\nSTMT_EXEC;;14919\n");
if (1UL < nlo)
    {
      printf("\nSTMT_EXEC;;14921\n");
sequential_sort(lines, nlo, temp, (_Bool)0);
    }
    printf("\nSTMT_EXEC;;14923\n");
node->lo = (struct line *)lines;
    printf("\nSTMT_EXEC;;14924\n");
node->hi = (struct line *)(lines - nlo);
    printf("\nSTMT_EXEC;;14925\n");
node->end_lo = (struct line *)(lines - nlo);
    printf("\nSTMT_EXEC;;14926\n");
node->end_hi = (struct line *)((lines - nlo) - nhi);
    printf("\nSTMT_EXEC;;14927\n");
queue_insert(queue, node);
    printf("\nSTMT_EXEC;;14928\n");
merge_loop(queue, total_lines, tfp, temp_output);
  }


printf("\nFUNC_RETURN;;\n");
}























































































































































































































































































































static void sort(char *const *files, size_t nfiles, char const *output_file, size_t nthreads)
{
  printf("\nFUNC_CALL;sort(char *const *,size_t,const char *,size_t);\n");
printf("\nSTMT_EXEC;;15246\n");
struct buffer buf___1;


  printf("\nSTMT_EXEC;;15249\n");
char const *temp_output;
  printf("\nSTMT_EXEC;;15250\n");
char const *file;
  printf("\nSTMT_EXEC;;15251\n");
FILE *fp;
  printf("\nSTMT_EXEC;;15252\n");
FILE *tmp;
  printf("\nSTMT_EXEC;;15253\n");
FILE *tfp;
  printf("\nSTMT_EXEC;;15254\n");
size_t bytes_per_line;


  printf("\nSTMT_EXEC;;15257\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;15258\n");
struct line *line;

  printf("\nSTMT_EXEC;;15260\n");
struct merge_node_queue queue;
  printf("\nSTMT_EXEC;;15261\n");
struct merge_node *merge_tree;
  printf("\nSTMT_EXEC;;15262\n");
struct merge_node *tmp___3;
  printf("\nSTMT_EXEC;;15263\n");
struct merge_node *root;
  printf("\nSTMT_EXEC;;15264\n");
_Bool tmp___4;




  {




    {




      printf("\nSTMT_EXEC;;15279\n");
file = (char const *)*files;
      printf("\nSTMT_EXEC;;15280\n");
tmp = xfopen(file, "r");
      printf("\nSTMT_EXEC;;15281\n");
fp = tmp;

















      {
        printf("\nSTMT_EXEC;;15300\n");
bytes_per_line = (sizeof(struct line) * 3UL) / 2UL;
      }

      {
        printf("\nSTMT_EXEC;;15304\n");
tmp___1 = sort_buffer_size((FILE *const *)(&fp), (size_t)1, files, nfiles, bytes_per_line);
        printf("\nSTMT_EXEC;;15305\n");
initbuf(&buf___1, bytes_per_line, tmp___1);
      }




      {
        printf("\nSTMT_EXEC;;15312\n");
tmp___4 = fillbuf___7(&buf___1, fp, file);















        printf("\nSTMT_EXEC;;15328\n");
line = buffer_linelim((struct buffer const *)(&buf___1));

        {







          printf("\nSTMT_EXEC;;15338\n");
tfp = xfopen(output_file, "w");
          printf("\nSTMT_EXEC;;15339\n");
temp_output = output_file;

        }



























        printf("\nSTMT_EXEC;;15369\n");
if (1UL < buf___1.nlines)
        {
          printf("\nSTMT_EXEC;;15371\n");
queue_init(&queue, nthreads);
          printf("\nSTMT_EXEC;;15372\n");
tmp___3 = merge_tree_init(nthreads, buf___1.nlines, line);
          printf("\nSTMT_EXEC;;15373\n");
merge_tree = tmp___3;
          printf("\nSTMT_EXEC;;15374\n");
root = merge_tree + 1;
          printf("\nSTMT_EXEC;;15375\n");
sortlines(line, nthreads, buf___1.nlines, root, &queue, tfp, temp_output);
          printf("\nSTMT_EXEC;;15376\n");
queue_destroy(&queue);

          printf("\nSTMT_EXEC;;15378\n");
merge_tree_destroy(merge_tree);
        }
        else
        {
          printf("\nSTMT_EXEC;;15382\n");
write_unique((struct line const *)(line - 1), tfp, temp_output);
        }




      }
    };





    printf("\nSTMT_EXEC;;15395\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)buf___1.buf);printf("\nFUNC_RETURN;;\n");
























  }
printf("\nFUNC_RETURN;;\n");
}

























static __attribute__((__noreturn__)) void badfieldspec(char const *spec, char const *msgid);
static __attribute__((__noreturn__)) void badfieldspec(char const *spec, char const *msgid);













static __attribute__((__noreturn__)) void incompatible_options(char const *opts___1);
static __attribute__((__noreturn__)) void incompatible_options(char const *opts___1);







































static char const *parse_field_count(char const *string, size_t *val, char const *msgid)
{



  printf("\nFUNC_CALL;parse_field_count(const char *,size_t *,const char *);\n");
printf("\nSTMT_EXEC;;15507\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;15508\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;15509\n");
char *tmp___2;
  {

































    {
      printf("\nSTMT_EXEC;;15545\n");
tmp___0 = quote(string);
      printf("\nSTMT_EXEC;;15546\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext(msgid);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;15547\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("%s: invalid count at start of %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;15548\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___2, tmp___1, tmp___0);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;15550\n");
printf("\nFUNC_RETURN;;\n");
return ((char const *)((void *)0));


  }
printf("\nFUNC_RETURN;;\n");
}
static char *set_ordering(char const *s, struct keyfield *key, enum blanktype blanktype)
{
  printf("\nFUNC_CALL;set_ordering(const char *,struct keyfield *,enum blanktype);\n");
{







































































































    printf("\nSTMT_EXEC;;15661\n");
key->reverse = (_Bool)1;





    printf("\nSTMT_EXEC;;15667\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)s);


  };



printf("\nFUNC_RETURN;;\n");
}
static struct keyfield *key_init(struct keyfield *key)
{

  printf("\nFUNC_CALL;key_init(struct keyfield *);\n");
printf("\nSTMT_EXEC;;15678\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)key, 0, sizeof(*key));printf("\nFUNC_RETURN;;\n");


  printf("\nSTMT_EXEC;;15680\n");
printf("\nFUNC_RETURN;;\n");
return (key);
printf("\nFUNC_RETURN;;\n");
}










int main(int argc, char **argv);


static char *minus = (char *)"-";

int main(int argc, char **argv)
{
  printf("\nFUNC_CALL;main(int,char **);\n");
printf("\nSTMT_EXEC;;39\n");
AFL_INIT_SET0("sort");
  printf("\nSTMT_EXEC;;15700\n");
struct keyfield *key;
  printf("\nSTMT_EXEC;;15701\n");
struct keyfield key_buf;
  printf("\nSTMT_EXEC;;15702\n");
struct keyfield gkey;

  printf("\nSTMT_EXEC;;15704\n");
char const *s;
  printf("\nSTMT_EXEC;;15705\n");
int c;




  printf("\nSTMT_EXEC;;15710\n");
size_t nthreads;
  printf("\nSTMT_EXEC;;15711\n");
size_t nfiles;




  printf("\nSTMT_EXEC;;15716\n");
char **files;


  printf("\nSTMT_EXEC;;15719\n");
char const *outfile;





  printf("\nSTMT_EXEC;;15725\n");
int oi;









  printf("\nSTMT_EXEC;;15735\n");
size_t tmp___10;

  printf("\nSTMT_EXEC;;15737\n");
char str[2];










  printf("\nSTMT_EXEC;;15748\n");
char newtab;

  printf("\nSTMT_EXEC;;15750\n");
char const *tmp___23;
  printf("\nSTMT_EXEC;;15751\n");
char *tmp___24;








































  printf("\nSTMT_EXEC;;15792\n");
unsigned long np;
  printf("\nSTMT_EXEC;;15793\n");
unsigned long tmp___59;



  {







    printf("\nSTMT_EXEC;;15805\n");
nfiles = (size_t)0;





    printf("\nSTMT_EXEC;;15811\n");
outfile = (char const *)((void *)0);






































































    printf("\nSTMT_EXEC;;15882\n");
printf("\nFUNC_CALL;atexit(void (*)(void));\n");
atexit(&exit_cleanup);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15883\n");
key_init(&gkey);

    printf("\nSTMT_EXEC;;15885\n");
files = (char **)xnmalloc((size_t)argc, sizeof(*files));
    printf("\nSTMT_EXEC;;15886\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15888\n");
oi = -1;

      {



































































        printf("\nSTMT_EXEC;;15958\n");
printf("\nFUNC_CALL;getopt_long(int,char *const *,const char *,const struct option *,int *);\n");
c = getopt_long(argc, (char *const *)argv, short_options, long_options___1, &oi);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;15959\n");
if (c == -1)
        {



          printf("\nSTMT_EXEC;;15964\n");
goto while_break___1;
        }






        else
        {
          printf("\nSTMT_EXEC;;15974\n");
if (c == 1)
          {
            printf("\nSTMT_EXEC;;15976\n");
goto case_1;
          }




































          printf("\nSTMT_EXEC;;16014\n");
if (c == 114)
          {
            printf("\nSTMT_EXEC;;16016\n");
goto case_98;
          }
































          printf("\nSTMT_EXEC;;16050\n");
if (c == 107)
          {
            printf("\nSTMT_EXEC;;16052\n");
goto case_107;
          }
















          printf("\nSTMT_EXEC;;16070\n");
if (c == 115)
          {
            printf("\nSTMT_EXEC;;16072\n");
goto case_115;
          }
          printf("\nSTMT_EXEC;;16074\n");
if (c == 83)
          {
            printf("\nSTMT_EXEC;;16076\n");
goto case_83;
          }
          printf("\nSTMT_EXEC;;16078\n");
if (c == 116)
          {
            printf("\nSTMT_EXEC;;16080\n");
goto case_116;
          }








          printf("\nSTMT_EXEC;;16090\n");
if (c == 117)
          {
            printf("\nSTMT_EXEC;;16092\n");
goto case_117;
          }





          {
            printf("\nSTMT_EXEC;;16100\n");
goto case_122;
          }









        case_1:
          {
printf("\nSTMT_EXEC;;16112\n");
key = (struct keyfield *)((void *)0);
}







































































































          {
            printf("\nSTMT_EXEC;;16216\n");
tmp___10 = nfiles;
            printf("\nSTMT_EXEC;;16217\n");
nfiles++;
            printf("\nSTMT_EXEC;;16218\n");
*(files + tmp___10) = optarg;
          }
          printf("\nSTMT_EXEC;;16220\n");
goto switch_break;



        case_98:
          {
printf("\nSTMT_EXEC;;16225\n");
str[0] = (char)c;
}


          printf("\nSTMT_EXEC;;16227\n");
set_ordering((char const *)(str), &gkey, (enum blanktype)2);






































          printf("\nSTMT_EXEC;;16266\n");
goto switch_break;
        case_107:
          {
printf("\nSTMT_EXEC;;16268\n");
key = key_init(&key_buf);
}

          printf("\nSTMT_EXEC;;16269\n");
s = parse_field_count((char const *)optarg, &key->sword, "invalid number at field start");
















































































        case_115:
          {
printf("\nSTMT_EXEC;;16351\n");
stable = (_Bool)1;
}

          printf("\nSTMT_EXEC;;16352\n");
goto switch_break;
        case_83:
          {
printf("\nSTMT_EXEC;;16354\n");
specify_sort_size(oi, (char)c, (char const *)optarg);
}


        case_116:
          {
printf("\nSTMT_EXEC;;16357\n");
newtab = *(optarg + 0);
}


          {












            printf("\nSTMT_EXEC;;16372\n");
tmp___23 = quote((char const *)optarg);
            printf("\nSTMT_EXEC;;16373\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___24 = gettext("multi-character tab %s");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;16374\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___24, tmp___23);printf("\nFUNC_RETURN;;\n");

          }

















        case_117:
          {
printf("\nSTMT_EXEC;;16394\n");
unique = (_Bool)1;
}



















          printf("\nSTMT_EXEC;;16413\n");
goto switch_break;
        case_122:
          {
printf("\nSTMT_EXEC;;16415\n");
eolchar = (char)0;
}











        switch_break:;
        }
      }
    }

  while_break___1:;


































































































































































    printf("\nSTMT_EXEC;;16594\n");
reverse = gkey.reverse;


















    printf("\nSTMT_EXEC;;16613\n");
if (nfiles == 0UL)
    {


      printf("\nSTMT_EXEC;;16617\n");
files = &minus;
    }

    {





















































      {
        printf("\nSTMT_EXEC;;16675\n");
tmp___59 = num_processors((enum nproc_query)2);
        printf("\nSTMT_EXEC;;16676\n");
np = tmp___59;

        {
          printf("\nSTMT_EXEC;;16679\n");
nthreads = np;
        }



      }










      printf("\nSTMT_EXEC;;16695\n");
sort((char *const *)files, nfiles, outfile, nthreads);
    }









    printf("\nSTMT_EXEC;;16706\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(0);printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}