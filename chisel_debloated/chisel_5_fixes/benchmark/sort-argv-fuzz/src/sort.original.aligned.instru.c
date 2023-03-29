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
struct timespec dtotimespec(double sec)
{
  printf("\nFUNC_CALL;dtotimespec(double);\n");
printf("\nSTMT_EXEC;;660\n");
double min_representable;
  printf("\nSTMT_EXEC;;661\n");
double max_representable;
  printf("\nSTMT_EXEC;;662\n");
struct timespec r;
  printf("\nSTMT_EXEC;;663\n");
time_t s;
  printf("\nSTMT_EXEC;;664\n");
double frac;
  printf("\nSTMT_EXEC;;665\n");
long ns;
  {
    printf("\nSTMT_EXEC;;667\n");
min_representable = (double)(~(((1L << (sizeof(time_t) * 8UL - 2UL)) - 1L) * 2L + 1L));
    printf("\nSTMT_EXEC;;668\n");
max_representable = ((double)(((1L << (sizeof(time_t) * 8UL - 2UL)) - 1L) * 2L + 1L) * (double)1000000000 + (double)999999999) / (double)1000000000;
    printf("\nSTMT_EXEC;;669\n");
if (!(min_representable < sec))
    {
      printf("\nSTMT_EXEC;;671\n");
r.tv_sec = ~(((1L << (sizeof(time_t) * 8UL - 2UL)) - 1L) * 2L + 1L);
      printf("\nSTMT_EXEC;;672\n");
r.tv_nsec = (__syscall_slong_t)0;
    }
    else
    {
      printf("\nSTMT_EXEC;;676\n");
if (!(sec < max_representable))
      {
        printf("\nSTMT_EXEC;;678\n");
r.tv_sec = ((1L << (sizeof(time_t) * 8UL - 2UL)) - 1L) * 2L + 1L;
        printf("\nSTMT_EXEC;;679\n");
r.tv_nsec = (__syscall_slong_t)999999999;
      }
      else
      {
        printf("\nSTMT_EXEC;;683\n");
s = (time_t)sec;
        printf("\nSTMT_EXEC;;684\n");
frac = (double)1000000000 * (sec - (double)s);
        printf("\nSTMT_EXEC;;685\n");
ns = (long)frac;
        printf("\nSTMT_EXEC;;686\n");
ns += (long)((double)ns < frac);
        printf("\nSTMT_EXEC;;687\n");
s += ns / 1000000000L;
        printf("\nSTMT_EXEC;;688\n");
ns %= 1000000000L;
        printf("\nSTMT_EXEC;;689\n");
if (ns < 0L)
        {
          printf("\nSTMT_EXEC;;691\n");
s--;
          printf("\nSTMT_EXEC;;692\n");
ns += 1000000000L;
        }
        printf("\nSTMT_EXEC;;694\n");
r.tv_sec = s;
        printf("\nSTMT_EXEC;;695\n");
r.tv_nsec = ns;
      }
    }
    printf("\nSTMT_EXEC;;698\n");
printf("\nFUNC_RETURN;;\n");
return (r);
  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__noreturn__)) void xalloc_die(void);
char *last_component(char const *name) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2), __leaf__)) memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int *(__attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd, struct stat *__buf);
extern int close(int __fd);
char const diacrit_base[256];
char const diacrit_diac[256];
char const diacrit_base[256] = {(char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)'A', (char const)'B', (char const)'C', (char const)'D', (char const)'E', (char const)'F', (char const)'G', (char const)'H', (char const)'I', (char const)'J', (char const)'K', (char const)'L', (char const)'M', (char const)'N', (char const)'O', (char const)'P', (char const)'Q', (char const)'R', (char const)'S', (char const)'T', (char const)'U', (char const)'V', (char const)'W', (char const)'X', (char const)'Y', (char const)'Z', (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)'a', (char const)'b', (char const)'c', (char const)'d', (char const)'e', (char const)'f', (char const)'g', (char const)'h', (char const)'i', (char const)'j', (char const)'k', (char const)'l', (char const)'m', (char const)'n', (char const)'o', (char const)'p', (char const)'q', (char const)'r', (char const)'s', (char const)'t', (char const)'u', (char const)'v', (char const)'w', (char const)'x', (char const)'y', (char const)'z', (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'C', (char const)'E', (char const)'E', (char const)'E', (char const)'E', (char const)'I', (char const)'I', (char const)'I', (char const)'I', (char const)0, (char const)'N', (char const)'O', (char const)'O', (char const)'O', (char const)'O', (char const)'O', (char const)0, (char const)'O', (char const)'U', (char const)'U', (char const)'U', (char const)'U', (char const)'Y', (char const)0, (char const)0, (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'c', (char const)'e', (char const)'e', (char const)'e', (char const)'e', (char const)'i', (char const)'i', (char const)'i', (char const)'i', (char const)0, (char const)'n', (char const)'o', (char const)'o', (char const)'o', (char const)'o', (char const)'o', (char const)0, (char const)'o', (char const)'u', (char const)'u', (char const)'u', (char const)'u', (char const)'y', (char const)0, (char const)'y'};
char const diacrit_diac[256] = {(char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)4, (char const)0, (char const)3, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)6, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)8, (char const)1, (char const)7, (char const)3, (char const)2, (char const)4, (char const)5, (char const)3, (char const)2, (char const)4, (char const)5, (char const)0, (char const)6, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)0, (char const)9, (char const)3, (char const)2, (char const)4, (char const)5, (char const)2, (char const)0, (char const)0, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)8, (char const)1, (char const)7, (char const)3, (char const)2, (char const)4, (char const)5, (char const)3, (char const)2, (char const)4, (char const)5, (char const)0, (char const)6, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)0, (char const)9, (char const)3, (char const)2, (char const)4, (char const)5, (char const)2, (char const)0, (char const)0};
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
extern struct _IO_FILE *stderr;
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
int volatile exit_failure;
char *quotearg_colon(char const *arg);
static char const *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{
  printf("\nFUNC_CALL;close_stdout();\n");
printf("\nSTMT_EXEC;;733\n");
char const *write_error;
  printf("\nSTMT_EXEC;;734\n");
char const *tmp;
  printf("\nSTMT_EXEC;;735\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;736\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;737\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;738\n");
int tmp___3;
  printf("\nSTMT_EXEC;;739\n");
int *tmp___4;
  printf("\nSTMT_EXEC;;740\n");
int tmp___5;
  {
    printf("\nSTMT_EXEC;;742\n");
tmp___3 = close_stream(stdout);
    printf("\nSTMT_EXEC;;743\n");
if (tmp___3 != 0)
    {
      printf("\nSTMT_EXEC;;745\n");
if (ignore_EPIPE)
      {
        printf("\nSTMT_EXEC;;747\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___4 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;748\n");
if (!(*tmp___4 == 32))
        {
          printf("\nSTMT_EXEC;;750\n");
goto _L;
        }
      }
      else
      {
      _L:
        {
printf("\nSTMT_EXEC;;756\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = (char const *)gettext("write error");printf("\nFUNC_RETURN;;\n");

}

        printf("\nSTMT_EXEC;;757\n");
write_error = tmp;
        printf("\nSTMT_EXEC;;758\n");
if (file_name)
        {
          printf("\nSTMT_EXEC;;760\n");
tmp___0 = quotearg_colon(file_name);
          printf("\nSTMT_EXEC;;761\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;762\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___1, "%s: %s", tmp___0, write_error);printf("\nFUNC_RETURN;;\n");

        }
        else
        {
          printf("\nSTMT_EXEC;;766\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;767\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___2, "%s", write_error);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;769\n");
printf("\nFUNC_CALL;_exit(int);\n");
_exit((int)exit_failure);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;772\n");
tmp___5 = close_stream(stderr);
    printf("\nSTMT_EXEC;;773\n");
if (tmp___5 != 0)
    {
      printf("\nSTMT_EXEC;;775\n");
printf("\nFUNC_CALL;_exit(int);\n");
_exit((int)exit_failure);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;777\n");
printf("\nFUNC_RETURN;;\n");
return;
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
printf("\nSTMT_EXEC;;788\n");
_Bool some_pending;
  printf("\nSTMT_EXEC;;789\n");
size_t tmp;
  printf("\nSTMT_EXEC;;790\n");
_Bool prev_fail;
  printf("\nSTMT_EXEC;;791\n");
int tmp___0;
  printf("\nSTMT_EXEC;;792\n");
_Bool fclose_fail;
  printf("\nSTMT_EXEC;;793\n");
int tmp___1;
  printf("\nSTMT_EXEC;;794\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;795\n");
int *tmp___3;
  {
    printf("\nSTMT_EXEC;;797\n");
printf("\nFUNC_CALL;__fpending(FILE *);\n");
tmp = __fpending(stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;798\n");
some_pending = (_Bool)(tmp != 0UL);
    printf("\nSTMT_EXEC;;799\n");
printf("\nFUNC_CALL;ferror_unlocked(FILE *);\n");
tmp___0 = ferror_unlocked(stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;800\n");
prev_fail = (_Bool)(tmp___0 != 0);
    printf("\nSTMT_EXEC;;801\n");
tmp___1 = rpl_fclose(stream);
    printf("\nSTMT_EXEC;;802\n");
fclose_fail = (_Bool)(tmp___1 != 0);
    printf("\nSTMT_EXEC;;803\n");
if (prev_fail)
    {
      printf("\nSTMT_EXEC;;805\n");
goto _L___0;
    }
    else
    {
      printf("\nSTMT_EXEC;;809\n");
if (fclose_fail)
      {
        printf("\nSTMT_EXEC;;811\n");
if (some_pending)
        {
          printf("\nSTMT_EXEC;;813\n");
goto _L___0;
        }
        else
        {
          printf("\nSTMT_EXEC;;817\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;818\n");
if (*tmp___3 != 9)
          {
          _L___0:
            {
printf("\nSTMT_EXEC;;821\n");
if (!fclose_fail)
            {
              printf("\nSTMT_EXEC;;823\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;824\n");
*tmp___2 = 0;
            }
}

            printf("\nSTMT_EXEC;;826\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
          }
        }
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
struct allocator const stdlib_allocator;
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
int c_strcasecmp(char const *s1, char const *s2)
{
  printf("\nFUNC_CALL;c_strcasecmp(const char *,const char *);\n");
printf("\nSTMT_EXEC;;851\n");
register unsigned char const *p1;
  printf("\nSTMT_EXEC;;852\n");
register unsigned char const *p2;
  printf("\nSTMT_EXEC;;853\n");
unsigned char c1;
  printf("\nSTMT_EXEC;;854\n");
unsigned char c2;
  {
    printf("\nSTMT_EXEC;;856\n");
p1 = (unsigned char const *)s1;
    printf("\nSTMT_EXEC;;857\n");
p2 = (unsigned char const *)s2;
    printf("\nSTMT_EXEC;;858\n");
if ((unsigned long)p1 == (unsigned long)p2)
    {
      printf("\nSTMT_EXEC;;860\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;862\n");
while (1)
    {
      printf("\nSTMT_EXEC;;864\n");
c1 = (unsigned char)c_tolower((int)*p1);
      printf("\nSTMT_EXEC;;865\n");
c2 = (unsigned char)c_tolower((int)*p2);
      printf("\nSTMT_EXEC;;866\n");
if ((int)c1 == 0)
      {
        printf("\nSTMT_EXEC;;868\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;870\n");
p1++;
      printf("\nSTMT_EXEC;;871\n");
p2++;
      printf("\nSTMT_EXEC;;872\n");
if (!((int)c1 == (int)c2))
      {
        printf("\nSTMT_EXEC;;874\n");
goto while_break;
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;878\n");
printf("\nFUNC_RETURN;;\n");
return ((int)c1 - (int)c2);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool c_isalnum(int c) __attribute__((__const__));
_Bool c_isalpha(int c) __attribute__((__const__));
_Bool c_isdigit(int c) __attribute__((__const__));
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isalnum(int c) __attribute__((__const__));
_Bool c_isalnum(int c)
{
  printf("\nFUNC_CALL;c_isalnum(int);\n");
printf("\nSTMT_EXEC;;888\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;890\n");
if (c >= 48)
    {
      printf("\nSTMT_EXEC;;892\n");
if (c <= 57)
      {
        printf("\nSTMT_EXEC;;894\n");
tmp = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;898\n");
goto _L;
      }
    }
    else
    {
    _L:
      {
printf("\nSTMT_EXEC;;904\n");
if ((c & -33) >= 65)
      {
        printf("\nSTMT_EXEC;;906\n");
if ((c & -33) <= 90)
        {
          printf("\nSTMT_EXEC;;908\n");
tmp = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;912\n");
tmp = 0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;917\n");
tmp = 0;
      }
}

    }
    printf("\nSTMT_EXEC;;920\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool c_isalpha(int c) __attribute__((__const__));
_Bool c_isalpha(int c)
{
  printf("\nFUNC_CALL;c_isalpha(int);\n");
printf("\nSTMT_EXEC;;926\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;928\n");
if ((c & -33) >= 65)
    {
      printf("\nSTMT_EXEC;;930\n");
if ((c & -33) <= 90)
      {
        printf("\nSTMT_EXEC;;932\n");
tmp = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;936\n");
tmp = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;941\n");
tmp = 0;
    }
    printf("\nSTMT_EXEC;;943\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool c_isdigit(int c) __attribute__((__const__));
_Bool c_isdigit(int c)
{
  printf("\nFUNC_CALL;c_isdigit(int);\n");
printf("\nSTMT_EXEC;;949\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;951\n");
if (c >= 48)
    {
      printf("\nSTMT_EXEC;;953\n");
if (c <= 57)
      {
        printf("\nSTMT_EXEC;;955\n");
tmp = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;959\n");
tmp = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;964\n");
tmp = 0;
    }
    printf("\nSTMT_EXEC;;966\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c)
{
  printf("\nFUNC_CALL;c_isspace(int);\n");
printf("\nSTMT_EXEC;;972\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;974\n");
if (c == 32)
    {
      printf("\nSTMT_EXEC;;976\n");
tmp = 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;980\n");
if (c == 9)
      {
        printf("\nSTMT_EXEC;;982\n");
tmp = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;986\n");
if (c == 10)
        {
          printf("\nSTMT_EXEC;;988\n");
tmp = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;992\n");
if (c == 11)
          {
            printf("\nSTMT_EXEC;;994\n");
tmp = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;998\n");
if (c == 12)
            {
              printf("\nSTMT_EXEC;;1000\n");
tmp = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;1004\n");
if (c == 13)
              {
                printf("\nSTMT_EXEC;;1006\n");
tmp = 1;
              }
              else
              {
                printf("\nSTMT_EXEC;;1010\n");
tmp = 0;
              }
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;1017\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
int c_tolower(int c) __attribute__((__const__));
int c_tolower(int c)
{
  printf("\nFUNC_CALL;c_tolower(int);\n");
printf("\nSTMT_EXEC;;1023\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;1025\n");
if (c >= 65)
    {
      printf("\nSTMT_EXEC;;1027\n");
if (c <= 90)
      {
        printf("\nSTMT_EXEC;;1029\n");
tmp = (c - 65) + 97;
      }
      else
      {
        printf("\nSTMT_EXEC;;1033\n");
tmp = c;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;1038\n");
tmp = c;
    }
    printf("\nSTMT_EXEC;;1040\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char *last_component(char const *name) __attribute__((__pure__));
char *last_component(char const *name)
{
  printf("\nFUNC_CALL;last_component(const char *);\n");
printf("\nSTMT_EXEC;;1046\n");
char const *base;
  printf("\nSTMT_EXEC;;1047\n");
char const *p;
  printf("\nSTMT_EXEC;;1048\n");
_Bool saw_slash;
  {
    printf("\nSTMT_EXEC;;1050\n");
base = name + 0;
    printf("\nSTMT_EXEC;;1051\n");
saw_slash = (_Bool)0;
    printf("\nSTMT_EXEC;;1052\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1054\n");
if (!((int const) * base == 47))
      {
        printf("\nSTMT_EXEC;;1056\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1058\n");
base++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;1061\n");
p = base;
}

    printf("\nSTMT_EXEC;;1062\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1064\n");
if (!*p)
      {
        printf("\nSTMT_EXEC;;1066\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;1068\n");
if ((int const) * p == 47)
      {
        printf("\nSTMT_EXEC;;1070\n");
saw_slash = (_Bool)1;
      }
      else
      {
        printf("\nSTMT_EXEC;;1074\n");
if (saw_slash)
        {
          printf("\nSTMT_EXEC;;1076\n");
base = p;
          printf("\nSTMT_EXEC;;1077\n");
saw_slash = (_Bool)0;
        }
      }
      printf("\nSTMT_EXEC;;1080\n");
p++;
    }
  while_break___0:;
    printf("\nSTMT_EXEC;;1083\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)base);
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static unsigned char to_uchar(char ch)
{
  printf("\nFUNC_CALL;to_uchar(char);\n");
{
    printf("\nSTMT_EXEC;;1089\n");
printf("\nFUNC_RETURN;;\n");
return ((unsigned char)ch);
  }
printf("\nFUNC_RETURN;;\n");
}
char const *simple_backup_suffix;
void (*argmatch_die)(void);
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist, char const *vallist, size_t valsize, void (*exit_fn)(void));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) getenv)(char const *__name);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) memcmp)(void const *__s1, void const *__s2, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strcpy)(char *__restrict __dest, char const *__restrict __src);
char const *simple_backup_suffix = "~";
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
static void __argmatch_die(void)
{
  printf("\nFUNC_CALL;__argmatch_die();\n");
{
    printf("\nSTMT_EXEC;;1112\n");
usage(1);
    printf("\nSTMT_EXEC;;1113\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void (*argmatch_die)(void) = &__argmatch_die;
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist, size_t valsize) __attribute__((__pure__));
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist, size_t valsize)
{
  printf("\nFUNC_CALL;argmatch(const char *,const char *const *,const char *,size_t);\n");
printf("\nSTMT_EXEC;;1120\n");
size_t i;
  printf("\nSTMT_EXEC;;1121\n");
size_t arglen;
  printf("\nSTMT_EXEC;;1122\n");
ptrdiff_t matchind;
  printf("\nSTMT_EXEC;;1123\n");
_Bool ambiguous;
  printf("\nSTMT_EXEC;;1124\n");
int tmp;
  printf("\nSTMT_EXEC;;1125\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;1126\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;1128\n");
matchind = (ptrdiff_t)-1;
    printf("\nSTMT_EXEC;;1129\n");
ambiguous = (_Bool)0;
    printf("\nSTMT_EXEC;;1130\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
arglen = strlen(arg);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1131\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;1132\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1134\n");
if (!*(arglist + i))
      {
        printf("\nSTMT_EXEC;;1136\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1138\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___1 = strncmp((char const *)*(arglist + i), arg, arglen);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1139\n");
if (!tmp___1)
      {
        printf("\nSTMT_EXEC;;1141\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen((char const *)*(arglist + i));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;1142\n");
if (tmp___0 == arglen)
        {
          printf("\nSTMT_EXEC;;1144\n");
printf("\nFUNC_RETURN;;\n");
return ((ptrdiff_t)i);
        }
        else
        {
          printf("\nSTMT_EXEC;;1148\n");
if (matchind == -1L)
          {
            printf("\nSTMT_EXEC;;1150\n");
matchind = (ptrdiff_t)i;
          }
          else
          {
            printf("\nSTMT_EXEC;;1154\n");
if ((unsigned long)vallist == (unsigned long)((void *)0))
            {
              printf("\nSTMT_EXEC;;1156\n");
ambiguous = (_Bool)1;
            }
            else
            {
              printf("\nSTMT_EXEC;;1160\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp = memcmp((void const *)(vallist + valsize * (size_t)matchind), (void const *)(vallist + valsize * i), valsize);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;1161\n");
if (tmp)
              {
                printf("\nSTMT_EXEC;;1163\n");
ambiguous = (_Bool)1;
              }
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;1169\n");
i++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;1172\n");
if (ambiguous)
    {
      printf("\nSTMT_EXEC;;1174\n");
printf("\nFUNC_RETURN;;\n");
return ((ptrdiff_t)-2);
    }
    else
    {
      printf("\nSTMT_EXEC;;1178\n");
printf("\nFUNC_RETURN;;\n");
return (matchind);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem)
{
  printf("\nFUNC_CALL;argmatch_invalid(const char *,const char *,ptrdiff_t);\n");
printf("\nSTMT_EXEC;;1184\n");
char const *format;
  printf("\nSTMT_EXEC;;1185\n");
char *tmp;
  printf("\nSTMT_EXEC;;1186\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;1187\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;1188\n");
char const *tmp___2;
  printf("\nSTMT_EXEC;;1189\n");
char *tmp___3;
  {
    printf("\nSTMT_EXEC;;1191\n");
if (problem == -1L)
    {
      printf("\nSTMT_EXEC;;1193\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("invalid argument %s for %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1194\n");
tmp___1 = tmp;
    }
    else
    {
      printf("\nSTMT_EXEC;;1198\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("ambiguous argument %s for %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1199\n");
tmp___1 = tmp___0;
    }
    printf("\nSTMT_EXEC;;1201\n");
format = (char const *)tmp___1;
    printf("\nSTMT_EXEC;;1202\n");
tmp___2 = quote_n(1, context);
    printf("\nSTMT_EXEC;;1203\n");
tmp___3 = quotearg_n_style(0, (enum quoting_style)6, value);
    printf("\nSTMT_EXEC;;1204\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, format, tmp___3, tmp___2);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1205\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize)
{
  printf("\nFUNC_CALL;argmatch_valid(const char *const *,const char *,size_t);\n");
printf("\nSTMT_EXEC;;1210\n");
size_t i;
  printf("\nSTMT_EXEC;;1211\n");
char const *last_val;
  printf("\nSTMT_EXEC;;1212\n");
char *tmp;
  printf("\nSTMT_EXEC;;1213\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;1214\n");
char const *tmp___1;
  printf("\nSTMT_EXEC;;1215\n");
int tmp___2;
  {
    printf("\nSTMT_EXEC;;1217\n");
last_val = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;1218\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("Valid arguments are:");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1219\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp, stderr);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1220\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;1221\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1223\n");
if (!*(arglist + i))
      {
        printf("\nSTMT_EXEC;;1225\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1227\n");
if (i == 0UL)
      {
        printf("\nSTMT_EXEC;;1229\n");
tmp___0 = quote((char const *)*(arglist + i));
        printf("\nSTMT_EXEC;;1230\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, "\n  - %s", tmp___0);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;1231\n");
last_val = vallist + valsize * i;
      }
      else
      {
        printf("\nSTMT_EXEC;;1235\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___2 = memcmp((void const *)last_val, (void const *)(vallist + valsize * i), valsize);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;1236\n");
if (tmp___2)
        {
          printf("\nSTMT_EXEC;;1238\n");
tmp___0 = quote((char const *)*(arglist + i));
          printf("\nSTMT_EXEC;;1239\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, "\n  - %s", tmp___0);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;1240\n");
last_val = vallist + valsize * i;
        }
        else
        {
          printf("\nSTMT_EXEC;;1244\n");
tmp___1 = quote((char const *)*(arglist + i));
          printf("\nSTMT_EXEC;;1245\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, ", %s", tmp___1);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;1248\n");
i++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;1251\n");
printf("\nFUNC_CALL;putc_unlocked(int,FILE *);\n");
putc_unlocked('\n', stderr);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;1252\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist, char const *vallist, size_t valsize, void (*exit_fn)(void))
{
  printf("\nFUNC_CALL;__xargmatch_internal(const char *,const char *,const char *const *,const char *,size_t,void (*)(void));\n");
printf("\nSTMT_EXEC;;1257\n");
ptrdiff_t res;
  printf("\nSTMT_EXEC;;1258\n");
ptrdiff_t tmp;
  {
    printf("\nSTMT_EXEC;;1260\n");
tmp = argmatch(arg, arglist, vallist, valsize);
    printf("\nSTMT_EXEC;;1261\n");
res = tmp;
    printf("\nSTMT_EXEC;;1262\n");
if (res >= 0L)
    {
      printf("\nSTMT_EXEC;;1264\n");
printf("\nFUNC_RETURN;;\n");
return (res);
    }
    printf("\nSTMT_EXEC;;1266\n");
argmatch_invalid(context, arg, res);
    printf("\nSTMT_EXEC;;1267\n");
argmatch_valid(arglist, vallist, valsize);
    printf("\nSTMT_EXEC;;1268\n");
(*exit_fn)();
    printf("\nSTMT_EXEC;;1269\n");
printf("\nFUNC_RETURN;;\n");
return ((ptrdiff_t)-1);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__, __leaf__)) realloc)(void *__ptr, size_t __size);
struct allocator const stdlib_allocator = {(void *(*)(size_t))(&malloc), (void *(*)(void *, size_t))(&realloc), (void (*)(void *))(&free), (void (*)(size_t))((void *)0)};
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
__inline static void *xnmalloc(size_t n, size_t s)
{
  printf("\nFUNC_CALL;xnmalloc(size_t,size_t);\n");
printf("\nSTMT_EXEC;;1278\n");
int tmp;
  printf("\nSTMT_EXEC;;1279\n");
void *tmp___0;
  {
    printf("\nSTMT_EXEC;;1281\n");
if (sizeof(ptrdiff_t) <= sizeof(size_t))
    {
      printf("\nSTMT_EXEC;;1283\n");
tmp = -1;
    }
    else
    {
      printf("\nSTMT_EXEC;;1287\n");
tmp = -2;
    }
    printf("\nSTMT_EXEC;;1289\n");
if ((size_t)tmp / s < n)
    {
      printf("\nSTMT_EXEC;;1291\n");
xalloc_die();
    }
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
static strtol_error bkm_scale(uintmax_t *x, int scale_factor)
{
  printf("\nFUNC_CALL;bkm_scale(uintmax_t *,int);\n");
{
    printf("\nSTMT_EXEC;;1303\n");
if (0xffffffffffffffffUL / (unsigned long)scale_factor < *x)
    {
      printf("\nSTMT_EXEC;;1305\n");
*x = 0xffffffffffffffffUL;
      printf("\nSTMT_EXEC;;1306\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)1);
    }
    printf("\nSTMT_EXEC;;1308\n");
*x *= (uintmax_t)scale_factor;
    printf("\nSTMT_EXEC;;1309\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static strtol_error bkm_scale_by_power(uintmax_t *x, int base, int power)
{
  printf("\nFUNC_CALL;bkm_scale_by_power(uintmax_t *,int,int);\n");
printf("\nSTMT_EXEC;;1314\n");
strtol_error err;
  printf("\nSTMT_EXEC;;1315\n");
strtol_error tmp;
  printf("\nSTMT_EXEC;;1316\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;1318\n");
err = (strtol_error)0;
    printf("\nSTMT_EXEC;;1319\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1321\n");
tmp___0 = power;
      printf("\nSTMT_EXEC;;1322\n");
power--;
      printf("\nSTMT_EXEC;;1323\n");
if (!tmp___0)
      {
        printf("\nSTMT_EXEC;;1325\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1327\n");
tmp = bkm_scale(x, base);
      printf("\nSTMT_EXEC;;1328\n");
err = (strtol_error)((unsigned int)err | (unsigned int)tmp);
    }
  while_break:;
    printf("\nSTMT_EXEC;;1331\n");
printf("\nFUNC_RETURN;;\n");
return (err);
  }
printf("\nFUNC_RETURN;;\n");
}
strtol_error xstrtoumax(char const *s, char **ptr, int strtol_base, uintmax_t *val, char const *valid_suffixes)
{
  printf("\nFUNC_CALL;xstrtoumax(const char *,char **,int,uintmax_t *,const char *);\n");
printf("\nSTMT_EXEC;;1336\n");
char *t_ptr;
  printf("\nSTMT_EXEC;;1337\n");
char **p;
  printf("\nSTMT_EXEC;;1338\n");
uintmax_t tmp;
  printf("\nSTMT_EXEC;;1339\n");
strtol_error err;
  printf("\nSTMT_EXEC;;1340\n");
char const *q;
  printf("\nSTMT_EXEC;;1341\n");
unsigned char ch;
  printf("\nSTMT_EXEC;;1342\n");
unsigned short const **tmp___0;
  printf("\nSTMT_EXEC;;1343\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;1344\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;1345\n");
int *tmp___3;
  printf("\nSTMT_EXEC;;1346\n");
int *tmp___4;
  printf("\nSTMT_EXEC;;1347\n");
int base;
  printf("\nSTMT_EXEC;;1348\n");
int suffixes;
  printf("\nSTMT_EXEC;;1349\n");
strtol_error overflow;
  printf("\nSTMT_EXEC;;1350\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;1351\n");
char *tmp___6;
  {
    printf("\nSTMT_EXEC;;1353\n");
err = (strtol_error)0;
    printf("\nSTMT_EXEC;;1354\n");
if (0 <= strtol_base)
    {
      printf("\nSTMT_EXEC;;1356\n");
if (!(strtol_base <= 36))
      {
        printf("\nSTMT_EXEC;;1358\n");
printf("\nFUNC_CALL;__assert_fail(const char *,const char *,unsigned int,const char *);\n");
__assert_fail("0 <= strtol_base && strtol_base <= 36",
                      "/home/khheo/project/program-reduce/benchmark/"
                      "coreutils-8.16/lib/xstrtol.c",
                      96U, "xstrtoumax");printf("\nFUNC_RETURN;;\n");

      }
    }
    else
    {
      printf("\nSTMT_EXEC;;1366\n");
printf("\nFUNC_CALL;__assert_fail(const char *,const char *,unsigned int,const char *);\n");
__assert_fail("0 <= strtol_base && strtol_base <= 36",
                    "/home/khheo/project/program-reduce/benchmark/"
                    "coreutils-8.16/lib/xstrtol.c",
                    96U, "xstrtoumax");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;1371\n");
if (ptr)
    {
      printf("\nSTMT_EXEC;;1373\n");
p = ptr;
    }
    else
    {
      printf("\nSTMT_EXEC;;1377\n");
p = &t_ptr;
    }
    printf("\nSTMT_EXEC;;1379\n");
q = s;
    printf("\nSTMT_EXEC;;1380\n");
ch = (unsigned char)*q;
    printf("\nSTMT_EXEC;;1381\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1383\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___0 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1384\n");
if (!((int const) * (*tmp___0 + (int)ch) & 8192))
      {
        printf("\nSTMT_EXEC;;1386\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1388\n");
q++;
      printf("\nSTMT_EXEC;;1389\n");
ch = (unsigned char)*q;
    }
  while_break:;
    printf("\nSTMT_EXEC;;1392\n");
if ((int)ch == 45)
    {
      printf("\nSTMT_EXEC;;1394\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
    }
    printf("\nSTMT_EXEC;;1396\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1397\n");
*tmp___1 = 0;
    printf("\nSTMT_EXEC;;1398\n");
printf("\nFUNC_CALL;strtoumax(const char *__restrict,char **__restrict,int);\n");
tmp = strtoumax(s, p, strtol_base);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1399\n");
if ((unsigned long)*p == (unsigned long)s)
    {
      printf("\nSTMT_EXEC;;1401\n");
if (valid_suffixes)
      {
        printf("\nSTMT_EXEC;;1403\n");
if (*(*p))
        {
          printf("\nSTMT_EXEC;;1405\n");
printf("\nFUNC_CALL;strchr(const char *,int);\n");
tmp___2 = strchr(valid_suffixes, (int)*(*p));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;1406\n");
if (tmp___2)
          {
            printf("\nSTMT_EXEC;;1408\n");
tmp = (uintmax_t)1;
          }
          else
          {
            printf("\nSTMT_EXEC;;1412\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;1417\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;1422\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;1427\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___4 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1428\n");
if (*tmp___4 != 0)
      {
        printf("\nSTMT_EXEC;;1430\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;1431\n");
if (*tmp___3 != 34)
        {
          printf("\nSTMT_EXEC;;1433\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
        }
        printf("\nSTMT_EXEC;;1435\n");
err = (strtol_error)1;
      }
    }
    printf("\nSTMT_EXEC;;1438\n");
if (!valid_suffixes)
    {
      printf("\nSTMT_EXEC;;1440\n");
*val = tmp;
      printf("\nSTMT_EXEC;;1441\n");
printf("\nFUNC_RETURN;;\n");
return (err);
    }
    printf("\nSTMT_EXEC;;1443\n");
if ((int)*(*p) != 0)
    {
      printf("\nSTMT_EXEC;;1445\n");
base = 1024;
      printf("\nSTMT_EXEC;;1446\n");
suffixes = 1;
      printf("\nSTMT_EXEC;;1447\n");
printf("\nFUNC_CALL;strchr(const char *,int);\n");
tmp___5 = strchr(valid_suffixes, (int)*(*p));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1448\n");
if (!tmp___5)
      {
        printf("\nSTMT_EXEC;;1450\n");
*val = tmp;
        printf("\nSTMT_EXEC;;1451\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)((unsigned int)err | 2U));
      }
      printf("\nSTMT_EXEC;;1453\n");
printf("\nFUNC_CALL;strchr(const char *,int);\n");
tmp___6 = strchr(valid_suffixes, '0');printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1454\n");
if (tmp___6)
      {
        printf("\nSTMT_EXEC;;1456\n");
if ((int)*(*(p + 0) + 1) == 105)
        {
          printf("\nSTMT_EXEC;;1458\n");
goto case_105;
        }
        printf("\nSTMT_EXEC;;1460\n");
if ((int)*(*(p + 0) + 1) == 66)
        {
          printf("\nSTMT_EXEC;;1462\n");
goto case_66;
        }
        printf("\nSTMT_EXEC;;1464\n");
if ((int)*(*(p + 0) + 1) == 68)
        {
          printf("\nSTMT_EXEC;;1466\n");
goto case_66;
        }
        printf("\nSTMT_EXEC;;1468\n");
goto switch_break;
      case_105:
        {
printf("\nSTMT_EXEC;;1470\n");
if ((int)*(*(p + 0) + 2) == 66)
        {
          printf("\nSTMT_EXEC;;1472\n");
suffixes += 2;
        }
}

        printf("\nSTMT_EXEC;;1474\n");
goto switch_break;
      case_66:
        {
printf("\nSTMT_EXEC;;1476\n");
base = 1000;
}

        printf("\nSTMT_EXEC;;1477\n");
suffixes++;
        printf("\nSTMT_EXEC;;1478\n");
goto switch_break;
      switch_break:;
      }
      printf("\nSTMT_EXEC;;1481\n");
if ((int)*(*p) == 98)
      {
        printf("\nSTMT_EXEC;;1483\n");
goto case_98;
      }
      printf("\nSTMT_EXEC;;1485\n");
if ((int)*(*p) == 66)
      {
        printf("\nSTMT_EXEC;;1487\n");
goto case_66___0;
      }
      printf("\nSTMT_EXEC;;1489\n");
if ((int)*(*p) == 99)
      {
        printf("\nSTMT_EXEC;;1491\n");
goto case_99;
      }
      printf("\nSTMT_EXEC;;1493\n");
if ((int)*(*p) == 69)
      {
        printf("\nSTMT_EXEC;;1495\n");
goto case_69;
      }
      printf("\nSTMT_EXEC;;1497\n");
if ((int)*(*p) == 71)
      {
        printf("\nSTMT_EXEC;;1499\n");
goto case_71;
      }
      printf("\nSTMT_EXEC;;1501\n");
if ((int)*(*p) == 103)
      {
        printf("\nSTMT_EXEC;;1503\n");
goto case_71;
      }
      printf("\nSTMT_EXEC;;1505\n");
if ((int)*(*p) == 107)
      {
        printf("\nSTMT_EXEC;;1507\n");
goto case_107;
      }
      printf("\nSTMT_EXEC;;1509\n");
if ((int)*(*p) == 75)
      {
        printf("\nSTMT_EXEC;;1511\n");
goto case_107;
      }
      printf("\nSTMT_EXEC;;1513\n");
if ((int)*(*p) == 77)
      {
        printf("\nSTMT_EXEC;;1515\n");
goto case_77;
      }
      printf("\nSTMT_EXEC;;1517\n");
if ((int)*(*p) == 109)
      {
        printf("\nSTMT_EXEC;;1519\n");
goto case_77;
      }
      printf("\nSTMT_EXEC;;1521\n");
if ((int)*(*p) == 80)
      {
        printf("\nSTMT_EXEC;;1523\n");
goto case_80;
      }
      printf("\nSTMT_EXEC;;1525\n");
if ((int)*(*p) == 84)
      {
        printf("\nSTMT_EXEC;;1527\n");
goto case_84;
      }
      printf("\nSTMT_EXEC;;1529\n");
if ((int)*(*p) == 116)
      {
        printf("\nSTMT_EXEC;;1531\n");
goto case_84;
      }
      printf("\nSTMT_EXEC;;1533\n");
if ((int)*(*p) == 119)
      {
        printf("\nSTMT_EXEC;;1535\n");
goto case_119;
      }
      printf("\nSTMT_EXEC;;1537\n");
if ((int)*(*p) == 89)
      {
        printf("\nSTMT_EXEC;;1539\n");
goto case_89;
      }
      printf("\nSTMT_EXEC;;1541\n");
if ((int)*(*p) == 90)
      {
        printf("\nSTMT_EXEC;;1543\n");
goto case_90;
      }
      printf("\nSTMT_EXEC;;1545\n");
goto switch_default;
    case_98:
      {
printf("\nSTMT_EXEC;;1547\n");
overflow = bkm_scale(&tmp, 512);
}

      printf("\nSTMT_EXEC;;1548\n");
goto switch_break___0;
    case_66___0:
      {
printf("\nSTMT_EXEC;;1550\n");
overflow = bkm_scale(&tmp, 1024);
}

      printf("\nSTMT_EXEC;;1551\n");
goto switch_break___0;
    case_99:
      {
printf("\nSTMT_EXEC;;1553\n");
overflow = (strtol_error)0;
}

      printf("\nSTMT_EXEC;;1554\n");
goto switch_break___0;
    case_69:
      {
printf("\nSTMT_EXEC;;1556\n");
overflow = bkm_scale_by_power(&tmp, base, 6);
}

      printf("\nSTMT_EXEC;;1557\n");
goto switch_break___0;
    case_71:
      {
printf("\nSTMT_EXEC;;1559\n");
overflow = bkm_scale_by_power(&tmp, base, 3);
}

      printf("\nSTMT_EXEC;;1560\n");
goto switch_break___0;
    case_107:
      {
printf("\nSTMT_EXEC;;1562\n");
overflow = bkm_scale_by_power(&tmp, base, 1);
}

      printf("\nSTMT_EXEC;;1563\n");
goto switch_break___0;
    case_77:
      {
printf("\nSTMT_EXEC;;1565\n");
overflow = bkm_scale_by_power(&tmp, base, 2);
}

      printf("\nSTMT_EXEC;;1566\n");
goto switch_break___0;
    case_80:
      {
printf("\nSTMT_EXEC;;1568\n");
overflow = bkm_scale_by_power(&tmp, base, 5);
}

      printf("\nSTMT_EXEC;;1569\n");
goto switch_break___0;
    case_84:
      {
printf("\nSTMT_EXEC;;1571\n");
overflow = bkm_scale_by_power(&tmp, base, 4);
}

      printf("\nSTMT_EXEC;;1572\n");
goto switch_break___0;
    case_119:
      {
printf("\nSTMT_EXEC;;1574\n");
overflow = bkm_scale(&tmp, 2);
}

      printf("\nSTMT_EXEC;;1575\n");
goto switch_break___0;
    case_89:
      {
printf("\nSTMT_EXEC;;1577\n");
overflow = bkm_scale_by_power(&tmp, base, 8);
}

      printf("\nSTMT_EXEC;;1578\n");
goto switch_break___0;
    case_90:
      {
printf("\nSTMT_EXEC;;1580\n");
overflow = bkm_scale_by_power(&tmp, base, 7);
}

      printf("\nSTMT_EXEC;;1581\n");
goto switch_break___0;
    switch_default:
      {
printf("\nSTMT_EXEC;;1583\n");
*val = tmp;
}

      printf("\nSTMT_EXEC;;1584\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)((unsigned int)err | 2U));
    switch_break___0:
      {
printf("\nSTMT_EXEC;;1586\n");
err = (strtol_error)((unsigned int)err | (unsigned int)overflow);
}

      printf("\nSTMT_EXEC;;1587\n");
*p += suffixes;
      printf("\nSTMT_EXEC;;1588\n");
if (*(*p))
      {
        printf("\nSTMT_EXEC;;1590\n");
err = (strtol_error)((unsigned int)err | 2U);
      }
    }
    printf("\nSTMT_EXEC;;1593\n");
*val = tmp;
    printf("\nSTMT_EXEC;;1594\n");
printf("\nFUNC_RETURN;;\n");
return (err);
  }
printf("\nFUNC_RETURN;;\n");
}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base, unsigned long *val, char const *valid_suffixes);
extern __attribute__((__nothrow__)) unsigned long(__attribute__((__nonnull__(1), __leaf__)) strtoul)(char const *__restrict __nptr, char **__restrict __endptr, int __base);
static strtol_error bkm_scale___0(unsigned long *x, int scale_factor)
{
  printf("\nFUNC_CALL;bkm_scale___0(unsigned long *,int);\n");
{
    printf("\nSTMT_EXEC;;1602\n");
if (0xffffffffffffffffUL / (unsigned long)scale_factor < *x)
    {
      printf("\nSTMT_EXEC;;1604\n");
*x = 0xffffffffffffffffUL;
      printf("\nSTMT_EXEC;;1605\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)1);
    }
    printf("\nSTMT_EXEC;;1607\n");
*x *= (unsigned long)scale_factor;
    printf("\nSTMT_EXEC;;1608\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static strtol_error bkm_scale_by_power___0(unsigned long *x, int base, int power)
{
  printf("\nFUNC_CALL;bkm_scale_by_power___0(unsigned long *,int,int);\n");
printf("\nSTMT_EXEC;;1613\n");
strtol_error err;
  printf("\nSTMT_EXEC;;1614\n");
strtol_error tmp;
  printf("\nSTMT_EXEC;;1615\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;1617\n");
err = (strtol_error)0;
    printf("\nSTMT_EXEC;;1618\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1620\n");
tmp___0 = power;
      printf("\nSTMT_EXEC;;1621\n");
power--;
      printf("\nSTMT_EXEC;;1622\n");
if (!tmp___0)
      {
        printf("\nSTMT_EXEC;;1624\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1626\n");
tmp = bkm_scale___0(x, base);
      printf("\nSTMT_EXEC;;1627\n");
err = (strtol_error)((unsigned int)err | (unsigned int)tmp);
    }
  while_break:;
    printf("\nSTMT_EXEC;;1630\n");
printf("\nFUNC_RETURN;;\n");
return (err);
  }
printf("\nFUNC_RETURN;;\n");
}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base, unsigned long *val, char const *valid_suffixes)
{
  printf("\nFUNC_CALL;xstrtoul(const char *,char **,int,unsigned long *,const char *);\n");
printf("\nSTMT_EXEC;;1635\n");
char *t_ptr;
  printf("\nSTMT_EXEC;;1636\n");
char **p;
  printf("\nSTMT_EXEC;;1637\n");
unsigned long tmp;
  printf("\nSTMT_EXEC;;1638\n");
strtol_error err;
  printf("\nSTMT_EXEC;;1639\n");
char const *q;
  printf("\nSTMT_EXEC;;1640\n");
unsigned char ch;
  printf("\nSTMT_EXEC;;1641\n");
unsigned short const **tmp___0;
  printf("\nSTMT_EXEC;;1642\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;1643\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;1644\n");
int *tmp___3;
  printf("\nSTMT_EXEC;;1645\n");
int *tmp___4;
  printf("\nSTMT_EXEC;;1646\n");
int base;
  printf("\nSTMT_EXEC;;1647\n");
int suffixes;
  printf("\nSTMT_EXEC;;1648\n");
strtol_error overflow;
  printf("\nSTMT_EXEC;;1649\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;1650\n");
char *tmp___6;
  {
    printf("\nSTMT_EXEC;;1652\n");
err = (strtol_error)0;
    printf("\nSTMT_EXEC;;1653\n");
if (0 <= strtol_base)
    {
      printf("\nSTMT_EXEC;;1655\n");
if (!(strtol_base <= 36))
      {
        printf("\nSTMT_EXEC;;1657\n");
printf("\nFUNC_CALL;__assert_fail(const char *,const char *,unsigned int,const char *);\n");
__assert_fail("0 <= strtol_base && strtol_base <= 36",
                      "/home/khheo/project/program-reduce/benchmark/"
                      "coreutils-8.16/lib/xstrtol.c",
                      96U, "xstrtoul");printf("\nFUNC_RETURN;;\n");

      }
    }
    else
    {
      printf("\nSTMT_EXEC;;1665\n");
printf("\nFUNC_CALL;__assert_fail(const char *,const char *,unsigned int,const char *);\n");
__assert_fail("0 <= strtol_base && strtol_base <= 36",
                    "/home/khheo/project/program-reduce/benchmark/"
                    "coreutils-8.16/lib/xstrtol.c",
                    96U, "xstrtoul");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;1670\n");
if (ptr)
    {
      printf("\nSTMT_EXEC;;1672\n");
p = ptr;
    }
    else
    {
      printf("\nSTMT_EXEC;;1676\n");
p = &t_ptr;
    }
    printf("\nSTMT_EXEC;;1678\n");
q = s;
    printf("\nSTMT_EXEC;;1679\n");
ch = (unsigned char)*q;
    printf("\nSTMT_EXEC;;1680\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1682\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___0 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1683\n");
if (!((int const) * (*tmp___0 + (int)ch) & 8192))
      {
        printf("\nSTMT_EXEC;;1685\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1687\n");
q++;
      printf("\nSTMT_EXEC;;1688\n");
ch = (unsigned char)*q;
    }
  while_break:;
    printf("\nSTMT_EXEC;;1691\n");
if ((int)ch == 45)
    {
      printf("\nSTMT_EXEC;;1693\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
    }
    printf("\nSTMT_EXEC;;1695\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1696\n");
*tmp___1 = 0;
    printf("\nSTMT_EXEC;;1697\n");
printf("\nFUNC_CALL;strtoul(const char *__restrict,char **__restrict,int);\n");
tmp = strtoul(s, p, strtol_base);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1698\n");
if ((unsigned long)*p == (unsigned long)s)
    {
      printf("\nSTMT_EXEC;;1700\n");
if (valid_suffixes)
      {
        printf("\nSTMT_EXEC;;1702\n");
if (*(*p))
        {
          printf("\nSTMT_EXEC;;1704\n");
printf("\nFUNC_CALL;strchr(const char *,int);\n");
tmp___2 = strchr(valid_suffixes, (int)*(*p));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;1705\n");
if (tmp___2)
          {
            printf("\nSTMT_EXEC;;1707\n");
tmp = 1UL;
          }
          else
          {
            printf("\nSTMT_EXEC;;1711\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;1716\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;1721\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;1726\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___4 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1727\n");
if (*tmp___4 != 0)
      {
        printf("\nSTMT_EXEC;;1729\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;1730\n");
if (*tmp___3 != 34)
        {
          printf("\nSTMT_EXEC;;1732\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)4);
        }
        printf("\nSTMT_EXEC;;1734\n");
err = (strtol_error)1;
      }
    }
    printf("\nSTMT_EXEC;;1737\n");
if (!valid_suffixes)
    {
      printf("\nSTMT_EXEC;;1739\n");
*val = tmp;
      printf("\nSTMT_EXEC;;1740\n");
printf("\nFUNC_RETURN;;\n");
return (err);
    }
    printf("\nSTMT_EXEC;;1742\n");
if ((int)*(*p) != 0)
    {
      printf("\nSTMT_EXEC;;1744\n");
base = 1024;
      printf("\nSTMT_EXEC;;1745\n");
suffixes = 1;
      printf("\nSTMT_EXEC;;1746\n");
printf("\nFUNC_CALL;strchr(const char *,int);\n");
tmp___5 = strchr(valid_suffixes, (int)*(*p));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1747\n");
if (!tmp___5)
      {
        printf("\nSTMT_EXEC;;1749\n");
*val = tmp;
        printf("\nSTMT_EXEC;;1750\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)((unsigned int)err | 2U));
      }
      printf("\nSTMT_EXEC;;1752\n");
printf("\nFUNC_CALL;strchr(const char *,int);\n");
tmp___6 = strchr(valid_suffixes, '0');printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1753\n");
if (tmp___6)
      {
        printf("\nSTMT_EXEC;;1755\n");
if ((int)*(*(p + 0) + 1) == 105)
        {
          printf("\nSTMT_EXEC;;1757\n");
goto case_105;
        }
        printf("\nSTMT_EXEC;;1759\n");
if ((int)*(*(p + 0) + 1) == 66)
        {
          printf("\nSTMT_EXEC;;1761\n");
goto case_66;
        }
        printf("\nSTMT_EXEC;;1763\n");
if ((int)*(*(p + 0) + 1) == 68)
        {
          printf("\nSTMT_EXEC;;1765\n");
goto case_66;
        }
        printf("\nSTMT_EXEC;;1767\n");
goto switch_break;
      case_105:
        {
printf("\nSTMT_EXEC;;1769\n");
if ((int)*(*(p + 0) + 2) == 66)
        {
          printf("\nSTMT_EXEC;;1771\n");
suffixes += 2;
        }
}

        printf("\nSTMT_EXEC;;1773\n");
goto switch_break;
      case_66:
        {
printf("\nSTMT_EXEC;;1775\n");
base = 1000;
}

        printf("\nSTMT_EXEC;;1776\n");
suffixes++;
        printf("\nSTMT_EXEC;;1777\n");
goto switch_break;
      switch_break:;
      }
      printf("\nSTMT_EXEC;;1780\n");
if ((int)*(*p) == 98)
      {
        printf("\nSTMT_EXEC;;1782\n");
goto case_98;
      }
      printf("\nSTMT_EXEC;;1784\n");
if ((int)*(*p) == 66)
      {
        printf("\nSTMT_EXEC;;1786\n");
goto case_66___0;
      }
      printf("\nSTMT_EXEC;;1788\n");
if ((int)*(*p) == 99)
      {
        printf("\nSTMT_EXEC;;1790\n");
goto case_99;
      }
      printf("\nSTMT_EXEC;;1792\n");
if ((int)*(*p) == 69)
      {
        printf("\nSTMT_EXEC;;1794\n");
goto case_69;
      }
      printf("\nSTMT_EXEC;;1796\n");
if ((int)*(*p) == 71)
      {
        printf("\nSTMT_EXEC;;1798\n");
goto case_71;
      }
      printf("\nSTMT_EXEC;;1800\n");
if ((int)*(*p) == 103)
      {
        printf("\nSTMT_EXEC;;1802\n");
goto case_71;
      }
      printf("\nSTMT_EXEC;;1804\n");
if ((int)*(*p) == 107)
      {
        printf("\nSTMT_EXEC;;1806\n");
goto case_107;
      }
      printf("\nSTMT_EXEC;;1808\n");
if ((int)*(*p) == 75)
      {
        printf("\nSTMT_EXEC;;1810\n");
goto case_107;
      }
      printf("\nSTMT_EXEC;;1812\n");
if ((int)*(*p) == 77)
      {
        printf("\nSTMT_EXEC;;1814\n");
goto case_77;
      }
      printf("\nSTMT_EXEC;;1816\n");
if ((int)*(*p) == 109)
      {
        printf("\nSTMT_EXEC;;1818\n");
goto case_77;
      }
      printf("\nSTMT_EXEC;;1820\n");
if ((int)*(*p) == 80)
      {
        printf("\nSTMT_EXEC;;1822\n");
goto case_80;
      }
      printf("\nSTMT_EXEC;;1824\n");
if ((int)*(*p) == 84)
      {
        printf("\nSTMT_EXEC;;1826\n");
goto case_84;
      }
      printf("\nSTMT_EXEC;;1828\n");
if ((int)*(*p) == 116)
      {
        printf("\nSTMT_EXEC;;1830\n");
goto case_84;
      }
      printf("\nSTMT_EXEC;;1832\n");
if ((int)*(*p) == 119)
      {
        printf("\nSTMT_EXEC;;1834\n");
goto case_119;
      }
      printf("\nSTMT_EXEC;;1836\n");
if ((int)*(*p) == 89)
      {
        printf("\nSTMT_EXEC;;1838\n");
goto case_89;
      }
      printf("\nSTMT_EXEC;;1840\n");
if ((int)*(*p) == 90)
      {
        printf("\nSTMT_EXEC;;1842\n");
goto case_90;
      }
      printf("\nSTMT_EXEC;;1844\n");
goto switch_default;
    case_98:
      {
printf("\nSTMT_EXEC;;1846\n");
overflow = bkm_scale___0(&tmp, 512);
}

      printf("\nSTMT_EXEC;;1847\n");
goto switch_break___0;
    case_66___0:
      {
printf("\nSTMT_EXEC;;1849\n");
overflow = bkm_scale___0(&tmp, 1024);
}

      printf("\nSTMT_EXEC;;1850\n");
goto switch_break___0;
    case_99:
      {
printf("\nSTMT_EXEC;;1852\n");
overflow = (strtol_error)0;
}

      printf("\nSTMT_EXEC;;1853\n");
goto switch_break___0;
    case_69:
      {
printf("\nSTMT_EXEC;;1855\n");
overflow = bkm_scale_by_power___0(&tmp, base, 6);
}

      printf("\nSTMT_EXEC;;1856\n");
goto switch_break___0;
    case_71:
      {
printf("\nSTMT_EXEC;;1858\n");
overflow = bkm_scale_by_power___0(&tmp, base, 3);
}

      printf("\nSTMT_EXEC;;1859\n");
goto switch_break___0;
    case_107:
      {
printf("\nSTMT_EXEC;;1861\n");
overflow = bkm_scale_by_power___0(&tmp, base, 1);
}

      printf("\nSTMT_EXEC;;1862\n");
goto switch_break___0;
    case_77:
      {
printf("\nSTMT_EXEC;;1864\n");
overflow = bkm_scale_by_power___0(&tmp, base, 2);
}

      printf("\nSTMT_EXEC;;1865\n");
goto switch_break___0;
    case_80:
      {
printf("\nSTMT_EXEC;;1867\n");
overflow = bkm_scale_by_power___0(&tmp, base, 5);
}

      printf("\nSTMT_EXEC;;1868\n");
goto switch_break___0;
    case_84:
      {
printf("\nSTMT_EXEC;;1870\n");
overflow = bkm_scale_by_power___0(&tmp, base, 4);
}

      printf("\nSTMT_EXEC;;1871\n");
goto switch_break___0;
    case_119:
      {
printf("\nSTMT_EXEC;;1873\n");
overflow = bkm_scale___0(&tmp, 2);
}

      printf("\nSTMT_EXEC;;1874\n");
goto switch_break___0;
    case_89:
      {
printf("\nSTMT_EXEC;;1876\n");
overflow = bkm_scale_by_power___0(&tmp, base, 8);
}

      printf("\nSTMT_EXEC;;1877\n");
goto switch_break___0;
    case_90:
      {
printf("\nSTMT_EXEC;;1879\n");
overflow = bkm_scale_by_power___0(&tmp, base, 7);
}

      printf("\nSTMT_EXEC;;1880\n");
goto switch_break___0;
    switch_default:
      {
printf("\nSTMT_EXEC;;1882\n");
*val = tmp;
}

      printf("\nSTMT_EXEC;;1883\n");
printf("\nFUNC_RETURN;;\n");
return ((strtol_error)((unsigned int)err | 2U));
    switch_break___0:
      {
printf("\nSTMT_EXEC;;1885\n");
err = (strtol_error)((unsigned int)err | (unsigned int)overflow);
}

      printf("\nSTMT_EXEC;;1886\n");
*p += suffixes;
      printf("\nSTMT_EXEC;;1887\n");
if (*(*p))
      {
        printf("\nSTMT_EXEC;;1889\n");
err = (strtol_error)((unsigned int)err | 2U);
      }
    }
    printf("\nSTMT_EXEC;;1892\n");
*val = tmp;
    printf("\nSTMT_EXEC;;1893\n");
printf("\nFUNC_RETURN;;\n");
return (err);
  }
printf("\nFUNC_RETURN;;\n");
}
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
    printf("\nSTMT_EXEC;;1907\n");
if ((unsigned int)err == 4U)
    {
      printf("\nSTMT_EXEC;;1909\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;1911\n");
if ((unsigned int)err == 2U)
    {
      printf("\nSTMT_EXEC;;1913\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;1915\n");
if ((unsigned int)err == 3U)
    {
      printf("\nSTMT_EXEC;;1917\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;1919\n");
if ((unsigned int)err == 1U)
    {
      printf("\nSTMT_EXEC;;1921\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;1923\n");
goto switch_default;
  switch_default:
    {
printf("\nSTMT_EXEC;;1925\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

}

  case_4:
    {
printf("\nSTMT_EXEC;;1927\n");
msgid = "invalid %s%s argument \'%s\'";
}

    printf("\nSTMT_EXEC;;1928\n");
goto switch_break;
  case_2:
    {
printf("\nSTMT_EXEC;;1930\n");
msgid = "invalid suffix in %s%s argument \'%s\'";
}

    printf("\nSTMT_EXEC;;1931\n");
goto switch_break;
  case_1:
    {
printf("\nSTMT_EXEC;;1933\n");
msgid = "%s%s argument \'%s\' too large";
}

    printf("\nSTMT_EXEC;;1934\n");
goto switch_break;
  switch_break:;
    printf("\nSTMT_EXEC;;1936\n");
if (opt_idx < 0)
    {
      printf("\nSTMT_EXEC;;1938\n");
hyphens -= opt_idx;
      printf("\nSTMT_EXEC;;1939\n");
option_buffer[0] = c;
      printf("\nSTMT_EXEC;;1940\n");
option_buffer[1] = (char)'\000';
      printf("\nSTMT_EXEC;;1941\n");
option = (char const *)(option_buffer);
    }
    else
    {
      printf("\nSTMT_EXEC;;1945\n");
option = (char const *)(long_options___2 + opt_idx)->name;
    }
    printf("\nSTMT_EXEC;;1947\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext(msgid);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1948\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(exit_status, 0, (char const *)tmp, hyphens, option, arg);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1949\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__noreturn__)) void xstrtol_fatal(enum strtol_error err, int opt_idx, char c, struct option const *long_options___2, char const *arg);
void xstrtol_fatal(enum strtol_error err, int opt_idx, char c, struct option const *long_options___2, char const *arg)
{
  printf("\nFUNC_CALL;xstrtol_fatal(enum strtol_error,int,char,const struct option *,const char *);\n");
{
    printf("\nSTMT_EXEC;;1956\n");
xstrtol_error(err, opt_idx, c, long_options___2, arg, (int)exit_failure);
    printf("\nSTMT_EXEC;;1957\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) ferror)(FILE *__stream);
int xnanosleep(double seconds);
int(__attribute__((__nonnull__(1))) rpl_nanosleep)(struct timespec const *requested_delay, struct timespec *remaining_delay);
int xnanosleep(double seconds)
{
  printf("\nFUNC_CALL;xnanosleep(double);\n");
printf("\nSTMT_EXEC;;1965\n");
struct timespec ts_sleep;
  printf("\nSTMT_EXEC;;1966\n");
struct timespec tmp;
  printf("\nSTMT_EXEC;;1967\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;1968\n");
int tmp___1;
  printf("\nSTMT_EXEC;;1969\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;1970\n");
int *tmp___3;
  {
    printf("\nSTMT_EXEC;;1972\n");
tmp = dtotimespec(seconds);
    printf("\nSTMT_EXEC;;1973\n");
ts_sleep = tmp;
    printf("\nSTMT_EXEC;;1974\n");
while (1)
    {
      printf("\nSTMT_EXEC;;1976\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1977\n");
*tmp___0 = 0;
      printf("\nSTMT_EXEC;;1978\n");
tmp___1 = rpl_nanosleep((struct timespec const *)(&ts_sleep), (struct timespec *)((void *)0));
      printf("\nSTMT_EXEC;;1979\n");
if (tmp___1 == 0)
      {
        printf("\nSTMT_EXEC;;1981\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1983\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1984\n");
if (*tmp___2 != 4)
      {
        printf("\nSTMT_EXEC;;1986\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;1987\n");
if (*tmp___3 != 0)
        {
          printf("\nSTMT_EXEC;;1989\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;1994\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int memcoll0(char const *s1, size_t s1size, char const *s2, size_t s2size);
char *quotearg_n_style_mem(int n, enum quoting_style s, char const *arg, size_t argsize);
int xmemcoll0(char const *s1, size_t s1size, char const *s2, size_t s2size);
static void collate_error(int collation_errno, char const *s1, size_t s1len, char const *s2, size_t s2len)
{
  printf("\nFUNC_CALL;collate_error(int,const char *,size_t,const char *,size_t);\n");
printf("\nSTMT_EXEC;;2002\n");
char *tmp;
  printf("\nSTMT_EXEC;;2003\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;2004\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;2005\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;2006\n");
char *tmp___3;
  {
    printf("\nSTMT_EXEC;;2008\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("string comparison failed");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2009\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, collation_errno, (char const *)tmp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2010\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("Set LC_ALL=\'C\' to work around the problem.");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2011\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2012\n");
tmp___1 = quotearg_n_style_mem(1, (enum quoting_style)6, s2, s2len);
    printf("\nSTMT_EXEC;;2013\n");
tmp___2 = quotearg_n_style_mem(0, (enum quoting_style)6, s1, s1len);
    printf("\nSTMT_EXEC;;2014\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext("The strings compared were %s and %s.");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2015\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error((int)exit_failure, 0, (char const *)tmp___3, tmp___2, tmp___1);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2016\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int xmemcoll0(char const *s1, size_t s1size, char const *s2, size_t s2size)
{
  printf("\nFUNC_CALL;xmemcoll0(const char *,size_t,const char *,size_t);\n");
printf("\nSTMT_EXEC;;2021\n");
int diff;
  printf("\nSTMT_EXEC;;2022\n");
int tmp;
  printf("\nSTMT_EXEC;;2023\n");
int collation_errno;
  printf("\nSTMT_EXEC;;2024\n");
int *tmp___0;
  {
    printf("\nSTMT_EXEC;;2026\n");
tmp = memcoll0(s1, s1size, s2, s2size);
    printf("\nSTMT_EXEC;;2027\n");
diff = tmp;
    printf("\nSTMT_EXEC;;2028\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2029\n");
collation_errno = *tmp___0;
    printf("\nSTMT_EXEC;;2030\n");
if (collation_errno)
    {
      printf("\nSTMT_EXEC;;2032\n");
collate_error(collation_errno, s1, s1size - 1UL, s2, s2size - 1UL);
    }
    printf("\nSTMT_EXEC;;2034\n");
printf("\nFUNC_RETURN;;\n");
return (diff);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
__inline static void *x2nrealloc(void *p, size_t *pn, size_t s)
{
  printf("\nFUNC_CALL;x2nrealloc(void *,size_t *,size_t);\n");
printf("\nSTMT_EXEC;;2041\n");
size_t n;
  printf("\nSTMT_EXEC;;2042\n");
void *tmp;
  {
    printf("\nSTMT_EXEC;;2044\n");
n = *pn;
    printf("\nSTMT_EXEC;;2045\n");
if (!p)
    {
      printf("\nSTMT_EXEC;;2047\n");
if (!n)
      {
        printf("\nSTMT_EXEC;;2049\n");
n = 128UL / s;
        printf("\nSTMT_EXEC;;2050\n");
n += (size_t)(!n);
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;2055\n");
if (0xaaaaaaaaaaaaaaaaUL / s <= n)
      {
        printf("\nSTMT_EXEC;;2057\n");
xalloc_die();
      }
      printf("\nSTMT_EXEC;;2059\n");
n += (n + 1UL) / 2UL;
    }
    printf("\nSTMT_EXEC;;2061\n");
*pn = n;
    printf("\nSTMT_EXEC;;2062\n");
tmp = xrealloc(p, n * s);
    printf("\nSTMT_EXEC;;2063\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
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
      printf("\nSTMT_EXEC;;2078\n");
if (n != 0UL)
      {
        printf("\nSTMT_EXEC;;2080\n");
xalloc_die();
      }
    }
    printf("\nSTMT_EXEC;;2083\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xrealloc(void *p, size_t n)
{
  printf("\nFUNC_CALL;xrealloc(void *,size_t);\n");
{
    printf("\nSTMT_EXEC;;2090\n");
if (!n)
    {
      printf("\nSTMT_EXEC;;2092\n");
if (p)
      {
        printf("\nSTMT_EXEC;;2094\n");
printf("\nFUNC_CALL;free(void *);\n");
free(p);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;2095\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
      }
    }
    printf("\nSTMT_EXEC;;2098\n");
printf("\nFUNC_CALL;realloc(void *,size_t);\n");
p = realloc(p, n);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2099\n");
if (!p)
    {
      printf("\nSTMT_EXEC;;2101\n");
if (n)
      {
        printf("\nSTMT_EXEC;;2103\n");
xalloc_die();
      }
    }
    printf("\nSTMT_EXEC;;2106\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xcalloc(size_t n, size_t s)
{
  printf("\nFUNC_CALL;xcalloc(size_t,size_t);\n");
printf("\nSTMT_EXEC;;2112\n");
void *p;
  {
    printf("\nSTMT_EXEC;;2114\n");
printf("\nFUNC_CALL;calloc(size_t,size_t);\n");
p = calloc(n, s);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2115\n");
if (!p)
    {
      printf("\nSTMT_EXEC;;2117\n");
xalloc_die();
    }
    printf("\nSTMT_EXEC;;2119\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
void *xmemdup(void const *p, size_t s)
{
  printf("\nFUNC_CALL;xmemdup(const void *,size_t);\n");
printf("\nSTMT_EXEC;;2125\n");
void *tmp;
  printf("\nSTMT_EXEC;;2126\n");
void *tmp___0;
  {
    printf("\nSTMT_EXEC;;2128\n");
tmp = xmalloc(s);
    printf("\nSTMT_EXEC;;2129\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
tmp___0 = memcpy(tmp, p, s);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2130\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
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

    printf("\nSTMT_EXEC;;2140\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void));
extern __pid_t waitpid(__pid_t __pid, int *__stat_loc, int __options);
extern int printf(char const *__restrict __format, ...);
char const version_etc_copyright[47];
void version_etc_arn(FILE *stream, char const *command_name, char const *package, char const *version, char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package, char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name, char const *package, char const *version, char const *const *authors, size_t n_authors)
{
  printf("\nFUNC_CALL;version_etc_arn(FILE *,const char *,const char *,const char *,const char *const *,size_t);\n");
printf("\nSTMT_EXEC;;2153\n");
char *tmp;
  printf("\nSTMT_EXEC;;2154\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;2155\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;2156\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;2157\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;2158\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;2159\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;2160\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;2161\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;2162\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;2163\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;2164\n");
char *tmp___10;
  {
    printf("\nSTMT_EXEC;;2166\n");
if (command_name)
    {
      printf("\nSTMT_EXEC;;2168\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, "%s (%s) %s\n", command_name, package, version);printf("\nFUNC_RETURN;;\n");

    }
    else
    {
      printf("\nSTMT_EXEC;;2172\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, "%s %s\n", package, version);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;2174\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("(C)");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2175\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, version_etc_copyright, tmp, 2012);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2176\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("\nLicense GPLv3+: GNU GPL version 3 or later "
                      "<http://gnu.org/licenses/gpl.html>.\nThis is free software: "
                      "you are free to change and redistribute it.\nThere is NO "
                      "WARRANTY, to the extent permitted by law.\n\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2180\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___0, stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2181\n");
if (n_authors == 0UL)
    {
      printf("\nSTMT_EXEC;;2183\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;2185\n");
if (n_authors == 1UL)
    {
      printf("\nSTMT_EXEC;;2187\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;2189\n");
if (n_authors == 2UL)
    {
      printf("\nSTMT_EXEC;;2191\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;2193\n");
if (n_authors == 3UL)
    {
      printf("\nSTMT_EXEC;;2195\n");
goto case_3;
    }
    printf("\nSTMT_EXEC;;2197\n");
if (n_authors == 4UL)
    {
      printf("\nSTMT_EXEC;;2199\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;2201\n");
if (n_authors == 5UL)
    {
      printf("\nSTMT_EXEC;;2203\n");
goto case_5;
    }
    printf("\nSTMT_EXEC;;2205\n");
if (n_authors == 6UL)
    {
      printf("\nSTMT_EXEC;;2207\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;2209\n");
if (n_authors == 7UL)
    {
      printf("\nSTMT_EXEC;;2211\n");
goto case_7;
    }
    printf("\nSTMT_EXEC;;2213\n");
if (n_authors == 8UL)
    {
      printf("\nSTMT_EXEC;;2215\n");
goto case_8;
    }
    printf("\nSTMT_EXEC;;2217\n");
if (n_authors == 9UL)
    {
      printf("\nSTMT_EXEC;;2219\n");
goto case_9;
    }
    printf("\nSTMT_EXEC;;2221\n");
goto switch_default;
  case_0:
    {
printf("\nSTMT_EXEC;;2223\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

}

  case_1:
    {
printf("\nSTMT_EXEC;;2225\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("Written by %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2226\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___1, *(authors + 0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2227\n");
goto switch_break;
  case_2:
    {
printf("\nSTMT_EXEC;;2229\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("Written by %s and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2230\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___2, *(authors + 0), *(authors + 1));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2231\n");
goto switch_break;
  case_3:
    {
printf("\nSTMT_EXEC;;2233\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext("Written by %s, %s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2234\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___3, *(authors + 0), *(authors + 1), *(authors + 2));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2235\n");
goto switch_break;
  case_4:
    {
printf("\nSTMT_EXEC;;2237\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2238\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___4, *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2239\n");
goto switch_break;
  case_5:
    {
printf("\nSTMT_EXEC;;2241\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2242\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___5, *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2243\n");
goto switch_break;
  case_6:
    {
printf("\nSTMT_EXEC;;2245\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2246\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___6, *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2247\n");
goto switch_break;
  case_7:
    {
printf("\nSTMT_EXEC;;2249\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2250\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___7, *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5), *(authors + 6));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2251\n");
goto switch_break;
  case_8:
    {
printf("\nSTMT_EXEC;;2253\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2254\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___8, *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5), *(authors + 6), *(authors + 7));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2255\n");
goto switch_break;
  case_9:
    {
printf("\nSTMT_EXEC;;2257\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2258\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___9, *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2259\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;2261\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2262\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___10, *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2263\n");
goto switch_break;
  switch_break:;
    printf("\nSTMT_EXEC;;2265\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void version_etc_va(FILE *stream, char const *command_name, char const *package, char const *version, va_list authors)
{
  printf("\nFUNC_CALL;version_etc_va(FILE *,const char *,const char *,const char *,struct __va_list_tag *);\n");
printf("\nSTMT_EXEC;;2270\n");
size_t n_authors;
  printf("\nSTMT_EXEC;;2271\n");
char const *authtab[10];
  printf("\nSTMT_EXEC;;2272\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;2274\n");
n_authors = (size_t)0;
    printf("\nSTMT_EXEC;;2275\n");
while (1)
    {
      printf("\nSTMT_EXEC;;2277\n");
if (n_authors < 10UL)
      {
        printf("\nSTMT_EXEC;;2279\n");
tmp = __builtin_va_arg(authors, char const *);
        printf("\nSTMT_EXEC;;2280\n");
authtab[n_authors] = tmp;
        printf("\nSTMT_EXEC;;2281\n");
if (!((unsigned long)tmp != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;2283\n");
goto while_break;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;2288\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;2290\n");
n_authors++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;2293\n");
version_etc_arn(stream, command_name, package, version, (char const *const *)(authtab), n_authors);
}

    printf("\nSTMT_EXEC;;2294\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...)
{
  printf("\nFUNC_CALL;version_etc(FILE *,const char *,const char *,const char *);\n");
printf("\nSTMT_EXEC;;2300\n");
va_list authors;
  {
    printf("\nSTMT_EXEC;;2302\n");
printf("\nFUNC_CALL;__builtin_va_start(struct __va_list_tag *);\n");
__builtin_va_start(authors, version);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2303\n");
version_etc_va(stream, command_name, package, version, authors);
    printf("\nSTMT_EXEC;;2304\n");
printf("\nFUNC_CALL;__builtin_va_end(struct __va_list_tag *);\n");
__builtin_va_end(authors);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2305\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
char const version_etc_copyright[47] = {(char const)'C', (char const)'o', (char const)'p', (char const)'y', (char const)'r', (char const)'i', (char const)'g', (char const)'h', (char const)'t', (char const)' ', (char const)'%', (char const)'s', (char const)' ', (char const)'%', (char const)'d', (char const)' ', (char const)'F', (char const)'r', (char const)'e', (char const)'e', (char const)' ', (char const)'S', (char const)'o', (char const)'f', (char const)'t', (char const)'w', (char const)'a', (char const)'r', (char const)'e', (char const)' ', (char const)'F', (char const)'o', (char const)'u', (char const)'n', (char const)'d', (char const)'a', (char const)'t', (char const)'i', (char const)'o', (char const)'n', (char const)',', (char const)' ', (char const)'I', (char const)'n', (char const)'c', (char const)'.', (char const)'\000'};
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) nl_langinfo)(nl_item __item);
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i, char *buf___1);
char const *locale_charset(void);
#pragma GCC diagnostic ignored "-Wtype-limits"
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i, char *buf___1)
{
  printf("\nFUNC_CALL;umaxtostr(uintmax_t,char *);\n");
printf("\nSTMT_EXEC;;2315\n");
char *p;
  {
    printf("\nSTMT_EXEC;;2317\n");
p = buf___1 + ((sizeof(uintmax_t) * 8UL) * 146UL + 484UL) / 485UL;
    printf("\nSTMT_EXEC;;2318\n");
*p = (char)0;
    printf("\nSTMT_EXEC;;2319\n");
if (i < 0UL)
    {
      printf("\nSTMT_EXEC;;2321\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2323\n");
p--;
        printf("\nSTMT_EXEC;;2324\n");
*p = (char)(48UL - i % 10UL);
        printf("\nSTMT_EXEC;;2325\n");
i /= 10UL;
        printf("\nSTMT_EXEC;;2326\n");
if (!(i != 0UL))
        {
          printf("\nSTMT_EXEC;;2328\n");
goto while_break;
        }
      }
    while_break:
      {
printf("\nSTMT_EXEC;;2332\n");
p--;
}

      printf("\nSTMT_EXEC;;2333\n");
*p = (char)'-';
    }
    else
    {
      printf("\nSTMT_EXEC;;2337\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2339\n");
p--;
        printf("\nSTMT_EXEC;;2340\n");
*p = (char)(48UL + i % 10UL);
        printf("\nSTMT_EXEC;;2341\n");
i /= 10UL;
        printf("\nSTMT_EXEC;;2342\n");
if (!(i != 0UL))
        {
          printf("\nSTMT_EXEC;;2344\n");
goto while_break___0;
        }
      }
    while_break___0:;
    }
    printf("\nSTMT_EXEC;;2349\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic ignored "-Wtype-limits"
char *(__attribute__((__warn_unused_result__)) uinttostr)(unsigned int i, char *buf___1);
char *(__attribute__((__warn_unused_result__)) uinttostr)(unsigned int i, char *buf___1)
{
  printf("\nFUNC_CALL;uinttostr(unsigned int,char *);\n");
printf("\nSTMT_EXEC;;2356\n");
char *p;
  {
    printf("\nSTMT_EXEC;;2358\n");
p = buf___1 + ((sizeof(unsigned int) * 8UL) * 146UL + 484UL) / 485UL;
    printf("\nSTMT_EXEC;;2359\n");
*p = (char)0;
    printf("\nSTMT_EXEC;;2360\n");
if (i < 0U)
    {
      printf("\nSTMT_EXEC;;2362\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2364\n");
p--;
        printf("\nSTMT_EXEC;;2365\n");
*p = (char)(48U - i % 10U);
        printf("\nSTMT_EXEC;;2366\n");
i /= 10U;
        printf("\nSTMT_EXEC;;2367\n");
if (!(i != 0U))
        {
          printf("\nSTMT_EXEC;;2369\n");
goto while_break;
        }
      }
    while_break:
      {
printf("\nSTMT_EXEC;;2373\n");
p--;
}

      printf("\nSTMT_EXEC;;2374\n");
*p = (char)'-';
    }
    else
    {
      printf("\nSTMT_EXEC;;2378\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2380\n");
p--;
        printf("\nSTMT_EXEC;;2381\n");
*p = (char)(48U + i % 10U);
        printf("\nSTMT_EXEC;;2382\n");
i /= 10U;
        printf("\nSTMT_EXEC;;2383\n");
if (!(i != 0U))
        {
          printf("\nSTMT_EXEC;;2385\n");
goto while_break___0;
        }
      }
    while_break___0:;
    }
    printf("\nSTMT_EXEC;;2390\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) mbsinit)(mbstate_t const *__ps) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s, size_t __n, mbstate_t *__restrict __p);
unsigned int const is_basic_table[8];
__inline static _Bool is_basic(char c)
{
  printf("\nFUNC_CALL;is_basic(char);\n");
{
    printf("\nSTMT_EXEC;;2400\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)((is_basic_table[(int)((unsigned char)c) >> 5] >> ((int)((unsigned char)c) & 31)) & 1U));
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
int __attribute__((__pure__)) strnumcmp(char const *a, char const *b, int decimal_point___0, int thousands_sep___0);
__inline static int __attribute__((__pure__)) fraccompare(char const *a, char const *b, char decimal_point___0)
{
  printf("\nFUNC_CALL;fraccompare(const char *,const char *,char);\n");
printf("\nSTMT_EXEC;;2413\n");
char const *tmp;
  printf("\nSTMT_EXEC;;2414\n");
char const *tmp___0;
  {
    printf("\nSTMT_EXEC;;2416\n");
if ((int const) * a == (int const)decimal_point___0)
    {
      printf("\nSTMT_EXEC;;2418\n");
if ((int const) * b == (int const)decimal_point___0)
      {
        printf("\nSTMT_EXEC;;2420\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2422\n");
a++;
          printf("\nSTMT_EXEC;;2423\n");
b++;
          printf("\nSTMT_EXEC;;2424\n");
if (!((int const) * a == (int const) * b))
          {
            printf("\nSTMT_EXEC;;2426\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;2428\n");
if (!((unsigned int)*a - 48U <= 9U))
          {
            printf("\nSTMT_EXEC;;2430\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))0);
          }
        }
      while_break:;
        printf("\nSTMT_EXEC;;2434\n");
if ((unsigned int)*a - 48U <= 9U)
        {
          printf("\nSTMT_EXEC;;2436\n");
if ((unsigned int)*b - 48U <= 9U)
          {
            printf("\nSTMT_EXEC;;2438\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))((int const) * a - (int const) * b));
          }
        }
        printf("\nSTMT_EXEC;;2441\n");
if ((unsigned int)*a - 48U <= 9U)
        {
          printf("\nSTMT_EXEC;;2443\n");
goto a_trailing_nonzero;
        }
        printf("\nSTMT_EXEC;;2445\n");
if ((unsigned int)*b - 48U <= 9U)
        {
          printf("\nSTMT_EXEC;;2447\n");
goto b_trailing_nonzero;
        }
        printf("\nSTMT_EXEC;;2449\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))0);
      }
      else
      {
        printf("\nSTMT_EXEC;;2453\n");
goto _L;
      }
    }
    else
    {
    _L:
      {
printf("\nSTMT_EXEC;;2459\n");
tmp___0 = a;
}

      printf("\nSTMT_EXEC;;2460\n");
a++;
      printf("\nSTMT_EXEC;;2461\n");
if ((int const) * tmp___0 == (int const)decimal_point___0)
      {
      a_trailing_nonzero:
        {
printf("\nSTMT_EXEC;;2464\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2466\n");
if (!((int const) * a == 48))
          {
            printf("\nSTMT_EXEC;;2468\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;2470\n");
a++;
        }
}

      while_break___0:;
        printf("\nSTMT_EXEC;;2473\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))((unsigned int)*a - 48U <= 9U));
      }
      else
      {
        printf("\nSTMT_EXEC;;2477\n");
tmp = b;
        printf("\nSTMT_EXEC;;2478\n");
b++;
        printf("\nSTMT_EXEC;;2479\n");
if ((int const) * tmp == (int const)decimal_point___0)
        {
        b_trailing_nonzero:
          {
printf("\nSTMT_EXEC;;2482\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2484\n");
if (!((int const) * b == 48))
            {
              printf("\nSTMT_EXEC;;2486\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;2488\n");
b++;
          }
}

        while_break___1:;
          printf("\nSTMT_EXEC;;2491\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))(-((unsigned int)*b - 48U <= 9U)));
        }
      }
    }
    printf("\nSTMT_EXEC;;2495\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))0);
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static int __attribute__((__pure__)) numcompare(char const *a, char const *b, int decimal_point___0, int thousands_sep___0)
{
  printf("\nFUNC_CALL;numcompare(const char *,const char *,int,int);\n");
printf("\nSTMT_EXEC;;2500\n");
unsigned char tmpa;
  printf("\nSTMT_EXEC;;2501\n");
unsigned char tmpb;
  printf("\nSTMT_EXEC;;2502\n");
int tmp;
  printf("\nSTMT_EXEC;;2503\n");
size_t log_a;
  printf("\nSTMT_EXEC;;2504\n");
size_t log_b;
  printf("\nSTMT_EXEC;;2505\n");
int __attribute__((__pure__)) tmp___0;
  printf("\nSTMT_EXEC;;2506\n");
int tmp___1;
  printf("\nSTMT_EXEC;;2507\n");
int __attribute__((__pure__)) tmp___2;
  printf("\nSTMT_EXEC;;2508\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;2510\n");
tmpa = (unsigned char)*a;
    printf("\nSTMT_EXEC;;2511\n");
tmpb = (unsigned char)*b;
    printf("\nSTMT_EXEC;;2512\n");
if ((int)tmpa == 45)
    {
      printf("\nSTMT_EXEC;;2514\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2516\n");
a++;
        printf("\nSTMT_EXEC;;2517\n");
tmpa = (unsigned char)*a;
        printf("\nSTMT_EXEC;;2518\n");
if (!((int)tmpa == 48))
        {
          printf("\nSTMT_EXEC;;2520\n");
if (!((int)tmpa == thousands_sep___0))
          {
            printf("\nSTMT_EXEC;;2522\n");
goto while_break;
          }
        }
      }
    while_break:;
      printf("\nSTMT_EXEC;;2527\n");
if ((int)tmpb != 45)
      {
        printf("\nSTMT_EXEC;;2529\n");
if ((int)tmpa == decimal_point___0)
        {
          printf("\nSTMT_EXEC;;2531\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2533\n");
a++;
            printf("\nSTMT_EXEC;;2534\n");
tmpa = (unsigned char)*a;
            printf("\nSTMT_EXEC;;2535\n");
if (!((int)tmpa == 48))
            {
              printf("\nSTMT_EXEC;;2537\n");
goto while_break___0;
            }
          }
        while_break___0:;
        }
        printf("\nSTMT_EXEC;;2542\n");
if ((unsigned int)tmpa - 48U <= 9U)
        {
          printf("\nSTMT_EXEC;;2544\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__))) - 1);
        }
        printf("\nSTMT_EXEC;;2546\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2548\n");
if (!((int)tmpb == 48))
          {
            printf("\nSTMT_EXEC;;2550\n");
if (!((int)tmpb == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2552\n");
goto while_break___1;
            }
          }
          printf("\nSTMT_EXEC;;2555\n");
b++;
          printf("\nSTMT_EXEC;;2556\n");
tmpb = (unsigned char)*b;
        }
      while_break___1:;
        printf("\nSTMT_EXEC;;2559\n");
if ((int)tmpb == decimal_point___0)
        {
          printf("\nSTMT_EXEC;;2561\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2563\n");
b++;
            printf("\nSTMT_EXEC;;2564\n");
tmpb = (unsigned char)*b;
            printf("\nSTMT_EXEC;;2565\n");
if (!((int)tmpb == 48))
            {
              printf("\nSTMT_EXEC;;2567\n");
goto while_break___2;
            }
          }
        while_break___2:;
        }
        printf("\nSTMT_EXEC;;2572\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))(-((unsigned int)tmpb - 48U <= 9U)));
      }
      printf("\nSTMT_EXEC;;2574\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2576\n");
b++;
        printf("\nSTMT_EXEC;;2577\n");
tmpb = (unsigned char)*b;
        printf("\nSTMT_EXEC;;2578\n");
if (!((int)tmpb == 48))
        {
          printf("\nSTMT_EXEC;;2580\n");
if (!((int)tmpb == thousands_sep___0))
          {
            printf("\nSTMT_EXEC;;2582\n");
goto while_break___3;
          }
        }
      }
    while_break___3:;
      printf("\nSTMT_EXEC;;2587\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2589\n");
if ((int)tmpa == (int)tmpb)
        {
          printf("\nSTMT_EXEC;;2591\n");
if (!((unsigned int)tmpa - 48U <= 9U))
          {
            printf("\nSTMT_EXEC;;2593\n");
goto while_break___4;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;2598\n");
goto while_break___4;
        }
        printf("\nSTMT_EXEC;;2600\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2602\n");
a++;
          printf("\nSTMT_EXEC;;2603\n");
tmpa = (unsigned char)*a;
          printf("\nSTMT_EXEC;;2604\n");
if (!((int)tmpa == thousands_sep___0))
          {
            printf("\nSTMT_EXEC;;2606\n");
goto while_break___5;
          }
        }
      while_break___5:;
        printf("\nSTMT_EXEC;;2610\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2612\n");
b++;
          printf("\nSTMT_EXEC;;2613\n");
tmpb = (unsigned char)*b;
          printf("\nSTMT_EXEC;;2614\n");
if (!((int)tmpb == thousands_sep___0))
          {
            printf("\nSTMT_EXEC;;2616\n");
goto while_break___6;
          }
        }
      while_break___6:;
      }
    while_break___4:;
      printf("\nSTMT_EXEC;;2622\n");
if ((int)tmpa == decimal_point___0)
      {
        printf("\nSTMT_EXEC;;2624\n");
if (!((unsigned int)tmpb - 48U <= 9U))
        {
          printf("\nSTMT_EXEC;;2626\n");
tmp___0 = fraccompare(b, a, (char)decimal_point___0);
          printf("\nSTMT_EXEC;;2627\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
        }
        else
        {
          printf("\nSTMT_EXEC;;2631\n");
goto _L;
        }
      }
      else
      {
      _L:
        {
printf("\nSTMT_EXEC;;2637\n");
if ((int)tmpb == decimal_point___0)
        {
          printf("\nSTMT_EXEC;;2639\n");
if (!((unsigned int)tmpa - 48U <= 9U))
          {
            printf("\nSTMT_EXEC;;2641\n");
tmp___0 = fraccompare(b, a, (char)decimal_point___0);
            printf("\nSTMT_EXEC;;2642\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
          }
        }
}

      }
      printf("\nSTMT_EXEC;;2646\n");
tmp = (int)tmpb - (int)tmpa;
      printf("\nSTMT_EXEC;;2647\n");
log_a = (size_t)0;
      printf("\nSTMT_EXEC;;2648\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2650\n");
if (!((unsigned int)tmpa - 48U <= 9U))
        {
          printf("\nSTMT_EXEC;;2652\n");
goto while_break___7;
        }
        printf("\nSTMT_EXEC;;2654\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2656\n");
a++;
          printf("\nSTMT_EXEC;;2657\n");
tmpa = (unsigned char)*a;
          printf("\nSTMT_EXEC;;2658\n");
if (!((int)tmpa == thousands_sep___0))
          {
            printf("\nSTMT_EXEC;;2660\n");
goto while_break___8;
          }
        }
      while_break___8:
        {
printf("\nSTMT_EXEC;;2664\n");
log_a++;
}

      }
    while_break___7:
      {
printf("\nSTMT_EXEC;;2667\n");
log_b = (size_t)0;
}

      printf("\nSTMT_EXEC;;2668\n");
while (1)
      {
        printf("\nSTMT_EXEC;;2670\n");
if (!((unsigned int)tmpb - 48U <= 9U))
        {
          printf("\nSTMT_EXEC;;2672\n");
goto while_break___9;
        }
        printf("\nSTMT_EXEC;;2674\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2676\n");
b++;
          printf("\nSTMT_EXEC;;2677\n");
tmpb = (unsigned char)*b;
          printf("\nSTMT_EXEC;;2678\n");
if (!((int)tmpb == thousands_sep___0))
          {
            printf("\nSTMT_EXEC;;2680\n");
goto while_break___10;
          }
        }
      while_break___10:
        {
printf("\nSTMT_EXEC;;2684\n");
log_b++;
}

      }
    while_break___9:;
      printf("\nSTMT_EXEC;;2687\n");
if (log_a != log_b)
      {
        printf("\nSTMT_EXEC;;2689\n");
if (log_a < log_b)
        {
          printf("\nSTMT_EXEC;;2691\n");
tmp___1 = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;2695\n");
tmp___1 = -1;
        }
        printf("\nSTMT_EXEC;;2697\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))tmp___1);
      }
      printf("\nSTMT_EXEC;;2699\n");
if (!log_a)
      {
        printf("\nSTMT_EXEC;;2701\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))0);
      }
      printf("\nSTMT_EXEC;;2703\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))tmp);
    }
    else
    {
      printf("\nSTMT_EXEC;;2707\n");
if ((int)tmpb == 45)
      {
        printf("\nSTMT_EXEC;;2709\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2711\n");
b++;
          printf("\nSTMT_EXEC;;2712\n");
tmpb = (unsigned char)*b;
          printf("\nSTMT_EXEC;;2713\n");
if (!((int)tmpb == 48))
          {
            printf("\nSTMT_EXEC;;2715\n");
if (!((int)tmpb == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2717\n");
goto while_break___11;
            }
          }
        }
      while_break___11:;
        printf("\nSTMT_EXEC;;2722\n");
if ((int)tmpb == decimal_point___0)
        {
          printf("\nSTMT_EXEC;;2724\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2726\n");
b++;
            printf("\nSTMT_EXEC;;2727\n");
tmpb = (unsigned char)*b;
            printf("\nSTMT_EXEC;;2728\n");
if (!((int)tmpb == 48))
            {
              printf("\nSTMT_EXEC;;2730\n");
goto while_break___12;
            }
          }
        while_break___12:;
        }
        printf("\nSTMT_EXEC;;2735\n");
if ((unsigned int)tmpb - 48U <= 9U)
        {
          printf("\nSTMT_EXEC;;2737\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))1);
        }
        printf("\nSTMT_EXEC;;2739\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2741\n");
if (!((int)tmpa == 48))
          {
            printf("\nSTMT_EXEC;;2743\n");
if (!((int)tmpa == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2745\n");
goto while_break___13;
            }
          }
          printf("\nSTMT_EXEC;;2748\n");
a++;
          printf("\nSTMT_EXEC;;2749\n");
tmpa = (unsigned char)*a;
        }
      while_break___13:;
        printf("\nSTMT_EXEC;;2752\n");
if ((int)tmpa == decimal_point___0)
        {
          printf("\nSTMT_EXEC;;2754\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2756\n");
a++;
            printf("\nSTMT_EXEC;;2757\n");
tmpa = (unsigned char)*a;
            printf("\nSTMT_EXEC;;2758\n");
if (!((int)tmpa == 48))
            {
              printf("\nSTMT_EXEC;;2760\n");
goto while_break___14;
            }
          }
        while_break___14:;
        }
        printf("\nSTMT_EXEC;;2765\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))((unsigned int)tmpa - 48U <= 9U));
      }
      else
      {
        printf("\nSTMT_EXEC;;2769\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2771\n");
if (!((int)tmpa == 48))
          {
            printf("\nSTMT_EXEC;;2773\n");
if (!((int)tmpa == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2775\n");
goto while_break___15;
            }
          }
          printf("\nSTMT_EXEC;;2778\n");
a++;
          printf("\nSTMT_EXEC;;2779\n");
tmpa = (unsigned char)*a;
        }
      while_break___15:;
        printf("\nSTMT_EXEC;;2782\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2784\n");
if (!((int)tmpb == 48))
          {
            printf("\nSTMT_EXEC;;2786\n");
if (!((int)tmpb == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2788\n");
goto while_break___16;
            }
          }
          printf("\nSTMT_EXEC;;2791\n");
b++;
          printf("\nSTMT_EXEC;;2792\n");
tmpb = (unsigned char)*b;
        }
      while_break___16:;
        printf("\nSTMT_EXEC;;2795\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2797\n");
if ((int)tmpa == (int)tmpb)
          {
            printf("\nSTMT_EXEC;;2799\n");
if (!((unsigned int)tmpa - 48U <= 9U))
            {
              printf("\nSTMT_EXEC;;2801\n");
goto while_break___17;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;2806\n");
goto while_break___17;
          }
          printf("\nSTMT_EXEC;;2808\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2810\n");
a++;
            printf("\nSTMT_EXEC;;2811\n");
tmpa = (unsigned char)*a;
            printf("\nSTMT_EXEC;;2812\n");
if (!((int)tmpa == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2814\n");
goto while_break___18;
            }
          }
        while_break___18:;
          printf("\nSTMT_EXEC;;2818\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2820\n");
b++;
            printf("\nSTMT_EXEC;;2821\n");
tmpb = (unsigned char)*b;
            printf("\nSTMT_EXEC;;2822\n");
if (!((int)tmpb == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2824\n");
goto while_break___19;
            }
          }
        while_break___19:;
        }
      while_break___17:;
        printf("\nSTMT_EXEC;;2830\n");
if ((int)tmpa == decimal_point___0)
        {
          printf("\nSTMT_EXEC;;2832\n");
if (!((unsigned int)tmpb - 48U <= 9U))
          {
            printf("\nSTMT_EXEC;;2834\n");
tmp___2 = fraccompare(a, b, (char)decimal_point___0);
            printf("\nSTMT_EXEC;;2835\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___2);
          }
          else
          {
            printf("\nSTMT_EXEC;;2839\n");
goto _L___0;
          }
        }
        else
        {
        _L___0:
          {
printf("\nSTMT_EXEC;;2845\n");
if ((int)tmpb == decimal_point___0)
          {
            printf("\nSTMT_EXEC;;2847\n");
if (!((unsigned int)tmpa - 48U <= 9U))
            {
              printf("\nSTMT_EXEC;;2849\n");
tmp___2 = fraccompare(a, b, (char)decimal_point___0);
              printf("\nSTMT_EXEC;;2850\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___2);
            }
          }
}

        }
        printf("\nSTMT_EXEC;;2854\n");
tmp = (int)tmpa - (int)tmpb;
        printf("\nSTMT_EXEC;;2855\n");
log_a = (size_t)0;
        printf("\nSTMT_EXEC;;2856\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2858\n");
if (!((unsigned int)tmpa - 48U <= 9U))
          {
            printf("\nSTMT_EXEC;;2860\n");
goto while_break___20;
          }
          printf("\nSTMT_EXEC;;2862\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2864\n");
a++;
            printf("\nSTMT_EXEC;;2865\n");
tmpa = (unsigned char)*a;
            printf("\nSTMT_EXEC;;2866\n");
if (!((int)tmpa == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2868\n");
goto while_break___21;
            }
          }
        while_break___21:
          {
printf("\nSTMT_EXEC;;2872\n");
log_a++;
}

        }
      while_break___20:
        {
printf("\nSTMT_EXEC;;2875\n");
log_b = (size_t)0;
}

        printf("\nSTMT_EXEC;;2876\n");
while (1)
        {
          printf("\nSTMT_EXEC;;2878\n");
if (!((unsigned int)tmpb - 48U <= 9U))
          {
            printf("\nSTMT_EXEC;;2880\n");
goto while_break___22;
          }
          printf("\nSTMT_EXEC;;2882\n");
while (1)
          {
            printf("\nSTMT_EXEC;;2884\n");
b++;
            printf("\nSTMT_EXEC;;2885\n");
tmpb = (unsigned char)*b;
            printf("\nSTMT_EXEC;;2886\n");
if (!((int)tmpb == thousands_sep___0))
            {
              printf("\nSTMT_EXEC;;2888\n");
goto while_break___23;
            }
          }
        while_break___23:
          {
printf("\nSTMT_EXEC;;2892\n");
log_b++;
}

        }
      while_break___22:;
        printf("\nSTMT_EXEC;;2895\n");
if (log_a != log_b)
        {
          printf("\nSTMT_EXEC;;2897\n");
if (log_a < log_b)
          {
            printf("\nSTMT_EXEC;;2899\n");
tmp___3 = -1;
          }
          else
          {
            printf("\nSTMT_EXEC;;2903\n");
tmp___3 = 1;
          }
          printf("\nSTMT_EXEC;;2905\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))tmp___3);
        }
        printf("\nSTMT_EXEC;;2907\n");
if (!log_a)
        {
          printf("\nSTMT_EXEC;;2909\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))0);
        }
        printf("\nSTMT_EXEC;;2911\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))tmp);
      }
    }
  }
printf("\nFUNC_RETURN;;\n");
}
int __attribute__((__pure__)) strnumcmp(char const *a, char const *b, int decimal_point___0, int thousands_sep___0)
{
  printf("\nFUNC_CALL;strnumcmp(const char *,const char *,int,int);\n");
printf("\nSTMT_EXEC;;2918\n");
int __attribute__((__pure__)) tmp;
  {
    printf("\nSTMT_EXEC;;2920\n");
tmp = numcompare(a, b, decimal_point___0, thousands_sep___0);
    printf("\nSTMT_EXEC;;2921\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen)
{
  printf("\nFUNC_CALL;strnlen1(const char *,size_t);\n");
printf("\nSTMT_EXEC;;2928\n");
char const *end;
  printf("\nSTMT_EXEC;;2929\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;2931\n");
printf("\nFUNC_CALL;memchr(const void *,int,size_t);\n");
tmp = (char const *)memchr((void const *)string, '\000', maxlen);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2932\n");
end = tmp;
    printf("\nSTMT_EXEC;;2933\n");
if ((unsigned long)end != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;2935\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)((end - string) + 1L));
    }
    else
    {
      printf("\nSTMT_EXEC;;2939\n");
printf("\nFUNC_RETURN;;\n");
return (maxlen);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) tolower)(int __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) toupper)(int __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) sigprocmask)(int __how, sigset_t const *__restrict __set, sigset_t *__restrict __oset);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) feof_unlocked)(FILE *__stream);
__inline static void set_uint32(char *cp, uint32_t v)
{
  printf("\nFUNC_CALL;set_uint32(char *,uint32_t);\n");
{
    printf("\nSTMT_EXEC;;2951\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)cp, (void const *)(&v), sizeof(v));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2952\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) raise)(int __sig);
extern __attribute__((__nothrow__)) __pid_t fork(void);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) unlink)(char const *__name);
extern int fgetc(FILE *__stream);
extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
void readtokens0_init(struct Tokens *t);
_Bool readtokens0(FILE *in, struct Tokens *t);
void readtokens0_init(struct Tokens *t)
{
  printf("\nFUNC_CALL;readtokens0_init(struct Tokens *);\n");
{
    printf("\nSTMT_EXEC;;2967\n");
t->n_tok = (size_t)0;
    printf("\nSTMT_EXEC;;2968\n");
t->tok = (char **)((void *)0);
    printf("\nSTMT_EXEC;;2969\n");
t->tok_len = (size_t *)((void *)0);
    printf("\nSTMT_EXEC;;2970\n");
printf("\nFUNC_CALL;_obstack_begin(struct obstack *,int,int,void *(*)(long),void (*)(void *));\n");
_obstack_begin(&t->o_data, 0, 0, (void *(*)(long))(&malloc), (void (*)(void *))(&free));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2971\n");
printf("\nFUNC_CALL;_obstack_begin(struct obstack *,int,int,void *(*)(long),void (*)(void *));\n");
_obstack_begin(&t->o_tok, 0, 0, (void *(*)(long))(&malloc), (void (*)(void *))(&free));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2972\n");
printf("\nFUNC_CALL;_obstack_begin(struct obstack *,int,int,void *(*)(long),void (*)(void *));\n");
_obstack_begin(&t->o_tok_len, 0, 0, (void *(*)(long))(&malloc), (void (*)(void *))(&free));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2973\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void save_token(struct Tokens *t)
{
  printf("\nFUNC_CALL;save_token(struct Tokens *);\n");
printf("\nSTMT_EXEC;;2978\n");
size_t len;
  printf("\nSTMT_EXEC;;2979\n");
struct obstack const *__o;
  printf("\nSTMT_EXEC;;2980\n");
char const *s;
  printf("\nSTMT_EXEC;;2981\n");
struct obstack *__o1;
  printf("\nSTMT_EXEC;;2982\n");
void *__value;
  printf("\nSTMT_EXEC;;2983\n");
char *tmp;
  printf("\nSTMT_EXEC;;2984\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;2985\n");
struct obstack *__o___0;
  printf("\nSTMT_EXEC;;2986\n");
struct obstack *__o1___0;
  printf("\nSTMT_EXEC;;2987\n");
struct obstack *__o___1;
  printf("\nSTMT_EXEC;;2988\n");
int __len;
  {
    printf("\nSTMT_EXEC;;2990\n");
__o = (struct obstack const *)(&t->o_data);
    printf("\nSTMT_EXEC;;2991\n");
len = (size_t)((unsigned int)(__o->next_free - __o->object_base) - 1U);
    printf("\nSTMT_EXEC;;2992\n");
__o1 = &t->o_data;
    printf("\nSTMT_EXEC;;2993\n");
__value = (void *)__o1->object_base;
    printf("\nSTMT_EXEC;;2994\n");
if ((unsigned long)__o1->next_free == (unsigned long)__value)
    {
      printf("\nSTMT_EXEC;;2996\n");
__o1->maybe_empty_object = 1U;
    }
    printf("\nSTMT_EXEC;;2998\n");
if (sizeof(long) < sizeof(void *))
    {
      printf("\nSTMT_EXEC;;3000\n");
tmp = __o1->object_base;
    }
    else
    {
      printf("\nSTMT_EXEC;;3004\n");
tmp = (char *)0;
    }
    printf("\nSTMT_EXEC;;3006\n");
if (sizeof(long) < sizeof(void *))
    {
      printf("\nSTMT_EXEC;;3008\n");
tmp___0 = __o1->object_base;
    }
    else
    {
      printf("\nSTMT_EXEC;;3012\n");
tmp___0 = (char *)0;
    }
    printf("\nSTMT_EXEC;;3014\n");
__o1->next_free = tmp + (((__o1->next_free - tmp___0) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
    printf("\nSTMT_EXEC;;3015\n");
if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk)
    {
      printf("\nSTMT_EXEC;;3017\n");
__o1->next_free = __o1->chunk_limit;
    }
    printf("\nSTMT_EXEC;;3019\n");
__o1->object_base = __o1->next_free;
    printf("\nSTMT_EXEC;;3020\n");
s = (char const *)__value;
    printf("\nSTMT_EXEC;;3021\n");
__o___0 = &t->o_tok;
    printf("\nSTMT_EXEC;;3022\n");
if ((unsigned long)(__o___0->next_free + sizeof(void *)) > (unsigned long)__o___0->chunk_limit)
    {
      printf("\nSTMT_EXEC;;3024\n");
printf("\nFUNC_CALL;_obstack_newchunk(struct obstack *,int);\n");
_obstack_newchunk(__o___0, (int)sizeof(void *));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;3026\n");
__o1___0 = __o___0;
    printf("\nSTMT_EXEC;;3027\n");
*((void const **)__o1___0->next_free) = (void const *)s;
    printf("\nSTMT_EXEC;;3028\n");
__o1___0->next_free += sizeof(void const *);
    printf("\nSTMT_EXEC;;3029\n");
__o___1 = &t->o_tok_len;
    printf("\nSTMT_EXEC;;3030\n");
__len = (int)sizeof(len);
    printf("\nSTMT_EXEC;;3031\n");
if ((unsigned long)(__o___1->next_free + __len) > (unsigned long)__o___1->chunk_limit)
    {
      printf("\nSTMT_EXEC;;3033\n");
printf("\nFUNC_CALL;_obstack_newchunk(struct obstack *,int);\n");
_obstack_newchunk(__o___1, __len);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;3035\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)__o___1->next_free, (void const *)(&len), (size_t)__len);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;3036\n");
__o___1->next_free += __len;
    printf("\nSTMT_EXEC;;3037\n");
(t->n_tok)++;
    printf("\nSTMT_EXEC;;3038\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool readtokens0(FILE *in, struct Tokens *t)
{
  printf("\nFUNC_CALL;readtokens0(FILE *,struct Tokens *);\n");
printf("\nSTMT_EXEC;;3043\n");
int c;
  printf("\nSTMT_EXEC;;3044\n");
int tmp;
  printf("\nSTMT_EXEC;;3045\n");
size_t len;
  printf("\nSTMT_EXEC;;3046\n");
struct obstack const *__o;
  printf("\nSTMT_EXEC;;3047\n");
struct obstack *__o___0;
  printf("\nSTMT_EXEC;;3048\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;3049\n");
struct obstack *__o___1;
  printf("\nSTMT_EXEC;;3050\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;3051\n");
struct obstack *__o___2;
  printf("\nSTMT_EXEC;;3052\n");
struct obstack *__o1;
  printf("\nSTMT_EXEC;;3053\n");
struct obstack *__o1___0;
  printf("\nSTMT_EXEC;;3054\n");
void *__value;
  printf("\nSTMT_EXEC;;3055\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;3056\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;3057\n");
struct obstack *__o1___1;
  printf("\nSTMT_EXEC;;3058\n");
void *__value___0;
  printf("\nSTMT_EXEC;;3059\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;3060\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;3061\n");
int tmp___6;
  printf("\nSTMT_EXEC;;3062\n");
int tmp___7;
  {
    printf("\nSTMT_EXEC;;3064\n");
while (1)
    {
      printf("\nSTMT_EXEC;;3066\n");
printf("\nFUNC_CALL;fgetc(FILE *);\n");
tmp = fgetc(in);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3067\n");
c = tmp;
      printf("\nSTMT_EXEC;;3068\n");
if (c == -1)
      {
        printf("\nSTMT_EXEC;;3070\n");
__o = (struct obstack const *)(&t->o_data);
        printf("\nSTMT_EXEC;;3071\n");
len = (size_t)((unsigned int)(__o->next_free - __o->object_base));
        printf("\nSTMT_EXEC;;3072\n");
if (len)
        {
          printf("\nSTMT_EXEC;;3074\n");
__o___0 = &t->o_data;
          printf("\nSTMT_EXEC;;3075\n");
if ((unsigned long)(__o___0->next_free + 1) > (unsigned long)__o___0->chunk_limit)
          {
            printf("\nSTMT_EXEC;;3077\n");
printf("\nFUNC_CALL;_obstack_newchunk(struct obstack *,int);\n");
_obstack_newchunk(__o___0, 1);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;3079\n");
tmp___0 = __o___0->next_free;
          printf("\nSTMT_EXEC;;3080\n");
(__o___0->next_free)++;
          printf("\nSTMT_EXEC;;3081\n");
*tmp___0 = (char)'\000';
          printf("\nSTMT_EXEC;;3082\n");
save_token(t);
        }
        printf("\nSTMT_EXEC;;3084\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;3086\n");
__o___1 = &t->o_data;
      printf("\nSTMT_EXEC;;3087\n");
if ((unsigned long)(__o___1->next_free + 1) > (unsigned long)__o___1->chunk_limit)
      {
        printf("\nSTMT_EXEC;;3089\n");
printf("\nFUNC_CALL;_obstack_newchunk(struct obstack *,int);\n");
_obstack_newchunk(__o___1, 1);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;3091\n");
tmp___1 = __o___1->next_free;
      printf("\nSTMT_EXEC;;3092\n");
(__o___1->next_free)++;
      printf("\nSTMT_EXEC;;3093\n");
*tmp___1 = (char)c;
      printf("\nSTMT_EXEC;;3094\n");
if (c == 0)
      {
        printf("\nSTMT_EXEC;;3096\n");
save_token(t);
      }
    }
  while_break:
    {
printf("\nSTMT_EXEC;;3100\n");
__o___2 = &t->o_tok;
}

    printf("\nSTMT_EXEC;;3101\n");
if ((unsigned long)(__o___2->next_free + sizeof(void *)) > (unsigned long)__o___2->chunk_limit)
    {
      printf("\nSTMT_EXEC;;3103\n");
printf("\nFUNC_CALL;_obstack_newchunk(struct obstack *,int);\n");
_obstack_newchunk(__o___2, (int)sizeof(void *));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;3105\n");
__o1 = __o___2;
    printf("\nSTMT_EXEC;;3106\n");
*((void const **)__o1->next_free) = (void const *)((void *)0);
    printf("\nSTMT_EXEC;;3107\n");
__o1->next_free += sizeof(void const *);
    printf("\nSTMT_EXEC;;3108\n");
__o1___0 = &t->o_tok;
    printf("\nSTMT_EXEC;;3109\n");
__value = (void *)__o1___0->object_base;
    printf("\nSTMT_EXEC;;3110\n");
if ((unsigned long)__o1___0->next_free == (unsigned long)__value)
    {
      printf("\nSTMT_EXEC;;3112\n");
__o1___0->maybe_empty_object = 1U;
    }
    printf("\nSTMT_EXEC;;3114\n");
if (sizeof(long) < sizeof(void *))
    {
      printf("\nSTMT_EXEC;;3116\n");
tmp___2 = __o1___0->object_base;
    }
    else
    {
      printf("\nSTMT_EXEC;;3120\n");
tmp___2 = (char *)0;
    }
    printf("\nSTMT_EXEC;;3122\n");
if (sizeof(long) < sizeof(void *))
    {
      printf("\nSTMT_EXEC;;3124\n");
tmp___3 = __o1___0->object_base;
    }
    else
    {
      printf("\nSTMT_EXEC;;3128\n");
tmp___3 = (char *)0;
    }
    printf("\nSTMT_EXEC;;3130\n");
__o1___0->next_free = tmp___2 + (((__o1___0->next_free - tmp___3) + (long)__o1___0->alignment_mask) & (long)(~__o1___0->alignment_mask));
    printf("\nSTMT_EXEC;;3131\n");
if (__o1___0->next_free - (char *)__o1___0->chunk > __o1___0->chunk_limit - (char *)__o1___0->chunk)
    {
      printf("\nSTMT_EXEC;;3133\n");
__o1___0->next_free = __o1___0->chunk_limit;
    }
    printf("\nSTMT_EXEC;;3135\n");
__o1___0->object_base = __o1___0->next_free;
    printf("\nSTMT_EXEC;;3136\n");
t->tok = (char **)__value;
    printf("\nSTMT_EXEC;;3137\n");
__o1___1 = &t->o_tok_len;
    printf("\nSTMT_EXEC;;3138\n");
__value___0 = (void *)__o1___1->object_base;
    printf("\nSTMT_EXEC;;3139\n");
if ((unsigned long)__o1___1->next_free == (unsigned long)__value___0)
    {
      printf("\nSTMT_EXEC;;3141\n");
__o1___1->maybe_empty_object = 1U;
    }
    printf("\nSTMT_EXEC;;3143\n");
if (sizeof(long) < sizeof(void *))
    {
      printf("\nSTMT_EXEC;;3145\n");
tmp___4 = __o1___1->object_base;
    }
    else
    {
      printf("\nSTMT_EXEC;;3149\n");
tmp___4 = (char *)0;
    }
    printf("\nSTMT_EXEC;;3151\n");
if (sizeof(long) < sizeof(void *))
    {
      printf("\nSTMT_EXEC;;3153\n");
tmp___5 = __o1___1->object_base;
    }
    else
    {
      printf("\nSTMT_EXEC;;3157\n");
tmp___5 = (char *)0;
    }
    printf("\nSTMT_EXEC;;3159\n");
__o1___1->next_free = tmp___4 + (((__o1___1->next_free - tmp___5) + (long)__o1___1->alignment_mask) & (long)(~__o1___1->alignment_mask));
    printf("\nSTMT_EXEC;;3160\n");
if (__o1___1->next_free - (char *)__o1___1->chunk > __o1___1->chunk_limit - (char *)__o1___1->chunk)
    {
      printf("\nSTMT_EXEC;;3162\n");
__o1___1->next_free = __o1___1->chunk_limit;
    }
    printf("\nSTMT_EXEC;;3164\n");
__o1___1->object_base = __o1___1->next_free;
    printf("\nSTMT_EXEC;;3165\n");
t->tok_len = (size_t *)__value___0;
    printf("\nSTMT_EXEC;;3166\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___6 = ferror(in);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;3167\n");
if (tmp___6)
    {
      printf("\nSTMT_EXEC;;3169\n");
tmp___7 = 0;
    }
    else
    {
      printf("\nSTMT_EXEC;;3173\n");
tmp___7 = 1;
    }
    printf("\nSTMT_EXEC;;3175\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp___7);
  }
printf("\nFUNC_RETURN;;\n");
}
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
static void randread_error(void const *file_name___3)
{
  printf("\nFUNC_CALL;randread_error(const void *);\n");
printf("\nSTMT_EXEC;;3194\n");
char *tmp;
  printf("\nSTMT_EXEC;;3195\n");
char const *tmp___1;
  printf("\nSTMT_EXEC;;3196\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;3197\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;3198\n");
int *tmp___4;
  {
    printf("\nSTMT_EXEC;;3200\n");
if (file_name___3)
    {
      printf("\nSTMT_EXEC;;3202\n");
tmp = quotearg_colon(file_name___3);
      printf("\nSTMT_EXEC;;3203\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3204\n");
if (*tmp___2 == 0)
      {
        printf("\nSTMT_EXEC;;3206\n");
tmp___1 = "%s: end of file";
      }
      else
      {
        printf("\nSTMT_EXEC;;3210\n");
tmp___1 = "%s: read error";
      }
      printf("\nSTMT_EXEC;;3212\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext(tmp___1);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3213\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___4 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3214\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(exit_failure, *tmp___4, tmp___3, tmp);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;3216\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
static struct randread_source *simple_new(FILE *source, void const *handler_arg)
{
  printf("\nFUNC_CALL;simple_new(FILE *,const void *);\n");
printf("\nSTMT_EXEC;;3221\n");
struct randread_source *s;
  printf("\nSTMT_EXEC;;3222\n");
struct randread_source *tmp;
  {
    printf("\nSTMT_EXEC;;3224\n");
tmp = (struct randread_source *)xmalloc(sizeof(*s));
    printf("\nSTMT_EXEC;;3225\n");
s = tmp;
    printf("\nSTMT_EXEC;;3226\n");
s->source = source;
    printf("\nSTMT_EXEC;;3227\n");
s->handler = &randread_error;
    printf("\nSTMT_EXEC;;3228\n");
s->handler_arg = handler_arg;
    printf("\nSTMT_EXEC;;3229\n");
printf("\nFUNC_RETURN;;\n");
return (s);
  }
printf("\nFUNC_RETURN;;\n");
}
static void get_nonce(void *buffer, size_t bufsize___1, size_t bytes_bound)
{
  printf("\nFUNC_CALL;get_nonce(void *,size_t,size_t);\n");
printf("\nSTMT_EXEC;;3234\n");
char *buf___1;
  printf("\nSTMT_EXEC;;3235\n");
ssize_t seeded;
  printf("\nSTMT_EXEC;;3236\n");
int fd;
  printf("\nSTMT_EXEC;;3237\n");
int tmp;
  printf("\nSTMT_EXEC;;3238\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;3239\n");
struct timeval v;
  printf("\nSTMT_EXEC;;3240\n");
size_t nbytes;
  printf("\nSTMT_EXEC;;3241\n");
unsigned long tmp___1;
  printf("\nSTMT_EXEC;;3242\n");
pid_t v___0;
  printf("\nSTMT_EXEC;;3243\n");
size_t nbytes___0;
  printf("\nSTMT_EXEC;;3244\n");
unsigned long tmp___2;
  printf("\nSTMT_EXEC;;3245\n");
pid_t v___1;
  printf("\nSTMT_EXEC;;3246\n");
size_t nbytes___1;
  printf("\nSTMT_EXEC;;3247\n");
unsigned long tmp___3;
  printf("\nSTMT_EXEC;;3248\n");
uid_t v___2;
  printf("\nSTMT_EXEC;;3249\n");
size_t nbytes___2;
  printf("\nSTMT_EXEC;;3250\n");
unsigned long tmp___4;
  printf("\nSTMT_EXEC;;3251\n");
uid_t v___3;
  printf("\nSTMT_EXEC;;3252\n");
size_t nbytes___3;
  printf("\nSTMT_EXEC;;3253\n");
unsigned long tmp___5;
  {
    printf("\nSTMT_EXEC;;3255\n");
buf___1 = (char *)buffer;
    printf("\nSTMT_EXEC;;3256\n");
seeded = (ssize_t)0;
    printf("\nSTMT_EXEC;;3257\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
tmp = open("/dev/urandom", 0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;3258\n");
fd = tmp;
    printf("\nSTMT_EXEC;;3259\n");
if (0 <= fd)
    {
      printf("\nSTMT_EXEC;;3261\n");
if (bufsize___1 < bytes_bound)
      {
        printf("\nSTMT_EXEC;;3263\n");
tmp___0 = bufsize___1;
      }
      else
      {
        printf("\nSTMT_EXEC;;3267\n");
tmp___0 = bytes_bound;
      }
      printf("\nSTMT_EXEC;;3269\n");
seeded = read(fd, (void *)buf___1, tmp___0);
      printf("\nSTMT_EXEC;;3270\n");
if (seeded < 0L)
      {
        printf("\nSTMT_EXEC;;3272\n");
seeded = (ssize_t)0;
      }
      printf("\nSTMT_EXEC;;3274\n");
printf("\nFUNC_CALL;close(int);\n");
close(fd);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;3276\n");
if ((size_t)seeded < bufsize___1)
    {
      printf("\nSTMT_EXEC;;3278\n");
if (sizeof(v) < bufsize___1 - (size_t)seeded)
      {
        printf("\nSTMT_EXEC;;3280\n");
tmp___1 = sizeof(v);
      }
      else
      {
        printf("\nSTMT_EXEC;;3284\n");
tmp___1 = bufsize___1 - (size_t)seeded;
      }
      printf("\nSTMT_EXEC;;3286\n");
nbytes = tmp___1;
      printf("\nSTMT_EXEC;;3287\n");
printf("\nFUNC_CALL;gettimeofday(struct timeval *__restrict,__timezone_ptr_t);\n");
gettimeofday(&v, (__timezone_ptr_t)((void *)0));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3288\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(buf___1 + seeded), (void const *)(&v), nbytes);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3289\n");
seeded = (ssize_t)((size_t)seeded + nbytes);
    }
    printf("\nSTMT_EXEC;;3291\n");
if ((size_t)seeded < bufsize___1)
    {
      printf("\nSTMT_EXEC;;3293\n");
if (sizeof(v___0) < bufsize___1 - (size_t)seeded)
      {
        printf("\nSTMT_EXEC;;3295\n");
tmp___2 = sizeof(v___0);
      }
      else
      {
        printf("\nSTMT_EXEC;;3299\n");
tmp___2 = bufsize___1 - (size_t)seeded;
      }
      printf("\nSTMT_EXEC;;3301\n");
nbytes___0 = tmp___2;
      printf("\nSTMT_EXEC;;3302\n");
printf("\nFUNC_CALL;getpid();\n");
v___0 = getpid();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3303\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(buf___1 + seeded), (void const *)(&v___0), nbytes___0);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3304\n");
seeded = (ssize_t)((size_t)seeded + nbytes___0);
    }
    printf("\nSTMT_EXEC;;3306\n");
if ((size_t)seeded < bufsize___1)
    {
      printf("\nSTMT_EXEC;;3308\n");
if (sizeof(v___1) < bufsize___1 - (size_t)seeded)
      {
        printf("\nSTMT_EXEC;;3310\n");
tmp___3 = sizeof(v___1);
      }
      else
      {
        printf("\nSTMT_EXEC;;3314\n");
tmp___3 = bufsize___1 - (size_t)seeded;
      }
      printf("\nSTMT_EXEC;;3316\n");
nbytes___1 = tmp___3;
      printf("\nSTMT_EXEC;;3317\n");
printf("\nFUNC_CALL;getppid();\n");
v___1 = getppid();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3318\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(buf___1 + seeded), (void const *)(&v___1), nbytes___1);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3319\n");
seeded = (ssize_t)((size_t)seeded + nbytes___1);
    }
    printf("\nSTMT_EXEC;;3321\n");
if ((size_t)seeded < bufsize___1)
    {
      printf("\nSTMT_EXEC;;3323\n");
if (sizeof(v___2) < bufsize___1 - (size_t)seeded)
      {
        printf("\nSTMT_EXEC;;3325\n");
tmp___4 = sizeof(v___2);
      }
      else
      {
        printf("\nSTMT_EXEC;;3329\n");
tmp___4 = bufsize___1 - (size_t)seeded;
      }
      printf("\nSTMT_EXEC;;3331\n");
nbytes___2 = tmp___4;
      printf("\nSTMT_EXEC;;3332\n");
printf("\nFUNC_CALL;getuid();\n");
v___2 = getuid();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3333\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(buf___1 + seeded), (void const *)(&v___2), nbytes___2);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3334\n");
seeded = (ssize_t)((size_t)seeded + nbytes___2);
    }
    printf("\nSTMT_EXEC;;3336\n");
if ((size_t)seeded < bufsize___1)
    {
      printf("\nSTMT_EXEC;;3338\n");
if (sizeof(v___3) < bufsize___1 - (size_t)seeded)
      {
        printf("\nSTMT_EXEC;;3340\n");
tmp___5 = sizeof(v___3);
      }
      else
      {
        printf("\nSTMT_EXEC;;3344\n");
tmp___5 = bufsize___1 - (size_t)seeded;
      }
      printf("\nSTMT_EXEC;;3346\n");
nbytes___3 = tmp___5;
      printf("\nSTMT_EXEC;;3347\n");
printf("\nFUNC_CALL;getgid();\n");
v___3 = getgid();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3348\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(buf___1 + seeded), (void const *)(&v___3), nbytes___3);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3349\n");
seeded = (ssize_t)((size_t)seeded + nbytes___3);
    }
    printf("\nSTMT_EXEC;;3351\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
struct randread_source *randread_new(char const *name, size_t bytes_bound)
{
  printf("\nFUNC_CALL;randread_new(const char *,size_t);\n");
printf("\nSTMT_EXEC;;3356\n");
struct randread_source *tmp;
  printf("\nSTMT_EXEC;;3357\n");
FILE *source;
  printf("\nSTMT_EXEC;;3358\n");
struct randread_source *s;
  printf("\nSTMT_EXEC;;3359\n");
unsigned long tmp___0;
  {
    printf("\nSTMT_EXEC;;3361\n");
if (bytes_bound == 0UL)
    {
      printf("\nSTMT_EXEC;;3363\n");
tmp = simple_new((FILE *)((void *)0), (void const *)((void *)0));
      printf("\nSTMT_EXEC;;3364\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    }
    else
    {
      printf("\nSTMT_EXEC;;3368\n");
source = (FILE *)((void *)0);
      printf("\nSTMT_EXEC;;3369\n");
if (name)
      {
        printf("\nSTMT_EXEC;;3371\n");
source = fopen_safer(name, "rb");
        printf("\nSTMT_EXEC;;3372\n");
if (!source)
        {
          printf("\nSTMT_EXEC;;3374\n");
printf("\nFUNC_RETURN;;\n");
return ((struct randread_source *)((void *)0));
        }
      }
      printf("\nSTMT_EXEC;;3377\n");
s = simple_new(source, (void const *)name);
      printf("\nSTMT_EXEC;;3378\n");
if (source)
      {
        printf("\nSTMT_EXEC;;3380\n");
if (sizeof(s->buf.c) < bytes_bound)
        {
          printf("\nSTMT_EXEC;;3382\n");
tmp___0 = sizeof(s->buf.c);
        }
        else
        {
          printf("\nSTMT_EXEC;;3386\n");
tmp___0 = bytes_bound;
        }
        printf("\nSTMT_EXEC;;3388\n");
printf("\nFUNC_CALL;setvbuf(FILE *__restrict,char *__restrict,int,size_t);\n");
setvbuf(source, s->buf.c, 0, tmp___0);printf("\nFUNC_RETURN;;\n");

      }
      else
      {
        printf("\nSTMT_EXEC;;3392\n");
s->buf.isaac.buffered = (size_t)0;
        printf("\nSTMT_EXEC;;3393\n");
get_nonce((void *)(s->buf.isaac.state.m), sizeof(s->buf.isaac.state.m), bytes_bound);
        printf("\nSTMT_EXEC;;3394\n");
isaac_seed(&s->buf.isaac.state);
      }
      printf("\nSTMT_EXEC;;3396\n");
printf("\nFUNC_RETURN;;\n");
return (s);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static void readsource(struct randread_source *s, unsigned char *p, size_t size)
{
  printf("\nFUNC_CALL;readsource(struct randread_source *,unsigned char *,size_t);\n");
printf("\nSTMT_EXEC;;3402\n");
size_t inbytes;
  printf("\nSTMT_EXEC;;3403\n");
size_t tmp;
  printf("\nSTMT_EXEC;;3404\n");
int fread_errno;
  printf("\nSTMT_EXEC;;3405\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;3406\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;3407\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;3409\n");
while (1)
    {
      printf("\nSTMT_EXEC;;3411\n");
printf("\nFUNC_CALL;fread_unlocked(void *__restrict,size_t,size_t,FILE *__restrict);\n");
tmp = fread_unlocked((void *)p, sizeof(*p), size, s->source);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3412\n");
inbytes = tmp;
      printf("\nSTMT_EXEC;;3413\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3414\n");
fread_errno = *tmp___0;
      printf("\nSTMT_EXEC;;3415\n");
p += inbytes;
      printf("\nSTMT_EXEC;;3416\n");
size -= inbytes;
      printf("\nSTMT_EXEC;;3417\n");
if (size == 0UL)
      {
        printf("\nSTMT_EXEC;;3419\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;3421\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3422\n");
printf("\nFUNC_CALL;ferror_unlocked(FILE *);\n");
tmp___3 = ferror_unlocked(s->source);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3423\n");
if (tmp___3)
      {
        printf("\nSTMT_EXEC;;3425\n");
*tmp___1 = fread_errno;
      }
      else
      {
        printf("\nSTMT_EXEC;;3429\n");
*tmp___1 = 0;
      }
      printf("\nSTMT_EXEC;;3431\n");
(*(s->handler))(s->handler_arg);
    }
  while_break:;
    printf("\nSTMT_EXEC;;3434\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void readisaac(struct isaac *isaac, unsigned char *p, size_t size)
{
  printf("\nFUNC_CALL;readisaac(struct isaac *,unsigned char *,size_t);\n");
printf("\nSTMT_EXEC;;3439\n");
size_t inbytes;
  printf("\nSTMT_EXEC;;3440\n");
isaac_word *wp;
  {
    printf("\nSTMT_EXEC;;3442\n");
inbytes = isaac->buffered;
    printf("\nSTMT_EXEC;;3443\n");
while (1)
    {
      printf("\nSTMT_EXEC;;3445\n");
if (size <= inbytes)
      {
        printf("\nSTMT_EXEC;;3447\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)p, (void const *)((isaac->data.b + (unsigned long)(1 << 8) * sizeof(isaac_word)) - inbytes), size);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;3448\n");
isaac->buffered = inbytes - size;
        printf("\nSTMT_EXEC;;3449\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;3451\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)p, (void const *)((isaac->data.b + (unsigned long)(1 << 8) * sizeof(isaac_word)) - inbytes), inbytes);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3452\n");
p += inbytes;
      printf("\nSTMT_EXEC;;3453\n");
size -= inbytes;
      printf("\nSTMT_EXEC;;3454\n");
wp = (isaac_word *)p;
      printf("\nSTMT_EXEC;;3455\n");
while (1)
      {
        printf("\nSTMT_EXEC;;3457\n");
if (!((unsigned long)(1 << 8) * sizeof(isaac_word) <= size))
        {
          printf("\nSTMT_EXEC;;3459\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;3461\n");
isaac_refill(&isaac->state, wp);
        printf("\nSTMT_EXEC;;3462\n");
wp += 1 << 8;
        printf("\nSTMT_EXEC;;3463\n");
size -= (unsigned long)(1 << 8) * sizeof(isaac_word);
        printf("\nSTMT_EXEC;;3464\n");
if (size == 0UL)
        {
          printf("\nSTMT_EXEC;;3466\n");
isaac->buffered = (size_t)0;
          printf("\nSTMT_EXEC;;3467\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    while_break___0:
      {
printf("\nSTMT_EXEC;;3471\n");
p = (unsigned char *)wp;
}

      printf("\nSTMT_EXEC;;3472\n");
isaac_refill(&isaac->state, isaac->data.w);
      printf("\nSTMT_EXEC;;3473\n");
inbytes = (unsigned long)(1 << 8) * sizeof(isaac_word);
    }
    printf("\nSTMT_EXEC;;3475\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void randread(struct randread_source *s, void *buf___1, size_t size)
{
  printf("\nFUNC_CALL;randread(struct randread_source *,void *,size_t);\n");
{
    printf("\nSTMT_EXEC;;3481\n");
if (s->source)
    {
      printf("\nSTMT_EXEC;;3483\n");
readsource(s, (unsigned char *)buf___1, size);
    }
    else
    {
      printf("\nSTMT_EXEC;;3487\n");
readisaac(&s->buf.isaac, (unsigned char *)buf___1, size);
    }
    printf("\nSTMT_EXEC;;3489\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int randread_free(struct randread_source *s)
{
  printf("\nFUNC_CALL;randread_free(struct randread_source *);\n");
printf("\nSTMT_EXEC;;3494\n");
FILE *source;
  printf("\nSTMT_EXEC;;3495\n");
int tmp;
  printf("\nSTMT_EXEC;;3496\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;3498\n");
source = s->source;
    printf("\nSTMT_EXEC;;3499\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)s, 0, sizeof(*s));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;3500\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)s);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;3501\n");
if (source)
    {
      printf("\nSTMT_EXEC;;3503\n");
tmp = rpl_fclose(source);
      printf("\nSTMT_EXEC;;3504\n");
tmp___0 = tmp;
    }
    else
    {
      printf("\nSTMT_EXEC;;3508\n");
tmp___0 = 0;
    }
    printf("\nSTMT_EXEC;;3510\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
void *hash_delete(Hash_table *table___0, void const *entry);
__inline static isaac_word just(isaac_word a)
{
  printf("\nFUNC_CALL;just(isaac_word);\n");
printf("\nSTMT_EXEC;;3516\n");
isaac_word desired_bits;
  {
    printf("\nSTMT_EXEC;;3518\n");
desired_bits = ((1UL << 1) << ((1 << 6) - 1)) - 1UL;
    printf("\nSTMT_EXEC;;3519\n");
printf("\nFUNC_RETURN;;\n");
return (a & desired_bits);
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static isaac_word ind(isaac_word const *m, isaac_word x)
{
  printf("\nFUNC_CALL;ind(const isaac_word *,isaac_word);\n");
printf("\nSTMT_EXEC;;3524\n");
isaac_word tmp;
  {
    printf("\nSTMT_EXEC;;3526\n");
if (sizeof(*m) * 8UL == (unsigned long)(1 << 6))
    {
      printf("\nSTMT_EXEC;;3528\n");
tmp = *((isaac_word *)((char *)m + (x & (unsigned long)((1 << 8) - 1) * sizeof(*m))));
    }
    else
    {
      printf("\nSTMT_EXEC;;3532\n");
tmp = (isaac_word) * (m + (x / (isaac_word)((1 << 6) / 8) & (unsigned long)((1 << 8) - 1)));
    }
    printf("\nSTMT_EXEC;;3534\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
void isaac_refill(struct isaac_state *s, isaac_word *result)
{
  printf("\nFUNC_CALL;isaac_refill(struct isaac_state *,isaac_word *);\n");
printf("\nSTMT_EXEC;;3539\n");
isaac_word a;
  printf("\nSTMT_EXEC;;3540\n");
isaac_word b;
  printf("\nSTMT_EXEC;;3541\n");
isaac_word *m;
  printf("\nSTMT_EXEC;;3542\n");
isaac_word *r;
  printf("\nSTMT_EXEC;;3543\n");
isaac_word x;
  printf("\nSTMT_EXEC;;3544\n");
isaac_word y;
  printf("\nSTMT_EXEC;;3545\n");
isaac_word tmp;
  printf("\nSTMT_EXEC;;3546\n");
isaac_word tmp___0;
  printf("\nSTMT_EXEC;;3547\n");
isaac_word tmp___1;
  printf("\nSTMT_EXEC;;3548\n");
isaac_word tmp___2;
  printf("\nSTMT_EXEC;;3549\n");
isaac_word x___0;
  printf("\nSTMT_EXEC;;3550\n");
isaac_word y___0;
  printf("\nSTMT_EXEC;;3551\n");
isaac_word tmp___3;
  printf("\nSTMT_EXEC;;3552\n");
isaac_word tmp___4;
  printf("\nSTMT_EXEC;;3553\n");
isaac_word tmp___5;
  printf("\nSTMT_EXEC;;3554\n");
isaac_word tmp___6;
  printf("\nSTMT_EXEC;;3555\n");
isaac_word tmp___7;
  printf("\nSTMT_EXEC;;3556\n");
isaac_word tmp___8;
  printf("\nSTMT_EXEC;;3557\n");
isaac_word x___1;
  printf("\nSTMT_EXEC;;3558\n");
isaac_word y___1;
  printf("\nSTMT_EXEC;;3559\n");
isaac_word tmp___9;
  printf("\nSTMT_EXEC;;3560\n");
isaac_word tmp___10;
  printf("\nSTMT_EXEC;;3561\n");
isaac_word tmp___11;
  printf("\nSTMT_EXEC;;3562\n");
isaac_word tmp___12;
  printf("\nSTMT_EXEC;;3563\n");
isaac_word x___2;
  printf("\nSTMT_EXEC;;3564\n");
isaac_word y___2;
  printf("\nSTMT_EXEC;;3565\n");
isaac_word tmp___13;
  printf("\nSTMT_EXEC;;3566\n");
isaac_word tmp___14;
  printf("\nSTMT_EXEC;;3567\n");
isaac_word tmp___15;
  printf("\nSTMT_EXEC;;3568\n");
isaac_word tmp___16;
  printf("\nSTMT_EXEC;;3569\n");
isaac_word tmp___17;
  printf("\nSTMT_EXEC;;3570\n");
isaac_word tmp___18;
  printf("\nSTMT_EXEC;;3571\n");
isaac_word x___3;
  printf("\nSTMT_EXEC;;3572\n");
isaac_word y___3;
  printf("\nSTMT_EXEC;;3573\n");
isaac_word tmp___19;
  printf("\nSTMT_EXEC;;3574\n");
isaac_word tmp___20;
  printf("\nSTMT_EXEC;;3575\n");
isaac_word tmp___21;
  printf("\nSTMT_EXEC;;3576\n");
isaac_word tmp___22;
  printf("\nSTMT_EXEC;;3577\n");
isaac_word x___4;
  printf("\nSTMT_EXEC;;3578\n");
isaac_word y___4;
  printf("\nSTMT_EXEC;;3579\n");
isaac_word tmp___23;
  printf("\nSTMT_EXEC;;3580\n");
isaac_word tmp___24;
  printf("\nSTMT_EXEC;;3581\n");
isaac_word tmp___25;
  printf("\nSTMT_EXEC;;3582\n");
isaac_word tmp___26;
  printf("\nSTMT_EXEC;;3583\n");
isaac_word tmp___27;
  printf("\nSTMT_EXEC;;3584\n");
isaac_word tmp___28;
  printf("\nSTMT_EXEC;;3585\n");
isaac_word x___5;
  printf("\nSTMT_EXEC;;3586\n");
isaac_word y___5;
  printf("\nSTMT_EXEC;;3587\n");
isaac_word tmp___29;
  printf("\nSTMT_EXEC;;3588\n");
isaac_word tmp___30;
  printf("\nSTMT_EXEC;;3589\n");
isaac_word tmp___31;
  printf("\nSTMT_EXEC;;3590\n");
isaac_word tmp___32;
  printf("\nSTMT_EXEC;;3591\n");
isaac_word x___6;
  printf("\nSTMT_EXEC;;3592\n");
isaac_word y___6;
  printf("\nSTMT_EXEC;;3593\n");
isaac_word tmp___33;
  printf("\nSTMT_EXEC;;3594\n");
isaac_word tmp___34;
  printf("\nSTMT_EXEC;;3595\n");
isaac_word tmp___35;
  printf("\nSTMT_EXEC;;3596\n");
isaac_word tmp___36;
  printf("\nSTMT_EXEC;;3597\n");
isaac_word tmp___37;
  printf("\nSTMT_EXEC;;3598\n");
isaac_word tmp___38;
  {
    printf("\nSTMT_EXEC;;3600\n");
a = s->a;
    printf("\nSTMT_EXEC;;3601\n");
(s->c)++;
    printf("\nSTMT_EXEC;;3602\n");
b = s->b + s->c;
    printf("\nSTMT_EXEC;;3603\n");
m = s->m;
    printf("\nSTMT_EXEC;;3604\n");
r = result;
    printf("\nSTMT_EXEC;;3605\n");
while (1)
    {
      printf("\nSTMT_EXEC;;3607\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3609\n");
tmp = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3613\n");
tmp = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3615\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3617\n");
tmp___0 = a << 13;
      }
      else
      {
        printf("\nSTMT_EXEC;;3621\n");
tmp___0 = ~(a ^ (a << 21));
      }
      printf("\nSTMT_EXEC;;3623\n");
a = (tmp ^ tmp___0) + *(m + 128);
      printf("\nSTMT_EXEC;;3624\n");
x = *(m + 0);
      printf("\nSTMT_EXEC;;3625\n");
tmp___1 = ind((isaac_word const *)(s->m), x);
      printf("\nSTMT_EXEC;;3626\n");
y = (tmp___1 + a) + b;
      printf("\nSTMT_EXEC;;3627\n");
*(m + 0) = y;
      printf("\nSTMT_EXEC;;3628\n");
tmp___2 = ind((isaac_word const *)(s->m), y >> 8);
      printf("\nSTMT_EXEC;;3629\n");
b = just(tmp___2 + x);
      printf("\nSTMT_EXEC;;3630\n");
*(r + 0) = b;
      printf("\nSTMT_EXEC;;3631\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3633\n");
tmp___3 = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3637\n");
tmp___3 = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3639\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3641\n");
tmp___4 = just(a);
        printf("\nSTMT_EXEC;;3642\n");
tmp___6 = tmp___4 >> 6;
      }
      else
      {
        printf("\nSTMT_EXEC;;3646\n");
tmp___5 = just(a);
        printf("\nSTMT_EXEC;;3647\n");
tmp___6 = a ^ (tmp___5 >> 5);
      }
      printf("\nSTMT_EXEC;;3649\n");
a = (tmp___3 ^ tmp___6) + *(m + 129);
      printf("\nSTMT_EXEC;;3650\n");
x___0 = *(m + 1);
      printf("\nSTMT_EXEC;;3651\n");
tmp___7 = ind((isaac_word const *)(s->m), x___0);
      printf("\nSTMT_EXEC;;3652\n");
y___0 = (tmp___7 + a) + b;
      printf("\nSTMT_EXEC;;3653\n");
*(m + 1) = y___0;
      printf("\nSTMT_EXEC;;3654\n");
tmp___8 = ind((isaac_word const *)(s->m), y___0 >> 8);
      printf("\nSTMT_EXEC;;3655\n");
b = just(tmp___8 + x___0);
      printf("\nSTMT_EXEC;;3656\n");
*(r + 1) = b;
      printf("\nSTMT_EXEC;;3657\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3659\n");
tmp___9 = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3663\n");
tmp___9 = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3665\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3667\n");
tmp___10 = a << 2;
      }
      else
      {
        printf("\nSTMT_EXEC;;3671\n");
tmp___10 = a ^ (a << 12);
      }
      printf("\nSTMT_EXEC;;3673\n");
a = (tmp___9 ^ tmp___10) + *(m + 130);
      printf("\nSTMT_EXEC;;3674\n");
x___1 = *(m + 2);
      printf("\nSTMT_EXEC;;3675\n");
tmp___11 = ind((isaac_word const *)(s->m), x___1);
      printf("\nSTMT_EXEC;;3676\n");
y___1 = (tmp___11 + a) + b;
      printf("\nSTMT_EXEC;;3677\n");
*(m + 2) = y___1;
      printf("\nSTMT_EXEC;;3678\n");
tmp___12 = ind((isaac_word const *)(s->m), y___1 >> 8);
      printf("\nSTMT_EXEC;;3679\n");
b = just(tmp___12 + x___1);
      printf("\nSTMT_EXEC;;3680\n");
*(r + 2) = b;
      printf("\nSTMT_EXEC;;3681\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3683\n");
tmp___13 = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3687\n");
tmp___13 = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3689\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3691\n");
tmp___14 = just(a);
        printf("\nSTMT_EXEC;;3692\n");
tmp___16 = tmp___14 >> 16;
      }
      else
      {
        printf("\nSTMT_EXEC;;3696\n");
tmp___15 = just(a);
        printf("\nSTMT_EXEC;;3697\n");
tmp___16 = a ^ (tmp___15 >> 33);
      }
      printf("\nSTMT_EXEC;;3699\n");
a = (tmp___13 ^ tmp___16) + *(m + 131);
      printf("\nSTMT_EXEC;;3700\n");
x___2 = *(m + 3);
      printf("\nSTMT_EXEC;;3701\n");
tmp___17 = ind((isaac_word const *)(s->m), x___2);
      printf("\nSTMT_EXEC;;3702\n");
y___2 = (tmp___17 + a) + b;
      printf("\nSTMT_EXEC;;3703\n");
*(m + 3) = y___2;
      printf("\nSTMT_EXEC;;3704\n");
tmp___18 = ind((isaac_word const *)(s->m), y___2 >> 8);
      printf("\nSTMT_EXEC;;3705\n");
b = just(tmp___18 + x___2);
      printf("\nSTMT_EXEC;;3706\n");
*(r + 3) = b;
      printf("\nSTMT_EXEC;;3707\n");
r += 4;
      printf("\nSTMT_EXEC;;3708\n");
m += 4;
      printf("\nSTMT_EXEC;;3709\n");
if (!((unsigned long)m < (unsigned long)(s->m + 128)))
      {
        printf("\nSTMT_EXEC;;3711\n");
goto while_break;
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;3715\n");
while (1)
    {
      printf("\nSTMT_EXEC;;3717\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3719\n");
tmp___19 = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3723\n");
tmp___19 = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3725\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3727\n");
tmp___20 = a << 13;
      }
      else
      {
        printf("\nSTMT_EXEC;;3731\n");
tmp___20 = ~(a ^ (a << 21));
      }
      printf("\nSTMT_EXEC;;3733\n");
a = (tmp___19 ^ tmp___20) + *(m + -128);
      printf("\nSTMT_EXEC;;3734\n");
x___3 = *(m + 0);
      printf("\nSTMT_EXEC;;3735\n");
tmp___21 = ind((isaac_word const *)(s->m), x___3);
      printf("\nSTMT_EXEC;;3736\n");
y___3 = (tmp___21 + a) + b;
      printf("\nSTMT_EXEC;;3737\n");
*(m + 0) = y___3;
      printf("\nSTMT_EXEC;;3738\n");
tmp___22 = ind((isaac_word const *)(s->m), y___3 >> 8);
      printf("\nSTMT_EXEC;;3739\n");
b = just(tmp___22 + x___3);
      printf("\nSTMT_EXEC;;3740\n");
*(r + 0) = b;
      printf("\nSTMT_EXEC;;3741\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3743\n");
tmp___23 = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3747\n");
tmp___23 = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3749\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3751\n");
tmp___24 = just(a);
        printf("\nSTMT_EXEC;;3752\n");
tmp___26 = tmp___24 >> 6;
      }
      else
      {
        printf("\nSTMT_EXEC;;3756\n");
tmp___25 = just(a);
        printf("\nSTMT_EXEC;;3757\n");
tmp___26 = a ^ (tmp___25 >> 5);
      }
      printf("\nSTMT_EXEC;;3759\n");
a = (tmp___23 ^ tmp___26) + *(m + -127);
      printf("\nSTMT_EXEC;;3760\n");
x___4 = *(m + 1);
      printf("\nSTMT_EXEC;;3761\n");
tmp___27 = ind((isaac_word const *)(s->m), x___4);
      printf("\nSTMT_EXEC;;3762\n");
y___4 = (tmp___27 + a) + b;
      printf("\nSTMT_EXEC;;3763\n");
*(m + 1) = y___4;
      printf("\nSTMT_EXEC;;3764\n");
tmp___28 = ind((isaac_word const *)(s->m), y___4 >> 8);
      printf("\nSTMT_EXEC;;3765\n");
b = just(tmp___28 + x___4);
      printf("\nSTMT_EXEC;;3766\n");
*(r + 1) = b;
      printf("\nSTMT_EXEC;;3767\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3769\n");
tmp___29 = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3773\n");
tmp___29 = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3775\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3777\n");
tmp___30 = a << 2;
      }
      else
      {
        printf("\nSTMT_EXEC;;3781\n");
tmp___30 = a ^ (a << 12);
      }
      printf("\nSTMT_EXEC;;3783\n");
a = (tmp___29 ^ tmp___30) + *(m + -126);
      printf("\nSTMT_EXEC;;3784\n");
x___5 = *(m + 2);
      printf("\nSTMT_EXEC;;3785\n");
tmp___31 = ind((isaac_word const *)(s->m), x___5);
      printf("\nSTMT_EXEC;;3786\n");
y___5 = (tmp___31 + a) + b;
      printf("\nSTMT_EXEC;;3787\n");
*(m + 2) = y___5;
      printf("\nSTMT_EXEC;;3788\n");
tmp___32 = ind((isaac_word const *)(s->m), y___5 >> 8);
      printf("\nSTMT_EXEC;;3789\n");
b = just(tmp___32 + x___5);
      printf("\nSTMT_EXEC;;3790\n");
*(r + 2) = b;
      printf("\nSTMT_EXEC;;3791\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3793\n");
tmp___33 = a;
      }
      else
      {
        printf("\nSTMT_EXEC;;3797\n");
tmp___33 = (isaac_word)0;
      }
      printf("\nSTMT_EXEC;;3799\n");
if (1 << 6 == 32)
      {
        printf("\nSTMT_EXEC;;3801\n");
tmp___34 = just(a);
        printf("\nSTMT_EXEC;;3802\n");
tmp___36 = tmp___34 >> 16;
      }
      else
      {
        printf("\nSTMT_EXEC;;3806\n");
tmp___35 = just(a);
        printf("\nSTMT_EXEC;;3807\n");
tmp___36 = a ^ (tmp___35 >> 33);
      }
      printf("\nSTMT_EXEC;;3809\n");
a = (tmp___33 ^ tmp___36) + *(m + -125);
      printf("\nSTMT_EXEC;;3810\n");
x___6 = *(m + 3);
      printf("\nSTMT_EXEC;;3811\n");
tmp___37 = ind((isaac_word const *)(s->m), x___6);
      printf("\nSTMT_EXEC;;3812\n");
y___6 = (tmp___37 + a) + b;
      printf("\nSTMT_EXEC;;3813\n");
*(m + 3) = y___6;
      printf("\nSTMT_EXEC;;3814\n");
tmp___38 = ind((isaac_word const *)(s->m), y___6 >> 8);
      printf("\nSTMT_EXEC;;3815\n");
b = just(tmp___38 + x___6);
      printf("\nSTMT_EXEC;;3816\n");
*(r + 3) = b;
      printf("\nSTMT_EXEC;;3817\n");
r += 4;
      printf("\nSTMT_EXEC;;3818\n");
m += 4;
      printf("\nSTMT_EXEC;;3819\n");
if (!((unsigned long)m < (unsigned long)(s->m + (1 << 8))))
      {
        printf("\nSTMT_EXEC;;3821\n");
goto while_break___0;
      }
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;3825\n");
s->a = a;
}

    printf("\nSTMT_EXEC;;3826\n");
s->b = b;
    printf("\nSTMT_EXEC;;3827\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void isaac_seed(struct isaac_state *s)
{
  printf("\nFUNC_CALL;isaac_seed(struct isaac_state *);\n");
printf("\nSTMT_EXEC;;3832\n");
isaac_word a;
  printf("\nSTMT_EXEC;;3833\n");
unsigned long tmp;
  printf("\nSTMT_EXEC;;3834\n");
isaac_word b;
  printf("\nSTMT_EXEC;;3835\n");
unsigned long tmp___0;
  printf("\nSTMT_EXEC;;3836\n");
isaac_word c;
  printf("\nSTMT_EXEC;;3837\n");
unsigned long tmp___1;
  printf("\nSTMT_EXEC;;3838\n");
isaac_word d;
  printf("\nSTMT_EXEC;;3839\n");
unsigned long tmp___2;
  printf("\nSTMT_EXEC;;3840\n");
isaac_word e;
  printf("\nSTMT_EXEC;;3841\n");
unsigned long tmp___3;
  printf("\nSTMT_EXEC;;3842\n");
isaac_word f;
  printf("\nSTMT_EXEC;;3843\n");
unsigned long tmp___4;
  printf("\nSTMT_EXEC;;3844\n");
isaac_word g;
  printf("\nSTMT_EXEC;;3845\n");
unsigned long tmp___5;
  printf("\nSTMT_EXEC;;3846\n");
isaac_word h;
  printf("\nSTMT_EXEC;;3847\n");
unsigned long tmp___6;
  printf("\nSTMT_EXEC;;3848\n");
int i;
  printf("\nSTMT_EXEC;;3849\n");
isaac_word tmp___7;
  printf("\nSTMT_EXEC;;3850\n");
isaac_word tmp___8;
  printf("\nSTMT_EXEC;;3851\n");
isaac_word tmp___9;
  printf("\nSTMT_EXEC;;3852\n");
isaac_word tmp___10;
  printf("\nSTMT_EXEC;;3853\n");
int i___0;
  printf("\nSTMT_EXEC;;3854\n");
isaac_word tmp___11;
  printf("\nSTMT_EXEC;;3855\n");
isaac_word tmp___12;
  printf("\nSTMT_EXEC;;3856\n");
isaac_word tmp___13;
  printf("\nSTMT_EXEC;;3857\n");
isaac_word tmp___14;
  printf("\nSTMT_EXEC;;3858\n");
isaac_word tmp___15;
  printf("\nSTMT_EXEC;;3859\n");
isaac_word tmp___16;
  {
    printf("\nSTMT_EXEC;;3861\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3863\n");
tmp = 325574490UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3867\n");
tmp = 7240739780546808700UL;
    }
    printf("\nSTMT_EXEC;;3869\n");
a = tmp;
    printf("\nSTMT_EXEC;;3870\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3872\n");
tmp___0 = 2514026585UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3876\n");
tmp___0 = 0xb9f8b322c73ac862UL;
    }
    printf("\nSTMT_EXEC;;3878\n");
b = tmp___0;
    printf("\nSTMT_EXEC;;3879\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3881\n");
tmp___1 = 3273014859UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3885\n");
tmp___1 = 0x8c0ea5053d4712a0UL;
    }
    printf("\nSTMT_EXEC;;3887\n");
c = tmp___1;
    printf("\nSTMT_EXEC;;3888\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3890\n");
tmp___2 = 255990488UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3894\n");
tmp___2 = 0xb29b2e824a595524UL;
    }
    printf("\nSTMT_EXEC;;3896\n");
d = tmp___2;
    printf("\nSTMT_EXEC;;3897\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3899\n");
tmp___3 = 3643427448UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3903\n");
tmp___3 = 0x82f053db8355e0ceUL;
    }
    printf("\nSTMT_EXEC;;3905\n");
e = tmp___3;
    printf("\nSTMT_EXEC;;3906\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3908\n");
tmp___4 = 2769960009UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3912\n");
tmp___4 = 5259722845879046933UL;
    }
    printf("\nSTMT_EXEC;;3914\n");
f = tmp___4;
    printf("\nSTMT_EXEC;;3915\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3917\n");
tmp___5 = 3304057371UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3921\n");
tmp___5 = 0xae985bf2cbfc89edUL;
    }
    printf("\nSTMT_EXEC;;3923\n");
g = tmp___5;
    printf("\nSTMT_EXEC;;3924\n");
if (1 << 6 == 32)
    {
      printf("\nSTMT_EXEC;;3926\n");
tmp___6 = 811634969UL;
    }
    else
    {
      printf("\nSTMT_EXEC;;3930\n");
tmp___6 = 0x98f5704f6c44c0abUL;
    }
    printf("\nSTMT_EXEC;;3932\n");
h = tmp___6;
    printf("\nSTMT_EXEC;;3933\n");
i = 0;
    printf("\nSTMT_EXEC;;3934\n");
while (1)
    {
      printf("\nSTMT_EXEC;;3936\n");
if (!(i < 1 << 8))
      {
        printf("\nSTMT_EXEC;;3938\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;3940\n");
a += s->m[i];
      printf("\nSTMT_EXEC;;3941\n");
b += s->m[i + 1];
      printf("\nSTMT_EXEC;;3942\n");
c += s->m[i + 2];
      printf("\nSTMT_EXEC;;3943\n");
d += s->m[i + 3];
      printf("\nSTMT_EXEC;;3944\n");
e += s->m[i + 4];
      printf("\nSTMT_EXEC;;3945\n");
f += s->m[i + 5];
      printf("\nSTMT_EXEC;;3946\n");
g += s->m[i + 6];
      printf("\nSTMT_EXEC;;3947\n");
h += s->m[i + 7];
      printf("\nSTMT_EXEC;;3948\n");
a -= e;
      printf("\nSTMT_EXEC;;3949\n");
tmp___7 = just(h);
      printf("\nSTMT_EXEC;;3950\n");
f ^= tmp___7 >> 9;
      printf("\nSTMT_EXEC;;3951\n");
h += a;
      printf("\nSTMT_EXEC;;3952\n");
b -= f;
      printf("\nSTMT_EXEC;;3953\n");
g ^= a << 9;
      printf("\nSTMT_EXEC;;3954\n");
a += b;
      printf("\nSTMT_EXEC;;3955\n");
c -= g;
      printf("\nSTMT_EXEC;;3956\n");
tmp___8 = just(b);
      printf("\nSTMT_EXEC;;3957\n");
h ^= tmp___8 >> 23;
      printf("\nSTMT_EXEC;;3958\n");
b += c;
      printf("\nSTMT_EXEC;;3959\n");
d -= h;
      printf("\nSTMT_EXEC;;3960\n");
a ^= c << 15;
      printf("\nSTMT_EXEC;;3961\n");
c += d;
      printf("\nSTMT_EXEC;;3962\n");
e -= a;
      printf("\nSTMT_EXEC;;3963\n");
tmp___9 = just(d);
      printf("\nSTMT_EXEC;;3964\n");
b ^= tmp___9 >> 14;
      printf("\nSTMT_EXEC;;3965\n");
d += e;
      printf("\nSTMT_EXEC;;3966\n");
f -= b;
      printf("\nSTMT_EXEC;;3967\n");
c ^= e << 20;
      printf("\nSTMT_EXEC;;3968\n");
e += f;
      printf("\nSTMT_EXEC;;3969\n");
g -= c;
      printf("\nSTMT_EXEC;;3970\n");
tmp___10 = just(f);
      printf("\nSTMT_EXEC;;3971\n");
d ^= tmp___10 >> 17;
      printf("\nSTMT_EXEC;;3972\n");
f += g;
      printf("\nSTMT_EXEC;;3973\n");
h -= d;
      printf("\nSTMT_EXEC;;3974\n");
e ^= g << 14;
      printf("\nSTMT_EXEC;;3975\n");
g += h;
      printf("\nSTMT_EXEC;;3976\n");
s->m[i] = a;
      printf("\nSTMT_EXEC;;3977\n");
s->m[i + 1] = b;
      printf("\nSTMT_EXEC;;3978\n");
s->m[i + 2] = c;
      printf("\nSTMT_EXEC;;3979\n");
s->m[i + 3] = d;
      printf("\nSTMT_EXEC;;3980\n");
s->m[i + 4] = e;
      printf("\nSTMT_EXEC;;3981\n");
s->m[i + 5] = f;
      printf("\nSTMT_EXEC;;3982\n");
s->m[i + 6] = g;
      printf("\nSTMT_EXEC;;3983\n");
s->m[i + 7] = h;
      printf("\nSTMT_EXEC;;3984\n");
i += 8;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;3987\n");
i___0 = 0;
}

    printf("\nSTMT_EXEC;;3988\n");
while (1)
    {
      printf("\nSTMT_EXEC;;3990\n");
if (!(i___0 < 1 << 8))
      {
        printf("\nSTMT_EXEC;;3992\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;3994\n");
a += s->m[i___0];
      printf("\nSTMT_EXEC;;3995\n");
b += s->m[i___0 + 1];
      printf("\nSTMT_EXEC;;3996\n");
c += s->m[i___0 + 2];
      printf("\nSTMT_EXEC;;3997\n");
d += s->m[i___0 + 3];
      printf("\nSTMT_EXEC;;3998\n");
e += s->m[i___0 + 4];
      printf("\nSTMT_EXEC;;3999\n");
f += s->m[i___0 + 5];
      printf("\nSTMT_EXEC;;4000\n");
g += s->m[i___0 + 6];
      printf("\nSTMT_EXEC;;4001\n");
h += s->m[i___0 + 7];
      printf("\nSTMT_EXEC;;4002\n");
a -= e;
      printf("\nSTMT_EXEC;;4003\n");
tmp___11 = just(h);
      printf("\nSTMT_EXEC;;4004\n");
f ^= tmp___11 >> 9;
      printf("\nSTMT_EXEC;;4005\n");
h += a;
      printf("\nSTMT_EXEC;;4006\n");
b -= f;
      printf("\nSTMT_EXEC;;4007\n");
g ^= a << 9;
      printf("\nSTMT_EXEC;;4008\n");
a += b;
      printf("\nSTMT_EXEC;;4009\n");
c -= g;
      printf("\nSTMT_EXEC;;4010\n");
tmp___12 = just(b);
      printf("\nSTMT_EXEC;;4011\n");
h ^= tmp___12 >> 23;
      printf("\nSTMT_EXEC;;4012\n");
b += c;
      printf("\nSTMT_EXEC;;4013\n");
d -= h;
      printf("\nSTMT_EXEC;;4014\n");
a ^= c << 15;
      printf("\nSTMT_EXEC;;4015\n");
c += d;
      printf("\nSTMT_EXEC;;4016\n");
e -= a;
      printf("\nSTMT_EXEC;;4017\n");
tmp___13 = just(d);
      printf("\nSTMT_EXEC;;4018\n");
b ^= tmp___13 >> 14;
      printf("\nSTMT_EXEC;;4019\n");
d += e;
      printf("\nSTMT_EXEC;;4020\n");
f -= b;
      printf("\nSTMT_EXEC;;4021\n");
c ^= e << 20;
      printf("\nSTMT_EXEC;;4022\n");
e += f;
      printf("\nSTMT_EXEC;;4023\n");
g -= c;
      printf("\nSTMT_EXEC;;4024\n");
tmp___14 = just(f);
      printf("\nSTMT_EXEC;;4025\n");
d ^= tmp___14 >> 17;
      printf("\nSTMT_EXEC;;4026\n");
f += g;
      printf("\nSTMT_EXEC;;4027\n");
h -= d;
      printf("\nSTMT_EXEC;;4028\n");
e ^= g << 14;
      printf("\nSTMT_EXEC;;4029\n");
g += h;
      printf("\nSTMT_EXEC;;4030\n");
s->m[i___0] = a;
      printf("\nSTMT_EXEC;;4031\n");
s->m[i___0 + 1] = b;
      printf("\nSTMT_EXEC;;4032\n");
s->m[i___0 + 2] = c;
      printf("\nSTMT_EXEC;;4033\n");
s->m[i___0 + 3] = d;
      printf("\nSTMT_EXEC;;4034\n");
s->m[i___0 + 4] = e;
      printf("\nSTMT_EXEC;;4035\n");
s->m[i___0 + 5] = f;
      printf("\nSTMT_EXEC;;4036\n");
s->m[i___0 + 6] = g;
      printf("\nSTMT_EXEC;;4037\n");
s->m[i___0 + 7] = h;
      printf("\nSTMT_EXEC;;4038\n");
i___0 += 8;
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;4041\n");
tmp___16 = (isaac_word)0;
}

    printf("\nSTMT_EXEC;;4042\n");
s->c = tmp___16;
    printf("\nSTMT_EXEC;;4043\n");
tmp___15 = tmp___16;
    printf("\nSTMT_EXEC;;4044\n");
s->b = tmp___15;
    printf("\nSTMT_EXEC;;4045\n");
s->a = tmp___15;
    printf("\nSTMT_EXEC;;4046\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
char const *const quoting_style_args[9];
enum quoting_style const quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
struct quoting_options quote_quoting_options;
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
__inline static char *xcharalloc(size_t n)
{
  printf("\nFUNC_CALL;xcharalloc(size_t);\n");
printf("\nSTMT_EXEC;;4060\n");
void *tmp;
  printf("\nSTMT_EXEC;;4061\n");
void *tmp___0;
  printf("\nSTMT_EXEC;;4062\n");
void *tmp___1;
  {
    printf("\nSTMT_EXEC;;4064\n");
if (sizeof(char) == 1UL)
    {
      printf("\nSTMT_EXEC;;4066\n");
tmp = xmalloc(n);
      printf("\nSTMT_EXEC;;4067\n");
tmp___1 = tmp;
    }
    else
    {
      printf("\nSTMT_EXEC;;4071\n");
tmp___0 = xnmalloc(n, sizeof(char));
      printf("\nSTMT_EXEC;;4072\n");
tmp___1 = tmp___0;
    }
    printf("\nSTMT_EXEC;;4074\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) iswprint)(wint_t __wc);
char const *const quoting_style_args[9] = {"literal", "shell", "shell-always", "c", "c-maybe", "escape", "locale", "clocale", (char const *)0};
enum quoting_style const quoting_style_vals[8] = {(enum quoting_style const)0, (enum quoting_style const)1, (enum quoting_style const)2, (enum quoting_style const)3, (enum quoting_style const)4, (enum quoting_style const)5, (enum quoting_style const)6, (enum quoting_style const)7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i)
{
  printf("\nFUNC_CALL;set_char_quoting(struct quoting_options *,char,int);\n");
printf("\nSTMT_EXEC;;4083\n");
unsigned char uc;
  printf("\nSTMT_EXEC;;4084\n");
unsigned int *p;
  printf("\nSTMT_EXEC;;4085\n");
struct quoting_options *tmp;
  printf("\nSTMT_EXEC;;4086\n");
int shift;
  printf("\nSTMT_EXEC;;4087\n");
int r;
  {
    printf("\nSTMT_EXEC;;4089\n");
uc = (unsigned char)c;
    printf("\nSTMT_EXEC;;4090\n");
if (o)
    {
      printf("\nSTMT_EXEC;;4092\n");
tmp = o;
    }
    else
    {
      printf("\nSTMT_EXEC;;4096\n");
tmp = &default_quoting_options;
    }
    printf("\nSTMT_EXEC;;4098\n");
p = tmp->quote_these_too + (unsigned long)uc / (sizeof(int) * 8UL);
    printf("\nSTMT_EXEC;;4099\n");
shift = (int)((unsigned long)uc % (sizeof(int) * 8UL));
    printf("\nSTMT_EXEC;;4100\n");
r = (int)((*p >> shift) & 1U);
    printf("\nSTMT_EXEC;;4101\n");
*p ^= (unsigned int)(((i & 1) ^ r) << shift);
    printf("\nSTMT_EXEC;;4102\n");
printf("\nFUNC_RETURN;;\n");
return (r);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct quoting_options quoting_options_from_style(enum quoting_style style)
{
  printf("\nFUNC_CALL;quoting_options_from_style(enum quoting_style);\n");
printf("\nSTMT_EXEC;;4107\n");
struct quoting_options o;
  printf("\nSTMT_EXEC;;4108\n");
unsigned int tmp;
  {
    printf("\nSTMT_EXEC;;4110\n");
o.style = (enum quoting_style)0;
    printf("\nSTMT_EXEC;;4111\n");
o.flags = 0;
    printf("\nSTMT_EXEC;;4112\n");
o.quote_these_too[0] = 0U;
    printf("\nSTMT_EXEC;;4113\n");
tmp = 1U;
    printf("\nSTMT_EXEC;;4114\n");
while (1)
    {
      printf("\nSTMT_EXEC;;4116\n");
if (!(!(tmp >= 8U)))
      {
        printf("\nSTMT_EXEC;;4118\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;4120\n");
o.quote_these_too[tmp] = 0U;
      printf("\nSTMT_EXEC;;4121\n");
tmp++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;4124\n");
o.left_quote = (char const *)((void *)0);
}

    printf("\nSTMT_EXEC;;4125\n");
o.right_quote = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;4126\n");
if ((unsigned int)style == 8U)
    {
      printf("\nSTMT_EXEC;;4128\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;4130\n");
o.style = style;
    printf("\nSTMT_EXEC;;4131\n");
printf("\nFUNC_RETURN;;\n");
return (o);
  }
printf("\nFUNC_RETURN;;\n");
}
static char const *gettext_quote(char const *msgid, enum quoting_style s)
{
  printf("\nFUNC_CALL;gettext_quote(const char *,enum quoting_style);\n");
printf("\nSTMT_EXEC;;4136\n");
char const *translation;
  printf("\nSTMT_EXEC;;4137\n");
char const *tmp;
  printf("\nSTMT_EXEC;;4138\n");
char const *locale_code;
  printf("\nSTMT_EXEC;;4139\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;4140\n");
int tmp___1;
  printf("\nSTMT_EXEC;;4141\n");
char const *tmp___2;
  printf("\nSTMT_EXEC;;4142\n");
int tmp___3;
  printf("\nSTMT_EXEC;;4143\n");
char const *tmp___4;
  {
    printf("\nSTMT_EXEC;;4145\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = (char const *)gettext(msgid);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;4146\n");
translation = tmp;
    printf("\nSTMT_EXEC;;4147\n");
if ((unsigned long)translation != (unsigned long)msgid)
    {
      printf("\nSTMT_EXEC;;4149\n");
printf("\nFUNC_RETURN;;\n");
return (translation);
    }
    printf("\nSTMT_EXEC;;4151\n");
locale_code = locale_charset();
    printf("\nSTMT_EXEC;;4152\n");
tmp___1 = c_strcasecmp(locale_code, "UTF-8");
    printf("\nSTMT_EXEC;;4153\n");
if (tmp___1 == 0)
    {
      printf("\nSTMT_EXEC;;4155\n");
if ((int const) * (msgid + 0) == 96)
      {
        printf("\nSTMT_EXEC;;4157\n");
tmp___0 = "\342\200\230";
      }
      else
      {
        printf("\nSTMT_EXEC;;4161\n");
tmp___0 = "\342\200\231";
      }
      printf("\nSTMT_EXEC;;4163\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
    }
    printf("\nSTMT_EXEC;;4165\n");
tmp___3 = c_strcasecmp(locale_code, "GB18030");
    printf("\nSTMT_EXEC;;4166\n");
if (tmp___3 == 0)
    {
      printf("\nSTMT_EXEC;;4168\n");
if ((int const) * (msgid + 0) == 96)
      {
        printf("\nSTMT_EXEC;;4170\n");
tmp___2 = "\241\ae";
      }
      else
      {
        printf("\nSTMT_EXEC;;4174\n");
tmp___2 = "\241\257";
      }
      printf("\nSTMT_EXEC;;4176\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___2);
    }
    printf("\nSTMT_EXEC;;4178\n");
if ((unsigned int)s == 7U)
    {
      printf("\nSTMT_EXEC;;4180\n");
tmp___4 = "\"";
    }
    else
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
  printf("\nSTMT_EXEC;;4194\n");
size_t quote_string_len;
  printf("\nSTMT_EXEC;;4195\n");
_Bool backslash_escapes;
  printf("\nSTMT_EXEC;;4196\n");
_Bool unibyte_locale;
  printf("\nSTMT_EXEC;;4197\n");
size_t tmp;
  printf("\nSTMT_EXEC;;4198\n");
_Bool elide_outer_quotes;
  printf("\nSTMT_EXEC;;4199\n");
unsigned char c;
  printf("\nSTMT_EXEC;;4200\n");
unsigned char esc;
  printf("\nSTMT_EXEC;;4201\n");
_Bool is_right_quote;
  printf("\nSTMT_EXEC;;4202\n");
int tmp___0;
  printf("\nSTMT_EXEC;;4203\n");
int tmp___1;
  printf("\nSTMT_EXEC;;4204\n");
size_t m;
  printf("\nSTMT_EXEC;;4205\n");
_Bool printable;
  printf("\nSTMT_EXEC;;4206\n");
unsigned short const **tmp___2;
  printf("\nSTMT_EXEC;;4207\n");
mbstate_t mbstate;
  printf("\nSTMT_EXEC;;4208\n");
wchar_t w;
  printf("\nSTMT_EXEC;;4209\n");
size_t bytes;
  printf("\nSTMT_EXEC;;4210\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;4211\n");
size_t j;
  printf("\nSTMT_EXEC;;4212\n");
int tmp___4;
  printf("\nSTMT_EXEC;;4213\n");
int tmp___5;
  printf("\nSTMT_EXEC;;4214\n");
size_t ilim;
  printf("\nSTMT_EXEC;;4215\n");
int tmp___6;
  printf("\nSTMT_EXEC;;4216\n");
size_t tmp___7;
  {
    printf("\nSTMT_EXEC;;4218\n");
len = (size_t)0;
    printf("\nSTMT_EXEC;;4219\n");
quote_string = (char const *)0;
    printf("\nSTMT_EXEC;;4220\n");
quote_string_len = (size_t)0;
    printf("\nSTMT_EXEC;;4221\n");
backslash_escapes = (_Bool)0;
    printf("\nSTMT_EXEC;;4222\n");
printf("\nFUNC_CALL;__ctype_get_mb_cur_max();\n");
tmp = __ctype_get_mb_cur_max();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;4223\n");
unibyte_locale = (_Bool)(tmp == 1UL);
    printf("\nSTMT_EXEC;;4224\n");
elide_outer_quotes = (_Bool)((flags & 2) != 0);
    printf("\nSTMT_EXEC;;4225\n");
if ((unsigned int)quoting_style == 4U)
    {
      printf("\nSTMT_EXEC;;4227\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;4229\n");
if ((unsigned int)quoting_style == 3U)
    {
      printf("\nSTMT_EXEC;;4231\n");
goto case_3;
    }
    printf("\nSTMT_EXEC;;4233\n");
if ((unsigned int)quoting_style == 5U)
    {
      printf("\nSTMT_EXEC;;4235\n");
goto case_5;
    }
    printf("\nSTMT_EXEC;;4237\n");
if ((unsigned int)quoting_style == 6U)
    {
      printf("\nSTMT_EXEC;;4239\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;4241\n");
if ((unsigned int)quoting_style == 7U)
    {
      printf("\nSTMT_EXEC;;4243\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;4245\n");
if ((unsigned int)quoting_style == 8U)
    {
      printf("\nSTMT_EXEC;;4247\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;4249\n");
if ((unsigned int)quoting_style == 1U)
    {
      printf("\nSTMT_EXEC;;4251\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;4253\n");
if ((unsigned int)quoting_style == 2U)
    {
      printf("\nSTMT_EXEC;;4255\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;4257\n");
if ((unsigned int)quoting_style == 0U)
    {
      printf("\nSTMT_EXEC;;4259\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;4261\n");
goto switch_default;
  case_4:
    {
printf("\nSTMT_EXEC;;4263\n");
quoting_style = (enum quoting_style)3;
}

    printf("\nSTMT_EXEC;;4264\n");
elide_outer_quotes = (_Bool)1;
  case_3:
    {
printf("\nSTMT_EXEC;;4266\n");
if (!elide_outer_quotes)
    {
      printf("\nSTMT_EXEC;;4268\n");
while (1)
      {
        printf("\nSTMT_EXEC;;4270\n");
if (len < buffersize)
        {
          printf("\nSTMT_EXEC;;4272\n");
*(buffer + len) = (char)'\"';
        }
        printf("\nSTMT_EXEC;;4274\n");
len++;
        printf("\nSTMT_EXEC;;4275\n");
goto while_break;
      }
    while_break:;
    }
}

    printf("\nSTMT_EXEC;;4279\n");
backslash_escapes = (_Bool)1;
    printf("\nSTMT_EXEC;;4280\n");
quote_string = "\"";
    printf("\nSTMT_EXEC;;4281\n");
quote_string_len = (size_t)1;
    printf("\nSTMT_EXEC;;4282\n");
goto switch_break;
  case_5:
    {
printf("\nSTMT_EXEC;;4284\n");
backslash_escapes = (_Bool)1;
}

    printf("\nSTMT_EXEC;;4285\n");
elide_outer_quotes = (_Bool)0;
    printf("\nSTMT_EXEC;;4286\n");
goto switch_break;
  case_6:
    {
printf("\nSTMT_EXEC;;4288\n");
if ((unsigned int)quoting_style != 8U)
    {
      printf("\nSTMT_EXEC;;4290\n");
left_quote = gettext_quote("`", quoting_style);
      printf("\nSTMT_EXEC;;4291\n");
right_quote = gettext_quote("\'", quoting_style);
    }
}

    printf("\nSTMT_EXEC;;4293\n");
if (!elide_outer_quotes)
    {
      printf("\nSTMT_EXEC;;4295\n");
quote_string = left_quote;
      printf("\nSTMT_EXEC;;4296\n");
while (1)
      {
        printf("\nSTMT_EXEC;;4298\n");
if (!*quote_string)
        {
          printf("\nSTMT_EXEC;;4300\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;4302\n");
while (1)
        {
          printf("\nSTMT_EXEC;;4304\n");
if (len < buffersize)
          {
            printf("\nSTMT_EXEC;;4306\n");
*(buffer + len) = (char)*quote_string;
          }
          printf("\nSTMT_EXEC;;4308\n");
len++;
          printf("\nSTMT_EXEC;;4309\n");
goto while_break___1;
        }
      while_break___1:
        {
printf("\nSTMT_EXEC;;4312\n");
quote_string++;
}

      }
    while_break___0:;
    }
    printf("\nSTMT_EXEC;;4316\n");
backslash_escapes = (_Bool)1;
    printf("\nSTMT_EXEC;;4317\n");
quote_string = right_quote;
    printf("\nSTMT_EXEC;;4318\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
quote_string_len = strlen(quote_string);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;4319\n");
goto switch_break;
  case_1:
    {
printf("\nSTMT_EXEC;;4321\n");
quoting_style = (enum quoting_style)2;
}

    printf("\nSTMT_EXEC;;4322\n");
elide_outer_quotes = (_Bool)1;
  case_2:
    {
printf("\nSTMT_EXEC;;4324\n");
if (!elide_outer_quotes)
    {
      printf("\nSTMT_EXEC;;4326\n");
while (1)
      {
        printf("\nSTMT_EXEC;;4328\n");
if (len < buffersize)
        {
          printf("\nSTMT_EXEC;;4330\n");
*(buffer + len) = (char)'\'';
        }
        printf("\nSTMT_EXEC;;4332\n");
len++;
        printf("\nSTMT_EXEC;;4333\n");
goto while_break___2;
      }
    while_break___2:;
    }
}

    printf("\nSTMT_EXEC;;4337\n");
quote_string = "\'";
    printf("\nSTMT_EXEC;;4338\n");
quote_string_len = (size_t)1;
    printf("\nSTMT_EXEC;;4339\n");
goto switch_break;
  case_0:
    {
printf("\nSTMT_EXEC;;4341\n");
elide_outer_quotes = (_Bool)0;
}

    printf("\nSTMT_EXEC;;4342\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;4344\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

}

  switch_break:
    {
printf("\nSTMT_EXEC;;4346\n");
i = (size_t)0;
}

    printf("\nSTMT_EXEC;;4347\n");
while (1)
    {
      printf("\nSTMT_EXEC;;4349\n");
if (argsize == 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;4351\n");
tmp___6 = (int const) * (arg + i) == 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;4355\n");
tmp___6 = i == argsize;
      }
      printf("\nSTMT_EXEC;;4357\n");
if (tmp___6)
      {
        printf("\nSTMT_EXEC;;4359\n");
goto while_break___3;
      }
      printf("\nSTMT_EXEC;;4361\n");
is_right_quote = (_Bool)0;
      printf("\nSTMT_EXEC;;4362\n");
if (backslash_escapes)
      {
        printf("\nSTMT_EXEC;;4364\n");
if (quote_string_len)
        {
          printf("\nSTMT_EXEC;;4366\n");
if (i + quote_string_len <= argsize)
          {
            printf("\nSTMT_EXEC;;4368\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___0 = memcmp((void const *)(arg + i), (void const *)quote_string, quote_string_len);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;4369\n");
if (tmp___0 == 0)
            {
              printf("\nSTMT_EXEC;;4371\n");
if (elide_outer_quotes)
              {
                printf("\nSTMT_EXEC;;4373\n");
goto force_outer_quoting_style;
              }
              printf("\nSTMT_EXEC;;4375\n");
is_right_quote = (_Bool)1;
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;4380\n");
c = (unsigned char)*(arg + i);
      printf("\nSTMT_EXEC;;4381\n");
if ((int)c == 0)
      {
        printf("\nSTMT_EXEC;;4383\n");
goto case_0___0;
      }
      printf("\nSTMT_EXEC;;4385\n");
if ((int)c == 63)
      {
        printf("\nSTMT_EXEC;;4387\n");
goto case_63;
      }
      printf("\nSTMT_EXEC;;4389\n");
if ((int)c == 7)
      {
        printf("\nSTMT_EXEC;;4391\n");
goto case_7___0;
      }
      printf("\nSTMT_EXEC;;4393\n");
if ((int)c == 8)
      {
        printf("\nSTMT_EXEC;;4395\n");
goto case_8___0;
      }
      printf("\nSTMT_EXEC;;4397\n");
if ((int)c == 12)
      {
        printf("\nSTMT_EXEC;;4399\n");
goto case_12;
      }
      printf("\nSTMT_EXEC;;4401\n");
if ((int)c == 10)
      {
        printf("\nSTMT_EXEC;;4403\n");
goto case_10;
      }
      printf("\nSTMT_EXEC;;4405\n");
if ((int)c == 13)
      {
        printf("\nSTMT_EXEC;;4407\n");
goto case_13;
      }
      printf("\nSTMT_EXEC;;4409\n");
if ((int)c == 9)
      {
        printf("\nSTMT_EXEC;;4411\n");
goto case_9;
      }
      printf("\nSTMT_EXEC;;4413\n");
if ((int)c == 11)
      {
        printf("\nSTMT_EXEC;;4415\n");
goto case_11;
      }
      printf("\nSTMT_EXEC;;4417\n");
if ((int)c == 92)
      {
        printf("\nSTMT_EXEC;;4419\n");
goto case_92;
      }
      printf("\nSTMT_EXEC;;4421\n");
if ((int)c == 123)
      {
        printf("\nSTMT_EXEC;;4423\n");
goto case_123;
      }
      printf("\nSTMT_EXEC;;4425\n");
if ((int)c == 125)
      {
        printf("\nSTMT_EXEC;;4427\n");
goto case_123;
      }
      printf("\nSTMT_EXEC;;4429\n");
if ((int)c == 35)
      {
        printf("\nSTMT_EXEC;;4431\n");
goto case_35;
      }
      printf("\nSTMT_EXEC;;4433\n");
if ((int)c == 126)
      {
        printf("\nSTMT_EXEC;;4435\n");
goto case_35;
      }
      printf("\nSTMT_EXEC;;4437\n");
if ((int)c == 32)
      {
        printf("\nSTMT_EXEC;;4439\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4441\n");
if ((int)c == 33)
      {
        printf("\nSTMT_EXEC;;4443\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4445\n");
if ((int)c == 34)
      {
        printf("\nSTMT_EXEC;;4447\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4449\n");
if ((int)c == 36)
      {
        printf("\nSTMT_EXEC;;4451\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4453\n");
if ((int)c == 38)
      {
        printf("\nSTMT_EXEC;;4455\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4457\n");
if ((int)c == 40)
      {
        printf("\nSTMT_EXEC;;4459\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4461\n");
if ((int)c == 41)
      {
        printf("\nSTMT_EXEC;;4463\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4465\n");
if ((int)c == 42)
      {
        printf("\nSTMT_EXEC;;4467\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4469\n");
if ((int)c == 59)
      {
        printf("\nSTMT_EXEC;;4471\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4473\n");
if ((int)c == 60)
      {
        printf("\nSTMT_EXEC;;4475\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4477\n");
if ((int)c == 61)
      {
        printf("\nSTMT_EXEC;;4479\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4481\n");
if ((int)c == 62)
      {
        printf("\nSTMT_EXEC;;4483\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4485\n");
if ((int)c == 91)
      {
        printf("\nSTMT_EXEC;;4487\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4489\n");
if ((int)c == 94)
      {
        printf("\nSTMT_EXEC;;4491\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4493\n");
if ((int)c == 96)
      {
        printf("\nSTMT_EXEC;;4495\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4497\n");
if ((int)c == 124)
      {
        printf("\nSTMT_EXEC;;4499\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;4501\n");
if ((int)c == 39)
      {
        printf("\nSTMT_EXEC;;4503\n");
goto case_39___0;
      }
      printf("\nSTMT_EXEC;;4505\n");
if ((int)c == 37)
      {
        printf("\nSTMT_EXEC;;4507\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4509\n");
if ((int)c == 43)
      {
        printf("\nSTMT_EXEC;;4511\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4513\n");
if ((int)c == 44)
      {
        printf("\nSTMT_EXEC;;4515\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4517\n");
if ((int)c == 45)
      {
        printf("\nSTMT_EXEC;;4519\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4521\n");
if ((int)c == 46)
      {
        printf("\nSTMT_EXEC;;4523\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4525\n");
if ((int)c == 47)
      {
        printf("\nSTMT_EXEC;;4527\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4529\n");
if ((int)c == 48)
      {
        printf("\nSTMT_EXEC;;4531\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4533\n");
if ((int)c == 49)
      {
        printf("\nSTMT_EXEC;;4535\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4537\n");
if ((int)c == 50)
      {
        printf("\nSTMT_EXEC;;4539\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4541\n");
if ((int)c == 51)
      {
        printf("\nSTMT_EXEC;;4543\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4545\n");
if ((int)c == 52)
      {
        printf("\nSTMT_EXEC;;4547\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4549\n");
if ((int)c == 53)
      {
        printf("\nSTMT_EXEC;;4551\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4553\n");
if ((int)c == 54)
      {
        printf("\nSTMT_EXEC;;4555\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4557\n");
if ((int)c == 55)
      {
        printf("\nSTMT_EXEC;;4559\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4561\n");
if ((int)c == 56)
      {
        printf("\nSTMT_EXEC;;4563\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4565\n");
if ((int)c == 57)
      {
        printf("\nSTMT_EXEC;;4567\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4569\n");
if ((int)c == 58)
      {
        printf("\nSTMT_EXEC;;4571\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4573\n");
if ((int)c == 65)
      {
        printf("\nSTMT_EXEC;;4575\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4577\n");
if ((int)c == 66)
      {
        printf("\nSTMT_EXEC;;4579\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4581\n");
if ((int)c == 67)
      {
        printf("\nSTMT_EXEC;;4583\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4585\n");
if ((int)c == 68)
      {
        printf("\nSTMT_EXEC;;4587\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4589\n");
if ((int)c == 69)
      {
        printf("\nSTMT_EXEC;;4591\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4593\n");
if ((int)c == 70)
      {
        printf("\nSTMT_EXEC;;4595\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4597\n");
if ((int)c == 71)
      {
        printf("\nSTMT_EXEC;;4599\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4601\n");
if ((int)c == 72)
      {
        printf("\nSTMT_EXEC;;4603\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4605\n");
if ((int)c == 73)
      {
        printf("\nSTMT_EXEC;;4607\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4609\n");
if ((int)c == 74)
      {
        printf("\nSTMT_EXEC;;4611\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4613\n");
if ((int)c == 75)
      {
        printf("\nSTMT_EXEC;;4615\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4617\n");
if ((int)c == 76)
      {
        printf("\nSTMT_EXEC;;4619\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4621\n");
if ((int)c == 77)
      {
        printf("\nSTMT_EXEC;;4623\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4625\n");
if ((int)c == 78)
      {
        printf("\nSTMT_EXEC;;4627\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4629\n");
if ((int)c == 79)
      {
        printf("\nSTMT_EXEC;;4631\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4633\n");
if ((int)c == 80)
      {
        printf("\nSTMT_EXEC;;4635\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4637\n");
if ((int)c == 81)
      {
        printf("\nSTMT_EXEC;;4639\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4641\n");
if ((int)c == 82)
      {
        printf("\nSTMT_EXEC;;4643\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4645\n");
if ((int)c == 83)
      {
        printf("\nSTMT_EXEC;;4647\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4649\n");
if ((int)c == 84)
      {
        printf("\nSTMT_EXEC;;4651\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4653\n");
if ((int)c == 85)
      {
        printf("\nSTMT_EXEC;;4655\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4657\n");
if ((int)c == 86)
      {
        printf("\nSTMT_EXEC;;4659\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4661\n");
if ((int)c == 87)
      {
        printf("\nSTMT_EXEC;;4663\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4665\n");
if ((int)c == 88)
      {
        printf("\nSTMT_EXEC;;4667\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4669\n");
if ((int)c == 89)
      {
        printf("\nSTMT_EXEC;;4671\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4673\n");
if ((int)c == 90)
      {
        printf("\nSTMT_EXEC;;4675\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4677\n");
if ((int)c == 93)
      {
        printf("\nSTMT_EXEC;;4679\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4681\n");
if ((int)c == 95)
      {
        printf("\nSTMT_EXEC;;4683\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4685\n");
if ((int)c == 97)
      {
        printf("\nSTMT_EXEC;;4687\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4689\n");
if ((int)c == 98)
      {
        printf("\nSTMT_EXEC;;4691\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4693\n");
if ((int)c == 99)
      {
        printf("\nSTMT_EXEC;;4695\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4697\n");
if ((int)c == 100)
      {
        printf("\nSTMT_EXEC;;4699\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4701\n");
if ((int)c == 101)
      {
        printf("\nSTMT_EXEC;;4703\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4705\n");
if ((int)c == 102)
      {
        printf("\nSTMT_EXEC;;4707\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4709\n");
if ((int)c == 103)
      {
        printf("\nSTMT_EXEC;;4711\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4713\n");
if ((int)c == 104)
      {
        printf("\nSTMT_EXEC;;4715\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4717\n");
if ((int)c == 105)
      {
        printf("\nSTMT_EXEC;;4719\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4721\n");
if ((int)c == 106)
      {
        printf("\nSTMT_EXEC;;4723\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4725\n");
if ((int)c == 107)
      {
        printf("\nSTMT_EXEC;;4727\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4729\n");
if ((int)c == 108)
      {
        printf("\nSTMT_EXEC;;4731\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4733\n");
if ((int)c == 109)
      {
        printf("\nSTMT_EXEC;;4735\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4737\n");
if ((int)c == 110)
      {
        printf("\nSTMT_EXEC;;4739\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4741\n");
if ((int)c == 111)
      {
        printf("\nSTMT_EXEC;;4743\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4745\n");
if ((int)c == 112)
      {
        printf("\nSTMT_EXEC;;4747\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4749\n");
if ((int)c == 113)
      {
        printf("\nSTMT_EXEC;;4751\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4753\n");
if ((int)c == 114)
      {
        printf("\nSTMT_EXEC;;4755\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4757\n");
if ((int)c == 115)
      {
        printf("\nSTMT_EXEC;;4759\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4761\n");
if ((int)c == 116)
      {
        printf("\nSTMT_EXEC;;4763\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4765\n");
if ((int)c == 117)
      {
        printf("\nSTMT_EXEC;;4767\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4769\n");
if ((int)c == 118)
      {
        printf("\nSTMT_EXEC;;4771\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4773\n");
if ((int)c == 119)
      {
        printf("\nSTMT_EXEC;;4775\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4777\n");
if ((int)c == 120)
      {
        printf("\nSTMT_EXEC;;4779\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4781\n");
if ((int)c == 121)
      {
        printf("\nSTMT_EXEC;;4783\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4785\n");
if ((int)c == 122)
      {
        printf("\nSTMT_EXEC;;4787\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;4789\n");
goto switch_default___2;
    case_0___0:
      {
printf("\nSTMT_EXEC;;4791\n");
if (backslash_escapes)
      {
        printf("\nSTMT_EXEC;;4793\n");
if (elide_outer_quotes)
        {
          printf("\nSTMT_EXEC;;4795\n");
goto force_outer_quoting_style;
        }
        printf("\nSTMT_EXEC;;4797\n");
while (1)
        {
          printf("\nSTMT_EXEC;;4799\n");
if (len < buffersize)
          {
            printf("\nSTMT_EXEC;;4801\n");
*(buffer + len) = (char)'\\';
          }
          printf("\nSTMT_EXEC;;4803\n");
len++;
          printf("\nSTMT_EXEC;;4804\n");
goto while_break___4;
        }
      while_break___4:;
        printf("\nSTMT_EXEC;;4807\n");
if (i + 1UL < argsize)
        {
          printf("\nSTMT_EXEC;;4809\n");
if (48 <= (int)*(arg + (i + 1UL)))
          {
            printf("\nSTMT_EXEC;;4811\n");
if ((int const) * (arg + (i + 1UL)) <= 57)
            {
              printf("\nSTMT_EXEC;;4813\n");
while (1)
              {
                printf("\nSTMT_EXEC;;4815\n");
if (len < buffersize)
                {
                  printf("\nSTMT_EXEC;;4817\n");
*(buffer + len) = (char)'0';
                }
                printf("\nSTMT_EXEC;;4819\n");
len++;
                printf("\nSTMT_EXEC;;4820\n");
goto while_break___5;
              }
            while_break___5:;
              printf("\nSTMT_EXEC;;4823\n");
while (1)
              {
                printf("\nSTMT_EXEC;;4825\n");
if (len < buffersize)
                {
                  printf("\nSTMT_EXEC;;4827\n");
*(buffer + len) = (char)'0';
                }
                printf("\nSTMT_EXEC;;4829\n");
len++;
                printf("\nSTMT_EXEC;;4830\n");
goto while_break___6;
              }
            while_break___6:;
            }
          }
        }
        printf("\nSTMT_EXEC;;4836\n");
c = (unsigned char)'0';
      }
      else
      {
        printf("\nSTMT_EXEC;;4840\n");
if (flags & 1)
        {
          printf("\nSTMT_EXEC;;4842\n");
goto __Cont;
        }
      }
}

      printf("\nSTMT_EXEC;;4845\n");
goto switch_break___0;
    case_63:
      {
printf("\nSTMT_EXEC;;4847\n");
if ((unsigned int)quoting_style == 2U)
      {
        printf("\nSTMT_EXEC;;4849\n");
goto case_2___0;
      }
}

      printf("\nSTMT_EXEC;;4851\n");
if ((unsigned int)quoting_style == 3U)
      {
        printf("\nSTMT_EXEC;;4853\n");
goto case_3___0;
      }
      printf("\nSTMT_EXEC;;4855\n");
goto switch_default___1;
    case_2___0:
      {
printf("\nSTMT_EXEC;;4857\n");
if (elide_outer_quotes)
      {
        printf("\nSTMT_EXEC;;4859\n");
goto force_outer_quoting_style;
      }
}

      printf("\nSTMT_EXEC;;4861\n");
goto switch_break___1;
    case_3___0:
      {
printf("\nSTMT_EXEC;;4863\n");
if (flags & 4)
      {
        printf("\nSTMT_EXEC;;4865\n");
if (i + 2UL < argsize)
        {
          printf("\nSTMT_EXEC;;4867\n");
if ((int const) * (arg + (i + 1UL)) == 63)
          {
            printf("\nSTMT_EXEC;;4869\n");
if ((int const) * (arg + (i + 2UL)) == 33)
            {
              printf("\nSTMT_EXEC;;4871\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4873\n");
if ((int const) * (arg + (i + 2UL)) == 39)
            {
              printf("\nSTMT_EXEC;;4875\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4877\n");
if ((int const) * (arg + (i + 2UL)) == 40)
            {
              printf("\nSTMT_EXEC;;4879\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4881\n");
if ((int const) * (arg + (i + 2UL)) == 41)
            {
              printf("\nSTMT_EXEC;;4883\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4885\n");
if ((int const) * (arg + (i + 2UL)) == 45)
            {
              printf("\nSTMT_EXEC;;4887\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4889\n");
if ((int const) * (arg + (i + 2UL)) == 47)
            {
              printf("\nSTMT_EXEC;;4891\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4893\n");
if ((int const) * (arg + (i + 2UL)) == 60)
            {
              printf("\nSTMT_EXEC;;4895\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4897\n");
if ((int const) * (arg + (i + 2UL)) == 61)
            {
              printf("\nSTMT_EXEC;;4899\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4901\n");
if ((int const) * (arg + (i + 2UL)) == 62)
            {
              printf("\nSTMT_EXEC;;4903\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;4905\n");
goto switch_default___0;
          case_33:
            {
printf("\nSTMT_EXEC;;4907\n");
if (elide_outer_quotes)
            {
              printf("\nSTMT_EXEC;;4909\n");
goto force_outer_quoting_style;
            }
}

            printf("\nSTMT_EXEC;;4911\n");
c = (unsigned char)*(arg + (i + 2UL));
            printf("\nSTMT_EXEC;;4912\n");
i += 2UL;
            printf("\nSTMT_EXEC;;4913\n");
while (1)
            {
              printf("\nSTMT_EXEC;;4915\n");
if (len < buffersize)
              {
                printf("\nSTMT_EXEC;;4917\n");
*(buffer + len) = (char)'?';
              }
              printf("\nSTMT_EXEC;;4919\n");
len++;
              printf("\nSTMT_EXEC;;4920\n");
goto while_break___7;
            }
          while_break___7:;
            printf("\nSTMT_EXEC;;4923\n");
while (1)
            {
              printf("\nSTMT_EXEC;;4925\n");
if (len < buffersize)
              {
                printf("\nSTMT_EXEC;;4927\n");
*(buffer + len) = (char)'\"';
              }
              printf("\nSTMT_EXEC;;4929\n");
len++;
              printf("\nSTMT_EXEC;;4930\n");
goto while_break___8;
            }
          while_break___8:;
            printf("\nSTMT_EXEC;;4933\n");
while (1)
            {
              printf("\nSTMT_EXEC;;4935\n");
if (len < buffersize)
              {
                printf("\nSTMT_EXEC;;4937\n");
*(buffer + len) = (char)'\"';
              }
              printf("\nSTMT_EXEC;;4939\n");
len++;
              printf("\nSTMT_EXEC;;4940\n");
goto while_break___9;
            }
          while_break___9:;
            printf("\nSTMT_EXEC;;4943\n");
while (1)
            {
              printf("\nSTMT_EXEC;;4945\n");
if (len < buffersize)
              {
                printf("\nSTMT_EXEC;;4947\n");
*(buffer + len) = (char)'?';
              }
              printf("\nSTMT_EXEC;;4949\n");
len++;
              printf("\nSTMT_EXEC;;4950\n");
goto while_break___10;
            }
          while_break___10:;
            printf("\nSTMT_EXEC;;4953\n");
goto switch_break___2;
          switch_default___0:
            {
printf("\nSTMT_EXEC;;4955\n");
goto switch_break___2;
}

          switch_break___2:;
          }
        }
      }
}

      printf("\nSTMT_EXEC;;4960\n");
goto switch_break___1;
    switch_default___1:
      {
printf("\nSTMT_EXEC;;4962\n");
goto switch_break___1;
}

    switch_break___1:;
      printf("\nSTMT_EXEC;;4964\n");
goto switch_break___0;
    case_7___0:
      {
printf("\nSTMT_EXEC;;4966\n");
esc = (unsigned char)'a';
}

      printf("\nSTMT_EXEC;;4967\n");
goto c_escape;
    case_8___0:
      {
printf("\nSTMT_EXEC;;4969\n");
esc = (unsigned char)'b';
}

      printf("\nSTMT_EXEC;;4970\n");
goto c_escape;
    case_12:
      {
printf("\nSTMT_EXEC;;4972\n");
esc = (unsigned char)'f';
}

      printf("\nSTMT_EXEC;;4973\n");
goto c_escape;
    case_10:
      {
printf("\nSTMT_EXEC;;4975\n");
esc = (unsigned char)'n';
}

      printf("\nSTMT_EXEC;;4976\n");
goto c_and_shell_escape;
    case_13:
      {
printf("\nSTMT_EXEC;;4978\n");
esc = (unsigned char)'r';
}

      printf("\nSTMT_EXEC;;4979\n");
goto c_and_shell_escape;
    case_9:
      {
printf("\nSTMT_EXEC;;4981\n");
esc = (unsigned char)'t';
}

      printf("\nSTMT_EXEC;;4982\n");
goto c_and_shell_escape;
    case_11:
      {
printf("\nSTMT_EXEC;;4984\n");
esc = (unsigned char)'v';
}

      printf("\nSTMT_EXEC;;4985\n");
goto c_escape;
    case_92:
      {
printf("\nSTMT_EXEC;;4987\n");
esc = c;
}

      printf("\nSTMT_EXEC;;4988\n");
if (backslash_escapes)
      {
        printf("\nSTMT_EXEC;;4990\n");
if (elide_outer_quotes)
        {
          printf("\nSTMT_EXEC;;4992\n");
if (quote_string_len)
          {
            printf("\nSTMT_EXEC;;4994\n");
goto store_c;
          }
        }
      }
    c_and_shell_escape:
      {
printf("\nSTMT_EXEC;;4999\n");
if ((unsigned int)quoting_style == 2U)
      {
        printf("\nSTMT_EXEC;;5001\n");
if (elide_outer_quotes)
        {
          printf("\nSTMT_EXEC;;5003\n");
goto force_outer_quoting_style;
        }
      }
}

    c_escape:
      {
printf("\nSTMT_EXEC;;5007\n");
if (backslash_escapes)
      {
        printf("\nSTMT_EXEC;;5009\n");
c = esc;
        printf("\nSTMT_EXEC;;5010\n");
goto store_escape;
      }
}

      printf("\nSTMT_EXEC;;5012\n");
goto switch_break___0;
    case_123:
      {
printf("\nSTMT_EXEC;;5014\n");
if (argsize == 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;5016\n");
tmp___1 = (int const) * (arg + 1) == 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;5020\n");
tmp___1 = argsize == 1UL;
      }
}

      printf("\nSTMT_EXEC;;5022\n");
if (!tmp___1)
      {
        printf("\nSTMT_EXEC;;5024\n");
goto switch_break___0;
      }
    case_35:
      {
printf("\nSTMT_EXEC;;5027\n");
if (i != 0UL)
      {
        printf("\nSTMT_EXEC;;5029\n");
goto switch_break___0;
      }
}

    case_32:
      {
printf("\nSTMT_EXEC;;5032\n");
if ((unsigned int)quoting_style == 2U)
      {
        printf("\nSTMT_EXEC;;5034\n");
if (elide_outer_quotes)
        {
          printf("\nSTMT_EXEC;;5036\n");
goto force_outer_quoting_style;
        }
      }
}

      printf("\nSTMT_EXEC;;5039\n");
goto switch_break___0;
    case_39___0:
      {
printf("\nSTMT_EXEC;;5041\n");
if ((unsigned int)quoting_style == 2U)
      {
        printf("\nSTMT_EXEC;;5043\n");
if (elide_outer_quotes)
        {
          printf("\nSTMT_EXEC;;5045\n");
goto force_outer_quoting_style;
        }
        printf("\nSTMT_EXEC;;5047\n");
while (1)
        {
          printf("\nSTMT_EXEC;;5049\n");
if (len < buffersize)
          {
            printf("\nSTMT_EXEC;;5051\n");
*(buffer + len) = (char)'\'';
          }
          printf("\nSTMT_EXEC;;5053\n");
len++;
          printf("\nSTMT_EXEC;;5054\n");
goto while_break___11;
        }
      while_break___11:;
        printf("\nSTMT_EXEC;;5057\n");
while (1)
        {
          printf("\nSTMT_EXEC;;5059\n");
if (len < buffersize)
          {
            printf("\nSTMT_EXEC;;5061\n");
*(buffer + len) = (char)'\\';
          }
          printf("\nSTMT_EXEC;;5063\n");
len++;
          printf("\nSTMT_EXEC;;5064\n");
goto while_break___12;
        }
      while_break___12:;
        printf("\nSTMT_EXEC;;5067\n");
while (1)
        {
          printf("\nSTMT_EXEC;;5069\n");
if (len < buffersize)
          {
            printf("\nSTMT_EXEC;;5071\n");
*(buffer + len) = (char)'\'';
          }
          printf("\nSTMT_EXEC;;5073\n");
len++;
          printf("\nSTMT_EXEC;;5074\n");
goto while_break___13;
        }
      while_break___13:;
      }
}

      printf("\nSTMT_EXEC;;5078\n");
goto switch_break___0;
    case_37:
      {
printf("\nSTMT_EXEC;;5080\n");
goto switch_break___0;
}

    switch_default___2:
      {
printf("\nSTMT_EXEC;;5082\n");
if (unibyte_locale)
      {
        printf("\nSTMT_EXEC;;5084\n");
m = (size_t)1;
        printf("\nSTMT_EXEC;;5085\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___2 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5086\n");
printable = (_Bool)(((int const) * (*tmp___2 + (int)c) & 16384) != 0);
      }
      else
      {
        printf("\nSTMT_EXEC;;5090\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(&mbstate), 0, sizeof(mbstate));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5091\n");
m = (size_t)0;
        printf("\nSTMT_EXEC;;5092\n");
printable = (_Bool)1;
        printf("\nSTMT_EXEC;;5093\n");
if (argsize == 0xffffffffffffffffUL)
        {
          printf("\nSTMT_EXEC;;5095\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
argsize = strlen(arg);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;5097\n");
while (1)
        {
          printf("\nSTMT_EXEC;;5099\n");
printf("\nFUNC_CALL;mbrtowc(wchar_t *__restrict,const char *__restrict,size_t,mbstate_t *__restrict);\n");
tmp___3 = mbrtowc(&w, arg + (i + m), argsize - (i + m), &mbstate);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5100\n");
bytes = tmp___3;
          printf("\nSTMT_EXEC;;5101\n");
if (bytes == 0UL)
          {
            printf("\nSTMT_EXEC;;5103\n");
goto while_break___14;
          }
          else
          {
            printf("\nSTMT_EXEC;;5107\n");
if (bytes == 0xffffffffffffffffUL)
            {
              printf("\nSTMT_EXEC;;5109\n");
printable = (_Bool)0;
              printf("\nSTMT_EXEC;;5110\n");
goto while_break___14;
            }
            else
            {
              printf("\nSTMT_EXEC;;5114\n");
if (bytes == 0xfffffffffffffffeUL)
              {
                printf("\nSTMT_EXEC;;5116\n");
printable = (_Bool)0;
                printf("\nSTMT_EXEC;;5117\n");
while (1)
                {
                  printf("\nSTMT_EXEC;;5119\n");
if (i + m < argsize)
                  {
                    printf("\nSTMT_EXEC;;5121\n");
if (!*(arg + (i + m)))
                    {
                      printf("\nSTMT_EXEC;;5123\n");
goto while_break___15;
                    }
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;5128\n");
goto while_break___15;
                  }
                  printf("\nSTMT_EXEC;;5130\n");
m++;
                }
              while_break___15:;
                printf("\nSTMT_EXEC;;5133\n");
goto while_break___14;
              }
              else
              {
                printf("\nSTMT_EXEC;;5137\n");
if (elide_outer_quotes)
                {
                  printf("\nSTMT_EXEC;;5139\n");
if ((unsigned int)quoting_style == 2U)
                  {
                    printf("\nSTMT_EXEC;;5141\n");
j = (size_t)1;
                    printf("\nSTMT_EXEC;;5142\n");
while (1)
                    {
                      printf("\nSTMT_EXEC;;5144\n");
if (!(j < bytes))
                      {
                        printf("\nSTMT_EXEC;;5146\n");
goto while_break___16;
                      }
                      printf("\nSTMT_EXEC;;5148\n");
if ((int const) * (arg + ((i + m) + j)) == 91)
                      {
                        printf("\nSTMT_EXEC;;5150\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;5152\n");
if ((int const) * (arg + ((i + m) + j)) == 92)
                      {
                        printf("\nSTMT_EXEC;;5154\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;5156\n");
if ((int const) * (arg + ((i + m) + j)) == 94)
                      {
                        printf("\nSTMT_EXEC;;5158\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;5160\n");
if ((int const) * (arg + ((i + m) + j)) == 96)
                      {
                        printf("\nSTMT_EXEC;;5162\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;5164\n");
if ((int const) * (arg + ((i + m) + j)) == 124)
                      {
                        printf("\nSTMT_EXEC;;5166\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;5168\n");
goto switch_default___3;
                    case_91___0:
                      {
printf("\nSTMT_EXEC;;5170\n");
goto force_outer_quoting_style;
}

                    switch_default___3:
                      {
printf("\nSTMT_EXEC;;5172\n");
goto switch_break___3;
}

                    switch_break___3:
                      {
printf("\nSTMT_EXEC;;5174\n");
j++;
}

                    }
                  while_break___16:;
                  }
                }
                printf("\nSTMT_EXEC;;5179\n");
printf("\nFUNC_CALL;iswprint(wint_t);\n");
tmp___4 = iswprint((wint_t)w);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;5180\n");
if (!tmp___4)
                {
                  printf("\nSTMT_EXEC;;5182\n");
printable = (_Bool)0;
                }
                printf("\nSTMT_EXEC;;5184\n");
m += bytes;
              }
            }
          }
          printf("\nSTMT_EXEC;;5188\n");
printf("\nFUNC_CALL;mbsinit(const mbstate_t *);\n");
tmp___5 = mbsinit((mbstate_t const *)(&mbstate));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5189\n");
if (tmp___5)
          {
            printf("\nSTMT_EXEC;;5191\n");
goto while_break___14;
          }
        }
      while_break___14:;
      }
}

      printf("\nSTMT_EXEC;;5196\n");
if (1UL < m)
      {
        printf("\nSTMT_EXEC;;5198\n");
goto _L___0;
      }
      else
      {
        printf("\nSTMT_EXEC;;5202\n");
if (backslash_escapes)
        {
          printf("\nSTMT_EXEC;;5204\n");
if (!printable)
          {
          _L___0:
            {
printf("\nSTMT_EXEC;;5207\n");
ilim = i + m;
}

            printf("\nSTMT_EXEC;;5208\n");
while (1)
            {
              printf("\nSTMT_EXEC;;5210\n");
if (backslash_escapes)
              {
                printf("\nSTMT_EXEC;;5212\n");
if (!printable)
                {
                  printf("\nSTMT_EXEC;;5214\n");
if (elide_outer_quotes)
                  {
                    printf("\nSTMT_EXEC;;5216\n");
goto force_outer_quoting_style;
                  }
                  printf("\nSTMT_EXEC;;5218\n");
while (1)
                  {
                    printf("\nSTMT_EXEC;;5220\n");
if (len < buffersize)
                    {
                      printf("\nSTMT_EXEC;;5222\n");
*(buffer + len) = (char)'\\';
                    }
                    printf("\nSTMT_EXEC;;5224\n");
len++;
                    printf("\nSTMT_EXEC;;5225\n");
goto while_break___18;
                  }
                while_break___18:;
                  printf("\nSTMT_EXEC;;5228\n");
while (1)
                  {
                    printf("\nSTMT_EXEC;;5230\n");
if (len < buffersize)
                    {
                      printf("\nSTMT_EXEC;;5232\n");
*(buffer + len) = (char)(48 + ((int)c >> 6));
                    }
                    printf("\nSTMT_EXEC;;5234\n");
len++;
                    printf("\nSTMT_EXEC;;5235\n");
goto while_break___19;
                  }
                while_break___19:;
                  printf("\nSTMT_EXEC;;5238\n");
while (1)
                  {
                    printf("\nSTMT_EXEC;;5240\n");
if (len < buffersize)
                    {
                      printf("\nSTMT_EXEC;;5242\n");
*(buffer + len) = (char)(48 + (((int)c >> 3) & 7));
                    }
                    printf("\nSTMT_EXEC;;5244\n");
len++;
                    printf("\nSTMT_EXEC;;5245\n");
goto while_break___20;
                  }
                while_break___20:
                  {
printf("\nSTMT_EXEC;;5248\n");
c = (unsigned char)(48 + ((int)c & 7));
}

                }
                else
                {
                  printf("\nSTMT_EXEC;;5252\n");
goto _L;
                }
              }
              else
              {
              _L:
                {
printf("\nSTMT_EXEC;;5258\n");
if (is_right_quote)
                {
                  printf("\nSTMT_EXEC;;5260\n");
while (1)
                  {
                    printf("\nSTMT_EXEC;;5262\n");
if (len < buffersize)
                    {
                      printf("\nSTMT_EXEC;;5264\n");
*(buffer + len) = (char)'\\';
                    }
                    printf("\nSTMT_EXEC;;5266\n");
len++;
                    printf("\nSTMT_EXEC;;5267\n");
goto while_break___21;
                  }
                while_break___21:
                  {
printf("\nSTMT_EXEC;;5270\n");
is_right_quote = (_Bool)0;
}

                }
}

              }
              printf("\nSTMT_EXEC;;5273\n");
if (ilim <= i + 1UL)
              {
                printf("\nSTMT_EXEC;;5275\n");
goto while_break___17;
              }
              printf("\nSTMT_EXEC;;5277\n");
while (1)
              {
                printf("\nSTMT_EXEC;;5279\n");
if (len < buffersize)
                {
                  printf("\nSTMT_EXEC;;5281\n");
*(buffer + len) = (char)c;
                }
                printf("\nSTMT_EXEC;;5283\n");
len++;
                printf("\nSTMT_EXEC;;5284\n");
goto while_break___22;
              }
            while_break___22:
              {
printf("\nSTMT_EXEC;;5287\n");
i++;
}

              printf("\nSTMT_EXEC;;5288\n");
c = (unsigned char)*(arg + i);
            }
          while_break___17:;
            printf("\nSTMT_EXEC;;5291\n");
goto store_c;
          }
        }
      }
    switch_break___0:;
      printf("\nSTMT_EXEC;;5296\n");
if (backslash_escapes)
      {
        printf("\nSTMT_EXEC;;5298\n");
goto _L___3;
      }
      else
      {
        printf("\nSTMT_EXEC;;5302\n");
if (elide_outer_quotes)
        {
        _L___3:
          {
printf("\nSTMT_EXEC;;5305\n");
if (quote_these_too)
          {
            printf("\nSTMT_EXEC;;5307\n");
if (!(*(quote_these_too + (unsigned long)c / (sizeof(int) * 8UL)) & (unsigned int const)(1 << (unsigned long)c % (sizeof(int) * 8UL))))
            {
              printf("\nSTMT_EXEC;;5309\n");
goto _L___2;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;5314\n");
goto _L___2;
          }
}

        }
        else
        {
        _L___2:
          {
printf("\nSTMT_EXEC;;5320\n");
if (!is_right_quote)
          {
            printf("\nSTMT_EXEC;;5322\n");
goto store_c;
          }
}

        }
      }
    store_escape:
      {
printf("\nSTMT_EXEC;;5327\n");
if (elide_outer_quotes)
      {
        printf("\nSTMT_EXEC;;5329\n");
goto force_outer_quoting_style;
      }
}

      printf("\nSTMT_EXEC;;5331\n");
while (1)
      {
        printf("\nSTMT_EXEC;;5333\n");
if (len < buffersize)
        {
          printf("\nSTMT_EXEC;;5335\n");
*(buffer + len) = (char)'\\';
        }
        printf("\nSTMT_EXEC;;5337\n");
len++;
        printf("\nSTMT_EXEC;;5338\n");
goto while_break___23;
      }
    while_break___23:;
    store_c:
      {
printf("\nSTMT_EXEC;;5342\n");
while (1)
      {
        printf("\nSTMT_EXEC;;5344\n");
if (len < buffersize)
        {
          printf("\nSTMT_EXEC;;5346\n");
*(buffer + len) = (char)c;
        }
        printf("\nSTMT_EXEC;;5348\n");
len++;
        printf("\nSTMT_EXEC;;5349\n");
goto while_break___24;
      }
}

    while_break___24:;
    __Cont:
      {
printf("\nSTMT_EXEC;;5353\n");
i++;
}

    }
  while_break___3:;
    printf("\nSTMT_EXEC;;5356\n");
if (len == 0UL)
    {
      printf("\nSTMT_EXEC;;5358\n");
if ((unsigned int)quoting_style == 2U)
      {
        printf("\nSTMT_EXEC;;5360\n");
if (elide_outer_quotes)
        {
          printf("\nSTMT_EXEC;;5362\n");
goto force_outer_quoting_style;
        }
      }
    }
    printf("\nSTMT_EXEC;;5366\n");
if (quote_string)
    {
      printf("\nSTMT_EXEC;;5368\n");
if (!elide_outer_quotes)
      {
        printf("\nSTMT_EXEC;;5370\n");
while (1)
        {
          printf("\nSTMT_EXEC;;5372\n");
if (!*quote_string)
          {
            printf("\nSTMT_EXEC;;5374\n");
goto while_break___25;
          }
          printf("\nSTMT_EXEC;;5376\n");
while (1)
          {
            printf("\nSTMT_EXEC;;5378\n");
if (len < buffersize)
            {
              printf("\nSTMT_EXEC;;5380\n");
*(buffer + len) = (char)*quote_string;
            }
            printf("\nSTMT_EXEC;;5382\n");
len++;
            printf("\nSTMT_EXEC;;5383\n");
goto while_break___26;
          }
        while_break___26:
          {
printf("\nSTMT_EXEC;;5386\n");
quote_string++;
}

        }
      while_break___25:;
      }
    }
    printf("\nSTMT_EXEC;;5391\n");
if (len < buffersize)
    {
      printf("\nSTMT_EXEC;;5393\n");
*(buffer + len) = (char)'\000';
    }
    printf("\nSTMT_EXEC;;5395\n");
printf("\nFUNC_RETURN;;\n");
return (len);
  force_outer_quoting_style:
    {
printf("\nSTMT_EXEC;;5397\n");
tmp___7 = quotearg_buffer_restyled(buffer, buffersize, arg, argsize, quoting_style, flags & -3, (unsigned int const *)((void *)0), left_quote, right_quote);
}

    printf("\nSTMT_EXEC;;5398\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___7);
  }
printf("\nFUNC_RETURN;;\n");
}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize, struct quoting_options const *options)
{
  printf("\nFUNC_CALL;quotearg_n_options(int,const char *,size_t,const struct quoting_options *);\n");
printf("\nSTMT_EXEC;;5407\n");
int e;
  printf("\nSTMT_EXEC;;5408\n");
int *tmp;
  printf("\nSTMT_EXEC;;5409\n");
unsigned int n0;
  printf("\nSTMT_EXEC;;5410\n");
struct slotvec *sv;
  printf("\nSTMT_EXEC;;5411\n");
size_t n1;
  printf("\nSTMT_EXEC;;5412\n");
_Bool preallocated;
  printf("\nSTMT_EXEC;;5413\n");
int tmp___0;
  printf("\nSTMT_EXEC;;5414\n");
struct slotvec *tmp___1;
  printf("\nSTMT_EXEC;;5415\n");
size_t size;
  printf("\nSTMT_EXEC;;5416\n");
char *val;
  printf("\nSTMT_EXEC;;5417\n");
int flags;
  printf("\nSTMT_EXEC;;5418\n");
size_t qsize;
  printf("\nSTMT_EXEC;;5419\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;5420\n");
int *tmp___3;
  {
    printf("\nSTMT_EXEC;;5422\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5423\n");
e = *tmp;
    printf("\nSTMT_EXEC;;5424\n");
n0 = (unsigned int)n;
    printf("\nSTMT_EXEC;;5425\n");
sv = slotvec;
    printf("\nSTMT_EXEC;;5426\n");
if (n < 0)
    {
      printf("\nSTMT_EXEC;;5428\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;5430\n");
if (nslots <= n0)
    {
      printf("\nSTMT_EXEC;;5432\n");
n1 = (size_t)(n0 + 1U);
      printf("\nSTMT_EXEC;;5433\n");
preallocated = (_Bool)((unsigned long)sv == (unsigned long)(&slotvec0));
      printf("\nSTMT_EXEC;;5434\n");
if (sizeof(ptrdiff_t) <= sizeof(size_t))
      {
        printf("\nSTMT_EXEC;;5436\n");
tmp___0 = -1;
      }
      else
      {
        printf("\nSTMT_EXEC;;5440\n");
tmp___0 = -2;
      }
      printf("\nSTMT_EXEC;;5442\n");
if ((size_t)tmp___0 / sizeof(*sv) < n1)
      {
        printf("\nSTMT_EXEC;;5444\n");
xalloc_die();
      }
      printf("\nSTMT_EXEC;;5446\n");
if (preallocated)
      {
        printf("\nSTMT_EXEC;;5448\n");
tmp___1 = (struct slotvec *)((void *)0);
      }
      else
      {
        printf("\nSTMT_EXEC;;5452\n");
tmp___1 = sv;
      }
      printf("\nSTMT_EXEC;;5454\n");
sv = (struct slotvec *)xrealloc((void *)tmp___1, n1 * sizeof(*sv));
      printf("\nSTMT_EXEC;;5455\n");
slotvec = sv;
      printf("\nSTMT_EXEC;;5456\n");
if (preallocated)
      {
        printf("\nSTMT_EXEC;;5458\n");
*sv = slotvec0;
      }
      printf("\nSTMT_EXEC;;5460\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(sv + nslots), 0, (n1 - (size_t)nslots) * sizeof(*sv));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5461\n");
nslots = (unsigned int)n1;
    }
    printf("\nSTMT_EXEC;;5463\n");
size = (sv + n)->size;
    printf("\nSTMT_EXEC;;5464\n");
val = (sv + n)->val;
    printf("\nSTMT_EXEC;;5465\n");
flags = (int)(options->flags | 1);
    printf("\nSTMT_EXEC;;5466\n");
tmp___2 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style)options->style, flags, (unsigned int const *)(options->quote_these_too), (char const *)options->left_quote, (char const *)options->right_quote);
    printf("\nSTMT_EXEC;;5467\n");
qsize = tmp___2;
    printf("\nSTMT_EXEC;;5468\n");
if (size <= qsize)
    {
      printf("\nSTMT_EXEC;;5470\n");
size = qsize + 1UL;
      printf("\nSTMT_EXEC;;5471\n");
(sv + n)->size = size;
      printf("\nSTMT_EXEC;;5472\n");
if ((unsigned long)val != (unsigned long)(slot0))
      {
        printf("\nSTMT_EXEC;;5474\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)val);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;5476\n");
val = xcharalloc(size);
      printf("\nSTMT_EXEC;;5477\n");
(sv + n)->val = val;
      printf("\nSTMT_EXEC;;5478\n");
quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style)options->style, flags, (unsigned int const *)(options->quote_these_too), (char const *)options->left_quote, (char const *)options->right_quote);
    }
    printf("\nSTMT_EXEC;;5480\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5481\n");
*tmp___3 = e;
    printf("\nSTMT_EXEC;;5482\n");
printf("\nFUNC_RETURN;;\n");
return (val);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg)
{
  printf("\nFUNC_CALL;quotearg_n_style(int,enum quoting_style,const char *);\n");
printf("\nSTMT_EXEC;;5487\n");
struct quoting_options o;
  printf("\nSTMT_EXEC;;5488\n");
struct quoting_options tmp;
  printf("\nSTMT_EXEC;;5489\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;5491\n");
tmp = quoting_options_from_style(s);
    printf("\nSTMT_EXEC;;5492\n");
o = tmp;
    printf("\nSTMT_EXEC;;5493\n");
tmp___0 = quotearg_n_options(n, arg, (size_t)-1, (struct quoting_options const *)(&o));
    printf("\nSTMT_EXEC;;5494\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_n_style_mem(int n, enum quoting_style s, char const *arg, size_t argsize)
{
  printf("\nFUNC_CALL;quotearg_n_style_mem(int,enum quoting_style,const char *,size_t);\n");
printf("\nSTMT_EXEC;;5499\n");
struct quoting_options o;
  printf("\nSTMT_EXEC;;5500\n");
struct quoting_options tmp;
  printf("\nSTMT_EXEC;;5501\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;5503\n");
tmp = quoting_options_from_style(s);
    printf("\nSTMT_EXEC;;5504\n");
o = tmp;
    printf("\nSTMT_EXEC;;5505\n");
tmp___0 = quotearg_n_options(n, arg, argsize, (struct quoting_options const *)(&o));
    printf("\nSTMT_EXEC;;5506\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch)
{
  printf("\nFUNC_CALL;quotearg_char_mem(const char *,size_t,char);\n");
printf("\nSTMT_EXEC;;5511\n");
struct quoting_options options;
  printf("\nSTMT_EXEC;;5512\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;5514\n");
options = default_quoting_options;
    printf("\nSTMT_EXEC;;5515\n");
set_char_quoting(&options, ch, 1);
    printf("\nSTMT_EXEC;;5516\n");
tmp = quotearg_n_options(0, arg, argsize, (struct quoting_options const *)(&options));
    printf("\nSTMT_EXEC;;5517\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_char(char const *arg, char ch)
{
  printf("\nFUNC_CALL;quotearg_char(const char *,char);\n");
printf("\nSTMT_EXEC;;5522\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;5524\n");
tmp = quotearg_char_mem(arg, (size_t)-1, ch);
    printf("\nSTMT_EXEC;;5525\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_colon(char const *arg)
{
  printf("\nFUNC_CALL;quotearg_colon(const char *);\n");
printf("\nSTMT_EXEC;;5530\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;5532\n");
tmp = quotearg_char(arg, (char)':');
    printf("\nSTMT_EXEC;;5533\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
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
__inline static void mbuiter_multi_next(struct mbuiter_multi *iter)
{
  printf("\nFUNC_CALL;mbuiter_multi_next(struct mbuiter_multi *);\n");
printf("\nSTMT_EXEC;;5556\n");
int tmp;
  printf("\nSTMT_EXEC;;5557\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;5558\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;5559\n");
int tmp___2;
  printf("\nSTMT_EXEC;;5560\n");
_Bool tmp___3;
  {
    printf("\nSTMT_EXEC;;5562\n");
if (iter->next_done)
    {
      printf("\nSTMT_EXEC;;5564\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;5566\n");
if (iter->in_shift)
    {
      printf("\nSTMT_EXEC;;5568\n");
goto with_shift;
    }
    printf("\nSTMT_EXEC;;5570\n");
tmp___3 = is_basic((char)*(iter->cur.ptr));
    printf("\nSTMT_EXEC;;5571\n");
if (tmp___3)
    {
      printf("\nSTMT_EXEC;;5573\n");
iter->cur.bytes = (size_t)1;
      printf("\nSTMT_EXEC;;5574\n");
iter->cur.wc = (wchar_t) * (iter->cur.ptr);
      printf("\nSTMT_EXEC;;5575\n");
iter->cur.wc_valid = (_Bool)1;
    }
    else
    {
      printf("\nSTMT_EXEC;;5579\n");
printf("\nFUNC_CALL;mbsinit(const mbstate_t *);\n");
tmp = mbsinit((mbstate_t const *)(&iter->state));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5580\n");
if (!tmp)
      {
        printf("\nSTMT_EXEC;;5582\n");
printf("\nFUNC_CALL;__assert_fail(const char *,const char *,unsigned int,const char *);\n");
__assert_fail("mbsinit (&iter->state)",
                      "/home/khheo/project/program-reduce/benchmark/"
                      "coreutils-8.16/lib/mbuiter.h",
                      142U, "mbuiter_multi_next");printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;5587\n");
iter->in_shift = (_Bool)1;
    with_shift:
      {
printf("\nSTMT_EXEC;;5589\n");
printf("\nFUNC_CALL;__ctype_get_mb_cur_max();\n");
tmp___0 = __ctype_get_mb_cur_max();printf("\nFUNC_RETURN;;\n");

}

      printf("\nSTMT_EXEC;;5590\n");
tmp___1 = strnlen1(iter->cur.ptr, tmp___0);
      printf("\nSTMT_EXEC;;5591\n");
printf("\nFUNC_CALL;mbrtowc(wchar_t *__restrict,const char *__restrict,size_t,mbstate_t *__restrict);\n");
iter->cur.bytes = mbrtowc(&iter->cur.wc, iter->cur.ptr, tmp___1, &iter->state);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5592\n");
if (iter->cur.bytes == 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;5594\n");
iter->cur.bytes = (size_t)1;
        printf("\nSTMT_EXEC;;5595\n");
iter->cur.wc_valid = (_Bool)0;
      }
      else
      {
        printf("\nSTMT_EXEC;;5599\n");
if (iter->cur.bytes == 0xfffffffffffffffeUL)
        {
          printf("\nSTMT_EXEC;;5601\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
iter->cur.bytes = strlen(iter->cur.ptr);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5602\n");
iter->cur.wc_valid = (_Bool)0;
        }
        else
        {
          printf("\nSTMT_EXEC;;5606\n");
if (iter->cur.bytes == 0UL)
          {
            printf("\nSTMT_EXEC;;5608\n");
iter->cur.bytes = (size_t)1;
            printf("\nSTMT_EXEC;;5609\n");
if (!((int const) * (iter->cur.ptr) == 0))
            {
              printf("\nSTMT_EXEC;;5611\n");
printf("\nFUNC_CALL;__assert_fail(const char *,const char *,unsigned int,const char *);\n");
__assert_fail("*iter->cur.ptr == \'\\0\'",
                            "/home/khheo/project/program-reduce/benchmark/"
                            "coreutils-8.16/lib/mbuiter.h",
                            170U, "mbuiter_multi_next");printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;5616\n");
if (!(iter->cur.wc == 0))
            {
              printf("\nSTMT_EXEC;;5618\n");
printf("\nFUNC_CALL;__assert_fail(const char *,const char *,unsigned int,const char *);\n");
__assert_fail("iter->cur.wc == 0",
                            "/home/khheo/project/program-reduce/benchmark/"
                            "coreutils-8.16/lib/mbuiter.h",
                            171U, "mbuiter_multi_next");printf("\nFUNC_RETURN;;\n");

            }
          }
          printf("\nSTMT_EXEC;;5624\n");
iter->cur.wc_valid = (_Bool)1;
          printf("\nSTMT_EXEC;;5625\n");
printf("\nFUNC_CALL;mbsinit(const mbstate_t *);\n");
tmp___2 = mbsinit((mbstate_t const *)(&iter->state));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5626\n");
if (tmp___2)
          {
            printf("\nSTMT_EXEC;;5628\n");
iter->in_shift = (_Bool)0;
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;5633\n");
iter->next_done = (_Bool)1;
    printf("\nSTMT_EXEC;;5634\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
char const *program_name;
void set_program_name(char const *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strrchr)(char const *__s, int __c) __attribute__((__pure__));
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0)
{
  printf("\nFUNC_CALL;set_program_name(const char *);\n");
printf("\nSTMT_EXEC;;5646\n");
char const *slash;
  printf("\nSTMT_EXEC;;5647\n");
char const *base;
  printf("\nSTMT_EXEC;;5648\n");
int tmp;
  printf("\nSTMT_EXEC;;5649\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;5651\n");
if ((unsigned long)argv0 == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5653\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs("A NULL argv[0] was passed through an exec system call.\n", stderr);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5654\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;5656\n");
printf("\nFUNC_CALL;strrchr(const char *,int);\n");
slash = (char const *)strrchr(argv0, '/');printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5657\n");
if ((unsigned long)slash != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5659\n");
base = slash + 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;5663\n");
base = argv0;
    }
    printf("\nSTMT_EXEC;;5665\n");
if (base - argv0 >= 7L)
    {
      printf("\nSTMT_EXEC;;5667\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___0 = strncmp(base - 7, "/.libs/", (size_t)7);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5668\n");
if (tmp___0 == 0)
      {
        printf("\nSTMT_EXEC;;5670\n");
argv0 = base;
        printf("\nSTMT_EXEC;;5671\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp = strncmp(base, "lt-", (size_t)3);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5672\n");
if (tmp == 0)
        {
          printf("\nSTMT_EXEC;;5674\n");
argv0 = base + 3;
          printf("\nSTMT_EXEC;;5675\n");
program_invocation_short_name = (char *)argv0;
        }
      }
    }
    printf("\nSTMT_EXEC;;5679\n");
program_name = argv0;
    printf("\nSTMT_EXEC;;5680\n");
program_invocation_name = (char *)argv0;
    printf("\nSTMT_EXEC;;5681\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int posix2_version(void);
int posix2_version(void)
{
  printf("\nFUNC_CALL;posix2_version();\n");
printf("\nSTMT_EXEC;;5687\n");
long v;
  printf("\nSTMT_EXEC;;5688\n");
char const *s;
  printf("\nSTMT_EXEC;;5689\n");
char const *tmp;
  printf("\nSTMT_EXEC;;5690\n");
char *e;
  printf("\nSTMT_EXEC;;5691\n");
long i;
  printf("\nSTMT_EXEC;;5692\n");
long tmp___0;
  printf("\nSTMT_EXEC;;5693\n");
long tmp___1;
  printf("\nSTMT_EXEC;;5694\n");
long tmp___2;
  {
    printf("\nSTMT_EXEC;;5696\n");
v = 200809L;
    printf("\nSTMT_EXEC;;5697\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
tmp = (char const *)getenv("_POSIX2_VERSION");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5698\n");
s = tmp;
    printf("\nSTMT_EXEC;;5699\n");
if (s)
    {
      printf("\nSTMT_EXEC;;5701\n");
if (*s)
      {
        printf("\nSTMT_EXEC;;5703\n");
printf("\nFUNC_CALL;strtol(const char *__restrict,char **__restrict,int);\n");
tmp___0 = strtol(s, &e, 10);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5704\n");
i = tmp___0;
        printf("\nSTMT_EXEC;;5705\n");
if (!*e)
        {
          printf("\nSTMT_EXEC;;5707\n");
v = i;
        }
      }
    }
    printf("\nSTMT_EXEC;;5711\n");
if (v < (-0x7FFFFFFF - 1))
    {
      printf("\nSTMT_EXEC;;5713\n");
tmp___2 = (-0x7FFFFFFF - 1);
    }
    else
    {
      printf("\nSTMT_EXEC;;5717\n");
if (v < 2147483647L)
      {
        printf("\nSTMT_EXEC;;5719\n");
tmp___1 = v;
      }
      else
      {
        printf("\nSTMT_EXEC;;5723\n");
tmp___1 = 2147483647L;
      }
      printf("\nSTMT_EXEC;;5725\n");
tmp___2 = tmp___1;
    }
    printf("\nSTMT_EXEC;;5727\n");
printf("\nFUNC_RETURN;;\n");
return ((int)tmp___2);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) stpcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) pipe)(int *__pipedes);
double physmem_total(void);
double physmem_available(void);
extern __attribute__((__nothrow__)) long(__attribute__((__leaf__)) sysconf)(int __name);
double physmem_total(void)
{
  printf("\nFUNC_CALL;physmem_total();\n");
printf("\nSTMT_EXEC;;5737\n");
double pages;
  printf("\nSTMT_EXEC;;5738\n");
double tmp;
  printf("\nSTMT_EXEC;;5739\n");
double pagesize;
  printf("\nSTMT_EXEC;;5740\n");
double tmp___0;
  {
    printf("\nSTMT_EXEC;;5742\n");
printf("\nFUNC_CALL;sysconf(int);\n");
tmp = (double)sysconf(85);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5743\n");
pages = tmp;
    printf("\nSTMT_EXEC;;5744\n");
printf("\nFUNC_CALL;sysconf(int);\n");
tmp___0 = (double)sysconf(30);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5745\n");
pagesize = tmp___0;
    printf("\nSTMT_EXEC;;5746\n");
if ((double)0 <= pages)
    {
      printf("\nSTMT_EXEC;;5748\n");
if ((double)0 <= pagesize)
      {
        printf("\nSTMT_EXEC;;5750\n");
printf("\nFUNC_RETURN;;\n");
return (pages * pagesize);
      }
    }
    printf("\nSTMT_EXEC;;5753\n");
printf("\nFUNC_RETURN;;\n");
return ((double)67108864);
  }
printf("\nFUNC_RETURN;;\n");
}
double physmem_available(void)
{
  printf("\nFUNC_CALL;physmem_available();\n");
printf("\nSTMT_EXEC;;5758\n");
double pages;
  printf("\nSTMT_EXEC;;5759\n");
double tmp;
  printf("\nSTMT_EXEC;;5760\n");
double pagesize;
  printf("\nSTMT_EXEC;;5761\n");
double tmp___0;
  printf("\nSTMT_EXEC;;5762\n");
double tmp___1;
  {
    printf("\nSTMT_EXEC;;5764\n");
printf("\nFUNC_CALL;sysconf(int);\n");
tmp = (double)sysconf(86);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5765\n");
pages = tmp;
    printf("\nSTMT_EXEC;;5766\n");
printf("\nFUNC_CALL;sysconf(int);\n");
tmp___0 = (double)sysconf(30);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5767\n");
pagesize = tmp___0;
    printf("\nSTMT_EXEC;;5768\n");
if ((double)0 <= pages)
    {
      printf("\nSTMT_EXEC;;5770\n");
if ((double)0 <= pagesize)
      {
        printf("\nSTMT_EXEC;;5772\n");
printf("\nFUNC_RETURN;;\n");
return (pages * pagesize);
      }
    }
    printf("\nSTMT_EXEC;;5775\n");
tmp___1 = physmem_total();
    printf("\nSTMT_EXEC;;5776\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1 / (double)4);
  }
printf("\nFUNC_RETURN;;\n");
}
int dup_safer(int fd);
#pragma GCC diagnostic ignored "-Wtype-limits"
unsigned long num_processors(enum nproc_query query);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) __sched_cpucount)(size_t __setsize, cpu_set_t const *__setp);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) sched_getaffinity)(__pid_t __pid, size_t __cpusetsize, cpu_set_t *__cpuset);
static unsigned long num_processors_via_affinity_mask(void)
{
  printf("\nFUNC_CALL;num_processors_via_affinity_mask();\n");
printf("\nSTMT_EXEC;;5786\n");
cpu_set_t set;
  printf("\nSTMT_EXEC;;5787\n");
unsigned long count;
  printf("\nSTMT_EXEC;;5788\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;5790\n");
printf("\nFUNC_CALL;sched_getaffinity(__pid_t,size_t,cpu_set_t *);\n");
tmp = sched_getaffinity(0, sizeof(set), &set);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5791\n");
if (tmp == 0)
    {
      printf("\nSTMT_EXEC;;5793\n");
printf("\nFUNC_CALL;__sched_cpucount(size_t,const cpu_set_t *);\n");
count = (unsigned long)__sched_cpucount(sizeof(cpu_set_t), (cpu_set_t const *)(&set));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5794\n");
if (count > 0UL)
      {
        printf("\nSTMT_EXEC;;5796\n");
printf("\nFUNC_RETURN;;\n");
return (count);
      }
    }
    printf("\nSTMT_EXEC;;5799\n");
printf("\nFUNC_RETURN;;\n");
return (0UL);
  }
printf("\nFUNC_RETURN;;\n");
}
unsigned long num_processors(enum nproc_query query)
{
  printf("\nFUNC_CALL;num_processors(enum nproc_query);\n");
printf("\nSTMT_EXEC;;5804\n");
char const *envvalue;
  printf("\nSTMT_EXEC;;5805\n");
char const *tmp;
  printf("\nSTMT_EXEC;;5806\n");
_Bool tmp___0;
  printf("\nSTMT_EXEC;;5807\n");
char *endptr;
  printf("\nSTMT_EXEC;;5808\n");
unsigned long value;
  printf("\nSTMT_EXEC;;5809\n");
unsigned long tmp___1;
  printf("\nSTMT_EXEC;;5810\n");
_Bool tmp___2;
  printf("\nSTMT_EXEC;;5811\n");
unsigned long tmp___3;
  printf("\nSTMT_EXEC;;5812\n");
_Bool tmp___4;
  printf("\nSTMT_EXEC;;5813\n");
unsigned long nprocs___0;
  printf("\nSTMT_EXEC;;5814\n");
unsigned long tmp___5;
  printf("\nSTMT_EXEC;;5815\n");
long nprocs___1;
  printf("\nSTMT_EXEC;;5816\n");
long tmp___6;
  printf("\nSTMT_EXEC;;5817\n");
long nprocs___2;
  printf("\nSTMT_EXEC;;5818\n");
long tmp___7;
  printf("\nSTMT_EXEC;;5819\n");
unsigned long nprocs_current;
  printf("\nSTMT_EXEC;;5820\n");
unsigned long tmp___8;
  {
    printf("\nSTMT_EXEC;;5822\n");
if ((unsigned int)query == 2U)
    {
      printf("\nSTMT_EXEC;;5824\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
tmp = (char const *)getenv("OMP_NUM_THREADS");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5825\n");
envvalue = tmp;
      printf("\nSTMT_EXEC;;5826\n");
if ((unsigned long)envvalue != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;5828\n");
while (1)
        {
          printf("\nSTMT_EXEC;;5830\n");
if ((int const) * envvalue != 0)
          {
            printf("\nSTMT_EXEC;;5832\n");
tmp___0 = c_isspace((int)*envvalue);
            printf("\nSTMT_EXEC;;5833\n");
if (!tmp___0)
            {
              printf("\nSTMT_EXEC;;5835\n");
goto while_break;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;5840\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;5842\n");
envvalue++;
        }
      while_break:
        {
printf("\nSTMT_EXEC;;5845\n");
tmp___4 = c_isdigit((int)*envvalue);
}

        printf("\nSTMT_EXEC;;5846\n");
if (tmp___4)
        {
          printf("\nSTMT_EXEC;;5848\n");
endptr = (char *)((void *)0);
          printf("\nSTMT_EXEC;;5849\n");
printf("\nFUNC_CALL;strtoul(const char *__restrict,char **__restrict,int);\n");
tmp___1 = strtoul(envvalue, &endptr, 10);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5850\n");
value = tmp___1;
          printf("\nSTMT_EXEC;;5851\n");
if ((unsigned long)endptr != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;5853\n");
while (1)
            {
              printf("\nSTMT_EXEC;;5855\n");
if ((int)*endptr != 0)
              {
                printf("\nSTMT_EXEC;;5857\n");
tmp___2 = c_isspace((int)*endptr);
                printf("\nSTMT_EXEC;;5858\n");
if (!tmp___2)
                {
                  printf("\nSTMT_EXEC;;5860\n");
goto while_break___0;
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;5865\n");
goto while_break___0;
              }
              printf("\nSTMT_EXEC;;5867\n");
endptr++;
            }
          while_break___0:;
            printf("\nSTMT_EXEC;;5870\n");
if ((int)*endptr == 0)
            {
              printf("\nSTMT_EXEC;;5872\n");
if (value > 0UL)
              {
                printf("\nSTMT_EXEC;;5874\n");
tmp___3 = value;
              }
              else
              {
                printf("\nSTMT_EXEC;;5878\n");
tmp___3 = 1UL;
              }
              printf("\nSTMT_EXEC;;5880\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___3);
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;5885\n");
query = (enum nproc_query)1;
    }
    printf("\nSTMT_EXEC;;5887\n");
if ((unsigned int)query == 1U)
    {
      printf("\nSTMT_EXEC;;5889\n");
tmp___5 = num_processors_via_affinity_mask();
      printf("\nSTMT_EXEC;;5890\n");
nprocs___0 = tmp___5;
      printf("\nSTMT_EXEC;;5891\n");
if (nprocs___0 > 0UL)
      {
        printf("\nSTMT_EXEC;;5893\n");
printf("\nFUNC_RETURN;;\n");
return (nprocs___0);
      }
      printf("\nSTMT_EXEC;;5895\n");
printf("\nFUNC_CALL;sysconf(int);\n");
tmp___6 = sysconf(84);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5896\n");
nprocs___1 = tmp___6;
      printf("\nSTMT_EXEC;;5897\n");
if (nprocs___1 > 0L)
      {
        printf("\nSTMT_EXEC;;5899\n");
printf("\nFUNC_RETURN;;\n");
return ((unsigned long)nprocs___1);
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;5904\n");
printf("\nFUNC_CALL;sysconf(int);\n");
tmp___7 = sysconf(83);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5905\n");
nprocs___2 = tmp___7;
      printf("\nSTMT_EXEC;;5906\n");
if (nprocs___2 == 1L)
      {
        printf("\nSTMT_EXEC;;5908\n");
tmp___8 = num_processors_via_affinity_mask();
        printf("\nSTMT_EXEC;;5909\n");
nprocs_current = tmp___8;
        printf("\nSTMT_EXEC;;5910\n");
if (nprocs_current > 0UL)
        {
          printf("\nSTMT_EXEC;;5912\n");
nprocs___2 = (long)nprocs_current;
        }
      }
      printf("\nSTMT_EXEC;;5915\n");
if (nprocs___2 > 0L)
      {
        printf("\nSTMT_EXEC;;5917\n");
printf("\nFUNC_RETURN;;\n");
return ((unsigned long)nprocs___2);
      }
    }
    printf("\nSTMT_EXEC;;5920\n");
printf("\nFUNC_RETURN;;\n");
return (1UL);
  }
printf("\nFUNC_RETURN;;\n");
}
extern int nanosleep(struct timespec const *__requested_time, struct timespec *__remaining);
int(__attribute__((__nonnull__(1))) rpl_nanosleep)(struct timespec const *requested_delay, struct timespec *remaining_delay)
{
  printf("\nFUNC_CALL;rpl_nanosleep(const struct timespec *,struct timespec *);\n");
printf("\nSTMT_EXEC;;5926\n");
int *tmp;
  printf("\nSTMT_EXEC;;5927\n");
time_t limit;
  printf("\nSTMT_EXEC;;5928\n");
time_t seconds;
  printf("\nSTMT_EXEC;;5929\n");
struct timespec intermediate;
  printf("\nSTMT_EXEC;;5930\n");
int result;
  printf("\nSTMT_EXEC;;5931\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;5933\n");
if (requested_delay->tv_nsec < 0L)
    {
      printf("\nSTMT_EXEC;;5935\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5936\n");
*tmp = 22;
      printf("\nSTMT_EXEC;;5937\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    else
    {
      printf("\nSTMT_EXEC;;5941\n");
if (1000000000L <= (long)requested_delay->tv_nsec)
      {
        printf("\nSTMT_EXEC;;5943\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5944\n");
*tmp = 22;
        printf("\nSTMT_EXEC;;5945\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
      }
    }
    printf("\nSTMT_EXEC;;5948\n");
limit = (time_t)2073600;
    printf("\nSTMT_EXEC;;5949\n");
seconds = (time_t)requested_delay->tv_sec;
    printf("\nSTMT_EXEC;;5950\n");
intermediate.tv_nsec = (__syscall_slong_t)requested_delay->tv_nsec;
    printf("\nSTMT_EXEC;;5951\n");
while (1)
    {
      printf("\nSTMT_EXEC;;5953\n");
if (!(limit < seconds))
      {
        printf("\nSTMT_EXEC;;5955\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;5957\n");
intermediate.tv_sec = limit;
      printf("\nSTMT_EXEC;;5958\n");
printf("\nFUNC_CALL;nanosleep(const struct timespec *,struct timespec *);\n");
result = nanosleep((struct timespec const *)(&intermediate), remaining_delay);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5959\n");
seconds -= limit;
      printf("\nSTMT_EXEC;;5960\n");
if (result)
      {
        printf("\nSTMT_EXEC;;5962\n");
if (remaining_delay)
        {
          printf("\nSTMT_EXEC;;5964\n");
remaining_delay->tv_sec += seconds;
        }
        printf("\nSTMT_EXEC;;5966\n");
printf("\nFUNC_RETURN;;\n");
return (result);
      }
      printf("\nSTMT_EXEC;;5968\n");
intermediate.tv_nsec = (__syscall_slong_t)0;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;5971\n");
intermediate.tv_sec = seconds;
}

    printf("\nSTMT_EXEC;;5972\n");
printf("\nFUNC_CALL;nanosleep(const struct timespec *,struct timespec *);\n");
tmp___0 = nanosleep((struct timespec const *)(&intermediate), remaining_delay);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5973\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
int mkstemp_safer(char *templ);
extern int(__attribute__((__nonnull__(1))) mkstemp)(char *__template);
int mkstemp_safer(char *templ)
{
  printf("\nFUNC_CALL;mkstemp_safer(char *);\n");
printf("\nSTMT_EXEC;;5980\n");
int tmp;
  printf("\nSTMT_EXEC;;5981\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;5983\n");
printf("\nFUNC_CALL;mkstemp(char *);\n");
tmp = mkstemp(templ);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5984\n");
tmp___0 = fd_safer(tmp);
    printf("\nSTMT_EXEC;;5985\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcoll)(char const *__s1, char const *__s2) __attribute__((__pure__));
__inline static int strcoll_loop(char const *s1, size_t s1size, char const *s2, size_t s2size)
{
  printf("\nFUNC_CALL;strcoll_loop(const char *,size_t,const char *,size_t);\n");
printf("\nSTMT_EXEC;;5991\n");
int diff;
  printf("\nSTMT_EXEC;;5992\n");
size_t size1;
  printf("\nSTMT_EXEC;;5993\n");
size_t tmp;
  printf("\nSTMT_EXEC;;5994\n");
size_t size2;
  printf("\nSTMT_EXEC;;5995\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;5996\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;5997\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;5998\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;6000\n");
while (1)
    {
      printf("\nSTMT_EXEC;;6002\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6003\n");
*tmp___1 = 0;
      printf("\nSTMT_EXEC;;6004\n");
printf("\nFUNC_CALL;strcoll(const char *,const char *);\n");
diff = strcoll(s1, s2);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6005\n");
if (diff)
      {
        printf("\nSTMT_EXEC;;6007\n");
tmp___3 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;6011\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;6012\n");
if (*tmp___2)
        {
          printf("\nSTMT_EXEC;;6014\n");
tmp___3 = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;6018\n");
tmp___3 = 0;
        }
      }
      printf("\nSTMT_EXEC;;6021\n");
if (tmp___3)
      {
        printf("\nSTMT_EXEC;;6023\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;6025\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen(s1);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6026\n");
size1 = tmp + 1UL;
      printf("\nSTMT_EXEC;;6027\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen(s2);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6028\n");
size2 = tmp___0 + 1UL;
      printf("\nSTMT_EXEC;;6029\n");
s1 += size1;
      printf("\nSTMT_EXEC;;6030\n");
s2 += size2;
      printf("\nSTMT_EXEC;;6031\n");
s1size -= size1;
      printf("\nSTMT_EXEC;;6032\n");
s2size -= size2;
      printf("\nSTMT_EXEC;;6033\n");
if (s1size == 0UL)
      {
        printf("\nSTMT_EXEC;;6035\n");
printf("\nFUNC_RETURN;;\n");
return (-(s2size != 0UL));
      }
      printf("\nSTMT_EXEC;;6037\n");
if (s2size == 0UL)
      {
        printf("\nSTMT_EXEC;;6039\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;6043\n");
printf("\nFUNC_RETURN;;\n");
return (diff);
  }
printf("\nFUNC_RETURN;;\n");
}
int memcoll0(char const *s1, size_t s1size, char const *s2, size_t s2size)
{
  printf("\nFUNC_CALL;memcoll0(const char *,size_t,const char *,size_t);\n");
printf("\nSTMT_EXEC;;6048\n");
int *tmp;
  printf("\nSTMT_EXEC;;6049\n");
int tmp___0;
  printf("\nSTMT_EXEC;;6050\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;6052\n");
if (s1size == s2size)
    {
      printf("\nSTMT_EXEC;;6054\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___1 = memcmp((void const *)s1, (void const *)s2, s1size);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6055\n");
if (tmp___1 == 0)
      {
        printf("\nSTMT_EXEC;;6057\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;6058\n");
*tmp = 0;
        printf("\nSTMT_EXEC;;6059\n");
printf("\nFUNC_RETURN;;\n");
return (0);
      }
      else
      {
        printf("\nSTMT_EXEC;;6063\n");
tmp___0 = strcoll_loop(s1, s1size, s2, s2size);
        printf("\nSTMT_EXEC;;6064\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;6069\n");
tmp___0 = strcoll_loop(s1, s1size, s2, s2size);
      printf("\nSTMT_EXEC;;6070\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx);
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_block)(void const *buffer, size_t len, struct md5_ctx *ctx);
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_bytes)(void const *buffer, size_t len, struct md5_ctx *ctx);
__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx, void *resbuf);
__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx const *ctx, void *resbuf);
static unsigned char const fillbuf___2[64] = {(unsigned char const)128, (unsigned char const)0};
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx);
void(__attribute__((__leaf__)) md5_init_ctx)(struct md5_ctx *ctx)
{
  printf("\nFUNC_CALL;md5_init_ctx(struct md5_ctx *);\n");
printf("\nSTMT_EXEC;;6083\n");
uint32_t tmp;
  {
    printf("\nSTMT_EXEC;;6085\n");
ctx->A = (uint32_t)1732584193;
    printf("\nSTMT_EXEC;;6086\n");
ctx->B = 4023233417U;
    printf("\nSTMT_EXEC;;6087\n");
ctx->C = 2562383102U;
    printf("\nSTMT_EXEC;;6088\n");
ctx->D = (uint32_t)271733878;
    printf("\nSTMT_EXEC;;6089\n");
tmp = (uint32_t)0;
    printf("\nSTMT_EXEC;;6090\n");
ctx->total[1] = tmp;
    printf("\nSTMT_EXEC;;6091\n");
ctx->total[0] = tmp;
    printf("\nSTMT_EXEC;;6092\n");
ctx->buflen = (uint32_t)0;
    printf("\nSTMT_EXEC;;6093\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx const *ctx, void *resbuf);
void *(__attribute__((__leaf__)) md5_read_ctx)(struct md5_ctx const *ctx, void *resbuf)
{
  printf("\nFUNC_CALL;md5_read_ctx(const struct md5_ctx *,void *);\n");
printf("\nSTMT_EXEC;;6099\n");
char *r;
  {
    printf("\nSTMT_EXEC;;6101\n");
r = (char *)resbuf;
    printf("\nSTMT_EXEC;;6102\n");
set_uint32(r + 0UL, (uint32_t)ctx->A);
    printf("\nSTMT_EXEC;;6103\n");
set_uint32(r + sizeof(ctx->B), (uint32_t)ctx->B);
    printf("\nSTMT_EXEC;;6104\n");
set_uint32(r + 2UL * sizeof(ctx->C), (uint32_t)ctx->C);
    printf("\nSTMT_EXEC;;6105\n");
set_uint32(r + 3UL * sizeof(ctx->D), (uint32_t)ctx->D);
    printf("\nSTMT_EXEC;;6106\n");
printf("\nFUNC_RETURN;;\n");
return (resbuf);
  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__nothrow__)) void *(__attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx, void *resbuf);
void *(__attribute__((__leaf__)) md5_finish_ctx)(struct md5_ctx *ctx, void *resbuf)
{
  printf("\nFUNC_CALL;md5_finish_ctx(struct md5_ctx *,void *);\n");
printf("\nSTMT_EXEC;;6112\n");
uint32_t bytes;
  printf("\nSTMT_EXEC;;6113\n");
size_t size;
  printf("\nSTMT_EXEC;;6114\n");
int tmp;
  printf("\nSTMT_EXEC;;6115\n");
void *tmp___0;
  {
    printf("\nSTMT_EXEC;;6117\n");
bytes = ctx->buflen;
    printf("\nSTMT_EXEC;;6118\n");
if (bytes < 56U)
    {
      printf("\nSTMT_EXEC;;6120\n");
tmp = 16;
    }
    else
    {
      printf("\nSTMT_EXEC;;6124\n");
tmp = 32;
    }
    printf("\nSTMT_EXEC;;6126\n");
size = (size_t)tmp;
    printf("\nSTMT_EXEC;;6127\n");
ctx->total[0] += bytes;
    printf("\nSTMT_EXEC;;6128\n");
if (ctx->total[0] < bytes)
    {
      printf("\nSTMT_EXEC;;6130\n");
(ctx->total[1])++;
    }
    printf("\nSTMT_EXEC;;6132\n");
ctx->buffer[size - 2UL] = ctx->total[0] << 3;
    printf("\nSTMT_EXEC;;6133\n");
ctx->buffer[size - 1UL] = (ctx->total[1] << 3) | (ctx->total[0] >> 29);
    printf("\nSTMT_EXEC;;6134\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)((char *)(ctx->buffer) + bytes), (void const *)(fillbuf___2), (size - 2UL) * 4UL - (size_t)bytes);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;6135\n");
md5_process_block((void const *)(ctx->buffer), size * 4UL, ctx);
    printf("\nSTMT_EXEC;;6136\n");
tmp___0 = md5_read_ctx((struct md5_ctx const *)ctx, resbuf);
    printf("\nSTMT_EXEC;;6137\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_bytes)(void const *buffer, size_t len, struct md5_ctx *ctx);
void(__attribute__((__leaf__)) md5_process_bytes)(void const *buffer, size_t len, struct md5_ctx *ctx)
{
  printf("\nFUNC_CALL;md5_process_bytes(const void *,size_t,struct md5_ctx *);\n");
printf("\nSTMT_EXEC;;6143\n");
size_t left_over;
  printf("\nSTMT_EXEC;;6144\n");
size_t add;
  printf("\nSTMT_EXEC;;6145\n");
size_t tmp;
  printf("\nSTMT_EXEC;;6146\n");
size_t left_over___0;
  {
    printf("\nSTMT_EXEC;;6148\n");
if (ctx->buflen != 0U)
    {
      printf("\nSTMT_EXEC;;6150\n");
left_over = (size_t)ctx->buflen;
      printf("\nSTMT_EXEC;;6151\n");
if (128UL - left_over > len)
      {
        printf("\nSTMT_EXEC;;6153\n");
tmp = len;
      }
      else
      {
        printf("\nSTMT_EXEC;;6157\n");
tmp = 128UL - left_over;
      }
      printf("\nSTMT_EXEC;;6159\n");
add = tmp;
      printf("\nSTMT_EXEC;;6160\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)((char *)(ctx->buffer) + left_over), buffer, add);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6161\n");
ctx->buflen = (uint32_t)((size_t)ctx->buflen + add);
      printf("\nSTMT_EXEC;;6162\n");
if (ctx->buflen > 64U)
      {
        printf("\nSTMT_EXEC;;6164\n");
md5_process_block((void const *)(ctx->buffer), (size_t)(ctx->buflen & 4294967232U), ctx);
        printf("\nSTMT_EXEC;;6165\n");
ctx->buflen &= 63U;
        printf("\nSTMT_EXEC;;6166\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(ctx->buffer), (void const *)((char *)(ctx->buffer) + ((left_over + add) & 0xffffffffffffffc0UL)), (size_t)ctx->buflen);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;6168\n");
buffer = (void const *)((char const *)buffer + add);
      printf("\nSTMT_EXEC;;6169\n");
len -= add;
    }
    printf("\nSTMT_EXEC;;6171\n");
if (len >= 64UL)
    {
      printf("\nSTMT_EXEC;;6173\n");
md5_process_block(buffer, len & 0xffffffffffffffc0UL, ctx);
      printf("\nSTMT_EXEC;;6174\n");
buffer = (void const *)((char const *)buffer + (len & 0xffffffffffffffc0UL));
      printf("\nSTMT_EXEC;;6175\n");
len &= 63UL;
    }
    printf("\nSTMT_EXEC;;6177\n");
if (len > 0UL)
    {
      printf("\nSTMT_EXEC;;6179\n");
left_over___0 = (size_t)ctx->buflen;
      printf("\nSTMT_EXEC;;6180\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)((char *)(ctx->buffer) + left_over___0), buffer, len);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6181\n");
left_over___0 += len;
      printf("\nSTMT_EXEC;;6182\n");
if (left_over___0 >= 64UL)
      {
        printf("\nSTMT_EXEC;;6184\n");
md5_process_block((void const *)(ctx->buffer), (size_t)64, ctx);
        printf("\nSTMT_EXEC;;6185\n");
left_over___0 -= 64UL;
        printf("\nSTMT_EXEC;;6186\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(ctx->buffer), (void const *)(&ctx->buffer[16]), left_over___0);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;6188\n");
ctx->buflen = (uint32_t)left_over___0;
    }
    printf("\nSTMT_EXEC;;6190\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__attribute__((__nothrow__)) void(__attribute__((__leaf__)) md5_process_block)(void const *buffer, size_t len, struct md5_ctx *ctx);
void(__attribute__((__leaf__)) md5_process_block)(void const *buffer, size_t len, struct md5_ctx *ctx)
{
  printf("\nFUNC_CALL;md5_process_block(const void *,size_t,struct md5_ctx *);\n");
printf("\nSTMT_EXEC;;6196\n");
uint32_t correct_words[16];
  printf("\nSTMT_EXEC;;6197\n");
uint32_t const *words;
  printf("\nSTMT_EXEC;;6198\n");
size_t nwords;
  printf("\nSTMT_EXEC;;6199\n");
uint32_t const *endp;
  printf("\nSTMT_EXEC;;6200\n");
uint32_t A;
  printf("\nSTMT_EXEC;;6201\n");
uint32_t B;
  printf("\nSTMT_EXEC;;6202\n");
uint32_t C;
  printf("\nSTMT_EXEC;;6203\n");
uint32_t D;
  printf("\nSTMT_EXEC;;6204\n");
uint32_t *cwp;
  printf("\nSTMT_EXEC;;6205\n");
uint32_t A_save;
  printf("\nSTMT_EXEC;;6206\n");
uint32_t B_save;
  printf("\nSTMT_EXEC;;6207\n");
uint32_t C_save;
  printf("\nSTMT_EXEC;;6208\n");
uint32_t D_save;
  printf("\nSTMT_EXEC;;6209\n");
uint32_t *tmp;
  printf("\nSTMT_EXEC;;6210\n");
uint32_t tmp___0;
  printf("\nSTMT_EXEC;;6211\n");
uint32_t *tmp___1;
  printf("\nSTMT_EXEC;;6212\n");
uint32_t tmp___2;
  printf("\nSTMT_EXEC;;6213\n");
uint32_t *tmp___3;
  printf("\nSTMT_EXEC;;6214\n");
uint32_t tmp___4;
  printf("\nSTMT_EXEC;;6215\n");
uint32_t *tmp___5;
  printf("\nSTMT_EXEC;;6216\n");
uint32_t tmp___6;
  printf("\nSTMT_EXEC;;6217\n");
uint32_t *tmp___7;
  printf("\nSTMT_EXEC;;6218\n");
uint32_t tmp___8;
  printf("\nSTMT_EXEC;;6219\n");
uint32_t *tmp___9;
  printf("\nSTMT_EXEC;;6220\n");
uint32_t tmp___10;
  printf("\nSTMT_EXEC;;6221\n");
uint32_t *tmp___11;
  printf("\nSTMT_EXEC;;6222\n");
uint32_t tmp___12;
  printf("\nSTMT_EXEC;;6223\n");
uint32_t *tmp___13;
  printf("\nSTMT_EXEC;;6224\n");
uint32_t tmp___14;
  printf("\nSTMT_EXEC;;6225\n");
uint32_t *tmp___15;
  printf("\nSTMT_EXEC;;6226\n");
uint32_t tmp___16;
  printf("\nSTMT_EXEC;;6227\n");
uint32_t *tmp___17;
  printf("\nSTMT_EXEC;;6228\n");
uint32_t tmp___18;
  printf("\nSTMT_EXEC;;6229\n");
uint32_t *tmp___19;
  printf("\nSTMT_EXEC;;6230\n");
uint32_t tmp___20;
  printf("\nSTMT_EXEC;;6231\n");
uint32_t *tmp___21;
  printf("\nSTMT_EXEC;;6232\n");
uint32_t tmp___22;
  printf("\nSTMT_EXEC;;6233\n");
uint32_t *tmp___23;
  printf("\nSTMT_EXEC;;6234\n");
uint32_t tmp___24;
  printf("\nSTMT_EXEC;;6235\n");
uint32_t *tmp___25;
  printf("\nSTMT_EXEC;;6236\n");
uint32_t tmp___26;
  printf("\nSTMT_EXEC;;6237\n");
uint32_t *tmp___27;
  printf("\nSTMT_EXEC;;6238\n");
uint32_t tmp___28;
  printf("\nSTMT_EXEC;;6239\n");
uint32_t *tmp___29;
  printf("\nSTMT_EXEC;;6240\n");
uint32_t tmp___30;
  {
    printf("\nSTMT_EXEC;;6242\n");
words = (uint32_t const *)buffer;
    printf("\nSTMT_EXEC;;6243\n");
nwords = len / sizeof(uint32_t);
    printf("\nSTMT_EXEC;;6244\n");
endp = words + nwords;
    printf("\nSTMT_EXEC;;6245\n");
A = ctx->A;
    printf("\nSTMT_EXEC;;6246\n");
B = ctx->B;
    printf("\nSTMT_EXEC;;6247\n");
C = ctx->C;
    printf("\nSTMT_EXEC;;6248\n");
D = ctx->D;
    printf("\nSTMT_EXEC;;6249\n");
ctx->total[0] = (uint32_t)((size_t)ctx->total[0] + len);
    printf("\nSTMT_EXEC;;6250\n");
if ((size_t)ctx->total[0] < len)
    {
      printf("\nSTMT_EXEC;;6252\n");
(ctx->total[1])++;
    }
    printf("\nSTMT_EXEC;;6254\n");
while (1)
    {
      printf("\nSTMT_EXEC;;6256\n");
if (!((unsigned long)words < (unsigned long)endp))
      {
        printf("\nSTMT_EXEC;;6258\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;6260\n");
cwp = correct_words;
      printf("\nSTMT_EXEC;;6261\n");
A_save = A;
      printf("\nSTMT_EXEC;;6262\n");
B_save = B;
      printf("\nSTMT_EXEC;;6263\n");
C_save = C;
      printf("\nSTMT_EXEC;;6264\n");
D_save = D;
      printf("\nSTMT_EXEC;;6265\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6267\n");
tmp = cwp;
        printf("\nSTMT_EXEC;;6268\n");
cwp++;
        printf("\nSTMT_EXEC;;6269\n");
tmp___0 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6270\n");
*tmp = tmp___0;
        printf("\nSTMT_EXEC;;6271\n");
A += ((D ^ (B & (C ^ D))) + tmp___0) + 3614090360U;
        printf("\nSTMT_EXEC;;6272\n");
words++;
        printf("\nSTMT_EXEC;;6273\n");
A = (A << 7) | (A >> 25);
        printf("\nSTMT_EXEC;;6274\n");
A += B;
        printf("\nSTMT_EXEC;;6275\n");
goto while_break___0;
      }
    while_break___0:;
      printf("\nSTMT_EXEC;;6278\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6280\n");
tmp___1 = cwp;
        printf("\nSTMT_EXEC;;6281\n");
cwp++;
        printf("\nSTMT_EXEC;;6282\n");
tmp___2 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6283\n");
*tmp___1 = tmp___2;
        printf("\nSTMT_EXEC;;6284\n");
D += ((C ^ (A & (B ^ C))) + tmp___2) + 3905402710U;
        printf("\nSTMT_EXEC;;6285\n");
words++;
        printf("\nSTMT_EXEC;;6286\n");
D = (D << 12) | (D >> 20);
        printf("\nSTMT_EXEC;;6287\n");
D += A;
        printf("\nSTMT_EXEC;;6288\n");
goto while_break___1;
      }
    while_break___1:;
      printf("\nSTMT_EXEC;;6291\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6293\n");
tmp___3 = cwp;
        printf("\nSTMT_EXEC;;6294\n");
cwp++;
        printf("\nSTMT_EXEC;;6295\n");
tmp___4 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6296\n");
*tmp___3 = tmp___4;
        printf("\nSTMT_EXEC;;6297\n");
C += ((B ^ (D & (A ^ B))) + tmp___4) + 606105819U;
        printf("\nSTMT_EXEC;;6298\n");
words++;
        printf("\nSTMT_EXEC;;6299\n");
C = (C << 17) | (C >> 15);
        printf("\nSTMT_EXEC;;6300\n");
C += D;
        printf("\nSTMT_EXEC;;6301\n");
goto while_break___2;
      }
    while_break___2:;
      printf("\nSTMT_EXEC;;6304\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6306\n");
tmp___5 = cwp;
        printf("\nSTMT_EXEC;;6307\n");
cwp++;
        printf("\nSTMT_EXEC;;6308\n");
tmp___6 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6309\n");
*tmp___5 = tmp___6;
        printf("\nSTMT_EXEC;;6310\n");
B += ((A ^ (C & (D ^ A))) + tmp___6) + 3250441966U;
        printf("\nSTMT_EXEC;;6311\n");
words++;
        printf("\nSTMT_EXEC;;6312\n");
B = (B << 22) | (B >> 10);
        printf("\nSTMT_EXEC;;6313\n");
B += C;
        printf("\nSTMT_EXEC;;6314\n");
goto while_break___3;
      }
    while_break___3:;
      printf("\nSTMT_EXEC;;6317\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6319\n");
tmp___7 = cwp;
        printf("\nSTMT_EXEC;;6320\n");
cwp++;
        printf("\nSTMT_EXEC;;6321\n");
tmp___8 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6322\n");
*tmp___7 = tmp___8;
        printf("\nSTMT_EXEC;;6323\n");
A += ((D ^ (B & (C ^ D))) + tmp___8) + 4118548399U;
        printf("\nSTMT_EXEC;;6324\n");
words++;
        printf("\nSTMT_EXEC;;6325\n");
A = (A << 7) | (A >> 25);
        printf("\nSTMT_EXEC;;6326\n");
A += B;
        printf("\nSTMT_EXEC;;6327\n");
goto while_break___4;
      }
    while_break___4:;
      printf("\nSTMT_EXEC;;6330\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6332\n");
tmp___9 = cwp;
        printf("\nSTMT_EXEC;;6333\n");
cwp++;
        printf("\nSTMT_EXEC;;6334\n");
tmp___10 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6335\n");
*tmp___9 = tmp___10;
        printf("\nSTMT_EXEC;;6336\n");
D += ((C ^ (A & (B ^ C))) + tmp___10) + 1200080426U;
        printf("\nSTMT_EXEC;;6337\n");
words++;
        printf("\nSTMT_EXEC;;6338\n");
D = (D << 12) | (D >> 20);
        printf("\nSTMT_EXEC;;6339\n");
D += A;
        printf("\nSTMT_EXEC;;6340\n");
goto while_break___5;
      }
    while_break___5:;
      printf("\nSTMT_EXEC;;6343\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6345\n");
tmp___11 = cwp;
        printf("\nSTMT_EXEC;;6346\n");
cwp++;
        printf("\nSTMT_EXEC;;6347\n");
tmp___12 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6348\n");
*tmp___11 = tmp___12;
        printf("\nSTMT_EXEC;;6349\n");
C += ((B ^ (D & (A ^ B))) + tmp___12) + 2821735955U;
        printf("\nSTMT_EXEC;;6350\n");
words++;
        printf("\nSTMT_EXEC;;6351\n");
C = (C << 17) | (C >> 15);
        printf("\nSTMT_EXEC;;6352\n");
C += D;
        printf("\nSTMT_EXEC;;6353\n");
goto while_break___6;
      }
    while_break___6:;
      printf("\nSTMT_EXEC;;6356\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6358\n");
tmp___13 = cwp;
        printf("\nSTMT_EXEC;;6359\n");
cwp++;
        printf("\nSTMT_EXEC;;6360\n");
tmp___14 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6361\n");
*tmp___13 = tmp___14;
        printf("\nSTMT_EXEC;;6362\n");
B += ((A ^ (C & (D ^ A))) + tmp___14) + 4249261313U;
        printf("\nSTMT_EXEC;;6363\n");
words++;
        printf("\nSTMT_EXEC;;6364\n");
B = (B << 22) | (B >> 10);
        printf("\nSTMT_EXEC;;6365\n");
B += C;
        printf("\nSTMT_EXEC;;6366\n");
goto while_break___7;
      }
    while_break___7:;
      printf("\nSTMT_EXEC;;6369\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6371\n");
tmp___15 = cwp;
        printf("\nSTMT_EXEC;;6372\n");
cwp++;
        printf("\nSTMT_EXEC;;6373\n");
tmp___16 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6374\n");
*tmp___15 = tmp___16;
        printf("\nSTMT_EXEC;;6375\n");
A += ((D ^ (B & (C ^ D))) + tmp___16) + 1770035416U;
        printf("\nSTMT_EXEC;;6376\n");
words++;
        printf("\nSTMT_EXEC;;6377\n");
A = (A << 7) | (A >> 25);
        printf("\nSTMT_EXEC;;6378\n");
A += B;
        printf("\nSTMT_EXEC;;6379\n");
goto while_break___8;
      }
    while_break___8:;
      printf("\nSTMT_EXEC;;6382\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6384\n");
tmp___17 = cwp;
        printf("\nSTMT_EXEC;;6385\n");
cwp++;
        printf("\nSTMT_EXEC;;6386\n");
tmp___18 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6387\n");
*tmp___17 = tmp___18;
        printf("\nSTMT_EXEC;;6388\n");
D += ((C ^ (A & (B ^ C))) + tmp___18) + 2336552879U;
        printf("\nSTMT_EXEC;;6389\n");
words++;
        printf("\nSTMT_EXEC;;6390\n");
D = (D << 12) | (D >> 20);
        printf("\nSTMT_EXEC;;6391\n");
D += A;
        printf("\nSTMT_EXEC;;6392\n");
goto while_break___9;
      }
    while_break___9:;
      printf("\nSTMT_EXEC;;6395\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6397\n");
tmp___19 = cwp;
        printf("\nSTMT_EXEC;;6398\n");
cwp++;
        printf("\nSTMT_EXEC;;6399\n");
tmp___20 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6400\n");
*tmp___19 = tmp___20;
        printf("\nSTMT_EXEC;;6401\n");
C += ((B ^ (D & (A ^ B))) + tmp___20) + 4294925233U;
        printf("\nSTMT_EXEC;;6402\n");
words++;
        printf("\nSTMT_EXEC;;6403\n");
C = (C << 17) | (C >> 15);
        printf("\nSTMT_EXEC;;6404\n");
C += D;
        printf("\nSTMT_EXEC;;6405\n");
goto while_break___10;
      }
    while_break___10:;
      printf("\nSTMT_EXEC;;6408\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6410\n");
tmp___21 = cwp;
        printf("\nSTMT_EXEC;;6411\n");
cwp++;
        printf("\nSTMT_EXEC;;6412\n");
tmp___22 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6413\n");
*tmp___21 = tmp___22;
        printf("\nSTMT_EXEC;;6414\n");
B += ((A ^ (C & (D ^ A))) + tmp___22) + 2304563134U;
        printf("\nSTMT_EXEC;;6415\n");
words++;
        printf("\nSTMT_EXEC;;6416\n");
B = (B << 22) | (B >> 10);
        printf("\nSTMT_EXEC;;6417\n");
B += C;
        printf("\nSTMT_EXEC;;6418\n");
goto while_break___11;
      }
    while_break___11:;
      printf("\nSTMT_EXEC;;6421\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6423\n");
tmp___23 = cwp;
        printf("\nSTMT_EXEC;;6424\n");
cwp++;
        printf("\nSTMT_EXEC;;6425\n");
tmp___24 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6426\n");
*tmp___23 = tmp___24;
        printf("\nSTMT_EXEC;;6427\n");
A += ((D ^ (B & (C ^ D))) + tmp___24) + 1804603682U;
        printf("\nSTMT_EXEC;;6428\n");
words++;
        printf("\nSTMT_EXEC;;6429\n");
A = (A << 7) | (A >> 25);
        printf("\nSTMT_EXEC;;6430\n");
A += B;
        printf("\nSTMT_EXEC;;6431\n");
goto while_break___12;
      }
    while_break___12:;
      printf("\nSTMT_EXEC;;6434\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6436\n");
tmp___25 = cwp;
        printf("\nSTMT_EXEC;;6437\n");
cwp++;
        printf("\nSTMT_EXEC;;6438\n");
tmp___26 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6439\n");
*tmp___25 = tmp___26;
        printf("\nSTMT_EXEC;;6440\n");
D += ((C ^ (A & (B ^ C))) + tmp___26) + 4254626195U;
        printf("\nSTMT_EXEC;;6441\n");
words++;
        printf("\nSTMT_EXEC;;6442\n");
D = (D << 12) | (D >> 20);
        printf("\nSTMT_EXEC;;6443\n");
D += A;
        printf("\nSTMT_EXEC;;6444\n");
goto while_break___13;
      }
    while_break___13:;
      printf("\nSTMT_EXEC;;6447\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6449\n");
tmp___27 = cwp;
        printf("\nSTMT_EXEC;;6450\n");
cwp++;
        printf("\nSTMT_EXEC;;6451\n");
tmp___28 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6452\n");
*tmp___27 = tmp___28;
        printf("\nSTMT_EXEC;;6453\n");
C += ((B ^ (D & (A ^ B))) + tmp___28) + 2792965006U;
        printf("\nSTMT_EXEC;;6454\n");
words++;
        printf("\nSTMT_EXEC;;6455\n");
C = (C << 17) | (C >> 15);
        printf("\nSTMT_EXEC;;6456\n");
C += D;
        printf("\nSTMT_EXEC;;6457\n");
goto while_break___14;
      }
    while_break___14:;
      printf("\nSTMT_EXEC;;6460\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6462\n");
tmp___29 = cwp;
        printf("\nSTMT_EXEC;;6463\n");
cwp++;
        printf("\nSTMT_EXEC;;6464\n");
tmp___30 = (uint32_t)*words;
        printf("\nSTMT_EXEC;;6465\n");
*tmp___29 = tmp___30;
        printf("\nSTMT_EXEC;;6466\n");
B += ((A ^ (C & (D ^ A))) + tmp___30) + 1236535329U;
        printf("\nSTMT_EXEC;;6467\n");
words++;
        printf("\nSTMT_EXEC;;6468\n");
B = (B << 22) | (B >> 10);
        printf("\nSTMT_EXEC;;6469\n");
B += C;
        printf("\nSTMT_EXEC;;6470\n");
goto while_break___15;
      }
    while_break___15:;
      printf("\nSTMT_EXEC;;6473\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6475\n");
A += ((C ^ (D & (B ^ C))) + correct_words[1]) + 4129170786U;
        printf("\nSTMT_EXEC;;6476\n");
A = (A << 5) | (A >> 27);
        printf("\nSTMT_EXEC;;6477\n");
A += B;
        printf("\nSTMT_EXEC;;6478\n");
goto while_break___16;
      }
    while_break___16:;
      printf("\nSTMT_EXEC;;6481\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6483\n");
D += ((B ^ (C & (A ^ B))) + correct_words[6]) + 3225465664U;
        printf("\nSTMT_EXEC;;6484\n");
D = (D << 9) | (D >> 23);
        printf("\nSTMT_EXEC;;6485\n");
D += A;
        printf("\nSTMT_EXEC;;6486\n");
goto while_break___17;
      }
    while_break___17:;
      printf("\nSTMT_EXEC;;6489\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6491\n");
C += ((A ^ (B & (D ^ A))) + correct_words[11]) + 643717713U;
        printf("\nSTMT_EXEC;;6492\n");
C = (C << 14) | (C >> 18);
        printf("\nSTMT_EXEC;;6493\n");
C += D;
        printf("\nSTMT_EXEC;;6494\n");
goto while_break___18;
      }
    while_break___18:;
      printf("\nSTMT_EXEC;;6497\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6499\n");
B += ((D ^ (A & (C ^ D))) + correct_words[0]) + 3921069994U;
        printf("\nSTMT_EXEC;;6500\n");
B = (B << 20) | (B >> 12);
        printf("\nSTMT_EXEC;;6501\n");
B += C;
        printf("\nSTMT_EXEC;;6502\n");
goto while_break___19;
      }
    while_break___19:;
      printf("\nSTMT_EXEC;;6505\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6507\n");
A += ((C ^ (D & (B ^ C))) + correct_words[5]) + 3593408605U;
        printf("\nSTMT_EXEC;;6508\n");
A = (A << 5) | (A >> 27);
        printf("\nSTMT_EXEC;;6509\n");
A += B;
        printf("\nSTMT_EXEC;;6510\n");
goto while_break___20;
      }
    while_break___20:;
      printf("\nSTMT_EXEC;;6513\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6515\n");
D += ((B ^ (C & (A ^ B))) + correct_words[10]) + 38016083U;
        printf("\nSTMT_EXEC;;6516\n");
D = (D << 9) | (D >> 23);
        printf("\nSTMT_EXEC;;6517\n");
D += A;
        printf("\nSTMT_EXEC;;6518\n");
goto while_break___21;
      }
    while_break___21:;
      printf("\nSTMT_EXEC;;6521\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6523\n");
C += ((A ^ (B & (D ^ A))) + correct_words[15]) + 3634488961U;
        printf("\nSTMT_EXEC;;6524\n");
C = (C << 14) | (C >> 18);
        printf("\nSTMT_EXEC;;6525\n");
C += D;
        printf("\nSTMT_EXEC;;6526\n");
goto while_break___22;
      }
    while_break___22:;
      printf("\nSTMT_EXEC;;6529\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6531\n");
B += ((D ^ (A & (C ^ D))) + correct_words[4]) + 3889429448U;
        printf("\nSTMT_EXEC;;6532\n");
B = (B << 20) | (B >> 12);
        printf("\nSTMT_EXEC;;6533\n");
B += C;
        printf("\nSTMT_EXEC;;6534\n");
goto while_break___23;
      }
    while_break___23:;
      printf("\nSTMT_EXEC;;6537\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6539\n");
A += ((C ^ (D & (B ^ C))) + correct_words[9]) + 568446438U;
        printf("\nSTMT_EXEC;;6540\n");
A = (A << 5) | (A >> 27);
        printf("\nSTMT_EXEC;;6541\n");
A += B;
        printf("\nSTMT_EXEC;;6542\n");
goto while_break___24;
      }
    while_break___24:;
      printf("\nSTMT_EXEC;;6545\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6547\n");
D += ((B ^ (C & (A ^ B))) + correct_words[14]) + 3275163606U;
        printf("\nSTMT_EXEC;;6548\n");
D = (D << 9) | (D >> 23);
        printf("\nSTMT_EXEC;;6549\n");
D += A;
        printf("\nSTMT_EXEC;;6550\n");
goto while_break___25;
      }
    while_break___25:;
      printf("\nSTMT_EXEC;;6553\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6555\n");
C += ((A ^ (B & (D ^ A))) + correct_words[3]) + 4107603335U;
        printf("\nSTMT_EXEC;;6556\n");
C = (C << 14) | (C >> 18);
        printf("\nSTMT_EXEC;;6557\n");
C += D;
        printf("\nSTMT_EXEC;;6558\n");
goto while_break___26;
      }
    while_break___26:;
      printf("\nSTMT_EXEC;;6561\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6563\n");
B += ((D ^ (A & (C ^ D))) + correct_words[8]) + 1163531501U;
        printf("\nSTMT_EXEC;;6564\n");
B = (B << 20) | (B >> 12);
        printf("\nSTMT_EXEC;;6565\n");
B += C;
        printf("\nSTMT_EXEC;;6566\n");
goto while_break___27;
      }
    while_break___27:;
      printf("\nSTMT_EXEC;;6569\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6571\n");
A += ((C ^ (D & (B ^ C))) + correct_words[13]) + 2850285829U;
        printf("\nSTMT_EXEC;;6572\n");
A = (A << 5) | (A >> 27);
        printf("\nSTMT_EXEC;;6573\n");
A += B;
        printf("\nSTMT_EXEC;;6574\n");
goto while_break___28;
      }
    while_break___28:;
      printf("\nSTMT_EXEC;;6577\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6579\n");
D += ((B ^ (C & (A ^ B))) + correct_words[2]) + 4243563512U;
        printf("\nSTMT_EXEC;;6580\n");
D = (D << 9) | (D >> 23);
        printf("\nSTMT_EXEC;;6581\n");
D += A;
        printf("\nSTMT_EXEC;;6582\n");
goto while_break___29;
      }
    while_break___29:;
      printf("\nSTMT_EXEC;;6585\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6587\n");
C += ((A ^ (B & (D ^ A))) + correct_words[7]) + 1735328473U;
        printf("\nSTMT_EXEC;;6588\n");
C = (C << 14) | (C >> 18);
        printf("\nSTMT_EXEC;;6589\n");
C += D;
        printf("\nSTMT_EXEC;;6590\n");
goto while_break___30;
      }
    while_break___30:;
      printf("\nSTMT_EXEC;;6593\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6595\n");
B += ((D ^ (A & (C ^ D))) + correct_words[12]) + 2368359562U;
        printf("\nSTMT_EXEC;;6596\n");
B = (B << 20) | (B >> 12);
        printf("\nSTMT_EXEC;;6597\n");
B += C;
        printf("\nSTMT_EXEC;;6598\n");
goto while_break___31;
      }
    while_break___31:;
      printf("\nSTMT_EXEC;;6601\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6603\n");
A += (((B ^ C) ^ D) + correct_words[5]) + 4294588738U;
        printf("\nSTMT_EXEC;;6604\n");
A = (A << 4) | (A >> 28);
        printf("\nSTMT_EXEC;;6605\n");
A += B;
        printf("\nSTMT_EXEC;;6606\n");
goto while_break___32;
      }
    while_break___32:;
      printf("\nSTMT_EXEC;;6609\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6611\n");
D += (((A ^ B) ^ C) + correct_words[8]) + 2272392833U;
        printf("\nSTMT_EXEC;;6612\n");
D = (D << 11) | (D >> 21);
        printf("\nSTMT_EXEC;;6613\n");
D += A;
        printf("\nSTMT_EXEC;;6614\n");
goto while_break___33;
      }
    while_break___33:;
      printf("\nSTMT_EXEC;;6617\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6619\n");
C += (((D ^ A) ^ B) + correct_words[11]) + 1839030562U;
        printf("\nSTMT_EXEC;;6620\n");
C = (C << 16) | (C >> 16);
        printf("\nSTMT_EXEC;;6621\n");
C += D;
        printf("\nSTMT_EXEC;;6622\n");
goto while_break___34;
      }
    while_break___34:;
      printf("\nSTMT_EXEC;;6625\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6627\n");
B += (((C ^ D) ^ A) + correct_words[14]) + 4259657740U;
        printf("\nSTMT_EXEC;;6628\n");
B = (B << 23) | (B >> 9);
        printf("\nSTMT_EXEC;;6629\n");
B += C;
        printf("\nSTMT_EXEC;;6630\n");
goto while_break___35;
      }
    while_break___35:;
      printf("\nSTMT_EXEC;;6633\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6635\n");
A += (((B ^ C) ^ D) + correct_words[1]) + 2763975236U;
        printf("\nSTMT_EXEC;;6636\n");
A = (A << 4) | (A >> 28);
        printf("\nSTMT_EXEC;;6637\n");
A += B;
        printf("\nSTMT_EXEC;;6638\n");
goto while_break___36;
      }
    while_break___36:;
      printf("\nSTMT_EXEC;;6641\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6643\n");
D += (((A ^ B) ^ C) + correct_words[4]) + 1272893353U;
        printf("\nSTMT_EXEC;;6644\n");
D = (D << 11) | (D >> 21);
        printf("\nSTMT_EXEC;;6645\n");
D += A;
        printf("\nSTMT_EXEC;;6646\n");
goto while_break___37;
      }
    while_break___37:;
      printf("\nSTMT_EXEC;;6649\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6651\n");
C += (((D ^ A) ^ B) + correct_words[7]) + 4139469664U;
        printf("\nSTMT_EXEC;;6652\n");
C = (C << 16) | (C >> 16);
        printf("\nSTMT_EXEC;;6653\n");
C += D;
        printf("\nSTMT_EXEC;;6654\n");
goto while_break___38;
      }
    while_break___38:;
      printf("\nSTMT_EXEC;;6657\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6659\n");
B += (((C ^ D) ^ A) + correct_words[10]) + 3200236656U;
        printf("\nSTMT_EXEC;;6660\n");
B = (B << 23) | (B >> 9);
        printf("\nSTMT_EXEC;;6661\n");
B += C;
        printf("\nSTMT_EXEC;;6662\n");
goto while_break___39;
      }
    while_break___39:;
      printf("\nSTMT_EXEC;;6665\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6667\n");
A += (((B ^ C) ^ D) + correct_words[13]) + 681279174U;
        printf("\nSTMT_EXEC;;6668\n");
A = (A << 4) | (A >> 28);
        printf("\nSTMT_EXEC;;6669\n");
A += B;
        printf("\nSTMT_EXEC;;6670\n");
goto while_break___40;
      }
    while_break___40:;
      printf("\nSTMT_EXEC;;6673\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6675\n");
D += (((A ^ B) ^ C) + correct_words[0]) + 3936430074U;
        printf("\nSTMT_EXEC;;6676\n");
D = (D << 11) | (D >> 21);
        printf("\nSTMT_EXEC;;6677\n");
D += A;
        printf("\nSTMT_EXEC;;6678\n");
goto while_break___41;
      }
    while_break___41:;
      printf("\nSTMT_EXEC;;6681\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6683\n");
C += (((D ^ A) ^ B) + correct_words[3]) + 3572445317U;
        printf("\nSTMT_EXEC;;6684\n");
C = (C << 16) | (C >> 16);
        printf("\nSTMT_EXEC;;6685\n");
C += D;
        printf("\nSTMT_EXEC;;6686\n");
goto while_break___42;
      }
    while_break___42:;
      printf("\nSTMT_EXEC;;6689\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6691\n");
B += (((C ^ D) ^ A) + correct_words[6]) + 76029189U;
        printf("\nSTMT_EXEC;;6692\n");
B = (B << 23) | (B >> 9);
        printf("\nSTMT_EXEC;;6693\n");
B += C;
        printf("\nSTMT_EXEC;;6694\n");
goto while_break___43;
      }
    while_break___43:;
      printf("\nSTMT_EXEC;;6697\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6699\n");
A += (((B ^ C) ^ D) + correct_words[9]) + 3654602809U;
        printf("\nSTMT_EXEC;;6700\n");
A = (A << 4) | (A >> 28);
        printf("\nSTMT_EXEC;;6701\n");
A += B;
        printf("\nSTMT_EXEC;;6702\n");
goto while_break___44;
      }
    while_break___44:;
      printf("\nSTMT_EXEC;;6705\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6707\n");
D += (((A ^ B) ^ C) + correct_words[12]) + 3873151461U;
        printf("\nSTMT_EXEC;;6708\n");
D = (D << 11) | (D >> 21);
        printf("\nSTMT_EXEC;;6709\n");
D += A;
        printf("\nSTMT_EXEC;;6710\n");
goto while_break___45;
      }
    while_break___45:;
      printf("\nSTMT_EXEC;;6713\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6715\n");
C += (((D ^ A) ^ B) + correct_words[15]) + 530742520U;
        printf("\nSTMT_EXEC;;6716\n");
C = (C << 16) | (C >> 16);
        printf("\nSTMT_EXEC;;6717\n");
C += D;
        printf("\nSTMT_EXEC;;6718\n");
goto while_break___46;
      }
    while_break___46:;
      printf("\nSTMT_EXEC;;6721\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6723\n");
B += (((C ^ D) ^ A) + correct_words[2]) + 3299628645U;
        printf("\nSTMT_EXEC;;6724\n");
B = (B << 23) | (B >> 9);
        printf("\nSTMT_EXEC;;6725\n");
B += C;
        printf("\nSTMT_EXEC;;6726\n");
goto while_break___47;
      }
    while_break___47:;
      printf("\nSTMT_EXEC;;6729\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6731\n");
A += ((C ^ (B | ~D)) + correct_words[0]) + 4096336452U;
        printf("\nSTMT_EXEC;;6732\n");
A = (A << 6) | (A >> 26);
        printf("\nSTMT_EXEC;;6733\n");
A += B;
        printf("\nSTMT_EXEC;;6734\n");
goto while_break___48;
      }
    while_break___48:;
      printf("\nSTMT_EXEC;;6737\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6739\n");
D += ((B ^ (A | ~C)) + correct_words[7]) + 1126891415U;
        printf("\nSTMT_EXEC;;6740\n");
D = (D << 10) | (D >> 22);
        printf("\nSTMT_EXEC;;6741\n");
D += A;
        printf("\nSTMT_EXEC;;6742\n");
goto while_break___49;
      }
    while_break___49:;
      printf("\nSTMT_EXEC;;6745\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6747\n");
C += ((A ^ (D | ~B)) + correct_words[14]) + 2878612391U;
        printf("\nSTMT_EXEC;;6748\n");
C = (C << 15) | (C >> 17);
        printf("\nSTMT_EXEC;;6749\n");
C += D;
        printf("\nSTMT_EXEC;;6750\n");
goto while_break___50;
      }
    while_break___50:;
      printf("\nSTMT_EXEC;;6753\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6755\n");
B += ((D ^ (C | ~A)) + correct_words[5]) + 4237533241U;
        printf("\nSTMT_EXEC;;6756\n");
B = (B << 21) | (B >> 11);
        printf("\nSTMT_EXEC;;6757\n");
B += C;
        printf("\nSTMT_EXEC;;6758\n");
goto while_break___51;
      }
    while_break___51:;
      printf("\nSTMT_EXEC;;6761\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6763\n");
A += ((C ^ (B | ~D)) + correct_words[12]) + 1700485571U;
        printf("\nSTMT_EXEC;;6764\n");
A = (A << 6) | (A >> 26);
        printf("\nSTMT_EXEC;;6765\n");
A += B;
        printf("\nSTMT_EXEC;;6766\n");
goto while_break___52;
      }
    while_break___52:;
      printf("\nSTMT_EXEC;;6769\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6771\n");
D += ((B ^ (A | ~C)) + correct_words[3]) + 2399980690U;
        printf("\nSTMT_EXEC;;6772\n");
D = (D << 10) | (D >> 22);
        printf("\nSTMT_EXEC;;6773\n");
D += A;
        printf("\nSTMT_EXEC;;6774\n");
goto while_break___53;
      }
    while_break___53:;
      printf("\nSTMT_EXEC;;6777\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6779\n");
C += ((A ^ (D | ~B)) + correct_words[10]) + 4293915773U;
        printf("\nSTMT_EXEC;;6780\n");
C = (C << 15) | (C >> 17);
        printf("\nSTMT_EXEC;;6781\n");
C += D;
        printf("\nSTMT_EXEC;;6782\n");
goto while_break___54;
      }
    while_break___54:;
      printf("\nSTMT_EXEC;;6785\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6787\n");
B += ((D ^ (C | ~A)) + correct_words[1]) + 2240044497U;
        printf("\nSTMT_EXEC;;6788\n");
B = (B << 21) | (B >> 11);
        printf("\nSTMT_EXEC;;6789\n");
B += C;
        printf("\nSTMT_EXEC;;6790\n");
goto while_break___55;
      }
    while_break___55:;
      printf("\nSTMT_EXEC;;6793\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6795\n");
A += ((C ^ (B | ~D)) + correct_words[8]) + 1873313359U;
        printf("\nSTMT_EXEC;;6796\n");
A = (A << 6) | (A >> 26);
        printf("\nSTMT_EXEC;;6797\n");
A += B;
        printf("\nSTMT_EXEC;;6798\n");
goto while_break___56;
      }
    while_break___56:;
      printf("\nSTMT_EXEC;;6801\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6803\n");
D += ((B ^ (A | ~C)) + correct_words[15]) + 4264355552U;
        printf("\nSTMT_EXEC;;6804\n");
D = (D << 10) | (D >> 22);
        printf("\nSTMT_EXEC;;6805\n");
D += A;
        printf("\nSTMT_EXEC;;6806\n");
goto while_break___57;
      }
    while_break___57:;
      printf("\nSTMT_EXEC;;6809\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6811\n");
C += ((A ^ (D | ~B)) + correct_words[6]) + 2734768916U;
        printf("\nSTMT_EXEC;;6812\n");
C = (C << 15) | (C >> 17);
        printf("\nSTMT_EXEC;;6813\n");
C += D;
        printf("\nSTMT_EXEC;;6814\n");
goto while_break___58;
      }
    while_break___58:;
      printf("\nSTMT_EXEC;;6817\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6819\n");
B += ((D ^ (C | ~A)) + correct_words[13]) + 1309151649U;
        printf("\nSTMT_EXEC;;6820\n");
B = (B << 21) | (B >> 11);
        printf("\nSTMT_EXEC;;6821\n");
B += C;
        printf("\nSTMT_EXEC;;6822\n");
goto while_break___59;
      }
    while_break___59:;
      printf("\nSTMT_EXEC;;6825\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6827\n");
A += ((C ^ (B | ~D)) + correct_words[4]) + 4149444226U;
        printf("\nSTMT_EXEC;;6828\n");
A = (A << 6) | (A >> 26);
        printf("\nSTMT_EXEC;;6829\n");
A += B;
        printf("\nSTMT_EXEC;;6830\n");
goto while_break___60;
      }
    while_break___60:;
      printf("\nSTMT_EXEC;;6833\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6835\n");
D += ((B ^ (A | ~C)) + correct_words[11]) + 3174756917U;
        printf("\nSTMT_EXEC;;6836\n");
D = (D << 10) | (D >> 22);
        printf("\nSTMT_EXEC;;6837\n");
D += A;
        printf("\nSTMT_EXEC;;6838\n");
goto while_break___61;
      }
    while_break___61:;
      printf("\nSTMT_EXEC;;6841\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6843\n");
C += ((A ^ (D | ~B)) + correct_words[2]) + 718787259U;
        printf("\nSTMT_EXEC;;6844\n");
C = (C << 15) | (C >> 17);
        printf("\nSTMT_EXEC;;6845\n");
C += D;
        printf("\nSTMT_EXEC;;6846\n");
goto while_break___62;
      }
    while_break___62:;
      printf("\nSTMT_EXEC;;6849\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6851\n");
B += ((D ^ (C | ~A)) + correct_words[9]) + 3951481745U;
        printf("\nSTMT_EXEC;;6852\n");
B = (B << 21) | (B >> 11);
        printf("\nSTMT_EXEC;;6853\n");
B += C;
        printf("\nSTMT_EXEC;;6854\n");
goto while_break___63;
      }
    while_break___63:
      {
printf("\nSTMT_EXEC;;6857\n");
A += A_save;
}

      printf("\nSTMT_EXEC;;6858\n");
B += B_save;
      printf("\nSTMT_EXEC;;6859\n");
C += C_save;
      printf("\nSTMT_EXEC;;6860\n");
D += D_save;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;6863\n");
ctx->A = A;
}

    printf("\nSTMT_EXEC;;6864\n");
ctx->B = B;
    printf("\nSTMT_EXEC;;6865\n");
ctx->C = C;
    printf("\nSTMT_EXEC;;6866\n");
ctx->D = D;
    printf("\nSTMT_EXEC;;6867\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int mbsnwidth(char const *string, size_t nbytes, int flags);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) wcwidth)(wchar_t __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) iswcntrl)(wint_t __wc);
int mbsnwidth(char const *string, size_t nbytes, int flags)
{
  printf("\nFUNC_CALL;mbsnwidth(const char *,size_t,int);\n");
printf("\nSTMT_EXEC;;6875\n");
char const *p;
  printf("\nSTMT_EXEC;;6876\n");
char const *plimit;
  printf("\nSTMT_EXEC;;6877\n");
int width;
  printf("\nSTMT_EXEC;;6878\n");
mbstate_t mbstate;
  printf("\nSTMT_EXEC;;6879\n");
wchar_t wc;
  printf("\nSTMT_EXEC;;6880\n");
size_t bytes;
  printf("\nSTMT_EXEC;;6881\n");
int w;
  printf("\nSTMT_EXEC;;6882\n");
int tmp;
  printf("\nSTMT_EXEC;;6883\n");
int tmp___0;
  printf("\nSTMT_EXEC;;6884\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;6885\n");
unsigned char c;
  printf("\nSTMT_EXEC;;6886\n");
char const *tmp___2;
  printf("\nSTMT_EXEC;;6887\n");
unsigned short const **tmp___3;
  printf("\nSTMT_EXEC;;6888\n");
unsigned short const **tmp___4;
  {
    printf("\nSTMT_EXEC;;6890\n");
p = string;
    printf("\nSTMT_EXEC;;6891\n");
plimit = p + nbytes;
    printf("\nSTMT_EXEC;;6892\n");
width = 0;
    printf("\nSTMT_EXEC;;6893\n");
printf("\nFUNC_CALL;__ctype_get_mb_cur_max();\n");
tmp___1 = __ctype_get_mb_cur_max();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;6894\n");
if (tmp___1 > 1UL)
    {
      printf("\nSTMT_EXEC;;6896\n");
while (1)
      {
        printf("\nSTMT_EXEC;;6898\n");
if (!((unsigned long)p < (unsigned long)plimit))
        {
          printf("\nSTMT_EXEC;;6900\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;6902\n");
if ((int const) * p == 32)
        {
          printf("\nSTMT_EXEC;;6904\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6906\n");
if ((int const) * p == 33)
        {
          printf("\nSTMT_EXEC;;6908\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6910\n");
if ((int const) * p == 34)
        {
          printf("\nSTMT_EXEC;;6912\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6914\n");
if ((int const) * p == 35)
        {
          printf("\nSTMT_EXEC;;6916\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6918\n");
if ((int const) * p == 37)
        {
          printf("\nSTMT_EXEC;;6920\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6922\n");
if ((int const) * p == 38)
        {
          printf("\nSTMT_EXEC;;6924\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6926\n");
if ((int const) * p == 39)
        {
          printf("\nSTMT_EXEC;;6928\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6930\n");
if ((int const) * p == 40)
        {
          printf("\nSTMT_EXEC;;6932\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6934\n");
if ((int const) * p == 41)
        {
          printf("\nSTMT_EXEC;;6936\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6938\n");
if ((int const) * p == 42)
        {
          printf("\nSTMT_EXEC;;6940\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6942\n");
if ((int const) * p == 43)
        {
          printf("\nSTMT_EXEC;;6944\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6946\n");
if ((int const) * p == 44)
        {
          printf("\nSTMT_EXEC;;6948\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6950\n");
if ((int const) * p == 45)
        {
          printf("\nSTMT_EXEC;;6952\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6954\n");
if ((int const) * p == 46)
        {
          printf("\nSTMT_EXEC;;6956\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6958\n");
if ((int const) * p == 47)
        {
          printf("\nSTMT_EXEC;;6960\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6962\n");
if ((int const) * p == 48)
        {
          printf("\nSTMT_EXEC;;6964\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6966\n");
if ((int const) * p == 49)
        {
          printf("\nSTMT_EXEC;;6968\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6970\n");
if ((int const) * p == 50)
        {
          printf("\nSTMT_EXEC;;6972\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6974\n");
if ((int const) * p == 51)
        {
          printf("\nSTMT_EXEC;;6976\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6978\n");
if ((int const) * p == 52)
        {
          printf("\nSTMT_EXEC;;6980\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6982\n");
if ((int const) * p == 53)
        {
          printf("\nSTMT_EXEC;;6984\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6986\n");
if ((int const) * p == 54)
        {
          printf("\nSTMT_EXEC;;6988\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6990\n");
if ((int const) * p == 55)
        {
          printf("\nSTMT_EXEC;;6992\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6994\n");
if ((int const) * p == 56)
        {
          printf("\nSTMT_EXEC;;6996\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;6998\n");
if ((int const) * p == 57)
        {
          printf("\nSTMT_EXEC;;7000\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7002\n");
if ((int const) * p == 58)
        {
          printf("\nSTMT_EXEC;;7004\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7006\n");
if ((int const) * p == 59)
        {
          printf("\nSTMT_EXEC;;7008\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7010\n");
if ((int const) * p == 60)
        {
          printf("\nSTMT_EXEC;;7012\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7014\n");
if ((int const) * p == 61)
        {
          printf("\nSTMT_EXEC;;7016\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7018\n");
if ((int const) * p == 62)
        {
          printf("\nSTMT_EXEC;;7020\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7022\n");
if ((int const) * p == 63)
        {
          printf("\nSTMT_EXEC;;7024\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7026\n");
if ((int const) * p == 65)
        {
          printf("\nSTMT_EXEC;;7028\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7030\n");
if ((int const) * p == 66)
        {
          printf("\nSTMT_EXEC;;7032\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7034\n");
if ((int const) * p == 67)
        {
          printf("\nSTMT_EXEC;;7036\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7038\n");
if ((int const) * p == 68)
        {
          printf("\nSTMT_EXEC;;7040\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7042\n");
if ((int const) * p == 69)
        {
          printf("\nSTMT_EXEC;;7044\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7046\n");
if ((int const) * p == 70)
        {
          printf("\nSTMT_EXEC;;7048\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7050\n");
if ((int const) * p == 71)
        {
          printf("\nSTMT_EXEC;;7052\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7054\n");
if ((int const) * p == 72)
        {
          printf("\nSTMT_EXEC;;7056\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7058\n");
if ((int const) * p == 73)
        {
          printf("\nSTMT_EXEC;;7060\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7062\n");
if ((int const) * p == 74)
        {
          printf("\nSTMT_EXEC;;7064\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7066\n");
if ((int const) * p == 75)
        {
          printf("\nSTMT_EXEC;;7068\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7070\n");
if ((int const) * p == 76)
        {
          printf("\nSTMT_EXEC;;7072\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7074\n");
if ((int const) * p == 77)
        {
          printf("\nSTMT_EXEC;;7076\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7078\n");
if ((int const) * p == 78)
        {
          printf("\nSTMT_EXEC;;7080\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7082\n");
if ((int const) * p == 79)
        {
          printf("\nSTMT_EXEC;;7084\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7086\n");
if ((int const) * p == 80)
        {
          printf("\nSTMT_EXEC;;7088\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7090\n");
if ((int const) * p == 81)
        {
          printf("\nSTMT_EXEC;;7092\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7094\n");
if ((int const) * p == 82)
        {
          printf("\nSTMT_EXEC;;7096\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7098\n");
if ((int const) * p == 83)
        {
          printf("\nSTMT_EXEC;;7100\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7102\n");
if ((int const) * p == 84)
        {
          printf("\nSTMT_EXEC;;7104\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7106\n");
if ((int const) * p == 85)
        {
          printf("\nSTMT_EXEC;;7108\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7110\n");
if ((int const) * p == 86)
        {
          printf("\nSTMT_EXEC;;7112\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7114\n");
if ((int const) * p == 87)
        {
          printf("\nSTMT_EXEC;;7116\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7118\n");
if ((int const) * p == 88)
        {
          printf("\nSTMT_EXEC;;7120\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7122\n");
if ((int const) * p == 89)
        {
          printf("\nSTMT_EXEC;;7124\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7126\n");
if ((int const) * p == 90)
        {
          printf("\nSTMT_EXEC;;7128\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7130\n");
if ((int const) * p == 91)
        {
          printf("\nSTMT_EXEC;;7132\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7134\n");
if ((int const) * p == 92)
        {
          printf("\nSTMT_EXEC;;7136\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7138\n");
if ((int const) * p == 93)
        {
          printf("\nSTMT_EXEC;;7140\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7142\n");
if ((int const) * p == 94)
        {
          printf("\nSTMT_EXEC;;7144\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7146\n");
if ((int const) * p == 95)
        {
          printf("\nSTMT_EXEC;;7148\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7150\n");
if ((int const) * p == 97)
        {
          printf("\nSTMT_EXEC;;7152\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7154\n");
if ((int const) * p == 98)
        {
          printf("\nSTMT_EXEC;;7156\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7158\n");
if ((int const) * p == 99)
        {
          printf("\nSTMT_EXEC;;7160\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7162\n");
if ((int const) * p == 100)
        {
          printf("\nSTMT_EXEC;;7164\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7166\n");
if ((int const) * p == 101)
        {
          printf("\nSTMT_EXEC;;7168\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7170\n");
if ((int const) * p == 102)
        {
          printf("\nSTMT_EXEC;;7172\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7174\n");
if ((int const) * p == 103)
        {
          printf("\nSTMT_EXEC;;7176\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7178\n");
if ((int const) * p == 104)
        {
          printf("\nSTMT_EXEC;;7180\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7182\n");
if ((int const) * p == 105)
        {
          printf("\nSTMT_EXEC;;7184\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7186\n");
if ((int const) * p == 106)
        {
          printf("\nSTMT_EXEC;;7188\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7190\n");
if ((int const) * p == 107)
        {
          printf("\nSTMT_EXEC;;7192\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7194\n");
if ((int const) * p == 108)
        {
          printf("\nSTMT_EXEC;;7196\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7198\n");
if ((int const) * p == 109)
        {
          printf("\nSTMT_EXEC;;7200\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7202\n");
if ((int const) * p == 110)
        {
          printf("\nSTMT_EXEC;;7204\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7206\n");
if ((int const) * p == 111)
        {
          printf("\nSTMT_EXEC;;7208\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7210\n");
if ((int const) * p == 112)
        {
          printf("\nSTMT_EXEC;;7212\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7214\n");
if ((int const) * p == 113)
        {
          printf("\nSTMT_EXEC;;7216\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7218\n");
if ((int const) * p == 114)
        {
          printf("\nSTMT_EXEC;;7220\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7222\n");
if ((int const) * p == 115)
        {
          printf("\nSTMT_EXEC;;7224\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7226\n");
if ((int const) * p == 116)
        {
          printf("\nSTMT_EXEC;;7228\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7230\n");
if ((int const) * p == 117)
        {
          printf("\nSTMT_EXEC;;7232\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7234\n");
if ((int const) * p == 118)
        {
          printf("\nSTMT_EXEC;;7236\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7238\n");
if ((int const) * p == 119)
        {
          printf("\nSTMT_EXEC;;7240\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7242\n");
if ((int const) * p == 120)
        {
          printf("\nSTMT_EXEC;;7244\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7246\n");
if ((int const) * p == 121)
        {
          printf("\nSTMT_EXEC;;7248\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7250\n");
if ((int const) * p == 122)
        {
          printf("\nSTMT_EXEC;;7252\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7254\n");
if ((int const) * p == 123)
        {
          printf("\nSTMT_EXEC;;7256\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7258\n");
if ((int const) * p == 124)
        {
          printf("\nSTMT_EXEC;;7260\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7262\n");
if ((int const) * p == 125)
        {
          printf("\nSTMT_EXEC;;7264\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7266\n");
if ((int const) * p == 126)
        {
          printf("\nSTMT_EXEC;;7268\n");
goto case_32;
        }
        printf("\nSTMT_EXEC;;7270\n");
goto switch_default;
      case_32:
        {
printf("\nSTMT_EXEC;;7272\n");
p++;
}

        printf("\nSTMT_EXEC;;7273\n");
width++;
        printf("\nSTMT_EXEC;;7274\n");
goto switch_break;
      switch_default:
        {
printf("\nSTMT_EXEC;;7276\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(&mbstate), 0, sizeof(mbstate));printf("\nFUNC_RETURN;;\n");

}

        printf("\nSTMT_EXEC;;7277\n");
while (1)
        {
          printf("\nSTMT_EXEC;;7279\n");
printf("\nFUNC_CALL;mbrtowc(wchar_t *__restrict,const char *__restrict,size_t,mbstate_t *__restrict);\n");
bytes = mbrtowc(&wc, p, (size_t)(plimit - p), &mbstate);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7280\n");
if (bytes == 0xffffffffffffffffUL)
          {
            printf("\nSTMT_EXEC;;7282\n");
if (!(flags & 1))
            {
              printf("\nSTMT_EXEC;;7284\n");
p++;
              printf("\nSTMT_EXEC;;7285\n");
width++;
              printf("\nSTMT_EXEC;;7286\n");
goto while_break___0;
            }
            else
            {
              printf("\nSTMT_EXEC;;7290\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
            }
          }
          printf("\nSTMT_EXEC;;7293\n");
if (bytes == 0xfffffffffffffffeUL)
          {
            printf("\nSTMT_EXEC;;7295\n");
if (!(flags & 1))
            {
              printf("\nSTMT_EXEC;;7297\n");
p = plimit;
              printf("\nSTMT_EXEC;;7298\n");
width++;
              printf("\nSTMT_EXEC;;7299\n");
goto while_break___0;
            }
            else
            {
              printf("\nSTMT_EXEC;;7303\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
            }
          }
          printf("\nSTMT_EXEC;;7306\n");
if (bytes == 0UL)
          {
            printf("\nSTMT_EXEC;;7308\n");
bytes = (size_t)1;
          }
          printf("\nSTMT_EXEC;;7310\n");
printf("\nFUNC_CALL;wcwidth(wchar_t);\n");
w = wcwidth(wc);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7311\n");
if (w >= 0)
          {
            printf("\nSTMT_EXEC;;7313\n");
if (w > 2147483647 - width)
            {
              printf("\nSTMT_EXEC;;7315\n");
goto overflow;
            }
            printf("\nSTMT_EXEC;;7317\n");
width += w;
          }
          else
          {
            printf("\nSTMT_EXEC;;7321\n");
if (!(flags & 2))
            {
              printf("\nSTMT_EXEC;;7323\n");
printf("\nFUNC_CALL;iswcntrl(wint_t);\n");
tmp = iswcntrl((wint_t)wc);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7324\n");
if (!tmp)
              {
                printf("\nSTMT_EXEC;;7326\n");
if (width == 2147483647)
                {
                  printf("\nSTMT_EXEC;;7328\n");
goto overflow;
                }
                printf("\nSTMT_EXEC;;7330\n");
width++;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;7335\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
            }
          }
          printf("\nSTMT_EXEC;;7338\n");
p += bytes;
          printf("\nSTMT_EXEC;;7339\n");
printf("\nFUNC_CALL;mbsinit(const mbstate_t *);\n");
tmp___0 = mbsinit((mbstate_t const *)(&mbstate));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7340\n");
if (tmp___0)
          {
            printf("\nSTMT_EXEC;;7342\n");
goto while_break___0;
          }
        }
      while_break___0:;
        printf("\nSTMT_EXEC;;7346\n");
goto switch_break;
      switch_break:;
      }
    while_break:;
      printf("\nSTMT_EXEC;;7350\n");
printf("\nFUNC_RETURN;;\n");
return (width);
    }
    printf("\nSTMT_EXEC;;7352\n");
while (1)
    {
      printf("\nSTMT_EXEC;;7354\n");
if (!((unsigned long)p < (unsigned long)plimit))
      {
        printf("\nSTMT_EXEC;;7356\n");
goto while_break___1;
      }
      printf("\nSTMT_EXEC;;7358\n");
tmp___2 = p;
      printf("\nSTMT_EXEC;;7359\n");
p++;
      printf("\nSTMT_EXEC;;7360\n");
c = (unsigned char)*tmp___2;
      printf("\nSTMT_EXEC;;7361\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___4 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7362\n");
if ((int const) * (*tmp___4 + (int)c) & 16384)
      {
        printf("\nSTMT_EXEC;;7364\n");
if (width == 2147483647)
        {
          printf("\nSTMT_EXEC;;7366\n");
goto overflow;
        }
        printf("\nSTMT_EXEC;;7368\n");
width++;
      }
      else
      {
        printf("\nSTMT_EXEC;;7372\n");
if (!(flags & 2))
        {
          printf("\nSTMT_EXEC;;7374\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___3 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7375\n");
if (!((int const) * (*tmp___3 + (int)c) & 2))
          {
            printf("\nSTMT_EXEC;;7377\n");
if (width == 2147483647)
            {
              printf("\nSTMT_EXEC;;7379\n");
goto overflow;
            }
            printf("\nSTMT_EXEC;;7381\n");
width++;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;7386\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
      }
    }
  while_break___1:;
    printf("\nSTMT_EXEC;;7391\n");
printf("\nFUNC_RETURN;;\n");
return (width);
  overflow:
    {
printf("\nSTMT_EXEC;;7393\n");
printf("\nFUNC_RETURN;;\n");
return (2147483647);
}

  }
printf("\nFUNC_RETURN;;\n");
}
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2);
extern __attribute__((__nothrow__)) wint_t(__attribute__((__leaf__)) towlower)(wint_t __wc);
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2)
{
  printf("\nFUNC_CALL;mbscasecmp(const char *,const char *);\n");
printf("\nSTMT_EXEC;;7400\n");
mbui_iterator_t iter1;
  printf("\nSTMT_EXEC;;7401\n");
mbui_iterator_t iter2;
  printf("\nSTMT_EXEC;;7402\n");
int cmp;
  printf("\nSTMT_EXEC;;7403\n");
wint_t tmp;
  printf("\nSTMT_EXEC;;7404\n");
wint_t tmp___0;
  printf("\nSTMT_EXEC;;7405\n");
int tmp___1;
  printf("\nSTMT_EXEC;;7406\n");
int tmp___2;
  printf("\nSTMT_EXEC;;7407\n");
int tmp___4;
  printf("\nSTMT_EXEC;;7408\n");
int tmp___5;
  printf("\nSTMT_EXEC;;7409\n");
int tmp___7;
  printf("\nSTMT_EXEC;;7410\n");
int tmp___8;
  printf("\nSTMT_EXEC;;7411\n");
int tmp___9;
  printf("\nSTMT_EXEC;;7412\n");
int tmp___10;
  printf("\nSTMT_EXEC;;7413\n");
int tmp___11;
  printf("\nSTMT_EXEC;;7414\n");
int tmp___12;
  printf("\nSTMT_EXEC;;7415\n");
int tmp___13;
  printf("\nSTMT_EXEC;;7416\n");
int tmp___14;
  printf("\nSTMT_EXEC;;7417\n");
int tmp___15;
  printf("\nSTMT_EXEC;;7418\n");
int tmp___16;
  printf("\nSTMT_EXEC;;7419\n");
unsigned char const *p1;
  printf("\nSTMT_EXEC;;7420\n");
unsigned char const *p2;
  printf("\nSTMT_EXEC;;7421\n");
unsigned char c1;
  printf("\nSTMT_EXEC;;7422\n");
unsigned char c2;
  printf("\nSTMT_EXEC;;7423\n");
int tmp___18;
  printf("\nSTMT_EXEC;;7424\n");
unsigned short const **tmp___19;
  printf("\nSTMT_EXEC;;7425\n");
int tmp___21;
  printf("\nSTMT_EXEC;;7426\n");
unsigned short const **tmp___22;
  printf("\nSTMT_EXEC;;7427\n");
size_t tmp___25;
  {
    printf("\nSTMT_EXEC;;7429\n");
if ((unsigned long)s1 == (unsigned long)s2)
    {
      printf("\nSTMT_EXEC;;7431\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;7433\n");
printf("\nFUNC_CALL;__ctype_get_mb_cur_max();\n");
tmp___25 = __ctype_get_mb_cur_max();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7434\n");
if (tmp___25 > 1UL)
    {
      printf("\nSTMT_EXEC;;7436\n");
iter1.cur.ptr = s1;
      printf("\nSTMT_EXEC;;7437\n");
iter1.in_shift = (_Bool)0;
      printf("\nSTMT_EXEC;;7438\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(&iter1.state), '\000', sizeof(mbstate_t));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7439\n");
iter1.next_done = (_Bool)0;
      printf("\nSTMT_EXEC;;7440\n");
iter2.cur.ptr = s2;
      printf("\nSTMT_EXEC;;7441\n");
iter2.in_shift = (_Bool)0;
      printf("\nSTMT_EXEC;;7442\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(&iter2.state), '\000', sizeof(mbstate_t));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7443\n");
iter2.next_done = (_Bool)0;
      printf("\nSTMT_EXEC;;7444\n");
while (1)
      {
        printf("\nSTMT_EXEC;;7446\n");
mbuiter_multi_next(&iter1);
        printf("\nSTMT_EXEC;;7447\n");
if (iter1.cur.wc_valid)
        {
          printf("\nSTMT_EXEC;;7449\n");
if (iter1.cur.wc == 0)
          {
            printf("\nSTMT_EXEC;;7451\n");
tmp___13 = 0;
          }
          else
          {
            printf("\nSTMT_EXEC;;7455\n");
tmp___13 = 1;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;7460\n");
tmp___13 = 1;
        }
        printf("\nSTMT_EXEC;;7462\n");
if (tmp___13)
        {
          printf("\nSTMT_EXEC;;7464\n");
mbuiter_multi_next(&iter2);
          printf("\nSTMT_EXEC;;7465\n");
if (iter2.cur.wc_valid)
          {
            printf("\nSTMT_EXEC;;7467\n");
if (iter2.cur.wc == 0)
            {
              printf("\nSTMT_EXEC;;7469\n");
tmp___14 = 0;
            }
            else
            {
              printf("\nSTMT_EXEC;;7473\n");
tmp___14 = 1;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;7478\n");
tmp___14 = 1;
          }
          printf("\nSTMT_EXEC;;7480\n");
if (!tmp___14)
          {
            printf("\nSTMT_EXEC;;7482\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;7487\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;7489\n");
if (iter1.cur.wc_valid)
        {
          printf("\nSTMT_EXEC;;7491\n");
if (iter2.cur.wc_valid)
          {
            printf("\nSTMT_EXEC;;7493\n");
printf("\nFUNC_CALL;towlower(wint_t);\n");
tmp = towlower((wint_t)iter1.cur.wc);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;7494\n");
printf("\nFUNC_CALL;towlower(wint_t);\n");
tmp___0 = towlower((wint_t)iter2.cur.wc);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;7495\n");
tmp___1 = (int)tmp - (int)tmp___0;
          }
          else
          {
            printf("\nSTMT_EXEC;;7499\n");
tmp___1 = -1;
          }
          printf("\nSTMT_EXEC;;7501\n");
tmp___12 = tmp___1;
        }
        else
        {
          printf("\nSTMT_EXEC;;7505\n");
if (iter2.cur.wc_valid)
          {
            printf("\nSTMT_EXEC;;7507\n");
tmp___11 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;7511\n");
if (iter1.cur.bytes == iter2.cur.bytes)
            {
              printf("\nSTMT_EXEC;;7513\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___2 = memcmp((void const *)iter1.cur.ptr, (void const *)iter2.cur.ptr, iter1.cur.bytes);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7514\n");
tmp___10 = tmp___2;
            }
            else
            {
              printf("\nSTMT_EXEC;;7518\n");
if (iter1.cur.bytes < iter2.cur.bytes)
              {
                printf("\nSTMT_EXEC;;7520\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___5 = memcmp((void const *)iter1.cur.ptr, (void const *)iter2.cur.ptr, iter1.cur.bytes);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;7521\n");
if (tmp___5 > 0)
                {
                  printf("\nSTMT_EXEC;;7523\n");
tmp___4 = 1;
                }
                else
                {
                  printf("\nSTMT_EXEC;;7527\n");
tmp___4 = -1;
                }
                printf("\nSTMT_EXEC;;7529\n");
tmp___9 = tmp___4;
              }
              else
              {
                printf("\nSTMT_EXEC;;7533\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___8 = memcmp((void const *)iter1.cur.ptr, (void const *)iter2.cur.ptr, iter2.cur.bytes);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;7534\n");
if (tmp___8 >= 0)
                {
                  printf("\nSTMT_EXEC;;7536\n");
tmp___7 = 1;
                }
                else
                {
                  printf("\nSTMT_EXEC;;7540\n");
tmp___7 = -1;
                }
                printf("\nSTMT_EXEC;;7542\n");
tmp___9 = tmp___7;
              }
              printf("\nSTMT_EXEC;;7544\n");
tmp___10 = tmp___9;
            }
            printf("\nSTMT_EXEC;;7546\n");
tmp___11 = tmp___10;
          }
          printf("\nSTMT_EXEC;;7548\n");
tmp___12 = tmp___11;
        }
        printf("\nSTMT_EXEC;;7550\n");
cmp = tmp___12;
        printf("\nSTMT_EXEC;;7551\n");
if (cmp != 0)
        {
          printf("\nSTMT_EXEC;;7553\n");
printf("\nFUNC_RETURN;;\n");
return (cmp);
        }
        printf("\nSTMT_EXEC;;7555\n");
iter1.cur.ptr += iter1.cur.bytes;
        printf("\nSTMT_EXEC;;7556\n");
iter1.next_done = (_Bool)0;
        printf("\nSTMT_EXEC;;7557\n");
iter2.cur.ptr += iter2.cur.bytes;
        printf("\nSTMT_EXEC;;7558\n");
iter2.next_done = (_Bool)0;
      }
    while_break:
      {
printf("\nSTMT_EXEC;;7561\n");
mbuiter_multi_next(&iter1);
}

      printf("\nSTMT_EXEC;;7562\n");
if (iter1.cur.wc_valid)
      {
        printf("\nSTMT_EXEC;;7564\n");
if (iter1.cur.wc == 0)
        {
          printf("\nSTMT_EXEC;;7566\n");
tmp___15 = 0;
        }
        else
        {
          printf("\nSTMT_EXEC;;7570\n");
tmp___15 = 1;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7575\n");
tmp___15 = 1;
      }
      printf("\nSTMT_EXEC;;7577\n");
if (tmp___15)
      {
        printf("\nSTMT_EXEC;;7579\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
      printf("\nSTMT_EXEC;;7581\n");
mbuiter_multi_next(&iter2);
      printf("\nSTMT_EXEC;;7582\n");
if (iter2.cur.wc_valid)
      {
        printf("\nSTMT_EXEC;;7584\n");
if (iter2.cur.wc == 0)
        {
          printf("\nSTMT_EXEC;;7586\n");
tmp___16 = 0;
        }
        else
        {
          printf("\nSTMT_EXEC;;7590\n");
tmp___16 = 1;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7595\n");
tmp___16 = 1;
      }
      printf("\nSTMT_EXEC;;7597\n");
if (tmp___16)
      {
        printf("\nSTMT_EXEC;;7599\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
      }
      printf("\nSTMT_EXEC;;7601\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    else
    {
      printf("\nSTMT_EXEC;;7605\n");
p1 = (unsigned char const *)s1;
      printf("\nSTMT_EXEC;;7606\n");
p2 = (unsigned char const *)s2;
      printf("\nSTMT_EXEC;;7607\n");
while (1)
      {
        printf("\nSTMT_EXEC;;7609\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___19 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7610\n");
if ((int const) * (*tmp___19 + (int)*p1) & 256)
        {
          printf("\nSTMT_EXEC;;7612\n");
printf("\nFUNC_CALL;tolower(int);\n");
tmp___18 = tolower((int)*p1);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7613\n");
c1 = (unsigned char)tmp___18;
        }
        else
        {
          printf("\nSTMT_EXEC;;7617\n");
c1 = (unsigned char)*p1;
        }
        printf("\nSTMT_EXEC;;7619\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___22 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7620\n");
if ((int const) * (*tmp___22 + (int)*p2) & 256)
        {
          printf("\nSTMT_EXEC;;7622\n");
printf("\nFUNC_CALL;tolower(int);\n");
tmp___21 = tolower((int)*p2);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7623\n");
c2 = (unsigned char)tmp___21;
        }
        else
        {
          printf("\nSTMT_EXEC;;7627\n");
c2 = (unsigned char)*p2;
        }
        printf("\nSTMT_EXEC;;7629\n");
if ((int)c1 == 0)
        {
          printf("\nSTMT_EXEC;;7631\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;7633\n");
p1++;
        printf("\nSTMT_EXEC;;7634\n");
p2++;
        printf("\nSTMT_EXEC;;7635\n");
if (!((int)c1 == (int)c2))
        {
          printf("\nSTMT_EXEC;;7637\n");
goto while_break___0;
        }
      }
    while_break___0:;
      printf("\nSTMT_EXEC;;7641\n");
printf("\nFUNC_RETURN;;\n");
return ((int)c1 - (int)c2);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
unsigned int const is_basic_table[8] = {(unsigned int const)6656, (unsigned int const)4294967279U, (unsigned int const)4294967294U, (unsigned int const)2147483646};
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) exit)(int __status);
extern int optind;
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
static char const *volatile charset_aliases;
static char const *get_charset_aliases(void)
{
  printf("\nFUNC_CALL;get_charset_aliases();\n");
printf("\nSTMT_EXEC;;7676\n");
char const *cp;
  printf("\nSTMT_EXEC;;7677\n");
char const *dir;
  printf("\nSTMT_EXEC;;7678\n");
char const *base;
  printf("\nSTMT_EXEC;;7679\n");
char *file_name___3;
  printf("\nSTMT_EXEC;;7680\n");
size_t dir_len___0;
  printf("\nSTMT_EXEC;;7681\n");
size_t tmp;
  printf("\nSTMT_EXEC;;7682\n");
size_t base_len___0;
  printf("\nSTMT_EXEC;;7683\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;7684\n");
int add_slash;
  printf("\nSTMT_EXEC;;7685\n");
int tmp___1;
  printf("\nSTMT_EXEC;;7686\n");
int fd;
  printf("\nSTMT_EXEC;;7687\n");
FILE *fp;
  printf("\nSTMT_EXEC;;7688\n");
char *res_ptr;
  printf("\nSTMT_EXEC;;7689\n");
size_t res_size;
  printf("\nSTMT_EXEC;;7690\n");
int c;
  printf("\nSTMT_EXEC;;7691\n");
char buf1[51];
  printf("\nSTMT_EXEC;;7692\n");
char buf2[51];
  printf("\nSTMT_EXEC;;7693\n");
size_t l1;
  printf("\nSTMT_EXEC;;7694\n");
size_t l2;
  printf("\nSTMT_EXEC;;7695\n");
char *old_res_ptr;
  printf("\nSTMT_EXEC;;7696\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;7698\n");
cp = (char const *)charset_aliases;
    printf("\nSTMT_EXEC;;7699\n");
if ((unsigned long)cp == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7701\n");
base = "charset.alias";
      printf("\nSTMT_EXEC;;7702\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
dir = (char const *)getenv("CHARSETALIASDIR");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7703\n");
if ((unsigned long)dir == (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7705\n");
dir = "/usr/local/lib";
      }
      else
      {
        printf("\nSTMT_EXEC;;7709\n");
if ((int const) * (dir + 0) == 0)
        {
          printf("\nSTMT_EXEC;;7711\n");
dir = "/usr/local/lib";
        }
      }
      printf("\nSTMT_EXEC;;7714\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen(dir);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7715\n");
dir_len___0 = tmp;
      printf("\nSTMT_EXEC;;7716\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen(base);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7717\n");
base_len___0 = tmp___0;
      printf("\nSTMT_EXEC;;7718\n");
if (dir_len___0 > 0UL)
      {
        printf("\nSTMT_EXEC;;7720\n");
if (!((int const) * (dir + (dir_len___0 - 1UL)) == 47))
        {
          printf("\nSTMT_EXEC;;7722\n");
tmp___1 = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;7726\n");
tmp___1 = 0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7731\n");
tmp___1 = 0;
      }
      printf("\nSTMT_EXEC;;7733\n");
add_slash = tmp___1;
      printf("\nSTMT_EXEC;;7734\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
file_name___3 = (char *)malloc(((dir_len___0 + (size_t)add_slash) + base_len___0) + 1UL);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7735\n");
if ((unsigned long)file_name___3 != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7737\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)file_name___3, (void const *)dir, dir_len___0);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7738\n");
if (add_slash)
        {
          printf("\nSTMT_EXEC;;7740\n");
*(file_name___3 + dir_len___0) = (char)'/';
        }
        printf("\nSTMT_EXEC;;7742\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)((file_name___3 + dir_len___0) + add_slash), (void const *)base, base_len___0 + 1UL);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7744\n");
if ((unsigned long)file_name___3 == (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7746\n");
cp = "";
      }
      else
      {
        printf("\nSTMT_EXEC;;7750\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
fd = open((char const *)file_name___3, 131072);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7751\n");
if (fd < 0)
        {
          printf("\nSTMT_EXEC;;7753\n");
cp = "";
        }
        else
        {
          printf("\nSTMT_EXEC;;7757\n");
printf("\nFUNC_CALL;fdopen(int,const char *);\n");
fp = fdopen(fd, "r");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7758\n");
if ((unsigned long)fp == (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7760\n");
printf("\nFUNC_CALL;close(int);\n");
close(fd);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;7761\n");
cp = "";
          }
          else
          {
            printf("\nSTMT_EXEC;;7765\n");
res_ptr = (char *)((void *)0);
            printf("\nSTMT_EXEC;;7766\n");
res_size = (size_t)0;
            printf("\nSTMT_EXEC;;7767\n");
while (1)
            {
              printf("\nSTMT_EXEC;;7769\n");
printf("\nFUNC_CALL;getc_unlocked(FILE *);\n");
c = getc_unlocked(fp);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7770\n");
if (c == -1)
              {
                printf("\nSTMT_EXEC;;7772\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;7774\n");
if (c == 10)
              {
                printf("\nSTMT_EXEC;;7776\n");
goto __Cont;
              }
              else
              {
                printf("\nSTMT_EXEC;;7780\n");
if (c == 32)
                {
                  printf("\nSTMT_EXEC;;7782\n");
goto __Cont;
                }
                else
                {
                  printf("\nSTMT_EXEC;;7786\n");
if (c == 9)
                  {
                    printf("\nSTMT_EXEC;;7788\n");
goto __Cont;
                  }
                }
              }
              printf("\nSTMT_EXEC;;7792\n");
if (c == 35)
              {
                printf("\nSTMT_EXEC;;7794\n");
while (1)
                {
                  printf("\nSTMT_EXEC;;7796\n");
printf("\nFUNC_CALL;getc_unlocked(FILE *);\n");
c = getc_unlocked(fp);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;7797\n");
if (c == -1)
                  {
                    printf("\nSTMT_EXEC;;7799\n");
goto while_break___0;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;7803\n");
if (c == 10)
                    {
                      printf("\nSTMT_EXEC;;7805\n");
goto while_break___0;
                    }
                  }
                }
              while_break___0:;
                printf("\nSTMT_EXEC;;7810\n");
if (c == -1)
                {
                  printf("\nSTMT_EXEC;;7812\n");
goto while_break;
                }
                printf("\nSTMT_EXEC;;7814\n");
goto __Cont;
              }
              printf("\nSTMT_EXEC;;7816\n");
printf("\nFUNC_CALL;ungetc(int,FILE *);\n");
ungetc(c, fp);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7817\n");
printf("\nFUNC_CALL;fscanf(FILE *__restrict,const char *__restrict);\n");
tmp___3 = fscanf(fp, "%50s %50s", buf1, buf2);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7818\n");
if (tmp___3 < 2)
              {
                printf("\nSTMT_EXEC;;7820\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;7822\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
l1 = strlen((char const *)(buf1));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7823\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
l2 = strlen((char const *)(buf2));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7824\n");
old_res_ptr = res_ptr;
              printf("\nSTMT_EXEC;;7825\n");
if (res_size == 0UL)
              {
                printf("\nSTMT_EXEC;;7827\n");
res_size = ((l1 + 1UL) + l2) + 1UL;
                printf("\nSTMT_EXEC;;7828\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
res_ptr = (char *)malloc(res_size + 1UL);printf("\nFUNC_RETURN;;\n");

              }
              else
              {
                printf("\nSTMT_EXEC;;7832\n");
res_size += ((l1 + 1UL) + l2) + 1UL;
                printf("\nSTMT_EXEC;;7833\n");
printf("\nFUNC_CALL;realloc(void *,size_t);\n");
res_ptr = (char *)realloc((void *)res_ptr, res_size + 1UL);printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;7835\n");
if ((unsigned long)res_ptr == (unsigned long)((void *)0))
              {
                printf("\nSTMT_EXEC;;7837\n");
res_size = (size_t)0;
                printf("\nSTMT_EXEC;;7838\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)old_res_ptr);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;7839\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;7841\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy(((res_ptr + res_size) - (l2 + 1UL)) - (l1 + 1UL), (char const *)(buf1));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7842\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((res_ptr + res_size) - (l2 + 1UL), (char const *)(buf2));printf("\nFUNC_RETURN;;\n");

            __Cont:;
            }
          while_break:
            {
printf("\nSTMT_EXEC;;7846\n");
rpl_fclose(fp);
}

            printf("\nSTMT_EXEC;;7847\n");
if (res_size == 0UL)
            {
              printf("\nSTMT_EXEC;;7849\n");
cp = "";
            }
            else
            {
              printf("\nSTMT_EXEC;;7853\n");
*(res_ptr + res_size) = (char)'\000';
              printf("\nSTMT_EXEC;;7854\n");
cp = (char const *)res_ptr;
            }
          }
        }
        printf("\nSTMT_EXEC;;7858\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)file_name___3);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7860\n");
charset_aliases = cp;
    }
    printf("\nSTMT_EXEC;;7862\n");
printf("\nFUNC_RETURN;;\n");
return (cp);
  }
printf("\nFUNC_RETURN;;\n");
}
char const *locale_charset(void)
{
  printf("\nFUNC_CALL;locale_charset();\n");
printf("\nSTMT_EXEC;;7867\n");
char const *codeset;
  printf("\nSTMT_EXEC;;7868\n");
char const *aliases;
  printf("\nSTMT_EXEC;;7869\n");
size_t tmp;
  printf("\nSTMT_EXEC;;7870\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;7871\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;7872\n");
int tmp___2;
  {
    printf("\nSTMT_EXEC;;7874\n");
printf("\nFUNC_CALL;nl_langinfo(nl_item);\n");
codeset = (char const *)nl_langinfo(14);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7875\n");
if ((unsigned long)codeset == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7877\n");
codeset = "";
    }
    printf("\nSTMT_EXEC;;7879\n");
aliases = get_charset_aliases();
    printf("\nSTMT_EXEC;;7880\n");
while (1)
    {
      printf("\nSTMT_EXEC;;7882\n");
if (!((int const) * aliases != 0))
      {
        printf("\nSTMT_EXEC;;7884\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;7886\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___2 = strcmp(codeset, aliases);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7887\n");
if (tmp___2 == 0)
      {
        printf("\nSTMT_EXEC;;7889\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___1 = strlen(aliases);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7890\n");
codeset = (aliases + tmp___1) + 1;
        printf("\nSTMT_EXEC;;7891\n");
goto while_break;
      }
      else
      {
        printf("\nSTMT_EXEC;;7895\n");
if ((int const) * (aliases + 0) == 42)
        {
          printf("\nSTMT_EXEC;;7897\n");
if ((int const) * (aliases + 1) == 0)
          {
            printf("\nSTMT_EXEC;;7899\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___1 = strlen(aliases);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;7900\n");
codeset = (aliases + tmp___1) + 1;
            printf("\nSTMT_EXEC;;7901\n");
goto while_break;
          }
        }
      }
      printf("\nSTMT_EXEC;;7905\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen(aliases);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7906\n");
aliases += tmp + 1UL;
      printf("\nSTMT_EXEC;;7907\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen(aliases);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7908\n");
aliases += tmp___0 + 1UL;
    }
  while_break:;
    printf("\nSTMT_EXEC;;7911\n");
if ((int const) * (codeset + 0) == 0)
    {
      printf("\nSTMT_EXEC;;7913\n");
codeset = "ASCII";
    }
    printf("\nSTMT_EXEC;;7915\n");
printf("\nFUNC_RETURN;;\n");
return (codeset);
  }
printf("\nFUNC_RETURN;;\n");
}
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
static int heap_default_compare(void const *a, void const *b)
{
  printf("\nFUNC_CALL;heap_default_compare(const void *,const void *);\n");
{
    printf("\nSTMT_EXEC;;7931\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
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
    printf("\nSTMT_EXEC;;7941\n");
if (n_reserve == 0UL)
    {
      printf("\nSTMT_EXEC;;7943\n");
n_reserve = (size_t)1;
    }
    printf("\nSTMT_EXEC;;7945\n");
heap->array = (void **)xnmalloc(n_reserve, sizeof(*(heap->array)));
    printf("\nSTMT_EXEC;;7946\n");
*(heap->array + 0) = (void *)0;
    printf("\nSTMT_EXEC;;7947\n");
heap->capacity = n_reserve;
    printf("\nSTMT_EXEC;;7948\n");
heap->count = (size_t)0;
    printf("\nSTMT_EXEC;;7949\n");
if (compare___0)
    {
      printf("\nSTMT_EXEC;;7951\n");
heap->compare = compare___0;
    }
    else
    {
      printf("\nSTMT_EXEC;;7955\n");
heap->compare = &heap_default_compare;
    }
    printf("\nSTMT_EXEC;;7957\n");
printf("\nFUNC_RETURN;;\n");
return (heap);
  }
printf("\nFUNC_RETURN;;\n");
}
void heap_free(struct heap *heap)
{
  printf("\nFUNC_CALL;heap_free(struct heap *);\n");
{
    printf("\nSTMT_EXEC;;7963\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)heap->array);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7964\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)heap);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7965\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int heap_insert(struct heap *heap, void *item)
{
  printf("\nFUNC_CALL;heap_insert(struct heap *,void *);\n");
{
    printf("\nSTMT_EXEC;;7971\n");
if (heap->capacity - 1UL <= heap->count)
    {
      printf("\nSTMT_EXEC;;7973\n");
heap->array = (void **)x2nrealloc((void *)heap->array, &heap->capacity, sizeof(*(heap->array)));
    }
    printf("\nSTMT_EXEC;;7975\n");
(heap->count)++;
    printf("\nSTMT_EXEC;;7976\n");
*(heap->array + heap->count) = item;
    printf("\nSTMT_EXEC;;7977\n");
heapify_up(heap->array, heap->count, heap->compare);
    printf("\nSTMT_EXEC;;7978\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
void *heap_remove_top(struct heap *heap)
{
  printf("\nFUNC_CALL;heap_remove_top(struct heap *);\n");
printf("\nSTMT_EXEC;;7983\n");
void *top;
  printf("\nSTMT_EXEC;;7984\n");
size_t tmp;
  {
    printf("\nSTMT_EXEC;;7986\n");
if (heap->count == 0UL)
    {
      printf("\nSTMT_EXEC;;7988\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    printf("\nSTMT_EXEC;;7990\n");
top = *(heap->array + 1);
    printf("\nSTMT_EXEC;;7991\n");
tmp = heap->count;
    printf("\nSTMT_EXEC;;7992\n");
(heap->count)--;
    printf("\nSTMT_EXEC;;7993\n");
*(heap->array + 1) = *(heap->array + tmp);
    printf("\nSTMT_EXEC;;7994\n");
heapify_down(heap->array, heap->count, (size_t)1, heap->compare);
    printf("\nSTMT_EXEC;;7995\n");
printf("\nFUNC_RETURN;;\n");
return (top);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t heapify_down(void **array, size_t count, size_t initial, int (*compare___0)(void const *, void const *))
{
  printf("\nFUNC_CALL;heapify_down(void **,size_t,size_t,int (*)(const void *, const void *));\n");
printf("\nSTMT_EXEC;;8000\n");
void *element;
  printf("\nSTMT_EXEC;;8001\n");
size_t parent;
  printf("\nSTMT_EXEC;;8002\n");
size_t child;
  printf("\nSTMT_EXEC;;8003\n");
int tmp;
  printf("\nSTMT_EXEC;;8004\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;8006\n");
element = *(array + initial);
    printf("\nSTMT_EXEC;;8007\n");
parent = initial;
    printf("\nSTMT_EXEC;;8008\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8010\n");
if (!(parent <= count / 2UL))
      {
        printf("\nSTMT_EXEC;;8012\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8014\n");
child = 2UL * parent;
      printf("\nSTMT_EXEC;;8015\n");
if (child < count)
      {
        printf("\nSTMT_EXEC;;8017\n");
tmp = (*compare___0)((void const *)*(array + child), (void const *)*(array + (child + 1UL)));
        printf("\nSTMT_EXEC;;8018\n");
if (tmp < 0)
        {
          printf("\nSTMT_EXEC;;8020\n");
child++;
        }
      }
      printf("\nSTMT_EXEC;;8023\n");
tmp___0 = (*compare___0)((void const *)*(array + child), (void const *)element);
      printf("\nSTMT_EXEC;;8024\n");
if (tmp___0 <= 0)
      {
        printf("\nSTMT_EXEC;;8026\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8028\n");
*(array + parent) = *(array + child);
      printf("\nSTMT_EXEC;;8029\n");
parent = child;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;8032\n");
*(array + parent) = element;
}

    printf("\nSTMT_EXEC;;8033\n");
printf("\nFUNC_RETURN;;\n");
return (parent);
  }
printf("\nFUNC_RETURN;;\n");
}
static void heapify_up(void **array, size_t count, int (*compare___0)(void const *, void const *))
{
  printf("\nFUNC_CALL;heapify_up(void **,size_t,int (*)(const void *, const void *));\n");
printf("\nSTMT_EXEC;;8038\n");
size_t k;
  printf("\nSTMT_EXEC;;8039\n");
void *new_element;
  printf("\nSTMT_EXEC;;8040\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;8042\n");
k = count;
    printf("\nSTMT_EXEC;;8043\n");
new_element = *(array + k);
    printf("\nSTMT_EXEC;;8044\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8046\n");
if (k != 1UL)
      {
        printf("\nSTMT_EXEC;;8048\n");
tmp = (*compare___0)((void const *)*(array + k / 2UL), (void const *)new_element);
        printf("\nSTMT_EXEC;;8049\n");
if (!(tmp <= 0))
        {
          printf("\nSTMT_EXEC;;8051\n");
goto while_break;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8056\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8058\n");
*(array + k) = *(array + k / 2UL);
      printf("\nSTMT_EXEC;;8059\n");
k /= 2UL;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;8062\n");
*(array + k) = new_element;
}

    printf("\nSTMT_EXEC;;8063\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table___0, size_t candidate);
__inline static size_t rotr_sz(size_t x, int n)
{
  printf("\nFUNC_CALL;rotr_sz(size_t,int);\n");
{
    printf("\nSTMT_EXEC;;8071\n");
printf("\nFUNC_RETURN;;\n");
return (((x >> n) | (x << (8UL * sizeof(x) - (unsigned long)n))) & 0xffffffffffffffffUL);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct hash_tuning const default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool)0};
static struct hash_entry *safe_hasher(Hash_table const *table___0, void const *key)
{
  printf("\nFUNC_CALL;safe_hasher(const Hash_table *,const void *);\n");
printf("\nSTMT_EXEC;;8077\n");
size_t n;
  printf("\nSTMT_EXEC;;8078\n");
size_t tmp;
  {
    printf("\nSTMT_EXEC;;8080\n");
tmp = (*(table___0->hasher))(key, (size_t)table___0->n_buckets);
    printf("\nSTMT_EXEC;;8081\n");
n = tmp;
    printf("\nSTMT_EXEC;;8082\n");
if (!(n < (size_t)table___0->n_buckets))
    {
      printf("\nSTMT_EXEC;;8084\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8086\n");
printf("\nFUNC_RETURN;;\n");
return ((struct hash_entry *)(table___0->bucket + n));
  }
printf("\nFUNC_RETURN;;\n");
}
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
size_t hash_string(char const *string, size_t n_buckets)
{
  printf("\nFUNC_CALL;hash_string(const char *,size_t);\n");
printf("\nSTMT_EXEC;;8092\n");
size_t value;
  printf("\nSTMT_EXEC;;8093\n");
unsigned char ch;
  {
    printf("\nSTMT_EXEC;;8095\n");
value = (size_t)0;
    printf("\nSTMT_EXEC;;8096\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8098\n");
ch = (unsigned char)*string;
      printf("\nSTMT_EXEC;;8099\n");
if (!ch)
      {
        printf("\nSTMT_EXEC;;8101\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8103\n");
value = (value * 31UL + (size_t)ch) % n_buckets;
      printf("\nSTMT_EXEC;;8104\n");
string++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;8107\n");
printf("\nFUNC_RETURN;;\n");
return (value);
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate)
{
  printf("\nFUNC_CALL;is_prime(size_t);\n");
printf("\nSTMT_EXEC;;8114\n");
size_t divisor;
  printf("\nSTMT_EXEC;;8115\n");
size_t square;
  printf("\nSTMT_EXEC;;8116\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;8118\n");
divisor = (size_t)3;
    printf("\nSTMT_EXEC;;8119\n");
square = divisor * divisor;
    printf("\nSTMT_EXEC;;8120\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8122\n");
if (square < candidate)
      {
        printf("\nSTMT_EXEC;;8124\n");
if (!(candidate % divisor))
        {
          printf("\nSTMT_EXEC;;8126\n");
goto while_break;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8131\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8133\n");
divisor++;
      printf("\nSTMT_EXEC;;8134\n");
square += 4UL * divisor;
      printf("\nSTMT_EXEC;;8135\n");
divisor++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;8138\n");
if (candidate % divisor)
    {
      printf("\nSTMT_EXEC;;8140\n");
tmp = 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;8144\n");
tmp = 0;
    }
    printf("\nSTMT_EXEC;;8146\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate)
{
  printf("\nFUNC_CALL;next_prime(size_t);\n");
printf("\nSTMT_EXEC;;8153\n");
_Bool tmp;
  {
    printf("\nSTMT_EXEC;;8155\n");
if (candidate < 10UL)
    {
      printf("\nSTMT_EXEC;;8157\n");
candidate = (size_t)10;
    }
    printf("\nSTMT_EXEC;;8159\n");
candidate |= 1UL;
    printf("\nSTMT_EXEC;;8160\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8162\n");
if (0xffffffffffffffffUL != candidate)
      {
        printf("\nSTMT_EXEC;;8164\n");
tmp = is_prime(candidate);
        printf("\nSTMT_EXEC;;8165\n");
if (tmp)
        {
          printf("\nSTMT_EXEC;;8167\n");
goto while_break;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8172\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8174\n");
candidate += 2UL;
    }
  while_break:;
    printf("\nSTMT_EXEC;;8177\n");
printf("\nFUNC_RETURN;;\n");
return (candidate);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t raw_hasher(void const *data, size_t n)
{
  printf("\nFUNC_CALL;raw_hasher(const void *,size_t);\n");
printf("\nSTMT_EXEC;;8182\n");
size_t val;
  printf("\nSTMT_EXEC;;8183\n");
size_t tmp;
  {
    printf("\nSTMT_EXEC;;8185\n");
tmp = rotr_sz((size_t)data, 3);
    printf("\nSTMT_EXEC;;8186\n");
val = tmp;
    printf("\nSTMT_EXEC;;8187\n");
printf("\nFUNC_RETURN;;\n");
return (val % n);
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool raw_comparator(void const *a, void const *b)
{
  printf("\nFUNC_CALL;raw_comparator(const void *,const void *);\n");
{
    printf("\nSTMT_EXEC;;8193\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)((unsigned long)a == (unsigned long)b));
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool check_tuning(Hash_table *table___0)
{
  printf("\nFUNC_CALL;check_tuning(Hash_table *);\n");
printf("\nSTMT_EXEC;;8198\n");
Hash_tuning const *tuning;
  printf("\nSTMT_EXEC;;8199\n");
float epsilon;
  {
    printf("\nSTMT_EXEC;;8201\n");
tuning = table___0->tuning;
    printf("\nSTMT_EXEC;;8202\n");
if ((unsigned long)tuning == (unsigned long)(&default_tuning))
    {
      printf("\nSTMT_EXEC;;8204\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
    }
    printf("\nSTMT_EXEC;;8206\n");
epsilon = 0.1f;
    printf("\nSTMT_EXEC;;8207\n");
if (epsilon < (float)tuning->growth_threshold)
    {
      printf("\nSTMT_EXEC;;8209\n");
if (tuning->growth_threshold < (float const)((float)1 - epsilon))
      {
        printf("\nSTMT_EXEC;;8211\n");
if ((float)1 + epsilon < (float)tuning->growth_factor)
        {
          printf("\nSTMT_EXEC;;8213\n");
if ((float const)0 <= tuning->shrink_threshold)
          {
            printf("\nSTMT_EXEC;;8215\n");
if (tuning->shrink_threshold + (float const)epsilon < tuning->shrink_factor)
            {
              printf("\nSTMT_EXEC;;8217\n");
if (tuning->shrink_factor <= (float const)1)
              {
                printf("\nSTMT_EXEC;;8219\n");
if (tuning->shrink_threshold + (float const)epsilon < tuning->growth_threshold)
                {
                  printf("\nSTMT_EXEC;;8221\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
                }
              }
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;8229\n");
table___0->tuning = &default_tuning;
    printf("\nSTMT_EXEC;;8230\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t __attribute__((__pure__)) compute_bucket_size(size_t candidate, Hash_tuning const *tuning)
{
  printf("\nFUNC_CALL;compute_bucket_size(size_t,const Hash_tuning *);\n");
printf("\nSTMT_EXEC;;8235\n");
float new_candidate;
  printf("\nSTMT_EXEC;;8236\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;8238\n");
if (!tuning->is_n_buckets)
    {
      printf("\nSTMT_EXEC;;8240\n");
new_candidate = (float)((float const)candidate / tuning->growth_threshold);
      printf("\nSTMT_EXEC;;8241\n");
if ((float)0xffffffffffffffffUL <= new_candidate)
      {
        printf("\nSTMT_EXEC;;8243\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t __attribute__((__pure__)))0);
      }
      printf("\nSTMT_EXEC;;8245\n");
candidate = (size_t)new_candidate;
    }
    printf("\nSTMT_EXEC;;8247\n");
candidate = next_prime(candidate);
    printf("\nSTMT_EXEC;;8248\n");
if (sizeof(ptrdiff_t) <= sizeof(size_t))
    {
      printf("\nSTMT_EXEC;;8250\n");
tmp = -1;
    }
    else
    {
      printf("\nSTMT_EXEC;;8254\n");
tmp = -2;
    }
    printf("\nSTMT_EXEC;;8256\n");
if ((size_t)tmp / sizeof(struct hash_entry *) < candidate)
    {
      printf("\nSTMT_EXEC;;8258\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t __attribute__((__pure__)))0);
    }
    printf("\nSTMT_EXEC;;8260\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t __attribute__((__pure__)))candidate);
  }
printf("\nFUNC_RETURN;;\n");
}
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate, Hash_tuning const *tuning, size_t (*hasher)(void const *, size_t), _Bool (*comparator)(void const *, void const *), void (*data_freer)(void *))
{
  printf("\nFUNC_CALL;hash_initialize(size_t,const Hash_tuning *,size_t (*)(const void *, size_t),_Bool (*)(const void *, const void *),void (*)(void *));\n");
printf("\nSTMT_EXEC;;8265\n");
Hash_table *table___0;
  printf("\nSTMT_EXEC;;8266\n");
_Bool tmp;
  {
    printf("\nSTMT_EXEC;;8268\n");
if ((unsigned long)hasher == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;8270\n");
hasher = &raw_hasher;
    }
    printf("\nSTMT_EXEC;;8272\n");
if ((unsigned long)comparator == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;8274\n");
comparator = &raw_comparator;
    }
    printf("\nSTMT_EXEC;;8276\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
table___0 = (Hash_table *)malloc(sizeof(*table___0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8277\n");
if ((unsigned long)table___0 == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;8279\n");
printf("\nFUNC_RETURN;;\n");
return ((Hash_table *)((void *)0));
    }
    printf("\nSTMT_EXEC;;8281\n");
if (!tuning)
    {
      printf("\nSTMT_EXEC;;8283\n");
tuning = &default_tuning;
    }
    printf("\nSTMT_EXEC;;8285\n");
table___0->tuning = tuning;
    printf("\nSTMT_EXEC;;8286\n");
tmp = check_tuning(table___0);
    printf("\nSTMT_EXEC;;8287\n");
if (!tmp)
    {
      printf("\nSTMT_EXEC;;8289\n");
goto fail;
    }
    printf("\nSTMT_EXEC;;8291\n");
table___0->n_buckets = (size_t)compute_bucket_size(candidate, tuning);
    printf("\nSTMT_EXEC;;8292\n");
if (!table___0->n_buckets)
    {
      printf("\nSTMT_EXEC;;8294\n");
goto fail;
    }
    printf("\nSTMT_EXEC;;8296\n");
printf("\nFUNC_CALL;calloc(size_t,size_t);\n");
table___0->bucket = (struct hash_entry *)calloc(table___0->n_buckets, sizeof(*(table___0->bucket)));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8297\n");
if ((unsigned long)table___0->bucket == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;8299\n");
goto fail;
    }
    printf("\nSTMT_EXEC;;8301\n");
table___0->bucket_limit = (struct hash_entry const *)(table___0->bucket + table___0->n_buckets);
    printf("\nSTMT_EXEC;;8302\n");
table___0->n_buckets_used = (size_t)0;
    printf("\nSTMT_EXEC;;8303\n");
table___0->n_entries = (size_t)0;
    printf("\nSTMT_EXEC;;8304\n");
table___0->hasher = hasher;
    printf("\nSTMT_EXEC;;8305\n");
table___0->comparator = comparator;
    printf("\nSTMT_EXEC;;8306\n");
table___0->data_freer = data_freer;
    printf("\nSTMT_EXEC;;8307\n");
table___0->free_entry_list = (struct hash_entry *)((void *)0);
    printf("\nSTMT_EXEC;;8308\n");
printf("\nFUNC_RETURN;;\n");
return (table___0);
  fail:
    {
printf("\nSTMT_EXEC;;8310\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)table___0);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;8311\n");
printf("\nFUNC_RETURN;;\n");
return ((Hash_table *)((void *)0));
  }
printf("\nFUNC_RETURN;;\n");
}
static struct hash_entry *allocate_entry(Hash_table *table___0)
{
  printf("\nFUNC_CALL;allocate_entry(Hash_table *);\n");
printf("\nSTMT_EXEC;;8316\n");
struct hash_entry *new;
  {
    printf("\nSTMT_EXEC;;8318\n");
if (table___0->free_entry_list)
    {
      printf("\nSTMT_EXEC;;8320\n");
new = table___0->free_entry_list;
      printf("\nSTMT_EXEC;;8321\n");
table___0->free_entry_list = new->next;
    }
    else
    {
      printf("\nSTMT_EXEC;;8325\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
new = (struct hash_entry *)malloc(sizeof(*new));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8327\n");
printf("\nFUNC_RETURN;;\n");
return (new);
  }
printf("\nFUNC_RETURN;;\n");
}
static void free_entry(Hash_table *table___0, struct hash_entry *entry)
{
  printf("\nFUNC_CALL;free_entry(Hash_table *,struct hash_entry *);\n");
{
    printf("\nSTMT_EXEC;;8333\n");
entry->data = (void *)0;
    printf("\nSTMT_EXEC;;8334\n");
entry->next = table___0->free_entry_list;
    printf("\nSTMT_EXEC;;8335\n");
table___0->free_entry_list = entry;
    printf("\nSTMT_EXEC;;8336\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void *hash_find_entry(Hash_table *table___0, void const *entry, struct hash_entry **bucket_head, _Bool delete)
{
  printf("\nFUNC_CALL;hash_find_entry(Hash_table *,const void *,struct hash_entry **,_Bool);\n");
printf("\nSTMT_EXEC;;8341\n");
struct hash_entry *bucket;
  printf("\nSTMT_EXEC;;8342\n");
struct hash_entry *tmp;
  printf("\nSTMT_EXEC;;8343\n");
struct hash_entry *cursor;
  printf("\nSTMT_EXEC;;8344\n");
void *data;
  printf("\nSTMT_EXEC;;8345\n");
struct hash_entry *next;
  printf("\nSTMT_EXEC;;8346\n");
_Bool tmp___0;
  printf("\nSTMT_EXEC;;8347\n");
void *data___0;
  printf("\nSTMT_EXEC;;8348\n");
struct hash_entry *next___0;
  printf("\nSTMT_EXEC;;8349\n");
_Bool tmp___1;
  {
    printf("\nSTMT_EXEC;;8351\n");
tmp = safe_hasher((Hash_table const *)table___0, entry);
    printf("\nSTMT_EXEC;;8352\n");
bucket = tmp;
    printf("\nSTMT_EXEC;;8353\n");
*bucket_head = bucket;
    printf("\nSTMT_EXEC;;8354\n");
if ((unsigned long)bucket->data == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;8356\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    printf("\nSTMT_EXEC;;8358\n");
if ((unsigned long)entry == (unsigned long)bucket->data)
    {
      printf("\nSTMT_EXEC;;8360\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;8364\n");
tmp___0 = (*(table___0->comparator))(entry, (void const *)bucket->data);
      printf("\nSTMT_EXEC;;8365\n");
if (tmp___0)
      {
      _L:
        {
printf("\nSTMT_EXEC;;8368\n");
data = bucket->data;
}

        printf("\nSTMT_EXEC;;8369\n");
if (delete)
        {
          printf("\nSTMT_EXEC;;8371\n");
if (bucket->next)
          {
            printf("\nSTMT_EXEC;;8373\n");
next = bucket->next;
            printf("\nSTMT_EXEC;;8374\n");
*bucket = *next;
            printf("\nSTMT_EXEC;;8375\n");
free_entry(table___0, next);
          }
          else
          {
            printf("\nSTMT_EXEC;;8379\n");
bucket->data = (void *)0;
          }
        }
        printf("\nSTMT_EXEC;;8382\n");
printf("\nFUNC_RETURN;;\n");
return (data);
      }
    }
    printf("\nSTMT_EXEC;;8385\n");
cursor = bucket;
    printf("\nSTMT_EXEC;;8386\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8388\n");
if (!cursor->next)
      {
        printf("\nSTMT_EXEC;;8390\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8392\n");
if ((unsigned long)entry == (unsigned long)(cursor->next)->data)
      {
        printf("\nSTMT_EXEC;;8394\n");
goto _L___0;
      }
      else
      {
        printf("\nSTMT_EXEC;;8398\n");
tmp___1 = (*(table___0->comparator))(entry, (void const *)(cursor->next)->data);
        printf("\nSTMT_EXEC;;8399\n");
if (tmp___1)
        {
        _L___0:
          {
printf("\nSTMT_EXEC;;8402\n");
data___0 = (cursor->next)->data;
}

          printf("\nSTMT_EXEC;;8403\n");
if (delete)
          {
            printf("\nSTMT_EXEC;;8405\n");
next___0 = cursor->next;
            printf("\nSTMT_EXEC;;8406\n");
cursor->next = next___0->next;
            printf("\nSTMT_EXEC;;8407\n");
free_entry(table___0, next___0);
          }
          printf("\nSTMT_EXEC;;8409\n");
printf("\nFUNC_RETURN;;\n");
return (data___0);
        }
      }
      printf("\nSTMT_EXEC;;8412\n");
cursor = cursor->next;
    }
  while_break:;
    printf("\nSTMT_EXEC;;8415\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe)
{
  printf("\nFUNC_CALL;transfer_entries(Hash_table *,Hash_table *,_Bool);\n");
printf("\nSTMT_EXEC;;8420\n");
struct hash_entry *bucket;
  printf("\nSTMT_EXEC;;8421\n");
struct hash_entry *cursor;
  printf("\nSTMT_EXEC;;8422\n");
struct hash_entry *next;
  printf("\nSTMT_EXEC;;8423\n");
void *data;
  printf("\nSTMT_EXEC;;8424\n");
struct hash_entry *new_bucket;
  printf("\nSTMT_EXEC;;8425\n");
struct hash_entry *new_entry;
  printf("\nSTMT_EXEC;;8426\n");
struct hash_entry *tmp;
  {
    printf("\nSTMT_EXEC;;8428\n");
bucket = src->bucket;
    printf("\nSTMT_EXEC;;8429\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8431\n");
if (!((unsigned long)bucket < (unsigned long)src->bucket_limit))
      {
        printf("\nSTMT_EXEC;;8433\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8435\n");
if (bucket->data)
      {
        printf("\nSTMT_EXEC;;8437\n");
cursor = bucket->next;
        printf("\nSTMT_EXEC;;8438\n");
while (1)
        {
          printf("\nSTMT_EXEC;;8440\n");
if (!cursor)
          {
            printf("\nSTMT_EXEC;;8442\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;8444\n");
data = cursor->data;
          printf("\nSTMT_EXEC;;8445\n");
new_bucket = safe_hasher((Hash_table const *)dst, (void const *)data);
          printf("\nSTMT_EXEC;;8446\n");
next = cursor->next;
          printf("\nSTMT_EXEC;;8447\n");
if (new_bucket->data)
          {
            printf("\nSTMT_EXEC;;8449\n");
cursor->next = new_bucket->next;
            printf("\nSTMT_EXEC;;8450\n");
new_bucket->next = cursor;
          }
          else
          {
            printf("\nSTMT_EXEC;;8454\n");
new_bucket->data = data;
            printf("\nSTMT_EXEC;;8455\n");
(dst->n_buckets_used)++;
            printf("\nSTMT_EXEC;;8456\n");
free_entry(dst, cursor);
          }
          printf("\nSTMT_EXEC;;8458\n");
cursor = next;
        }
      while_break___0:
        {
printf("\nSTMT_EXEC;;8461\n");
data = bucket->data;
}

        printf("\nSTMT_EXEC;;8462\n");
bucket->next = (struct hash_entry *)((void *)0);
        printf("\nSTMT_EXEC;;8463\n");
if (safe)
        {
          printf("\nSTMT_EXEC;;8465\n");
goto __Cont;
        }
        printf("\nSTMT_EXEC;;8467\n");
new_bucket = safe_hasher((Hash_table const *)dst, (void const *)data);
        printf("\nSTMT_EXEC;;8468\n");
if (new_bucket->data)
        {
          printf("\nSTMT_EXEC;;8470\n");
tmp = allocate_entry(dst);
          printf("\nSTMT_EXEC;;8471\n");
new_entry = tmp;
          printf("\nSTMT_EXEC;;8472\n");
if ((unsigned long)new_entry == (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;8474\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
          }
          printf("\nSTMT_EXEC;;8476\n");
new_entry->data = data;
          printf("\nSTMT_EXEC;;8477\n");
new_entry->next = new_bucket->next;
          printf("\nSTMT_EXEC;;8478\n");
new_bucket->next = new_entry;
        }
        else
        {
          printf("\nSTMT_EXEC;;8482\n");
new_bucket->data = data;
          printf("\nSTMT_EXEC;;8483\n");
(dst->n_buckets_used)++;
        }
        printf("\nSTMT_EXEC;;8485\n");
bucket->data = (void *)0;
        printf("\nSTMT_EXEC;;8486\n");
(src->n_buckets_used)--;
      }
    __Cont:
      {
printf("\nSTMT_EXEC;;8489\n");
bucket++;
}

    }
  while_break:;
    printf("\nSTMT_EXEC;;8492\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table___0, size_t candidate)
{
  printf("\nFUNC_CALL;hash_rehash(Hash_table *,size_t);\n");
printf("\nSTMT_EXEC;;8497\n");
Hash_table storage;
  printf("\nSTMT_EXEC;;8498\n");
Hash_table *new_table;
  printf("\nSTMT_EXEC;;8499\n");
size_t new_size;
  printf("\nSTMT_EXEC;;8500\n");
size_t tmp;
  printf("\nSTMT_EXEC;;8501\n");
_Bool tmp___0;
  printf("\nSTMT_EXEC;;8502\n");
_Bool tmp___1;
  printf("\nSTMT_EXEC;;8503\n");
_Bool tmp___2;
  {
    printf("\nSTMT_EXEC;;8505\n");
tmp = (size_t)compute_bucket_size(candidate, table___0->tuning);
    printf("\nSTMT_EXEC;;8506\n");
new_size = tmp;
    printf("\nSTMT_EXEC;;8507\n");
if (!new_size)
    {
      printf("\nSTMT_EXEC;;8509\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
    }
    printf("\nSTMT_EXEC;;8511\n");
if (new_size == table___0->n_buckets)
    {
      printf("\nSTMT_EXEC;;8513\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
    }
    printf("\nSTMT_EXEC;;8515\n");
new_table = &storage;
    printf("\nSTMT_EXEC;;8516\n");
printf("\nFUNC_CALL;calloc(size_t,size_t);\n");
new_table->bucket = (struct hash_entry *)calloc(new_size, sizeof(*(new_table->bucket)));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8517\n");
if ((unsigned long)new_table->bucket == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;8519\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
    }
    printf("\nSTMT_EXEC;;8521\n");
new_table->n_buckets = new_size;
    printf("\nSTMT_EXEC;;8522\n");
new_table->bucket_limit = (struct hash_entry const *)(new_table->bucket + new_size);
    printf("\nSTMT_EXEC;;8523\n");
new_table->n_buckets_used = (size_t)0;
    printf("\nSTMT_EXEC;;8524\n");
new_table->n_entries = (size_t)0;
    printf("\nSTMT_EXEC;;8525\n");
new_table->tuning = table___0->tuning;
    printf("\nSTMT_EXEC;;8526\n");
new_table->hasher = table___0->hasher;
    printf("\nSTMT_EXEC;;8527\n");
new_table->comparator = table___0->comparator;
    printf("\nSTMT_EXEC;;8528\n");
new_table->data_freer = table___0->data_freer;
    printf("\nSTMT_EXEC;;8529\n");
new_table->free_entry_list = table___0->free_entry_list;
    printf("\nSTMT_EXEC;;8530\n");
tmp___0 = transfer_entries(new_table, table___0, (_Bool)0);
    printf("\nSTMT_EXEC;;8531\n");
if (tmp___0)
    {
      printf("\nSTMT_EXEC;;8533\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)table___0->bucket);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8534\n");
table___0->bucket = new_table->bucket;
      printf("\nSTMT_EXEC;;8535\n");
table___0->bucket_limit = new_table->bucket_limit;
      printf("\nSTMT_EXEC;;8536\n");
table___0->n_buckets = new_table->n_buckets;
      printf("\nSTMT_EXEC;;8537\n");
table___0->n_buckets_used = new_table->n_buckets_used;
      printf("\nSTMT_EXEC;;8538\n");
table___0->free_entry_list = new_table->free_entry_list;
      printf("\nSTMT_EXEC;;8539\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
    }
    printf("\nSTMT_EXEC;;8541\n");
table___0->free_entry_list = new_table->free_entry_list;
    printf("\nSTMT_EXEC;;8542\n");
tmp___1 = transfer_entries(table___0, new_table, (_Bool)1);
    printf("\nSTMT_EXEC;;8543\n");
if (tmp___1)
    {
      printf("\nSTMT_EXEC;;8545\n");
tmp___2 = transfer_entries(table___0, new_table, (_Bool)0);
      printf("\nSTMT_EXEC;;8546\n");
if (!tmp___2)
      {
        printf("\nSTMT_EXEC;;8548\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

      }
    }
    else
    {
      printf("\nSTMT_EXEC;;8553\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8555\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)new_table->bucket);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8556\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
int hash_insert_if_absent(Hash_table *table___0, void const *entry, void const **matched_ent)
{
  printf("\nFUNC_CALL;hash_insert_if_absent(Hash_table *,const void *,const void **);\n");
printf("\nSTMT_EXEC;;8561\n");
void *data;
  printf("\nSTMT_EXEC;;8562\n");
struct hash_entry *bucket;
  printf("\nSTMT_EXEC;;8563\n");
Hash_tuning const *tuning;
  printf("\nSTMT_EXEC;;8564\n");
float candidate;
  printf("\nSTMT_EXEC;;8565\n");
float tmp;
  printf("\nSTMT_EXEC;;8566\n");
_Bool tmp___0;
  printf("\nSTMT_EXEC;;8567\n");
void *tmp___1;
  printf("\nSTMT_EXEC;;8568\n");
struct hash_entry *new_entry;
  printf("\nSTMT_EXEC;;8569\n");
struct hash_entry *tmp___2;
  {
    printf("\nSTMT_EXEC;;8571\n");
if (!entry)
    {
      printf("\nSTMT_EXEC;;8573\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8575\n");
data = hash_find_entry(table___0, entry, &bucket, (_Bool)0);
    printf("\nSTMT_EXEC;;8576\n");
if ((unsigned long)data != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;8578\n");
if (matched_ent)
      {
        printf("\nSTMT_EXEC;;8580\n");
*matched_ent = (void const *)data;
      }
      printf("\nSTMT_EXEC;;8582\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;8584\n");
if ((float const)table___0->n_buckets_used > (table___0->tuning)->growth_threshold * (float const)table___0->n_buckets)
    {
      printf("\nSTMT_EXEC;;8586\n");
check_tuning(table___0);
      printf("\nSTMT_EXEC;;8587\n");
if ((float const)table___0->n_buckets_used > (table___0->tuning)->growth_threshold * (float const)table___0->n_buckets)
      {
        printf("\nSTMT_EXEC;;8589\n");
tuning = table___0->tuning;
        printf("\nSTMT_EXEC;;8590\n");
if (tuning->is_n_buckets)
        {
          printf("\nSTMT_EXEC;;8592\n");
tmp = (float)((float const)table___0->n_buckets * tuning->growth_factor);
        }
        else
        {
          printf("\nSTMT_EXEC;;8596\n");
tmp = (float)(((float const)table___0->n_buckets * tuning->growth_factor) * tuning->growth_threshold);
        }
        printf("\nSTMT_EXEC;;8598\n");
candidate = tmp;
        printf("\nSTMT_EXEC;;8599\n");
if ((float)0xffffffffffffffffUL <= candidate)
        {
          printf("\nSTMT_EXEC;;8601\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
        printf("\nSTMT_EXEC;;8603\n");
tmp___0 = hash_rehash(table___0, (size_t)candidate);
        printf("\nSTMT_EXEC;;8604\n");
if (!tmp___0)
        {
          printf("\nSTMT_EXEC;;8606\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
        printf("\nSTMT_EXEC;;8608\n");
tmp___1 = hash_find_entry(table___0, entry, &bucket, (_Bool)0);
        printf("\nSTMT_EXEC;;8609\n");
if ((unsigned long)tmp___1 != (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;8611\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;8615\n");
if (bucket->data)
    {
      printf("\nSTMT_EXEC;;8617\n");
tmp___2 = allocate_entry(table___0);
      printf("\nSTMT_EXEC;;8618\n");
new_entry = tmp___2;
      printf("\nSTMT_EXEC;;8619\n");
if ((unsigned long)new_entry == (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;8621\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
      }
      printf("\nSTMT_EXEC;;8623\n");
new_entry->data = (void *)entry;
      printf("\nSTMT_EXEC;;8624\n");
new_entry->next = bucket->next;
      printf("\nSTMT_EXEC;;8625\n");
bucket->next = new_entry;
      printf("\nSTMT_EXEC;;8626\n");
(table___0->n_entries)++;
      printf("\nSTMT_EXEC;;8627\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;8629\n");
bucket->data = (void *)entry;
    printf("\nSTMT_EXEC;;8630\n");
(table___0->n_entries)++;
    printf("\nSTMT_EXEC;;8631\n");
(table___0->n_buckets_used)++;
    printf("\nSTMT_EXEC;;8632\n");
printf("\nFUNC_RETURN;;\n");
return (1);
  }
printf("\nFUNC_RETURN;;\n");
}
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0, void const *entry)
{
  printf("\nFUNC_CALL;hash_insert(Hash_table *,const void *);\n");
printf("\nSTMT_EXEC;;8637\n");
void const *matched_ent;
  printf("\nSTMT_EXEC;;8638\n");
int err;
  printf("\nSTMT_EXEC;;8639\n");
int tmp;
  printf("\nSTMT_EXEC;;8640\n");
void const *tmp___0;
  printf("\nSTMT_EXEC;;8641\n");
void *tmp___1;
  {
    printf("\nSTMT_EXEC;;8643\n");
tmp = hash_insert_if_absent(table___0, entry, &matched_ent);
    printf("\nSTMT_EXEC;;8644\n");
err = tmp;
    printf("\nSTMT_EXEC;;8645\n");
if (err == -1)
    {
      printf("\nSTMT_EXEC;;8647\n");
tmp___1 = (void *)0;
    }
    else
    {
      printf("\nSTMT_EXEC;;8651\n");
if (err == 0)
      {
        printf("\nSTMT_EXEC;;8653\n");
tmp___0 = matched_ent;
      }
      else
      {
        printf("\nSTMT_EXEC;;8657\n");
tmp___0 = entry;
      }
      printf("\nSTMT_EXEC;;8659\n");
tmp___1 = (void *)tmp___0;
    }
    printf("\nSTMT_EXEC;;8661\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
void *hash_delete(Hash_table *table___0, void const *entry)
{
  printf("\nFUNC_CALL;hash_delete(Hash_table *,const void *);\n");
printf("\nSTMT_EXEC;;8666\n");
void *data;
  printf("\nSTMT_EXEC;;8667\n");
struct hash_entry *bucket;
  printf("\nSTMT_EXEC;;8668\n");
Hash_tuning const *tuning;
  printf("\nSTMT_EXEC;;8669\n");
size_t candidate;
  printf("\nSTMT_EXEC;;8670\n");
float tmp;
  printf("\nSTMT_EXEC;;8671\n");
struct hash_entry *cursor;
  printf("\nSTMT_EXEC;;8672\n");
struct hash_entry *next;
  printf("\nSTMT_EXEC;;8673\n");
_Bool tmp___0;
  {
    printf("\nSTMT_EXEC;;8675\n");
data = hash_find_entry(table___0, entry, &bucket, (_Bool)1);
    printf("\nSTMT_EXEC;;8676\n");
if (!data)
    {
      printf("\nSTMT_EXEC;;8678\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    printf("\nSTMT_EXEC;;8680\n");
(table___0->n_entries)--;
    printf("\nSTMT_EXEC;;8681\n");
if (!bucket->data)
    {
      printf("\nSTMT_EXEC;;8683\n");
(table___0->n_buckets_used)--;
      printf("\nSTMT_EXEC;;8684\n");
if ((float const)table___0->n_buckets_used < (table___0->tuning)->shrink_threshold * (float const)table___0->n_buckets)
      {
        printf("\nSTMT_EXEC;;8686\n");
check_tuning(table___0);
        printf("\nSTMT_EXEC;;8687\n");
if ((float const)table___0->n_buckets_used < (table___0->tuning)->shrink_threshold * (float const)table___0->n_buckets)
        {
          printf("\nSTMT_EXEC;;8689\n");
tuning = table___0->tuning;
          printf("\nSTMT_EXEC;;8690\n");
if (tuning->is_n_buckets)
          {
            printf("\nSTMT_EXEC;;8692\n");
tmp = (float)((float const)table___0->n_buckets * tuning->shrink_factor);
          }
          else
          {
            printf("\nSTMT_EXEC;;8696\n");
tmp = (float)(((float const)table___0->n_buckets * tuning->shrink_factor) * tuning->growth_threshold);
          }
          printf("\nSTMT_EXEC;;8698\n");
candidate = (size_t)tmp;
          printf("\nSTMT_EXEC;;8699\n");
tmp___0 = hash_rehash(table___0, candidate);
          printf("\nSTMT_EXEC;;8700\n");
if (!tmp___0)
          {
            printf("\nSTMT_EXEC;;8702\n");
cursor = table___0->free_entry_list;
            printf("\nSTMT_EXEC;;8703\n");
while (1)
            {
              printf("\nSTMT_EXEC;;8705\n");
if (!cursor)
              {
                printf("\nSTMT_EXEC;;8707\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;8709\n");
next = cursor->next;
              printf("\nSTMT_EXEC;;8710\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)cursor);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;8711\n");
cursor = next;
            }
          while_break:
            {
printf("\nSTMT_EXEC;;8714\n");
table___0->free_entry_list = (struct hash_entry *)((void *)0);
}

          }
        }
      }
    }
    printf("\nSTMT_EXEC;;8719\n");
printf("\nFUNC_RETURN;;\n");
return (data);
  }
printf("\nFUNC_RETURN;;\n");
}
size_t hash_pjw(void const *x, size_t tablesize) __attribute__((__pure__));
size_t triple_hash(void const *x, size_t table_size) __attribute__((__pure__));
size_t triple_hash(void const *x, size_t table_size)
{
  printf("\nFUNC_CALL;triple_hash(const void *,size_t);\n");
printf("\nSTMT_EXEC;;8726\n");
struct F_triple const *p;
  printf("\nSTMT_EXEC;;8727\n");
size_t tmp;
  printf("\nSTMT_EXEC;;8728\n");
size_t tmp___0;
  {
    printf("\nSTMT_EXEC;;8730\n");
p = (struct F_triple const *)x;
    printf("\nSTMT_EXEC;;8731\n");
tmp___0 = hash_pjw((void const *)p->name, table_size);
    printf("\nSTMT_EXEC;;8732\n");
tmp = tmp___0;
    printf("\nSTMT_EXEC;;8733\n");
printf("\nFUNC_RETURN;;\n");
return ((tmp ^ (unsigned long)p->st_ino) % table_size);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool triple_compare_ino_str(void const *x, void const *y) __attribute__((__pure__));
_Bool triple_compare_ino_str(void const *x, void const *y)
{
  printf("\nFUNC_CALL;triple_compare_ino_str(const void *,const void *);\n");
printf("\nSTMT_EXEC;;8739\n");
struct F_triple const *a;
  printf("\nSTMT_EXEC;;8740\n");
struct F_triple const *b;
  printf("\nSTMT_EXEC;;8741\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8742\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;8744\n");
a = (struct F_triple const *)x;
    printf("\nSTMT_EXEC;;8745\n");
b = (struct F_triple const *)y;
    printf("\nSTMT_EXEC;;8746\n");
if (a->st_ino == b->st_ino)
    {
      printf("\nSTMT_EXEC;;8748\n");
if (a->st_dev == b->st_dev)
      {
        printf("\nSTMT_EXEC;;8750\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp((char const *)a->name, (char const *)b->name);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8751\n");
if (tmp___1 == 0)
        {
          printf("\nSTMT_EXEC;;8753\n");
tmp___0 = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;8757\n");
tmp___0 = 0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8762\n");
tmp___0 = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;8767\n");
tmp___0 = 0;
    }
    printf("\nSTMT_EXEC;;8769\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
size_t hash_pjw(void const *x, size_t tablesize) __attribute__((__pure__));
size_t hash_pjw(void const *x, size_t tablesize)
{
  printf("\nFUNC_CALL;hash_pjw(const void *,size_t);\n");
printf("\nSTMT_EXEC;;8775\n");
char const *s;
  printf("\nSTMT_EXEC;;8776\n");
size_t h;
  {
    printf("\nSTMT_EXEC;;8778\n");
h = (size_t)0;
    printf("\nSTMT_EXEC;;8779\n");
s = (char const *)x;
    printf("\nSTMT_EXEC;;8780\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8782\n");
if (!*s)
      {
        printf("\nSTMT_EXEC;;8784\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8786\n");
h = (unsigned long)*s + ((h << 9) | (h >> (sizeof(size_t) * 8UL - 9UL)));
      printf("\nSTMT_EXEC;;8787\n");
s++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;8790\n");
printf("\nFUNC_RETURN;;\n");
return (h % tablesize);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool hard_locale(int category);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) setlocale)(int __category, char const *__locale);
_Bool hard_locale(int category)
{
  printf("\nFUNC_CALL;hard_locale(int);\n");
printf("\nSTMT_EXEC;;8797\n");
_Bool hard;
  printf("\nSTMT_EXEC;;8798\n");
char const *p;
  printf("\nSTMT_EXEC;;8799\n");
char const *tmp;
  printf("\nSTMT_EXEC;;8800\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8801\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8802\n");
char *locale;
  printf("\nSTMT_EXEC;;8803\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;8804\n");
int tmp___3;
  printf("\nSTMT_EXEC;;8805\n");
int tmp___4;
  {
    printf("\nSTMT_EXEC;;8807\n");
hard = (_Bool)1;
    printf("\nSTMT_EXEC;;8808\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
tmp = (char const *)setlocale(category, (char const *)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8809\n");
p = tmp;
    printf("\nSTMT_EXEC;;8810\n");
if (p)
    {
      printf("\nSTMT_EXEC;;8812\n");
if (1)
      {
        printf("\nSTMT_EXEC;;8814\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___0 = strcmp(p, "C");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8815\n");
if (tmp___0 == 0)
        {
          printf("\nSTMT_EXEC;;8817\n");
hard = (_Bool)0;
        }
        else
        {
          printf("\nSTMT_EXEC;;8821\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp(p, "POSIX");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8822\n");
if (tmp___1 == 0)
          {
            printf("\nSTMT_EXEC;;8824\n");
hard = (_Bool)0;
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8830\n");
printf("\nFUNC_CALL;strdup(const char *);\n");
tmp___2 = strdup(p);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8831\n");
locale = tmp___2;
        printf("\nSTMT_EXEC;;8832\n");
if (locale)
        {
          printf("\nSTMT_EXEC;;8834\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
p = (char const *)setlocale(category, "C");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8835\n");
if (p)
          {
            printf("\nSTMT_EXEC;;8837\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___3 = strcmp(p, (char const *)locale);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8838\n");
if (tmp___3 == 0)
            {
              printf("\nSTMT_EXEC;;8840\n");
hard = (_Bool)0;
            }
            else
            {
              printf("\nSTMT_EXEC;;8844\n");
goto _L;
            }
          }
          else
          {
          _L:
            {
printf("\nSTMT_EXEC;;8850\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
p = (char const *)setlocale(category, "POSIX");printf("\nFUNC_RETURN;;\n");

}

            printf("\nSTMT_EXEC;;8851\n");
if (p)
            {
              printf("\nSTMT_EXEC;;8853\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___4 = strcmp(p, (char const *)locale);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;8854\n");
if (tmp___4 == 0)
              {
                printf("\nSTMT_EXEC;;8856\n");
hard = (_Bool)0;
              }
            }
          }
          printf("\nSTMT_EXEC;;8860\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
setlocale(category, (char const *)locale);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8861\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)locale);printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;8865\n");
printf("\nFUNC_RETURN;;\n");
return (hard);
  }
printf("\nFUNC_RETURN;;\n");
}
extern int fflush_unlocked(FILE *__stream);
extern void(__attribute__((__nonnull__(1, 4))) qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __attribute__((__nothrow__)) __off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset, int __whence);
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset, int whence)
{
  printf("\nFUNC_CALL;rpl_fseeko(FILE *,off_t,int);\n");
printf("\nSTMT_EXEC;;8874\n");
off_t pos;
  printf("\nSTMT_EXEC;;8875\n");
int tmp;
  printf("\nSTMT_EXEC;;8876\n");
off_t tmp___0;
  printf("\nSTMT_EXEC;;8877\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;8879\n");
if ((unsigned long)fp->_IO_read_end == (unsigned long)fp->_IO_read_ptr)
    {
      printf("\nSTMT_EXEC;;8881\n");
if ((unsigned long)fp->_IO_write_ptr == (unsigned long)fp->_IO_write_base)
      {
        printf("\nSTMT_EXEC;;8883\n");
if ((unsigned long)fp->_IO_save_base == (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;8885\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp = fileno(fp);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8886\n");
printf("\nFUNC_CALL;lseek(int,__off_t,int);\n");
tmp___0 = lseek(tmp, offset, whence);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8887\n");
pos = tmp___0;
          printf("\nSTMT_EXEC;;8888\n");
if (pos == -1L)
          {
            printf("\nSTMT_EXEC;;8890\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
          }
          printf("\nSTMT_EXEC;;8892\n");
fp->_flags &= -17;
          printf("\nSTMT_EXEC;;8893\n");
fp->_offset = pos;
          printf("\nSTMT_EXEC;;8894\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
      }
    }
    printf("\nSTMT_EXEC;;8898\n");
printf("\nFUNC_CALL;fseeko(FILE *,__off_t,int);\n");
tmp___1 = fseeko(fp, offset, whence);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8899\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) dup2)(int __fd, int __fd2);
FILE *fopen_safer(char const *file, char const *mode)
{
  printf("\nFUNC_CALL;fopen_safer(const char *,const char *);\n");
printf("\nSTMT_EXEC;;8905\n");
FILE *fp;
  printf("\nSTMT_EXEC;;8906\n");
FILE *tmp;
  printf("\nSTMT_EXEC;;8907\n");
int fd;
  printf("\nSTMT_EXEC;;8908\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8909\n");
int f;
  printf("\nSTMT_EXEC;;8910\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8911\n");
int e;
  printf("\nSTMT_EXEC;;8912\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;8913\n");
int *tmp___3;
  printf("\nSTMT_EXEC;;8914\n");
int e___0;
  printf("\nSTMT_EXEC;;8915\n");
int *tmp___4;
  printf("\nSTMT_EXEC;;8916\n");
int *tmp___5;
  printf("\nSTMT_EXEC;;8917\n");
int tmp___6;
  {
    printf("\nSTMT_EXEC;;8919\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
tmp = fopen(file, mode);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8920\n");
fp = tmp;
    printf("\nSTMT_EXEC;;8921\n");
if (fp)
    {
      printf("\nSTMT_EXEC;;8923\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___0 = fileno(fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8924\n");
fd = tmp___0;
      printf("\nSTMT_EXEC;;8925\n");
if (0 <= fd)
      {
        printf("\nSTMT_EXEC;;8927\n");
if (fd <= 2)
        {
          printf("\nSTMT_EXEC;;8929\n");
tmp___1 = dup_safer(fd);
          printf("\nSTMT_EXEC;;8930\n");
f = tmp___1;
          printf("\nSTMT_EXEC;;8931\n");
if (f < 0)
          {
            printf("\nSTMT_EXEC;;8933\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8934\n");
e = *tmp___2;
            printf("\nSTMT_EXEC;;8935\n");
rpl_fclose(fp);
            printf("\nSTMT_EXEC;;8936\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8937\n");
*tmp___3 = e;
            printf("\nSTMT_EXEC;;8938\n");
printf("\nFUNC_RETURN;;\n");
return ((FILE *)((void *)0));
          }
          printf("\nSTMT_EXEC;;8940\n");
tmp___6 = rpl_fclose(fp);
          printf("\nSTMT_EXEC;;8941\n");
if (tmp___6 != 0)
          {
            printf("\nSTMT_EXEC;;8943\n");
goto _L;
          }
          else
          {
            printf("\nSTMT_EXEC;;8947\n");
printf("\nFUNC_CALL;fdopen(int,const char *);\n");
fp = fdopen(f, mode);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8948\n");
if (!fp)
            {
            _L:
              {
printf("\nSTMT_EXEC;;8951\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___4 = __errno_location();printf("\nFUNC_RETURN;;\n");

}

              printf("\nSTMT_EXEC;;8952\n");
e___0 = *tmp___4;
              printf("\nSTMT_EXEC;;8953\n");
printf("\nFUNC_CALL;close(int);\n");
close(f);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;8954\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;8955\n");
*tmp___5 = e___0;
              printf("\nSTMT_EXEC;;8956\n");
printf("\nFUNC_RETURN;;\n");
return ((FILE *)((void *)0));
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;8962\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
  }
printf("\nFUNC_RETURN;;\n");
}
int filevercmp(char const *s1, char const *s2);
static char const *match_suffix(char const **str)
{
  printf("\nFUNC_CALL;match_suffix(const char **);\n");
printf("\nSTMT_EXEC;;8968\n");
char const *match;
  printf("\nSTMT_EXEC;;8969\n");
_Bool read_alpha;
  printf("\nSTMT_EXEC;;8970\n");
_Bool tmp;
  printf("\nSTMT_EXEC;;8971\n");
_Bool tmp___0;
  {
    printf("\nSTMT_EXEC;;8973\n");
match = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;8974\n");
read_alpha = (_Bool)0;
    printf("\nSTMT_EXEC;;8975\n");
while (1)
    {
      printf("\nSTMT_EXEC;;8977\n");
if (!*(*str))
      {
        printf("\nSTMT_EXEC;;8979\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;8981\n");
if (read_alpha)
      {
        printf("\nSTMT_EXEC;;8983\n");
read_alpha = (_Bool)0;
        printf("\nSTMT_EXEC;;8984\n");
tmp = c_isalpha((int)*(*str));
        printf("\nSTMT_EXEC;;8985\n");
if (!tmp)
        {
          printf("\nSTMT_EXEC;;8987\n");
if (126 != (int)*(*str))
          {
            printf("\nSTMT_EXEC;;8989\n");
match = (char const *)((void *)0);
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8995\n");
if (46 == (int)*(*str))
        {
          printf("\nSTMT_EXEC;;8997\n");
read_alpha = (_Bool)1;
          printf("\nSTMT_EXEC;;8998\n");
if (!match)
          {
            printf("\nSTMT_EXEC;;9000\n");
match = *str;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;9005\n");
tmp___0 = c_isalnum((int)*(*str));
          printf("\nSTMT_EXEC;;9006\n");
if (!tmp___0)
          {
            printf("\nSTMT_EXEC;;9008\n");
if (126 != (int)*(*str))
            {
              printf("\nSTMT_EXEC;;9010\n");
match = (char const *)((void *)0);
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;9015\n");
(*str)++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;9018\n");
printf("\nFUNC_RETURN;;\n");
return (match);
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static int order(unsigned char c)
{
  printf("\nFUNC_CALL;order(unsigned char);\n");
printf("\nSTMT_EXEC;;9023\n");
_Bool tmp;
  printf("\nSTMT_EXEC;;9024\n");
_Bool tmp___0;
  {
    printf("\nSTMT_EXEC;;9026\n");
tmp___0 = c_isdigit((int)c);
    printf("\nSTMT_EXEC;;9027\n");
if (tmp___0)
    {
      printf("\nSTMT_EXEC;;9029\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    else
    {
      printf("\nSTMT_EXEC;;9033\n");
tmp = c_isalpha((int)c);
      printf("\nSTMT_EXEC;;9034\n");
if (tmp)
      {
        printf("\nSTMT_EXEC;;9036\n");
printf("\nFUNC_RETURN;;\n");
return ((int)c);
      }
      else
      {
        printf("\nSTMT_EXEC;;9040\n");
if ((int)c == 126)
        {
          printf("\nSTMT_EXEC;;9042\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
        else
        {
          printf("\nSTMT_EXEC;;9046\n");
printf("\nFUNC_RETURN;;\n");
return (((int)c + 255) + 1);
        }
      }
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static int __attribute__((__pure__)) verrevcmp(char const *s1, size_t s1_len, char const *s2, size_t s2_len)
{
  printf("\nFUNC_CALL;verrevcmp(const char *,size_t,const char *,size_t);\n");
printf("\nSTMT_EXEC;;9054\n");
size_t s1_pos;
  printf("\nSTMT_EXEC;;9055\n");
size_t s2_pos;
  printf("\nSTMT_EXEC;;9056\n");
int first_diff;
  printf("\nSTMT_EXEC;;9057\n");
int s1_c;
  printf("\nSTMT_EXEC;;9058\n");
int tmp;
  printf("\nSTMT_EXEC;;9059\n");
int tmp___0;
  printf("\nSTMT_EXEC;;9060\n");
int s2_c;
  printf("\nSTMT_EXEC;;9061\n");
int tmp___1;
  printf("\nSTMT_EXEC;;9062\n");
int tmp___2;
  printf("\nSTMT_EXEC;;9063\n");
_Bool tmp___3;
  printf("\nSTMT_EXEC;;9064\n");
_Bool tmp___4;
  printf("\nSTMT_EXEC;;9065\n");
_Bool tmp___5;
  printf("\nSTMT_EXEC;;9066\n");
_Bool tmp___6;
  printf("\nSTMT_EXEC;;9067\n");
_Bool tmp___7;
  printf("\nSTMT_EXEC;;9068\n");
_Bool tmp___8;
  {
    printf("\nSTMT_EXEC;;9070\n");
s1_pos = (size_t)0;
    printf("\nSTMT_EXEC;;9071\n");
s2_pos = (size_t)0;
    printf("\nSTMT_EXEC;;9072\n");
while (1)
    {
      printf("\nSTMT_EXEC;;9074\n");
if (!(s1_pos < s1_len))
      {
        printf("\nSTMT_EXEC;;9076\n");
if (!(s2_pos < s2_len))
        {
          printf("\nSTMT_EXEC;;9078\n");
goto while_break;
        }
      }
      printf("\nSTMT_EXEC;;9081\n");
first_diff = 0;
      printf("\nSTMT_EXEC;;9082\n");
while (1)
      {
        printf("\nSTMT_EXEC;;9084\n");
if (s1_pos < s1_len)
        {
          printf("\nSTMT_EXEC;;9086\n");
tmp___3 = c_isdigit((int)*(s1 + s1_pos));
          printf("\nSTMT_EXEC;;9087\n");
if (tmp___3)
          {
            printf("\nSTMT_EXEC;;9089\n");
goto _L;
          }
        }
        else
        {
        _L:
          {
printf("\nSTMT_EXEC;;9095\n");
if (s2_pos < s2_len)
          {
            printf("\nSTMT_EXEC;;9097\n");
tmp___4 = c_isdigit((int)*(s2 + s2_pos));
            printf("\nSTMT_EXEC;;9098\n");
if (tmp___4)
            {
              printf("\nSTMT_EXEC;;9100\n");
goto while_break___0;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;9105\n");
goto while_break___0;
          }
}

        }
        printf("\nSTMT_EXEC;;9108\n");
if (s1_pos == s1_len)
        {
          printf("\nSTMT_EXEC;;9110\n");
tmp___0 = 0;
        }
        else
        {
          printf("\nSTMT_EXEC;;9114\n");
tmp = order((unsigned char)*(s1 + s1_pos));
          printf("\nSTMT_EXEC;;9115\n");
tmp___0 = tmp;
        }
        printf("\nSTMT_EXEC;;9117\n");
s1_c = tmp___0;
        printf("\nSTMT_EXEC;;9118\n");
if (s2_pos == s2_len)
        {
          printf("\nSTMT_EXEC;;9120\n");
tmp___2 = 0;
        }
        else
        {
          printf("\nSTMT_EXEC;;9124\n");
tmp___1 = order((unsigned char)*(s2 + s2_pos));
          printf("\nSTMT_EXEC;;9125\n");
tmp___2 = tmp___1;
        }
        printf("\nSTMT_EXEC;;9127\n");
s2_c = tmp___2;
        printf("\nSTMT_EXEC;;9128\n");
if (s1_c != s2_c)
        {
          printf("\nSTMT_EXEC;;9130\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))(s1_c - s2_c));
        }
        printf("\nSTMT_EXEC;;9132\n");
s1_pos++;
        printf("\nSTMT_EXEC;;9133\n");
s2_pos++;
      }
    while_break___0:;
      printf("\nSTMT_EXEC;;9136\n");
while (1)
      {
        printf("\nSTMT_EXEC;;9138\n");
if (!((int const) * (s1 + s1_pos) == 48))
        {
          printf("\nSTMT_EXEC;;9140\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;9142\n");
s1_pos++;
      }
    while_break___1:;
      printf("\nSTMT_EXEC;;9145\n");
while (1)
      {
        printf("\nSTMT_EXEC;;9147\n");
if (!((int const) * (s2 + s2_pos) == 48))
        {
          printf("\nSTMT_EXEC;;9149\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;9151\n");
s2_pos++;
      }
    while_break___2:;
      printf("\nSTMT_EXEC;;9154\n");
while (1)
      {
        printf("\nSTMT_EXEC;;9156\n");
tmp___5 = c_isdigit((int)*(s1 + s1_pos));
        printf("\nSTMT_EXEC;;9157\n");
if (tmp___5)
        {
          printf("\nSTMT_EXEC;;9159\n");
tmp___6 = c_isdigit((int)*(s2 + s2_pos));
          printf("\nSTMT_EXEC;;9160\n");
if (!tmp___6)
          {
            printf("\nSTMT_EXEC;;9162\n");
goto while_break___3;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;9167\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;9169\n");
if (!first_diff)
        {
          printf("\nSTMT_EXEC;;9171\n");
first_diff = (int)((int const) * (s1 + s1_pos) - (int const) * (s2 + s2_pos));
        }
        printf("\nSTMT_EXEC;;9173\n");
s1_pos++;
        printf("\nSTMT_EXEC;;9174\n");
s2_pos++;
      }
    while_break___3:
      {
printf("\nSTMT_EXEC;;9177\n");
tmp___7 = c_isdigit((int)*(s1 + s1_pos));
}

      printf("\nSTMT_EXEC;;9178\n");
if (tmp___7)
      {
        printf("\nSTMT_EXEC;;9180\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))1);
      }
      printf("\nSTMT_EXEC;;9182\n");
tmp___8 = c_isdigit((int)*(s2 + s2_pos));
      printf("\nSTMT_EXEC;;9183\n");
if (tmp___8)
      {
        printf("\nSTMT_EXEC;;9185\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__))) - 1);
      }
      printf("\nSTMT_EXEC;;9187\n");
if (first_diff)
      {
        printf("\nSTMT_EXEC;;9189\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))first_diff);
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;9193\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))0);
  }
printf("\nFUNC_RETURN;;\n");
}
int filevercmp(char const *s1, char const *s2)
{
  printf("\nFUNC_CALL;filevercmp(const char *,const char *);\n");
printf("\nSTMT_EXEC;;9198\n");
char const *s1_pos;
  printf("\nSTMT_EXEC;;9199\n");
char const *s2_pos;
  printf("\nSTMT_EXEC;;9200\n");
char const *s1_suffix;
  printf("\nSTMT_EXEC;;9201\n");
char const *s2_suffix;
  printf("\nSTMT_EXEC;;9202\n");
size_t s1_len;
  printf("\nSTMT_EXEC;;9203\n");
size_t s2_len;
  printf("\nSTMT_EXEC;;9204\n");
int result;
  printf("\nSTMT_EXEC;;9205\n");
int simple_cmp;
  printf("\nSTMT_EXEC;;9206\n");
int tmp;
  printf("\nSTMT_EXEC;;9207\n");
int tmp___0;
  printf("\nSTMT_EXEC;;9208\n");
int tmp___1;
  printf("\nSTMT_EXEC;;9209\n");
int tmp___2;
  printf("\nSTMT_EXEC;;9210\n");
int tmp___3;
  printf("\nSTMT_EXEC;;9211\n");
char const *tmp___4;
  printf("\nSTMT_EXEC;;9212\n");
char const *tmp___5;
  printf("\nSTMT_EXEC;;9213\n");
int tmp___6;
  printf("\nSTMT_EXEC;;9214\n");
int tmp___7;
  {
    printf("\nSTMT_EXEC;;9216\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp(s1, s2);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9217\n");
simple_cmp = tmp;
    printf("\nSTMT_EXEC;;9218\n");
if (simple_cmp == 0)
    {
      printf("\nSTMT_EXEC;;9220\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;9222\n");
if (!*s1)
    {
      printf("\nSTMT_EXEC;;9224\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    printf("\nSTMT_EXEC;;9226\n");
if (!*s2)
    {
      printf("\nSTMT_EXEC;;9228\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;9230\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___0 = strcmp(".", s1);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9231\n");
if (0 == tmp___0)
    {
      printf("\nSTMT_EXEC;;9233\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    printf("\nSTMT_EXEC;;9235\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp(".", s2);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9236\n");
if (0 == tmp___1)
    {
      printf("\nSTMT_EXEC;;9238\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;9240\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___2 = strcmp("..", s1);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9241\n");
if (0 == tmp___2)
    {
      printf("\nSTMT_EXEC;;9243\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    printf("\nSTMT_EXEC;;9245\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___3 = strcmp("..", s2);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9246\n");
if (0 == tmp___3)
    {
      printf("\nSTMT_EXEC;;9248\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;9250\n");
if ((int const) * s1 == 46)
    {
      printf("\nSTMT_EXEC;;9252\n");
if ((int const) * s2 != 46)
      {
        printf("\nSTMT_EXEC;;9254\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
      }
    }
    printf("\nSTMT_EXEC;;9257\n");
if ((int const) * s1 != 46)
    {
      printf("\nSTMT_EXEC;;9259\n");
if ((int const) * s2 == 46)
      {
        printf("\nSTMT_EXEC;;9261\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    printf("\nSTMT_EXEC;;9264\n");
if ((int const) * s1 == 46)
    {
      printf("\nSTMT_EXEC;;9266\n");
if ((int const) * s2 == 46)
      {
        printf("\nSTMT_EXEC;;9268\n");
s1++;
        printf("\nSTMT_EXEC;;9269\n");
s2++;
      }
    }
    printf("\nSTMT_EXEC;;9272\n");
s1_pos = s1;
    printf("\nSTMT_EXEC;;9273\n");
s2_pos = s2;
    printf("\nSTMT_EXEC;;9274\n");
s1_suffix = match_suffix(&s1_pos);
    printf("\nSTMT_EXEC;;9275\n");
s2_suffix = match_suffix(&s2_pos);
    printf("\nSTMT_EXEC;;9276\n");
if (s1_suffix)
    {
      printf("\nSTMT_EXEC;;9278\n");
tmp___4 = s1_suffix;
    }
    else
    {
      printf("\nSTMT_EXEC;;9282\n");
tmp___4 = s1_pos;
    }
    printf("\nSTMT_EXEC;;9284\n");
s1_len = (size_t)(tmp___4 - s1);
    printf("\nSTMT_EXEC;;9285\n");
if (s2_suffix)
    {
      printf("\nSTMT_EXEC;;9287\n");
tmp___5 = s2_suffix;
    }
    else
    {
      printf("\nSTMT_EXEC;;9291\n");
tmp___5 = s2_pos;
    }
    printf("\nSTMT_EXEC;;9293\n");
s2_len = (size_t)(tmp___5 - s2);
    printf("\nSTMT_EXEC;;9294\n");
if (s1_suffix)
    {
      printf("\nSTMT_EXEC;;9296\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;9300\n");
if (s2_suffix)
      {
      _L:
        {
printf("\nSTMT_EXEC;;9303\n");
if (s1_len == s2_len)
        {
          printf("\nSTMT_EXEC;;9305\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___6 = strncmp(s1, s2, s1_len);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9306\n");
if (0 == tmp___6)
          {
            printf("\nSTMT_EXEC;;9308\n");
s1_len = (size_t)(s1_pos - s1);
            printf("\nSTMT_EXEC;;9309\n");
s2_len = (size_t)(s2_pos - s2);
          }
        }
}

      }
    }
    printf("\nSTMT_EXEC;;9314\n");
result = (int)verrevcmp(s1, s1_len, s2, s2_len);
    printf("\nSTMT_EXEC;;9315\n");
if (result == 0)
    {
      printf("\nSTMT_EXEC;;9317\n");
tmp___7 = simple_cmp;
    }
    else
    {
      printf("\nSTMT_EXEC;;9321\n");
tmp___7 = result;
    }
    printf("\nSTMT_EXEC;;9323\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___7);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
extern int fflush(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) __freading)(FILE *__fp);
__inline static void clear_ungetc_buffer_preserving_position(FILE *fp)
{
  printf("\nFUNC_CALL;clear_ungetc_buffer_preserving_position(FILE *);\n");
{
    printf("\nSTMT_EXEC;;9332\n");
if (fp->_flags & 256)
    {
      printf("\nSTMT_EXEC;;9334\n");
rpl_fseeko(fp, (off_t)0, 1);
    }
    printf("\nSTMT_EXEC;;9336\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int rpl_fflush(FILE *stream)
{
  printf("\nFUNC_CALL;rpl_fflush(FILE *);\n");
printf("\nSTMT_EXEC;;9341\n");
int tmp;
  printf("\nSTMT_EXEC;;9342\n");
int tmp___0;
  printf("\nSTMT_EXEC;;9343\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;9345\n");
if ((unsigned long)stream == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;9347\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
tmp = fflush(stream);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9348\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    }
    else
    {
      printf("\nSTMT_EXEC;;9352\n");
printf("\nFUNC_CALL;__freading(FILE *);\n");
tmp___0 = __freading(stream);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9353\n");
if (!(tmp___0 != 0))
      {
        printf("\nSTMT_EXEC;;9355\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
tmp = fflush(stream);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9356\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
      }
    }
    printf("\nSTMT_EXEC;;9359\n");
clear_ungetc_buffer_preserving_position(stream);
    printf("\nSTMT_EXEC;;9360\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
tmp___1 = fflush(stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9361\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
int fd_safer(int fd)
{
  printf("\nFUNC_CALL;fd_safer(int);\n");
printf("\nSTMT_EXEC;;9366\n");
int f;
  printf("\nSTMT_EXEC;;9367\n");
int tmp;
  printf("\nSTMT_EXEC;;9368\n");
int e;
  printf("\nSTMT_EXEC;;9369\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;9370\n");
int *tmp___1;
  {
    printf("\nSTMT_EXEC;;9372\n");
if (0 <= fd)
    {
      printf("\nSTMT_EXEC;;9374\n");
if (fd <= 2)
      {
        printf("\nSTMT_EXEC;;9376\n");
tmp = dup_safer(fd);
        printf("\nSTMT_EXEC;;9377\n");
f = tmp;
        printf("\nSTMT_EXEC;;9378\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9379\n");
e = *tmp___0;
        printf("\nSTMT_EXEC;;9380\n");
printf("\nFUNC_CALL;close(int);\n");
close(fd);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9381\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9382\n");
*tmp___1 = e;
        printf("\nSTMT_EXEC;;9383\n");
fd = f;
      }
    }
    printf("\nSTMT_EXEC;;9386\n");
printf("\nFUNC_RETURN;;\n");
return (fd);
  }
printf("\nFUNC_RETURN;;\n");
}
extern int fcntl(int __fd, int __cmd, ...);
static int have_dupfd_cloexec = 0;
int rpl_fcntl(int fd, int action, ...)
{
  printf("\nFUNC_CALL;rpl_fcntl(int,int);\n");
printf("\nSTMT_EXEC;;9393\n");
va_list arg;
  printf("\nSTMT_EXEC;;9394\n");
int result;
  printf("\nSTMT_EXEC;;9395\n");
int target;
  printf("\nSTMT_EXEC;;9396\n");
int tmp;
  printf("\nSTMT_EXEC;;9397\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;9398\n");
int flags;
  printf("\nSTMT_EXEC;;9399\n");
int tmp___1;
  printf("\nSTMT_EXEC;;9400\n");
int saved_errno;
  printf("\nSTMT_EXEC;;9401\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;9402\n");
int *tmp___3;
  printf("\nSTMT_EXEC;;9403\n");
int tmp___4;
  printf("\nSTMT_EXEC;;9404\n");
void *p;
  printf("\nSTMT_EXEC;;9405\n");
void *tmp___5;
  {
    printf("\nSTMT_EXEC;;9407\n");
result = -1;
    printf("\nSTMT_EXEC;;9408\n");
printf("\nFUNC_CALL;__builtin_va_start(struct __va_list_tag *);\n");
__builtin_va_start(arg, action);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9409\n");
if (action == 1030)
    {
      printf("\nSTMT_EXEC;;9411\n");
goto case_1030;
    }
    printf("\nSTMT_EXEC;;9413\n");
goto switch_default;
  case_1030:
    {
printf("\nSTMT_EXEC;;9415\n");
tmp = __builtin_va_arg(arg, int);
}

    printf("\nSTMT_EXEC;;9416\n");
target = tmp;
    printf("\nSTMT_EXEC;;9417\n");
if (0 <= have_dupfd_cloexec)
    {
      printf("\nSTMT_EXEC;;9419\n");
printf("\nFUNC_CALL;fcntl(int,int);\n");
result = fcntl(fd, action, target);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9420\n");
if (0 <= result)
      {
        printf("\nSTMT_EXEC;;9422\n");
have_dupfd_cloexec = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;9426\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9427\n");
if (*tmp___0 != 22)
        {
          printf("\nSTMT_EXEC;;9429\n");
have_dupfd_cloexec = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;9433\n");
result = rpl_fcntl(fd, 0, target);
          printf("\nSTMT_EXEC;;9434\n");
if (result < 0)
          {
            printf("\nSTMT_EXEC;;9436\n");
goto switch_break;
          }
          printf("\nSTMT_EXEC;;9438\n");
have_dupfd_cloexec = -1;
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;9444\n");
result = rpl_fcntl(fd, 0, target);
    }
    printf("\nSTMT_EXEC;;9446\n");
if (0 <= result)
    {
      printf("\nSTMT_EXEC;;9448\n");
if (have_dupfd_cloexec == -1)
      {
        printf("\nSTMT_EXEC;;9450\n");
printf("\nFUNC_CALL;fcntl(int,int);\n");
tmp___1 = fcntl(result, 1);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9451\n");
flags = tmp___1;
        printf("\nSTMT_EXEC;;9452\n");
if (flags < 0)
        {
          printf("\nSTMT_EXEC;;9454\n");
goto _L;
        }
        else
        {
          printf("\nSTMT_EXEC;;9458\n");
printf("\nFUNC_CALL;fcntl(int,int);\n");
tmp___4 = fcntl(result, 2, flags | 1);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9459\n");
if (tmp___4 == -1)
          {
          _L:
            {
printf("\nSTMT_EXEC;;9462\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

}

            printf("\nSTMT_EXEC;;9463\n");
saved_errno = *tmp___2;
            printf("\nSTMT_EXEC;;9464\n");
printf("\nFUNC_CALL;close(int);\n");
close(result);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9465\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9466\n");
*tmp___3 = saved_errno;
            printf("\nSTMT_EXEC;;9467\n");
result = -1;
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;9472\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;9474\n");
tmp___5 = __builtin_va_arg(arg, void *);
}

    printf("\nSTMT_EXEC;;9475\n");
p = tmp___5;
    printf("\nSTMT_EXEC;;9476\n");
printf("\nFUNC_CALL;fcntl(int,int);\n");
result = fcntl(fd, action, p);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9477\n");
goto switch_break;
  switch_break:
    {
printf("\nSTMT_EXEC;;9479\n");
printf("\nFUNC_CALL;__builtin_va_end(struct __va_list_tag *);\n");
__builtin_va_end(arg);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;9480\n");
printf("\nFUNC_RETURN;;\n");
return (result);
  }
printf("\nFUNC_RETURN;;\n");
}
extern int fclose(FILE *__stream);
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp)
{
  printf("\nFUNC_CALL;rpl_fclose(FILE *);\n");
printf("\nSTMT_EXEC;;9486\n");
int saved_errno;
  printf("\nSTMT_EXEC;;9487\n");
int fd;
  printf("\nSTMT_EXEC;;9488\n");
int result;
  printf("\nSTMT_EXEC;;9489\n");
int tmp;
  printf("\nSTMT_EXEC;;9490\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;9491\n");
int tmp___1;
  printf("\nSTMT_EXEC;;9492\n");
int tmp___2;
  printf("\nSTMT_EXEC;;9493\n");
__off_t tmp___3;
  printf("\nSTMT_EXEC;;9494\n");
int tmp___4;
  printf("\nSTMT_EXEC;;9495\n");
int *tmp___5;
  {
    printf("\nSTMT_EXEC;;9497\n");
saved_errno = 0;
    printf("\nSTMT_EXEC;;9498\n");
result = 0;
    printf("\nSTMT_EXEC;;9499\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
fd = fileno(fp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9500\n");
if (fd < 0)
    {
      printf("\nSTMT_EXEC;;9502\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
tmp = fclose(fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9503\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    }
    printf("\nSTMT_EXEC;;9505\n");
printf("\nFUNC_CALL;__freading(FILE *);\n");
tmp___1 = __freading(fp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9506\n");
if (tmp___1 != 0)
    {
      printf("\nSTMT_EXEC;;9508\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___2 = fileno(fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9509\n");
printf("\nFUNC_CALL;lseek(int,__off_t,int);\n");
tmp___3 = lseek(tmp___2, (__off_t)0, 1);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9510\n");
if (tmp___3 != -1L)
      {
      _L:
        {
printf("\nSTMT_EXEC;;9513\n");
tmp___4 = rpl_fflush(fp);
}

        printf("\nSTMT_EXEC;;9514\n");
if (tmp___4)
        {
          printf("\nSTMT_EXEC;;9516\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9517\n");
saved_errno = *tmp___0;
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;9523\n");
goto _L;
    }
    printf("\nSTMT_EXEC;;9525\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
result = fclose(fp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9526\n");
if (saved_errno != 0)
    {
      printf("\nSTMT_EXEC;;9528\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9529\n");
*tmp___5 = saved_errno;
      printf("\nSTMT_EXEC;;9530\n");
result = -1;
    }
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
void fdadvise(int fd, off_t offset, off_t len, fadvice_t advice)
{
  printf("\nFUNC_CALL;fdadvise(int,off_t,off_t,fadvice_t);\n");
printf("\nSTMT_EXEC;;9543\n");
int __x;
  printf("\nSTMT_EXEC;;9544\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;9546\n");
printf("\nFUNC_CALL;posix_fadvise(int,off_t,off_t,int);\n");
tmp = posix_fadvise(fd, offset, len, (int)advice);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9547\n");
__x = tmp;
    printf("\nSTMT_EXEC;;9548\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void fadvise(FILE *fp, fadvice_t advice)
{
  printf("\nFUNC_CALL;fadvise(FILE *,fadvice_t);\n");
printf("\nSTMT_EXEC;;9553\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;9555\n");
if (fp)
    {
      printf("\nSTMT_EXEC;;9557\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp = fileno(fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9558\n");
fdadvise(tmp, (off_t)0, (off_t)0, advice);
    }
    printf("\nSTMT_EXEC;;9560\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int volatile exit_failure = (int volatile)1;
int dup_safer(int fd)
{
  printf("\nFUNC_CALL;dup_safer(int);\n");
printf("\nSTMT_EXEC;;9566\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;9568\n");
tmp = rpl_fcntl(fd, 0, 3);
    printf("\nSTMT_EXEC;;9569\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
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
char const *Version = "8.16";
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
__inline static void initialize_exit_failure(int status)
{
  printf("\nFUNC_CALL;initialize_exit_failure(int);\n");
{
    printf("\nSTMT_EXEC;;9624\n");
if (status != 1)
    {
      printf("\nSTMT_EXEC;;9626\n");
exit_failure = (int volatile)status;
    }
    printf("\nSTMT_EXEC;;9628\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) ngettext)(char const *__msgid1, char const *__msgid2, unsigned long __n) __attribute__((__format_arg__(2), __format_arg__(1)));
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);
__inline static unsigned long select_plural(uintmax_t n)
{
  printf("\nFUNC_CALL;select_plural(uintmax_t);\n");
printf("\nSTMT_EXEC;;9636\n");
uintmax_t tmp;
  {
    printf("\nSTMT_EXEC;;9638\n");
if (n <= 0xffffffffffffffffUL)
    {
      printf("\nSTMT_EXEC;;9640\n");
tmp = n;
    }
    else
    {
      printf("\nSTMT_EXEC;;9644\n");
tmp = n % 1000000UL + 1000000UL;
    }
    printf("\nSTMT_EXEC;;9646\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
extern int fputc_unlocked(int __c, FILE *__stream);
extern int putchar_unlocked(int __c);
extern size_t fwrite_unlocked(void const *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) clearerr_unlocked)(FILE *__stream);
__inline static void emit_ancillary_info(void)
{
  printf("\nFUNC_CALL;emit_ancillary_info();\n");
printf("\nSTMT_EXEC;;9655\n");
char *tmp;
  printf("\nSTMT_EXEC;;9656\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;9657\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;9658\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;9659\n");
char const *lc_messages;
  printf("\nSTMT_EXEC;;9660\n");
char const *tmp___3;
  printf("\nSTMT_EXEC;;9661\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;9662\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;9663\n");
int tmp___6;
  printf("\nSTMT_EXEC;;9664\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;9665\n");
char *tmp___8;
  {
    printf("\nSTMT_EXEC;;9667\n");
tmp = last_component(program_name);
    printf("\nSTMT_EXEC;;9668\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("\nReport %s bugs to %s\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9669\n");
printf((char const *)tmp___0, tmp, "bug-coreutils@gnu.org");
    printf("\nSTMT_EXEC;;9670\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("%s home page: <%s>\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9671\n");
printf((char const *)tmp___1, "GNU coreutils", "http://www.gnu.org/software/coreutils/");
    printf("\nSTMT_EXEC;;9672\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("General help using GNU software: <http://www.gnu.org/gethelp/>\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9673\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___2, stdout);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9674\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
tmp___3 = (char const *)setlocale(5, (char const *)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9675\n");
lc_messages = tmp___3;
    printf("\nSTMT_EXEC;;9676\n");
if (lc_messages)
    {
      printf("\nSTMT_EXEC;;9678\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___6 = strncmp(lc_messages, "en_", sizeof("en_") - 1UL);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9679\n");
if (tmp___6)
      {
        printf("\nSTMT_EXEC;;9681\n");
tmp___4 = last_component(program_name);
        printf("\nSTMT_EXEC;;9682\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 = gettext("Report %s translation bugs to "
                          "<http://translationproject.org/team/>\n");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9684\n");
printf((char const *)tmp___5, tmp___4);
      }
    }
    printf("\nSTMT_EXEC;;9687\n");
tmp___7 = last_component(program_name);
    printf("\nSTMT_EXEC;;9688\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 = gettext("For complete documentation, run: info coreutils \'%s invocation\'\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9689\n");
printf((char const *)tmp___8, tmp___7);
    printf("\nSTMT_EXEC;;9690\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static void emit_try_help(void)
{
  printf("\nFUNC_CALL;emit_try_help();\n");
printf("\nSTMT_EXEC;;9695\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;9697\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("Try \'%s --help\' for more information.\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9698\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, (char const *)tmp, program_name);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9699\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getrlimit)(__rlimit_resource_t __resource, struct rlimit *__rlimits);
static int decimal_point;
static int thousands_sep;
static _Bool hard_LC_COLLATE;
static _Bool hard_LC_TIME;
static char eolchar = (char)'\n';
static _Bool blanks[256];
static _Bool nonprinting[256];
static _Bool nondictionary[256];
static char fold_toupper[256];
static struct month monthtab[12] = {{"APR", 4}, {"AUG", 8}, {"DEC", 12}, {"FEB", 2}, {"JAN", 1}, {"JUL", 7}, {"JUN", 6}, {"MAR", 3}, {"MAY", 5}, {"NOV", 11}, {"OCT", 10}, {"SEP", 9}};
static size_t merge_buffer_size = (size_t)262144;
static size_t sort_size;
static char const **temp_dirs;
static size_t temp_dir_count;
static size_t temp_dir_alloc;
static _Bool reverse;
static _Bool stable;
static int tab = 128;
static _Bool unique;
static _Bool have_read_stdin;
static struct keyfield *keylist;
static char const *compress_program;
static _Bool debug;
static unsigned int nmerge = 16U;
static __attribute__((__noreturn__)) void die(char const *message, char const *file);
static __attribute__((__noreturn__)) void die(char const *message, char const *file);
static void die(char const *message, char const *file)
{
  printf("\nFUNC_CALL;die(const char *,const char *);\n");
printf("\nSTMT_EXEC;;9731\n");
char *tmp;
  printf("\nSTMT_EXEC;;9732\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;9733\n");
int *tmp___1;
  {
    printf("\nSTMT_EXEC;;9735\n");
if (file)
    {
      printf("\nSTMT_EXEC;;9737\n");
tmp___0 = file;
    }
    else
    {
      printf("\nSTMT_EXEC;;9741\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("standard output");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9742\n");
tmp___0 = (char const *)tmp;
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
void usage(int status)
{
  printf("\nFUNC_CALL;usage(int);\n");
printf("\nSTMT_EXEC;;9752\n");
char *tmp;
  printf("\nSTMT_EXEC;;9753\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;9754\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;9755\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;9756\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;9757\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;9758\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;9759\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;9760\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;9761\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;9762\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;9763\n");
char *tmp___10;
  printf("\nSTMT_EXEC;;9764\n");
char *tmp___11;
  printf("\nSTMT_EXEC;;9765\n");
char *tmp___12;
  printf("\nSTMT_EXEC;;9766\n");
char *tmp___13;
  printf("\nSTMT_EXEC;;9767\n");
char *tmp___14;
  printf("\nSTMT_EXEC;;9768\n");
char *tmp___15;
  printf("\nSTMT_EXEC;;9769\n");
char *tmp___16;
  printf("\nSTMT_EXEC;;9770\n");
char *tmp___17;
  printf("\nSTMT_EXEC;;9771\n");
char *tmp___18;
  printf("\nSTMT_EXEC;;9772\n");
char *tmp___19;
  {
    printf("\nSTMT_EXEC;;9774\n");
if (status != 0)
    {
      printf("\nSTMT_EXEC;;9776\n");
emit_try_help();
    }
    else
    {
      printf("\nSTMT_EXEC;;9780\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... "
                    "--files0-from=F\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9782\n");
printf((char const *)tmp, program_name, program_name);
      printf("\nSTMT_EXEC;;9783\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("Write sorted concatenation of all FILE(s) to standard output.\n\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9784\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___0, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9785\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("Mandatory arguments to long options are mandatory for "
                        "short options too.\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9787\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___1, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9788\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("Ordering options:\n\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9789\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___2, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9790\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext("  -b, --ignore-leading-blanks  ignore leading blanks\n  -d, "
                        "--dictionary-order      consider only blanks and "
                        "alphanumeric characters\n  -f, --ignore-case           fold "
                        "lower case to upper case characters\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9794\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___3, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9795\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("  -g, --general-numeric-sort  compare according to general "
                        "numerical value\n  -i, --ignore-nonprinting    consider "
                        "only printable characters\n  -M, --month-sort            "
                        "compare (unknown) < \'JAN\' < ... < \'DEC\'\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9799\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___4, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9800\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 = gettext("  -h, --human-numeric-sort    compare human readable "
                        "numbers (e.g., 2K 1G)\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9802\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___5, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9803\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___6 = gettext("  -n, --numeric-sort          compare according to string numerical "
                        "value\n  -R, --random-sort           sort by random hash of keys\n  "
                        "    --random-source=FILE    get random bytes from FILE\n  -r, "
                        "--reverse               reverse the result of comparisons\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9807\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___6, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9808\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___7 = gettext("      --sort=WORD             sort according to WORD:\n     "
                        "                           general-numeric -g, "
                        "human-numeric -h, month -M,\n                               "
                        " numeric -n, random -R, version -V\n  -V, --version-sort    "
                        "      natural sort of (version) numbers within text\n\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9813\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___7, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9814\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 = gettext("Other options:\n\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9815\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___8, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9816\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___9 = gettext("      --batch-size=NMERGE   merge at most NMERGE inputs at once;\n  "
                        "                          for more use temp files\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9818\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___9, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9819\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext("  -c, --check, --check=diagnose-first  check for sorted "
                         "input; do not sort\n  -C, --check=quiet, --check=silent  "
                         "like -c, but do not report first bad line\n      "
                         "--compress-program=PROG  compress temporaries with PROG;\n  "
                         "                            decompress them with PROG -d\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9824\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___10, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9825\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___11 = gettext("      --debug               annotate the part of the line "
                         "used to sort,\n                              and warn about "
                         "questionable usage to stderr\n      --files0-from=F       "
                         "read input from the files specified by\n                    "
                         "        NUL-terminated names in file F;\n                   "
                         "         If F is - then read names from standard input\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9831\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___11, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9832\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___12 = gettext("  -k, --key=KEYDEF          sort via a key; KEYDEF "
                         "gives location and type\n  -m, --merge               "
                         "merge already sorted files; do not sort\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9835\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___12, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9836\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___13 = gettext("  -o, --output=FILE         write result to FILE instead of "
                         "standard output\n  -s, --stable              stabilize sort "
                         "by disabling last-resort comparison\n  -S, "
                         "--buffer-size=SIZE    use SIZE for main memory buffer\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9840\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___13, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9841\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___14 = gettext("  -t, --field-separator=SEP  use SEP instead of non-blank "
                         "to blank transition\n  -T, --temporary-directory=DIR  use "
                         "DIR for temporaries, not $TMPDIR or %s;\n                   "
                         "           multiple options specify multiple directories\n  "
                         "    --parallel=N          change the number of sorts run "
                         "concurrently to N\n  -u, --unique              with -c, "
                         "check for strict ordering;\n                              "
                         "without -c, output only the first of an equal run\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9849\n");
printf((char const *)tmp___14, "/tmp");
      printf("\nSTMT_EXEC;;9850\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___15 = gettext("  -z, --zero-terminated     end lines with 0 byte, not newline\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9851\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___15, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9852\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___16 = gettext("      --help     display this help and exit\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9853\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___16, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9854\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___17 = gettext("      --version  output version information and exit\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9855\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___17, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9856\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___18 = gettext("\nKEYDEF is F[.C][OPTS][,F[.C][OPTS]] for start and stop position, "
                         "where F is a\nfield number and C a character position in the field; "
                         "both are origin 1, and\nthe stop position defaults to the line\'s "
                         "end.  If neither -t nor -b is in\neffect, characters in a field are "
                         "counted from the beginning of the preceding\nwhitespace.  OPTS is "
                         "one or more single-letter ordering options [bdfgiMhnRrV],\nwhich "
                         "override global ordering options for that key.  If no key is given, "
                         "use\nthe entire line as the key.\n\nSIZE may be followed by the "
                         "following multiplicative suffixes:\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9865\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___18, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9866\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___19 = gettext("% 1% of memory, b 1, K 1024 (default), and so on for M, G, T, P, E, "
                         "Z, Y.\n\nWith no FILE, or when FILE is -, read standard "
                         "input.\n\n*** WARNING ***\nThe locale specified by the environment "
                         "affects sort order.\nSet LC_ALL=C to get the traditional sort order "
                         "that uses\nnative byte values.\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9871\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___19, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9872\n");
emit_ancillary_info();
    }
    printf("\nSTMT_EXEC;;9874\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(status);printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
static char const short_options[31] = {(char const)'-', (char const)'b', (char const)'c', (char const)'C', (char const)'d', (char const)'f', (char const)'g', (char const)'h', (char const)'i', (char const)'k', (char const)':', (char const)'m', (char const)'M', (char const)'n', (char const)'o', (char const)':', (char const)'r', (char const)'R', (char const)'s', (char const)'S', (char const)':', (char const)'t', (char const)':', (char const)'T', (char const)':', (char const)'u', (char const)'V', (char const)'y', (char const)':', (char const)'z', (char const)'\000'};
static struct option const long_options___1[31] = {{"ignore-leading-blanks", 0, (int *)((void *)0), 'b'}, {"check", 2, (int *)((void *)0), 128}, {"compress-program", 1, (int *)((void *)0), 129}, {"debug", 0, (int *)((void *)0), 130}, {"dictionary-order", 0, (int *)((void *)0), 'd'}, {"ignore-case", 0, (int *)((void *)0), 'f'}, {"files0-from", 1, (int *)((void *)0), 131}, {"general-numeric-sort", 0, (int *)((void *)0), 'g'}, {"ignore-nonprinting", 0, (int *)((void *)0), 'i'}, {"key", 1, (int *)((void *)0), 'k'}, {"merge", 0, (int *)((void *)0), 'm'}, {"month-sort", 0, (int *)((void *)0), 'M'}, {"numeric-sort", 0, (int *)((void *)0), 'n'}, {"human-numeric-sort", 0, (int *)((void *)0), 'h'}, {"version-sort", 0, (int *)((void *)0), 'V'}, {"random-sort", 0, (int *)((void *)0), 'R'}, {"random-source", 1, (int *)((void *)0), 133}, {"sort", 1, (int *)((void *)0), 134}, {"output", 1, (int *)((void *)0), 'o'}, {"reverse", 0, (int *)((void *)0), 'r'}, {"stable", 0, (int *)((void *)0), 's'}, {"batch-size", 1, (int *)((void *)0), 132}, {"buffer-size", 1, (int *)((void *)0), 'S'}, {"field-separator", 1, (int *)((void *)0), 't'}, {"temporary-directory", 1, (int *)((void *)0), 'T'}, {"unique", 0, (int *)((void *)0), 'u'}, {"zero-terminated", 0, (int *)((void *)0), 'z'}, {"parallel", 1, (int *)((void *)0), 135}, {"help", 0, (int *)((void *)0), -130}, {"version", 0, (int *)((void *)0), -131}, {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
static char const *const check_args[4] = {"quiet", "silent", "diagnose-first", (char const *)((void *)0)};
static char const check_types[3] = {(char const)'C', (char const)'C', (char const)'c'};
static char const *const sort_args[7] = {"general-numeric", "human-numeric", "month", "numeric", "random", "version", (char const *)((void *)0)};
static char const sort_types[6] = {(char const)'g', (char const)'h', (char const)'M', (char const)'n', (char const)'R', (char const)'V'};
static sigset_t caught_signals;
static struct cs_status cs_enter(void)
{
  printf("\nFUNC_CALL;cs_enter();\n");
printf("\nSTMT_EXEC;;9886\n");
struct cs_status status;
  printf("\nSTMT_EXEC;;9887\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;9889\n");
printf("\nFUNC_CALL;sigprocmask(int,const sigset_t *__restrict,sigset_t *__restrict);\n");
tmp = sigprocmask(0, (sigset_t const *)(&caught_signals), &status.sigs);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9890\n");
status.valid = (_Bool)(tmp == 0);
    printf("\nSTMT_EXEC;;9891\n");
printf("\nFUNC_RETURN;;\n");
return (status);
  }
printf("\nFUNC_RETURN;;\n");
}
static void cs_leave(struct cs_status status)
{
  printf("\nFUNC_CALL;cs_leave(struct cs_status);\n");
{
    printf("\nSTMT_EXEC;;9897\n");
if (status.valid)
    {
      printf("\nSTMT_EXEC;;9899\n");
printf("\nFUNC_CALL;sigprocmask(int,const sigset_t *__restrict,sigset_t *__restrict);\n");
sigprocmask(2, (sigset_t const *)(&status.sigs), (sigset_t *)((void *)0));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9901\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static struct tempnode *volatile temphead;
static struct tempnode *volatile *temptail = &temphead;
static Hash_table *proctab;
static size_t proctab_hasher(void const *entry, size_t tabsize)
{
  printf("\nFUNC_CALL;proctab_hasher(const void *,size_t);\n");
printf("\nSTMT_EXEC;;9909\n");
struct tempnode const *node;
  {
    printf("\nSTMT_EXEC;;9911\n");
node = (struct tempnode const *)entry;
    printf("\nSTMT_EXEC;;9912\n");
printf("\nFUNC_RETURN;;\n");
return ((unsigned long)node->pid % tabsize);
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool proctab_comparator(void const *e1, void const *e2)
{
  printf("\nFUNC_CALL;proctab_comparator(const void *,const void *);\n");
printf("\nSTMT_EXEC;;9917\n");
struct tempnode const *n1;
  printf("\nSTMT_EXEC;;9918\n");
struct tempnode const *n2;
  {
    printf("\nSTMT_EXEC;;9920\n");
n1 = (struct tempnode const *)e1;
    printf("\nSTMT_EXEC;;9921\n");
n2 = (struct tempnode const *)e2;
    printf("\nSTMT_EXEC;;9922\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)(n1->pid == n2->pid));
  }
printf("\nFUNC_RETURN;;\n");
}
static pid_t nprocs;
static _Bool delete_proc(pid_t pid);
static pid_t reap(pid_t pid)
{
  printf("\nFUNC_CALL;reap(pid_t);\n");
printf("\nSTMT_EXEC;;9929\n");
int status;
  printf("\nSTMT_EXEC;;9930\n");
pid_t cpid;
  printf("\nSTMT_EXEC;;9931\n");
int tmp;
  printf("\nSTMT_EXEC;;9932\n");
pid_t tmp___0;
  printf("\nSTMT_EXEC;;9933\n");
pid_t tmp___1;
  printf("\nSTMT_EXEC;;9934\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;9935\n");
int *tmp___3;
  printf("\nSTMT_EXEC;;9936\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;9937\n");
union __anonunion_101 __constr_expr_82;
  printf("\nSTMT_EXEC;;9938\n");
union __anonunion_102 __constr_expr_83;
  printf("\nSTMT_EXEC;;9939\n");
_Bool tmp___5;
  {
    printf("\nSTMT_EXEC;;9941\n");
if (pid)
    {
      printf("\nSTMT_EXEC;;9943\n");
tmp = 0;
    }
    else
    {
      printf("\nSTMT_EXEC;;9947\n");
tmp = 1;
    }
    printf("\nSTMT_EXEC;;9949\n");
if (pid)
    {
      printf("\nSTMT_EXEC;;9951\n");
tmp___0 = pid;
    }
    else
    {
      printf("\nSTMT_EXEC;;9955\n");
tmp___0 = -1;
    }
    printf("\nSTMT_EXEC;;9957\n");
printf("\nFUNC_CALL;waitpid(__pid_t,int *,int);\n");
tmp___1 = waitpid(tmp___0, &status, tmp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9958\n");
cpid = tmp___1;
    printf("\nSTMT_EXEC;;9959\n");
if (cpid < 0)
    {
      printf("\nSTMT_EXEC;;9961\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("waiting for %s [-d]");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9962\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9963\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___3, (char const *)tmp___2, compress_program);printf("\nFUNC_RETURN;;\n");

    }
    else
    {
      printf("\nSTMT_EXEC;;9967\n");
if (0 < cpid)
      {
        printf("\nSTMT_EXEC;;9969\n");
if (0 < pid)
        {
          printf("\nSTMT_EXEC;;9971\n");
goto _L;
        }
        else
        {
          printf("\nSTMT_EXEC;;9975\n");
tmp___5 = delete_proc(cpid);
          printf("\nSTMT_EXEC;;9976\n");
if (tmp___5)
          {
          _L:
            {
printf("\nSTMT_EXEC;;9979\n");
__constr_expr_82.__in = status;
}

            printf("\nSTMT_EXEC;;9980\n");
if ((__constr_expr_82.__i & 127) == 0)
            {
              printf("\nSTMT_EXEC;;9982\n");
__constr_expr_83.__in = status;
              printf("\nSTMT_EXEC;;9983\n");
if ((__constr_expr_83.__i & 65280) >> 8)
              {
                printf("\nSTMT_EXEC;;9985\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("%s [-d] terminated abnormally");printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;9986\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___4, compress_program);printf("\nFUNC_RETURN;;\n");

              }
            }
            else
            {
              printf("\nSTMT_EXEC;;9991\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("%s [-d] terminated abnormally");printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;9992\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___4, compress_program);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;9994\n");
nprocs--;
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;9999\n");
printf("\nFUNC_RETURN;;\n");
return (cpid);
  }
printf("\nFUNC_RETURN;;\n");
}
static void register_proc(struct tempnode *temp)
{
  printf("\nFUNC_CALL;register_proc(struct tempnode *);\n");
printf("\nSTMT_EXEC;;10004\n");
void *tmp;
  {
    printf("\nSTMT_EXEC;;10006\n");
if (!proctab)
    {
      printf("\nSTMT_EXEC;;10008\n");
proctab = hash_initialize((size_t)47, (Hash_tuning const *)((void *)0), &proctab_hasher, &proctab_comparator, (void (*)(void *))((void *)0));
      printf("\nSTMT_EXEC;;10009\n");
if (!proctab)
      {
        printf("\nSTMT_EXEC;;10011\n");
xalloc_die();
      }
    }
    printf("\nSTMT_EXEC;;10014\n");
temp->state = (char)1;
    printf("\nSTMT_EXEC;;10015\n");
tmp = hash_insert(proctab, (void const *)temp);
    printf("\nSTMT_EXEC;;10016\n");
if (!tmp)
    {
      printf("\nSTMT_EXEC;;10018\n");
xalloc_die();
    }
    printf("\nSTMT_EXEC;;10020\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool delete_proc(pid_t pid)
{
  printf("\nFUNC_CALL;delete_proc(pid_t);\n");
printf("\nSTMT_EXEC;;10025\n");
struct tempnode test;
  printf("\nSTMT_EXEC;;10026\n");
struct tempnode *node;
  printf("\nSTMT_EXEC;;10027\n");
struct tempnode *tmp;
  {
    printf("\nSTMT_EXEC;;10029\n");
test.pid = pid;
    printf("\nSTMT_EXEC;;10030\n");
tmp = (struct tempnode *)hash_delete(proctab, (void const *)(&test));
    printf("\nSTMT_EXEC;;10031\n");
node = tmp;
    printf("\nSTMT_EXEC;;10032\n");
if (!node)
    {
      printf("\nSTMT_EXEC;;10034\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
    }
    printf("\nSTMT_EXEC;;10036\n");
node->state = (char)2;
    printf("\nSTMT_EXEC;;10037\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
static void wait_proc(pid_t pid)
{
  printf("\nFUNC_CALL;wait_proc(pid_t);\n");
printf("\nSTMT_EXEC;;10042\n");
_Bool tmp;
  {
    printf("\nSTMT_EXEC;;10044\n");
tmp = delete_proc(pid);
    printf("\nSTMT_EXEC;;10045\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;10047\n");
reap(pid);
    }
    printf("\nSTMT_EXEC;;10049\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void reap_exited(void)
{
  printf("\nFUNC_CALL;reap_exited();\n");
printf("\nSTMT_EXEC;;10054\n");
pid_t tmp;
  {
    printf("\nSTMT_EXEC;;10056\n");
while (1)
    {
    while_continue:;
      printf("\nSTMT_EXEC;;10059\n");
if (0 < nprocs)
      {
        printf("\nSTMT_EXEC;;10061\n");
tmp = reap(0);
        printf("\nSTMT_EXEC;;10062\n");
if (!tmp)
        {
          printf("\nSTMT_EXEC;;10064\n");
goto while_break;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;10069\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;10071\n");
goto while_continue;
    }
  while_break:;
    printf("\nSTMT_EXEC;;10074\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void reap_some(void)
{
  printf("\nFUNC_CALL;reap_some();\n");
{
    printf("\nSTMT_EXEC;;10080\n");
reap(-1);
    printf("\nSTMT_EXEC;;10081\n");
reap_exited();
    printf("\nSTMT_EXEC;;10082\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void reap_all(void)
{
  printf("\nFUNC_CALL;reap_all();\n");
{
    printf("\nSTMT_EXEC;;10088\n");
while (1)
    {
      printf("\nSTMT_EXEC;;10090\n");
if (!(0 < nprocs))
      {
        printf("\nSTMT_EXEC;;10092\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;10094\n");
reap(-1);
    }
  while_break:;
    printf("\nSTMT_EXEC;;10097\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void cleanup(void)
{
  printf("\nFUNC_CALL;cleanup();\n");
printf("\nSTMT_EXEC;;10102\n");
struct tempnode const *node;
  {
    printf("\nSTMT_EXEC;;10104\n");
node = (struct tempnode const *)temphead;
    printf("\nSTMT_EXEC;;10105\n");
while (1)
    {
      printf("\nSTMT_EXEC;;10107\n");
if (!node)
      {
        printf("\nSTMT_EXEC;;10109\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;10111\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
unlink((char const *)(node->name));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10112\n");
node = (struct tempnode const *)node->next;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;10115\n");
temphead = (struct tempnode *)((void *)0);
}

    printf("\nSTMT_EXEC;;10116\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void exit_cleanup(void)
{
  printf("\nFUNC_CALL;exit_cleanup();\n");
printf("\nSTMT_EXEC;;10121\n");
struct cs_status cs;
  printf("\nSTMT_EXEC;;10122\n");
struct cs_status tmp;
  {
    printf("\nSTMT_EXEC;;10124\n");
if (temphead)
    {
      printf("\nSTMT_EXEC;;10126\n");
tmp = cs_enter();
      printf("\nSTMT_EXEC;;10127\n");
cs = tmp;
      printf("\nSTMT_EXEC;;10128\n");
cleanup();
      printf("\nSTMT_EXEC;;10129\n");
cs_leave(cs);
    }
    printf("\nSTMT_EXEC;;10131\n");
close_stdout();
    printf("\nSTMT_EXEC;;10132\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static struct tempnode *create_temp_file(int *pfd, _Bool survive_fd_exhaustion);
static char const slashbase[12] = {(char const)'/', (char const)'s', (char const)'o', (char const)'r', (char const)'t', (char const)'X', (char const)'X', (char const)'X', (char const)'X', (char const)'X', (char const)'X', (char const)'\000'};
static size_t temp_dir_index;
static struct tempnode *create_temp_file(int *pfd, _Bool survive_fd_exhaustion)
{
  printf("\nFUNC_CALL;create_temp_file(int *,_Bool);\n");
printf("\nSTMT_EXEC;;10140\n");
int fd;
  printf("\nSTMT_EXEC;;10141\n");
int saved_errno;
  printf("\nSTMT_EXEC;;10142\n");
char const *temp_dir;
  printf("\nSTMT_EXEC;;10143\n");
size_t len;
  printf("\nSTMT_EXEC;;10144\n");
size_t tmp;
  printf("\nSTMT_EXEC;;10145\n");
struct tempnode *node;
  printf("\nSTMT_EXEC;;10146\n");
struct tempnode *tmp___0;
  printf("\nSTMT_EXEC;;10147\n");
char *file;
  printf("\nSTMT_EXEC;;10148\n");
struct cs_status cs;
  printf("\nSTMT_EXEC;;10149\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;10150\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;10151\n");
char const *tmp___3;
  printf("\nSTMT_EXEC;;10152\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;10153\n");
int *tmp___5;
  printf("\nSTMT_EXEC;;10154\n");
int *tmp___6;
  {
    printf("\nSTMT_EXEC;;10156\n");
temp_dir = *(temp_dirs + temp_dir_index);
    printf("\nSTMT_EXEC;;10157\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen(temp_dir);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10158\n");
len = tmp;
    printf("\nSTMT_EXEC;;10159\n");
tmp___0 = (struct tempnode *)xmalloc(((unsigned long)(&((struct tempnode *)0)->name) + len) + sizeof(slashbase));
    printf("\nSTMT_EXEC;;10160\n");
node = tmp___0;
    printf("\nSTMT_EXEC;;10161\n");
file = node->name;
    printf("\nSTMT_EXEC;;10162\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)file, (void const *)temp_dir, len);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10163\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)(file + len), (void const *)(slashbase), sizeof(slashbase));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10164\n");
node->next = (struct tempnode *)((void *)0);
    printf("\nSTMT_EXEC;;10165\n");
temp_dir_index++;
    printf("\nSTMT_EXEC;;10166\n");
if (temp_dir_index == temp_dir_count)
    {
      printf("\nSTMT_EXEC;;10168\n");
temp_dir_index = (size_t)0;
    }
    printf("\nSTMT_EXEC;;10170\n");
cs = cs_enter();
    printf("\nSTMT_EXEC;;10171\n");
fd = mkstemp_safer(file);
    printf("\nSTMT_EXEC;;10172\n");
if (0 <= fd)
    {
      printf("\nSTMT_EXEC;;10174\n");
*temptail = node;
      printf("\nSTMT_EXEC;;10175\n");
temptail = &node->next;
    }
    printf("\nSTMT_EXEC;;10177\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10178\n");
saved_errno = *tmp___1;
    printf("\nSTMT_EXEC;;10179\n");
cs_leave(cs);
    printf("\nSTMT_EXEC;;10180\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10181\n");
*tmp___2 = saved_errno;
    printf("\nSTMT_EXEC;;10182\n");
if (fd < 0)
    {
      printf("\nSTMT_EXEC;;10184\n");
if (survive_fd_exhaustion)
      {
        printf("\nSTMT_EXEC;;10186\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___6 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10187\n");
if (!(*tmp___6 == 24))
        {
          printf("\nSTMT_EXEC;;10189\n");
tmp___3 = quote(temp_dir);
          printf("\nSTMT_EXEC;;10190\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("cannot create temporary file in %s");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10191\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10192\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___5, (char const *)tmp___4, tmp___3);printf("\nFUNC_RETURN;;\n");

        }
      }
      else
      {
        printf("\nSTMT_EXEC;;10197\n");
tmp___3 = quote(temp_dir);
        printf("\nSTMT_EXEC;;10198\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("cannot create temporary file in %s");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10199\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10200\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___5, (char const *)tmp___4, tmp___3);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;10202\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)node);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10203\n");
node = (struct tempnode *)((void *)0);
    }
    printf("\nSTMT_EXEC;;10205\n");
*pfd = fd;
    printf("\nSTMT_EXEC;;10206\n");
printf("\nFUNC_RETURN;;\n");
return (node);
  }
printf("\nFUNC_RETURN;;\n");
}
static FILE *stream_open(char const *file, char const *how)
{
  printf("\nFUNC_CALL;stream_open(const char *,const char *);\n");
printf("\nSTMT_EXEC;;10211\n");
FILE *fp;
  printf("\nSTMT_EXEC;;10212\n");
int tmp;
  printf("\nSTMT_EXEC;;10213\n");
FILE *tmp___0;
  {
    printf("\nSTMT_EXEC;;10215\n");
if (!file)
    {
      printf("\nSTMT_EXEC;;10217\n");
printf("\nFUNC_RETURN;;\n");
return (stdout);
    }
    printf("\nSTMT_EXEC;;10219\n");
if ((int const) * how == 114)
    {
      printf("\nSTMT_EXEC;;10221\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp(file, "-");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10222\n");
if (tmp == 0)
      {
        printf("\nSTMT_EXEC;;10224\n");
have_read_stdin = (_Bool)1;
        printf("\nSTMT_EXEC;;10225\n");
fp = stdin;
      }
      else
      {
        printf("\nSTMT_EXEC;;10229\n");
fp = fopen_safer(file, how);
      }
      printf("\nSTMT_EXEC;;10231\n");
fadvise(fp, (fadvice_t)2);
      printf("\nSTMT_EXEC;;10232\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
    }
    printf("\nSTMT_EXEC;;10234\n");
tmp___0 = fopen_safer(file, how);
    printf("\nSTMT_EXEC;;10235\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
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
static void xfclose(FILE *fp, char const *file)
{
  printf("\nFUNC_CALL;xfclose(FILE *,const char *);\n");
printf("\nSTMT_EXEC;;10256\n");
int tmp;
  printf("\nSTMT_EXEC;;10257\n");
int tmp___0;
  printf("\nSTMT_EXEC;;10258\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;10259\n");
int tmp___2;
  printf("\nSTMT_EXEC;;10260\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;10261\n");
int tmp___4;
  {
    printf("\nSTMT_EXEC;;10263\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp = fileno(fp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10264\n");
if (tmp == 0)
    {
      printf("\nSTMT_EXEC;;10266\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;10268\n");
if (tmp == 1)
    {
      printf("\nSTMT_EXEC;;10270\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;10272\n");
goto switch_default;
  case_0:
    {
printf("\nSTMT_EXEC;;10274\n");
printf("\nFUNC_CALL;feof_unlocked(FILE *);\n");
tmp___0 = feof_unlocked(fp);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;10275\n");
if (tmp___0)
    {
      printf("\nSTMT_EXEC;;10277\n");
printf("\nFUNC_CALL;clearerr_unlocked(FILE *);\n");
clearerr_unlocked(fp);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10279\n");
goto switch_break;
  case_1:
    {
printf("\nSTMT_EXEC;;10281\n");
printf("\nFUNC_CALL;fflush_unlocked(FILE *);\n");
tmp___2 = fflush_unlocked(fp);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;10282\n");
if (tmp___2 != 0)
    {
      printf("\nSTMT_EXEC;;10284\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("fflush failed");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10285\n");
die((char const *)tmp___1, file);
    }
    printf("\nSTMT_EXEC;;10287\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;10289\n");
tmp___4 = rpl_fclose(fp);
}

    printf("\nSTMT_EXEC;;10290\n");
if (tmp___4 != 0)
    {
      printf("\nSTMT_EXEC;;10292\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext("close failed");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10293\n");
die((char const *)tmp___3, file);
    }
    printf("\nSTMT_EXEC;;10295\n");
goto switch_break;
  switch_break:;
    printf("\nSTMT_EXEC;;10297\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void dup2_or_die(int oldfd, int newfd)
{
  printf("\nFUNC_CALL;dup2_or_die(int,int);\n");
printf("\nSTMT_EXEC;;10302\n");
char *tmp;
  printf("\nSTMT_EXEC;;10303\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;10304\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;10306\n");
printf("\nFUNC_CALL;dup2(int,int);\n");
tmp___1 = dup2(oldfd, newfd);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10307\n");
if (tmp___1 < 0)
    {
      printf("\nSTMT_EXEC;;10309\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("dup2 failed");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10310\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10311\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___0, (char const *)tmp);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10313\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static pid_t pipe_fork(int *pipefds, size_t tries)
{
  printf("\nFUNC_CALL;pipe_fork(int *,size_t);\n");
printf("\nSTMT_EXEC;;10318\n");
struct tempnode *saved_temphead;
  printf("\nSTMT_EXEC;;10319\n");
int saved_errno;
  printf("\nSTMT_EXEC;;10320\n");
double wait_retry;
  printf("\nSTMT_EXEC;;10321\n");
pid_t pid;
  printf("\nSTMT_EXEC;;10322\n");
struct cs_status cs;
  printf("\nSTMT_EXEC;;10323\n");
int tmp;
  printf("\nSTMT_EXEC;;10324\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;10325\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;10326\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;10327\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;10328\n");
int *tmp___4;
  printf("\nSTMT_EXEC;;10329\n");
int *tmp___5;
  {
    printf("\nSTMT_EXEC;;10331\n");
wait_retry = 0.25;
    printf("\nSTMT_EXEC;;10332\n");
printf("\nFUNC_CALL;pipe(int *);\n");
tmp = pipe(pipefds);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10333\n");
if (tmp < 0)
    {
      printf("\nSTMT_EXEC;;10335\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    printf("\nSTMT_EXEC;;10337\n");
if (nmerge + 1U < (unsigned int)nprocs)
    {
      printf("\nSTMT_EXEC;;10339\n");
reap_some();
    }
    printf("\nSTMT_EXEC;;10341\n");
while (1)
    {
      printf("\nSTMT_EXEC;;10343\n");
tmp___3 = tries;
      printf("\nSTMT_EXEC;;10344\n");
tries--;
      printf("\nSTMT_EXEC;;10345\n");
if (!tmp___3)
      {
        printf("\nSTMT_EXEC;;10347\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;10349\n");
cs = cs_enter();
      printf("\nSTMT_EXEC;;10350\n");
saved_temphead = (struct tempnode *)temphead;
      printf("\nSTMT_EXEC;;10351\n");
temphead = (struct tempnode *)((void *)0);
      printf("\nSTMT_EXEC;;10352\n");
printf("\nFUNC_CALL;fork();\n");
pid = fork();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10353\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10354\n");
saved_errno = *tmp___0;
      printf("\nSTMT_EXEC;;10355\n");
if (pid)
      {
        printf("\nSTMT_EXEC;;10357\n");
temphead = saved_temphead;
      }
      printf("\nSTMT_EXEC;;10359\n");
cs_leave(cs);
      printf("\nSTMT_EXEC;;10360\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10361\n");
*tmp___1 = saved_errno;
      printf("\nSTMT_EXEC;;10362\n");
if (0 <= pid)
      {
        printf("\nSTMT_EXEC;;10364\n");
goto while_break;
      }
      else
      {
        printf("\nSTMT_EXEC;;10368\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10369\n");
if (*tmp___2 != 11)
        {
          printf("\nSTMT_EXEC;;10371\n");
goto while_break;
        }
        else
        {
          printf("\nSTMT_EXEC;;10375\n");
xnanosleep(wait_retry);
          printf("\nSTMT_EXEC;;10376\n");
wait_retry *= (double)2;
          printf("\nSTMT_EXEC;;10377\n");
reap_exited();
        }
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;10382\n");
if (pid < 0)
    {
      printf("\nSTMT_EXEC;;10384\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___4 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10385\n");
saved_errno = *tmp___4;
      printf("\nSTMT_EXEC;;10386\n");
printf("\nFUNC_CALL;close(int);\n");
close(*(pipefds + 0));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10387\n");
printf("\nFUNC_CALL;close(int);\n");
close(*(pipefds + 1));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10388\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10389\n");
*tmp___5 = saved_errno;
    }
    else
    {
      printf("\nSTMT_EXEC;;10393\n");
if (pid == 0)
      {
        printf("\nSTMT_EXEC;;10395\n");
printf("\nFUNC_CALL;close(int);\n");
close(0);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10396\n");
printf("\nFUNC_CALL;close(int);\n");
close(1);printf("\nFUNC_RETURN;;\n");

      }
      else
      {
        printf("\nSTMT_EXEC;;10400\n");
nprocs++;
      }
    }
    printf("\nSTMT_EXEC;;10403\n");
printf("\nFUNC_RETURN;;\n");
return (pid);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct tempnode *maybe_create_temp(FILE **pfp, _Bool survive_fd_exhaustion)
{
  printf("\nFUNC_CALL;maybe_create_temp(FILE **,_Bool);\n");
printf("\nSTMT_EXEC;;10408\n");
int tempfd;
  printf("\nSTMT_EXEC;;10409\n");
struct tempnode *node;
  printf("\nSTMT_EXEC;;10410\n");
struct tempnode *tmp;
  printf("\nSTMT_EXEC;;10411\n");
int pipefds[2];
  printf("\nSTMT_EXEC;;10412\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;10413\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;10414\n");
int tmp___2;
  printf("\nSTMT_EXEC;;10415\n");
char *tmp___3;
  {
    printf("\nSTMT_EXEC;;10417\n");
tmp = create_temp_file(&tempfd, survive_fd_exhaustion);
    printf("\nSTMT_EXEC;;10418\n");
node = tmp;
    printf("\nSTMT_EXEC;;10419\n");
if (!node)
    {
      printf("\nSTMT_EXEC;;10421\n");
printf("\nFUNC_RETURN;;\n");
return ((struct tempnode *)((void *)0));
    }
    printf("\nSTMT_EXEC;;10423\n");
node->state = (char)0;
    printf("\nSTMT_EXEC;;10424\n");
if (compress_program)
    {
      printf("\nSTMT_EXEC;;10426\n");
node->pid = pipe_fork(pipefds, (size_t)4);
      printf("\nSTMT_EXEC;;10427\n");
if (0 < node->pid)
      {
        printf("\nSTMT_EXEC;;10429\n");
printf("\nFUNC_CALL;close(int);\n");
close(tempfd);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10430\n");
printf("\nFUNC_CALL;close(int);\n");
close(pipefds[0]);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10431\n");
tempfd = pipefds[1];
        printf("\nSTMT_EXEC;;10432\n");
register_proc(node);
      }
      else
      {
        printf("\nSTMT_EXEC;;10436\n");
if (node->pid == 0)
        {
          printf("\nSTMT_EXEC;;10438\n");
printf("\nFUNC_CALL;close(int);\n");
close(pipefds[1]);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10439\n");
dup2_or_die(tempfd, 1);
          printf("\nSTMT_EXEC;;10440\n");
printf("\nFUNC_CALL;close(int);\n");
close(tempfd);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10441\n");
dup2_or_die(pipefds[0], 0);
          printf("\nSTMT_EXEC;;10442\n");
printf("\nFUNC_CALL;close(int);\n");
close(pipefds[0]);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10443\n");
printf("\nFUNC_CALL;execlp(const char *,const char *);\n");
tmp___2 = execlp(compress_program, compress_program, (char *)((void *)0));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10444\n");
if (tmp___2 < 0)
          {
            printf("\nSTMT_EXEC;;10446\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("couldn\'t execute %s");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10447\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10448\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___1, (char const *)tmp___0, compress_program);printf("\nFUNC_RETURN;;\n");

          }
        }
      }
    }
    printf("\nSTMT_EXEC;;10453\n");
printf("\nFUNC_CALL;fdopen(int,const char *);\n");
*pfp = fdopen(tempfd, "w");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10454\n");
if (!*pfp)
    {
      printf("\nSTMT_EXEC;;10456\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext("couldn\'t create temporary file");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10457\n");
die((char const *)tmp___3, (char const *)(node->name));
    }
    printf("\nSTMT_EXEC;;10459\n");
printf("\nFUNC_RETURN;;\n");
return (node);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct tempnode *create_temp(FILE **pfp)
{
  printf("\nFUNC_CALL;create_temp(FILE **);\n");
printf("\nSTMT_EXEC;;10464\n");
struct tempnode *tmp;
  {
    printf("\nSTMT_EXEC;;10466\n");
tmp = maybe_create_temp(pfp, (_Bool)0);
    printf("\nSTMT_EXEC;;10467\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
static FILE *open_temp(struct tempnode *temp)
{
  printf("\nFUNC_CALL;open_temp(struct tempnode *);\n");
printf("\nSTMT_EXEC;;10472\n");
int tempfd;
  printf("\nSTMT_EXEC;;10473\n");
int pipefds[2];
  printf("\nSTMT_EXEC;;10474\n");
FILE *fp;
  printf("\nSTMT_EXEC;;10475\n");
pid_t child;
  printf("\nSTMT_EXEC;;10476\n");
pid_t tmp;
  printf("\nSTMT_EXEC;;10477\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;10478\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;10479\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;10480\n");
int *tmp___3;
  printf("\nSTMT_EXEC;;10481\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;10482\n");
int *tmp___5;
  printf("\nSTMT_EXEC;;10483\n");
int saved_errno;
  printf("\nSTMT_EXEC;;10484\n");
int *tmp___6;
  printf("\nSTMT_EXEC;;10485\n");
int *tmp___7;
  {
    printf("\nSTMT_EXEC;;10487\n");
fp = (FILE *)((void *)0);
    printf("\nSTMT_EXEC;;10488\n");
if ((int)temp->state == 1)
    {
      printf("\nSTMT_EXEC;;10490\n");
wait_proc(temp->pid);
    }
    printf("\nSTMT_EXEC;;10492\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
tempfd = open((char const *)(temp->name), 0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10493\n");
if (tempfd < 0)
    {
      printf("\nSTMT_EXEC;;10495\n");
printf("\nFUNC_RETURN;;\n");
return ((FILE *)((void *)0));
    }
    printf("\nSTMT_EXEC;;10497\n");
tmp = pipe_fork(pipefds, (size_t)9);
    printf("\nSTMT_EXEC;;10498\n");
child = tmp;
    printf("\nSTMT_EXEC;;10499\n");
if (child == -1)
    {
      printf("\nSTMT_EXEC;;10501\n");
goto case_neg_1;
    }
    printf("\nSTMT_EXEC;;10503\n");
if (child == 0)
    {
      printf("\nSTMT_EXEC;;10505\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;10507\n");
goto switch_default;
  case_neg_1:
    {
printf("\nSTMT_EXEC;;10509\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;10510\n");
if (*tmp___2 != 24)
    {
      printf("\nSTMT_EXEC;;10512\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("couldn\'t create process for %s -d");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10513\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10514\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___1, (char const *)tmp___0, compress_program);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10516\n");
printf("\nFUNC_CALL;close(int);\n");
close(tempfd);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10517\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10518\n");
*tmp___3 = 24;
    printf("\nSTMT_EXEC;;10519\n");
goto switch_break;
  case_0:
    {
printf("\nSTMT_EXEC;;10521\n");
printf("\nFUNC_CALL;close(int);\n");
close(pipefds[0]);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;10522\n");
dup2_or_die(tempfd, 0);
    printf("\nSTMT_EXEC;;10523\n");
printf("\nFUNC_CALL;close(int);\n");
close(tempfd);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10524\n");
dup2_or_die(pipefds[1], 1);
    printf("\nSTMT_EXEC;;10525\n");
printf("\nFUNC_CALL;close(int);\n");
close(pipefds[1]);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10526\n");
printf("\nFUNC_CALL;execlp(const char *,const char *);\n");
execlp(compress_program, compress_program, "-d", (char *)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10527\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("couldn\'t execute %s -d");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10528\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10529\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___5, (char const *)tmp___4, compress_program);printf("\nFUNC_RETURN;;\n");

  switch_default:
    {
printf("\nSTMT_EXEC;;10531\n");
temp->pid = child;
}

    printf("\nSTMT_EXEC;;10532\n");
register_proc(temp);
    printf("\nSTMT_EXEC;;10533\n");
printf("\nFUNC_CALL;close(int);\n");
close(tempfd);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10534\n");
printf("\nFUNC_CALL;close(int);\n");
close(pipefds[1]);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10535\n");
printf("\nFUNC_CALL;fdopen(int,const char *);\n");
fp = fdopen(pipefds[0], "r");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10536\n");
if (!fp)
    {
      printf("\nSTMT_EXEC;;10538\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___6 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10539\n");
saved_errno = *tmp___6;
      printf("\nSTMT_EXEC;;10540\n");
printf("\nFUNC_CALL;close(int);\n");
close(pipefds[0]);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10541\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___7 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10542\n");
*tmp___7 = saved_errno;
    }
    printf("\nSTMT_EXEC;;10544\n");
goto switch_break;
  switch_break:;
    printf("\nSTMT_EXEC;;10546\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
  }
printf("\nFUNC_RETURN;;\n");
}
static void add_temp_dir(char const *dir)
{
  printf("\nFUNC_CALL;add_temp_dir(const char *);\n");
printf("\nSTMT_EXEC;;10551\n");
size_t tmp;
  {
    printf("\nSTMT_EXEC;;10553\n");
if (temp_dir_count == temp_dir_alloc)
    {
      printf("\nSTMT_EXEC;;10555\n");
temp_dirs = (char const **)x2nrealloc((void *)temp_dirs, &temp_dir_alloc, sizeof(*temp_dirs));
    }
    printf("\nSTMT_EXEC;;10557\n");
tmp = temp_dir_count;
    printf("\nSTMT_EXEC;;10558\n");
temp_dir_count++;
    printf("\nSTMT_EXEC;;10559\n");
*(temp_dirs + tmp) = dir;
    printf("\nSTMT_EXEC;;10560\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void zaptemp(char const *name)
{
  printf("\nFUNC_CALL;zaptemp(const char *);\n");
printf("\nSTMT_EXEC;;10565\n");
struct tempnode *volatile *pnode;
  printf("\nSTMT_EXEC;;10566\n");
struct tempnode *node;
  printf("\nSTMT_EXEC;;10567\n");
struct tempnode *next;
  printf("\nSTMT_EXEC;;10568\n");
int unlink_status;
  printf("\nSTMT_EXEC;;10569\n");
int unlink_errno;
  printf("\nSTMT_EXEC;;10570\n");
struct cs_status cs;
  printf("\nSTMT_EXEC;;10571\n");
int *tmp;
  printf("\nSTMT_EXEC;;10572\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;10574\n");
unlink_errno = 0;
    printf("\nSTMT_EXEC;;10575\n");
pnode = &temphead;
    printf("\nSTMT_EXEC;;10576\n");
while (1)
    {
      printf("\nSTMT_EXEC;;10578\n");
node = (struct tempnode *)*pnode;
      printf("\nSTMT_EXEC;;10579\n");
if (!((unsigned long)(node->name) != (unsigned long)name))
      {
        printf("\nSTMT_EXEC;;10581\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;10583\n");
goto __Cont;
    __Cont:
      {
printf("\nSTMT_EXEC;;10585\n");
pnode = &node->next;
}

    }
  while_break:;
    printf("\nSTMT_EXEC;;10588\n");
if ((int)node->state == 1)
    {
      printf("\nSTMT_EXEC;;10590\n");
wait_proc(node->pid);
    }
    printf("\nSTMT_EXEC;;10592\n");
next = (struct tempnode *)node->next;
    printf("\nSTMT_EXEC;;10593\n");
cs = cs_enter();
    printf("\nSTMT_EXEC;;10594\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
unlink_status = unlink(name);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10595\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10596\n");
unlink_errno = *tmp;
    printf("\nSTMT_EXEC;;10597\n");
*pnode = next;
    printf("\nSTMT_EXEC;;10598\n");
cs_leave(cs);
    printf("\nSTMT_EXEC;;10599\n");
if (unlink_status != 0)
    {
      printf("\nSTMT_EXEC;;10601\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("warning: cannot remove: %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10602\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, unlink_errno, (char const *)tmp___0, name);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10604\n");
if (!next)
    {
      printf("\nSTMT_EXEC;;10606\n");
temptail = pnode;
    }
    printf("\nSTMT_EXEC;;10608\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)node);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10609\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static int struct_month_cmp(void const *m1, void const *m2)
{
  printf("\nFUNC_CALL;struct_month_cmp(const void *,const void *);\n");
printf("\nSTMT_EXEC;;10614\n");
struct month const *month1;
  printf("\nSTMT_EXEC;;10615\n");
struct month const *month2;
  printf("\nSTMT_EXEC;;10616\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;10618\n");
month1 = (struct month const *)m1;
    printf("\nSTMT_EXEC;;10619\n");
month2 = (struct month const *)m2;
    printf("\nSTMT_EXEC;;10620\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)month1->name, (char const *)month2->name);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10621\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
static void inittables(void)
{
  printf("\nFUNC_CALL;inittables();\n");
printf("\nSTMT_EXEC;;10626\n");
size_t i;
  printf("\nSTMT_EXEC;;10627\n");
unsigned short const **tmp;
  printf("\nSTMT_EXEC;;10628\n");
int tmp___0;
  printf("\nSTMT_EXEC;;10629\n");
unsigned short const **tmp___1;
  printf("\nSTMT_EXEC;;10630\n");
int tmp___2;
  printf("\nSTMT_EXEC;;10631\n");
unsigned short const **tmp___3;
  printf("\nSTMT_EXEC;;10632\n");
unsigned short const **tmp___4;
  printf("\nSTMT_EXEC;;10633\n");
int tmp___5;
  printf("\nSTMT_EXEC;;10634\n");
char const *s;
  printf("\nSTMT_EXEC;;10635\n");
size_t s_len;
  printf("\nSTMT_EXEC;;10636\n");
size_t j;
  printf("\nSTMT_EXEC;;10637\n");
size_t k;
  printf("\nSTMT_EXEC;;10638\n");
char *name;
  printf("\nSTMT_EXEC;;10639\n");
size_t tmp___6;
  printf("\nSTMT_EXEC;;10640\n");
unsigned char tmp___7;
  printf("\nSTMT_EXEC;;10641\n");
unsigned short const **tmp___8;
  printf("\nSTMT_EXEC;;10642\n");
unsigned char tmp___9;
  {
    printf("\nSTMT_EXEC;;10644\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;10645\n");
while (1)
    {
      printf("\nSTMT_EXEC;;10647\n");
if (!(i < 256UL))
      {
        printf("\nSTMT_EXEC;;10649\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;10651\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10652\n");
if ((int const) * (*tmp + (int)i) & 1)
      {
        printf("\nSTMT_EXEC;;10654\n");
tmp___0 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;10658\n");
tmp___0 = 0;
      }
      printf("\nSTMT_EXEC;;10660\n");
blanks[i] = (_Bool)tmp___0;
      printf("\nSTMT_EXEC;;10661\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___1 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10662\n");
if ((int const) * (*tmp___1 + (int)i) & 16384)
      {
        printf("\nSTMT_EXEC;;10664\n");
tmp___2 = 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;10668\n");
tmp___2 = 1;
      }
      printf("\nSTMT_EXEC;;10670\n");
nonprinting[i] = (_Bool)tmp___2;
      printf("\nSTMT_EXEC;;10671\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___3 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10672\n");
if ((int const) * (*tmp___3 + (int)i) & 8)
      {
        printf("\nSTMT_EXEC;;10674\n");
tmp___5 = 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;10678\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___4 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10679\n");
if ((int const) * (*tmp___4 + (int)i) & 1)
        {
          printf("\nSTMT_EXEC;;10681\n");
tmp___5 = 0;
        }
        else
        {
          printf("\nSTMT_EXEC;;10685\n");
tmp___5 = 1;
        }
      }
      printf("\nSTMT_EXEC;;10688\n");
nondictionary[i] = (_Bool)tmp___5;
      printf("\nSTMT_EXEC;;10689\n");
printf("\nFUNC_CALL;toupper(int);\n");
fold_toupper[i] = (char)toupper((int)i);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10690\n");
i++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;10693\n");
if (hard_LC_TIME)
    {
      printf("\nSTMT_EXEC;;10695\n");
i = (size_t)0;
      printf("\nSTMT_EXEC;;10696\n");
while (1)
      {
        printf("\nSTMT_EXEC;;10698\n");
if (!(i < 12UL))
        {
          printf("\nSTMT_EXEC;;10700\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;10702\n");
printf("\nFUNC_CALL;nl_langinfo(nl_item);\n");
s = (char const *)nl_langinfo((nl_item)(131086UL + i));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10703\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
s_len = strlen(s);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10704\n");
name = (char *)xmalloc(s_len + 1UL);
        printf("\nSTMT_EXEC;;10705\n");
monthtab[i].name = (char const *)name;
        printf("\nSTMT_EXEC;;10706\n");
monthtab[i].val = (int)(i + 1UL);
        printf("\nSTMT_EXEC;;10707\n");
k = (size_t)0;
        printf("\nSTMT_EXEC;;10708\n");
j = k;
        printf("\nSTMT_EXEC;;10709\n");
while (1)
        {
          printf("\nSTMT_EXEC;;10711\n");
if (!(j < s_len))
          {
            printf("\nSTMT_EXEC;;10713\n");
goto while_break___1;
          }
          printf("\nSTMT_EXEC;;10715\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___8 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10716\n");
tmp___9 = to_uchar((char)*(s + j));
          printf("\nSTMT_EXEC;;10717\n");
if (!((int const) * (*tmp___8 + (int)tmp___9) & 1))
          {
            printf("\nSTMT_EXEC;;10719\n");
tmp___6 = k;
            printf("\nSTMT_EXEC;;10720\n");
k++;
            printf("\nSTMT_EXEC;;10721\n");
tmp___7 = to_uchar((char)*(s + j));
            printf("\nSTMT_EXEC;;10722\n");
*(name + tmp___6) = fold_toupper[tmp___7];
          }
          printf("\nSTMT_EXEC;;10724\n");
j++;
        }
      while_break___1:
        {
printf("\nSTMT_EXEC;;10727\n");
*(name + k) = (char)'\000';
}

        printf("\nSTMT_EXEC;;10728\n");
i++;
      }
    while_break___0:
      {
printf("\nSTMT_EXEC;;10731\n");
printf("\nFUNC_CALL;qsort(void *,size_t,size_t,int (*)(const void *, const void *));\n");
qsort((void *)(monthtab), (size_t)12, sizeof(monthtab[0]), &struct_month_cmp);printf("\nFUNC_RETURN;;\n");

}

    }
    printf("\nSTMT_EXEC;;10733\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void specify_nmerge(int oi, char c, char const *s)
{
  printf("\nFUNC_CALL;specify_nmerge(int,char,const char *);\n");
printf("\nSTMT_EXEC;;10738\n");
uintmax_t n;
  printf("\nSTMT_EXEC;;10739\n");
struct rlimit rlimit;
  printf("\nSTMT_EXEC;;10740\n");
enum strtol_error e;
  printf("\nSTMT_EXEC;;10741\n");
enum strtol_error tmp;
  printf("\nSTMT_EXEC;;10742\n");
unsigned int max_nmerge;
  printf("\nSTMT_EXEC;;10743\n");
rlim_t tmp___1;
  printf("\nSTMT_EXEC;;10744\n");
int tmp___2;
  printf("\nSTMT_EXEC;;10745\n");
char const *tmp___3;
  printf("\nSTMT_EXEC;;10746\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;10747\n");
char const *tmp___5;
  printf("\nSTMT_EXEC;;10748\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;10749\n");
char max_nmerge_buf[((sizeof(max_nmerge) * 8UL) * 146UL + 484UL) / 485UL + 1UL];
  printf("\nSTMT_EXEC;;10750\n");
char const *tmp___7;
  printf("\nSTMT_EXEC;;10751\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;10752\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;10753\n");
char *tmp___10;
  {
    printf("\nSTMT_EXEC;;10755\n");
tmp = xstrtoumax(s, (char **)((void *)0), 10, &n, (char const *)((void *)0));
    printf("\nSTMT_EXEC;;10756\n");
e = tmp;
    printf("\nSTMT_EXEC;;10757\n");
printf("\nFUNC_CALL;getrlimit(__rlimit_resource_t,struct rlimit *);\n");
tmp___2 = getrlimit((__rlimit_resource_t)7, &rlimit);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10758\n");
if (tmp___2 == 0)
    {
      printf("\nSTMT_EXEC;;10760\n");
tmp___1 = rlimit.rlim_cur;
    }
    else
    {
      printf("\nSTMT_EXEC;;10764\n");
tmp___1 = (rlim_t)20;
    }
    printf("\nSTMT_EXEC;;10766\n");
max_nmerge = (unsigned int)(tmp___1 - 3UL);
    printf("\nSTMT_EXEC;;10767\n");
if ((unsigned int)e == 0U)
    {
      printf("\nSTMT_EXEC;;10769\n");
nmerge = (unsigned int)n;
      printf("\nSTMT_EXEC;;10770\n");
if ((uintmax_t)nmerge != n)
      {
        printf("\nSTMT_EXEC;;10772\n");
e = (enum strtol_error)1;
      }
      else
      {
        printf("\nSTMT_EXEC;;10776\n");
if (nmerge < 2U)
        {
          printf("\nSTMT_EXEC;;10778\n");
tmp___3 = quote(s);
          printf("\nSTMT_EXEC;;10779\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("invalid --%s argument %s");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10780\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___4, long_options___1[oi].name, tmp___3);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10781\n");
tmp___5 = quote("2");
          printf("\nSTMT_EXEC;;10782\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___6 = gettext("minimum --%s argument is %s");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10783\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___6, long_options___1[oi].name, tmp___5);printf("\nFUNC_RETURN;;\n");

        }
        else
        {
          printf("\nSTMT_EXEC;;10787\n");
if (max_nmerge < nmerge)
          {
            printf("\nSTMT_EXEC;;10789\n");
e = (enum strtol_error)1;
          }
          else
          {
            printf("\nSTMT_EXEC;;10793\n");
printf("\nFUNC_RETURN;;\n");
return;
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;10798\n");
if ((unsigned int)e == 1U)
    {
      printf("\nSTMT_EXEC;;10800\n");
tmp___7 = quote(s);
      printf("\nSTMT_EXEC;;10801\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 = gettext("--%s argument %s too large");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10802\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___8, long_options___1[oi].name, tmp___7);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10803\n");
tmp___9 = uinttostr(max_nmerge, max_nmerge_buf);
      printf("\nSTMT_EXEC;;10804\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext("maximum --%s argument with current rlimit is %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10805\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___10, long_options___1[oi].name, tmp___9);printf("\nFUNC_RETURN;;\n");

    }
    else
    {
      printf("\nSTMT_EXEC;;10809\n");
xstrtol_fatal(e, oi, c, long_options___1, s);
    }
    printf("\nSTMT_EXEC;;10811\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;10820\n");
double mem;
  printf("\nSTMT_EXEC;;10821\n");
double tmp___0;
  {
    printf("\nSTMT_EXEC;;10823\n");
tmp = xstrtoumax(s, &suffix, 10, &n, "EgGkKmMPtTYZ");
    printf("\nSTMT_EXEC;;10824\n");
e = tmp;
    printf("\nSTMT_EXEC;;10825\n");
if ((unsigned int)e == 0U)
    {
      printf("\nSTMT_EXEC;;10827\n");
if ((unsigned int)*(suffix + -1) - 48U <= 9U)
      {
        printf("\nSTMT_EXEC;;10829\n");
if (n <= 18014398509481983UL)
        {
          printf("\nSTMT_EXEC;;10831\n");
n *= 1024UL;
        }
        else
        {
          printf("\nSTMT_EXEC;;10835\n");
e = (enum strtol_error)1;
        }
      }
    }
    printf("\nSTMT_EXEC;;10839\n");
if ((unsigned int)e == 2U)
    {
      printf("\nSTMT_EXEC;;10841\n");
if ((unsigned int)*(suffix + -1) - 48U <= 9U)
      {
        printf("\nSTMT_EXEC;;10843\n");
if (!*(suffix + 1))
        {
          printf("\nSTMT_EXEC;;10845\n");
if ((int)*(suffix + 0) == 98)
          {
            printf("\nSTMT_EXEC;;10847\n");
goto case_98;
          }
          printf("\nSTMT_EXEC;;10849\n");
if ((int)*(suffix + 0) == 37)
          {
            printf("\nSTMT_EXEC;;10851\n");
goto case_37;
          }
          printf("\nSTMT_EXEC;;10853\n");
goto switch_break;
        case_98:
          {
printf("\nSTMT_EXEC;;10855\n");
e = (enum strtol_error)0;
}

          printf("\nSTMT_EXEC;;10856\n");
goto switch_break;
        case_37:
          {
printf("\nSTMT_EXEC;;10858\n");
tmp___0 = physmem_total();
}

          printf("\nSTMT_EXEC;;10859\n");
mem = (tmp___0 * (double)n) / (double)100;
          printf("\nSTMT_EXEC;;10860\n");
if (mem < (double)0xffffffffffffffffUL)
          {
            printf("\nSTMT_EXEC;;10862\n");
n = (uintmax_t)mem;
            printf("\nSTMT_EXEC;;10863\n");
e = (enum strtol_error)0;
          }
          else
          {
            printf("\nSTMT_EXEC;;10867\n");
e = (enum strtol_error)1;
          }
          printf("\nSTMT_EXEC;;10869\n");
goto switch_break;
        switch_break:;
        }
      }
    }
    printf("\nSTMT_EXEC;;10874\n");
if ((unsigned int)e == 0U)
    {
      printf("\nSTMT_EXEC;;10876\n");
if (n < sort_size)
      {
        printf("\nSTMT_EXEC;;10878\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10880\n");
sort_size = n;
      printf("\nSTMT_EXEC;;10881\n");
if (sort_size == n)
      {
        printf("\nSTMT_EXEC;;10883\n");
if (sort_size > (unsigned long)nmerge * (2UL + sizeof(struct line)))
        {
          printf("\nSTMT_EXEC;;10885\n");
sort_size = sort_size;
        }
        else
        {
          printf("\nSTMT_EXEC;;10889\n");
sort_size = (unsigned long)nmerge * (2UL + sizeof(struct line));
        }
        printf("\nSTMT_EXEC;;10891\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10893\n");
e = (enum strtol_error)1;
    }
    printf("\nSTMT_EXEC;;10895\n");
xstrtol_fatal(e, oi, c, long_options___1, s);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t specify_nthreads(int oi, char c, char const *s)
{
  printf("\nFUNC_CALL;specify_nthreads(int,char,const char *);\n");
printf("\nSTMT_EXEC;;10900\n");
unsigned long nthreads;
  printf("\nSTMT_EXEC;;10901\n");
enum strtol_error e;
  printf("\nSTMT_EXEC;;10902\n");
enum strtol_error tmp;
  printf("\nSTMT_EXEC;;10903\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;10905\n");
tmp = xstrtoul(s, (char **)((void *)0), 10, &nthreads, "");
    printf("\nSTMT_EXEC;;10906\n");
e = tmp;
    printf("\nSTMT_EXEC;;10907\n");
if ((unsigned int)e == 1U)
    {
      printf("\nSTMT_EXEC;;10909\n");
printf("\nFUNC_RETURN;;\n");
return (0xffffffffffffffffUL);
    }
    printf("\nSTMT_EXEC;;10911\n");
if ((unsigned int)e != 0U)
    {
      printf("\nSTMT_EXEC;;10913\n");
xstrtol_fatal(e, oi, c, long_options___1, s);
    }
    printf("\nSTMT_EXEC;;10915\n");
if (0xffffffffffffffffUL < nthreads)
    {
      printf("\nSTMT_EXEC;;10917\n");
nthreads = 0xffffffffffffffffUL;
    }
    printf("\nSTMT_EXEC;;10919\n");
if (nthreads == 0UL)
    {
      printf("\nSTMT_EXEC;;10921\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("number in parallel must be nonzero");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10922\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___0);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10924\n");
printf("\nFUNC_RETURN;;\n");
return (nthreads);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t default_sort_size(void)
{
  printf("\nFUNC_CALL;default_sort_size();\n");
printf("\nSTMT_EXEC;;10929\n");
double avail;
  printf("\nSTMT_EXEC;;10930\n");
double tmp;
  printf("\nSTMT_EXEC;;10931\n");
double total;
  printf("\nSTMT_EXEC;;10932\n");
double tmp___0;
  printf("\nSTMT_EXEC;;10933\n");
double mem;
  printf("\nSTMT_EXEC;;10934\n");
double tmp___1;
  printf("\nSTMT_EXEC;;10935\n");
struct rlimit rlimit;
  printf("\nSTMT_EXEC;;10936\n");
size_t size;
  printf("\nSTMT_EXEC;;10937\n");
int tmp___2;
  printf("\nSTMT_EXEC;;10938\n");
int tmp___3;
  printf("\nSTMT_EXEC;;10939\n");
int tmp___4;
  printf("\nSTMT_EXEC;;10940\n");
size_t tmp___5;
  {
    printf("\nSTMT_EXEC;;10942\n");
tmp = physmem_available();
    printf("\nSTMT_EXEC;;10943\n");
avail = tmp;
    printf("\nSTMT_EXEC;;10944\n");
tmp___0 = physmem_total();
    printf("\nSTMT_EXEC;;10945\n");
total = tmp___0;
    printf("\nSTMT_EXEC;;10946\n");
if (avail > total / (double)8)
    {
      printf("\nSTMT_EXEC;;10948\n");
tmp___1 = avail;
    }
    else
    {
      printf("\nSTMT_EXEC;;10952\n");
tmp___1 = total / (double)8;
    }
    printf("\nSTMT_EXEC;;10954\n");
mem = tmp___1;
    printf("\nSTMT_EXEC;;10955\n");
size = 0xffffffffffffffffUL;
    printf("\nSTMT_EXEC;;10956\n");
printf("\nFUNC_CALL;getrlimit(__rlimit_resource_t,struct rlimit *);\n");
tmp___2 = getrlimit((__rlimit_resource_t)2, &rlimit);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10957\n");
if (tmp___2 == 0)
    {
      printf("\nSTMT_EXEC;;10959\n");
if (rlimit.rlim_cur < size)
      {
        printf("\nSTMT_EXEC;;10961\n");
size = rlimit.rlim_cur;
      }
    }
    printf("\nSTMT_EXEC;;10964\n");
printf("\nFUNC_CALL;getrlimit(__rlimit_resource_t,struct rlimit *);\n");
tmp___3 = getrlimit((__rlimit_resource_t)9, &rlimit);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10965\n");
if (tmp___3 == 0)
    {
      printf("\nSTMT_EXEC;;10967\n");
if (rlimit.rlim_cur < size)
      {
        printf("\nSTMT_EXEC;;10969\n");
size = rlimit.rlim_cur;
      }
    }
    printf("\nSTMT_EXEC;;10972\n");
size /= 2UL;
    printf("\nSTMT_EXEC;;10973\n");
printf("\nFUNC_CALL;getrlimit(__rlimit_resource_t,struct rlimit *);\n");
tmp___4 = getrlimit((__rlimit_resource_t)5, &rlimit);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;10974\n");
if (tmp___4 == 0)
    {
      printf("\nSTMT_EXEC;;10976\n");
if ((rlimit.rlim_cur / 16UL) * 15UL < size)
      {
        printf("\nSTMT_EXEC;;10978\n");
size = (rlimit.rlim_cur / 16UL) * 15UL;
      }
    }
    printf("\nSTMT_EXEC;;10981\n");
if (mem < (double)size)
    {
      printf("\nSTMT_EXEC;;10983\n");
size = (size_t)mem;
    }
    printf("\nSTMT_EXEC;;10985\n");
if (size > (unsigned long)nmerge * (2UL + sizeof(struct line)))
    {
      printf("\nSTMT_EXEC;;10987\n");
tmp___5 = size;
    }
    else
    {
      printf("\nSTMT_EXEC;;10991\n");
tmp___5 = (unsigned long)nmerge * (2UL + sizeof(struct line));
    }
    printf("\nSTMT_EXEC;;10993\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___5);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t size_bound;
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
  printf("\nSTMT_EXEC;;11005\n");
char *tmp;
  printf("\nSTMT_EXEC;;11006\n");
int tmp___0;
  printf("\nSTMT_EXEC;;11007\n");
int tmp___1;
  printf("\nSTMT_EXEC;;11008\n");
int tmp___3;
  printf("\nSTMT_EXEC;;11009\n");
int tmp___4;
  printf("\nSTMT_EXEC;;11010\n");
int tmp___5;
  printf("\nSTMT_EXEC;;11011\n");
int tmp___6;
  printf("\nSTMT_EXEC;;11012\n");
int tmp___7;
  {
    printf("\nSTMT_EXEC;;11014\n");
worst_case_per_input_byte = line_bytes + 1UL;
    printf("\nSTMT_EXEC;;11015\n");
size = worst_case_per_input_byte + 1UL;
    printf("\nSTMT_EXEC;;11016\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;11017\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11019\n");
if (!(i < nfiles))
      {
        printf("\nSTMT_EXEC;;11021\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;11023\n");
if (i < nfps)
      {
        printf("\nSTMT_EXEC;;11025\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___0 = fileno((FILE *)*(fps + i));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11026\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___1 = fstat(tmp___0, &st);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11027\n");
tmp___7 = tmp___1;
      }
      else
      {
        printf("\nSTMT_EXEC;;11031\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___6 = strcmp((char const *)*(files + i), "-");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11032\n");
if (tmp___6 == 0)
        {
          printf("\nSTMT_EXEC;;11034\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___3 = fstat(0, &st);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;11035\n");
tmp___5 = tmp___3;
        }
        else
        {
          printf("\nSTMT_EXEC;;11039\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___4 = stat((char const *)*(files + i), &st);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;11040\n");
tmp___5 = tmp___4;
        }
        printf("\nSTMT_EXEC;;11042\n");
tmp___7 = tmp___5;
      }
      printf("\nSTMT_EXEC;;11044\n");
if (tmp___7 != 0)
      {
        printf("\nSTMT_EXEC;;11046\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("stat failed");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11047\n");
die((char const *)tmp, (char const *)*(files + i));
      }
      printf("\nSTMT_EXEC;;11049\n");
if ((st.st_mode & 61440U) == 32768U)
      {
        printf("\nSTMT_EXEC;;11051\n");
file_size = st.st_size;
      }
      else
      {
        printf("\nSTMT_EXEC;;11055\n");
if (sort_size)
        {
          printf("\nSTMT_EXEC;;11057\n");
printf("\nFUNC_RETURN;;\n");
return (sort_size);
        }
        printf("\nSTMT_EXEC;;11059\n");
file_size = (off_t)131072;
      }
      printf("\nSTMT_EXEC;;11061\n");
if (!size_bound)
      {
        printf("\nSTMT_EXEC;;11063\n");
size_bound = sort_size;
        printf("\nSTMT_EXEC;;11064\n");
if (!size_bound)
        {
          printf("\nSTMT_EXEC;;11066\n");
size_bound = default_sort_size();
        }
      }
      printf("\nSTMT_EXEC;;11069\n");
worst_case = (size_t)file_size * worst_case_per_input_byte + 1UL;
      printf("\nSTMT_EXEC;;11070\n");
if ((size_t)file_size != worst_case / worst_case_per_input_byte)
      {
        printf("\nSTMT_EXEC;;11072\n");
printf("\nFUNC_RETURN;;\n");
return (size_bound);
      }
      else
      {
        printf("\nSTMT_EXEC;;11076\n");
if (size_bound - size <= worst_case)
        {
          printf("\nSTMT_EXEC;;11078\n");
printf("\nFUNC_RETURN;;\n");
return (size_bound);
        }
      }
      printf("\nSTMT_EXEC;;11081\n");
size += worst_case;
      printf("\nSTMT_EXEC;;11082\n");
i++;
    }
  while_break:;
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
    printf("\nSTMT_EXEC;;11093\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11095\n");
alloc += sizeof(struct line) - alloc % sizeof(struct line);
      printf("\nSTMT_EXEC;;11096\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
buf___1->buf = (char *)malloc(alloc);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11097\n");
if (buf___1->buf)
      {
        printf("\nSTMT_EXEC;;11099\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;11101\n");
alloc /= 2UL;
      printf("\nSTMT_EXEC;;11102\n");
if (alloc <= line_bytes + 1UL)
      {
        printf("\nSTMT_EXEC;;11104\n");
xalloc_die();
      }
    }
  while_break:
    {
printf("\nSTMT_EXEC;;11108\n");
buf___1->line_bytes = line_bytes;
}

    printf("\nSTMT_EXEC;;11109\n");
buf___1->alloc = alloc;
    printf("\nSTMT_EXEC;;11110\n");
tmp___0 = (size_t)0;
    printf("\nSTMT_EXEC;;11111\n");
buf___1->nlines = tmp___0;
    printf("\nSTMT_EXEC;;11112\n");
tmp = tmp___0;
    printf("\nSTMT_EXEC;;11113\n");
buf___1->left = tmp;
    printf("\nSTMT_EXEC;;11114\n");
buf___1->used = tmp;
    printf("\nSTMT_EXEC;;11115\n");
buf___1->eof = (_Bool)0;
    printf("\nSTMT_EXEC;;11116\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static struct line *buffer_linelim(struct buffer const *buf___1)
{
  printf("\nFUNC_CALL;buffer_linelim(const struct buffer *);\n");
{
    printf("\nSTMT_EXEC;;11122\n");
printf("\nFUNC_RETURN;;\n");
return ((struct line *)(buf___1->buf + buf___1->alloc));
  }
printf("\nFUNC_RETURN;;\n");
}
static char *begfield(struct line const *line, struct keyfield const *key)
{
  printf("\nFUNC_CALL;begfield(const struct line *,const struct keyfield *);\n");
printf("\nSTMT_EXEC;;11127\n");
char *ptr;
  printf("\nSTMT_EXEC;;11128\n");
char *lim;
  printf("\nSTMT_EXEC;;11129\n");
size_t sword;
  printf("\nSTMT_EXEC;;11130\n");
size_t schar;
  printf("\nSTMT_EXEC;;11131\n");
size_t tmp;
  printf("\nSTMT_EXEC;;11132\n");
unsigned char tmp___0;
  printf("\nSTMT_EXEC;;11133\n");
unsigned char tmp___1;
  printf("\nSTMT_EXEC;;11134\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;11135\n");
unsigned char tmp___3;
  {
    printf("\nSTMT_EXEC;;11137\n");
ptr = (char *)line->text;
    printf("\nSTMT_EXEC;;11138\n");
lim = (ptr + line->length) - 1;
    printf("\nSTMT_EXEC;;11139\n");
sword = (size_t)key->sword;
    printf("\nSTMT_EXEC;;11140\n");
schar = (size_t)key->schar;
    printf("\nSTMT_EXEC;;11141\n");
if (tab != 128)
    {
      printf("\nSTMT_EXEC;;11143\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11145\n");
if ((unsigned long)ptr < (unsigned long)lim)
        {
          printf("\nSTMT_EXEC;;11147\n");
tmp = sword;
          printf("\nSTMT_EXEC;;11148\n");
sword--;
          printf("\nSTMT_EXEC;;11149\n");
if (!tmp)
          {
            printf("\nSTMT_EXEC;;11151\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;11156\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;11158\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11160\n");
if ((unsigned long)ptr < (unsigned long)lim)
          {
            printf("\nSTMT_EXEC;;11162\n");
if (!((int)*ptr != tab))
            {
              printf("\nSTMT_EXEC;;11164\n");
goto while_break___0;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;11169\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;11171\n");
ptr++;
        }
      while_break___0:;
        printf("\nSTMT_EXEC;;11174\n");
if ((unsigned long)ptr < (unsigned long)lim)
        {
          printf("\nSTMT_EXEC;;11176\n");
ptr++;
        }
      }
    while_break:;
    }
    else
    {
      printf("\nSTMT_EXEC;;11183\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11185\n");
if ((unsigned long)ptr < (unsigned long)lim)
        {
          printf("\nSTMT_EXEC;;11187\n");
tmp___2 = sword;
          printf("\nSTMT_EXEC;;11188\n");
sword--;
          printf("\nSTMT_EXEC;;11189\n");
if (!tmp___2)
          {
            printf("\nSTMT_EXEC;;11191\n");
goto while_break___1;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;11196\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;11198\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11200\n");
if ((unsigned long)ptr < (unsigned long)lim)
          {
            printf("\nSTMT_EXEC;;11202\n");
tmp___0 = to_uchar(*ptr);
            printf("\nSTMT_EXEC;;11203\n");
if (!blanks[tmp___0])
            {
              printf("\nSTMT_EXEC;;11205\n");
goto while_break___2;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;11210\n");
goto while_break___2;
          }
          printf("\nSTMT_EXEC;;11212\n");
ptr++;
        }
      while_break___2:;
        printf("\nSTMT_EXEC;;11215\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11217\n");
if ((unsigned long)ptr < (unsigned long)lim)
          {
            printf("\nSTMT_EXEC;;11219\n");
tmp___1 = to_uchar(*ptr);
            printf("\nSTMT_EXEC;;11220\n");
if (blanks[tmp___1])
            {
              printf("\nSTMT_EXEC;;11222\n");
goto while_break___3;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;11227\n");
goto while_break___3;
          }
          printf("\nSTMT_EXEC;;11229\n");
ptr++;
        }
      while_break___3:;
      }
    while_break___1:;
    }
    printf("\nSTMT_EXEC;;11235\n");
if (key->skipsblanks)
    {
      printf("\nSTMT_EXEC;;11237\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11239\n");
if ((unsigned long)ptr < (unsigned long)lim)
        {
          printf("\nSTMT_EXEC;;11241\n");
tmp___3 = to_uchar(*ptr);
          printf("\nSTMT_EXEC;;11242\n");
if (!blanks[tmp___3])
          {
            printf("\nSTMT_EXEC;;11244\n");
goto while_break___4;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;11249\n");
goto while_break___4;
        }
        printf("\nSTMT_EXEC;;11251\n");
ptr++;
      }
    while_break___4:;
    }
    printf("\nSTMT_EXEC;;11255\n");
if ((unsigned long)lim < (unsigned long)(ptr + schar))
    {
      printf("\nSTMT_EXEC;;11257\n");
ptr = lim;
    }
    else
    {
      printf("\nSTMT_EXEC;;11261\n");
ptr += schar;
    }
    printf("\nSTMT_EXEC;;11263\n");
printf("\nFUNC_RETURN;;\n");
return (ptr);
  }
printf("\nFUNC_RETURN;;\n");
}
static char *limfield(struct line const *line, struct keyfield const *key)
{
  printf("\nFUNC_CALL;limfield(const struct line *,const struct keyfield *);\n");
printf("\nSTMT_EXEC;;11268\n");
char *ptr;
  printf("\nSTMT_EXEC;;11269\n");
char *lim;
  printf("\nSTMT_EXEC;;11270\n");
size_t eword;
  printf("\nSTMT_EXEC;;11271\n");
size_t echar;
  printf("\nSTMT_EXEC;;11272\n");
size_t tmp;
  printf("\nSTMT_EXEC;;11273\n");
unsigned char tmp___0;
  printf("\nSTMT_EXEC;;11274\n");
unsigned char tmp___1;
  printf("\nSTMT_EXEC;;11275\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;11276\n");
unsigned char tmp___3;
  {
    printf("\nSTMT_EXEC;;11278\n");
ptr = (char *)line->text;
    printf("\nSTMT_EXEC;;11279\n");
lim = (ptr + line->length) - 1;
    printf("\nSTMT_EXEC;;11280\n");
eword = (size_t)key->eword;
    printf("\nSTMT_EXEC;;11281\n");
echar = (size_t)key->echar;
    printf("\nSTMT_EXEC;;11282\n");
if (echar == 0UL)
    {
      printf("\nSTMT_EXEC;;11284\n");
eword++;
    }
    printf("\nSTMT_EXEC;;11286\n");
if (tab != 128)
    {
      printf("\nSTMT_EXEC;;11288\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11290\n");
if ((unsigned long)ptr < (unsigned long)lim)
        {
          printf("\nSTMT_EXEC;;11292\n");
tmp = eword;
          printf("\nSTMT_EXEC;;11293\n");
eword--;
          printf("\nSTMT_EXEC;;11294\n");
if (!tmp)
          {
            printf("\nSTMT_EXEC;;11296\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;11301\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;11303\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11305\n");
if ((unsigned long)ptr < (unsigned long)lim)
          {
            printf("\nSTMT_EXEC;;11307\n");
if (!((int)*ptr != tab))
            {
              printf("\nSTMT_EXEC;;11309\n");
goto while_break___0;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;11314\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;11316\n");
ptr++;
        }
      while_break___0:;
        printf("\nSTMT_EXEC;;11319\n");
if ((unsigned long)ptr < (unsigned long)lim)
        {
          printf("\nSTMT_EXEC;;11321\n");
if (eword)
          {
            printf("\nSTMT_EXEC;;11323\n");
ptr++;
          }
          else
          {
            printf("\nSTMT_EXEC;;11327\n");
if (echar)
            {
              printf("\nSTMT_EXEC;;11329\n");
ptr++;
            }
          }
        }
      }
    while_break:;
    }
    else
    {
      printf("\nSTMT_EXEC;;11338\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11340\n");
if ((unsigned long)ptr < (unsigned long)lim)
        {
          printf("\nSTMT_EXEC;;11342\n");
tmp___2 = eword;
          printf("\nSTMT_EXEC;;11343\n");
eword--;
          printf("\nSTMT_EXEC;;11344\n");
if (!tmp___2)
          {
            printf("\nSTMT_EXEC;;11346\n");
goto while_break___1;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;11351\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;11353\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11355\n");
if ((unsigned long)ptr < (unsigned long)lim)
          {
            printf("\nSTMT_EXEC;;11357\n");
tmp___0 = to_uchar(*ptr);
            printf("\nSTMT_EXEC;;11358\n");
if (!blanks[tmp___0])
            {
              printf("\nSTMT_EXEC;;11360\n");
goto while_break___2;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;11365\n");
goto while_break___2;
          }
          printf("\nSTMT_EXEC;;11367\n");
ptr++;
        }
      while_break___2:;
        printf("\nSTMT_EXEC;;11370\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11372\n");
if ((unsigned long)ptr < (unsigned long)lim)
          {
            printf("\nSTMT_EXEC;;11374\n");
tmp___1 = to_uchar(*ptr);
            printf("\nSTMT_EXEC;;11375\n");
if (blanks[tmp___1])
            {
              printf("\nSTMT_EXEC;;11377\n");
goto while_break___3;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;11382\n");
goto while_break___3;
          }
          printf("\nSTMT_EXEC;;11384\n");
ptr++;
        }
      while_break___3:;
      }
    while_break___1:;
    }
    printf("\nSTMT_EXEC;;11390\n");
if (echar != 0UL)
    {
      printf("\nSTMT_EXEC;;11392\n");
if (key->skipeblanks)
      {
        printf("\nSTMT_EXEC;;11394\n");
while (1)
        {
          printf("\nSTMT_EXEC;;11396\n");
if ((unsigned long)ptr < (unsigned long)lim)
          {
            printf("\nSTMT_EXEC;;11398\n");
tmp___3 = to_uchar(*ptr);
            printf("\nSTMT_EXEC;;11399\n");
if (!blanks[tmp___3])
            {
              printf("\nSTMT_EXEC;;11401\n");
goto while_break___4;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;11406\n");
goto while_break___4;
          }
          printf("\nSTMT_EXEC;;11408\n");
ptr++;
        }
      while_break___4:;
      }
      printf("\nSTMT_EXEC;;11412\n");
if ((unsigned long)lim < (unsigned long)(ptr + echar))
      {
        printf("\nSTMT_EXEC;;11414\n");
ptr = lim;
      }
      else
      {
        printf("\nSTMT_EXEC;;11418\n");
ptr += echar;
      }
    }
    printf("\nSTMT_EXEC;;11421\n");
printf("\nFUNC_RETURN;;\n");
return (ptr);
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool fillbuf___7(struct buffer *buf___1, FILE *fp, char const *file)
{
  printf("\nFUNC_CALL;fillbuf___7(struct buffer *,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;11426\n");
struct keyfield const *key;
  printf("\nSTMT_EXEC;;11427\n");
char eol;
  printf("\nSTMT_EXEC;;11428\n");
size_t line_bytes;
  printf("\nSTMT_EXEC;;11429\n");
size_t mergesize;
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
  printf("\nSTMT_EXEC;;11442\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;11443\n");
int tmp___3;
  printf("\nSTMT_EXEC;;11444\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;11445\n");
int tmp___5;
  printf("\nSTMT_EXEC;;11446\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;11447\n");
unsigned char tmp___7;
  printf("\nSTMT_EXEC;;11448\n");
struct line *tmp___8;
  printf("\nSTMT_EXEC;;11449\n");
size_t line_alloc;
  {
    printf("\nSTMT_EXEC;;11451\n");
key = (struct keyfield const *)keylist;
    printf("\nSTMT_EXEC;;11452\n");
eol = eolchar;
    printf("\nSTMT_EXEC;;11453\n");
line_bytes = buf___1->line_bytes;
    printf("\nSTMT_EXEC;;11454\n");
mergesize = merge_buffer_size - (2UL + sizeof(struct line));
    printf("\nSTMT_EXEC;;11455\n");
if (buf___1->eof)
    {
      printf("\nSTMT_EXEC;;11457\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
    }
    printf("\nSTMT_EXEC;;11459\n");
if (buf___1->used != buf___1->left)
    {
      printf("\nSTMT_EXEC;;11461\n");
printf("\nFUNC_CALL;memmove(void *,const void *,size_t);\n");
memmove((void *)buf___1->buf, (void const *)((buf___1->buf + buf___1->used) - buf___1->left), buf___1->left);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11462\n");
buf___1->used = buf___1->left;
      printf("\nSTMT_EXEC;;11463\n");
buf___1->nlines = (size_t)0;
    }
    printf("\nSTMT_EXEC;;11465\n");
while (1)
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
      printf("\nSTMT_EXEC;;11472\n");
if (buf___1->nlines)
      {
        printf("\nSTMT_EXEC;;11474\n");
tmp___0 = line->text + line->length;
      }
      else
      {
        printf("\nSTMT_EXEC;;11478\n");
tmp___0 = buf___1->buf;
      }
      printf("\nSTMT_EXEC;;11480\n");
line_start = tmp___0;
      printf("\nSTMT_EXEC;;11481\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11483\n");
if (!(line_bytes + 1UL < avail))
        {
          printf("\nSTMT_EXEC;;11485\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;11487\n");
readsize = (avail - 1UL) / (line_bytes + 1UL);
        printf("\nSTMT_EXEC;;11488\n");
printf("\nFUNC_CALL;fread_unlocked(void *__restrict,size_t,size_t,FILE *__restrict);\n");
tmp___1 = fread_unlocked((void *)ptr, (size_t)1, readsize, fp);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11489\n");
bytes_read = tmp___1;
        printf("\nSTMT_EXEC;;11490\n");
ptrlim = ptr + bytes_read;
        printf("\nSTMT_EXEC;;11491\n");
avail -= bytes_read;
        printf("\nSTMT_EXEC;;11492\n");
if (bytes_read != readsize)
        {
          printf("\nSTMT_EXEC;;11494\n");
printf("\nFUNC_CALL;ferror_unlocked(FILE *);\n");
tmp___3 = ferror_unlocked(fp);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;11495\n");
if (tmp___3)
          {
            printf("\nSTMT_EXEC;;11497\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("read failed");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;11498\n");
die((char const *)tmp___2, file);
          }
          printf("\nSTMT_EXEC;;11500\n");
printf("\nFUNC_CALL;feof_unlocked(FILE *);\n");
tmp___5 = feof_unlocked(fp);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;11501\n");
if (tmp___5)
          {
            printf("\nSTMT_EXEC;;11503\n");
buf___1->eof = (_Bool)1;
            printf("\nSTMT_EXEC;;11504\n");
if ((unsigned long)buf___1->buf == (unsigned long)ptrlim)
            {
              printf("\nSTMT_EXEC;;11506\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
            }
            printf("\nSTMT_EXEC;;11508\n");
if ((unsigned long)line_start != (unsigned long)ptrlim)
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
          printf("\nSTMT_EXEC;;11526\n");
*p = (char)'\000';
          printf("\nSTMT_EXEC;;11527\n");
ptr = p + 1;
          printf("\nSTMT_EXEC;;11528\n");
line--;
          printf("\nSTMT_EXEC;;11529\n");
line->text = line_start;
          printf("\nSTMT_EXEC;;11530\n");
line->length = (size_t)(ptr - line_start);
          printf("\nSTMT_EXEC;;11531\n");
if (mergesize > line->length)
          {
            printf("\nSTMT_EXEC;;11533\n");
mergesize = mergesize;
          }
          else
          {
            printf("\nSTMT_EXEC;;11537\n");
mergesize = line->length;
          }
          printf("\nSTMT_EXEC;;11539\n");
avail -= line_bytes;
          printf("\nSTMT_EXEC;;11540\n");
if (key)
          {
            printf("\nSTMT_EXEC;;11542\n");
if (key->eword == 0xffffffffffffffffUL)
            {
              printf("\nSTMT_EXEC;;11544\n");
line->keylim = p;
            }
            else
            {
              printf("\nSTMT_EXEC;;11548\n");
tmp___6 = limfield((struct line const *)line, key);
              printf("\nSTMT_EXEC;;11549\n");
line->keylim = tmp___6;
            }
            printf("\nSTMT_EXEC;;11551\n");
if (key->sword != 0xffffffffffffffffUL)
            {
              printf("\nSTMT_EXEC;;11553\n");
line->keybeg = begfield((struct line const *)line, key);
            }
            else
            {
              printf("\nSTMT_EXEC;;11557\n");
if (key->skipsblanks)
              {
                printf("\nSTMT_EXEC;;11559\n");
while (1)
                {
                  printf("\nSTMT_EXEC;;11561\n");
tmp___7 = to_uchar(*line_start);
                  printf("\nSTMT_EXEC;;11562\n");
if (!blanks[tmp___7])
                  {
                    printf("\nSTMT_EXEC;;11564\n");
goto while_break___2;
                  }
                  printf("\nSTMT_EXEC;;11566\n");
line_start++;
                }
              while_break___2:;
              }
              printf("\nSTMT_EXEC;;11570\n");
line->keybeg = line_start;
            }
          }
          printf("\nSTMT_EXEC;;11573\n");
line_start = ptr;
        }
      while_break___1:
        {
printf("\nSTMT_EXEC;;11576\n");
ptr = ptrlim;
}

        printf("\nSTMT_EXEC;;11577\n");
if (buf___1->eof)
        {
          printf("\nSTMT_EXEC;;11579\n");
goto while_break___0;
        }
      }
    while_break___0:
      {
printf("\nSTMT_EXEC;;11583\n");
buf___1->used = (size_t)(ptr - buf___1->buf);
}

      printf("\nSTMT_EXEC;;11584\n");
tmp___8 = buffer_linelim((struct buffer const *)buf___1);
      printf("\nSTMT_EXEC;;11585\n");
buf___1->nlines = (size_t)(tmp___8 - line);
      printf("\nSTMT_EXEC;;11586\n");
if (buf___1->nlines != 0UL)
      {
        printf("\nSTMT_EXEC;;11588\n");
buf___1->left = (size_t)(ptr - line_start);
        printf("\nSTMT_EXEC;;11589\n");
merge_buffer_size = mergesize + (2UL + sizeof(struct line));
        printf("\nSTMT_EXEC;;11590\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
      }
      printf("\nSTMT_EXEC;;11592\n");
line_alloc = buf___1->alloc / sizeof(struct line);
      printf("\nSTMT_EXEC;;11593\n");
buf___1->buf = (char *)x2nrealloc((void *)buf___1->buf, &line_alloc, sizeof(struct line));
      printf("\nSTMT_EXEC;;11594\n");
buf___1->alloc = line_alloc * sizeof(struct line);
    }
    printf("\nSTMT_EXEC;;11596\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static char const unit_order[256] = {(char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)6, (char const)0, (char const)3, (char const)0, (char const)0, (char const)0, (char const)1, (char const)0, (char const)2, (char const)0, (char const)0, (char const)5, (char const)0, (char const)0, (char const)0, (char const)4, (char const)0, (char const)0, (char const)0, (char const)0, (char const)8, (char const)7, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)1, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0};
static int __attribute__((__pure__)) find_unit_order(char const *number)
{
  printf("\nFUNC_CALL;find_unit_order(const char *);\n");
printf("\nSTMT_EXEC;;11602\n");
_Bool minus_sign;
  printf("\nSTMT_EXEC;;11603\n");
char const *p;
  printf("\nSTMT_EXEC;;11604\n");
int nonzero;
  printf("\nSTMT_EXEC;;11605\n");
unsigned char ch;
  printf("\nSTMT_EXEC;;11606\n");
char const *tmp;
  printf("\nSTMT_EXEC;;11607\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;11608\n");
int order___0;
  printf("\nSTMT_EXEC;;11609\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;11611\n");
minus_sign = (_Bool)((int const) * number == 45);
    printf("\nSTMT_EXEC;;11612\n");
p = number + (int)minus_sign;
    printf("\nSTMT_EXEC;;11613\n");
nonzero = 0;
    printf("\nSTMT_EXEC;;11614\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11616\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11618\n");
tmp = p;
        printf("\nSTMT_EXEC;;11619\n");
p++;
        printf("\nSTMT_EXEC;;11620\n");
ch = (unsigned char)*tmp;
        printf("\nSTMT_EXEC;;11621\n");
if (!((unsigned int)ch - 48U <= 9U))
        {
          printf("\nSTMT_EXEC;;11623\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;11625\n");
nonzero |= (int)ch - 48;
      }
    while_break___0:;
      printf("\nSTMT_EXEC;;11628\n");
if (!((int)ch == thousands_sep))
      {
        printf("\nSTMT_EXEC;;11630\n");
goto while_break;
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;11634\n");
if ((int)ch == decimal_point)
    {
      printf("\nSTMT_EXEC;;11636\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11638\n");
tmp___0 = p;
        printf("\nSTMT_EXEC;;11639\n");
p++;
        printf("\nSTMT_EXEC;;11640\n");
ch = (unsigned char)*tmp___0;
        printf("\nSTMT_EXEC;;11641\n");
if (!((unsigned int)ch - 48U <= 9U))
        {
          printf("\nSTMT_EXEC;;11643\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;11645\n");
nonzero |= (int)ch - 48;
      }
    while_break___1:;
    }
    printf("\nSTMT_EXEC;;11649\n");
if (nonzero)
    {
      printf("\nSTMT_EXEC;;11651\n");
order___0 = (int)unit_order[ch];
      printf("\nSTMT_EXEC;;11652\n");
if (minus_sign)
      {
        printf("\nSTMT_EXEC;;11654\n");
tmp___1 = -order___0;
      }
      else
      {
        printf("\nSTMT_EXEC;;11658\n");
tmp___1 = order___0;
      }
      printf("\nSTMT_EXEC;;11660\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))tmp___1);
    }
    else
    {
      printf("\nSTMT_EXEC;;11664\n");
printf("\nFUNC_RETURN;;\n");
return ((int __attribute__((__pure__)))0);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static int human_numcompare(char const *a, char const *b)
{
  printf("\nFUNC_CALL;human_numcompare(const char *,const char *);\n");
printf("\nSTMT_EXEC;;11670\n");
unsigned char tmp;
  printf("\nSTMT_EXEC;;11671\n");
unsigned char tmp___0;
  printf("\nSTMT_EXEC;;11672\n");
int diff;
  printf("\nSTMT_EXEC;;11673\n");
int __attribute__((__pure__)) tmp___1;
  printf("\nSTMT_EXEC;;11674\n");
int __attribute__((__pure__)) tmp___2;
  printf("\nSTMT_EXEC;;11675\n");
int tmp___3;
  printf("\nSTMT_EXEC;;11676\n");
int tmp___4;
  {
    printf("\nSTMT_EXEC;;11678\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11680\n");
tmp = to_uchar((char)*a);
      printf("\nSTMT_EXEC;;11681\n");
if (!blanks[tmp])
      {
        printf("\nSTMT_EXEC;;11683\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;11685\n");
a++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;11688\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11690\n");
tmp___0 = to_uchar((char)*b);
      printf("\nSTMT_EXEC;;11691\n");
if (!blanks[tmp___0])
      {
        printf("\nSTMT_EXEC;;11693\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;11695\n");
b++;
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;11698\n");
tmp___1 = find_unit_order(a);
}

    printf("\nSTMT_EXEC;;11699\n");
tmp___2 = find_unit_order(b);
    printf("\nSTMT_EXEC;;11700\n");
diff = (int)(tmp___1 - tmp___2);
    printf("\nSTMT_EXEC;;11701\n");
if (diff)
    {
      printf("\nSTMT_EXEC;;11703\n");
tmp___4 = diff;
    }
    else
    {
      printf("\nSTMT_EXEC;;11707\n");
tmp___3 = (int)strnumcmp(a, b, decimal_point, thousands_sep);
      printf("\nSTMT_EXEC;;11708\n");
tmp___4 = tmp___3;
    }
    printf("\nSTMT_EXEC;;11710\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___4);
  }
printf("\nFUNC_RETURN;;\n");
}
static int numcompare___3(char const *a, char const *b)
{
  printf("\nFUNC_CALL;numcompare___3(const char *,const char *);\n");
printf("\nSTMT_EXEC;;11715\n");
unsigned char tmp;
  printf("\nSTMT_EXEC;;11716\n");
unsigned char tmp___0;
  printf("\nSTMT_EXEC;;11717\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;11719\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11721\n");
tmp = to_uchar((char)*a);
      printf("\nSTMT_EXEC;;11722\n");
if (!blanks[tmp])
      {
        printf("\nSTMT_EXEC;;11724\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;11726\n");
a++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;11729\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11731\n");
tmp___0 = to_uchar((char)*b);
      printf("\nSTMT_EXEC;;11732\n");
if (!blanks[tmp___0])
      {
        printf("\nSTMT_EXEC;;11734\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;11736\n");
b++;
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;11739\n");
tmp___1 = (int)strnumcmp(a, b, decimal_point, thousands_sep);
}

    printf("\nSTMT_EXEC;;11740\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
static int nan_compare(char const *sa, char const *sb)
{
  printf("\nFUNC_CALL;nan_compare(const char *,const char *);\n");
printf("\nSTMT_EXEC;;11745\n");
long double a;
  printf("\nSTMT_EXEC;;11746\n");
long double b;
  printf("\nSTMT_EXEC;;11747\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;11749\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(&a), 0, sizeof(a));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11750\n");
printf("\nFUNC_CALL;strtold(const char *__restrict,char **__restrict);\n");
a = strtold(sa, (char **)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11751\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(&b), 0, sizeof(b));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11752\n");
printf("\nFUNC_CALL;strtold(const char *__restrict,char **__restrict);\n");
b = strtold(sb, (char **)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11753\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp = memcmp((void const *)(&a), (void const *)(&b), sizeof(a));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11754\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
static int general_numcompare(char const *sa, char const *sb)
{
  printf("\nFUNC_CALL;general_numcompare(const char *,const char *);\n");
printf("\nSTMT_EXEC;;11759\n");
char *ea;
  printf("\nSTMT_EXEC;;11760\n");
char *eb;
  printf("\nSTMT_EXEC;;11761\n");
long double a;
  printf("\nSTMT_EXEC;;11762\n");
long double tmp;
  printf("\nSTMT_EXEC;;11763\n");
long double b;
  printf("\nSTMT_EXEC;;11764\n");
long double tmp___0;
  printf("\nSTMT_EXEC;;11765\n");
int tmp___1;
  printf("\nSTMT_EXEC;;11766\n");
int tmp___2;
  printf("\nSTMT_EXEC;;11767\n");
int tmp___3;
  printf("\nSTMT_EXEC;;11768\n");
int tmp___4;
  printf("\nSTMT_EXEC;;11769\n");
int tmp___5;
  printf("\nSTMT_EXEC;;11770\n");
int tmp___6;
  printf("\nSTMT_EXEC;;11771\n");
int tmp___7;
  {
    printf("\nSTMT_EXEC;;11773\n");
printf("\nFUNC_CALL;strtold(const char *__restrict,char **__restrict);\n");
tmp = strtold(sa, &ea);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11774\n");
a = tmp;
    printf("\nSTMT_EXEC;;11775\n");
printf("\nFUNC_CALL;strtold(const char *__restrict,char **__restrict);\n");
tmp___0 = strtold(sb, &eb);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11776\n");
b = tmp___0;
    printf("\nSTMT_EXEC;;11777\n");
if ((unsigned long)sa == (unsigned long)ea)
    {
      printf("\nSTMT_EXEC;;11779\n");
if ((unsigned long)sb == (unsigned long)eb)
      {
        printf("\nSTMT_EXEC;;11781\n");
tmp___1 = 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;11785\n");
tmp___1 = -1;
      }
      printf("\nSTMT_EXEC;;11787\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
    }
    printf("\nSTMT_EXEC;;11789\n");
if ((unsigned long)sb == (unsigned long)eb)
    {
      printf("\nSTMT_EXEC;;11791\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;11793\n");
if (a < b)
    {
      printf("\nSTMT_EXEC;;11795\n");
tmp___7 = -1;
    }
    else
    {
      printf("\nSTMT_EXEC;;11799\n");
if (a > b)
      {
        printf("\nSTMT_EXEC;;11801\n");
tmp___6 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;11805\n");
if (a == b)
        {
          printf("\nSTMT_EXEC;;11807\n");
tmp___5 = 0;
        }
        else
        {
          printf("\nSTMT_EXEC;;11811\n");
if (b == b)
          {
            printf("\nSTMT_EXEC;;11813\n");
tmp___4 = -1;
          }
          else
          {
            printf("\nSTMT_EXEC;;11817\n");
if (a == a)
            {
              printf("\nSTMT_EXEC;;11819\n");
tmp___3 = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;11823\n");
tmp___2 = nan_compare(sa, sb);
              printf("\nSTMT_EXEC;;11824\n");
tmp___3 = tmp___2;
            }
            printf("\nSTMT_EXEC;;11826\n");
tmp___4 = tmp___3;
          }
          printf("\nSTMT_EXEC;;11828\n");
tmp___5 = tmp___4;
        }
        printf("\nSTMT_EXEC;;11830\n");
tmp___6 = tmp___5;
      }
      printf("\nSTMT_EXEC;;11832\n");
tmp___7 = tmp___6;
    }
    printf("\nSTMT_EXEC;;11834\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___7);
  }
printf("\nFUNC_RETURN;;\n");
}
static int getmonth(char const *month, char **ea)
{
  printf("\nFUNC_CALL;getmonth(const char *,char **);\n");
printf("\nSTMT_EXEC;;11839\n");
size_t lo;
  printf("\nSTMT_EXEC;;11840\n");
size_t hi;
  printf("\nSTMT_EXEC;;11841\n");
unsigned char tmp;
  printf("\nSTMT_EXEC;;11842\n");
size_t ix;
  printf("\nSTMT_EXEC;;11843\n");
char const *m;
  printf("\nSTMT_EXEC;;11844\n");
char const *n;
  printf("\nSTMT_EXEC;;11845\n");
unsigned char tmp___0;
  printf("\nSTMT_EXEC;;11846\n");
unsigned char tmp___1;
  printf("\nSTMT_EXEC;;11847\n");
unsigned char tmp___2;
  printf("\nSTMT_EXEC;;11848\n");
unsigned char tmp___3;
  printf("\nSTMT_EXEC;;11849\n");
unsigned char tmp___4;
  printf("\nSTMT_EXEC;;11850\n");
unsigned char tmp___5;
  {
    printf("\nSTMT_EXEC;;11852\n");
lo = (size_t)0;
    printf("\nSTMT_EXEC;;11853\n");
hi = (size_t)12;
    printf("\nSTMT_EXEC;;11854\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11856\n");
tmp = to_uchar((char)*month);
      printf("\nSTMT_EXEC;;11857\n");
if (!blanks[tmp])
      {
        printf("\nSTMT_EXEC;;11859\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;11861\n");
month++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;11864\n");
while (1)
    {
      printf("\nSTMT_EXEC;;11866\n");
ix = (lo + hi) / 2UL;
      printf("\nSTMT_EXEC;;11867\n");
m = month;
      printf("\nSTMT_EXEC;;11868\n");
n = monthtab[ix].name;
      printf("\nSTMT_EXEC;;11869\n");
while (1)
      {
        printf("\nSTMT_EXEC;;11871\n");
if (!*n)
        {
          printf("\nSTMT_EXEC;;11873\n");
if (ea)
          {
            printf("\nSTMT_EXEC;;11875\n");
*ea = (char *)m;
          }
          printf("\nSTMT_EXEC;;11877\n");
printf("\nFUNC_RETURN;;\n");
return (monthtab[ix].val);
        }
        printf("\nSTMT_EXEC;;11879\n");
tmp___3 = to_uchar((char)*m);
        printf("\nSTMT_EXEC;;11880\n");
tmp___4 = to_uchar(fold_toupper[tmp___3]);
        printf("\nSTMT_EXEC;;11881\n");
tmp___5 = to_uchar((char)*n);
        printf("\nSTMT_EXEC;;11882\n");
if ((int)tmp___4 < (int)tmp___5)
        {
          printf("\nSTMT_EXEC;;11884\n");
hi = ix;
          printf("\nSTMT_EXEC;;11885\n");
goto while_break___1;
        }
        else
        {
          printf("\nSTMT_EXEC;;11889\n");
tmp___0 = to_uchar((char)*m);
          printf("\nSTMT_EXEC;;11890\n");
tmp___1 = to_uchar(fold_toupper[tmp___0]);
          printf("\nSTMT_EXEC;;11891\n");
tmp___2 = to_uchar((char)*n);
          printf("\nSTMT_EXEC;;11892\n");
if ((int)tmp___1 > (int)tmp___2)
          {
            printf("\nSTMT_EXEC;;11894\n");
lo = ix + 1UL;
            printf("\nSTMT_EXEC;;11895\n");
goto while_break___1;
          }
        }
        printf("\nSTMT_EXEC;;11898\n");
m++;
        printf("\nSTMT_EXEC;;11899\n");
n++;
      }
    while_break___1:;
      printf("\nSTMT_EXEC;;11902\n");
if (!(lo < hi))
      {
        printf("\nSTMT_EXEC;;11904\n");
goto while_break___0;
      }
    }
  while_break___0:;
    printf("\nSTMT_EXEC;;11908\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct md5_ctx random_md5_state;
static void random_md5_state_init(char const *random_source)
{
  printf("\nFUNC_CALL;random_md5_state_init(const char *);\n");
printf("\nSTMT_EXEC;;11914\n");
unsigned char buf___1[16];
  printf("\nSTMT_EXEC;;11915\n");
struct randread_source *r;
  printf("\nSTMT_EXEC;;11916\n");
struct randread_source *tmp;
  printf("\nSTMT_EXEC;;11917\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;11918\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;11919\n");
int tmp___2;
  {
    printf("\nSTMT_EXEC;;11921\n");
tmp = randread_new(random_source, sizeof(buf___1));
    printf("\nSTMT_EXEC;;11922\n");
r = tmp;
    printf("\nSTMT_EXEC;;11923\n");
if (!r)
    {
      printf("\nSTMT_EXEC;;11925\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("open failed");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11926\n");
die((char const *)tmp___0, random_source);
    }
    printf("\nSTMT_EXEC;;11928\n");
randread(r, (void *)(buf___1), sizeof(buf___1));
    printf("\nSTMT_EXEC;;11929\n");
tmp___2 = randread_free(r);
    printf("\nSTMT_EXEC;;11930\n");
if (tmp___2 != 0)
    {
      printf("\nSTMT_EXEC;;11932\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("close failed");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11933\n");
die((char const *)tmp___1, random_source);
    }
    printf("\nSTMT_EXEC;;11935\n");
md5_init_ctx(&random_md5_state);
    printf("\nSTMT_EXEC;;11936\n");
md5_process_bytes((void const *)(buf___1), sizeof(buf___1), &random_md5_state);
    printf("\nSTMT_EXEC;;11937\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t xstrxfrm(char *__restrict dest, char const *__restrict src, size_t destsize)
{
  printf("\nFUNC_CALL;xstrxfrm(char *__restrict,const char *__restrict,size_t);\n");
printf("\nSTMT_EXEC;;11942\n");
int *tmp;
  printf("\nSTMT_EXEC;;11943\n");
size_t translated_size;
  printf("\nSTMT_EXEC;;11944\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;11945\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;11946\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;11947\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;11948\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;11949\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;11950\n");
int *tmp___6;
  {
    printf("\nSTMT_EXEC;;11952\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11953\n");
*tmp = 0;
    printf("\nSTMT_EXEC;;11954\n");
printf("\nFUNC_CALL;strxfrm(char *__restrict,const char *__restrict,size_t);\n");
tmp___0 = strxfrm(dest, src, destsize);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11955\n");
translated_size = tmp___0;
    printf("\nSTMT_EXEC;;11956\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___6 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;11957\n");
if (*tmp___6)
    {
      printf("\nSTMT_EXEC;;11959\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("string transformation failed");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11960\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11961\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___2, (char const *)tmp___1);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11962\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext("set LC_ALL=\'C\' to work around the problem");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11963\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___3);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11964\n");
tmp___4 = quotearg_n_style(0, (enum quoting_style)6, (char const *)src);
      printf("\nSTMT_EXEC;;11965\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 = gettext("the untransformed string was %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11966\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___5, tmp___4);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;11968\n");
printf("\nFUNC_RETURN;;\n");
return (translated_size);
  }
printf("\nFUNC_RETURN;;\n");
}
static int compare_random(char *__restrict texta, size_t lena, char *__restrict textb, size_t lenb)
{
  printf("\nFUNC_CALL;compare_random(char *__restrict,size_t,char *__restrict,size_t);\n");
printf("\nSTMT_EXEC;;11973\n");
int xfrm_diff;
  printf("\nSTMT_EXEC;;11974\n");
char stackbuf[4000];
  printf("\nSTMT_EXEC;;11975\n");
char *buf___1;
  printf("\nSTMT_EXEC;;11976\n");
size_t bufsize___1;
  printf("\nSTMT_EXEC;;11977\n");
void *allocated;
  printf("\nSTMT_EXEC;;11978\n");
uint32_t dig[2][16UL / sizeof(uint32_t)];
  printf("\nSTMT_EXEC;;11979\n");
struct md5_ctx s[2];
  printf("\nSTMT_EXEC;;11980\n");
char const *lima;
  printf("\nSTMT_EXEC;;11981\n");
char const *limb;
  printf("\nSTMT_EXEC;;11982\n");
size_t guess_bufsize;
  printf("\nSTMT_EXEC;;11983\n");
size_t sizea;
  printf("\nSTMT_EXEC;;11984\n");
size_t tmp;
  printf("\nSTMT_EXEC;;11985\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;11986\n");
_Bool a_fits;
  printf("\nSTMT_EXEC;;11987\n");
size_t sizeb;
  printf("\nSTMT_EXEC;;11988\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;11989\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;11990\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;11991\n");
size_t tmp___4;
  printf("\nSTMT_EXEC;;11992\n");
size_t tmp___5;
  printf("\nSTMT_EXEC;;11993\n");
size_t tmp___6;
  printf("\nSTMT_EXEC;;11994\n");
size_t tmp___7;
  printf("\nSTMT_EXEC;;11995\n");
int diff;
  printf("\nSTMT_EXEC;;11996\n");
int tmp___8;
  printf("\nSTMT_EXEC;;11997\n");
size_t tmp___9;
  {
    printf("\nSTMT_EXEC;;11999\n");
xfrm_diff = 0;
    printf("\nSTMT_EXEC;;12000\n");
buf___1 = stackbuf;
    printf("\nSTMT_EXEC;;12001\n");
bufsize___1 = sizeof(stackbuf);
    printf("\nSTMT_EXEC;;12002\n");
allocated = (void *)0;
    printf("\nSTMT_EXEC;;12003\n");
s[1] = random_md5_state;
    printf("\nSTMT_EXEC;;12004\n");
s[0] = s[1];
    printf("\nSTMT_EXEC;;12005\n");
if (hard_LC_COLLATE)
    {
      printf("\nSTMT_EXEC;;12007\n");
lima = (char const *)(texta + lena);
      printf("\nSTMT_EXEC;;12008\n");
limb = (char const *)(textb + lenb);
      printf("\nSTMT_EXEC;;12009\n");
while (1)
      {
        printf("\nSTMT_EXEC;;12011\n");
guess_bufsize = 3UL * (lena + lenb) + 2UL;
        printf("\nSTMT_EXEC;;12012\n");
if (bufsize___1 < guess_bufsize)
        {
          printf("\nSTMT_EXEC;;12014\n");
if (guess_bufsize > (bufsize___1 * 3UL) / 2UL)
          {
            printf("\nSTMT_EXEC;;12016\n");
bufsize___1 = guess_bufsize;
          }
          else
          {
            printf("\nSTMT_EXEC;;12020\n");
bufsize___1 = (bufsize___1 * 3UL) / 2UL;
          }
          printf("\nSTMT_EXEC;;12022\n");
printf("\nFUNC_CALL;free(void *);\n");
free(allocated);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12023\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
allocated = malloc(bufsize___1);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12024\n");
buf___1 = (char *)allocated;
          printf("\nSTMT_EXEC;;12025\n");
if (!buf___1)
          {
            printf("\nSTMT_EXEC;;12027\n");
buf___1 = stackbuf;
            printf("\nSTMT_EXEC;;12028\n");
bufsize___1 = sizeof(stackbuf);
          }
        }
        printf("\nSTMT_EXEC;;12031\n");
if ((unsigned long)texta < (unsigned long)lima)
        {
          printf("\nSTMT_EXEC;;12033\n");
tmp = xstrxfrm(buf___1, (char const *)texta, bufsize___1);
          printf("\nSTMT_EXEC;;12034\n");
tmp___0 = tmp + 1UL;
        }
        else
        {
          printf("\nSTMT_EXEC;;12038\n");
tmp___0 = (size_t)0;
        }
        printf("\nSTMT_EXEC;;12040\n");
sizea = tmp___0;
        printf("\nSTMT_EXEC;;12041\n");
a_fits = (_Bool)(sizea <= bufsize___1);
        printf("\nSTMT_EXEC;;12042\n");
if ((unsigned long)textb < (unsigned long)limb)
        {
          printf("\nSTMT_EXEC;;12044\n");
if (a_fits)
          {
            printf("\nSTMT_EXEC;;12046\n");
tmp___1 = bufsize___1 - sizea;
          }
          else
          {
            printf("\nSTMT_EXEC;;12050\n");
tmp___1 = (size_t)0;
          }
          printf("\nSTMT_EXEC;;12052\n");
if (a_fits)
          {
            printf("\nSTMT_EXEC;;12054\n");
tmp___2 = buf___1 + sizea;
          }
          else
          {
            printf("\nSTMT_EXEC;;12058\n");
tmp___2 = (char *)((void *)0);
          }
          printf("\nSTMT_EXEC;;12060\n");
tmp___3 = xstrxfrm(tmp___2, (char const *)textb, tmp___1);
          printf("\nSTMT_EXEC;;12061\n");
tmp___4 = tmp___3 + 1UL;
        }
        else
        {
          printf("\nSTMT_EXEC;;12065\n");
tmp___4 = (size_t)0;
        }
        printf("\nSTMT_EXEC;;12067\n");
sizeb = tmp___4;
        printf("\nSTMT_EXEC;;12068\n");
if (a_fits)
        {
          printf("\nSTMT_EXEC;;12070\n");
if (!(sizea + sizeb <= bufsize___1))
          {
            printf("\nSTMT_EXEC;;12072\n");
goto _L;
          }
        }
        else
        {
        _L:
          {
printf("\nSTMT_EXEC;;12078\n");
bufsize___1 = sizea + sizeb;
}

          printf("\nSTMT_EXEC;;12079\n");
if (bufsize___1 < 6148914691236517205UL)
          {
            printf("\nSTMT_EXEC;;12081\n");
bufsize___1 = (bufsize___1 * 3UL) / 2UL;
          }
          printf("\nSTMT_EXEC;;12083\n");
printf("\nFUNC_CALL;free(void *);\n");
free(allocated);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12084\n");
allocated = xmalloc(bufsize___1);
          printf("\nSTMT_EXEC;;12085\n");
buf___1 = (char *)allocated;
          printf("\nSTMT_EXEC;;12086\n");
if ((unsigned long)texta < (unsigned long)lima)
          {
            printf("\nSTMT_EXEC;;12088\n");
printf("\nFUNC_CALL;strxfrm(char *__restrict,const char *__restrict,size_t);\n");
strxfrm(buf___1, (char const *)texta, sizea);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;12090\n");
if ((unsigned long)textb < (unsigned long)limb)
          {
            printf("\nSTMT_EXEC;;12092\n");
printf("\nFUNC_CALL;strxfrm(char *__restrict,const char *__restrict,size_t);\n");
strxfrm(buf___1 + sizea, (char const *)textb, sizeb);printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;12095\n");
if ((unsigned long)texta < (unsigned long)lima)
        {
          printf("\nSTMT_EXEC;;12097\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___5 = strlen((char const *)texta);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12098\n");
texta += tmp___5 + 1UL;
        }
        printf("\nSTMT_EXEC;;12100\n");
if ((unsigned long)textb < (unsigned long)limb)
        {
          printf("\nSTMT_EXEC;;12102\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___6 = strlen((char const *)textb);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12103\n");
textb += tmp___6 + 1UL;
        }
        printf("\nSTMT_EXEC;;12105\n");
if (!((unsigned long)texta < (unsigned long)lima))
        {
          printf("\nSTMT_EXEC;;12107\n");
if (!((unsigned long)textb < (unsigned long)limb))
          {
            printf("\nSTMT_EXEC;;12109\n");
lena = sizea;
            printf("\nSTMT_EXEC;;12110\n");
texta = buf___1;
            printf("\nSTMT_EXEC;;12111\n");
lenb = sizeb;
            printf("\nSTMT_EXEC;;12112\n");
textb = buf___1 + sizea;
            printf("\nSTMT_EXEC;;12113\n");
goto while_break;
          }
        }
        printf("\nSTMT_EXEC;;12116\n");
md5_process_bytes((void const *)buf___1, sizea, &s[0]);
        printf("\nSTMT_EXEC;;12117\n");
md5_process_bytes((void const *)(buf___1 + sizea), sizeb, &s[1]);
        printf("\nSTMT_EXEC;;12118\n");
if (!xfrm_diff)
        {
          printf("\nSTMT_EXEC;;12120\n");
if (sizea < sizeb)
          {
            printf("\nSTMT_EXEC;;12122\n");
tmp___7 = sizea;
          }
          else
          {
            printf("\nSTMT_EXEC;;12126\n");
tmp___7 = sizeb;
          }
          printf("\nSTMT_EXEC;;12128\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
xfrm_diff = memcmp((void const *)buf___1, (void const *)(buf___1 + sizea), tmp___7);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12129\n");
if (!xfrm_diff)
          {
            printf("\nSTMT_EXEC;;12131\n");
xfrm_diff = (sizea > sizeb) - (sizea < sizeb);
          }
        }
      }
    while_break:;
    }
    printf("\nSTMT_EXEC;;12137\n");
md5_process_bytes((void const *)texta, lena, &s[0]);
    printf("\nSTMT_EXEC;;12138\n");
md5_finish_ctx(&s[0], (void *)(dig[0]));
    printf("\nSTMT_EXEC;;12139\n");
md5_process_bytes((void const *)textb, lenb, &s[1]);
    printf("\nSTMT_EXEC;;12140\n");
md5_finish_ctx(&s[1], (void *)(dig[1]));
    printf("\nSTMT_EXEC;;12141\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___8 = memcmp((void const *)(dig[0]), (void const *)(dig[1]), sizeof(dig[0]));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;12142\n");
diff = tmp___8;
    printf("\nSTMT_EXEC;;12143\n");
if (!diff)
    {
      printf("\nSTMT_EXEC;;12145\n");
if (!xfrm_diff)
      {
        printf("\nSTMT_EXEC;;12147\n");
if (lena < lenb)
        {
          printf("\nSTMT_EXEC;;12149\n");
tmp___9 = lena;
        }
        else
        {
          printf("\nSTMT_EXEC;;12153\n");
tmp___9 = lenb;
        }
        printf("\nSTMT_EXEC;;12155\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
xfrm_diff = memcmp((void const *)texta, (void const *)textb, tmp___9);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;12156\n");
if (!xfrm_diff)
        {
          printf("\nSTMT_EXEC;;12158\n");
xfrm_diff = (lena > lenb) - (lena < lenb);
        }
      }
      printf("\nSTMT_EXEC;;12161\n");
diff = xfrm_diff;
    }
    printf("\nSTMT_EXEC;;12163\n");
printf("\nFUNC_CALL;free(void *);\n");
free(allocated);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;12164\n");
printf("\nFUNC_RETURN;;\n");
return (diff);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t debug_width(char const *text, char const *lim)
{
  printf("\nFUNC_CALL;debug_width(const char *,const char *);\n");
printf("\nSTMT_EXEC;;12169\n");
size_t width;
  printf("\nSTMT_EXEC;;12170\n");
size_t tmp;
  printf("\nSTMT_EXEC;;12171\n");
char const *tmp___0;
  {
    printf("\nSTMT_EXEC;;12173\n");
tmp = (size_t)mbsnwidth(text, (size_t)(lim - text), 0);
    printf("\nSTMT_EXEC;;12174\n");
width = tmp;
    printf("\nSTMT_EXEC;;12175\n");
while (1)
    {
      printf("\nSTMT_EXEC;;12177\n");
if (!((unsigned long)text < (unsigned long)lim))
      {
        printf("\nSTMT_EXEC;;12179\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;12181\n");
tmp___0 = text;
      printf("\nSTMT_EXEC;;12182\n");
text++;
      printf("\nSTMT_EXEC;;12183\n");
width += (size_t)((int const) * tmp___0 == 9);
    }
  while_break:;
    printf("\nSTMT_EXEC;;12186\n");
printf("\nFUNC_RETURN;;\n");
return (width);
  }
printf("\nFUNC_RETURN;;\n");
}
static void mark_key(size_t offset, size_t width)
{
  printf("\nFUNC_CALL;mark_key(size_t,size_t);\n");
printf("\nSTMT_EXEC;;12191\n");
size_t tmp;
  printf("\nSTMT_EXEC;;12192\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;12194\n");
while (1)
    {
      printf("\nSTMT_EXEC;;12196\n");
tmp = offset;
      printf("\nSTMT_EXEC;;12197\n");
offset--;
      printf("\nSTMT_EXEC;;12198\n");
if (!tmp)
      {
        printf("\nSTMT_EXEC;;12200\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;12202\n");
printf("\nFUNC_CALL;putchar_unlocked(int);\n");
putchar_unlocked(' ');printf("\nFUNC_RETURN;;\n");

    }
  while_break:;
    printf("\nSTMT_EXEC;;12205\n");
if (!width)
    {
      printf("\nSTMT_EXEC;;12207\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("^ no match for key\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;12208\n");
printf((char const *)tmp___0);
    }
    else
    {
      printf("\nSTMT_EXEC;;12212\n");
while (1)
      {
        printf("\nSTMT_EXEC;;12214\n");
printf("\nFUNC_CALL;putchar_unlocked(int);\n");
putchar_unlocked('_');printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;12215\n");
width--;
        printf("\nSTMT_EXEC;;12216\n");
if (!width)
        {
          printf("\nSTMT_EXEC;;12218\n");
goto while_break___0;
        }
      }
    while_break___0:
      {
printf("\nSTMT_EXEC;;12222\n");
printf("\nFUNC_CALL;putchar_unlocked(int);\n");
putchar_unlocked('\n');printf("\nFUNC_RETURN;;\n");

}

    }
    printf("\nSTMT_EXEC;;12224\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static _Bool key_numeric(struct keyfield const *key)
{
  printf("\nFUNC_CALL;key_numeric(const struct keyfield *);\n");
printf("\nSTMT_EXEC;;12229\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;12231\n");
if (key->numeric)
    {
      printf("\nSTMT_EXEC;;12233\n");
tmp = 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;12237\n");
if (key->general_numeric)
      {
        printf("\nSTMT_EXEC;;12239\n");
tmp = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;12243\n");
if (key->human_numeric)
        {
          printf("\nSTMT_EXEC;;12245\n");
tmp = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;12249\n");
tmp = 0;
        }
      }
    }
    printf("\nSTMT_EXEC;;12253\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
static void debug_key(struct line const *line, struct keyfield const *key)
{
  printf("\nFUNC_CALL;debug_key(const struct line *,const struct keyfield *);\n");
printf("\nSTMT_EXEC;;12258\n");
char *text;
  printf("\nSTMT_EXEC;;12259\n");
char *beg;
  printf("\nSTMT_EXEC;;12260\n");
char *lim;
  printf("\nSTMT_EXEC;;12261\n");
char saved___0;
  printf("\nSTMT_EXEC;;12262\n");
unsigned char tmp;
  printf("\nSTMT_EXEC;;12263\n");
char *tighter_lim;
  printf("\nSTMT_EXEC;;12264\n");
long double __x;
  printf("\nSTMT_EXEC;;12265\n");
long double tmp___0;
  printf("\nSTMT_EXEC;;12266\n");
char *p;
  printf("\nSTMT_EXEC;;12267\n");
int tmp___1;
  printf("\nSTMT_EXEC;;12268\n");
_Bool found_digit;
  printf("\nSTMT_EXEC;;12269\n");
unsigned char ch;
  printf("\nSTMT_EXEC;;12270\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;12271\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;12272\n");
int tmp___4;
  printf("\nSTMT_EXEC;;12273\n");
_Bool tmp___5;
  printf("\nSTMT_EXEC;;12274\n");
size_t offset;
  printf("\nSTMT_EXEC;;12275\n");
size_t tmp___6;
  printf("\nSTMT_EXEC;;12276\n");
size_t width;
  printf("\nSTMT_EXEC;;12277\n");
size_t tmp___7;
  {
    printf("\nSTMT_EXEC;;12279\n");
text = (char *)line->text;
    printf("\nSTMT_EXEC;;12280\n");
beg = text;
    printf("\nSTMT_EXEC;;12281\n");
lim = (text + line->length) - 1;
    printf("\nSTMT_EXEC;;12282\n");
if (key)
    {
      printf("\nSTMT_EXEC;;12284\n");
if (key->sword != 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;12286\n");
beg = begfield(line, key);
      }
      printf("\nSTMT_EXEC;;12288\n");
if (key->eword != 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;12290\n");
lim = limfield(line, key);
      }
      printf("\nSTMT_EXEC;;12292\n");
if (key->skipsblanks)
      {
        printf("\nSTMT_EXEC;;12294\n");
goto _L___0;
      }
      else
      {
        printf("\nSTMT_EXEC;;12298\n");
if (key->month)
        {
          printf("\nSTMT_EXEC;;12300\n");
goto _L___0;
        }
        else
        {
          printf("\nSTMT_EXEC;;12304\n");
tmp___5 = key_numeric(key);
          printf("\nSTMT_EXEC;;12305\n");
if (tmp___5)
          {
          _L___0:
            {
printf("\nSTMT_EXEC;;12308\n");
saved___0 = *lim;
}

            printf("\nSTMT_EXEC;;12309\n");
*lim = (char)'\000';
            printf("\nSTMT_EXEC;;12310\n");
while (1)
            {
              printf("\nSTMT_EXEC;;12312\n");
tmp = to_uchar(*beg);
              printf("\nSTMT_EXEC;;12313\n");
if (!blanks[tmp])
              {
                printf("\nSTMT_EXEC;;12315\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;12317\n");
beg++;
            }
          while_break:
            {
printf("\nSTMT_EXEC;;12320\n");
tighter_lim = beg;
}

            printf("\nSTMT_EXEC;;12321\n");
if ((unsigned long)lim < (unsigned long)beg)
            {
              printf("\nSTMT_EXEC;;12323\n");
tighter_lim = lim;
            }
            else
            {
              printf("\nSTMT_EXEC;;12327\n");
if (key->month)
              {
                printf("\nSTMT_EXEC;;12329\n");
getmonth((char const *)beg, &tighter_lim);
              }
              else
              {
                printf("\nSTMT_EXEC;;12333\n");
if (key->general_numeric)
                {
                  printf("\nSTMT_EXEC;;12335\n");
printf("\nFUNC_CALL;strtold(const char *__restrict,char **__restrict);\n");
tmp___0 = strtold((char const *)beg, &tighter_lim);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;12336\n");
__x = tmp___0;
                }
                else
                {
                  printf("\nSTMT_EXEC;;12340\n");
if (key->numeric)
                  {
                    printf("\nSTMT_EXEC;;12342\n");
goto _L;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;12346\n");
if (key->human_numeric)
                    {
                    _L:
                      {
printf("\nSTMT_EXEC;;12349\n");
if ((unsigned long)beg < (unsigned long)lim)
                      {
                        printf("\nSTMT_EXEC;;12351\n");
if ((int)*beg == 45)
                        {
                          printf("\nSTMT_EXEC;;12353\n");
tmp___1 = 1;
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;12357\n");
tmp___1 = 0;
                        }
                      }
                      else
                      {
                        printf("\nSTMT_EXEC;;12362\n");
tmp___1 = 0;
                      }
}

                      printf("\nSTMT_EXEC;;12364\n");
p = beg + tmp___1;
                      printf("\nSTMT_EXEC;;12365\n");
found_digit = (_Bool)0;
                      printf("\nSTMT_EXEC;;12366\n");
while (1)
                      {
                        printf("\nSTMT_EXEC;;12368\n");
while (1)
                        {
                          printf("\nSTMT_EXEC;;12370\n");
tmp___2 = p;
                          printf("\nSTMT_EXEC;;12371\n");
p++;
                          printf("\nSTMT_EXEC;;12372\n");
ch = (unsigned char)*tmp___2;
                          printf("\nSTMT_EXEC;;12373\n");
if (!((unsigned int)ch - 48U <= 9U))
                          {
                            printf("\nSTMT_EXEC;;12375\n");
goto while_break___1;
                          }
                          printf("\nSTMT_EXEC;;12377\n");
found_digit = (_Bool)1;
                        }
                      while_break___1:;
                        printf("\nSTMT_EXEC;;12380\n");
if (!((int)ch == thousands_sep))
                        {
                          printf("\nSTMT_EXEC;;12382\n");
goto while_break___0;
                        }
                      }
                    while_break___0:;
                      printf("\nSTMT_EXEC;;12386\n");
if ((int)ch == decimal_point)
                      {
                        printf("\nSTMT_EXEC;;12388\n");
while (1)
                        {
                          printf("\nSTMT_EXEC;;12390\n");
tmp___3 = p;
                          printf("\nSTMT_EXEC;;12391\n");
p++;
                          printf("\nSTMT_EXEC;;12392\n");
ch = (unsigned char)*tmp___3;
                          printf("\nSTMT_EXEC;;12393\n");
if (!((unsigned int)ch - 48U <= 9U))
                          {
                            printf("\nSTMT_EXEC;;12395\n");
goto while_break___2;
                          }
                          printf("\nSTMT_EXEC;;12397\n");
found_digit = (_Bool)1;
                        }
                      while_break___2:;
                      }
                      printf("\nSTMT_EXEC;;12401\n");
if (found_digit)
                      {
                        printf("\nSTMT_EXEC;;12403\n");
if (key->human_numeric)
                        {
                          printf("\nSTMT_EXEC;;12405\n");
if (unit_order[ch])
                          {
                            printf("\nSTMT_EXEC;;12407\n");
tmp___4 = 0;
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;12411\n");
tmp___4 = 1;
                          }
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;12416\n");
tmp___4 = 1;
                        }
                        printf("\nSTMT_EXEC;;12418\n");
tighter_lim = p - tmp___4;
                      }
                    }
                    else
                    {
                      printf("\nSTMT_EXEC;;12423\n");
tighter_lim = lim;
                    }
                  }
                }
              }
            }
            printf("\nSTMT_EXEC;;12429\n");
*lim = saved___0;
            printf("\nSTMT_EXEC;;12430\n");
lim = tighter_lim;
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;12435\n");
tmp___6 = debug_width((char const *)text, (char const *)beg);
    printf("\nSTMT_EXEC;;12436\n");
offset = tmp___6;
    printf("\nSTMT_EXEC;;12437\n");
tmp___7 = debug_width((char const *)beg, (char const *)lim);
    printf("\nSTMT_EXEC;;12438\n");
width = tmp___7;
    printf("\nSTMT_EXEC;;12439\n");
mark_key(offset, width);
    printf("\nSTMT_EXEC;;12440\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void debug_line(struct line const *line)
{
  printf("\nFUNC_CALL;debug_line(const struct line *);\n");
printf("\nSTMT_EXEC;;12445\n");
struct keyfield const *key;
  {
    printf("\nSTMT_EXEC;;12447\n");
key = (struct keyfield const *)keylist;
    printf("\nSTMT_EXEC;;12448\n");
while (1)
    {
      printf("\nSTMT_EXEC;;12450\n");
debug_key(line, key);
      printf("\nSTMT_EXEC;;12451\n");
if (key)
      {
        printf("\nSTMT_EXEC;;12453\n");
key = (struct keyfield const *)key->next;
        printf("\nSTMT_EXEC;;12454\n");
if (!key)
        {
          printf("\nSTMT_EXEC;;12456\n");
if (unique)
          {
            printf("\nSTMT_EXEC;;12458\n");
goto while_break;
          }
          else
          {
            printf("\nSTMT_EXEC;;12462\n");
if (stable)
            {
              printf("\nSTMT_EXEC;;12464\n");
goto while_break;
            }
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;12471\n");
goto while_break;
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;12475\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool default_key_compare(struct keyfield const *key)
{
  printf("\nFUNC_CALL;default_key_compare(const struct keyfield *);\n");
printf("\nSTMT_EXEC;;12480\n");
_Bool tmp;
  printf("\nSTMT_EXEC;;12481\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;12483\n");
if (key->ignore)
    {
      printf("\nSTMT_EXEC;;12485\n");
tmp___0 = 0;
    }
    else
    {
      printf("\nSTMT_EXEC;;12489\n");
if (key->translate)
      {
        printf("\nSTMT_EXEC;;12491\n");
tmp___0 = 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;12495\n");
if (key->skipsblanks)
        {
          printf("\nSTMT_EXEC;;12497\n");
tmp___0 = 0;
        }
        else
        {
          printf("\nSTMT_EXEC;;12501\n");
if (key->skipeblanks)
          {
            printf("\nSTMT_EXEC;;12503\n");
tmp___0 = 0;
          }
          else
          {
            printf("\nSTMT_EXEC;;12507\n");
tmp = key_numeric(key);
            printf("\nSTMT_EXEC;;12508\n");
if (tmp)
            {
              printf("\nSTMT_EXEC;;12510\n");
tmp___0 = 0;
            }
            else
            {
              printf("\nSTMT_EXEC;;12514\n");
if (key->month)
              {
                printf("\nSTMT_EXEC;;12516\n");
tmp___0 = 0;
              }
              else
              {
                printf("\nSTMT_EXEC;;12520\n");
if (key->version)
                {
                  printf("\nSTMT_EXEC;;12522\n");
tmp___0 = 0;
                }
                else
                {
                  printf("\nSTMT_EXEC;;12526\n");
if (key->random)
                  {
                    printf("\nSTMT_EXEC;;12528\n");
tmp___0 = 0;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;12532\n");
tmp___0 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;12541\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
static void key_to_opts(struct keyfield const *key, char *opts___1)
{
  printf("\nFUNC_CALL;key_to_opts(const struct keyfield *,char *);\n");
printf("\nSTMT_EXEC;;12546\n");
char *tmp;
  printf("\nSTMT_EXEC;;12547\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;12548\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;12549\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;12550\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;12551\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;12552\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;12553\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;12554\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;12555\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;12556\n");
char *tmp___9;
  {
    printf("\nSTMT_EXEC;;12558\n");
if (key->skipsblanks)
    {
      printf("\nSTMT_EXEC;;12560\n");
tmp = opts___1;
      printf("\nSTMT_EXEC;;12561\n");
opts___1++;
      printf("\nSTMT_EXEC;;12562\n");
*tmp = (char)'b';
    }
    else
    {
      printf("\nSTMT_EXEC;;12566\n");
if (key->skipeblanks)
      {
        printf("\nSTMT_EXEC;;12568\n");
tmp = opts___1;
        printf("\nSTMT_EXEC;;12569\n");
opts___1++;
        printf("\nSTMT_EXEC;;12570\n");
*tmp = (char)'b';
      }
    }
    printf("\nSTMT_EXEC;;12573\n");
if ((unsigned long)key->ignore == (unsigned long)(nondictionary))
    {
      printf("\nSTMT_EXEC;;12575\n");
tmp___0 = opts___1;
      printf("\nSTMT_EXEC;;12576\n");
opts___1++;
      printf("\nSTMT_EXEC;;12577\n");
*tmp___0 = (char)'d';
    }
    printf("\nSTMT_EXEC;;12579\n");
if (key->translate)
    {
      printf("\nSTMT_EXEC;;12581\n");
tmp___1 = opts___1;
      printf("\nSTMT_EXEC;;12582\n");
opts___1++;
      printf("\nSTMT_EXEC;;12583\n");
*tmp___1 = (char)'f';
    }
    printf("\nSTMT_EXEC;;12585\n");
if (key->general_numeric)
    {
      printf("\nSTMT_EXEC;;12587\n");
tmp___2 = opts___1;
      printf("\nSTMT_EXEC;;12588\n");
opts___1++;
      printf("\nSTMT_EXEC;;12589\n");
*tmp___2 = (char)'g';
    }
    printf("\nSTMT_EXEC;;12591\n");
if (key->human_numeric)
    {
      printf("\nSTMT_EXEC;;12593\n");
tmp___3 = opts___1;
      printf("\nSTMT_EXEC;;12594\n");
opts___1++;
      printf("\nSTMT_EXEC;;12595\n");
*tmp___3 = (char)'h';
    }
    printf("\nSTMT_EXEC;;12597\n");
if ((unsigned long)key->ignore == (unsigned long)(nonprinting))
    {
      printf("\nSTMT_EXEC;;12599\n");
tmp___4 = opts___1;
      printf("\nSTMT_EXEC;;12600\n");
opts___1++;
      printf("\nSTMT_EXEC;;12601\n");
*tmp___4 = (char)'i';
    }
    printf("\nSTMT_EXEC;;12603\n");
if (key->month)
    {
      printf("\nSTMT_EXEC;;12605\n");
tmp___5 = opts___1;
      printf("\nSTMT_EXEC;;12606\n");
opts___1++;
      printf("\nSTMT_EXEC;;12607\n");
*tmp___5 = (char)'M';
    }
    printf("\nSTMT_EXEC;;12609\n");
if (key->numeric)
    {
      printf("\nSTMT_EXEC;;12611\n");
tmp___6 = opts___1;
      printf("\nSTMT_EXEC;;12612\n");
opts___1++;
      printf("\nSTMT_EXEC;;12613\n");
*tmp___6 = (char)'n';
    }
    printf("\nSTMT_EXEC;;12615\n");
if (key->random)
    {
      printf("\nSTMT_EXEC;;12617\n");
tmp___7 = opts___1;
      printf("\nSTMT_EXEC;;12618\n");
opts___1++;
      printf("\nSTMT_EXEC;;12619\n");
*tmp___7 = (char)'R';
    }
    printf("\nSTMT_EXEC;;12621\n");
if (key->reverse)
    {
      printf("\nSTMT_EXEC;;12623\n");
tmp___8 = opts___1;
      printf("\nSTMT_EXEC;;12624\n");
opts___1++;
      printf("\nSTMT_EXEC;;12625\n");
*tmp___8 = (char)'r';
    }
    printf("\nSTMT_EXEC;;12627\n");
if (key->version)
    {
      printf("\nSTMT_EXEC;;12629\n");
tmp___9 = opts___1;
      printf("\nSTMT_EXEC;;12630\n");
opts___1++;
      printf("\nSTMT_EXEC;;12631\n");
*tmp___9 = (char)'V';
    }
    printf("\nSTMT_EXEC;;12633\n");
*opts___1 = (char)'\000';
    printf("\nSTMT_EXEC;;12634\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void key_warnings(struct keyfield const *gkey, _Bool gkey_only)
{
  printf("\nFUNC_CALL;key_warnings(const struct keyfield *,_Bool);\n");
printf("\nSTMT_EXEC;;12639\n");
struct keyfield const *key;
  printf("\nSTMT_EXEC;;12640\n");
struct keyfield ugkey;
  printf("\nSTMT_EXEC;;12641\n");
unsigned long keynum;
  printf("\nSTMT_EXEC;;12642\n");
size_t sword;
  printf("\nSTMT_EXEC;;12643\n");
size_t eword;
  printf("\nSTMT_EXEC;;12644\n");
char tmp[((sizeof(uintmax_t) * 8UL) * 146UL + 484UL) / 485UL + 1UL];
  printf("\nSTMT_EXEC;;12645\n");
char obuf[(((sizeof(sword) * 8UL) * 146UL + 484UL) / 485UL + 1UL) * 2UL + 4UL];
  printf("\nSTMT_EXEC;;12646\n");
char nbuf[(((sizeof(sword) * 8UL) * 146UL + 484UL) / 485UL + 1UL) * 2UL + 5UL];
  printf("\nSTMT_EXEC;;12647\n");
char *po;
  printf("\nSTMT_EXEC;;12648\n");
char *pn;
  printf("\nSTMT_EXEC;;12649\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;12650\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;12651\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;12652\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;12653\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;12654\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;12655\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;12656\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;12657\n");
char const *tmp___8;
  printf("\nSTMT_EXEC;;12658\n");
char const *tmp___9;
  printf("\nSTMT_EXEC;;12659\n");
char *tmp___10;
  printf("\nSTMT_EXEC;;12660\n");
char *tmp___11;
  printf("\nSTMT_EXEC;;12661\n");
_Bool implicit_skip;
  printf("\nSTMT_EXEC;;12662\n");
_Bool tmp___12;
  printf("\nSTMT_EXEC;;12663\n");
int tmp___13;
  printf("\nSTMT_EXEC;;12664\n");
_Bool maybe_space_aligned;
  printf("\nSTMT_EXEC;;12665\n");
_Bool tmp___14;
  printf("\nSTMT_EXEC;;12666\n");
int tmp___15;
  printf("\nSTMT_EXEC;;12667\n");
_Bool line_offset;
  printf("\nSTMT_EXEC;;12668\n");
int tmp___16;
  printf("\nSTMT_EXEC;;12669\n");
char *tmp___17;
  printf("\nSTMT_EXEC;;12670\n");
size_t sword___0;
  printf("\nSTMT_EXEC;;12671\n");
size_t eword___0;
  printf("\nSTMT_EXEC;;12672\n");
char *tmp___18;
  printf("\nSTMT_EXEC;;12673\n");
_Bool tmp___19;
  printf("\nSTMT_EXEC;;12674\n");
_Bool ugkey_reverse;
  printf("\nSTMT_EXEC;;12675\n");
char opts___1[sizeof(short_options)];
  printf("\nSTMT_EXEC;;12676\n");
size_t tmp___20;
  printf("\nSTMT_EXEC;;12677\n");
unsigned long tmp___21;
  printf("\nSTMT_EXEC;;12678\n");
char *tmp___22;
  printf("\nSTMT_EXEC;;12679\n");
_Bool tmp___23;
  printf("\nSTMT_EXEC;;12680\n");
char *tmp___24;
  {
    printf("\nSTMT_EXEC;;12682\n");
ugkey = (struct keyfield) * gkey;
    printf("\nSTMT_EXEC;;12683\n");
keynum = 1UL;
    printf("\nSTMT_EXEC;;12684\n");
key = (struct keyfield const *)keylist;
    printf("\nSTMT_EXEC;;12685\n");
while (1)
    {
      printf("\nSTMT_EXEC;;12687\n");
if (!key)
      {
        printf("\nSTMT_EXEC;;12689\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;12691\n");
if (key->obsolete_used)
      {
        printf("\nSTMT_EXEC;;12693\n");
sword = (size_t)key->sword;
        printf("\nSTMT_EXEC;;12694\n");
eword = (size_t)key->eword;
        printf("\nSTMT_EXEC;;12695\n");
po = obuf;
        printf("\nSTMT_EXEC;;12696\n");
pn = nbuf;
        printf("\nSTMT_EXEC;;12697\n");
if (sword == 0xffffffffffffffffUL)
        {
          printf("\nSTMT_EXEC;;12699\n");
sword++;
        }
        printf("\nSTMT_EXEC;;12701\n");
tmp___0 = umaxtostr(sword, tmp);
        printf("\nSTMT_EXEC;;12702\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
tmp___1 = stpcpy(po, "+");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;12703\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
po = stpcpy(tmp___1, (char const *)tmp___0);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;12704\n");
tmp___2 = umaxtostr(sword + 1UL, tmp);
        printf("\nSTMT_EXEC;;12705\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
tmp___3 = stpcpy(pn, "-k ");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;12706\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
pn = stpcpy(tmp___3, (char const *)tmp___2);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;12707\n");
if (key->eword != 0xffffffffffffffffUL)
        {
          printf("\nSTMT_EXEC;;12709\n");
tmp___4 = umaxtostr(eword + 1UL, tmp);
          printf("\nSTMT_EXEC;;12710\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
tmp___5 = stpcpy(po, " -");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12711\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
stpcpy(tmp___5, (char const *)tmp___4);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12712\n");
tmp___6 = umaxtostr((eword + 1UL) + (size_t)(key->echar == 0xffffffffffffffffUL), tmp);
          printf("\nSTMT_EXEC;;12713\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
tmp___7 = stpcpy(pn, ",");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12714\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
stpcpy(tmp___7, (char const *)tmp___6);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;12716\n");
tmp___8 = quote_n(1, (char const *)(nbuf));
        printf("\nSTMT_EXEC;;12717\n");
tmp___9 = quote_n(0, (char const *)(obuf));
        printf("\nSTMT_EXEC;;12718\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext("obsolescent key %s used; consider %s instead");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;12719\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___10, tmp___9, tmp___8);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;12721\n");
if (key->sword != 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;12723\n");
if (key->eword < key->sword)
        {
          printf("\nSTMT_EXEC;;12725\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___11 = gettext("key %lu has zero width and will be ignored");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;12726\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___11, keynum);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;12729\n");
tmp___12 = key_numeric(key);
      printf("\nSTMT_EXEC;;12730\n");
if (tmp___12)
      {
        printf("\nSTMT_EXEC;;12732\n");
tmp___13 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;12736\n");
if (key->month)
        {
          printf("\nSTMT_EXEC;;12738\n");
tmp___13 = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;12742\n");
tmp___13 = 0;
        }
      }
      printf("\nSTMT_EXEC;;12745\n");
implicit_skip = (_Bool)tmp___13;
      printf("\nSTMT_EXEC;;12746\n");
if (!hard_LC_COLLATE)
      {
        printf("\nSTMT_EXEC;;12748\n");
tmp___14 = default_key_compare(key);
        printf("\nSTMT_EXEC;;12749\n");
if (tmp___14)
        {
          printf("\nSTMT_EXEC;;12751\n");
if (key->schar)
          {
            printf("\nSTMT_EXEC;;12753\n");
tmp___15 = 0;
          }
          else
          {
            printf("\nSTMT_EXEC;;12757\n");
if (key->echar)
            {
              printf("\nSTMT_EXEC;;12759\n");
tmp___15 = 0;
            }
            else
            {
              printf("\nSTMT_EXEC;;12763\n");
tmp___15 = 1;
            }
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;12769\n");
tmp___15 = 0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;12774\n");
tmp___15 = 0;
      }
      printf("\nSTMT_EXEC;;12776\n");
maybe_space_aligned = (_Bool)tmp___15;
      printf("\nSTMT_EXEC;;12777\n");
if (key->eword == 0UL)
      {
        printf("\nSTMT_EXEC;;12779\n");
if (key->echar != 0UL)
        {
          printf("\nSTMT_EXEC;;12781\n");
tmp___16 = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;12785\n");
tmp___16 = 0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;12790\n");
tmp___16 = 0;
      }
      printf("\nSTMT_EXEC;;12792\n");
line_offset = (_Bool)tmp___16;
      printf("\nSTMT_EXEC;;12793\n");
if (!gkey_only)
      {
        printf("\nSTMT_EXEC;;12795\n");
if (tab == 128)
        {
          printf("\nSTMT_EXEC;;12797\n");
if (!line_offset)
          {
            printf("\nSTMT_EXEC;;12799\n");
if (!key->skipsblanks)
            {
              printf("\nSTMT_EXEC;;12801\n");
if (implicit_skip)
              {
                printf("\nSTMT_EXEC;;12803\n");
goto _L___0;
              }
              else
              {
                printf("\nSTMT_EXEC;;12807\n");
if (maybe_space_aligned)
                {
                  printf("\nSTMT_EXEC;;12809\n");
goto _L___0;
                }
                else
                {
                  printf("\nSTMT_EXEC;;12813\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___17 = gettext("leading blanks are significant in key "
                                     "%lu; consider also specifying \'b\'");printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;12815\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___17, keynum);printf("\nFUNC_RETURN;;\n");

                }
              }
            }
            else
            {
            _L___0:
              {
printf("\nSTMT_EXEC;;12822\n");
if (!key->skipsblanks)
              {
                printf("\nSTMT_EXEC;;12824\n");
if (key->schar)
                {
                  printf("\nSTMT_EXEC;;12826\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___17 = gettext("leading blanks are significant in key "
                                     "%lu; consider also specifying \'b\'");printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;12828\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___17, keynum);printf("\nFUNC_RETURN;;\n");

                }
                else
                {
                  printf("\nSTMT_EXEC;;12832\n");
goto _L;
                }
              }
              else
              {
              _L:
                {
printf("\nSTMT_EXEC;;12838\n");
if (!key->skipeblanks)
                {
                  printf("\nSTMT_EXEC;;12840\n");
if (key->echar)
                  {
                    printf("\nSTMT_EXEC;;12842\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___17 = gettext("leading blanks are significant in key "
                                       "%lu; consider also specifying \'b\'");printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;12844\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___17, keynum);printf("\nFUNC_RETURN;;\n");

                  }
                }
}

              }
}

            }
          }
        }
      }
      printf("\nSTMT_EXEC;;12852\n");
if (!gkey_only)
      {
        printf("\nSTMT_EXEC;;12854\n");
tmp___19 = key_numeric(key);
        printf("\nSTMT_EXEC;;12855\n");
if (tmp___19)
        {
          printf("\nSTMT_EXEC;;12857\n");
sword___0 = (size_t)(key->sword + 1UL);
          printf("\nSTMT_EXEC;;12858\n");
eword___0 = (size_t)(key->eword + 1UL);
          printf("\nSTMT_EXEC;;12859\n");
if (!sword___0)
          {
            printf("\nSTMT_EXEC;;12861\n");
sword___0++;
          }
          printf("\nSTMT_EXEC;;12863\n");
if (!eword___0)
          {
            printf("\nSTMT_EXEC;;12865\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___18 = gettext("key %lu is numeric and spans multiple fields");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;12866\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___18, keynum);printf("\nFUNC_RETURN;;\n");

          }
          else
          {
            printf("\nSTMT_EXEC;;12870\n");
if (sword___0 < eword___0)
            {
              printf("\nSTMT_EXEC;;12872\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___18 = gettext("key %lu is numeric and spans multiple fields");printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;12873\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___18, keynum);printf("\nFUNC_RETURN;;\n");

            }
          }
        }
      }
      printf("\nSTMT_EXEC;;12878\n");
if (ugkey.ignore)
      {
        printf("\nSTMT_EXEC;;12880\n");
if ((unsigned long)ugkey.ignore == (unsigned long)key->ignore)
        {
          printf("\nSTMT_EXEC;;12882\n");
ugkey.ignore = (_Bool const *)((void *)0);
        }
      }
      printf("\nSTMT_EXEC;;12885\n");
if (ugkey.translate)
      {
        printf("\nSTMT_EXEC;;12887\n");
if ((unsigned long)ugkey.translate == (unsigned long)key->translate)
        {
          printf("\nSTMT_EXEC;;12889\n");
ugkey.translate = (char const *)((void *)0);
        }
      }
      printf("\nSTMT_EXEC;;12892\n");
ugkey.skipsblanks = (_Bool)((int)ugkey.skipsblanks & !key->skipsblanks);
      printf("\nSTMT_EXEC;;12893\n");
ugkey.skipeblanks = (_Bool)((int)ugkey.skipeblanks & !key->skipeblanks);
      printf("\nSTMT_EXEC;;12894\n");
ugkey.month = (_Bool)((int)ugkey.month & !key->month);
      printf("\nSTMT_EXEC;;12895\n");
ugkey.numeric = (_Bool)((int)ugkey.numeric & !key->numeric);
      printf("\nSTMT_EXEC;;12896\n");
ugkey.general_numeric = (_Bool)((int)ugkey.general_numeric & !key->general_numeric);
      printf("\nSTMT_EXEC;;12897\n");
ugkey.human_numeric = (_Bool)((int)ugkey.human_numeric & !key->human_numeric);
      printf("\nSTMT_EXEC;;12898\n");
ugkey.random = (_Bool)((int)ugkey.random & !key->random);
      printf("\nSTMT_EXEC;;12899\n");
ugkey.version = (_Bool)((int)ugkey.version & !key->version);
      printf("\nSTMT_EXEC;;12900\n");
ugkey.reverse = (_Bool)((int)ugkey.reverse & !key->reverse);
      printf("\nSTMT_EXEC;;12901\n");
key = (struct keyfield const *)key->next;
      printf("\nSTMT_EXEC;;12902\n");
keynum++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;12905\n");
tmp___23 = default_key_compare((struct keyfield const *)(&ugkey));
}

    printf("\nSTMT_EXEC;;12906\n");
if (tmp___23)
    {
      printf("\nSTMT_EXEC;;12908\n");
if (ugkey.reverse)
      {
        printf("\nSTMT_EXEC;;12910\n");
if (stable)
        {
          printf("\nSTMT_EXEC;;12912\n");
goto _L___2;
        }
        else
        {
          printf("\nSTMT_EXEC;;12916\n");
if (unique)
          {
          _L___2:
            {
printf("\nSTMT_EXEC;;12919\n");
if (keylist)
            {
            _L___1:
              {
printf("\nSTMT_EXEC;;12922\n");
ugkey_reverse = ugkey.reverse;
}

              printf("\nSTMT_EXEC;;12923\n");
if (!stable)
              {
                printf("\nSTMT_EXEC;;12925\n");
if (!unique)
                {
                  printf("\nSTMT_EXEC;;12927\n");
ugkey.reverse = (_Bool)0;
                }
              }
              printf("\nSTMT_EXEC;;12930\n");
key_to_opts((struct keyfield const *)(&ugkey), opts___1);
              printf("\nSTMT_EXEC;;12931\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___20 = strlen((char const *)(opts___1));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;12932\n");
tmp___21 = select_plural(tmp___20);
              printf("\nSTMT_EXEC;;12933\n");
printf("\nFUNC_CALL;ngettext(const char *,const char *,unsigned long);\n");
tmp___22 = ngettext("option \'-%s\' is ignored", "options \'-%s\' are ignored", tmp___21);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;12934\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___22, opts___1);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;12935\n");
ugkey.reverse = ugkey_reverse;
            }
}

          }
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;12943\n");
goto _L___1;
    }
    printf("\nSTMT_EXEC;;12945\n");
if (ugkey.reverse)
    {
      printf("\nSTMT_EXEC;;12947\n");
if (!stable)
      {
        printf("\nSTMT_EXEC;;12949\n");
if (!unique)
        {
          printf("\nSTMT_EXEC;;12951\n");
if (keylist)
          {
            printf("\nSTMT_EXEC;;12953\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___24 = gettext("option \'-r\' only applies to last-resort comparison");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;12954\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___24);printf("\nFUNC_RETURN;;\n");

          }
        }
      }
    }
    printf("\nSTMT_EXEC;;12959\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static int keycompare(struct line const *a, struct line const *b)
{
  printf("\nFUNC_CALL;keycompare(const struct line *,const struct line *);\n");
printf("\nSTMT_EXEC;;12964\n");
struct keyfield *key;
  printf("\nSTMT_EXEC;;12965\n");
char *texta;
  printf("\nSTMT_EXEC;;12966\n");
char *textb;
  printf("\nSTMT_EXEC;;12967\n");
char *lima;
  printf("\nSTMT_EXEC;;12968\n");
char *limb;
  printf("\nSTMT_EXEC;;12969\n");
int diff;
  printf("\nSTMT_EXEC;;12970\n");
char const *translate;
  printf("\nSTMT_EXEC;;12971\n");
_Bool const *ignore;
  printf("\nSTMT_EXEC;;12972\n");
size_t lena;
  printf("\nSTMT_EXEC;;12973\n");
size_t lenb;
  printf("\nSTMT_EXEC;;12974\n");
char *ta;
  printf("\nSTMT_EXEC;;12975\n");
char *tb;
  printf("\nSTMT_EXEC;;12976\n");
size_t tlena;
  printf("\nSTMT_EXEC;;12977\n");
size_t tlenb;
  printf("\nSTMT_EXEC;;12978\n");
char enda;
  printf("\nSTMT_EXEC;;12979\n");
char endb;
  printf("\nSTMT_EXEC;;12980\n");
void *allocated;
  printf("\nSTMT_EXEC;;12981\n");
char stackbuf[4000];
  printf("\nSTMT_EXEC;;12982\n");
size_t i;
  printf("\nSTMT_EXEC;;12983\n");
size_t size;
  printf("\nSTMT_EXEC;;12984\n");
size_t tmp;
  printf("\nSTMT_EXEC;;12985\n");
unsigned char tmp___0;
  printf("\nSTMT_EXEC;;12986\n");
unsigned char tmp___1;
  printf("\nSTMT_EXEC;;12987\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;12988\n");
unsigned char tmp___3;
  printf("\nSTMT_EXEC;;12989\n");
unsigned char tmp___4;
  printf("\nSTMT_EXEC;;12990\n");
int tmp___5;
  printf("\nSTMT_EXEC;;12991\n");
int tmp___6;
  printf("\nSTMT_EXEC;;12992\n");
unsigned char tmp___7;
  printf("\nSTMT_EXEC;;12993\n");
unsigned char tmp___8;
  printf("\nSTMT_EXEC;;12994\n");
unsigned char tmp___9;
  printf("\nSTMT_EXEC;;12995\n");
unsigned char tmp___10;
  printf("\nSTMT_EXEC;;12996\n");
unsigned char tmp___11;
  printf("\nSTMT_EXEC;;12997\n");
unsigned char tmp___12;
  printf("\nSTMT_EXEC;;12998\n");
unsigned char tmp___13;
  printf("\nSTMT_EXEC;;12999\n");
unsigned char tmp___14;
  printf("\nSTMT_EXEC;;13000\n");
unsigned char tmp___15;
  printf("\nSTMT_EXEC;;13001\n");
unsigned char tmp___16;
  printf("\nSTMT_EXEC;;13002\n");
char *tmp___17;
  printf("\nSTMT_EXEC;;13003\n");
unsigned char tmp___18;
  printf("\nSTMT_EXEC;;13004\n");
unsigned char tmp___19;
  printf("\nSTMT_EXEC;;13005\n");
char *tmp___20;
  printf("\nSTMT_EXEC;;13006\n");
unsigned char tmp___21;
  printf("\nSTMT_EXEC;;13007\n");
unsigned char tmp___22;
  printf("\nSTMT_EXEC;;13008\n");
size_t tmp___23;
  printf("\nSTMT_EXEC;;13009\n");
_Bool tmp___24;
  printf("\nSTMT_EXEC;;13010\n");
unsigned char tmp___25;
  printf("\nSTMT_EXEC;;13011\n");
unsigned char tmp___26;
  printf("\nSTMT_EXEC;;13012\n");
int tmp___27;
  {
    printf("\nSTMT_EXEC;;13014\n");
key = keylist;
    printf("\nSTMT_EXEC;;13015\n");
texta = (char *)a->keybeg;
    printf("\nSTMT_EXEC;;13016\n");
textb = (char *)b->keybeg;
    printf("\nSTMT_EXEC;;13017\n");
lima = (char *)a->keylim;
    printf("\nSTMT_EXEC;;13018\n");
limb = (char *)b->keylim;
    printf("\nSTMT_EXEC;;13019\n");
while (1)
    {
      printf("\nSTMT_EXEC;;13021\n");
translate = key->translate;
      printf("\nSTMT_EXEC;;13022\n");
ignore = key->ignore;
      printf("\nSTMT_EXEC;;13023\n");
if ((unsigned long)texta > (unsigned long)lima)
      {
        printf("\nSTMT_EXEC;;13025\n");
lima = texta;
      }
      else
      {
        printf("\nSTMT_EXEC;;13029\n");
lima = lima;
      }
      printf("\nSTMT_EXEC;;13031\n");
if ((unsigned long)textb > (unsigned long)limb)
      {
        printf("\nSTMT_EXEC;;13033\n");
limb = textb;
      }
      else
      {
        printf("\nSTMT_EXEC;;13037\n");
limb = limb;
      }
      printf("\nSTMT_EXEC;;13039\n");
lena = (size_t)(lima - texta);
      printf("\nSTMT_EXEC;;13040\n");
lenb = (size_t)(limb - textb);
      printf("\nSTMT_EXEC;;13041\n");
if (hard_LC_COLLATE)
      {
        printf("\nSTMT_EXEC;;13043\n");
goto _L___2;
      }
      else
      {
        printf("\nSTMT_EXEC;;13047\n");
tmp___24 = key_numeric((struct keyfield const *)key);
        printf("\nSTMT_EXEC;;13048\n");
if (tmp___24)
        {
          printf("\nSTMT_EXEC;;13050\n");
goto _L___2;
        }
        else
        {
          printf("\nSTMT_EXEC;;13054\n");
if (key->month)
          {
            printf("\nSTMT_EXEC;;13056\n");
goto _L___2;
          }
          else
          {
            printf("\nSTMT_EXEC;;13060\n");
if (key->random)
            {
              printf("\nSTMT_EXEC;;13062\n");
goto _L___2;
            }
            else
            {
              printf("\nSTMT_EXEC;;13066\n");
if (key->version)
              {
              _L___2:
                {
printf("\nSTMT_EXEC;;13069\n");
if (ignore)
                {
                  printf("\nSTMT_EXEC;;13071\n");
goto _L___1;
                }
                else
                {
                  printf("\nSTMT_EXEC;;13075\n");
if (translate)
                  {
                  _L___1:
                    {
printf("\nSTMT_EXEC;;13078\n");
size = ((lena + 1UL) + lenb) + 1UL;
}

                    printf("\nSTMT_EXEC;;13079\n");
if (size <= sizeof(stackbuf))
                    {
                      printf("\nSTMT_EXEC;;13081\n");
ta = stackbuf;
                      printf("\nSTMT_EXEC;;13082\n");
allocated = (void *)0;
                    }
                    else
                    {
                      printf("\nSTMT_EXEC;;13086\n");
allocated = xmalloc(size);
                      printf("\nSTMT_EXEC;;13087\n");
ta = (char *)allocated;
                    }
                    printf("\nSTMT_EXEC;;13089\n");
tb = (ta + lena) + 1;
                    printf("\nSTMT_EXEC;;13090\n");
i = (size_t)0;
                    printf("\nSTMT_EXEC;;13091\n");
tlena = i;
                    printf("\nSTMT_EXEC;;13092\n");
while (1)
                    {
                      printf("\nSTMT_EXEC;;13094\n");
if (!(i < lena))
                      {
                        printf("\nSTMT_EXEC;;13096\n");
goto while_break___0;
                      }
                      printf("\nSTMT_EXEC;;13098\n");
if (ignore)
                      {
                        printf("\nSTMT_EXEC;;13100\n");
tmp___1 = to_uchar(*(texta + i));
                        printf("\nSTMT_EXEC;;13101\n");
if (!*(ignore + (int)tmp___1))
                        {
                          printf("\nSTMT_EXEC;;13103\n");
goto _L;
                        }
                      }
                      else
                      {
                      _L:
                        {
printf("\nSTMT_EXEC;;13109\n");
tmp = tlena;
}

                        printf("\nSTMT_EXEC;;13110\n");
tlena++;
                        printf("\nSTMT_EXEC;;13111\n");
if (translate)
                        {
                          printf("\nSTMT_EXEC;;13113\n");
tmp___0 = to_uchar(*(texta + i));
                          printf("\nSTMT_EXEC;;13114\n");
*(ta + tmp) = (char)*(translate + (int)tmp___0);
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;13118\n");
*(ta + tmp) = *(texta + i);
                        }
                      }
                      printf("\nSTMT_EXEC;;13121\n");
i++;
                    }
                  while_break___0:
                    {
printf("\nSTMT_EXEC;;13124\n");
*(ta + tlena) = (char)'\000';
}

                    printf("\nSTMT_EXEC;;13125\n");
i = (size_t)0;
                    printf("\nSTMT_EXEC;;13126\n");
tlenb = i;
                    printf("\nSTMT_EXEC;;13127\n");
while (1)
                    {
                      printf("\nSTMT_EXEC;;13129\n");
if (!(i < lenb))
                      {
                        printf("\nSTMT_EXEC;;13131\n");
goto while_break___1;
                      }
                      printf("\nSTMT_EXEC;;13133\n");
if (ignore)
                      {
                        printf("\nSTMT_EXEC;;13135\n");
tmp___4 = to_uchar(*(textb + i));
                        printf("\nSTMT_EXEC;;13136\n");
if (!*(ignore + (int)tmp___4))
                        {
                          printf("\nSTMT_EXEC;;13138\n");
goto _L___0;
                        }
                      }
                      else
                      {
                      _L___0:
                        {
printf("\nSTMT_EXEC;;13144\n");
tmp___2 = tlenb;
}

                        printf("\nSTMT_EXEC;;13145\n");
tlenb++;
                        printf("\nSTMT_EXEC;;13146\n");
if (translate)
                        {
                          printf("\nSTMT_EXEC;;13148\n");
tmp___3 = to_uchar(*(textb + i));
                          printf("\nSTMT_EXEC;;13149\n");
*(tb + tmp___2) = (char)*(translate + (int)tmp___3);
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;13153\n");
*(tb + tmp___2) = *(textb + i);
                        }
                      }
                      printf("\nSTMT_EXEC;;13156\n");
i++;
                    }
                  while_break___1:
                    {
printf("\nSTMT_EXEC;;13159\n");
*(tb + tlenb) = (char)'\000';
}

                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;13163\n");
ta = texta;
                    printf("\nSTMT_EXEC;;13164\n");
tlena = lena;
                    printf("\nSTMT_EXEC;;13165\n");
enda = *(ta + tlena);
                    printf("\nSTMT_EXEC;;13166\n");
*(ta + tlena) = (char)'\000';
                    printf("\nSTMT_EXEC;;13167\n");
tb = textb;
                    printf("\nSTMT_EXEC;;13168\n");
tlenb = lenb;
                    printf("\nSTMT_EXEC;;13169\n");
endb = *(tb + tlenb);
                    printf("\nSTMT_EXEC;;13170\n");
*(tb + tlenb) = (char)'\000';
                  }
                }
}

                printf("\nSTMT_EXEC;;13173\n");
if (key->numeric)
                {
                  printf("\nSTMT_EXEC;;13175\n");
diff = numcompare___3((char const *)ta, (char const *)tb);
                }
                else
                {
                  printf("\nSTMT_EXEC;;13179\n");
if (key->general_numeric)
                  {
                    printf("\nSTMT_EXEC;;13181\n");
diff = general_numcompare((char const *)ta, (char const *)tb);
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;13185\n");
if (key->human_numeric)
                    {
                      printf("\nSTMT_EXEC;;13187\n");
diff = human_numcompare((char const *)ta, (char const *)tb);
                    }
                    else
                    {
                      printf("\nSTMT_EXEC;;13191\n");
if (key->month)
                      {
                        printf("\nSTMT_EXEC;;13193\n");
tmp___5 = getmonth((char const *)ta, (char **)((void *)0));
                        printf("\nSTMT_EXEC;;13194\n");
tmp___6 = getmonth((char const *)tb, (char **)((void *)0));
                        printf("\nSTMT_EXEC;;13195\n");
diff = tmp___5 - tmp___6;
                      }
                      else
                      {
                        printf("\nSTMT_EXEC;;13199\n");
if (key->random)
                        {
                          printf("\nSTMT_EXEC;;13201\n");
diff = compare_random(ta, tlena, tb, tlenb);
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;13205\n");
if (key->version)
                          {
                            printf("\nSTMT_EXEC;;13207\n");
diff = filevercmp((char const *)ta, (char const *)tb);
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;13211\n");
if (tlena == 0UL)
                            {
                              printf("\nSTMT_EXEC;;13213\n");
diff = -(tlenb != 0UL);
                            }
                            else
                            {
                              printf("\nSTMT_EXEC;;13217\n");
if (tlenb == 0UL)
                              {
                                printf("\nSTMT_EXEC;;13219\n");
diff = 1;
                              }
                              else
                              {
                                printf("\nSTMT_EXEC;;13223\n");
diff = xmemcoll0((char const *)ta, tlena + 1UL, (char const *)tb, tlenb + 1UL);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                printf("\nSTMT_EXEC;;13232\n");
if (ignore)
                {
                  printf("\nSTMT_EXEC;;13234\n");
printf("\nFUNC_CALL;free(void *);\n");
free(allocated);printf("\nFUNC_RETURN;;\n");

                }
                else
                {
                  printf("\nSTMT_EXEC;;13238\n");
if (translate)
                  {
                    printf("\nSTMT_EXEC;;13240\n");
printf("\nFUNC_CALL;free(void *);\n");
free(allocated);printf("\nFUNC_RETURN;;\n");

                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;13244\n");
*(ta + tlena) = enda;
                    printf("\nSTMT_EXEC;;13245\n");
*(tb + tlenb) = endb;
                  }
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;13251\n");
if (ignore)
                {
                  printf("\nSTMT_EXEC;;13253\n");
if (translate)
                  {
                    printf("\nSTMT_EXEC;;13255\n");
while (1)
                    {
                      printf("\nSTMT_EXEC;;13257\n");
while (1)
                      {
                        printf("\nSTMT_EXEC;;13259\n");
while (1)
                        {
                          printf("\nSTMT_EXEC;;13261\n");
if ((unsigned long)texta < (unsigned long)lima)
                          {
                            printf("\nSTMT_EXEC;;13263\n");
tmp___7 = to_uchar(*texta);
                            printf("\nSTMT_EXEC;;13264\n");
if (!*(ignore + (int)tmp___7))
                            {
                              printf("\nSTMT_EXEC;;13266\n");
goto while_break___4;
                            }
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;13271\n");
goto while_break___4;
                          }
                          printf("\nSTMT_EXEC;;13273\n");
texta++;
                        }
                      while_break___4:;
                        printf("\nSTMT_EXEC;;13276\n");
while (1)
                        {
                          printf("\nSTMT_EXEC;;13278\n");
if ((unsigned long)textb < (unsigned long)limb)
                          {
                            printf("\nSTMT_EXEC;;13280\n");
tmp___8 = to_uchar(*textb);
                            printf("\nSTMT_EXEC;;13281\n");
if (!*(ignore + (int)tmp___8))
                            {
                              printf("\nSTMT_EXEC;;13283\n");
goto while_break___5;
                            }
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;13288\n");
goto while_break___5;
                          }
                          printf("\nSTMT_EXEC;;13290\n");
textb++;
                        }
                      while_break___5:;
                        printf("\nSTMT_EXEC;;13293\n");
if ((unsigned long)texta < (unsigned long)lima)
                        {
                          printf("\nSTMT_EXEC;;13295\n");
if (!((unsigned long)textb < (unsigned long)limb))
                          {
                            printf("\nSTMT_EXEC;;13297\n");
goto while_break___3;
                          }
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;13302\n");
goto while_break___3;
                        }
                        printf("\nSTMT_EXEC;;13304\n");
tmp___9 = to_uchar(*texta);
                        printf("\nSTMT_EXEC;;13305\n");
tmp___10 = to_uchar((char)*(translate + (int)tmp___9));
                        printf("\nSTMT_EXEC;;13306\n");
tmp___11 = to_uchar(*textb);
                        printf("\nSTMT_EXEC;;13307\n");
tmp___12 = to_uchar((char)*(translate + (int)tmp___11));
                        printf("\nSTMT_EXEC;;13308\n");
diff = (int)tmp___10 - (int)tmp___12;
                        printf("\nSTMT_EXEC;;13309\n");
if (diff)
                        {
                          printf("\nSTMT_EXEC;;13311\n");
goto not_equal;
                        }
                        printf("\nSTMT_EXEC;;13313\n");
texta++;
                        printf("\nSTMT_EXEC;;13314\n");
textb++;
                      }
                    while_break___3:
                      {
printf("\nSTMT_EXEC;;13317\n");
diff = ((unsigned long)texta < (unsigned long)lima) - ((unsigned long)textb < (unsigned long)limb);
}

                      printf("\nSTMT_EXEC;;13318\n");
goto while_break___2;
                    }
                  while_break___2:;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;13324\n");
while (1)
                    {
                      printf("\nSTMT_EXEC;;13326\n");
while (1)
                      {
                        printf("\nSTMT_EXEC;;13328\n");
while (1)
                        {
                          printf("\nSTMT_EXEC;;13330\n");
if ((unsigned long)texta < (unsigned long)lima)
                          {
                            printf("\nSTMT_EXEC;;13332\n");
tmp___13 = to_uchar(*texta);
                            printf("\nSTMT_EXEC;;13333\n");
if (!*(ignore + (int)tmp___13))
                            {
                              printf("\nSTMT_EXEC;;13335\n");
goto while_break___8;
                            }
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;13340\n");
goto while_break___8;
                          }
                          printf("\nSTMT_EXEC;;13342\n");
texta++;
                        }
                      while_break___8:;
                        printf("\nSTMT_EXEC;;13345\n");
while (1)
                        {
                          printf("\nSTMT_EXEC;;13347\n");
if ((unsigned long)textb < (unsigned long)limb)
                          {
                            printf("\nSTMT_EXEC;;13349\n");
tmp___14 = to_uchar(*textb);
                            printf("\nSTMT_EXEC;;13350\n");
if (!*(ignore + (int)tmp___14))
                            {
                              printf("\nSTMT_EXEC;;13352\n");
goto while_break___9;
                            }
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;13357\n");
goto while_break___9;
                          }
                          printf("\nSTMT_EXEC;;13359\n");
textb++;
                        }
                      while_break___9:;
                        printf("\nSTMT_EXEC;;13362\n");
if ((unsigned long)texta < (unsigned long)lima)
                        {
                          printf("\nSTMT_EXEC;;13364\n");
if (!((unsigned long)textb < (unsigned long)limb))
                          {
                            printf("\nSTMT_EXEC;;13366\n");
goto while_break___7;
                          }
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;13371\n");
goto while_break___7;
                        }
                        printf("\nSTMT_EXEC;;13373\n");
tmp___15 = to_uchar(*texta);
                        printf("\nSTMT_EXEC;;13374\n");
tmp___16 = to_uchar(*textb);
                        printf("\nSTMT_EXEC;;13375\n");
diff = (int)tmp___15 - (int)tmp___16;
                        printf("\nSTMT_EXEC;;13376\n");
if (diff)
                        {
                          printf("\nSTMT_EXEC;;13378\n");
goto not_equal;
                        }
                        printf("\nSTMT_EXEC;;13380\n");
texta++;
                        printf("\nSTMT_EXEC;;13381\n");
textb++;
                      }
                    while_break___7:
                      {
printf("\nSTMT_EXEC;;13384\n");
diff = ((unsigned long)texta < (unsigned long)lima) - ((unsigned long)textb < (unsigned long)limb);
}

                      printf("\nSTMT_EXEC;;13385\n");
goto while_break___6;
                    }
                  while_break___6:;
                  }
                }
                else
                {
                  printf("\nSTMT_EXEC;;13392\n");
if (lena == 0UL)
                  {
                    printf("\nSTMT_EXEC;;13394\n");
diff = -(lenb != 0UL);
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;13398\n");
if (lenb == 0UL)
                    {
                      printf("\nSTMT_EXEC;;13400\n");
goto greater;
                    }
                    else
                    {
                      printf("\nSTMT_EXEC;;13404\n");
if (translate)
                      {
                        printf("\nSTMT_EXEC;;13406\n");
while (1)
                        {
                          printf("\nSTMT_EXEC;;13408\n");
if ((unsigned long)texta < (unsigned long)lima)
                          {
                            printf("\nSTMT_EXEC;;13410\n");
if (!((unsigned long)textb < (unsigned long)limb))
                            {
                              printf("\nSTMT_EXEC;;13412\n");
goto while_break___10;
                            }
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;13417\n");
goto while_break___10;
                          }
                          printf("\nSTMT_EXEC;;13419\n");
tmp___17 = texta;
                          printf("\nSTMT_EXEC;;13420\n");
texta++;
                          printf("\nSTMT_EXEC;;13421\n");
tmp___18 = to_uchar(*tmp___17);
                          printf("\nSTMT_EXEC;;13422\n");
tmp___19 = to_uchar((char)*(translate + (int)tmp___18));
                          printf("\nSTMT_EXEC;;13423\n");
tmp___20 = textb;
                          printf("\nSTMT_EXEC;;13424\n");
textb++;
                          printf("\nSTMT_EXEC;;13425\n");
tmp___21 = to_uchar(*tmp___20);
                          printf("\nSTMT_EXEC;;13426\n");
tmp___22 = to_uchar((char)*(translate + (int)tmp___21));
                          printf("\nSTMT_EXEC;;13427\n");
diff = (int)tmp___19 - (int)tmp___22;
                          printf("\nSTMT_EXEC;;13428\n");
if (diff)
                          {
                            printf("\nSTMT_EXEC;;13430\n");
goto not_equal;
                          }
                        }
                      while_break___10:;
                      }
                      else
                      {
                        printf("\nSTMT_EXEC;;13437\n");
if (lena < lenb)
                        {
                          printf("\nSTMT_EXEC;;13439\n");
tmp___23 = lena;
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;13443\n");
tmp___23 = lenb;
                        }
                        printf("\nSTMT_EXEC;;13445\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
diff = memcmp((void const *)texta, (void const *)textb, tmp___23);printf("\nFUNC_RETURN;;\n");

                        printf("\nSTMT_EXEC;;13446\n");
if (diff)
                        {
                          printf("\nSTMT_EXEC;;13448\n");
goto not_equal;
                        }
                      }
                      printf("\nSTMT_EXEC;;13451\n");
if (lena < lenb)
                      {
                        printf("\nSTMT_EXEC;;13453\n");
diff = -1;
                      }
                      else
                      {
                        printf("\nSTMT_EXEC;;13457\n");
diff = lena != lenb;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;13467\n");
if (diff)
      {
        printf("\nSTMT_EXEC;;13469\n");
goto not_equal;
      }
      printf("\nSTMT_EXEC;;13471\n");
key = key->next;
      printf("\nSTMT_EXEC;;13472\n");
if (!key)
      {
        printf("\nSTMT_EXEC;;13474\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;13476\n");
if (key->eword != 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;13478\n");
lima = limfield(a, (struct keyfield const *)key);
        printf("\nSTMT_EXEC;;13479\n");
limb = limfield(b, (struct keyfield const *)key);
      }
      else
      {
        printf("\nSTMT_EXEC;;13483\n");
lima = (char *)((a->text + a->length) - 1);
        printf("\nSTMT_EXEC;;13484\n");
limb = (char *)((b->text + b->length) - 1);
      }
      printf("\nSTMT_EXEC;;13486\n");
if (key->sword != 0xffffffffffffffffUL)
      {
        printf("\nSTMT_EXEC;;13488\n");
texta = begfield(a, (struct keyfield const *)key);
        printf("\nSTMT_EXEC;;13489\n");
textb = begfield(b, (struct keyfield const *)key);
      }
      else
      {
        printf("\nSTMT_EXEC;;13493\n");
texta = (char *)a->text;
        printf("\nSTMT_EXEC;;13494\n");
textb = (char *)b->text;
        printf("\nSTMT_EXEC;;13495\n");
if (key->skipsblanks)
        {
          printf("\nSTMT_EXEC;;13497\n");
while (1)
          {
            printf("\nSTMT_EXEC;;13499\n");
if ((unsigned long)texta < (unsigned long)lima)
            {
              printf("\nSTMT_EXEC;;13501\n");
tmp___25 = to_uchar(*texta);
              printf("\nSTMT_EXEC;;13502\n");
if (!blanks[tmp___25])
              {
                printf("\nSTMT_EXEC;;13504\n");
goto while_break___11;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;13509\n");
goto while_break___11;
            }
            printf("\nSTMT_EXEC;;13511\n");
texta++;
          }
        while_break___11:;
          printf("\nSTMT_EXEC;;13514\n");
while (1)
          {
            printf("\nSTMT_EXEC;;13516\n");
if ((unsigned long)textb < (unsigned long)limb)
            {
              printf("\nSTMT_EXEC;;13518\n");
tmp___26 = to_uchar(*textb);
              printf("\nSTMT_EXEC;;13519\n");
if (!blanks[tmp___26])
              {
                printf("\nSTMT_EXEC;;13521\n");
goto while_break___12;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;13526\n");
goto while_break___12;
            }
            printf("\nSTMT_EXEC;;13528\n");
textb++;
          }
        while_break___12:;
        }
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;13535\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  greater:
    {
printf("\nSTMT_EXEC;;13537\n");
diff = 1;
}

  not_equal:
    {
printf("\nSTMT_EXEC;;13539\n");
if (key->reverse)
    {
      printf("\nSTMT_EXEC;;13541\n");
tmp___27 = -diff;
    }
    else
    {
      printf("\nSTMT_EXEC;;13545\n");
tmp___27 = diff;
    }
}

    printf("\nSTMT_EXEC;;13547\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___27);
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
    printf("\nSTMT_EXEC;;13558\n");
if (keylist)
    {
      printf("\nSTMT_EXEC;;13560\n");
diff = keycompare(a, b);
      printf("\nSTMT_EXEC;;13561\n");
if (diff)
      {
        printf("\nSTMT_EXEC;;13563\n");
printf("\nFUNC_RETURN;;\n");
return (diff);
      }
      else
      {
        printf("\nSTMT_EXEC;;13567\n");
if (unique)
        {
          printf("\nSTMT_EXEC;;13569\n");
printf("\nFUNC_RETURN;;\n");
return (diff);
        }
        else
        {
          printf("\nSTMT_EXEC;;13573\n");
if (stable)
          {
            printf("\nSTMT_EXEC;;13575\n");
printf("\nFUNC_RETURN;;\n");
return (diff);
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;13580\n");
alen = (size_t)(a->length - 1UL);
    printf("\nSTMT_EXEC;;13581\n");
blen = (size_t)(b->length - 1UL);
    printf("\nSTMT_EXEC;;13582\n");
if (alen == 0UL)
    {
      printf("\nSTMT_EXEC;;13584\n");
diff = -(blen != 0UL);
    }
    else
    {
      printf("\nSTMT_EXEC;;13588\n");
if (blen == 0UL)
      {
        printf("\nSTMT_EXEC;;13590\n");
diff = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;13594\n");
if (hard_LC_COLLATE)
        {
          printf("\nSTMT_EXEC;;13596\n");
diff = xmemcoll0((char const *)a->text, alen + 1UL, (char const *)b->text, blen + 1UL);
        }
        else
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
  printf("\nSTMT_EXEC;;13638\n");
char *ebuf;
  printf("\nSTMT_EXEC;;13639\n");
char const *c;
  printf("\nSTMT_EXEC;;13640\n");
char wc;
  printf("\nSTMT_EXEC;;13641\n");
char const *tmp;
  printf("\nSTMT_EXEC;;13642\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;13643\n");
int tmp___1;
  printf("\nSTMT_EXEC;;13644\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;13645\n");
size_t tmp___3;
  {
    printf("\nSTMT_EXEC;;13647\n");
buf___1 = (char *)line->text;
    printf("\nSTMT_EXEC;;13648\n");
n_bytes = (size_t)line->length;
    printf("\nSTMT_EXEC;;13649\n");
ebuf = buf___1 + n_bytes;
    printf("\nSTMT_EXEC;;13650\n");
if (!output_file)
    {
      printf("\nSTMT_EXEC;;13652\n");
if (debug)
      {
        printf("\nSTMT_EXEC;;13654\n");
c = (char const *)buf___1;
        printf("\nSTMT_EXEC;;13655\n");
while (1)
        {
          printf("\nSTMT_EXEC;;13657\n");
if (!((unsigned long)c < (unsigned long)ebuf))
          {
            printf("\nSTMT_EXEC;;13659\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;13661\n");
tmp = c;
          printf("\nSTMT_EXEC;;13662\n");
c++;
          printf("\nSTMT_EXEC;;13663\n");
wc = (char)*tmp;
          printf("\nSTMT_EXEC;;13664\n");
if ((int)wc == 9)
          {
            printf("\nSTMT_EXEC;;13666\n");
wc = (char)'>';
          }
          else
          {
            printf("\nSTMT_EXEC;;13670\n");
if ((unsigned long)c == (unsigned long)ebuf)
            {
              printf("\nSTMT_EXEC;;13672\n");
wc = (char)'\n';
            }
          }
          printf("\nSTMT_EXEC;;13675\n");
printf("\nFUNC_CALL;fputc_unlocked(int,FILE *);\n");
tmp___1 = fputc_unlocked((int)wc, fp);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;13676\n");
if (tmp___1 == -1)
          {
            printf("\nSTMT_EXEC;;13678\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("write failed");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;13679\n");
die((char const *)tmp___0, output_file);
          }
        }
      while_break:
        {
printf("\nSTMT_EXEC;;13683\n");
debug_line(line);
}

      }
      else
      {
        printf("\nSTMT_EXEC;;13687\n");
goto _L;
      }
    }
    else
    {
    _L:
      {
printf("\nSTMT_EXEC;;13693\n");
*(ebuf + -1) = eolchar;
}

      printf("\nSTMT_EXEC;;13694\n");
printf("\nFUNC_CALL;fwrite_unlocked(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
tmp___3 = fwrite_unlocked((void const *)buf___1, (size_t)1, n_bytes, fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;13695\n");
if (tmp___3 != n_bytes)
      {
        printf("\nSTMT_EXEC;;13697\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("write failed");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;13698\n");
die((char const *)tmp___2, output_file);
      }
      printf("\nSTMT_EXEC;;13700\n");
*(ebuf + -1) = (char)'\000';
    }
    printf("\nSTMT_EXEC;;13702\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool check(char const *file_name___3, char checkonly)
{
  printf("\nFUNC_CALL;check(const char *,char);\n");
printf("\nSTMT_EXEC;;13707\n");
FILE *fp;
  printf("\nSTMT_EXEC;;13708\n");
FILE *tmp;
  printf("\nSTMT_EXEC;;13709\n");
struct buffer buf___1;
  printf("\nSTMT_EXEC;;13710\n");
struct line temp;
  printf("\nSTMT_EXEC;;13711\n");
size_t alloc;
  printf("\nSTMT_EXEC;;13712\n");
uintmax_t line_number;
  printf("\nSTMT_EXEC;;13713\n");
struct keyfield const *key;
  printf("\nSTMT_EXEC;;13714\n");
_Bool nonunique;
  printf("\nSTMT_EXEC;;13715\n");
_Bool ordered;
  printf("\nSTMT_EXEC;;13716\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;13717\n");
struct line const *line;
  printf("\nSTMT_EXEC;;13718\n");
struct line const *tmp___1;
  printf("\nSTMT_EXEC;;13719\n");
struct line const *linebase;
  printf("\nSTMT_EXEC;;13720\n");
struct line const *disorder_line;
  printf("\nSTMT_EXEC;;13721\n");
uintmax_t disorder_line_number;
  printf("\nSTMT_EXEC;;13722\n");
struct line *tmp___2;
  printf("\nSTMT_EXEC;;13723\n");
char hr_buf[((sizeof(disorder_line_number) * 8UL) * 146UL + 484UL) / 485UL + 1UL];
  printf("\nSTMT_EXEC;;13724\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;13725\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;13726\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;13727\n");
int tmp___6;
  printf("\nSTMT_EXEC;;13728\n");
int tmp___7;
  printf("\nSTMT_EXEC;;13729\n");
_Bool tmp___8;
  {
    printf("\nSTMT_EXEC;;13731\n");
tmp = xfopen(file_name___3, "r");
    printf("\nSTMT_EXEC;;13732\n");
fp = tmp;
    printf("\nSTMT_EXEC;;13733\n");
alloc = (size_t)0;
    printf("\nSTMT_EXEC;;13734\n");
line_number = (uintmax_t)0;
    printf("\nSTMT_EXEC;;13735\n");
key = (struct keyfield const *)keylist;
    printf("\nSTMT_EXEC;;13736\n");
nonunique = (_Bool)(!unique);
    printf("\nSTMT_EXEC;;13737\n");
ordered = (_Bool)1;
    printf("\nSTMT_EXEC;;13738\n");
if (merge_buffer_size > sort_size)
    {
      printf("\nSTMT_EXEC;;13740\n");
tmp___0 = merge_buffer_size;
    }
    else
    {
      printf("\nSTMT_EXEC;;13744\n");
tmp___0 = sort_size;
    }
    printf("\nSTMT_EXEC;;13746\n");
initbuf(&buf___1, sizeof(struct line), tmp___0);
    printf("\nSTMT_EXEC;;13747\n");
temp.text = (char *)((void *)0);
    printf("\nSTMT_EXEC;;13748\n");
while (1)
    {
      printf("\nSTMT_EXEC;;13750\n");
tmp___8 = fillbuf___7(&buf___1, fp, file_name___3);
      printf("\nSTMT_EXEC;;13751\n");
if (!tmp___8)
      {
        printf("\nSTMT_EXEC;;13753\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;13755\n");
tmp___1 = (struct line const *)buffer_linelim((struct buffer const *)(&buf___1));
      printf("\nSTMT_EXEC;;13756\n");
line = tmp___1;
      printf("\nSTMT_EXEC;;13757\n");
linebase = line - buf___1.nlines;
      printf("\nSTMT_EXEC;;13758\n");
if (alloc)
      {
        printf("\nSTMT_EXEC;;13760\n");
tmp___6 = compare((struct line const *)(&temp), line - 1);
        printf("\nSTMT_EXEC;;13761\n");
if ((int)nonunique <= tmp___6)
        {
        found_disorder:
          {
printf("\nSTMT_EXEC;;13764\n");
if ((int)checkonly == 99)
          {
            printf("\nSTMT_EXEC;;13766\n");
disorder_line = line - 1;
            printf("\nSTMT_EXEC;;13767\n");
tmp___2 = buffer_linelim((struct buffer const *)(&buf___1));
            printf("\nSTMT_EXEC;;13768\n");
disorder_line_number = (uintmax_t)(tmp___2 - (struct line *)disorder_line) + line_number;
            printf("\nSTMT_EXEC;;13769\n");
tmp___3 = umaxtostr(disorder_line_number, hr_buf);
            printf("\nSTMT_EXEC;;13770\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("%s: %s:%s: disorder: ");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;13771\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, (char const *)tmp___4, program_name, file_name___3, tmp___3);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;13772\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 = gettext("standard error");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;13773\n");
write_line(disorder_line, stderr, (char const *)tmp___5);
          }
}

          printf("\nSTMT_EXEC;;13775\n");
ordered = (_Bool)0;
          printf("\nSTMT_EXEC;;13776\n");
goto while_break;
        }
      }
      printf("\nSTMT_EXEC;;13779\n");
while (1)
      {
        printf("\nSTMT_EXEC;;13781\n");
line--;
        printf("\nSTMT_EXEC;;13782\n");
if (!((unsigned long)linebase < (unsigned long)line))
        {
          printf("\nSTMT_EXEC;;13784\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;13786\n");
tmp___7 = compare(line, line - 1);
        printf("\nSTMT_EXEC;;13787\n");
if ((int)nonunique <= tmp___7)
        {
          printf("\nSTMT_EXEC;;13789\n");
goto found_disorder;
        }
      }
    while_break___0:
      {
printf("\nSTMT_EXEC;;13793\n");
line_number += buf___1.nlines;
}

      printf("\nSTMT_EXEC;;13794\n");
if (alloc < (size_t)line->length)
      {
        printf("\nSTMT_EXEC;;13796\n");
while (1)
        {
          printf("\nSTMT_EXEC;;13798\n");
alloc *= 2UL;
          printf("\nSTMT_EXEC;;13799\n");
if (!alloc)
          {
            printf("\nSTMT_EXEC;;13801\n");
alloc = (size_t)line->length;
            printf("\nSTMT_EXEC;;13802\n");
goto while_break___1;
          }
          printf("\nSTMT_EXEC;;13804\n");
if (!(alloc < (size_t)line->length))
          {
            printf("\nSTMT_EXEC;;13806\n");
goto while_break___1;
          }
        }
      while_break___1:
        {
printf("\nSTMT_EXEC;;13810\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)temp.text);printf("\nFUNC_RETURN;;\n");

}

        printf("\nSTMT_EXEC;;13811\n");
temp.text = (char *)xmalloc(alloc);
      }
      printf("\nSTMT_EXEC;;13813\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)temp.text, (void const *)line->text, (size_t)line->length);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;13814\n");
temp.length = (size_t)line->length;
      printf("\nSTMT_EXEC;;13815\n");
if (key)
      {
        printf("\nSTMT_EXEC;;13817\n");
temp.keybeg = temp.text + (line->keybeg - line->text);
        printf("\nSTMT_EXEC;;13818\n");
temp.keylim = temp.text + (line->keylim - line->text);
      }
    }
  while_break:
    {
printf("\nSTMT_EXEC;;13822\n");
xfclose(fp, file_name___3);
}

    printf("\nSTMT_EXEC;;13823\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)buf___1.buf);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;13824\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)temp.text);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;13825\n");
printf("\nFUNC_RETURN;;\n");
return (ordered);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t open_input_files(struct sortfile *files, size_t nfiles, FILE ***pfps)
{
  printf("\nFUNC_CALL;open_input_files(struct sortfile *,size_t,FILE ***);\n");
printf("\nSTMT_EXEC;;13830\n");
FILE **fps;
  printf("\nSTMT_EXEC;;13831\n");
FILE **tmp;
  printf("\nSTMT_EXEC;;13832\n");
int i;
  printf("\nSTMT_EXEC;;13833\n");
FILE *tmp___0;
  printf("\nSTMT_EXEC;;13834\n");
FILE *tmp___1;
  {
    printf("\nSTMT_EXEC;;13836\n");
tmp = (FILE **)xnmalloc(nfiles, sizeof(*fps));
    printf("\nSTMT_EXEC;;13837\n");
*pfps = tmp;
    printf("\nSTMT_EXEC;;13838\n");
fps = tmp;
    printf("\nSTMT_EXEC;;13839\n");
i = 0;
    printf("\nSTMT_EXEC;;13840\n");
while (1)
    {
      printf("\nSTMT_EXEC;;13842\n");
if (!((size_t)i < nfiles))
      {
        printf("\nSTMT_EXEC;;13844\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;13846\n");
if ((files + i)->temp)
      {
        printf("\nSTMT_EXEC;;13848\n");
if ((int)((files + i)->temp)->state != 0)
        {
          printf("\nSTMT_EXEC;;13850\n");
tmp___0 = open_temp((files + i)->temp);
          printf("\nSTMT_EXEC;;13851\n");
*(fps + i) = tmp___0;
        }
        else
        {
          printf("\nSTMT_EXEC;;13855\n");
tmp___1 = stream_open((files + i)->name, "r");
          printf("\nSTMT_EXEC;;13856\n");
*(fps + i) = tmp___1;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;13861\n");
tmp___1 = stream_open((files + i)->name, "r");
        printf("\nSTMT_EXEC;;13862\n");
*(fps + i) = tmp___1;
      }
      printf("\nSTMT_EXEC;;13864\n");
if (!*(fps + i))
      {
        printf("\nSTMT_EXEC;;13866\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;13868\n");
i++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;13871\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)i);
  }
printf("\nFUNC_RETURN;;\n");
}
static void mergefps(struct sortfile *files, size_t ntemps, size_t nfiles, FILE *ofp, char const *output_file, FILE **fps)
{
  printf("\nFUNC_CALL;mergefps(struct sortfile *,size_t,size_t,FILE *,const char *,FILE **);\n");
printf("\nSTMT_EXEC;;13876\n");
struct buffer *buffer;
  printf("\nSTMT_EXEC;;13877\n");
struct buffer *tmp;
  printf("\nSTMT_EXEC;;13878\n");
struct line saved___0;
  printf("\nSTMT_EXEC;;13879\n");
struct line const *savedline;
  printf("\nSTMT_EXEC;;13880\n");
size_t savealloc;
  printf("\nSTMT_EXEC;;13881\n");
struct line const **cur;
  printf("\nSTMT_EXEC;;13882\n");
struct line const **tmp___0;
  printf("\nSTMT_EXEC;;13883\n");
struct line const **base;
  printf("\nSTMT_EXEC;;13884\n");
struct line const **tmp___1;
  printf("\nSTMT_EXEC;;13885\n");
size_t *ord;
  printf("\nSTMT_EXEC;;13886\n");
size_t *tmp___2;
  printf("\nSTMT_EXEC;;13887\n");
size_t i;
  printf("\nSTMT_EXEC;;13888\n");
size_t j;
  printf("\nSTMT_EXEC;;13889\n");
size_t t;
  printf("\nSTMT_EXEC;;13890\n");
struct keyfield const *key;
  printf("\nSTMT_EXEC;;13891\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;13892\n");
struct line const *linelim;
  printf("\nSTMT_EXEC;;13893\n");
struct line const *tmp___4;
  printf("\nSTMT_EXEC;;13894\n");
_Bool tmp___5;
  printf("\nSTMT_EXEC;;13895\n");
int tmp___6;
  printf("\nSTMT_EXEC;;13896\n");
struct line const *smallest;
  printf("\nSTMT_EXEC;;13897\n");
int tmp___7;
  printf("\nSTMT_EXEC;;13898\n");
struct line const *linelim___0;
  printf("\nSTMT_EXEC;;13899\n");
struct line const *tmp___8;
  printf("\nSTMT_EXEC;;13900\n");
_Bool tmp___9;
  printf("\nSTMT_EXEC;;13901\n");
size_t lo;
  printf("\nSTMT_EXEC;;13902\n");
size_t hi;
  printf("\nSTMT_EXEC;;13903\n");
size_t probe;
  printf("\nSTMT_EXEC;;13904\n");
size_t ord0;
  printf("\nSTMT_EXEC;;13905\n");
size_t count_of_smaller_lines;
  printf("\nSTMT_EXEC;;13906\n");
int cmp;
  printf("\nSTMT_EXEC;;13907\n");
int tmp___10;
  {
    printf("\nSTMT_EXEC;;13909\n");
tmp = (struct buffer *)xnmalloc(nfiles, sizeof(*buffer));
    printf("\nSTMT_EXEC;;13910\n");
buffer = tmp;
    printf("\nSTMT_EXEC;;13911\n");
savedline = (struct line const *)((void *)0);
    printf("\nSTMT_EXEC;;13912\n");
savealloc = (size_t)0;
    printf("\nSTMT_EXEC;;13913\n");
tmp___0 = (struct line const **)xnmalloc(nfiles, sizeof(*cur));
    printf("\nSTMT_EXEC;;13914\n");
cur = tmp___0;
    printf("\nSTMT_EXEC;;13915\n");
tmp___1 = (struct line const **)xnmalloc(nfiles, sizeof(*base));
    printf("\nSTMT_EXEC;;13916\n");
base = tmp___1;
    printf("\nSTMT_EXEC;;13917\n");
tmp___2 = (size_t *)xnmalloc(nfiles, sizeof(*ord));
    printf("\nSTMT_EXEC;;13918\n");
ord = tmp___2;
    printf("\nSTMT_EXEC;;13919\n");
key = (struct keyfield const *)keylist;
    printf("\nSTMT_EXEC;;13920\n");
saved___0.text = (char *)((void *)0);
    printf("\nSTMT_EXEC;;13921\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;13922\n");
while (1)
    {
      printf("\nSTMT_EXEC;;13924\n");
if (!(i < nfiles))
      {
        printf("\nSTMT_EXEC;;13926\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;13928\n");
if (merge_buffer_size > sort_size / nfiles)
      {
        printf("\nSTMT_EXEC;;13930\n");
tmp___3 = merge_buffer_size;
      }
      else
      {
        printf("\nSTMT_EXEC;;13934\n");
tmp___3 = sort_size / nfiles;
      }
      printf("\nSTMT_EXEC;;13936\n");
initbuf(buffer + i, sizeof(struct line), tmp___3);
      printf("\nSTMT_EXEC;;13937\n");
tmp___5 = fillbuf___7(buffer + i, *(fps + i), (files + i)->name);
      printf("\nSTMT_EXEC;;13938\n");
if (tmp___5)
      {
        printf("\nSTMT_EXEC;;13940\n");
tmp___4 = (struct line const *)buffer_linelim((struct buffer const *)(buffer + i));
        printf("\nSTMT_EXEC;;13941\n");
linelim = tmp___4;
        printf("\nSTMT_EXEC;;13942\n");
*(cur + i) = linelim - 1;
        printf("\nSTMT_EXEC;;13943\n");
*(base + i) = linelim - (buffer + i)->nlines;
        printf("\nSTMT_EXEC;;13944\n");
i++;
      }
      else
      {
        printf("\nSTMT_EXEC;;13948\n");
xfclose(*(fps + i), (files + i)->name);
        printf("\nSTMT_EXEC;;13949\n");
if (i < ntemps)
        {
          printf("\nSTMT_EXEC;;13951\n");
ntemps--;
          printf("\nSTMT_EXEC;;13952\n");
zaptemp((files + i)->name);
        }
        printf("\nSTMT_EXEC;;13954\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)(buffer + i)->buf);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;13955\n");
nfiles--;
        printf("\nSTMT_EXEC;;13956\n");
j = i;
        printf("\nSTMT_EXEC;;13957\n");
while (1)
        {
          printf("\nSTMT_EXEC;;13959\n");
if (!(j < nfiles))
          {
            printf("\nSTMT_EXEC;;13961\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;13963\n");
*(files + j) = *(files + (j + 1UL));
          printf("\nSTMT_EXEC;;13964\n");
*(fps + j) = *(fps + (j + 1UL));
          printf("\nSTMT_EXEC;;13965\n");
j++;
        }
      while_break___0:;
      }
    }
  while_break:
    {
printf("\nSTMT_EXEC;;13971\n");
i = (size_t)0;
}

    printf("\nSTMT_EXEC;;13972\n");
while (1)
    {
      printf("\nSTMT_EXEC;;13974\n");
if (!(i < nfiles))
      {
        printf("\nSTMT_EXEC;;13976\n");
goto while_break___1;
      }
      printf("\nSTMT_EXEC;;13978\n");
*(ord + i) = i;
      printf("\nSTMT_EXEC;;13979\n");
i++;
    }
  while_break___1:
    {
printf("\nSTMT_EXEC;;13982\n");
i = (size_t)1;
}

    printf("\nSTMT_EXEC;;13983\n");
while (1)
    {
      printf("\nSTMT_EXEC;;13985\n");
if (!(i < nfiles))
      {
        printf("\nSTMT_EXEC;;13987\n");
goto while_break___2;
      }
      printf("\nSTMT_EXEC;;13989\n");
tmp___6 = compare(*(cur + *(ord + (i - 1UL))), *(cur + *(ord + i)));
      printf("\nSTMT_EXEC;;13990\n");
if (0 < tmp___6)
      {
        printf("\nSTMT_EXEC;;13992\n");
t = *(ord + (i - 1UL));
        printf("\nSTMT_EXEC;;13993\n");
*(ord + (i - 1UL)) = *(ord + i);
        printf("\nSTMT_EXEC;;13994\n");
*(ord + i) = t;
        printf("\nSTMT_EXEC;;13995\n");
i = (size_t)0;
      }
      printf("\nSTMT_EXEC;;13997\n");
i++;
    }
  while_break___2:;
    printf("\nSTMT_EXEC;;14000\n");
while (1)
    {
    while_continue___3:;
      printf("\nSTMT_EXEC;;14003\n");
if (!nfiles)
      {
        printf("\nSTMT_EXEC;;14005\n");
goto while_break___3;
      }
      printf("\nSTMT_EXEC;;14007\n");
smallest = *(cur + *(ord + 0));
      printf("\nSTMT_EXEC;;14008\n");
if (unique)
      {
        printf("\nSTMT_EXEC;;14010\n");
if (savedline)
        {
          printf("\nSTMT_EXEC;;14012\n");
tmp___7 = compare(savedline, smallest);
          printf("\nSTMT_EXEC;;14013\n");
if (tmp___7)
          {
            printf("\nSTMT_EXEC;;14015\n");
savedline = (struct line const *)((void *)0);
            printf("\nSTMT_EXEC;;14016\n");
write_line((struct line const *)(&saved___0), ofp, output_file);
          }
        }
        printf("\nSTMT_EXEC;;14019\n");
if (!savedline)
        {
          printf("\nSTMT_EXEC;;14021\n");
savedline = (struct line const *)(&saved___0);
          printf("\nSTMT_EXEC;;14022\n");
if (savealloc < (size_t)smallest->length)
          {
            printf("\nSTMT_EXEC;;14024\n");
while (1)
            {
              printf("\nSTMT_EXEC;;14026\n");
if (!savealloc)
              {
                printf("\nSTMT_EXEC;;14028\n");
savealloc = (size_t)smallest->length;
                printf("\nSTMT_EXEC;;14029\n");
goto while_break___4;
              }
              printf("\nSTMT_EXEC;;14031\n");
savealloc *= 2UL;
              printf("\nSTMT_EXEC;;14032\n");
if (!(savealloc < (size_t)smallest->length))
              {
                printf("\nSTMT_EXEC;;14034\n");
goto while_break___4;
              }
            }
          while_break___4:
            {
printf("\nSTMT_EXEC;;14038\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)saved___0.text);printf("\nFUNC_RETURN;;\n");

}

            printf("\nSTMT_EXEC;;14039\n");
saved___0.text = (char *)xmalloc(savealloc);
          }
          printf("\nSTMT_EXEC;;14041\n");
saved___0.length = (size_t)smallest->length;
          printf("\nSTMT_EXEC;;14042\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)saved___0.text, (void const *)smallest->text, saved___0.length);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;14043\n");
if (key)
          {
            printf("\nSTMT_EXEC;;14045\n");
saved___0.keybeg = saved___0.text + (smallest->keybeg - smallest->text);
            printf("\nSTMT_EXEC;;14046\n");
saved___0.keylim = saved___0.text + (smallest->keylim - smallest->text);
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;14052\n");
write_line(smallest, ofp, output_file);
      }
      printf("\nSTMT_EXEC;;14054\n");
if ((unsigned long)*(base + *(ord + 0)) < (unsigned long)smallest)
      {
        printf("\nSTMT_EXEC;;14056\n");
*(cur + *(ord + 0)) = smallest - 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;14060\n");
tmp___9 = fillbuf___7(buffer + *(ord + 0), *(fps + *(ord + 0)), (files + *(ord + 0))->name);
        printf("\nSTMT_EXEC;;14061\n");
if (tmp___9)
        {
          printf("\nSTMT_EXEC;;14063\n");
tmp___8 = (struct line const *)buffer_linelim((struct buffer const *)(buffer + *(ord + 0)));
          printf("\nSTMT_EXEC;;14064\n");
linelim___0 = tmp___8;
          printf("\nSTMT_EXEC;;14065\n");
*(cur + *(ord + 0)) = linelim___0 - 1;
          printf("\nSTMT_EXEC;;14066\n");
*(base + *(ord + 0)) = linelim___0 - (buffer + *(ord + 0))->nlines;
        }
        else
        {
          printf("\nSTMT_EXEC;;14070\n");
i = (size_t)1;
          printf("\nSTMT_EXEC;;14071\n");
while (1)
          {
            printf("\nSTMT_EXEC;;14073\n");
if (!(i < nfiles))
            {
              printf("\nSTMT_EXEC;;14075\n");
goto while_break___5;
            }
            printf("\nSTMT_EXEC;;14077\n");
if (*(ord + i) > *(ord + 0))
            {
              printf("\nSTMT_EXEC;;14079\n");
(*(ord + i))--;
            }
            printf("\nSTMT_EXEC;;14081\n");
i++;
          }
        while_break___5:
          {
printf("\nSTMT_EXEC;;14084\n");
nfiles--;
}

          printf("\nSTMT_EXEC;;14085\n");
xfclose(*(fps + *(ord + 0)), (files + *(ord + 0))->name);
          printf("\nSTMT_EXEC;;14086\n");
if (*(ord + 0) < ntemps)
          {
            printf("\nSTMT_EXEC;;14088\n");
ntemps--;
            printf("\nSTMT_EXEC;;14089\n");
zaptemp((files + *(ord + 0))->name);
          }
          printf("\nSTMT_EXEC;;14091\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)(buffer + *(ord + 0))->buf);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;14092\n");
i = *(ord + 0);
          printf("\nSTMT_EXEC;;14093\n");
while (1)
          {
            printf("\nSTMT_EXEC;;14095\n");
if (!(i < nfiles))
            {
              printf("\nSTMT_EXEC;;14097\n");
goto while_break___6;
            }
            printf("\nSTMT_EXEC;;14099\n");
*(fps + i) = *(fps + (i + 1UL));
            printf("\nSTMT_EXEC;;14100\n");
*(files + i) = *(files + (i + 1UL));
            printf("\nSTMT_EXEC;;14101\n");
*(buffer + i) = *(buffer + (i + 1UL));
            printf("\nSTMT_EXEC;;14102\n");
*(cur + i) = *(cur + (i + 1UL));
            printf("\nSTMT_EXEC;;14103\n");
*(base + i) = *(base + (i + 1UL));
            printf("\nSTMT_EXEC;;14104\n");
i++;
          }
        while_break___6:
          {
printf("\nSTMT_EXEC;;14107\n");
i = (size_t)0;
}

          printf("\nSTMT_EXEC;;14108\n");
while (1)
          {
            printf("\nSTMT_EXEC;;14110\n");
if (!(i < nfiles))
            {
              printf("\nSTMT_EXEC;;14112\n");
goto while_break___7;
            }
            printf("\nSTMT_EXEC;;14114\n");
*(ord + i) = *(ord + (i + 1UL));
            printf("\nSTMT_EXEC;;14115\n");
i++;
          }
        while_break___7:;
          printf("\nSTMT_EXEC;;14118\n");
goto while_continue___3;
        }
      }
      printf("\nSTMT_EXEC;;14121\n");
lo = (size_t)1;
      printf("\nSTMT_EXEC;;14122\n");
hi = nfiles;
      printf("\nSTMT_EXEC;;14123\n");
probe = lo;
      printf("\nSTMT_EXEC;;14124\n");
ord0 = *(ord + 0);
      printf("\nSTMT_EXEC;;14125\n");
while (1)
      {
        printf("\nSTMT_EXEC;;14127\n");
if (!(lo < hi))
        {
          printf("\nSTMT_EXEC;;14129\n");
goto while_break___8;
        }
        printf("\nSTMT_EXEC;;14131\n");
tmp___10 = compare(*(cur + ord0), *(cur + *(ord + probe)));
        printf("\nSTMT_EXEC;;14132\n");
cmp = tmp___10;
        printf("\nSTMT_EXEC;;14133\n");
if (cmp < 0)
        {
          printf("\nSTMT_EXEC;;14135\n");
hi = probe;
        }
        else
        {
          printf("\nSTMT_EXEC;;14139\n");
if (cmp == 0)
          {
            printf("\nSTMT_EXEC;;14141\n");
if (ord0 < *(ord + probe))
            {
              printf("\nSTMT_EXEC;;14143\n");
hi = probe;
            }
            else
            {
              printf("\nSTMT_EXEC;;14147\n");
lo = probe + 1UL;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;14152\n");
lo = probe + 1UL;
          }
        }
        printf("\nSTMT_EXEC;;14155\n");
probe = (lo + hi) / 2UL;
      }
    while_break___8:
      {
printf("\nSTMT_EXEC;;14158\n");
count_of_smaller_lines = lo - 1UL;
}

      printf("\nSTMT_EXEC;;14159\n");
j = (size_t)0;
      printf("\nSTMT_EXEC;;14160\n");
while (1)
      {
        printf("\nSTMT_EXEC;;14162\n");
if (!(j < count_of_smaller_lines))
        {
          printf("\nSTMT_EXEC;;14164\n");
goto while_break___9;
        }
        printf("\nSTMT_EXEC;;14166\n");
*(ord + j) = *(ord + (j + 1UL));
        printf("\nSTMT_EXEC;;14167\n");
j++;
      }
    while_break___9:
      {
printf("\nSTMT_EXEC;;14170\n");
*(ord + count_of_smaller_lines) = ord0;
}

    }
  while_break___3:;
    printf("\nSTMT_EXEC;;14173\n");
if (unique)
    {
      printf("\nSTMT_EXEC;;14175\n");
if (savedline)
      {
        printf("\nSTMT_EXEC;;14177\n");
write_line((struct line const *)(&saved___0), ofp, output_file);
        printf("\nSTMT_EXEC;;14178\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)saved___0.text);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;14181\n");
xfclose(ofp, output_file);
    printf("\nSTMT_EXEC;;14182\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)fps);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14183\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)buffer);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14184\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)ord);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14185\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)base);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14186\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)cur);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14187\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t mergefiles(struct sortfile *files, size_t ntemps, size_t nfiles, FILE *ofp, char const *output_file)
{
  printf("\nFUNC_CALL;mergefiles(struct sortfile *,size_t,size_t,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;14192\n");
FILE **fps;
  printf("\nSTMT_EXEC;;14193\n");
size_t nopened;
  printf("\nSTMT_EXEC;;14194\n");
size_t tmp;
  printf("\nSTMT_EXEC;;14195\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;14197\n");
tmp = open_input_files(files, nfiles, &fps);
    printf("\nSTMT_EXEC;;14198\n");
nopened = tmp;
    printf("\nSTMT_EXEC;;14199\n");
if (nopened < nfiles)
    {
      printf("\nSTMT_EXEC;;14201\n");
if (nopened < 2UL)
      {
        printf("\nSTMT_EXEC;;14203\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("open failed");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;14204\n");
die((char const *)tmp___0, (files + nopened)->name);
      }
    }
    printf("\nSTMT_EXEC;;14207\n");
mergefps(files, ntemps, nopened, ofp, output_file, fps);
    printf("\nSTMT_EXEC;;14208\n");
printf("\nFUNC_RETURN;;\n");
return (nopened);
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
    printf("\nSTMT_EXEC;;14259\n");
printf("\nFUNC_RETURN;;\n");
return;
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
        printf("\nSTMT_EXEC;;14314\n");
if (!to_temp)
        {
          printf("\nSTMT_EXEC;;14316\n");
*(temp + -1) = *(lo + -1);
        }
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
    printf("\nSTMT_EXEC;;14331\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;14340\n");
struct line *tmp___0;
  printf("\nSTMT_EXEC;;14341\n");
struct line *tmp___1;
  printf("\nSTMT_EXEC;;14342\n");
struct line *tmp___2;
  printf("\nSTMT_EXEC;;14343\n");
size_t tmp___3;
  {
    printf("\nSTMT_EXEC;;14345\n");
tmp = (struct merge_node *)xmalloc((2UL * sizeof(*merge_tree)) * nthreads);
    printf("\nSTMT_EXEC;;14346\n");
merge_tree = tmp;
    printf("\nSTMT_EXEC;;14347\n");
root = merge_tree;
    printf("\nSTMT_EXEC;;14348\n");
tmp___2 = (struct line *)((void *)0);
    printf("\nSTMT_EXEC;;14349\n");
root->end_hi = tmp___2;
    printf("\nSTMT_EXEC;;14350\n");
tmp___1 = tmp___2;
    printf("\nSTMT_EXEC;;14351\n");
root->end_lo = tmp___1;
    printf("\nSTMT_EXEC;;14352\n");
tmp___0 = tmp___1;
    printf("\nSTMT_EXEC;;14353\n");
root->hi = tmp___0;
    printf("\nSTMT_EXEC;;14354\n");
root->lo = tmp___0;
    printf("\nSTMT_EXEC;;14355\n");
root->dest = (struct line **)((void *)0);
    printf("\nSTMT_EXEC;;14356\n");
tmp___3 = nlines;
    printf("\nSTMT_EXEC;;14357\n");
root->nhi = tmp___3;
    printf("\nSTMT_EXEC;;14358\n");
root->nlo = tmp___3;
    printf("\nSTMT_EXEC;;14359\n");
root->parent = (struct merge_node *)((void *)0);
    printf("\nSTMT_EXEC;;14360\n");
root->level = 0U;
    printf("\nSTMT_EXEC;;14361\n");
root->queued = (_Bool)0;
    printf("\nSTMT_EXEC;;14362\n");
printf("\nFUNC_CALL;pthread_mutex_init(pthread_mutex_t *,const pthread_mutexattr_t *);\n");
pthread_mutex_init(&root->lock, (pthread_mutexattr_t const *)((void *)0));printf("\nFUNC_RETURN;;\n");

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
{
    printf("\nSTMT_EXEC;;14370\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)merge_tree);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14371\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
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
  printf("\nSTMT_EXEC;;14380\n");
struct line *lo;
  printf("\nSTMT_EXEC;;14381\n");
struct line *hi;
  printf("\nSTMT_EXEC;;14382\n");
struct line **parent_end;
  printf("\nSTMT_EXEC;;14383\n");
struct line **tmp___0;
  printf("\nSTMT_EXEC;;14384\n");
struct merge_node *node;
  printf("\nSTMT_EXEC;;14385\n");
struct merge_node *__restrict tmp___1;
  printf("\nSTMT_EXEC;;14386\n");
struct line *tmp___2;
  printf("\nSTMT_EXEC;;14387\n");
struct line *tmp___3;
  printf("\nSTMT_EXEC;;14388\n");
size_t lo_threads;
  printf("\nSTMT_EXEC;;14389\n");
size_t hi_threads;
  printf("\nSTMT_EXEC;;14390\n");
struct merge_node *tmp___4;
  printf("\nSTMT_EXEC;;14391\n");
struct merge_node *tmp___5;
  {
    printf("\nSTMT_EXEC;;14393\n");
if (is_lo_child)
    {
      printf("\nSTMT_EXEC;;14395\n");
tmp = parent->nlo;
    }
    else
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
    printf("\nSTMT_EXEC;;14404\n");
lo = dest - total_lines;
    printf("\nSTMT_EXEC;;14405\n");
hi = lo - nlo;
    printf("\nSTMT_EXEC;;14406\n");
if (is_lo_child)
    {
      printf("\nSTMT_EXEC;;14408\n");
tmp___0 = &parent->end_lo;
    }
    else
    {
      printf("\nSTMT_EXEC;;14412\n");
tmp___0 = &parent->end_hi;
    }
    printf("\nSTMT_EXEC;;14414\n");
parent_end = tmp___0;
    printf("\nSTMT_EXEC;;14415\n");
tmp___1 = node_pool;
    printf("\nSTMT_EXEC;;14416\n");
node_pool++;
    printf("\nSTMT_EXEC;;14417\n");
node = (struct merge_node *)tmp___1;
    printf("\nSTMT_EXEC;;14418\n");
tmp___2 = lo;
    printf("\nSTMT_EXEC;;14419\n");
node->end_lo = tmp___2;
    printf("\nSTMT_EXEC;;14420\n");
node->lo = tmp___2;
    printf("\nSTMT_EXEC;;14421\n");
tmp___3 = hi;
    printf("\nSTMT_EXEC;;14422\n");
node->end_hi = tmp___3;
    printf("\nSTMT_EXEC;;14423\n");
node->hi = tmp___3;
    printf("\nSTMT_EXEC;;14424\n");
node->dest = parent_end;
    printf("\nSTMT_EXEC;;14425\n");
node->nlo = nlo;
    printf("\nSTMT_EXEC;;14426\n");
node->nhi = nhi;
    printf("\nSTMT_EXEC;;14427\n");
node->parent = (struct merge_node *)parent;
    printf("\nSTMT_EXEC;;14428\n");
node->level = parent->level + 1U;
    printf("\nSTMT_EXEC;;14429\n");
node->queued = (_Bool)0;
    printf("\nSTMT_EXEC;;14430\n");
printf("\nFUNC_CALL;pthread_mutex_init(pthread_mutex_t *,const pthread_mutexattr_t *);\n");
pthread_mutex_init(&node->lock, (pthread_mutexattr_t const *)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14431\n");
if (nthreads > 1UL)
    {
      printf("\nSTMT_EXEC;;14433\n");
lo_threads = nthreads / 2UL;
      printf("\nSTMT_EXEC;;14434\n");
hi_threads = nthreads - lo_threads;
      printf("\nSTMT_EXEC;;14435\n");
node->lo_child = (struct merge_node *)node_pool;
      printf("\nSTMT_EXEC;;14436\n");
tmp___4 = init_node(node, node_pool, lo, lo_threads, total_lines, (_Bool)1);
      printf("\nSTMT_EXEC;;14437\n");
node_pool = tmp___4;
      printf("\nSTMT_EXEC;;14438\n");
node->hi_child = (struct merge_node *)node_pool;
      printf("\nSTMT_EXEC;;14439\n");
tmp___5 = init_node(node, node_pool, hi, hi_threads, total_lines, (_Bool)0);
      printf("\nSTMT_EXEC;;14440\n");
node_pool = tmp___5;
    }
    else
    {
      printf("\nSTMT_EXEC;;14444\n");
node->lo_child = (struct merge_node *)((void *)0);
      printf("\nSTMT_EXEC;;14445\n");
node->hi_child = (struct merge_node *)((void *)0);
    }
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
    printf("\nSTMT_EXEC;;14457\n");
if (nodea->level == nodeb->level)
    {
      printf("\nSTMT_EXEC;;14459\n");
printf("\nFUNC_RETURN;;\n");
return (nodea->nlo + nodea->nhi < nodeb->nlo + nodeb->nhi);
    }
    printf("\nSTMT_EXEC;;14461\n");
printf("\nFUNC_RETURN;;\n");
return (nodea->level < nodeb->level);
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static void lock_node(struct merge_node *node)
{
  printf("\nFUNC_CALL;lock_node(struct merge_node *);\n");
{
    printf("\nSTMT_EXEC;;14467\n");
printf("\nFUNC_CALL;pthread_mutex_lock(pthread_mutex_t *);\n");
pthread_mutex_lock(&node->lock);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14468\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static void unlock_node(struct merge_node *node)
{
  printf("\nFUNC_CALL;unlock_node(struct merge_node *);\n");
{
    printf("\nSTMT_EXEC;;14474\n");
printf("\nFUNC_CALL;pthread_mutex_unlock(pthread_mutex_t *);\n");
pthread_mutex_unlock(&node->lock);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14475\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void queue_destroy(struct merge_node_queue *queue)
{
  printf("\nFUNC_CALL;queue_destroy(struct merge_node_queue *);\n");
{
    printf("\nSTMT_EXEC;;14481\n");
heap_free(queue->priority_queue);
    printf("\nSTMT_EXEC;;14482\n");
printf("\nFUNC_CALL;pthread_cond_destroy(pthread_cond_t *);\n");
pthread_cond_destroy(&queue->cond);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14483\n");
printf("\nFUNC_CALL;pthread_mutex_destroy(pthread_mutex_t *);\n");
pthread_mutex_destroy(&queue->mutex);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14484\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void queue_init(struct merge_node_queue *queue, size_t nthreads)
{
  printf("\nFUNC_CALL;queue_init(struct merge_node_queue *,size_t);\n");
{
    printf("\nSTMT_EXEC;;14490\n");
queue->priority_queue = heap_alloc(&compare_nodes, 2UL * nthreads);
    printf("\nSTMT_EXEC;;14491\n");
printf("\nFUNC_CALL;pthread_mutex_init(pthread_mutex_t *,const pthread_mutexattr_t *);\n");
pthread_mutex_init(&queue->mutex, (pthread_mutexattr_t const *)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14492\n");
printf("\nFUNC_CALL;pthread_cond_init(pthread_cond_t *__restrict,const pthread_condattr_t *__restrict);\n");
pthread_cond_init(&queue->cond, (pthread_condattr_t const *)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14493\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void queue_insert(struct merge_node_queue *queue, struct merge_node *node)
{
  printf("\nFUNC_CALL;queue_insert(struct merge_node_queue *,struct merge_node *);\n");
{
    printf("\nSTMT_EXEC;;14499\n");
printf("\nFUNC_CALL;pthread_mutex_lock(pthread_mutex_t *);\n");
pthread_mutex_lock(&queue->mutex);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14500\n");
heap_insert(queue->priority_queue, (void *)node);
    printf("\nSTMT_EXEC;;14501\n");
node->queued = (_Bool)1;
    printf("\nSTMT_EXEC;;14502\n");
printf("\nFUNC_CALL;pthread_mutex_unlock(pthread_mutex_t *);\n");
pthread_mutex_unlock(&queue->mutex);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14503\n");
printf("\nFUNC_CALL;pthread_cond_signal(pthread_cond_t *);\n");
pthread_cond_signal(&queue->cond);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14504\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static struct merge_node *queue_pop(struct merge_node_queue *queue)
{
  printf("\nFUNC_CALL;queue_pop(struct merge_node_queue *);\n");
printf("\nSTMT_EXEC;;14509\n");
struct merge_node *node;
  {
    printf("\nSTMT_EXEC;;14511\n");
printf("\nFUNC_CALL;pthread_mutex_lock(pthread_mutex_t *);\n");
pthread_mutex_lock(&queue->mutex);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14512\n");
while (1)
    {
      printf("\nSTMT_EXEC;;14514\n");
node = (struct merge_node *)heap_remove_top(queue->priority_queue);
      printf("\nSTMT_EXEC;;14515\n");
if (node)
      {
        printf("\nSTMT_EXEC;;14517\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;14519\n");
printf("\nFUNC_CALL;pthread_cond_wait(pthread_cond_t *__restrict,pthread_mutex_t *__restrict);\n");
pthread_cond_wait(&queue->cond, &queue->mutex);printf("\nFUNC_RETURN;;\n");

    }
  while_break:
    {
printf("\nSTMT_EXEC;;14522\n");
printf("\nFUNC_CALL;pthread_mutex_unlock(pthread_mutex_t *);\n");
pthread_mutex_unlock(&queue->mutex);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;14523\n");
lock_node(node);
    printf("\nSTMT_EXEC;;14524\n");
node->queued = (_Bool)0;
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
    printf("\nSTMT_EXEC;;14546\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;14553\n");
size_t to_merge;
  printf("\nSTMT_EXEC;;14554\n");
size_t merged_lo;
  printf("\nSTMT_EXEC;;14555\n");
size_t merged_hi;
  printf("\nSTMT_EXEC;;14556\n");
struct line *dest;
  printf("\nSTMT_EXEC;;14557\n");
int tmp;
  printf("\nSTMT_EXEC;;14558\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;14559\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;14560\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;14561\n");
int tmp___3;
  printf("\nSTMT_EXEC;;14562\n");
size_t tmp___4;
  printf("\nSTMT_EXEC;;14563\n");
size_t tmp___5;
  printf("\nSTMT_EXEC;;14564\n");
size_t tmp___6;
  {
    printf("\nSTMT_EXEC;;14566\n");
lo_orig = node->lo;
    printf("\nSTMT_EXEC;;14567\n");
hi_orig = node->hi;
    printf("\nSTMT_EXEC;;14568\n");
to_merge = (total_lines >> 2U * (node->level + 1U)) + 1UL;
    printf("\nSTMT_EXEC;;14569\n");
if (node->level > 1U)
    {
      printf("\nSTMT_EXEC;;14571\n");
dest = *(node->dest);
      printf("\nSTMT_EXEC;;14572\n");
while (1)
      {
        printf("\nSTMT_EXEC;;14574\n");
if ((unsigned long)node->lo != (unsigned long)node->end_lo)
        {
          printf("\nSTMT_EXEC;;14576\n");
if ((unsigned long)node->hi != (unsigned long)node->end_hi)
          {
            printf("\nSTMT_EXEC;;14578\n");
tmp___0 = to_merge;
            printf("\nSTMT_EXEC;;14579\n");
to_merge--;
            printf("\nSTMT_EXEC;;14580\n");
if (!tmp___0)
            {
              printf("\nSTMT_EXEC;;14582\n");
goto while_break;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;14587\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;14592\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;14594\n");
tmp = compare((struct line const *)(node->lo - 1), (struct line const *)(node->hi - 1));
        printf("\nSTMT_EXEC;;14595\n");
if (tmp <= 0)
        {
          printf("\nSTMT_EXEC;;14597\n");
dest--;
          printf("\nSTMT_EXEC;;14598\n");
(node->lo)--;
          printf("\nSTMT_EXEC;;14599\n");
*dest = *(node->lo);
        }
        else
        {
          printf("\nSTMT_EXEC;;14603\n");
dest--;
          printf("\nSTMT_EXEC;;14604\n");
(node->hi)--;
          printf("\nSTMT_EXEC;;14605\n");
*dest = *(node->hi);
        }
      }
    while_break:
      {
printf("\nSTMT_EXEC;;14609\n");
merged_lo = (size_t)(lo_orig - node->lo);
}

      printf("\nSTMT_EXEC;;14610\n");
merged_hi = (size_t)(hi_orig - node->hi);
      printf("\nSTMT_EXEC;;14611\n");
if (node->nhi == merged_hi)
      {
        printf("\nSTMT_EXEC;;14613\n");
while (1)
        {
          printf("\nSTMT_EXEC;;14615\n");
if ((unsigned long)node->lo != (unsigned long)node->end_lo)
          {
            printf("\nSTMT_EXEC;;14617\n");
tmp___1 = to_merge;
            printf("\nSTMT_EXEC;;14618\n");
to_merge--;
            printf("\nSTMT_EXEC;;14619\n");
if (!tmp___1)
            {
              printf("\nSTMT_EXEC;;14621\n");
goto while_break___0;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;14626\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;14628\n");
dest--;
          printf("\nSTMT_EXEC;;14629\n");
(node->lo)--;
          printf("\nSTMT_EXEC;;14630\n");
*dest = *(node->lo);
        }
      while_break___0:;
      }
      else
      {
        printf("\nSTMT_EXEC;;14636\n");
if (node->nlo == merged_lo)
        {
          printf("\nSTMT_EXEC;;14638\n");
while (1)
          {
            printf("\nSTMT_EXEC;;14640\n");
if ((unsigned long)node->hi != (unsigned long)node->end_hi)
            {
              printf("\nSTMT_EXEC;;14642\n");
tmp___2 = to_merge;
              printf("\nSTMT_EXEC;;14643\n");
to_merge--;
              printf("\nSTMT_EXEC;;14644\n");
if (!tmp___2)
              {
                printf("\nSTMT_EXEC;;14646\n");
goto while_break___1;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;14651\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;14653\n");
dest--;
            printf("\nSTMT_EXEC;;14654\n");
(node->hi)--;
            printf("\nSTMT_EXEC;;14655\n");
*dest = *(node->hi);
          }
        while_break___1:;
        }
      }
      printf("\nSTMT_EXEC;;14660\n");
*(node->dest) = dest;
    }
    else
    {
      printf("\nSTMT_EXEC;;14664\n");
while (1)
      {
        printf("\nSTMT_EXEC;;14666\n");
if ((unsigned long)node->lo != (unsigned long)node->end_lo)
        {
          printf("\nSTMT_EXEC;;14668\n");
if ((unsigned long)node->hi != (unsigned long)node->end_hi)
          {
            printf("\nSTMT_EXEC;;14670\n");
tmp___4 = to_merge;
            printf("\nSTMT_EXEC;;14671\n");
to_merge--;
            printf("\nSTMT_EXEC;;14672\n");
if (!tmp___4)
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
        }
        else
        {
          printf("\nSTMT_EXEC;;14684\n");
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
        printf("\nSTMT_EXEC;;14703\n");
while (1)
        {
          printf("\nSTMT_EXEC;;14705\n");
if ((unsigned long)node->lo != (unsigned long)node->end_lo)
          {
            printf("\nSTMT_EXEC;;14707\n");
tmp___5 = to_merge;
            printf("\nSTMT_EXEC;;14708\n");
to_merge--;
            printf("\nSTMT_EXEC;;14709\n");
if (!tmp___5)
            {
              printf("\nSTMT_EXEC;;14711\n");
goto while_break___3;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;14716\n");
goto while_break___3;
          }
          printf("\nSTMT_EXEC;;14718\n");
(node->lo)--;
          printf("\nSTMT_EXEC;;14719\n");
write_unique((struct line const *)node->lo, tfp, temp_output);
        }
      while_break___3:;
      }
      else
      {
        printf("\nSTMT_EXEC;;14725\n");
if (node->nlo == merged_lo)
        {
          printf("\nSTMT_EXEC;;14727\n");
while (1)
          {
            printf("\nSTMT_EXEC;;14729\n");
if ((unsigned long)node->hi != (unsigned long)node->end_hi)
            {
              printf("\nSTMT_EXEC;;14731\n");
tmp___6 = to_merge;
              printf("\nSTMT_EXEC;;14732\n");
to_merge--;
              printf("\nSTMT_EXEC;;14733\n");
if (!tmp___6)
              {
                printf("\nSTMT_EXEC;;14735\n");
goto while_break___4;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;14740\n");
goto while_break___4;
            }
            printf("\nSTMT_EXEC;;14742\n");
(node->hi)--;
            printf("\nSTMT_EXEC;;14743\n");
write_unique((struct line const *)node->hi, tfp, temp_output);
          }
        while_break___4:;
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
    printf("\nSTMT_EXEC;;14753\n");
printf("\nFUNC_RETURN;;\n");
return;
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
    printf("\nSTMT_EXEC;;14764\n");
if (!node->queued)
    {
      printf("\nSTMT_EXEC;;14766\n");
lo_avail = (_Bool)(node->lo - node->end_lo != 0L);
      printf("\nSTMT_EXEC;;14767\n");
hi_avail = (_Bool)(node->hi - node->end_hi != 0L);
      printf("\nSTMT_EXEC;;14768\n");
if (lo_avail)
      {
        printf("\nSTMT_EXEC;;14770\n");
if (hi_avail)
        {
          printf("\nSTMT_EXEC;;14772\n");
tmp = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;14776\n");
if (!node->nhi)
          {
            printf("\nSTMT_EXEC;;14778\n");
tmp = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;14782\n");
tmp = 0;
          }
        }
        printf("\nSTMT_EXEC;;14785\n");
tmp___1 = tmp;
      }
      else
      {
        printf("\nSTMT_EXEC;;14789\n");
if (hi_avail)
        {
          printf("\nSTMT_EXEC;;14791\n");
if (!node->nlo)
          {
            printf("\nSTMT_EXEC;;14793\n");
tmp___0 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;14797\n");
tmp___0 = 0;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;14802\n");
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
    printf("\nSTMT_EXEC;;14811\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void queue_check_insert_parent(struct merge_node_queue *queue, struct merge_node *node)
{
  printf("\nFUNC_CALL;queue_check_insert_parent(struct merge_node_queue *,struct merge_node *);\n");
{
    printf("\nSTMT_EXEC;;14817\n");
if (node->level > 1U)
    {
      printf("\nSTMT_EXEC;;14819\n");
lock_node(node->parent);
      printf("\nSTMT_EXEC;;14820\n");
queue_check_insert(queue, node->parent);
      printf("\nSTMT_EXEC;;14821\n");
unlock_node(node->parent);
    }
    else
    {
      printf("\nSTMT_EXEC;;14825\n");
if (node->nlo + node->nhi == 0UL)
      {
        printf("\nSTMT_EXEC;;14827\n");
queue_insert(queue, node->parent);
      }
    }
    printf("\nSTMT_EXEC;;14830\n");
printf("\nFUNC_RETURN;;\n");
return;
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
        printf("\nSTMT_EXEC;;14844\n");
unlock_node(node);
        printf("\nSTMT_EXEC;;14845\n");
queue_insert(queue, node);
        printf("\nSTMT_EXEC;;14846\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;14848\n");
mergelines_node(node, total_lines, tfp, temp_output);
      printf("\nSTMT_EXEC;;14849\n");
queue_check_insert(queue, node);
      printf("\nSTMT_EXEC;;14850\n");
queue_check_insert_parent(queue, node);
      printf("\nSTMT_EXEC;;14851\n");
unlock_node(node);
    }
  while_break:;
    printf("\nSTMT_EXEC;;14854\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void sortlines(struct line *__restrict lines, size_t nthreads, size_t total_lines, struct merge_node *node, struct merge_node_queue *queue, FILE *tfp, char const *temp_output);
static void *sortlines_thread(void *data)
{
  printf("\nFUNC_CALL;sortlines_thread(void *);\n");
printf("\nSTMT_EXEC;;14860\n");
struct thread_args const *args;
  {
    printf("\nSTMT_EXEC;;14862\n");
args = (struct thread_args const *)data;
    printf("\nSTMT_EXEC;;14863\n");
sortlines((struct line *)args->lines, (size_t)args->nthreads, (size_t)args->total_lines, (struct merge_node *)args->node, (struct merge_node_queue *)args->queue, (FILE *)args->tfp, (char const *)args->output_temp);
    printf("\nSTMT_EXEC;;14864\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static void sortlines(struct line *__restrict lines, size_t nthreads, size_t total_lines, struct merge_node *node, struct merge_node_queue *queue, FILE *tfp, char const *temp_output)
{
  printf("\nFUNC_CALL;sortlines(struct line *__restrict,size_t,size_t,struct merge_node *,struct merge_node_queue *,FILE *,const char *);\n");
printf("\nSTMT_EXEC;;14869\n");
size_t nlines;
  printf("\nSTMT_EXEC;;14870\n");
size_t lo_threads;
  printf("\nSTMT_EXEC;;14871\n");
size_t hi_threads;
  printf("\nSTMT_EXEC;;14872\n");
pthread_t thread;
  printf("\nSTMT_EXEC;;14873\n");
struct thread_args args;
  printf("\nSTMT_EXEC;;14874\n");
size_t nlo;
  printf("\nSTMT_EXEC;;14875\n");
size_t nhi;
  printf("\nSTMT_EXEC;;14876\n");
struct line *temp;
  printf("\nSTMT_EXEC;;14877\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;14879\n");
nlines = node->nlo + node->nhi;
    printf("\nSTMT_EXEC;;14880\n");
lo_threads = nthreads / 2UL;
    printf("\nSTMT_EXEC;;14881\n");
hi_threads = nthreads - lo_threads;
    printf("\nSTMT_EXEC;;14882\n");
args.lines = (struct line *)lines;
    printf("\nSTMT_EXEC;;14883\n");
args.nthreads = lo_threads;
    printf("\nSTMT_EXEC;;14884\n");
args.total_lines = total_lines;
    printf("\nSTMT_EXEC;;14885\n");
args.node = node->lo_child;
    printf("\nSTMT_EXEC;;14886\n");
args.queue = queue;
    printf("\nSTMT_EXEC;;14887\n");
args.tfp = tfp;
    printf("\nSTMT_EXEC;;14888\n");
args.output_temp = temp_output;
    printf("\nSTMT_EXEC;;14889\n");
if (nthreads > 1UL)
    {
      printf("\nSTMT_EXEC;;14891\n");
if (131072UL <= nlines)
      {
        printf("\nSTMT_EXEC;;14893\n");
printf("\nFUNC_CALL;pthread_create(pthread_t *__restrict,const pthread_attr_t *__restrict,void *(*)(void *),void *__restrict);\n");
tmp = pthread_create(&thread, (pthread_attr_t const *)((void *)0), &sortlines_thread, (void *)(&args));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;14894\n");
if (tmp == 0)
        {
          printf("\nSTMT_EXEC;;14896\n");
sortlines(lines - node->nlo, hi_threads, total_lines, node->hi_child, queue, tfp, temp_output);
          printf("\nSTMT_EXEC;;14897\n");
printf("\nFUNC_CALL;pthread_join(pthread_t,void **);\n");
pthread_join(thread, (void **)((void *)0));printf("\nFUNC_RETURN;;\n");

        }
        else
        {
          printf("\nSTMT_EXEC;;14901\n");
goto _L___0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;14906\n");
goto _L___0;
      }
    }
    else
    {
    _L___0:
      {
printf("\nSTMT_EXEC;;14912\n");
nlo = node->nlo;
}

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
    printf("\nSTMT_EXEC;;14930\n");
printf("\nFUNC_CALL;pthread_mutex_destroy(pthread_mutex_t *);\n");
pthread_mutex_destroy(&node->lock);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;14931\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void avoid_trashing_input(struct sortfile *files, size_t ntemps, size_t nfiles, char const *outfile)
{
  printf("\nFUNC_CALL;avoid_trashing_input(struct sortfile *,size_t,size_t,const char *);\n");
printf("\nSTMT_EXEC;;14936\n");
size_t i;
  printf("\nSTMT_EXEC;;14937\n");
_Bool got_outstat;
  printf("\nSTMT_EXEC;;14938\n");
struct stat outstat;
  printf("\nSTMT_EXEC;;14939\n");
struct tempnode *tempcopy;
  printf("\nSTMT_EXEC;;14940\n");
_Bool is_stdin;
  printf("\nSTMT_EXEC;;14941\n");
int tmp;
  printf("\nSTMT_EXEC;;14942\n");
_Bool same;
  printf("\nSTMT_EXEC;;14943\n");
struct stat instat;
  printf("\nSTMT_EXEC;;14944\n");
int tmp___0;
  printf("\nSTMT_EXEC;;14945\n");
int tmp___1;
  printf("\nSTMT_EXEC;;14946\n");
int tmp___2;
  printf("\nSTMT_EXEC;;14947\n");
int tmp___3;
  printf("\nSTMT_EXEC;;14948\n");
int tmp___4;
  printf("\nSTMT_EXEC;;14949\n");
int tmp___5;
  printf("\nSTMT_EXEC;;14950\n");
int tmp___6;
  printf("\nSTMT_EXEC;;14951\n");
int tmp___7;
  printf("\nSTMT_EXEC;;14952\n");
FILE *tftp;
  {
    printf("\nSTMT_EXEC;;14954\n");
got_outstat = (_Bool)0;
    printf("\nSTMT_EXEC;;14955\n");
tempcopy = (struct tempnode *)((void *)0);
    printf("\nSTMT_EXEC;;14956\n");
i = ntemps;
    printf("\nSTMT_EXEC;;14957\n");
while (1)
    {
      printf("\nSTMT_EXEC;;14959\n");
if (!(i < nfiles))
      {
        printf("\nSTMT_EXEC;;14961\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;14963\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((files + i)->name, "-");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;14964\n");
is_stdin = (_Bool)(tmp == 0);
      printf("\nSTMT_EXEC;;14965\n");
if (outfile)
      {
        printf("\nSTMT_EXEC;;14967\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___7 = strcmp(outfile, (files + i)->name);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;14968\n");
if (tmp___7 == 0)
        {
          printf("\nSTMT_EXEC;;14970\n");
if (!is_stdin)
          {
            printf("\nSTMT_EXEC;;14972\n");
same = (_Bool)1;
          }
          else
          {
            printf("\nSTMT_EXEC;;14976\n");
goto _L___0;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;14981\n");
goto _L___0;
        }
      }
      else
      {
      _L___0:
        {
printf("\nSTMT_EXEC;;14987\n");
if (!got_outstat)
        {
          printf("\nSTMT_EXEC;;14989\n");
if (outfile)
          {
            printf("\nSTMT_EXEC;;14991\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___0 = stat(outfile, &outstat);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;14992\n");
tmp___2 = tmp___0;
          }
          else
          {
            printf("\nSTMT_EXEC;;14996\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___1 = fstat(1, &outstat);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;14997\n");
tmp___2 = tmp___1;
          }
          printf("\nSTMT_EXEC;;14999\n");
if (tmp___2 != 0)
          {
            printf("\nSTMT_EXEC;;15001\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;15003\n");
got_outstat = (_Bool)1;
        }
}

        printf("\nSTMT_EXEC;;15005\n");
if (is_stdin)
        {
          printf("\nSTMT_EXEC;;15007\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___3 = fstat(0, &instat);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;15008\n");
tmp___5 = tmp___3;
        }
        else
        {
          printf("\nSTMT_EXEC;;15012\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___4 = stat((files + i)->name, &instat);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;15013\n");
tmp___5 = tmp___4;
        }
        printf("\nSTMT_EXEC;;15015\n");
if (tmp___5 == 0)
        {
          printf("\nSTMT_EXEC;;15017\n");
if (instat.st_ino == outstat.st_ino)
          {
            printf("\nSTMT_EXEC;;15019\n");
if (instat.st_dev == outstat.st_dev)
            {
              printf("\nSTMT_EXEC;;15021\n");
tmp___6 = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;15025\n");
tmp___6 = 0;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;15030\n");
tmp___6 = 0;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;15035\n");
tmp___6 = 0;
        }
        printf("\nSTMT_EXEC;;15037\n");
same = (_Bool)tmp___6;
      }
      printf("\nSTMT_EXEC;;15039\n");
if (same)
      {
        printf("\nSTMT_EXEC;;15041\n");
if (!tempcopy)
        {
          printf("\nSTMT_EXEC;;15043\n");
tempcopy = create_temp(&tftp);
          printf("\nSTMT_EXEC;;15044\n");
mergefiles(files + i, (size_t)0, (size_t)1, tftp, (char const *)(tempcopy->name));
        }
        printf("\nSTMT_EXEC;;15046\n");
(files + i)->name = (char const *)(tempcopy->name);
        printf("\nSTMT_EXEC;;15047\n");
(files + i)->temp = tempcopy;
      }
      printf("\nSTMT_EXEC;;15049\n");
i++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;15052\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void merge(struct sortfile *files, size_t ntemps, size_t nfiles, char const *output_file)
{
  printf("\nFUNC_CALL;merge(struct sortfile *,size_t,size_t,const char *);\n");
printf("\nSTMT_EXEC;;15057\n");
size_t in;
  printf("\nSTMT_EXEC;;15058\n");
size_t out;
  printf("\nSTMT_EXEC;;15059\n");
size_t remainder;
  printf("\nSTMT_EXEC;;15060\n");
size_t cheap_slots;
  printf("\nSTMT_EXEC;;15061\n");
FILE *tfp;
  printf("\nSTMT_EXEC;;15062\n");
struct tempnode *temp;
  printf("\nSTMT_EXEC;;15063\n");
struct tempnode *tmp;
  printf("\nSTMT_EXEC;;15064\n");
size_t num_merged;
  printf("\nSTMT_EXEC;;15065\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;15066\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;15067\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;15068\n");
size_t nshortmerge;
  printf("\nSTMT_EXEC;;15069\n");
FILE *tfp___0;
  printf("\nSTMT_EXEC;;15070\n");
struct tempnode *temp___0;
  printf("\nSTMT_EXEC;;15071\n");
struct tempnode *tmp___3;
  printf("\nSTMT_EXEC;;15072\n");
size_t num_merged___0;
  printf("\nSTMT_EXEC;;15073\n");
size_t tmp___4;
  printf("\nSTMT_EXEC;;15074\n");
size_t tmp___5;
  printf("\nSTMT_EXEC;;15075\n");
size_t tmp___6;
  printf("\nSTMT_EXEC;;15076\n");
size_t tmp___7;
  printf("\nSTMT_EXEC;;15077\n");
FILE **fps;
  printf("\nSTMT_EXEC;;15078\n");
size_t nopened;
  printf("\nSTMT_EXEC;;15079\n");
size_t tmp___8;
  printf("\nSTMT_EXEC;;15080\n");
FILE *ofp;
  printf("\nSTMT_EXEC;;15081\n");
FILE *tmp___9;
  printf("\nSTMT_EXEC;;15082\n");
char *tmp___10;
  printf("\nSTMT_EXEC;;15083\n");
int *tmp___11;
  printf("\nSTMT_EXEC;;15084\n");
char *tmp___12;
  printf("\nSTMT_EXEC;;15085\n");
FILE *tfp___1;
  printf("\nSTMT_EXEC;;15086\n");
struct tempnode *temp___1;
  printf("\nSTMT_EXEC;;15087\n");
size_t tmp___13;
  printf("\nSTMT_EXEC;;15088\n");
size_t tmp___14;
  {
    printf("\nSTMT_EXEC;;15090\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15092\n");
if (!((size_t)nmerge < nfiles))
      {
        printf("\nSTMT_EXEC;;15094\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;15096\n");
in = (size_t)0;
      printf("\nSTMT_EXEC;;15097\n");
out = in;
      printf("\nSTMT_EXEC;;15098\n");
while (1)
      {
        printf("\nSTMT_EXEC;;15100\n");
if (!((size_t)nmerge <= nfiles - in))
        {
          printf("\nSTMT_EXEC;;15102\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;15104\n");
tmp = create_temp(&tfp);
        printf("\nSTMT_EXEC;;15105\n");
temp = tmp;
        printf("\nSTMT_EXEC;;15106\n");
if (ntemps < (size_t)nmerge)
        {
          printf("\nSTMT_EXEC;;15108\n");
tmp___0 = ntemps;
        }
        else
        {
          printf("\nSTMT_EXEC;;15112\n");
tmp___0 = (size_t)nmerge;
        }
        printf("\nSTMT_EXEC;;15114\n");
tmp___1 = mergefiles(files + in, tmp___0, (size_t)nmerge, tfp, (char const *)(temp->name));
        printf("\nSTMT_EXEC;;15115\n");
num_merged = tmp___1;
        printf("\nSTMT_EXEC;;15116\n");
if (ntemps < num_merged)
        {
          printf("\nSTMT_EXEC;;15118\n");
tmp___2 = ntemps;
        }
        else
        {
          printf("\nSTMT_EXEC;;15122\n");
tmp___2 = num_merged;
        }
        printf("\nSTMT_EXEC;;15124\n");
ntemps -= tmp___2;
        printf("\nSTMT_EXEC;;15125\n");
(files + out)->name = (char const *)(temp->name);
        printf("\nSTMT_EXEC;;15126\n");
(files + out)->temp = temp;
        printf("\nSTMT_EXEC;;15127\n");
in += num_merged;
        printf("\nSTMT_EXEC;;15128\n");
out++;
      }
    while_break___0:
      {
printf("\nSTMT_EXEC;;15131\n");
remainder = nfiles - in;
}

      printf("\nSTMT_EXEC;;15132\n");
cheap_slots = (unsigned long)nmerge - out % (unsigned long)nmerge;
      printf("\nSTMT_EXEC;;15133\n");
if (cheap_slots < remainder)
      {
        printf("\nSTMT_EXEC;;15135\n");
nshortmerge = (remainder - cheap_slots) + 1UL;
        printf("\nSTMT_EXEC;;15136\n");
tmp___3 = create_temp(&tfp___0);
        printf("\nSTMT_EXEC;;15137\n");
temp___0 = tmp___3;
        printf("\nSTMT_EXEC;;15138\n");
if (ntemps < nshortmerge)
        {
          printf("\nSTMT_EXEC;;15140\n");
tmp___4 = ntemps;
        }
        else
        {
          printf("\nSTMT_EXEC;;15144\n");
tmp___4 = nshortmerge;
        }
        printf("\nSTMT_EXEC;;15146\n");
tmp___5 = mergefiles(files + in, tmp___4, nshortmerge, tfp___0, (char const *)(temp___0->name));
        printf("\nSTMT_EXEC;;15147\n");
num_merged___0 = tmp___5;
        printf("\nSTMT_EXEC;;15148\n");
if (ntemps < num_merged___0)
        {
          printf("\nSTMT_EXEC;;15150\n");
tmp___6 = ntemps;
        }
        else
        {
          printf("\nSTMT_EXEC;;15154\n");
tmp___6 = num_merged___0;
        }
        printf("\nSTMT_EXEC;;15156\n");
ntemps -= tmp___6;
        printf("\nSTMT_EXEC;;15157\n");
(files + out)->name = (char const *)(temp___0->name);
        printf("\nSTMT_EXEC;;15158\n");
tmp___7 = out;
        printf("\nSTMT_EXEC;;15159\n");
out++;
        printf("\nSTMT_EXEC;;15160\n");
(files + tmp___7)->temp = temp___0;
        printf("\nSTMT_EXEC;;15161\n");
in += num_merged___0;
      }
      printf("\nSTMT_EXEC;;15163\n");
printf("\nFUNC_CALL;memmove(void *,const void *,size_t);\n");
memmove((void *)(files + out), (void const *)(files + in), (nfiles - in) * sizeof(*files));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;15164\n");
ntemps += out;
      printf("\nSTMT_EXEC;;15165\n");
nfiles -= in - out;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;15168\n");
avoid_trashing_input(files, ntemps, nfiles, output_file);
}

    printf("\nSTMT_EXEC;;15169\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15171\n");
tmp___8 = open_input_files(files, nfiles, &fps);
      printf("\nSTMT_EXEC;;15172\n");
nopened = tmp___8;
      printf("\nSTMT_EXEC;;15173\n");
if (nopened == nfiles)
      {
        printf("\nSTMT_EXEC;;15175\n");
tmp___9 = stream_open(output_file, "w");
        printf("\nSTMT_EXEC;;15176\n");
ofp = tmp___9;
        printf("\nSTMT_EXEC;;15177\n");
if (ofp)
        {
          printf("\nSTMT_EXEC;;15179\n");
mergefps(files, ntemps, nfiles, ofp, output_file, fps);
          printf("\nSTMT_EXEC;;15180\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;15182\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___11 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;15183\n");
if (*tmp___11 != 24)
        {
          printf("\nSTMT_EXEC;;15185\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext("open failed");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;15186\n");
die((char const *)tmp___10, output_file);
        }
        else
        {
          printf("\nSTMT_EXEC;;15190\n");
if (nopened <= 2UL)
          {
            printf("\nSTMT_EXEC;;15192\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext("open failed");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;15193\n");
die((char const *)tmp___10, output_file);
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;15199\n");
if (nopened <= 2UL)
        {
          printf("\nSTMT_EXEC;;15201\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___12 = gettext("open failed");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;15202\n");
die((char const *)tmp___12, (files + nopened)->name);
        }
      }
      printf("\nSTMT_EXEC;;15205\n");
while (1)
      {
        printf("\nSTMT_EXEC;;15207\n");
nopened--;
        printf("\nSTMT_EXEC;;15208\n");
xfclose(*(fps + nopened), (files + nopened)->name);
        printf("\nSTMT_EXEC;;15209\n");
temp___1 = maybe_create_temp(&tfp___1, (_Bool)(!(nopened <= 2UL)));
        printf("\nSTMT_EXEC;;15210\n");
if (!(!temp___1))
        {
          printf("\nSTMT_EXEC;;15212\n");
goto while_break___2;
        }
      }
    while_break___2:;
      printf("\nSTMT_EXEC;;15216\n");
if (ntemps < nopened)
      {
        printf("\nSTMT_EXEC;;15218\n");
tmp___13 = ntemps;
      }
      else
      {
        printf("\nSTMT_EXEC;;15222\n");
tmp___13 = nopened;
      }
      printf("\nSTMT_EXEC;;15224\n");
mergefps(files + 0, tmp___13, nopened, tfp___1, (char const *)(temp___1->name), fps);
      printf("\nSTMT_EXEC;;15225\n");
if (ntemps < nopened)
      {
        printf("\nSTMT_EXEC;;15227\n");
tmp___14 = ntemps;
      }
      else
      {
        printf("\nSTMT_EXEC;;15231\n");
tmp___14 = nopened;
      }
      printf("\nSTMT_EXEC;;15233\n");
ntemps -= tmp___14;
      printf("\nSTMT_EXEC;;15234\n");
(files + 0)->name = (char const *)(temp___1->name);
      printf("\nSTMT_EXEC;;15235\n");
(files + 0)->temp = temp___1;
      printf("\nSTMT_EXEC;;15236\n");
printf("\nFUNC_CALL;memmove(void *,const void *,size_t);\n");
memmove((void *)(files + 1), (void const *)(files + nopened), (nfiles - nopened) * sizeof(*files));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;15237\n");
ntemps++;
      printf("\nSTMT_EXEC;;15238\n");
nfiles -= nopened - 1UL;
    }
  while_break___1:;
    printf("\nSTMT_EXEC;;15241\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void sort(char *const *files, size_t nfiles, char const *output_file, size_t nthreads)
{
  printf("\nFUNC_CALL;sort(char *const *,size_t,const char *,size_t);\n");
printf("\nSTMT_EXEC;;15246\n");
struct buffer buf___1;
  printf("\nSTMT_EXEC;;15247\n");
size_t ntemps;
  printf("\nSTMT_EXEC;;15248\n");
_Bool output_file_created;
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
  printf("\nSTMT_EXEC;;15255\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;15256\n");
size_t mult;
  printf("\nSTMT_EXEC;;15257\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;15258\n");
struct line *line;
  printf("\nSTMT_EXEC;;15259\n");
struct tempnode *tmp___2;
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
  printf("\nSTMT_EXEC;;15265\n");
size_t i;
  printf("\nSTMT_EXEC;;15266\n");
struct tempnode *node;
  printf("\nSTMT_EXEC;;15267\n");
struct sortfile *tempfiles;
  printf("\nSTMT_EXEC;;15268\n");
struct sortfile *tmp___5;
  {
    printf("\nSTMT_EXEC;;15270\n");
ntemps = (size_t)0;
    printf("\nSTMT_EXEC;;15271\n");
output_file_created = (_Bool)0;
    printf("\nSTMT_EXEC;;15272\n");
buf___1.alloc = (size_t)0;
    printf("\nSTMT_EXEC;;15273\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15275\n");
if (!nfiles)
      {
        printf("\nSTMT_EXEC;;15277\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;15279\n");
file = (char const *)*files;
      printf("\nSTMT_EXEC;;15280\n");
tmp = xfopen(file, "r");
      printf("\nSTMT_EXEC;;15281\n");
fp = tmp;
      printf("\nSTMT_EXEC;;15282\n");
if (nthreads > 1UL)
      {
        printf("\nSTMT_EXEC;;15284\n");
tmp___0 = (size_t)1;
        printf("\nSTMT_EXEC;;15285\n");
mult = (size_t)1;
        printf("\nSTMT_EXEC;;15286\n");
while (1)
        {
          printf("\nSTMT_EXEC;;15288\n");
if (!(tmp___0 < nthreads))
          {
            printf("\nSTMT_EXEC;;15290\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;15292\n");
tmp___0 *= 2UL;
          printf("\nSTMT_EXEC;;15293\n");
mult++;
        }
      while_break___0:
        {
printf("\nSTMT_EXEC;;15296\n");
bytes_per_line = mult * sizeof(struct line);
}

      }
      else
      {
        printf("\nSTMT_EXEC;;15300\n");
bytes_per_line = (sizeof(struct line) * 3UL) / 2UL;
      }
      printf("\nSTMT_EXEC;;15302\n");
if (!buf___1.alloc)
      {
        printf("\nSTMT_EXEC;;15304\n");
tmp___1 = sort_buffer_size((FILE *const *)(&fp), (size_t)1, files, nfiles, bytes_per_line);
        printf("\nSTMT_EXEC;;15305\n");
initbuf(&buf___1, bytes_per_line, tmp___1);
      }
      printf("\nSTMT_EXEC;;15307\n");
buf___1.eof = (_Bool)0;
      printf("\nSTMT_EXEC;;15308\n");
files++;
      printf("\nSTMT_EXEC;;15309\n");
nfiles--;
      printf("\nSTMT_EXEC;;15310\n");
while (1)
      {
        printf("\nSTMT_EXEC;;15312\n");
tmp___4 = fillbuf___7(&buf___1, fp, file);
        printf("\nSTMT_EXEC;;15313\n");
if (!tmp___4)
        {
          printf("\nSTMT_EXEC;;15315\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;15317\n");
if (buf___1.eof)
        {
          printf("\nSTMT_EXEC;;15319\n");
if (nfiles)
          {
            printf("\nSTMT_EXEC;;15321\n");
if (bytes_per_line + 1UL < (buf___1.alloc - buf___1.used) - bytes_per_line * buf___1.nlines)
            {
              printf("\nSTMT_EXEC;;15323\n");
buf___1.left = buf___1.used;
              printf("\nSTMT_EXEC;;15324\n");
goto while_break___1;
            }
          }
        }
        printf("\nSTMT_EXEC;;15328\n");
line = buffer_linelim((struct buffer const *)(&buf___1));
        printf("\nSTMT_EXEC;;15329\n");
if (buf___1.eof)
        {
          printf("\nSTMT_EXEC;;15331\n");
if (!nfiles)
          {
            printf("\nSTMT_EXEC;;15333\n");
if (!ntemps)
            {
              printf("\nSTMT_EXEC;;15335\n");
if (!buf___1.left)
              {
                printf("\nSTMT_EXEC;;15337\n");
xfclose(fp, file);
                printf("\nSTMT_EXEC;;15338\n");
tfp = xfopen(output_file, "w");
                printf("\nSTMT_EXEC;;15339\n");
temp_output = output_file;
                printf("\nSTMT_EXEC;;15340\n");
output_file_created = (_Bool)1;
              }
              else
              {
                printf("\nSTMT_EXEC;;15344\n");
ntemps++;
                printf("\nSTMT_EXEC;;15345\n");
tmp___2 = create_temp(&tfp);
                printf("\nSTMT_EXEC;;15346\n");
temp_output = (char const *)(tmp___2->name);
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;15351\n");
ntemps++;
              printf("\nSTMT_EXEC;;15352\n");
tmp___2 = create_temp(&tfp);
              printf("\nSTMT_EXEC;;15353\n");
temp_output = (char const *)(tmp___2->name);
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;15358\n");
ntemps++;
            printf("\nSTMT_EXEC;;15359\n");
tmp___2 = create_temp(&tfp);
            printf("\nSTMT_EXEC;;15360\n");
temp_output = (char const *)(tmp___2->name);
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;15365\n");
ntemps++;
          printf("\nSTMT_EXEC;;15366\n");
tmp___2 = create_temp(&tfp);
          printf("\nSTMT_EXEC;;15367\n");
temp_output = (char const *)(tmp___2->name);
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
          printf("\nSTMT_EXEC;;15377\n");
printf("\nFUNC_CALL;pthread_mutex_destroy(pthread_mutex_t *);\n");
pthread_mutex_destroy(&root->lock);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;15378\n");
merge_tree_destroy(merge_tree);
        }
        else
        {
          printf("\nSTMT_EXEC;;15382\n");
write_unique((struct line const *)(line - 1), tfp, temp_output);
        }
        printf("\nSTMT_EXEC;;15384\n");
xfclose(tfp, temp_output);
        printf("\nSTMT_EXEC;;15385\n");
if (output_file_created)
        {
          printf("\nSTMT_EXEC;;15387\n");
goto finish;
        }
      }
    while_break___1:
      {
printf("\nSTMT_EXEC;;15391\n");
xfclose(fp, file);
}

    }
  while_break:;
  finish:
    {
printf("\nSTMT_EXEC;;15395\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)buf___1.buf);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;15396\n");
if (!output_file_created)
    {
      printf("\nSTMT_EXEC;;15398\n");
node = (struct tempnode *)temphead;
      printf("\nSTMT_EXEC;;15399\n");
tmp___5 = (struct sortfile *)xnmalloc(ntemps, sizeof(*tempfiles));
      printf("\nSTMT_EXEC;;15400\n");
tempfiles = tmp___5;
      printf("\nSTMT_EXEC;;15401\n");
i = (size_t)0;
      printf("\nSTMT_EXEC;;15402\n");
while (1)
      {
        printf("\nSTMT_EXEC;;15404\n");
if (!node)
        {
          printf("\nSTMT_EXEC;;15406\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;15408\n");
(tempfiles + i)->name = (char const *)(node->name);
        printf("\nSTMT_EXEC;;15409\n");
(tempfiles + i)->temp = node;
        printf("\nSTMT_EXEC;;15410\n");
node = (struct tempnode *)node->next;
        printf("\nSTMT_EXEC;;15411\n");
i++;
      }
    while_break___2:
      {
printf("\nSTMT_EXEC;;15414\n");
merge(tempfiles, ntemps, ntemps, output_file);
}

      printf("\nSTMT_EXEC;;15415\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)tempfiles);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;15417\n");
reap_all();
    printf("\nSTMT_EXEC;;15418\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void insertkey(struct keyfield *key_arg)
{
  printf("\nFUNC_CALL;insertkey(struct keyfield *);\n");
printf("\nSTMT_EXEC;;15423\n");
struct keyfield **p;
  printf("\nSTMT_EXEC;;15424\n");
struct keyfield *key;
  printf("\nSTMT_EXEC;;15425\n");
struct keyfield *tmp;
  {
    printf("\nSTMT_EXEC;;15427\n");
tmp = (struct keyfield *)xmemdup((void const *)key_arg, sizeof(*key));
    printf("\nSTMT_EXEC;;15428\n");
key = tmp;
    printf("\nSTMT_EXEC;;15429\n");
p = &keylist;
    printf("\nSTMT_EXEC;;15430\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15432\n");
if (!*p)
      {
        printf("\nSTMT_EXEC;;15434\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;15436\n");
goto __Cont;
    __Cont:
      {
printf("\nSTMT_EXEC;;15438\n");
p = &(*p)->next;
}

    }
  while_break:
    {
printf("\nSTMT_EXEC;;15441\n");
*p = key;
}

    printf("\nSTMT_EXEC;;15442\n");
key->next = (struct keyfield *)((void *)0);
    printf("\nSTMT_EXEC;;15443\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void badfieldspec(char const *spec, char const *msgid);
static __attribute__((__noreturn__)) void badfieldspec(char const *spec, char const *msgid);
static void badfieldspec(char const *spec, char const *msgid)
{
  printf("\nFUNC_CALL;badfieldspec(const char *,const char *);\n");
printf("\nSTMT_EXEC;;15450\n");
char const *tmp;
  printf("\nSTMT_EXEC;;15451\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;15452\n");
char *tmp___1;
  {
    printf("\nSTMT_EXEC;;15454\n");
tmp = quote(spec);
    printf("\nSTMT_EXEC;;15455\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext(msgid);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15456\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("%s: invalid field specification %s");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15457\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___1, tmp___0, tmp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15458\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void incompatible_options(char const *opts___1);
static __attribute__((__noreturn__)) void incompatible_options(char const *opts___1);
static void incompatible_options(char const *opts___1)
{
  printf("\nFUNC_CALL;incompatible_options(const char *);\n");
printf("\nSTMT_EXEC;;15465\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;15467\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("options \'-%s\' are incompatible");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15468\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp, opts___1);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15469\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
static void check_ordering_compatibility(void)
{
  printf("\nFUNC_CALL;check_ordering_compatibility();\n");
printf("\nSTMT_EXEC;;15474\n");
struct keyfield *key;
  printf("\nSTMT_EXEC;;15475\n");
char opts___1[sizeof(short_options)];
  printf("\nSTMT_EXEC;;15476\n");
_Bool tmp;
  printf("\nSTMT_EXEC;;15477\n");
_Bool tmp___0;
  {
    printf("\nSTMT_EXEC;;15479\n");
key = keylist;
    printf("\nSTMT_EXEC;;15480\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15482\n");
if (!key)
      {
        printf("\nSTMT_EXEC;;15484\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;15486\n");
if (1 < ((((int)key->numeric + (int)key->general_numeric) + (int)key->human_numeric) + (int)key->month) + (((int)key->version | (int)key->random) | !(!key->ignore)))
      {
        printf("\nSTMT_EXEC;;15488\n");
tmp___0 = (_Bool)0;
        printf("\nSTMT_EXEC;;15489\n");
key->reverse = tmp___0;
        printf("\nSTMT_EXEC;;15490\n");
tmp = tmp___0;
        printf("\nSTMT_EXEC;;15491\n");
key->skipeblanks = tmp;
        printf("\nSTMT_EXEC;;15492\n");
key->skipsblanks = tmp;
        printf("\nSTMT_EXEC;;15493\n");
key_to_opts((struct keyfield const *)key, opts___1);
        printf("\nSTMT_EXEC;;15494\n");
incompatible_options((char const *)(opts___1));
      }
      printf("\nSTMT_EXEC;;15496\n");
key = key->next;
    }
  while_break:;
    printf("\nSTMT_EXEC;;15499\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static char const *parse_field_count(char const *string, size_t *val, char const *msgid)
{
  printf("\nFUNC_CALL;parse_field_count(const char *,size_t *,const char *);\n");
printf("\nSTMT_EXEC;;15504\n");
char *suffix;
  printf("\nSTMT_EXEC;;15505\n");
uintmax_t n;
  printf("\nSTMT_EXEC;;15506\n");
strtol_error tmp;
  printf("\nSTMT_EXEC;;15507\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;15508\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;15509\n");
char *tmp___2;
  {
    printf("\nSTMT_EXEC;;15511\n");
tmp = xstrtoumax(string, &suffix, 10, &n, "");
    printf("\nSTMT_EXEC;;15512\n");
if ((unsigned int)tmp == 0U)
    {
      printf("\nSTMT_EXEC;;15514\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;15516\n");
if ((unsigned int)tmp == 2U)
    {
      printf("\nSTMT_EXEC;;15518\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;15520\n");
if ((unsigned int)tmp == 1U)
    {
      printf("\nSTMT_EXEC;;15522\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;15524\n");
if ((unsigned int)tmp == 3U)
    {
      printf("\nSTMT_EXEC;;15526\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;15528\n");
if ((unsigned int)tmp == 4U)
    {
      printf("\nSTMT_EXEC;;15530\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;15532\n");
goto switch_break;
  case_0:
    {
printf("\nSTMT_EXEC;;15534\n");
*val = n;
}

    printf("\nSTMT_EXEC;;15535\n");
if (*val == n)
    {
      printf("\nSTMT_EXEC;;15537\n");
goto switch_break;
    }
  case_1:
    {
printf("\nSTMT_EXEC;;15540\n");
*val = 0xffffffffffffffffUL;
}

    printf("\nSTMT_EXEC;;15541\n");
goto switch_break;
  case_4:
    {
printf("\nSTMT_EXEC;;15543\n");
if (msgid)
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
}

    printf("\nSTMT_EXEC;;15550\n");
printf("\nFUNC_RETURN;;\n");
return ((char const *)((void *)0));
  switch_break:;
    printf("\nSTMT_EXEC;;15552\n");
printf("\nFUNC_RETURN;;\n");
return ((char const *)suffix);
  }
printf("\nFUNC_RETURN;;\n");
}
static char *set_ordering(char const *s, struct keyfield *key, enum blanktype blanktype)
{
  printf("\nFUNC_CALL;set_ordering(const char *,struct keyfield *,enum blanktype);\n");
{
    printf("\nSTMT_EXEC;;15558\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15560\n");
if (!*s)
      {
        printf("\nSTMT_EXEC;;15562\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;15564\n");
if ((int const) * s == 98)
      {
        printf("\nSTMT_EXEC;;15566\n");
goto case_98;
      }
      printf("\nSTMT_EXEC;;15568\n");
if ((int const) * s == 100)
      {
        printf("\nSTMT_EXEC;;15570\n");
goto case_100;
      }
      printf("\nSTMT_EXEC;;15572\n");
if ((int const) * s == 102)
      {
        printf("\nSTMT_EXEC;;15574\n");
goto case_102;
      }
      printf("\nSTMT_EXEC;;15576\n");
if ((int const) * s == 103)
      {
        printf("\nSTMT_EXEC;;15578\n");
goto case_103;
      }
      printf("\nSTMT_EXEC;;15580\n");
if ((int const) * s == 104)
      {
        printf("\nSTMT_EXEC;;15582\n");
goto case_104;
      }
      printf("\nSTMT_EXEC;;15584\n");
if ((int const) * s == 105)
      {
        printf("\nSTMT_EXEC;;15586\n");
goto case_105;
      }
      printf("\nSTMT_EXEC;;15588\n");
if ((int const) * s == 77)
      {
        printf("\nSTMT_EXEC;;15590\n");
goto case_77;
      }
      printf("\nSTMT_EXEC;;15592\n");
if ((int const) * s == 110)
      {
        printf("\nSTMT_EXEC;;15594\n");
goto case_110;
      }
      printf("\nSTMT_EXEC;;15596\n");
if ((int const) * s == 82)
      {
        printf("\nSTMT_EXEC;;15598\n");
goto case_82;
      }
      printf("\nSTMT_EXEC;;15600\n");
if ((int const) * s == 114)
      {
        printf("\nSTMT_EXEC;;15602\n");
goto case_114;
      }
      printf("\nSTMT_EXEC;;15604\n");
if ((int const) * s == 86)
      {
        printf("\nSTMT_EXEC;;15606\n");
goto case_86;
      }
      printf("\nSTMT_EXEC;;15608\n");
goto switch_default;
    case_98:
      {
printf("\nSTMT_EXEC;;15610\n");
if ((unsigned int)blanktype == 0U)
      {
        printf("\nSTMT_EXEC;;15612\n");
key->skipsblanks = (_Bool)1;
      }
      else
      {
        printf("\nSTMT_EXEC;;15616\n");
if ((unsigned int)blanktype == 2U)
        {
          printf("\nSTMT_EXEC;;15618\n");
key->skipsblanks = (_Bool)1;
        }
      }
}

      printf("\nSTMT_EXEC;;15621\n");
if ((unsigned int)blanktype == 1U)
      {
        printf("\nSTMT_EXEC;;15623\n");
key->skipeblanks = (_Bool)1;
      }
      else
      {
        printf("\nSTMT_EXEC;;15627\n");
if ((unsigned int)blanktype == 2U)
        {
          printf("\nSTMT_EXEC;;15629\n");
key->skipeblanks = (_Bool)1;
        }
      }
      printf("\nSTMT_EXEC;;15632\n");
goto switch_break;
    case_100:
      {
printf("\nSTMT_EXEC;;15634\n");
key->ignore = (_Bool const *)(nondictionary);
}

      printf("\nSTMT_EXEC;;15635\n");
goto switch_break;
    case_102:
      {
printf("\nSTMT_EXEC;;15637\n");
key->translate = (char const *)(fold_toupper);
}

      printf("\nSTMT_EXEC;;15638\n");
goto switch_break;
    case_103:
      {
printf("\nSTMT_EXEC;;15640\n");
key->general_numeric = (_Bool)1;
}

      printf("\nSTMT_EXEC;;15641\n");
goto switch_break;
    case_104:
      {
printf("\nSTMT_EXEC;;15643\n");
key->human_numeric = (_Bool)1;
}

      printf("\nSTMT_EXEC;;15644\n");
goto switch_break;
    case_105:
      {
printf("\nSTMT_EXEC;;15646\n");
if (!key->ignore)
      {
        printf("\nSTMT_EXEC;;15648\n");
key->ignore = (_Bool const *)(nonprinting);
      }
}

      printf("\nSTMT_EXEC;;15650\n");
goto switch_break;
    case_77:
      {
printf("\nSTMT_EXEC;;15652\n");
key->month = (_Bool)1;
}

      printf("\nSTMT_EXEC;;15653\n");
goto switch_break;
    case_110:
      {
printf("\nSTMT_EXEC;;15655\n");
key->numeric = (_Bool)1;
}

      printf("\nSTMT_EXEC;;15656\n");
goto switch_break;
    case_82:
      {
printf("\nSTMT_EXEC;;15658\n");
key->random = (_Bool)1;
}

      printf("\nSTMT_EXEC;;15659\n");
goto switch_break;
    case_114:
      {
printf("\nSTMT_EXEC;;15661\n");
key->reverse = (_Bool)1;
}

      printf("\nSTMT_EXEC;;15662\n");
goto switch_break;
    case_86:
      {
printf("\nSTMT_EXEC;;15664\n");
key->version = (_Bool)1;
}

      printf("\nSTMT_EXEC;;15665\n");
goto switch_break;
    switch_default:
      {
printf("\nSTMT_EXEC;;15667\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)s);
}

    switch_break:
      {
printf("\nSTMT_EXEC;;15669\n");
s++;
}

    }
  while_break:;
    printf("\nSTMT_EXEC;;15672\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)s);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct keyfield *key_init(struct keyfield *key)
{
  printf("\nFUNC_CALL;key_init(struct keyfield *);\n");
{
    printf("\nSTMT_EXEC;;15678\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)key, 0, sizeof(*key));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15679\n");
key->eword = 0xffffffffffffffffUL;
    printf("\nSTMT_EXEC;;15680\n");
printf("\nFUNC_RETURN;;\n");
return (key);
  }
printf("\nFUNC_RETURN;;\n");
}
static void sighandler(int sig___0)
{
  printf("\nFUNC_CALL;sighandler(int);\n");
{
    printf("\nSTMT_EXEC;;15686\n");
cleanup();
    printf("\nSTMT_EXEC;;15687\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(sig___0, (void (*)(int))0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15688\n");
printf("\nFUNC_CALL;raise(int);\n");
raise(sig___0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15689\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int main(int argc, char **argv);
static int const sig[11] = {(int const)14, (int const)1, (int const)2, (int const)13, (int const)3, (int const)15, (int const)29, (int const)27, (int const)26, (int const)24, (int const)25};
static char opts[10] = {(char)'X', (char)' ', (char)'-', (char)'-', (char)'d', (char)'e', (char)'b', (char)'u', (char)'g', (char)'\000'};
static char *minus = (char *)"-";
static char opts___0[3] = {(char)0, (char)'o', (char)0};
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
  printf("\nSTMT_EXEC;;15703\n");
_Bool gkey_only;
  printf("\nSTMT_EXEC;;15704\n");
char const *s;
  printf("\nSTMT_EXEC;;15705\n");
int c;
  printf("\nSTMT_EXEC;;15706\n");
char checkonly;
  printf("\nSTMT_EXEC;;15707\n");
_Bool mergeonly;
  printf("\nSTMT_EXEC;;15708\n");
char *random_source;
  printf("\nSTMT_EXEC;;15709\n");
_Bool need_random;
  printf("\nSTMT_EXEC;;15710\n");
size_t nthreads;
  printf("\nSTMT_EXEC;;15711\n");
size_t nfiles;
  printf("\nSTMT_EXEC;;15712\n");
_Bool posixly_correct;
  printf("\nSTMT_EXEC;;15713\n");
char *tmp;
  printf("\nSTMT_EXEC;;15714\n");
_Bool obsolete_usage;
  printf("\nSTMT_EXEC;;15715\n");
int tmp___0;
  printf("\nSTMT_EXEC;;15716\n");
char **files;
  printf("\nSTMT_EXEC;;15717\n");
char *files_from;
  printf("\nSTMT_EXEC;;15718\n");
struct Tokens tok;
  printf("\nSTMT_EXEC;;15719\n");
char const *outfile;
  printf("\nSTMT_EXEC;;15720\n");
struct lconv const *locale;
  printf("\nSTMT_EXEC;;15721\n");
struct lconv const *tmp___1;
  printf("\nSTMT_EXEC;;15722\n");
size_t i;
  printf("\nSTMT_EXEC;;15723\n");
struct sigaction act;
  printf("\nSTMT_EXEC;;15724\n");
int tmp___2;
  printf("\nSTMT_EXEC;;15725\n");
int oi;
  printf("\nSTMT_EXEC;;15726\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;15727\n");
int tmp___4;
  printf("\nSTMT_EXEC;;15728\n");
_Bool minus_pos_usage;
  printf("\nSTMT_EXEC;;15729\n");
int tmp___5;
  printf("\nSTMT_EXEC;;15730\n");
int tmp___6;
  printf("\nSTMT_EXEC;;15731\n");
char const *optarg1;
  printf("\nSTMT_EXEC;;15732\n");
int tmp___7;
  printf("\nSTMT_EXEC;;15733\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;15734\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;15735\n");
size_t tmp___10;
  printf("\nSTMT_EXEC;;15736\n");
ptrdiff_t tmp___11;
  printf("\nSTMT_EXEC;;15737\n");
char str[2];
  printf("\nSTMT_EXEC;;15738\n");
ptrdiff_t tmp___12;
  printf("\nSTMT_EXEC;;15739\n");
char *tmp___13;
  printf("\nSTMT_EXEC;;15740\n");
int tmp___14;
  printf("\nSTMT_EXEC;;15741\n");
size_t tmp___15;
  printf("\nSTMT_EXEC;;15742\n");
size_t tmp___16;
  printf("\nSTMT_EXEC;;15743\n");
size_t tmp___17;
  printf("\nSTMT_EXEC;;15744\n");
char *tmp___18;
  printf("\nSTMT_EXEC;;15745\n");
int tmp___19;
  printf("\nSTMT_EXEC;;15746\n");
char *tmp___20;
  printf("\nSTMT_EXEC;;15747\n");
int tmp___21;
  printf("\nSTMT_EXEC;;15748\n");
char newtab;
  printf("\nSTMT_EXEC;;15749\n");
char *tmp___22;
  printf("\nSTMT_EXEC;;15750\n");
char const *tmp___23;
  printf("\nSTMT_EXEC;;15751\n");
char *tmp___24;
  printf("\nSTMT_EXEC;;15752\n");
int tmp___25;
  printf("\nSTMT_EXEC;;15753\n");
char *tmp___26;
  printf("\nSTMT_EXEC;;15754\n");
char const *p;
  printf("\nSTMT_EXEC;;15755\n");
FILE *stream;
  printf("\nSTMT_EXEC;;15756\n");
char const *tmp___27;
  printf("\nSTMT_EXEC;;15757\n");
char *tmp___28;
  printf("\nSTMT_EXEC;;15758\n");
char *tmp___29;
  printf("\nSTMT_EXEC;;15759\n");
char const *tmp___30;
  printf("\nSTMT_EXEC;;15760\n");
char *tmp___31;
  printf("\nSTMT_EXEC;;15761\n");
int *tmp___32;
  printf("\nSTMT_EXEC;;15762\n");
int tmp___33;
  printf("\nSTMT_EXEC;;15763\n");
char const *tmp___34;
  printf("\nSTMT_EXEC;;15764\n");
char *tmp___35;
  printf("\nSTMT_EXEC;;15765\n");
_Bool tmp___36;
  printf("\nSTMT_EXEC;;15766\n");
int tmp___37;
  printf("\nSTMT_EXEC;;15767\n");
size_t i___0;
  printf("\nSTMT_EXEC;;15768\n");
char const *tmp___38;
  printf("\nSTMT_EXEC;;15769\n");
char *tmp___39;
  printf("\nSTMT_EXEC;;15770\n");
unsigned long file_number;
  printf("\nSTMT_EXEC;;15771\n");
char *tmp___40;
  printf("\nSTMT_EXEC;;15772\n");
char *tmp___41;
  printf("\nSTMT_EXEC;;15773\n");
int tmp___42;
  printf("\nSTMT_EXEC;;15774\n");
char const *tmp___43;
  printf("\nSTMT_EXEC;;15775\n");
char *tmp___44;
  printf("\nSTMT_EXEC;;15776\n");
_Bool tmp___45;
  printf("\nSTMT_EXEC;;15777\n");
_Bool tmp___46;
  printf("\nSTMT_EXEC;;15778\n");
char *tmp___47;
  printf("\nSTMT_EXEC;;15779\n");
char const *tmp___48;
  printf("\nSTMT_EXEC;;15780\n");
char *tmp___49;
  printf("\nSTMT_EXEC;;15781\n");
char *tmp___50;
  printf("\nSTMT_EXEC;;15782\n");
char const *tmp_dir;
  printf("\nSTMT_EXEC;;15783\n");
char const *tmp___51;
  printf("\nSTMT_EXEC;;15784\n");
char const *tmp___52;
  printf("\nSTMT_EXEC;;15785\n");
char const *tmp___53;
  printf("\nSTMT_EXEC;;15786\n");
char *tmp___54;
  printf("\nSTMT_EXEC;;15787\n");
int tmp___56;
  printf("\nSTMT_EXEC;;15788\n");
_Bool tmp___57;
  printf("\nSTMT_EXEC;;15789\n");
struct sortfile *sortfiles;
  printf("\nSTMT_EXEC;;15790\n");
struct sortfile *tmp___58;
  printf("\nSTMT_EXEC;;15791\n");
size_t i___1;
  printf("\nSTMT_EXEC;;15792\n");
unsigned long np;
  printf("\nSTMT_EXEC;;15793\n");
unsigned long tmp___59;
  printf("\nSTMT_EXEC;;15794\n");
size_t nthreads_max;
  printf("\nSTMT_EXEC;;15795\n");
char *tmp___60;
  printf("\nSTMT_EXEC;;15796\n");
int tmp___61;
  {
    printf("\nSTMT_EXEC;;15798\n");
gkey_only = (_Bool)0;
    printf("\nSTMT_EXEC;;15799\n");
c = 0;
    printf("\nSTMT_EXEC;;15800\n");
checkonly = (char)0;
    printf("\nSTMT_EXEC;;15801\n");
mergeonly = (_Bool)0;
    printf("\nSTMT_EXEC;;15802\n");
random_source = (char *)((void *)0);
    printf("\nSTMT_EXEC;;15803\n");
need_random = (_Bool)0;
    printf("\nSTMT_EXEC;;15804\n");
nthreads = (size_t)0;
    printf("\nSTMT_EXEC;;15805\n");
nfiles = (size_t)0;
    printf("\nSTMT_EXEC;;15806\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
tmp = getenv("POSIXLY_CORRECT");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15807\n");
posixly_correct = (_Bool)((unsigned long)tmp != (unsigned long)((void *)0));
    printf("\nSTMT_EXEC;;15808\n");
tmp___0 = posix2_version();
    printf("\nSTMT_EXEC;;15809\n");
obsolete_usage = (_Bool)(tmp___0 < 200112);
    printf("\nSTMT_EXEC;;15810\n");
files_from = (char *)((void *)0);
    printf("\nSTMT_EXEC;;15811\n");
outfile = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;15812\n");
set_program_name((char const *)*(argv + 0));
    printf("\nSTMT_EXEC;;15813\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
setlocale(6, "");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15814\n");
printf("\nFUNC_CALL;bindtextdomain(const char *,const char *);\n");
bindtextdomain("coreutils", "/usr/local/share/locale");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15815\n");
printf("\nFUNC_CALL;textdomain(const char *);\n");
textdomain("coreutils");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15816\n");
initialize_exit_failure(2);
    printf("\nSTMT_EXEC;;15817\n");
hard_LC_COLLATE = hard_locale(3);
    printf("\nSTMT_EXEC;;15818\n");
hard_LC_TIME = hard_locale(2);
    printf("\nSTMT_EXEC;;15819\n");
printf("\nFUNC_CALL;localeconv();\n");
tmp___1 = (struct lconv const *)localeconv();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15820\n");
locale = tmp___1;
    printf("\nSTMT_EXEC;;15821\n");
decimal_point = (int)to_uchar(*(locale->decimal_point + 0));
    printf("\nSTMT_EXEC;;15822\n");
if (!decimal_point)
    {
      printf("\nSTMT_EXEC;;15824\n");
decimal_point = '.';
    }
    else
    {
      printf("\nSTMT_EXEC;;15828\n");
if (*(locale->decimal_point + 1))
      {
        printf("\nSTMT_EXEC;;15830\n");
decimal_point = '.';
      }
    }
    printf("\nSTMT_EXEC;;15833\n");
thousands_sep = (int)to_uchar(*(locale->thousands_sep));
    printf("\nSTMT_EXEC;;15834\n");
if (!thousands_sep)
    {
      printf("\nSTMT_EXEC;;15836\n");
thousands_sep = -1;
    }
    else
    {
      printf("\nSTMT_EXEC;;15840\n");
if (*(locale->thousands_sep + 1))
      {
        printf("\nSTMT_EXEC;;15842\n");
thousands_sep = -1;
      }
    }
    printf("\nSTMT_EXEC;;15845\n");
have_read_stdin = (_Bool)0;
    printf("\nSTMT_EXEC;;15846\n");
inittables();
    printf("\nSTMT_EXEC;;15847\n");
printf("\nFUNC_CALL;sigemptyset(sigset_t *);\n");
sigemptyset(&caught_signals);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15848\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;15849\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15851\n");
if (!(i < 11UL))
      {
        printf("\nSTMT_EXEC;;15853\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;15855\n");
printf("\nFUNC_CALL;sigaction(int,const struct sigaction *__restrict,struct sigaction *__restrict);\n");
sigaction((int)sig[i], (struct sigaction const *)((void *)0), &act);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;15856\n");
if ((unsigned long)act.__sigaction_handler.sa_handler != (unsigned long)((void (*)(int))1))
      {
        printf("\nSTMT_EXEC;;15858\n");
printf("\nFUNC_CALL;sigaddset(sigset_t *,int);\n");
sigaddset(&caught_signals, (int)sig[i]);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;15860\n");
i++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;15863\n");
act.__sigaction_handler.sa_handler = &sighandler;
}

    printf("\nSTMT_EXEC;;15864\n");
act.sa_mask = caught_signals;
    printf("\nSTMT_EXEC;;15865\n");
act.sa_flags = 0;
    printf("\nSTMT_EXEC;;15866\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;15867\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15869\n");
if (!(i < 11UL))
      {
        printf("\nSTMT_EXEC;;15871\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;15873\n");
printf("\nFUNC_CALL;sigismember(const sigset_t *,int);\n");
tmp___2 = sigismember((sigset_t const *)(&caught_signals), (int)sig[i]);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;15874\n");
if (tmp___2)
      {
        printf("\nSTMT_EXEC;;15876\n");
printf("\nFUNC_CALL;sigaction(int,const struct sigaction *__restrict,struct sigaction *__restrict);\n");
sigaction((int)sig[i], (struct sigaction const *)(&act), (struct sigaction *)((void *)0));printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;15878\n");
i++;
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;15881\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(17, (void (*)(int))0);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;15882\n");
printf("\nFUNC_CALL;atexit(void (*)(void));\n");
atexit(&exit_cleanup);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;15883\n");
key_init(&gkey);
    printf("\nSTMT_EXEC;;15884\n");
gkey.sword = 0xffffffffffffffffUL;
    printf("\nSTMT_EXEC;;15885\n");
files = (char **)xnmalloc((size_t)argc, sizeof(*files));
    printf("\nSTMT_EXEC;;15886\n");
while (1)
    {
      printf("\nSTMT_EXEC;;15888\n");
oi = -1;
      printf("\nSTMT_EXEC;;15889\n");
if (c == -1)
      {
        printf("\nSTMT_EXEC;;15891\n");
goto _L;
      }
      else
      {
        printf("\nSTMT_EXEC;;15895\n");
if (posixly_correct)
        {
          printf("\nSTMT_EXEC;;15897\n");
if (nfiles != 0UL)
          {
            printf("\nSTMT_EXEC;;15899\n");
if (obsolete_usage)
            {
              printf("\nSTMT_EXEC;;15901\n");
if (!checkonly)
              {
                printf("\nSTMT_EXEC;;15903\n");
if (optind != argc)
                {
                  printf("\nSTMT_EXEC;;15905\n");
if ((int)*(*(argv + optind) + 0) == 45)
                  {
                    printf("\nSTMT_EXEC;;15907\n");
if ((int)*(*(argv + optind) + 1) == 111)
                    {
                      printf("\nSTMT_EXEC;;15909\n");
if (*(*(argv + optind) + 2))
                      {
                        printf("\nSTMT_EXEC;;15911\n");
goto _L___1;
                      }
                      else
                      {
                        printf("\nSTMT_EXEC;;15915\n");
if (optind + 1 != argc)
                        {
                          printf("\nSTMT_EXEC;;15917\n");
goto _L___1;
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;15921\n");
goto _L;
                        }
                      }
                    }
                    else
                    {
                      printf("\nSTMT_EXEC;;15927\n");
goto _L;
                    }
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;15932\n");
goto _L;
                  }
                }
                else
                {
                  printf("\nSTMT_EXEC;;15937\n");
goto _L;
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;15942\n");
goto _L;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;15947\n");
goto _L;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;15952\n");
goto _L___1;
          }
        }
        else
        {
        _L___1:
          {
printf("\nSTMT_EXEC;;15958\n");
printf("\nFUNC_CALL;getopt_long(int,char *const *,const char *,const struct option *,int *);\n");
c = getopt_long(argc, (char *const *)argv, short_options, long_options___1, &oi);printf("\nFUNC_RETURN;;\n");

}

          printf("\nSTMT_EXEC;;15959\n");
if (c == -1)
          {
          _L:
            {
printf("\nSTMT_EXEC;;15962\n");
if (argc <= optind)
            {
              printf("\nSTMT_EXEC;;15964\n");
goto while_break___1;
            }
}

            printf("\nSTMT_EXEC;;15966\n");
tmp___3 = nfiles;
            printf("\nSTMT_EXEC;;15967\n");
nfiles++;
            printf("\nSTMT_EXEC;;15968\n");
tmp___4 = optind;
            printf("\nSTMT_EXEC;;15969\n");
optind++;
            printf("\nSTMT_EXEC;;15970\n");
*(files + tmp___3) = *(argv + tmp___4);
          }
          else
          {
            printf("\nSTMT_EXEC;;15974\n");
if (c == 1)
            {
              printf("\nSTMT_EXEC;;15976\n");
goto case_1;
            }
            printf("\nSTMT_EXEC;;15978\n");
if (c == 134)
            {
              printf("\nSTMT_EXEC;;15980\n");
goto case_134;
            }
            printf("\nSTMT_EXEC;;15982\n");
if (c == 98)
            {
              printf("\nSTMT_EXEC;;15984\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;15986\n");
if (c == 100)
            {
              printf("\nSTMT_EXEC;;15988\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;15990\n");
if (c == 102)
            {
              printf("\nSTMT_EXEC;;15992\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;15994\n");
if (c == 103)
            {
              printf("\nSTMT_EXEC;;15996\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;15998\n");
if (c == 104)
            {
              printf("\nSTMT_EXEC;;16000\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;16002\n");
if (c == 105)
            {
              printf("\nSTMT_EXEC;;16004\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;16006\n");
if (c == 77)
            {
              printf("\nSTMT_EXEC;;16008\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;16010\n");
if (c == 110)
            {
              printf("\nSTMT_EXEC;;16012\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;16014\n");
if (c == 114)
            {
              printf("\nSTMT_EXEC;;16016\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;16018\n");
if (c == 82)
            {
              printf("\nSTMT_EXEC;;16020\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;16022\n");
if (c == 86)
            {
              printf("\nSTMT_EXEC;;16024\n");
goto case_98;
            }
            printf("\nSTMT_EXEC;;16026\n");
if (c == 128)
            {
              printf("\nSTMT_EXEC;;16028\n");
goto case_128;
            }
            printf("\nSTMT_EXEC;;16030\n");
if (c == 99)
            {
              printf("\nSTMT_EXEC;;16032\n");
goto case_99;
            }
            printf("\nSTMT_EXEC;;16034\n");
if (c == 67)
            {
              printf("\nSTMT_EXEC;;16036\n");
goto case_99;
            }
            printf("\nSTMT_EXEC;;16038\n");
if (c == 129)
            {
              printf("\nSTMT_EXEC;;16040\n");
goto case_129;
            }
            printf("\nSTMT_EXEC;;16042\n");
if (c == 130)
            {
              printf("\nSTMT_EXEC;;16044\n");
goto case_130;
            }
            printf("\nSTMT_EXEC;;16046\n");
if (c == 131)
            {
              printf("\nSTMT_EXEC;;16048\n");
goto case_131;
            }
            printf("\nSTMT_EXEC;;16050\n");
if (c == 107)
            {
              printf("\nSTMT_EXEC;;16052\n");
goto case_107;
            }
            printf("\nSTMT_EXEC;;16054\n");
if (c == 109)
            {
              printf("\nSTMT_EXEC;;16056\n");
goto case_109;
            }
            printf("\nSTMT_EXEC;;16058\n");
if (c == 132)
            {
              printf("\nSTMT_EXEC;;16060\n");
goto case_132;
            }
            printf("\nSTMT_EXEC;;16062\n");
if (c == 111)
            {
              printf("\nSTMT_EXEC;;16064\n");
goto case_111;
            }
            printf("\nSTMT_EXEC;;16066\n");
if (c == 133)
            {
              printf("\nSTMT_EXEC;;16068\n");
goto case_133;
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
            printf("\nSTMT_EXEC;;16082\n");
if (c == 84)
            {
              printf("\nSTMT_EXEC;;16084\n");
goto case_84;
            }
            printf("\nSTMT_EXEC;;16086\n");
if (c == 135)
            {
              printf("\nSTMT_EXEC;;16088\n");
goto case_135;
            }
            printf("\nSTMT_EXEC;;16090\n");
if (c == 117)
            {
              printf("\nSTMT_EXEC;;16092\n");
goto case_117;
            }
            printf("\nSTMT_EXEC;;16094\n");
if (c == 121)
            {
              printf("\nSTMT_EXEC;;16096\n");
goto case_121;
            }
            printf("\nSTMT_EXEC;;16098\n");
if (c == 122)
            {
              printf("\nSTMT_EXEC;;16100\n");
goto case_122;
            }
            printf("\nSTMT_EXEC;;16102\n");
if (c == -130)
            {
              printf("\nSTMT_EXEC;;16104\n");
goto case_neg_130;
            }
            printf("\nSTMT_EXEC;;16106\n");
if (c == -131)
            {
              printf("\nSTMT_EXEC;;16108\n");
goto case_neg_131;
            }
            printf("\nSTMT_EXEC;;16110\n");
goto switch_default;
          case_1:
            {
printf("\nSTMT_EXEC;;16112\n");
key = (struct keyfield *)((void *)0);
}

            printf("\nSTMT_EXEC;;16113\n");
if ((int)*(optarg + 0) == 43)
            {
              printf("\nSTMT_EXEC;;16115\n");
if (optind != argc)
              {
                printf("\nSTMT_EXEC;;16117\n");
if ((int)*(*(argv + optind) + 0) == 45)
                {
                  printf("\nSTMT_EXEC;;16119\n");
if ((unsigned int)*(*(argv + optind) + 1) - 48U <= 9U)
                  {
                    printf("\nSTMT_EXEC;;16121\n");
tmp___5 = 1;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;16125\n");
tmp___5 = 0;
                  }
                }
                else
                {
                  printf("\nSTMT_EXEC;;16130\n");
tmp___5 = 0;
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;16135\n");
tmp___5 = 0;
              }
              printf("\nSTMT_EXEC;;16137\n");
minus_pos_usage = (_Bool)tmp___5;
              printf("\nSTMT_EXEC;;16138\n");
if (minus_pos_usage)
              {
                printf("\nSTMT_EXEC;;16140\n");
if (!posixly_correct)
                {
                  printf("\nSTMT_EXEC;;16142\n");
tmp___6 = 1;
                }
                else
                {
                  printf("\nSTMT_EXEC;;16146\n");
tmp___6 = 0;
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;16151\n");
tmp___6 = 0;
              }
              printf("\nSTMT_EXEC;;16153\n");
obsolete_usage = (_Bool)((int)obsolete_usage | tmp___6);
              printf("\nSTMT_EXEC;;16154\n");
if (obsolete_usage)
              {
                printf("\nSTMT_EXEC;;16156\n");
key = key_init(&key_buf);
                printf("\nSTMT_EXEC;;16157\n");
s = parse_field_count((char const *)(optarg + 1), &key->sword, (char const *)((void *)0));
                printf("\nSTMT_EXEC;;16158\n");
if (s)
                {
                  printf("\nSTMT_EXEC;;16160\n");
if ((int const) * s == 46)
                  {
                    printf("\nSTMT_EXEC;;16162\n");
s = parse_field_count(s + 1, &key->schar, (char const *)((void *)0));
                  }
                }
                printf("\nSTMT_EXEC;;16165\n");
if (!key->sword)
                {
                  printf("\nSTMT_EXEC;;16167\n");
if (!key->schar)
                  {
                    printf("\nSTMT_EXEC;;16169\n");
key->sword = 0xffffffffffffffffUL;
                  }
                }
                printf("\nSTMT_EXEC;;16172\n");
if (!s)
                {
                  printf("\nSTMT_EXEC;;16174\n");
key = (struct keyfield *)((void *)0);
                }
                else
                {
                  printf("\nSTMT_EXEC;;16178\n");
tmp___9 = set_ordering(s, key, (enum blanktype)0);
                  printf("\nSTMT_EXEC;;16179\n");
if (*tmp___9)
                  {
                    printf("\nSTMT_EXEC;;16181\n");
key = (struct keyfield *)((void *)0);
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;16185\n");
if (minus_pos_usage)
                    {
                      printf("\nSTMT_EXEC;;16187\n");
tmp___7 = optind;
                      printf("\nSTMT_EXEC;;16188\n");
optind++;
                      printf("\nSTMT_EXEC;;16189\n");
optarg1 = (char const *)*(argv + tmp___7);
                      printf("\nSTMT_EXEC;;16190\n");
s = parse_field_count(optarg1 + 1, &key->eword, "invalid number after \'-\'");
                      printf("\nSTMT_EXEC;;16191\n");
if ((int const) * s == 46)
                      {
                        printf("\nSTMT_EXEC;;16193\n");
s = parse_field_count(s + 1, &key->echar, "invalid number after \'.\'");
                      }
                      printf("\nSTMT_EXEC;;16195\n");
if (!key->echar)
                      {
                        printf("\nSTMT_EXEC;;16197\n");
if (key->eword)
                        {
                          printf("\nSTMT_EXEC;;16199\n");
(key->eword)--;
                        }
                      }
                      printf("\nSTMT_EXEC;;16202\n");
tmp___8 = set_ordering(s, key, (enum blanktype)1);
                      printf("\nSTMT_EXEC;;16203\n");
if (*tmp___8)
                      {
                        printf("\nSTMT_EXEC;;16205\n");
badfieldspec(optarg1, "stray character in field spec");
                      }
                    }
                    printf("\nSTMT_EXEC;;16208\n");
key->obsolete_used = (_Bool)1;
                    printf("\nSTMT_EXEC;;16209\n");
insertkey(key);
                  }
                }
              }
            }
            printf("\nSTMT_EXEC;;16214\n");
if (!key)
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
          case_134:
            {
printf("\nSTMT_EXEC;;16222\n");
tmp___11 = __xargmatch_internal("--sort", (char const *)optarg, sort_args, sort_types, sizeof(sort_types[0]), argmatch_die);
}

            printf("\nSTMT_EXEC;;16223\n");
c = (int)sort_types[tmp___11];
          case_98:
            {
printf("\nSTMT_EXEC;;16225\n");
str[0] = (char)c;
}

            printf("\nSTMT_EXEC;;16226\n");
str[1] = (char)'\000';
            printf("\nSTMT_EXEC;;16227\n");
set_ordering((char const *)(str), &gkey, (enum blanktype)2);
            printf("\nSTMT_EXEC;;16228\n");
goto switch_break;
          case_128:
            {
printf("\nSTMT_EXEC;;16230\n");
if (optarg)
            {
              printf("\nSTMT_EXEC;;16232\n");
tmp___12 = __xargmatch_internal("--check", (char const *)optarg, check_args, check_types, sizeof(check_types[0]), argmatch_die);
              printf("\nSTMT_EXEC;;16233\n");
c = (int)check_types[tmp___12];
            }
            else
            {
              printf("\nSTMT_EXEC;;16237\n");
c = 'c';
            }
}

          case_99:
            {
printf("\nSTMT_EXEC;;16240\n");
if (checkonly)
            {
              printf("\nSTMT_EXEC;;16242\n");
if ((int)checkonly != c)
              {
                printf("\nSTMT_EXEC;;16244\n");
incompatible_options("cC");
              }
            }
}

            printf("\nSTMT_EXEC;;16247\n");
checkonly = (char)c;
            printf("\nSTMT_EXEC;;16248\n");
goto switch_break;
          case_129:
            {
printf("\nSTMT_EXEC;;16250\n");
if (compress_program)
            {
              printf("\nSTMT_EXEC;;16252\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___14 = strcmp(compress_program, (char const *)optarg);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;16253\n");
if (!(tmp___14 == 0))
              {
                printf("\nSTMT_EXEC;;16255\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___13 = gettext("multiple compress programs specified");printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;16256\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___13);printf("\nFUNC_RETURN;;\n");

              }
            }
}

            printf("\nSTMT_EXEC;;16259\n");
compress_program = (char const *)optarg;
            printf("\nSTMT_EXEC;;16260\n");
goto switch_break;
          case_130:
            {
printf("\nSTMT_EXEC;;16262\n");
debug = (_Bool)1;
}

            printf("\nSTMT_EXEC;;16263\n");
goto switch_break;
          case_131:
            {
printf("\nSTMT_EXEC;;16265\n");
files_from = optarg;
}

            printf("\nSTMT_EXEC;;16266\n");
goto switch_break;
          case_107:
            {
printf("\nSTMT_EXEC;;16268\n");
key = key_init(&key_buf);
}

            printf("\nSTMT_EXEC;;16269\n");
s = parse_field_count((char const *)optarg, &key->sword, "invalid number at field start");
            printf("\nSTMT_EXEC;;16270\n");
tmp___15 = key->sword;
            printf("\nSTMT_EXEC;;16271\n");
(key->sword)--;
            printf("\nSTMT_EXEC;;16272\n");
if (!tmp___15)
            {
              printf("\nSTMT_EXEC;;16274\n");
badfieldspec((char const *)optarg, "field number is zero");
            }
            printf("\nSTMT_EXEC;;16276\n");
if ((int const) * s == 46)
            {
              printf("\nSTMT_EXEC;;16278\n");
s = parse_field_count(s + 1, &key->schar, "invalid number after \'.\'");
              printf("\nSTMT_EXEC;;16279\n");
tmp___16 = key->schar;
              printf("\nSTMT_EXEC;;16280\n");
(key->schar)--;
              printf("\nSTMT_EXEC;;16281\n");
if (!tmp___16)
              {
                printf("\nSTMT_EXEC;;16283\n");
badfieldspec((char const *)optarg, "character offset is zero");
              }
            }
            printf("\nSTMT_EXEC;;16286\n");
if (!key->sword)
            {
              printf("\nSTMT_EXEC;;16288\n");
if (!key->schar)
              {
                printf("\nSTMT_EXEC;;16290\n");
key->sword = 0xffffffffffffffffUL;
              }
            }
            printf("\nSTMT_EXEC;;16293\n");
s = (char const *)set_ordering(s, key, (enum blanktype)0);
            printf("\nSTMT_EXEC;;16294\n");
if ((int const) * s != 44)
            {
              printf("\nSTMT_EXEC;;16296\n");
key->eword = 0xffffffffffffffffUL;
              printf("\nSTMT_EXEC;;16297\n");
key->echar = (size_t)0;
            }
            else
            {
              printf("\nSTMT_EXEC;;16301\n");
s = parse_field_count(s + 1, &key->eword, "invalid number after \',\'");
              printf("\nSTMT_EXEC;;16302\n");
tmp___17 = key->eword;
              printf("\nSTMT_EXEC;;16303\n");
(key->eword)--;
              printf("\nSTMT_EXEC;;16304\n");
if (!tmp___17)
              {
                printf("\nSTMT_EXEC;;16306\n");
badfieldspec((char const *)optarg, "field number is zero");
              }
              printf("\nSTMT_EXEC;;16308\n");
if ((int const) * s == 46)
              {
                printf("\nSTMT_EXEC;;16310\n");
s = parse_field_count(s + 1, &key->echar, "invalid number after \'.\'");
              }
              printf("\nSTMT_EXEC;;16312\n");
s = (char const *)set_ordering(s, key, (enum blanktype)1);
            }
            printf("\nSTMT_EXEC;;16314\n");
if (*s)
            {
              printf("\nSTMT_EXEC;;16316\n");
badfieldspec((char const *)optarg, "stray character in field spec");
            }
            printf("\nSTMT_EXEC;;16318\n");
insertkey(key);
            printf("\nSTMT_EXEC;;16319\n");
goto switch_break;
          case_109:
            {
printf("\nSTMT_EXEC;;16321\n");
mergeonly = (_Bool)1;
}

            printf("\nSTMT_EXEC;;16322\n");
goto switch_break;
          case_132:
            {
printf("\nSTMT_EXEC;;16324\n");
specify_nmerge(oi, (char)c, (char const *)optarg);
}

            printf("\nSTMT_EXEC;;16325\n");
goto switch_break;
          case_111:
            {
printf("\nSTMT_EXEC;;16327\n");
if (outfile)
            {
              printf("\nSTMT_EXEC;;16329\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___19 = strcmp(outfile, (char const *)optarg);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;16330\n");
if (!(tmp___19 == 0))
              {
                printf("\nSTMT_EXEC;;16332\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___18 = gettext("multiple output files specified");printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;16333\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___18);printf("\nFUNC_RETURN;;\n");

              }
            }
}

            printf("\nSTMT_EXEC;;16336\n");
outfile = (char const *)optarg;
            printf("\nSTMT_EXEC;;16337\n");
goto switch_break;
          case_133:
            {
printf("\nSTMT_EXEC;;16339\n");
if (random_source)
            {
              printf("\nSTMT_EXEC;;16341\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___21 = strcmp((char const *)random_source, (char const *)optarg);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;16342\n");
if (!(tmp___21 == 0))
              {
                printf("\nSTMT_EXEC;;16344\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___20 = gettext("multiple random sources specified");printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;16345\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___20);printf("\nFUNC_RETURN;;\n");

              }
            }
}

            printf("\nSTMT_EXEC;;16348\n");
random_source = optarg;
            printf("\nSTMT_EXEC;;16349\n");
goto switch_break;
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

            printf("\nSTMT_EXEC;;16355\n");
goto switch_break;
          case_116:
            {
printf("\nSTMT_EXEC;;16357\n");
newtab = *(optarg + 0);
}

            printf("\nSTMT_EXEC;;16358\n");
if (!newtab)
            {
              printf("\nSTMT_EXEC;;16360\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___22 = gettext("empty tab");printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;16361\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___22);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;16363\n");
if (*(optarg + 1))
            {
              printf("\nSTMT_EXEC;;16365\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___25 = strcmp((char const *)optarg, "\\0");printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;16366\n");
if (tmp___25 == 0)
              {
                printf("\nSTMT_EXEC;;16368\n");
newtab = (char)'\000';
              }
              else
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
            }
            printf("\nSTMT_EXEC;;16377\n");
if (tab != 128)
            {
              printf("\nSTMT_EXEC;;16379\n");
if (tab != (int)newtab)
              {
                printf("\nSTMT_EXEC;;16381\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___26 = gettext("incompatible tabs");printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;16382\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___26);printf("\nFUNC_RETURN;;\n");

              }
            }
            printf("\nSTMT_EXEC;;16385\n");
tab = (int)newtab;
            printf("\nSTMT_EXEC;;16386\n");
goto switch_break;
          case_84:
            {
printf("\nSTMT_EXEC;;16388\n");
add_temp_dir((char const *)optarg);
}

            printf("\nSTMT_EXEC;;16389\n");
goto switch_break;
          case_135:
            {
printf("\nSTMT_EXEC;;16391\n");
nthreads = specify_nthreads(oi, (char)c, (char const *)optarg);
}

            printf("\nSTMT_EXEC;;16392\n");
goto switch_break;
          case_117:
            {
printf("\nSTMT_EXEC;;16394\n");
unique = (_Bool)1;
}

            printf("\nSTMT_EXEC;;16395\n");
goto switch_break;
          case_121:
            {
printf("\nSTMT_EXEC;;16397\n");
if ((unsigned long)optarg == (unsigned long)*(argv + (optind - 1)))
            {
              printf("\nSTMT_EXEC;;16399\n");
p = (char const *)optarg;
              printf("\nSTMT_EXEC;;16400\n");
while (1)
              {
                printf("\nSTMT_EXEC;;16402\n");
if (!((unsigned int)*p - 48U <= 9U))
                {
                  printf("\nSTMT_EXEC;;16404\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;16406\n");
goto __Cont;
              __Cont:
                {
printf("\nSTMT_EXEC;;16408\n");
p++;
}

              }
            while_break___2:
              {
printf("\nSTMT_EXEC;;16411\n");
optind -= (int const) * p != 0;
}

            }
}

            printf("\nSTMT_EXEC;;16413\n");
goto switch_break;
          case_122:
            {
printf("\nSTMT_EXEC;;16415\n");
eolchar = (char)0;
}

            printf("\nSTMT_EXEC;;16416\n");
goto switch_break;
          case_neg_130:
            {
printf("\nSTMT_EXEC;;16418\n");
usage(0);
}

            printf("\nSTMT_EXEC;;16419\n");
goto switch_break;
          case_neg_131:
            {
printf("\nSTMT_EXEC;;16421\n");
version_etc(stdout, "sort", "GNU coreutils", Version, "Mike Haertel", "Paul Eggert", (char *)((void *)0));
}

            printf("\nSTMT_EXEC;;16422\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(0);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;16423\n");
goto switch_break;
          switch_default:
            {
printf("\nSTMT_EXEC;;16425\n");
usage(2);
}

          switch_break:;
          }
        }
      }
    }
  while_break___1:;
    printf("\nSTMT_EXEC;;16432\n");
if (files_from)
    {
      printf("\nSTMT_EXEC;;16434\n");
if (nfiles)
      {
        printf("\nSTMT_EXEC;;16436\n");
tmp___27 = quote((char const *)*(files + 0));
        printf("\nSTMT_EXEC;;16437\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___28 = gettext("extra operand %s");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16438\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___28, tmp___27);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16439\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___29 = gettext("file operands cannot be combined with --files0-from");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16440\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, "%s\n", tmp___29);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16441\n");
usage(2);
      }
      printf("\nSTMT_EXEC;;16443\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___33 = strcmp((char const *)files_from, "-");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;16444\n");
if (tmp___33 == 0)
      {
        printf("\nSTMT_EXEC;;16446\n");
stream = stdin;
      }
      else
      {
        printf("\nSTMT_EXEC;;16450\n");
stream = fopen_safer((char const *)files_from, "r");
        printf("\nSTMT_EXEC;;16451\n");
if ((unsigned long)stream == (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;16453\n");
tmp___30 = quote((char const *)files_from);
          printf("\nSTMT_EXEC;;16454\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___31 = gettext("cannot open %s for reading");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;16455\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___32 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;16456\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, *tmp___32, (char const *)tmp___31, tmp___30);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;16459\n");
readtokens0_init(&tok);
      printf("\nSTMT_EXEC;;16460\n");
tmp___36 = readtokens0(stream, &tok);
      printf("\nSTMT_EXEC;;16461\n");
if (tmp___36)
      {
        printf("\nSTMT_EXEC;;16463\n");
tmp___37 = rpl_fclose(stream);
        printf("\nSTMT_EXEC;;16464\n");
if (tmp___37 != 0)
        {
          printf("\nSTMT_EXEC;;16466\n");
tmp___34 = quote((char const *)files_from);
          printf("\nSTMT_EXEC;;16467\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___35 = gettext("cannot read file names from %s");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;16468\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___35, tmp___34);printf("\nFUNC_RETURN;;\n");

        }
      }
      else
      {
        printf("\nSTMT_EXEC;;16473\n");
tmp___34 = quote((char const *)files_from);
        printf("\nSTMT_EXEC;;16474\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___35 = gettext("cannot read file names from %s");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16475\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___35, tmp___34);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;16477\n");
if (tok.n_tok)
      {
        printf("\nSTMT_EXEC;;16479\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)files);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16480\n");
files = tok.tok;
        printf("\nSTMT_EXEC;;16481\n");
nfiles = tok.n_tok;
        printf("\nSTMT_EXEC;;16482\n");
i___0 = (size_t)0;
        printf("\nSTMT_EXEC;;16483\n");
while (1)
        {
          printf("\nSTMT_EXEC;;16485\n");
if (!(i___0 < nfiles))
          {
            printf("\nSTMT_EXEC;;16487\n");
goto while_break___3;
          }
          printf("\nSTMT_EXEC;;16489\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___42 = strcmp((char const *)*(files + i___0), "-");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;16490\n");
if (tmp___42 == 0)
          {
            printf("\nSTMT_EXEC;;16492\n");
tmp___38 = quote((char const *)*(files + i___0));
            printf("\nSTMT_EXEC;;16493\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___39 = gettext("when reading file names from stdin, no file "
                               "name of %s allowed");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;16495\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___39, tmp___38);printf("\nFUNC_RETURN;;\n");

          }
          else
          {
            printf("\nSTMT_EXEC;;16499\n");
if ((int)*(*(files + i___0) + 0) == 0)
            {
              printf("\nSTMT_EXEC;;16501\n");
file_number = i___0 + 1UL;
              printf("\nSTMT_EXEC;;16502\n");
tmp___40 = quotearg_colon((char const *)files_from);
              printf("\nSTMT_EXEC;;16503\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___41 = gettext("%s:%lu: invalid zero-length file name");printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;16504\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___41, tmp___40, file_number);printf("\nFUNC_RETURN;;\n");

            }
          }
          printf("\nSTMT_EXEC;;16507\n");
i___0++;
        }
      while_break___3:;
      }
      else
      {
        printf("\nSTMT_EXEC;;16513\n");
tmp___43 = quote((char const *)files_from);
        printf("\nSTMT_EXEC;;16514\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___44 = gettext("no input from %s");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16515\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___44, tmp___43);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;16518\n");
key = keylist;
    printf("\nSTMT_EXEC;;16519\n");
while (1)
    {
      printf("\nSTMT_EXEC;;16521\n");
if (!key)
      {
        printf("\nSTMT_EXEC;;16523\n");
goto while_break___4;
      }
      printf("\nSTMT_EXEC;;16525\n");
tmp___45 = default_key_compare((struct keyfield const *)key);
      printf("\nSTMT_EXEC;;16526\n");
if (tmp___45)
      {
        printf("\nSTMT_EXEC;;16528\n");
if (!key->reverse)
        {
          printf("\nSTMT_EXEC;;16530\n");
key->ignore = gkey.ignore;
          printf("\nSTMT_EXEC;;16531\n");
key->translate = gkey.translate;
          printf("\nSTMT_EXEC;;16532\n");
key->skipsblanks = gkey.skipsblanks;
          printf("\nSTMT_EXEC;;16533\n");
key->skipeblanks = gkey.skipeblanks;
          printf("\nSTMT_EXEC;;16534\n");
key->month = gkey.month;
          printf("\nSTMT_EXEC;;16535\n");
key->numeric = gkey.numeric;
          printf("\nSTMT_EXEC;;16536\n");
key->general_numeric = gkey.general_numeric;
          printf("\nSTMT_EXEC;;16537\n");
key->human_numeric = gkey.human_numeric;
          printf("\nSTMT_EXEC;;16538\n");
key->version = gkey.version;
          printf("\nSTMT_EXEC;;16539\n");
key->random = gkey.random;
          printf("\nSTMT_EXEC;;16540\n");
key->reverse = gkey.reverse;
        }
      }
      printf("\nSTMT_EXEC;;16543\n");
need_random = (_Bool)((int)need_random | (int)key->random);
      printf("\nSTMT_EXEC;;16544\n");
key = key->next;
    }
  while_break___4:;
    printf("\nSTMT_EXEC;;16547\n");
if (!keylist)
    {
      printf("\nSTMT_EXEC;;16549\n");
tmp___46 = default_key_compare((struct keyfield const *)(&gkey));
      printf("\nSTMT_EXEC;;16550\n");
if (!tmp___46)
      {
        printf("\nSTMT_EXEC;;16552\n");
gkey_only = (_Bool)1;
        printf("\nSTMT_EXEC;;16553\n");
insertkey(&gkey);
        printf("\nSTMT_EXEC;;16554\n");
need_random = (_Bool)((int)need_random | (int)gkey.random);
      }
    }
    printf("\nSTMT_EXEC;;16557\n");
check_ordering_compatibility();
    printf("\nSTMT_EXEC;;16558\n");
if (debug)
    {
      printf("\nSTMT_EXEC;;16560\n");
if (checkonly)
      {
        printf("\nSTMT_EXEC;;16562\n");
goto _L___2;
      }
      else
      {
        printf("\nSTMT_EXEC;;16566\n");
if (outfile)
        {
        _L___2:
          {
printf("\nSTMT_EXEC;;16569\n");
if (checkonly)
          {
            printf("\nSTMT_EXEC;;16571\n");
opts[0] = checkonly;
          }
          else
          {
            printf("\nSTMT_EXEC;;16575\n");
opts[0] = (char)'o';
          }
}

          printf("\nSTMT_EXEC;;16577\n");
incompatible_options((char const *)(opts));
        }
      }
      printf("\nSTMT_EXEC;;16580\n");
if (hard_LC_COLLATE)
      {
        printf("\nSTMT_EXEC;;16582\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
tmp___47 = setlocale(3, (char const *)((void *)0));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16583\n");
tmp___48 = quote((char const *)tmp___47);
        printf("\nSTMT_EXEC;;16584\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___49 = gettext("using %s sorting rules");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16585\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___49, tmp___48);printf("\nFUNC_RETURN;;\n");

      }
      else
      {
        printf("\nSTMT_EXEC;;16589\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___50 = gettext("using simple byte comparison");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16590\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___50);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;16592\n");
key_warnings((struct keyfield const *)(&gkey), gkey_only);
    }
    printf("\nSTMT_EXEC;;16594\n");
reverse = gkey.reverse;
    printf("\nSTMT_EXEC;;16595\n");
if (need_random)
    {
      printf("\nSTMT_EXEC;;16597\n");
random_md5_state_init((char const *)random_source);
    }
    printf("\nSTMT_EXEC;;16599\n");
if (temp_dir_count == 0UL)
    {
      printf("\nSTMT_EXEC;;16601\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
tmp___51 = (char const *)getenv("TMPDIR");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;16602\n");
tmp_dir = tmp___51;
      printf("\nSTMT_EXEC;;16603\n");
if (tmp_dir)
      {
        printf("\nSTMT_EXEC;;16605\n");
tmp___52 = tmp_dir;
      }
      else
      {
        printf("\nSTMT_EXEC;;16609\n");
tmp___52 = "/tmp";
      }
      printf("\nSTMT_EXEC;;16611\n");
add_temp_dir(tmp___52);
    }
    printf("\nSTMT_EXEC;;16613\n");
if (nfiles == 0UL)
    {
      printf("\nSTMT_EXEC;;16615\n");
nfiles = (size_t)1;
      printf("\nSTMT_EXEC;;16616\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)files);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;16617\n");
files = &minus;
    }
    printf("\nSTMT_EXEC;;16619\n");
if (0UL < sort_size)
    {
      printf("\nSTMT_EXEC;;16621\n");
if (sort_size > (unsigned long)nmerge * (2UL + sizeof(struct line)))
      {
        printf("\nSTMT_EXEC;;16623\n");
sort_size = sort_size;
      }
      else
      {
        printf("\nSTMT_EXEC;;16627\n");
sort_size = (unsigned long)nmerge * (2UL + sizeof(struct line));
      }
    }
    printf("\nSTMT_EXEC;;16630\n");
if (checkonly)
    {
      printf("\nSTMT_EXEC;;16632\n");
if (nfiles > 1UL)
      {
        printf("\nSTMT_EXEC;;16634\n");
tmp___53 = quote((char const *)*(files + 1));
        printf("\nSTMT_EXEC;;16635\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___54 = gettext("extra operand %s not allowed with -%c");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16636\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(2, 0, (char const *)tmp___54, tmp___53, (int)checkonly);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;16638\n");
if (outfile)
      {
        printf("\nSTMT_EXEC;;16640\n");
opts___0[0] = checkonly;
        printf("\nSTMT_EXEC;;16641\n");
incompatible_options((char const *)(opts___0));
      }
      printf("\nSTMT_EXEC;;16643\n");
tmp___57 = check((char const *)*(files + 0), checkonly);
      printf("\nSTMT_EXEC;;16644\n");
if (tmp___57)
      {
        printf("\nSTMT_EXEC;;16646\n");
tmp___56 = 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;16650\n");
tmp___56 = 1;
      }
      printf("\nSTMT_EXEC;;16652\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(tmp___56);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;16654\n");
if (mergeonly)
    {
      printf("\nSTMT_EXEC;;16656\n");
tmp___58 = (struct sortfile *)xcalloc(nfiles, sizeof(*sortfiles));
      printf("\nSTMT_EXEC;;16657\n");
sortfiles = tmp___58;
      printf("\nSTMT_EXEC;;16658\n");
i___1 = (size_t)0;
      printf("\nSTMT_EXEC;;16659\n");
while (1)
      {
        printf("\nSTMT_EXEC;;16661\n");
if (!(i___1 < nfiles))
        {
          printf("\nSTMT_EXEC;;16663\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;16665\n");
(sortfiles + i___1)->name = (char const *)*(files + i___1);
        printf("\nSTMT_EXEC;;16666\n");
i___1++;
      }
    while_break___5:
      {
printf("\nSTMT_EXEC;;16669\n");
merge(sortfiles, (size_t)0, nfiles, outfile);
}

    }
    else
    {
      printf("\nSTMT_EXEC;;16673\n");
if (!nthreads)
      {
        printf("\nSTMT_EXEC;;16675\n");
tmp___59 = num_processors((enum nproc_query)2);
        printf("\nSTMT_EXEC;;16676\n");
np = tmp___59;
        printf("\nSTMT_EXEC;;16677\n");
if (np < 8UL)
        {
          printf("\nSTMT_EXEC;;16679\n");
nthreads = np;
        }
        else
        {
          printf("\nSTMT_EXEC;;16683\n");
nthreads = (size_t)8;
        }
      }
      printf("\nSTMT_EXEC;;16686\n");
nthreads_max = 0xffffffffffffffffUL / (2UL * sizeof(struct merge_node));
      printf("\nSTMT_EXEC;;16687\n");
if (nthreads < nthreads_max)
      {
        printf("\nSTMT_EXEC;;16689\n");
nthreads = nthreads;
      }
      else
      {
        printf("\nSTMT_EXEC;;16693\n");
nthreads = nthreads_max;
      }
      printf("\nSTMT_EXEC;;16695\n");
sort((char *const *)files, nfiles, outfile, nthreads);
    }
    printf("\nSTMT_EXEC;;16697\n");
if (have_read_stdin)
    {
      printf("\nSTMT_EXEC;;16699\n");
tmp___61 = rpl_fclose(stdin);
      printf("\nSTMT_EXEC;;16700\n");
if (tmp___61 == -1)
      {
        printf("\nSTMT_EXEC;;16702\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___60 = gettext("close failed");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;16703\n");
die((char const *)tmp___60, "-");
      }
    }
    printf("\nSTMT_EXEC;;16706\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(0);printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}