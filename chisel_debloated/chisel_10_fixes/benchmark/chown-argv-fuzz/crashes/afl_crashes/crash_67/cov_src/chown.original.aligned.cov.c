typedef unsigned long size_t;
typedef long __off_t;
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
typedef long __time_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
typedef __mode_t mode_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
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
struct hash_table;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct F_triple
{
  char *name;
  ino_t st_ino;
  dev_t st_dev;
};
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef int wchar_t;
union __anonunion___value_4
{
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_3
{
  int __count;
  union __anonunion___value_4 __value;
};
typedef struct __anonstruct___mbstate_t_3 __mbstate_t;
typedef unsigned int wint_t;
struct hash_tuning
{
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
typedef __mbstate_t mbstate_t;
struct mbchar
{
  char const *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
struct mbuiter_multi
{
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
typedef __gid_t gid_t;
typedef __uid_t uid_t;
typedef unsigned long uintmax_t;
struct dev_ino
{
  ino_t st_ino;
  dev_t st_dev;
};
struct cycle_check_state
{
  struct dev_ino dev_ino;
  uintmax_t chdir_counter;
  int magic;
};
typedef long ptrdiff_t;
struct dirent
{
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
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
typedef long intmax_t;
typedef __nlink_t nlink_t;
struct I_ring
{
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
struct _ftsent;
struct _ftsent;
struct _ftsent;
union __anonunion_fts_cycle_29
{
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_28
{
  struct _ftsent *fts_cur;
  struct _ftsent *fts_child;
  struct _ftsent **fts_array;
  dev_t fts_dev;
  char *fts_path;
  int fts_rfd;
  int fts_cwd_fd;
  size_t fts_pathlen;
  size_t fts_nitems;
  int (*fts_compar)(struct _ftsent const **, struct _ftsent const **);
  int fts_options;
  struct hash_table *fts_leaf_optimization_works_ht;
  union __anonunion_fts_cycle_29 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_28 FTS;
struct _ftsent
{
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  long fts_number;
  void *fts_pointer;
  char *fts_accpath;
  char *fts_path;
  int fts_errno;
  int fts_symfd;
  size_t fts_pathlen;
  FTS *fts_fts;
  ptrdiff_t fts_level;
  size_t fts_namelen;
  nlink_t fts_n_dirs_remaining;
  unsigned short fts_info;
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
struct group
{
  char *gr_name;
  char *gr_passwd;
  __gid_t gr_gid;
  char **gr_mem;
};
typedef unsigned long reg_syntax_t;
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
struct __anonstruct___fsid_t_1
{
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
struct Active_dir
{
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};
struct statfs
{
  __fsword_t f_type;
  __fsword_t f_bsize;
  __fsblkcnt_t f_blocks;
  __fsblkcnt_t f_bfree;
  __fsblkcnt_t f_bavail;
  __fsfilcnt_t f_files;
  __fsfilcnt_t f_ffree;
  __fsid_t f_fsid;
  __fsword_t f_namelen;
  __fsword_t f_frsize;
  __fsword_t f_flags;
  __fsword_t f_spare[4];
};
struct LCO_ent
{
  dev_t st_dev;
  _Bool opt_ok;
};
enum Change_status
{
  CH_NOT_APPLIED = 1,
  CH_SUCCEEDED = 2,
  CH_FAILED = 3,
  CH_NO_CHANGE_REQUESTED = 4
};
enum Verbosity
{
  V_high = 0,
  V_changes_only = 1,
  V_off = 2
};
struct Chown_option
{
  enum Verbosity verbosity;
  _Bool recurse;
  struct dev_ino *root_dev_ino;
  _Bool affect_symlink_referent;
  _Bool force_silent;
  char *user_name;
  char *group_name;
};
enum RCH_status
{
  RC_ok = 2,
  RC_excluded = 3,
  RC_inode_changed = 4,
  RC_do_ordinary_chown = 5,
  RC_error = 6
};
extern __attribute__((__nothrow__)) int *(__attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern int close(int __fd);
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) tolower)(int __c);
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s) __attribute__((__pure__));
extern int fclose(FILE *__stream);
int dup_safer(int fd);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strncmp)(char const *__s1, char const *__s2, size_t __n) __attribute__((__pure__));
__attribute__((__noreturn__)) void xalloc_die(void);
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
char *last_component(char const *name);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) gettext)(char const *__msgid) __attribute__((__format_arg__(1)));
void *hash_lookup(Hash_table const *table___0, void const *entry);
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0, void const *entry);
void triple_free(void *x);
void *xmalloc(size_t n) __attribute__((__malloc__));
char *xstrdup(char const *string) __attribute__((__malloc__));
extern DIR *fdopendir(int __fd);
DIR *rpl_fdopendir(int fd);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd, struct stat *__buf);
DIR *rpl_fdopendir(int fd)
{



















}
int fd_safer(int fd);
int fd_safer(int fd)
{






















}
int volatile exit_failure;
int volatile exit_failure = (int volatile)1;
extern __attribute__((__nothrow__)) unsigned short const **(__attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) ferror_unlocked)(FILE *__stream);
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) free)(void *__ptr);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) abort)(void);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1), __leaf__)) memset)(void *__s, int __c, size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strchr)(char const *__s, int __c) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strrchr)(char const *__s, int __c) __attribute__((__pure__));
int mbscasecmp(char const *s1, char const *s2);
extern __attribute__((__nothrow__)) wint_t(__attribute__((__leaf__)) towlower)(wint_t __wc);
size_t hash_string(char const *string, size_t n_buckets);
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate, Hash_tuning const *tuning, size_t (*hasher)(void const *, size_t), _Bool (*comparator)(void const *, void const *), void (*data_freer)(void *));
void hash_free(Hash_table *table___0);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) __assert_fail)(char const *__assertion, char const *__file, unsigned int __line, char const *__function);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) mbsinit)(mbstate_t const *__ps) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s, size_t __n, mbstate_t *__restrict __p);
unsigned int const is_basic_table[8];
__inline static _Bool is_basic(char c)
{



}
size_t strnlen1(char const *string, size_t maxlen);
__inline static void mbuiter_multi_next(struct mbuiter_multi *iter)
{
















































































}
void *xrealloc(void *p, size_t n);
extern int fcntl(int __fd, int __cmd, ...);
int dup_safer(int fd)
{





}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2), __leaf__)) memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) fchown)(int __fd, __uid_t __owner, __gid_t __group);
char const diacrit_base[256];
char const diacrit_diac[256];
char const diacrit_base[256] = {(char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)'A', (char const)'B', (char const)'C', (char const)'D', (char const)'E', (char const)'F', (char const)'G', (char const)'H', (char const)'I', (char const)'J', (char const)'K', (char const)'L', (char const)'M', (char const)'N', (char const)'O', (char const)'P', (char const)'Q', (char const)'R', (char const)'S', (char const)'T', (char const)'U', (char const)'V', (char const)'W', (char const)'X', (char const)'Y', (char const)'Z', (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)'a', (char const)'b', (char const)'c', (char const)'d', (char const)'e', (char const)'f', (char const)'g', (char const)'h', (char const)'i', (char const)'j', (char const)'k', (char const)'l', (char const)'m', (char const)'n', (char const)'o', (char const)'p', (char const)'q', (char const)'r', (char const)'s', (char const)'t', (char const)'u', (char const)'v', (char const)'w', (char const)'x', (char const)'y', (char const)'z', (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'A', (char const)'C', (char const)'E', (char const)'E', (char const)'E', (char const)'E', (char const)'I', (char const)'I', (char const)'I', (char const)'I', (char const)0, (char const)'N', (char const)'O', (char const)'O', (char const)'O', (char const)'O', (char const)'O', (char const)0, (char const)'O', (char const)'U', (char const)'U', (char const)'U', (char const)'U', (char const)'Y', (char const)0, (char const)0, (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'a', (char const)'c', (char const)'e', (char const)'e', (char const)'e', (char const)'e', (char const)'i', (char const)'i', (char const)'i', (char const)'i', (char const)0, (char const)'n', (char const)'o', (char const)'o', (char const)'o', (char const)'o', (char const)'o', (char const)0, (char const)'o', (char const)'u', (char const)'u', (char const)'u', (char const)'u', (char const)'y', (char const)0, (char const)'y'};
char const diacrit_diac[256] = {(char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)4, (char const)0, (char const)3, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)6, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)0, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)8, (char const)1, (char const)7, (char const)3, (char const)2, (char const)4, (char const)5, (char const)3, (char const)2, (char const)4, (char const)5, (char const)0, (char const)6, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)0, (char const)9, (char const)3, (char const)2, (char const)4, (char const)5, (char const)2, (char const)0, (char const)0, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)8, (char const)1, (char const)7, (char const)3, (char const)2, (char const)4, (char const)5, (char const)3, (char const)2, (char const)4, (char const)5, (char const)0, (char const)6, (char const)3, (char const)2, (char const)4, (char const)6, (char const)5, (char const)0, (char const)9, (char const)3, (char const)2, (char const)4, (char const)5, (char const)2, (char const)0, (char const)0};
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb);
__inline static _Bool is_zero_or_power_of_two(uintmax_t i)
{



}
void cycle_check_init(struct cycle_check_state *state)
{





}
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb)
{
































}
extern void error(int __status, int __errnum, char const *__format, ...);
char const *quote(char const *name);
void close_stdout(void);
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
char *quotearg_colon(char const *arg);
static char const *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{
                          
                  
                
               
               
  int tmp___3;
               
  int tmp___5;
  {
    tmp___3 = close_stream(stdout);
                     
     


























     
    tmp___5 = close_stream(stderr);
                     
     

     
    return;
  }
}
extern __attribute__((__nothrow__)) size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
int close_stream(FILE *stream)
{
  _Bool some_pending;
  size_t tmp;
  _Bool prev_fail;
  int tmp___0;
  _Bool fclose_fail;
  int tmp___1;
               
               
  {
    tmp = __fpending(stream);
    some_pending = (_Bool)(tmp != 0UL);
    tmp___0 = ferror_unlocked(stream);
    prev_fail = (_Bool)(tmp___0 != 0);
    tmp___1 = fclose(stream);
    fclose_fail = (_Bool)(tmp___1 != 0);
                  
     

     
        
     
                      
       


















       
     
    return (0);
  }
}
int set_cloexec_flag(int desc, _Bool value);
int set_cloexec_flag(int desc, _Bool value)
{


































}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) fchdir)(int __fd);
extern int(__attribute__((__nonnull__(2))) openat)(int __fd, char const *__file, int __oflag, ...);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1), __leaf__)) memchr)(void const *__s, int __c, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2), __leaf__)) memmove)(void *__dest, void const *__src, size_t __n);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) lstat)(char const *__restrict __file, struct stat *__restrict __buf);
size_t triple_hash(void const *x, size_t table_size);
_Bool triple_compare_ino_str(void const *x, void const *y);
char *last_component(char const *name)
{







































}
char const *simple_backup_suffix;
void (*argmatch_die)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) memcmp)(void const *__s1, void const *__s2, size_t __n) __attribute__((__pure__));
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
DIR *opendir_safer(char const *name);
char const *simple_backup_suffix = "~";
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char const *quote_n(int n, char const *name);
__attribute__((__noreturn__)) void usage(int status);
extern __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__, __leaf__)) realloc)(void *__ptr, size_t __size);
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
__inline static void *xnmalloc(size_t n, size_t s)
{


















}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base, unsigned long *val, char const *valid_suffixes);
extern __attribute__((__nothrow__)) unsigned long(__attribute__((__nonnull__(1), __leaf__)) strtoul)(char const *__restrict __nptr, char **__restrict __endptr, int __base);
static strtol_error bkm_scale___0(unsigned long *x, int scale_factor)
{









}
static strtol_error bkm_scale_by_power___0(unsigned long *x, int base, int power)
{



















}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base, unsigned long *val, char const *valid_suffixes)
{




































































































































































































































































}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) calloc)(size_t __nmemb, size_t __size) __attribute__((__malloc__));
void *xmalloc(size_t n) __attribute__((__malloc__));
void *xmalloc(size_t n)
{














}
void *xrealloc(void *p, size_t n)
{











}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__));
void *xmemdup(void const *p, size_t s)
{







}
char *xstrdup(char const *string) __attribute__((__malloc__));
char *xstrdup(char const *string)
{







}
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__, __leaf__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **));
FTS *xfts_open(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **));
_Bool cycle_warning_required(FTS const *fts, FTSENT const *ent);
FTS *xfts_open(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **))
{




















}
_Bool cycle_warning_required(FTS const *fts, FTSENT const *ent)
{









































}
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void)
{






}
extern int printf(char const *__restrict __format, ...);
extern int fputs_unlocked(char const *__restrict __s, FILE *__restrict __stream);
char const version_etc_copyright[47];
void version_etc_arn(FILE *stream, char const *command_name, char const *package, char const *version, char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package, char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name, char const *package, char const *version, char const *const *authors, size_t n_authors)
{


















































































































}
void version_etc_va(FILE *stream, char const *command_name, char const *package, char const *version, va_list authors)
{


























}
void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package, char const *version, ...)
{







}
char const version_etc_copyright[47] = {(char const)'C', (char const)'o', (char const)'p', (char const)'y', (char const)'r', (char const)'i', (char const)'g', (char const)'h', (char const)'t', (char const)' ', (char const)'%', (char const)'s', (char const)' ', (char const)'%', (char const)'d', (char const)' ', (char const)'F', (char const)'r', (char const)'e', (char const)'e', (char const)' ', (char const)'S', (char const)'o', (char const)'f', (char const)'t', (char const)'w', (char const)'a', (char const)'r', (char const)'e', (char const)' ', (char const)'F', (char const)'o', (char const)'u', (char const)'n', (char const)'d', (char const)'a', (char const)'t', (char const)'i', (char const)'o', (char const)'n', (char const)',', (char const)' ', (char const)'I', (char const)'n', (char const)'c', (char const)'.', (char const)'\000'};
char const *parse_user_spec(char const *spec, uid_t *uid, gid_t *gid, char **username, char **groupname);
extern void endpwent(void);
extern struct passwd *getpwnam(char const *__name);
extern void endgrent(void);
extern struct group *getgrgid(__gid_t __gid);
extern struct group *getgrnam(char const *__name);
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i, char *buf___1);
static char const *parse_with_separator(char const *spec, char const *separator, uid_t *uid, gid_t *gid, char **username, char **groupname);
static char const *E_invalid_user = "invalid user";
static char const *E_invalid_group = "invalid group";
static char const *E_bad_spec = "invalid spec";
static char const *parse_with_separator(char const *spec, char const *separator, uid_t *uid, gid_t *gid, char **username, char **groupname)
{


















































































































































































































}
char const *parse_user_spec(char const *spec, uid_t *uid, gid_t *gid, char **username, char **groupname)
{






























}
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i, char *buf___1)
{

















}
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
size_t strnlen1(char const *string, size_t maxlen)
{














}
int open_safer(char const *file, int flags, ...);
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i);
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i)
{












}
reg_syntax_t rpl_re_syntax_options;
char const *const quoting_style_args[9];
enum quoting_style const quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__));
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__));
__inline static char *xcharalloc(size_t n)
{
















}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) iswprint)(wint_t __wc);
char const *const quoting_style_args[9] = {"literal", "shell", "shell-always", "c", "c-maybe", "escape", "locale", "clocale", (char const *)0};
enum quoting_style const quoting_style_vals[8] = {(enum quoting_style const)0, (enum quoting_style const)1, (enum quoting_style const)2, (enum quoting_style const)3, (enum quoting_style const)4, (enum quoting_style const)5, (enum quoting_style const)6, (enum quoting_style const)7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i)
{





















}
static struct quoting_options quoting_options_from_style(enum quoting_style style)
{







}
static char const *gettext_quote(char const *msgid, enum quoting_style s)
{














}
static size_t quotearg_buffer_restyled(char *buffer, size_t buffersize, char const *arg, size_t argsize, enum quoting_style quoting_style, int flags, unsigned int const *quote_these_too, char const *left_quote, char const *right_quote)
{

























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize, struct quoting_options const *options)
{













































































}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg)
{









}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch)
{








}
char *quotearg_char(char const *arg, char ch)
{





}
char *quotearg_colon(char const *arg)
{





}
char const *quote_n(int n, char const *name)
{





}
char const *quote(char const *name)
{





}
char const *program_name;
void set_program_name(char const *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0)
{
  char const *slash;
  char const *base;
          
              
  {
                                                           
     


     
    slash = (char const *)strrchr(argv0, '/');
    if ((unsigned long)slash != (unsigned long)((void *)0))
    {

    }
    else
    {
      base = argv0;
    }
                           
     











     
    program_name = argv0;
    program_invocation_name = (char *)argv0;
    return;
  }
}
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) stpcpy)(char *__restrict __dest, char const *__restrict __src);
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) dirfd)(DIR *__dirp);
DIR *opendir_safer(char const *name)
{







































}
int openat_safer(int fd, char const *file, int flags, ...);
int openat_safer(int fd, char const *file, int flags, ...)
{
















}
int open_safer(char const *file, int flags, ...)
{
















}
int mbscasecmp(char const *s1, char const *s2)
{




















































































































































































































































}
unsigned int const is_basic_table[8] = {(unsigned int const)6656, (unsigned int const)4294967279U, (unsigned int const)4294967294U, (unsigned int const)2147483646};
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) exit)(int __status);
extern int optind;
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getopt_long)(int ___argc, char *const *___argv, char const *__shortopts, struct option const *__longopts, int *__longind);
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
extern struct passwd *getpwuid(__uid_t __uid);
void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(I_ring const *ir);
void i_ring_init(I_ring *ir, int default_val)
{



















}
_Bool i_ring_empty(I_ring const *ir)
{



}
int i_ring_push(I_ring *ir, int val)
{














}
int i_ring_pop(I_ring *ir)
{




















}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table___0, size_t candidate);
void *hash_delete(Hash_table *table___0, void const *entry);
__inline static size_t rotr_sz(size_t x, int n)
{



}
static struct hash_tuning const default_tuning = {(float)0.0, (float)1.0, (float)0.8, (float)1.414, (_Bool)0};
void *hash_lookup(Hash_table const *table___0, void const *entry)
{







































}
size_t hash_string(char const *string, size_t n_buckets)
{

















}
static _Bool is_prime(size_t candidate)
{


































}
static size_t next_prime(size_t candidate)
{


























}
static size_t raw_hasher(void const *data, size_t n)
{







}
static _Bool raw_comparator(void const *a, void const *b)
{



}
static _Bool check_tuning(Hash_table *table___0)
{


































}
static size_t compute_bucket_size(size_t candidate, Hash_tuning const *tuning)
{



























}
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate, Hash_tuning const *tuning, size_t (*hasher)(void const *, size_t), _Bool (*comparator)(void const *, void const *), void (*data_freer)(void *))
{
















































}
void hash_free(Hash_table *table___0)
{








































































}
static struct hash_entry *allocate_entry(Hash_table *table___0)
{













}
static void free_entry(Hash_table *table___0, struct hash_entry *entry)
{






}
static void *hash_find_entry(Hash_table *table___0, void const *entry, struct hash_entry **bucket_head, _Bool delete)
{
















































































}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe)
{






















































































}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table___0, size_t candidate)
{





























































}
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table___0, void const *entry)
{





































































}
void *hash_delete(Hash_table *table___0, void const *entry)
{























































}
size_t hash_pjw(void const *x, size_t tablesize);
size_t triple_hash(void const *x, size_t table_size)
{









}
_Bool triple_compare_ino_str(void const *x, void const *y)
{
































}
void triple_free(void *x)
{







}
size_t hash_pjw(void const *x, size_t tablesize)
{

















}
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) setlocale)(int __category, char const *__locale);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2, 3), __leaf__)) fstatat)(int __fd, char const *__restrict __file, struct stat *__restrict __buf, int __flag);
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__, __leaf__)) fts_close)(FTS *sp);
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp);
__attribute__((__nothrow__)) int(__attribute__((__leaf__)) fts_set)(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr);
extern void(__attribute__((__nonnull__(1, 4))) qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen);
static FTSENT *fts_build(FTS *sp, int type);
static void fts_lfree(FTSENT *head);
static void fts_load(FTS *sp, FTSENT *p);
static size_t fts_maxarglen(char *const *argv);
static void fts_padjust(FTS *sp, FTSENT *head);
static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir);
static _Bool AD_compare(void const *x, void const *y)
{























}
static size_t AD_hash(void const *x, size_t table_size)
{





}
static _Bool setup_dir(FTS *fts)
{




















}
static _Bool enter_dir(FTS *fts, FTSENT *ent)
{









































}
static void leave_dir(FTS *fts, FTSENT *ent)
{














































}
static void free_dir(FTS *sp)
{














}
static void fd_ring_clear(I_ring *fd_ring)
{





















}
static void fts_set_stat_required(FTSENT *p, _Bool required)
{




















}
__inline static DIR *opendirat(int fd, char const *dir)
{

























}
static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one)
{







































}
__inline static int diropen(FTS const *sp, char const *dir)
{

































}
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__, __leaf__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **));
FTS *(__attribute__((__warn_unused_result__, __leaf__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **))
{






































































































































































































}
static void fts_load(FTS *sp, FTSENT *p)
{



































}
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__, __leaf__)) fts_close)(FTS *sp);
int(__attribute__((__warn_unused_result__, __leaf__)) fts_close)(FTS *sp)
{

























































































}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__)) fstatfs)(int __fildes, struct statfs *__buf);
static _Bool dirent_inode_sort_may_be_useful(int dir_fd)
{























}
static _Bool leaf_optimization_applies(int dir_fd)
{



















}
static size_t LCO_hash(void const *x, size_t table_size)
{





}
static _Bool LCO_compare(void const *x, void const *y)
{







}
static _Bool link_count_optimize_ok(FTSENT const *p)
{























































}
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp);
FTSENT *(__attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp)
{

































































































































































































































































































































































































































































































































}
__attribute__((__nothrow__)) int(__attribute__((__leaf__)) fts_set)(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr);
int(__attribute__((__leaf__)) fts_set)(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr)
{























}
static int fts_compare_ino(struct _ftsent const **a, struct _ftsent const **b)
{





















}
static void set_stat_type(struct stat *st, unsigned int dtype)
{


























































}
static FTSENT *fts_build(FTS *sp, int type)
{






























































































































































































































































































































































































































































































































































}
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow)
{















































































































}
static int fts_compar(void const *a, void const *b)
{









}
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems)
{














































































}
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen)
{





















}
static void fts_lfree(FTSENT *head)
{















}
static _Bool fts_palloc(FTS *sp, size_t more)
{
























}
static void fts_padjust(FTS *sp, FTSENT *head)
{





















































}
static size_t fts_maxarglen(char *const *argv)
{




















}
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir)
{































































































































}
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
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
char const *Version = "8.2";
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__)) fchownat)(int __fd, char const *__file, __uid_t __owner, __gid_t __group, int __flag);
__inline static int chownat(int fd, char const *file, uid_t owner, gid_t group)
{





}
__inline static int lchownat(int fd, char const *file, uid_t owner, gid_t group)
{





}
extern void chopt_init(struct Chown_option *chopt);
extern void chopt_free(struct Chown_option *chopt __attribute__((__unused__)));
extern char *gid_to_name(gid_t gid);
extern char *uid_to_name(uid_t uid);
extern _Bool chown_files(char **files, int bit_flags, uid_t uid, gid_t gid, uid_t required_uid, gid_t required_gid, struct Chown_option const *chopt);
__inline static void ignore_ptr(void *p)
{



}
extern void chopt_init(struct Chown_option *chopt)
{
  {
    chopt->verbosity = (enum Verbosity)2;
    chopt->root_dev_ino = (struct dev_ino *)((void *)0);
    chopt->affect_symlink_referent = (_Bool)1;
    chopt->recurse = (_Bool)0;
    chopt->force_silent = (_Bool)0;
    chopt->user_name = (char *)((void *)0);
    chopt->group_name = (char *)((void *)0);
    return;
  }
}
extern void chopt_free(struct Chown_option *chopt __attribute__((__unused__)))
{



}
extern char *gid_to_name(gid_t gid)
{





















}
extern char *uid_to_name(uid_t uid)
{





















}
static void describe_change(char const *file, enum Change_status changed, char const *user, char const *group)
{








































































































































}
static enum RCH_status restricted_chown(int cwd_fd, char const *file, struct stat const *orig_st, uid_t uid, gid_t gid, uid_t required_uid, gid_t required_gid)
{









































































































































}
static _Bool change_file_owner(FTS *fts, FTSENT *ent, uid_t uid, gid_t gid, uid_t required_uid, gid_t required_gid, struct Chown_option const *chopt)
{















































































































































































































































































































































































































































































































































}
extern _Bool chown_files(char **files, int bit_flags, uid_t uid, gid_t gid, uid_t required_uid, gid_t required_gid, struct Chown_option const *chopt)
{















































































}
extern char *optarg;
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) atexit)(void (*__func)(void));
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);
__inline static void emit_ancillary_info(void)
{





































}
__inline static char *bad_cast(char const *s)
{



}
static char *reference_file;
static struct option const long_options___1[14] = {{"recursive", 0, (int *)((void *)0), 'R'}, {"changes", 0, (int *)((void *)0), 'c'}, {"dereference", 0, (int *)((void *)0), 128}, {"from", 1, (int *)((void *)0), 129}, {"no-dereference", 0, (int *)((void *)0), 'h'}, {"no-preserve-root", 0, (int *)((void *)0), 130}, {"preserve-root", 0, (int *)((void *)0), 131}, {"quiet", 0, (int *)((void *)0), 'f'}, {"silent", 0, (int *)((void *)0), 'f'}, {"reference", 1, (int *)((void *)0), 132}, {"verbose", 0, (int *)((void *)0), 'v'}, {"help", 0, (int *)((void *)0), -130}, {"version", 0, (int *)((void *)0), -131}, {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
__attribute__((__noreturn__)) void usage(int status);
void usage(int status)
{
  char *tmp;
                
                
                
                
                
                
                
                
                
                
                 
  {
    if (status != 0)
    {
      tmp = gettext("Try `%s --help\' for more information.\n");
      fprintf(stderr, (char const *)tmp, program_name);
    }
    else
    {
























































    }
    exit(status);
  }
}
static struct dev_ino dev_ino_buf;
#include "argv-fuzz-inl.h"
int main(int argc, char **argv)
{
  AFL_INIT_SET0("chown");
  _Bool preserve_root;
  uid_t uid;
  gid_t gid;
  uid_t required_uid;
  gid_t required_gid;
  int bit_flags;
  int dereference;
  struct Chown_option chopt;
  _Bool ok;
  int optc;
  char *u_dummy;
  char *g_dummy;
  char const *e;
  char const *tmp;
  char const *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char const *tmp___3;
  char *tmp___4;
  int tmp___5;
  struct stat ref_stats;
  char const *tmp___6;
  char *tmp___7;
  int *tmp___8;
  int tmp___9;
  char const *e___0;
  char const *tmp___10;
  char const *tmp___11;
  char const *tmp___12;
  char *tmp___13;
  int *tmp___14;
  int tmp___15;
  {
    preserve_root = (_Bool)0;
    uid = (uid_t)-1;
    gid = (gid_t)-1;
    required_uid = (uid_t)-1;
    required_gid = (gid_t)-1;
    bit_flags = 16;
    dereference = -1;
    set_program_name((char const *)*(argv + 0));
    setlocale(6, "");
    bindtextdomain("coreutils", "/usr/local/share/locale");
    textdomain("coreutils");
    atexit(&close_stdout);
    chopt_init(&chopt);
    while (1)
    {
      optc = getopt_long(argc, (char *const *)argv, "HLPRcfhv", long_options___1, (int *)((void *)0));
                        
       

       
                     
       

       
                     
       

       
                     
       

       
      if (optc == 104)
      {
        goto case_104;
      }
                      
       

       
                      
       

       
                      
       

       
                      
       

       
                      
       

       
                     
       

       
                     
       

       
      if (optc == 102)
      {
        goto case_102;
      }
                      
       

       
                       
       

       
                       
       

       
      goto switch_default;
    case_72:;


    case_76:;


    case_80:;


    case_104:;
      dereference = 0;
      goto switch_break;
    case_128:;


    case_130:;


    case_131:;


    case_132:;


    case_129:;








    case_82:;


    case_99:;


    case_102:;
      chopt.force_silent = (_Bool)1;
      goto switch_break;
    case_118:;


    case_neg_130:;


    case_neg_131:;



    switch_default:;
      usage(1);
    switch_break:;
    }




































































































  }
}
