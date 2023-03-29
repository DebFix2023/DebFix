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
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
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
typedef int wchar_t;
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
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct mbchar
{
  char const *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
typedef struct mbchar mbchar_t;
struct mbiter_multi
{
  char const *limit;
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbiter_multi mbi_iterator_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
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
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef unsigned int __mode_t;
typedef __mode_t mode_t;
typedef unsigned long uintptr_t;
typedef unsigned long longword;
struct preliminary_header
{
  void *next;
  int magic;
};
struct __anonstruct_magic_22
{
  char room[(((sizeof(struct preliminary_header) + 16UL) - 1UL) / 16UL) * 16UL - sizeof(int)];
  int word;
};
union header
{
  void *next;
  struct __anonstruct_magic_22 magic;
};
typedef int nl_item;
struct I_ring
{
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
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
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __nlink_t;
struct __anonstruct___fsid_t_1
{
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
typedef long __syscall_slong_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
struct dirent
{
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
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
struct _ftsent;
struct _ftsent;
struct _ftsent;
struct cycle_check_state;
struct cycle_check_state;
struct cycle_check_state;
union __anonunion_fts_cycle_19
{
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_18
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
  union __anonunion_fts_cycle_19 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_18 FTS;
struct _ftsent
{
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  DIR *fts_dirp;
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
typedef unsigned long __re_long_size_t;
typedef unsigned long reg_syntax_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_pattern_buffer
{
  struct re_dfa_t *buffer;
  __re_long_size_t allocated;
  __re_long_size_t used;
  reg_syntax_t syntax;
  char *fastmap;
  unsigned char *translate;
  size_t re_nsub;
  unsigned int can_be_null : 1;
  unsigned int regs_allocated : 2;
  unsigned int fastmap_accurate : 1;
  unsigned int no_sub : 1;
  unsigned int not_bol : 1;
  unsigned int not_eol : 1;
  unsigned int newline_anchor : 1;
};
typedef struct re_pattern_buffer regex_t;
typedef int regoff_t;
struct __anonstruct_regmatch_t_29
{
  regoff_t rm_so;
  regoff_t rm_eo;
};
typedef struct __anonstruct_regmatch_t_29 regmatch_t;
struct exclude;
struct exclude;
struct exclude;
union __anonunion_v_33
{
  char const *pattern;
  regex_t re;
};
struct patopts
{
  int options;
  union __anonunion_v_33 v;
};
struct exclude_pattern
{
  struct patopts *exclude;
  size_t exclude_alloc;
  size_t exclude_count;
};
enum exclude_type
{
  exclude_hash = 0,
  exclude_pattern = 1
};
union __anonunion_v_34
{
  Hash_table *table;
  struct exclude_pattern pat;
};
struct exclude_segment
{
  struct exclude_segment *next;
  enum exclude_type type;
  int options;
  union __anonunion_v_34 v;
};
struct pattern_buffer
{
  struct pattern_buffer *next;
  char *base;
};
struct exclude
{
  struct exclude_segment *head;
  struct pattern_buffer *patbuf;
};
struct real_pcre;
struct real_pcre;
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct pcre_extra
{
  unsigned long flags;
  void *study_data;
  unsigned long match_limit;
  void *callout_data;
  unsigned char const *tables;
  unsigned long match_limit_recursion;
  unsigned char **mark;
  void *executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct kwsmatch
{
  size_t index;
  size_t offset[1];
  size_t size[1];
};
struct kwset;
struct kwset;
struct kwset;
typedef struct kwset *kwset_t;
typedef signed char mb_len_map_t;
struct obstack;
struct obstack;
struct obstack;
struct _obstack_chunk
{
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_56
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
  union __anonunion_temp_56 temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct trie;
struct trie;
struct trie;
struct tree
{
  struct tree *llink;
  struct tree *rlink;
  struct trie *trie;
  unsigned char label;
  char balance;
};
struct trie
{
  size_t accepting;
  struct tree *links;
  struct trie *parent;
  struct trie *next;
  struct trie *fail;
  int depth;
  int shift;
  int maxshift;
};
struct kwset
{
  struct obstack obstack;
  ptrdiff_t words;
  struct trie *trie;
  int mind;
  int maxd;
  unsigned char delta[256];
  struct trie *next[256];
  char *target;
  int *shift;
  char const *trans;
  char gc1;
  char gc2;
  int gc1help;
};
enum __anonenum_dirs_58
{
  L = 0,
  R = 1
};
typedef int __re_idx_t;
typedef unsigned int __re_size_t;
struct re_registers
{
  __re_size_t num_regs;
  regoff_t *start;
  regoff_t *end;
};
struct dfamust
{
  _Bool exact;
  _Bool begline;
  _Bool endline;
  char *must;
  struct dfamust *next;
};
struct dfa;
struct dfa;
struct dfa;
struct patterns
{
  struct re_pattern_buffer regexbuf;
  struct re_registers regs;
};
enum __anonenum_mode_60
{
  DW_NONE = 0,
  DW_POSIX = 1,
  DW_GNU = 2
};
typedef unsigned long wctype_t;
typedef unsigned int charclass_word;
typedef charclass_word charclass[8];
typedef ptrdiff_t token;
struct __anonstruct_position_35
{
  size_t index;
  unsigned int constraint;
};
typedef struct __anonstruct_position_35 position;
struct __anonstruct_position_set_36
{
  position *elems;
  size_t nelem;
  size_t alloc;
};
typedef struct __anonstruct_position_set_36 position_set;
struct __anonstruct_leaf_set_37
{
  size_t *elems;
  size_t nelem;
};
typedef struct __anonstruct_leaf_set_37 leaf_set;
struct __anonstruct_dfa_state_38
{
  size_t hash;
  position_set elems;
  unsigned char context;
  _Bool has_backref;
  _Bool has_mbcset;
  unsigned short constraint;
  token first_end;
  position_set mbps;
};
typedef struct __anonstruct_dfa_state_38 dfa_state;
typedef ptrdiff_t state_num;
struct __anonstruct_ranges_39
{
  wchar_t beg;
  wchar_t end;
};
struct mb_char_classes
{
  ptrdiff_t cset;
  _Bool invert;
  wchar_t *chars;
  size_t nchars;
  wctype_t *ch_classes;
  size_t nch_classes;
  struct __anonstruct_ranges_39 *ranges;
  size_t nranges;
  char **equivs;
  size_t nequivs;
  char **coll_elems;
  size_t ncoll_elems;
};
struct dfa
{
  charclass *charclasses;
  size_t cindex;
  size_t calloc;
  token *tokens;
  size_t tindex;
  size_t talloc;
  size_t depth;
  size_t nleaves;
  size_t nregexps;
  _Bool fast;
  _Bool multibyte;
  token utf8_anychar_classes[5];
  mbstate_t mbs;
  int *multibyte_prop;
  wint_t mbrtowc_cache[256];
  struct mb_char_classes *mbcsets;
  size_t nmbcsets;
  size_t mbcsets_alloc;
  struct dfa *superset;
  dfa_state *states;
  state_num sindex;
  size_t salloc;
  position_set *follows;
  _Bool searchflag;
  state_num tralloc;
  int trcount;
  state_num **trans;
  state_num **fails;
  int *success;
  state_num *newlines;
  struct dfamust *musts;
  position_set mb_follows;
  int *mb_match_lens;
};
typedef int predicate(int);
struct dfa_ctype
{
  char const *name;
  predicate *func;
  _Bool single_byte_only;
};
struct __anonstruct_stkalloc_43
{
  _Bool nullable;
  size_t nfirstpos;
  size_t nlastpos;
};
enum __anonenum_status_transit_state_44
{
  TRANSIT_STATE_IN_PROGRESS = 0,
  TRANSIT_STATE_DONE = 1,
  TRANSIT_STATE_END_BUFFER = 2
};
typedef enum __anonenum_status_transit_state_44 status_transit_state;
struct must;
struct must;
struct must;
typedef struct must must;
struct must
{
  char **in;
  char *left;
  char *right;
  char *is;
  _Bool begline;
  _Bool endline;
  must *prev;
};
typedef __off_t off_t;
struct color_cap
{
  char const *name;
  char const **var;
  void (*fct)(void);
};
enum directories_type
{
  READ_DIRECTORIES = 2,
  RECURSE_DIRECTORIES = 3,
  SKIP_DIRECTORIES = 4
};
enum __anonenum_devices_71
{
  READ_COMMAND_LINE_DEVICES = 0,
  READ_DEVICES = 1,
  SKIP_DEVICES = 2
};
enum __anonenum_binary_files_72
{
  BINARY_BINARY_FILES = 0,
  TEXT_BINARY_FILES = 1,
  WITHOUT_MATCH_BINARY_FILES = 2
};
enum __anonenum_File_type_73
{
  UNKNOWN = 0,
  DOS_BINARY = 1,
  DOS_TEXT = 2,
  UNIX_TEXT = 3
};
typedef enum __anonenum_File_type_73 File_type;
struct dos_map
{
  off_t pos;
  off_t add;
};
struct matcher
{
  char const name[16];
  void (*compile)(char const *, size_t);
  size_t (*execute)(char const *, size_t, size_t *, char const *);
};
extern __attribute__((__nothrow__)) unsigned short const **__ctype_b_loc(void) __attribute__((__const__));
extern __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const *__assertion, char const *__file, unsigned int __line, char const *__function);
extern __attribute__((__nothrow__)) int *__errno_location(void) __attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strchr)(char const *__s, int __c) __attribute__((__pure__));
extern __attribute__((__nothrow__, __noreturn__)) void abort(void);
extern void error(int __status, int __errnum, char const *__format, ...);
int volatile exit_failure;
extern __attribute__((__nothrow__)) char *gettext(char const *__msgid) __attribute__((__format_arg__(1)));
extern __attribute__((__nothrow__)) intmax_t strtoimax(char const *__restrict __nptr, char **__restrict __endptr, int __base);
strtol_error xstrtoimax(char const *s, char **ptr, int strtol_base, intmax_t *val, char const *valid_suffixes);
static strtol_error bkm_scale___1(intmax_t *x, int scale_factor)
{














}
static strtol_error bkm_scale_by_power___1(intmax_t *x, int base, int power)
{

























}
strtol_error xstrtoimax(char const *s, char **ptr, int strtol_base, intmax_t *val, char const *valid_suffixes)
{
















































































































































































































































































}
__attribute__((__noreturn__)) void xalloc_die(void);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xnmalloc(size_t n, size_t s)
{






















}
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s)
{






















}
void *x2nrealloc(void *p, size_t *pn, size_t s)
{




























}
char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
char *xcharalloc(size_t n)
{




















}
void *xzalloc(size_t s) __attribute__((__malloc__, __alloc_size__(1)));
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *x2realloc(void *p, size_t *pn);
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
char *xstrdup(char const *string) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *malloc(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *calloc(size_t __nmemb, size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__)) realloc)(void *__ptr, size_t __size);
extern __attribute__((__nothrow__)) void free(void *__ptr);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memset)(void *__s, int __c, size_t __n);
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1))) strlen)(char const *__s) __attribute__((__pure__));
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xmalloc(size_t n)
{
  void *p;
  void *tmp;
  {
    {
      tmp = malloc(n);
      p = tmp;
    }
           
     






     
    return (p);
  }
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xrealloc(void *p, size_t n)
{

























}
void *x2realloc(void *p, size_t *pn)
{







}
void *xzalloc(size_t s) __attribute__((__malloc__, __alloc_size__(1)));
void *xzalloc(size_t s)
{









}
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xcalloc(size_t n, size_t s)
{













}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
void *xmemdup(void const *p, size_t s)
{
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memcpy((void * /* __restrict  */)tmp, (void const * /* __restrict  */)p, s);
    }
    return (tmp___0);
  }
}
char *xstrdup(char const *string) __attribute__((__malloc__));
char *xstrdup(char const *string)
{









}
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void)
{









}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
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
char *trim2(char const *s, int how);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) memmove)(void *__dest, void const *__src, size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strdup)(char const *__s) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void);
extern __attribute__((__nothrow__)) int mbsinit(mbstate_t const *__ps) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t mbrtowc(wchar_t *__restrict __pwc, char const *__restrict __s, size_t __n, mbstate_t *__restrict __p);
extern __attribute__((__nothrow__)) int iswspace(wint_t __wc);
void mb_copy(mbchar_t *new_mbc, mbchar_t const *old_mbc)
{






















}
unsigned int const is_basic_table[8];
_Bool is_basic(char c)
{



}
void mbiter_multi_next(struct mbiter_multi *iter)
{

















































































}
char *trim2(char const *s, int how)
{






























































































































































































































































































}
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memchr)(void const *__s, int __c, size_t __n) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen)
{
















}
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
extern int close(int __fd);
extern __attribute__((__nothrow__)) int fchdir(int __fd);
int set_cloexec_flag(int desc, _Bool value);
int open_safer(char const *file, int flags, ...);
size_t safe_read(int fd, void *buf, size_t count);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
size_t safe_read(int fd, void *buf, size_t count)
{
  ssize_t result;
  ssize_t tmp;
  int *tmp___0;
  int *tmp___1;
  {
    {
      while (1)
      {
                                     ;
        {
          tmp = read(fd, buf, count);
          result = tmp;
        }
        if (0L <= result)
        {
          return ((size_t)result);
        }
        else
        {
          {
            tmp___1 = __errno_location();
          }
          if (*tmp___1 == 4)
          {

          }
          else
          {
            {
              tmp___0 = __errno_location();
            }
            if (*tmp___0 == 22)
            {








            }
            else
            {
              return ((size_t)result);
            }
          }
        }

      }

    }

  }
}
char const *const quoting_style_args[9];
enum quoting_style const quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
char *quotearg_colon(char const *arg);
struct quoting_options quote_quoting_options;
char const *quote_n_mem(int n, char const *arg, size_t argsize);
char const *quote_n(int n, char const *arg);
char const *quote(char const *arg);
char const *locale_charset(void);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) memcmp)(void const *__s1, void const *__s2, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int iswprint(wint_t __wc);
char const *const quoting_style_args[9] = {(char const * /* const  */) "literal", (char const * /* const  */) "shell", (char const * /* const  */) "shell-always", (char const * /* const  */) "c", (char const * /* const  */) "c-maybe", (char const * /* const  */) "escape", (char const * /* const  */) "locale", (char const * /* const  */) "clocale", (char const * /* const  */)((char const *)0)};
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
static size_t quotearg_buffer_restyled(char *buffer___0, size_t buffersize, char const *arg, size_t argsize, enum quoting_style quoting_style, int flags, unsigned int const *quote_these_too, char const *left_quote, char const *right_quote)
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
struct quoting_options quote_quoting_options = {(enum quoting_style)6, 0, {0U}, (char const *)((void *)0), (char const *)((void *)0)};
char const *quote_n_mem(int n, char const *arg, size_t argsize)
{







}
char const *quote_n(int n, char const *arg)
{







}
char const *quote(char const *arg)
{







}
char const *proper_name(char const *name);
extern __attribute__((__nothrow__)) int sprintf(char *__restrict __s, char const *__restrict __format, ...);
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int iswalnum(wint_t __wc);
void mbuiter_multi_next(struct mbuiter_multi *iter)
{























































































}
static _Bool mbsstr_trimmed_wordbounded(char const *string, char const *sub)
{




















































































































































































































































































































}
char const *proper_name(char const *name)
{


























































}
char const *program_name;
void set_program_name(char const *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern struct _IO_FILE *stderr;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strncmp)(char const *__s1, char const *__s2, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strrchr)(char const *__s, int __c) __attribute__((__pure__));
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0)
{
  char const *slash;
  char const *base;
          
              
  {
                                                           
     
       


       
     
    {
      slash = (char const *)strrchr(argv0, '/');
    }
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
int fd_safer(int fd);
extern DIR *fdopendir(int __fd);
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) dirfd)(DIR *__dirp);
int dup_safer(int fd);
int openat_safer(int fd, char const *file, int flags, ...);
extern int(__attribute__((__nonnull__(2))) openat)(int __fd, char const *__file, int __oflag, ...);
int openat_safer(int fd, char const *file, int flags, ...)
{
  mode_t mode___0;
             
  int tmp;
  int tmp___0;
  {
    mode___0 = (mode_t)0;
                   
     
       



       
     
    {
      tmp = openat(fd, file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
    return (tmp___0);
  }
}
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
int open_safer(char const *file, int flags, ...)
{




















}
void *memchr2(void const *s, int c1_in, int c2_in, size_t n) __attribute__((__pure__));
void *memchr2(void const *s, int c1_in, int c2_in, size_t n) __attribute__((__pure__));
void *memchr2(void const *s, int c1_in, int c2_in, size_t n)
{





































































































































}
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1))) strnlen)(char const *__string, size_t __maxlen) __attribute__((__pure__));
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) __attribute__((__pure__));
void *mmalloca(size_t n);
void freea(void *p);
static _Bool knuth_morris_pratt(unsigned char const *haystack, unsigned char const *needle, size_t needle_len, unsigned char const **resultp)
{



































































































































}
static _Bool knuth_morris_pratt_multibyte(char const *haystack, char const *needle, char const **resultp)
{











































































































































































































































































































































































}
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle)
{




























































































































































































































































































































































































































































































}
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) __attribute__((__pure__));
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string)
{































































}
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int tolower(int __c);
extern __attribute__((__nothrow__)) wint_t towlower(wint_t __wc);
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2)
{




























































































































































































































































































}
unsigned int const is_basic_table[8] = {(unsigned int const)6656, (unsigned int const)4294967279U, (unsigned int const)4294967294U, (unsigned int const)2147483646};
static void *mmalloca_results[257];
void *mmalloca(size_t n)
{


























}
void freea(void *p)
{







































}
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
extern int fclose(FILE *__stream);
extern __attribute__((__nothrow__)) FILE *fdopen(int __fd, char const *__modes);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int getc_unlocked(FILE *__stream);
extern int ungetc(int __c, FILE *__stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2))) strcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) getenv)(char const *__name);
extern __attribute__((__nothrow__)) char *nl_langinfo(nl_item __item);
static char const *volatile charset_aliases;
static char const *get_charset_aliases(void)
{


















































































































































































































































}
char const *locale_charset(void)
{




































































}
void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(I_ring const *ir) __attribute__((__pure__));
void i_ring_init(I_ring *ir, int default_val)
{
  int i;
  {
    ir->ir_empty = (_Bool)1;
    ir->ir_front = 0U;
    ir->ir_back = 0U;
    i = 0;
    {
      while (1)
      {
                                     ;
        if (!(i < 4))
        {
          goto while_break;
        }
        ir->ir_data[i] = default_val;
        i++;
      }

    }
  while_break:;
    ir->ir_default_val = default_val;
    return;
  }
}
_Bool i_ring_empty(I_ring const *ir) __attribute__((__pure__));
_Bool i_ring_empty(I_ring const *ir)
{
  {
    return ((_Bool)ir->ir_empty);
  }
}
int i_ring_push(I_ring *ir, int val)
{
  unsigned int dest_idx;
  int old_val;
  {
    dest_idx = (ir->ir_front + (unsigned int)(!ir->ir_empty)) % 4U;
    old_val = ir->ir_data[dest_idx];
    ir->ir_data[dest_idx] = val;
    ir->ir_front = dest_idx;
    if (dest_idx == ir->ir_back)
    {
      ir->ir_back = (ir->ir_back + (unsigned int)(!ir->ir_empty)) % 4U;
    }
    ir->ir_empty = (_Bool)0;
    return (old_val);
  }
}
int i_ring_pop(I_ring *ir)
{
  int top_val;
  _Bool tmp;
  {
    {
      tmp = i_ring_empty((I_ring const *)ir);
    }
            
     
       

       
     
    top_val = ir->ir_data[ir->ir_front];
    ir->ir_data[ir->ir_front] = ir->ir_default_val;
    if (ir->ir_front == ir->ir_back)
    {
      ir->ir_empty = (_Bool)1;
    }
    else
    {
      ir->ir_front = ((ir->ir_front + 4U) - 1U) % 4U;
    }
    return (top_val);
  }
}
void *hash_lookup(Hash_table const *table, void const *entry);
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate, Hash_tuning const *tuning, size_t (*hasher)(void const *, size_t), _Bool (*comparator)(void const *, void const *), void (*data_freer)(void *));
void hash_free(Hash_table *table);
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate);
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table, void const *entry);
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent);
void *hash_delete(Hash_table *table, void const *entry);
size_t rotr_sz(size_t x, int n)
{



}
static struct hash_tuning const default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool)0};
static struct hash_entry *safe_hasher(Hash_table const *table, void const *key)
{
  size_t n;
  size_t tmp;
  {
    {
      tmp = (*(table->hasher))(key, (size_t)table->n_buckets);
      n = tmp;
    }
                                        
     
       

       
     
    return ((struct hash_entry *)(table->bucket + n));
  }
}
void *hash_lookup(Hash_table const *table, void const *entry)
{











































}
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
size_t hash_string(char const *string, size_t n_buckets)
{





















}
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate)
{
  size_t divisor;
  size_t square;
  int tmp;
  {
    divisor = (size_t)3;
    square = divisor * divisor;
    {
      while (1)
      {
                                     ;
        if (square < candidate)
        {
          if (!(candidate % divisor))
          {
            goto while_break;
          }
        }
        else
        {
          goto while_break;
        }
        divisor++;
        square += 4UL * divisor;
        divisor++;
      }

    }
  while_break:;
    if (candidate % divisor)
    {
      tmp = 1;
    }
    else
    {
      tmp = 0;
    }
    return ((_Bool)tmp);
  }
}
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate)
{
  _Bool tmp;
  {
                         
     

     
    candidate |= 1UL;
    {
      while (1)
      {
                                     ;
        if (0xffffffffffffffffUL != candidate)
        {
          {
            tmp = is_prime(candidate);
          }
          if (tmp)
          {
            goto while_break;
          }
        }
        else
        {

        }
        candidate += 2UL;
      }

    }
  while_break:;
    return (candidate);
  }
}
static size_t raw_hasher(void const *data, size_t n)
{









}
static _Bool raw_comparator(void const *a, void const *b)
{



}
static _Bool check_tuning(Hash_table *table)
{
  Hash_tuning const *tuning;
                
  {
    tuning = table->tuning;
    if ((unsigned long)tuning == (unsigned long)(&default_tuning))
    {
      return ((_Bool)1);
    }

























  }
}
static size_t __attribute__((__pure__)) compute_bucket_size(size_t candidate, Hash_tuning const *tuning)
{
  float new_candidate;
  int tmp;
  {
    if (!tuning->is_n_buckets)
    {
      new_candidate = (float)((float const)candidate / tuning->growth_threshold);
                                                       
       

       
      candidate = (size_t)new_candidate;
    }
    {
      candidate = next_prime(candidate);
    }
    if (sizeof(ptrdiff_t) <= sizeof(size_t))
    {
      tmp = -1;
    }
    else
    {

    }
                                                              
     

     
    return ((size_t __attribute__((__pure__)))candidate);
  }
}
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate, Hash_tuning const *tuning, size_t (*hasher)(void const *, size_t), _Bool (*comparator)(void const *, void const *), void (*data_freer)(void *))
{
  Hash_table *table;
  _Bool tmp;
  {
                                                            
     

     
                                                                
     

     
    {
      table = (Hash_table *)malloc(sizeof(*table));
    }
                                                           
     

     
    if (!tuning)
    {
      tuning = &default_tuning;
    }
    {
      table->tuning = tuning;
      tmp = check_tuning(table);
    }
             
     

     
    {
      table->n_buckets = (size_t)compute_bucket_size(candidate, tuning);
    }
                          
     

     
    {
      table->bucket = (struct hash_entry *)calloc(table->n_buckets, sizeof(*(table->bucket)));
    }
                                                                   
     

     
    table->bucket_limit = (struct hash_entry const *)(table->bucket + table->n_buckets);
    table->n_buckets_used = (size_t)0;
    table->n_entries = (size_t)0;
    table->hasher = hasher;
    table->comparator = comparator;
    table->data_freer = data_freer;
    table->free_entry_list = (struct hash_entry *)((void *)0);
    return (table);
       ;
  {

  }

  }
}
void hash_free(Hash_table *table)
{
  struct hash_entry *bucket;
  struct hash_entry *cursor;
                          
  {
                          
     
                           
       

         






























         

       
     
    bucket = table->bucket;
    {
      while (1)
      {
                                         ;
        if (!((unsigned long)bucket < (unsigned long)table->bucket_limit))
        {
          goto while_break___1;
        }
        cursor = bucket->next;
        {
          while (1)
          {
                                             ;
            if (!cursor)
            {
              goto while_break___2;
            }
            {



            }
          }

        }
      while_break___2:;
        bucket++;
      }

    }
  while_break___1:;
    cursor = table->free_entry_list;
    {
      while (1)
      {
                                         ;
        if (!cursor)
        {
          goto while_break___3;
        }
        {



        }
      }

    }
  while_break___3:;
  {
    free((void *)table->bucket);
    free((void *)table);
  }
    return;
  }
}
static struct hash_entry *allocate_entry(Hash_table *table)
{
  struct hash_entry *new;
  {
    if (table->free_entry_list)
    {
      new = table->free_entry_list;
      table->free_entry_list = new->next;
    }
    else
    {
      {
        new = (struct hash_entry *)malloc(sizeof(*new));
      }
    }
    return (new);
  }
}
static void free_entry(Hash_table *table, struct hash_entry *entry)
{
  {
    entry->data = (void *)0;
    entry->next = table->free_entry_list;
    table->free_entry_list = entry;
    return;
  }
}
static void *hash_find_entry(Hash_table *table, void const *entry, struct hash_entry **bucket_head, _Bool delete___0)
{
  struct hash_entry *bucket;
  struct hash_entry *tmp;
  struct hash_entry *cursor;
  void *data;
                          
  _Bool tmp___0;
  void *data___0;
  struct hash_entry *next___0;
  _Bool tmp___1;
  {
    {
      tmp = safe_hasher((Hash_table const *)table, entry);
      bucket = tmp;
      *bucket_head = bucket;
    }
    if ((unsigned long)bucket->data == (unsigned long)((void *)0))
    {
      return ((void *)0);
    }
    if ((unsigned long)entry == (unsigned long)bucket->data)
    {

    }
    else
    {
      {
        tmp___0 = (*(table->comparator))(entry, (void const *)bucket->data);
      }
      if (tmp___0)
      {
         ;
        data = bucket->data;
        if (delete___0)
        {
          if (bucket->next)
          {
            {



            }
          }
          else
          {
            bucket->data = (void *)0;
          }
        }
        return (data);
      }
    }
    cursor = bucket;
    {
      while (1)
      {
                                     ;
        if (!cursor->next)
        {
          goto while_break;
        }
        if ((unsigned long)entry == (unsigned long)(cursor->next)->data)
        {

        }
        else
        {
          {
            tmp___1 = (*(table->comparator))(entry, (void const *)(cursor->next)->data);
          }
          if (tmp___1)
          {
                 ;
            data___0 = (cursor->next)->data;
            if (delete___0)
            {
              {
                next___0 = cursor->next;
                cursor->next = next___0->next;
                free_entry(table, next___0);
              }
            }
            return (data___0);
          }
        }
        cursor = cursor->next;
      }

    }
  while_break:;
    return ((void *)0);
  }
}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe)
{


























































































}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate)
{















































































}
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent)
{
  void *data;
  struct hash_entry *bucket;
                            
                  
            
                
                
  struct hash_entry *new_entry;
  struct hash_entry *tmp___2;
  {
               
     
       

       
     
    {
      data = hash_find_entry(table, entry, &bucket, (_Bool)0);
    }
                                                          
     





     
                                                                                                               
     
       

       

































     
    if (bucket->data)
    {
      {
        tmp___2 = allocate_entry(table);
        new_entry = tmp___2;
      }
                                                                 
       

       
      new_entry->data = (void *)entry;
      new_entry->next = bucket->next;
      bucket->next = new_entry;
      (table->n_entries)++;
      return (1);
    }
    bucket->data = (void *)entry;
    (table->n_entries)++;
    (table->n_buckets_used)++;
    return (1);
  }
}
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table, void const *entry)
{
  void const *matched_ent;
  int err;
  int tmp;
  void const *tmp___0;
  void *tmp___1;
  {
    {
      tmp = hash_insert_if_absent(table, entry, &matched_ent);
      err = tmp;
    }
    if (err == -1)
    {

    }
    else
    {
      if (err == 0)
      {

      }
      else
      {
        tmp___0 = entry;
      }
      tmp___1 = (void *)tmp___0;
    }
    return (tmp___1);
  }
}
void *hash_delete(Hash_table *table, void const *entry)
{
  void *data;
  struct hash_entry *bucket;
                            
                   
            
                            
                          
                
  {
    {
      data = hash_find_entry(table, entry, &bucket, (_Bool)1);
    }
              
     

     
    (table->n_entries)--;
    if (!bucket->data)
    {
      (table->n_buckets_used)--;
                                                                                                                 
       
         

         






































       
    }
    return (data);
  }
}
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2))) fstat)(int __fd, struct stat *__buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2, 3))) fstatat)(int __fd, char const *__restrict __file, struct stat *__restrict __buf, int __flag);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) lstat)(char const *__restrict __file, struct stat *__restrict __buf);
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp);
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **));
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp);
__attribute__((__nothrow__)) int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr);
extern void(__attribute__((__nonnull__(1, 4))) qsort)(void *__base, size_t __nmemb, size_t __size, int (*__compar)(void const *, void const *));
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen);
static FTSENT *fts_build(FTS *sp, int type);
static void fts_lfree(FTSENT *head);
static void fts_load(FTS *sp, FTSENT *p);
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv);
static void fts_padjust(FTS *sp, FTSENT *head);
static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir);
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb);
static _Bool AD_compare(void const *x, void const *y)
{
  struct Active_dir const *ax;
  struct Active_dir const *ay;
  int tmp;
  {
    ax = (struct Active_dir const *)x;
    ay = (struct Active_dir const *)y;
    if (ax->ino == ay->ino)
    {
      if (ax->dev == ay->dev)
      {
        tmp = 1;
      }
      else
      {

      }
    }
    else
    {
      tmp = 0;
    }
    return ((_Bool)tmp);
  }
}
static size_t AD_hash(void const *x, size_t table_size)
{
  struct Active_dir const *ax;
  {
    ax = (struct Active_dir const *)x;
    return ((uintmax_t)ax->ino % table_size);
  }
}
static _Bool setup_dir(FTS *fts)
{
  {
    if (fts->fts_options & 258)
    {
      {
        fts->fts_cycle.ht = hash_initialize((size_t)31, (Hash_tuning const *)((void *)0), &AD_hash, &AD_compare, &free);
      }
                             
       

       
    }
    else
    {
      {

      }




      {

      }
    }
    return ((_Bool)1);
  }
}
static _Bool enter_dir(FTS *fts, FTSENT *ent)
{
  struct stat const *st;
  struct Active_dir *ad;
  struct Active_dir *tmp;
  struct Active_dir *ad_from_table;
                
  {
    if (fts->fts_options & 258)
    {
      {
        st = (struct stat const *)(ent->fts_statp);
        tmp = (struct Active_dir *)malloc(sizeof(*ad));
        ad = tmp;
      }
              
       

       
      {
        ad->dev = (dev_t)st->st_dev;
        ad->ino = (ino_t)st->st_ino;
        ad->fts_ent = ent;
        ad_from_table = (struct Active_dir *)hash_insert(fts->fts_cycle.ht, (void const *)ad);
      }
                                                            
       
         

         






       
    }
    else
    {
      {

      }





    }
    return ((_Bool)1);
  }
}
static void leave_dir(FTS *fts, FTSENT *ent)
{
  struct stat const *st;
  struct Active_dir obj;
  void *found;
                 
  {
    st = (struct stat const *)(ent->fts_statp);
    if (fts->fts_options & 258)
    {
      {
        obj.dev = (dev_t)st->st_dev;
        obj.ino = (ino_t)st->st_ino;
        found = hash_delete(fts->fts_cycle.ht, (void const *)(&obj));
      }
                 
       
         

         
       
      {
        free(found);
      }
    }
    else
    {






























    }
    return;
  }
}
static void free_dir(FTS *sp)
{
  {
    if (sp->fts_options & 258)
    {
      if (sp->fts_cycle.ht)
      {
        {
          hash_free(sp->fts_cycle.ht);
        }
      }
    }
    else
    {
      {

      }
    }
    return;
  }
}
static void fd_ring_clear(I_ring *fd_ring)
{
  int fd;
  int tmp;
  _Bool tmp___0;
  {
    {
      while (1)
      {
                                     ;
        {
          tmp___0 = i_ring_empty((I_ring const *)fd_ring);
        }
        if (tmp___0)
        {
          goto while_break;
        }
        {
          tmp = i_ring_pop(fd_ring);
          fd = tmp;
        }
                    
         
           

           
         
      }

    }
  while_break:;
    return;
  }
}
static void fts_set_stat_required(FTSENT *p, _Bool required)
{
  {
    {
      while (1)
      {
                                     ;
                                      
         
           

           
         
        goto while_break;
      }

    }
  while_break:;
    if (required)
    {
      p->fts_statp[0].st_size = (__off_t)2;
    }
    else
    {
      p->fts_statp[0].st_size = (__off_t)1;
    }
    return;
  }
}
static DIR *opendirat(int fd, char const *dir, int extra_flags, int *pdir_fd)
{
  int new_fd;
  int tmp;
  DIR *dirp;
                  
               
               
  {
    {
      tmp = openat_safer(fd, dir, 67840 | extra_flags);
      new_fd = tmp;
    }
                   
     

     
    {
      set_cloexec_flag(new_fd, (_Bool)1);
      dirp = fdopendir(new_fd);
    }
    if (dirp)
    {
      *pdir_fd = new_fd;
    }
    else
    {
      {





      }
    }
    return (dirp);
  }
}
static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one)
{
  int old;
  int prev_fd_in_slot;
  int tmp;
  {
    old = sp->fts_cwd_fd;
    {
      while (1)
      {
                                     ;
                         
         
                             
           
             

             
           
         
        goto while_break;
      }

    }
  while_break:;
    if (chdir_down_one)
    {
      {
        tmp = i_ring_push(&sp->fts_fd_ring, old);
        prev_fd_in_slot = tmp;
      }
      if (0 <= prev_fd_in_slot)
      {
        {
          close(prev_fd_in_slot);
        }
      }
    }
    else
    {
      if (!(sp->fts_options & 4))
      {
        if (0 <= old)
        {
          {
            close(old);
          }
        }
      }
    }
    sp->fts_cwd_fd = fd;
    return;
  }
}
static int restore_initial_cwd(FTS *sp)
{
  int fail;
  int tmp;
              
              
  int tmp___2;
  int tmp___3;
  {
    if (!(sp->fts_options & 4))
    {
      if (sp->fts_options & 512)
      {
        if (sp->fts_options & 512)
        {
          tmp = -100;
        }
        else
        {

        }
        {
          cwd_advance_fd(sp, tmp, (_Bool)1);
          tmp___2 = 0;
        }
      }
      else
      {








        {


        }
      }
      if (tmp___2)
      {

      }
      else
      {
        tmp___3 = 0;
      }
    }
    else
    {

    }
    {
      fail = tmp___3;
      fd_ring_clear(&sp->fts_fd_ring);
    }
    return (fail);
  }
}
static int diropen(FTS const *sp, char const *dir)
{
















































}
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **));
FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **))
{
  register FTS *sp;
  register FTSENT *p;
  register FTSENT *root;
  register size_t nitems;
  FTSENT *parent;
  FTSENT *tmp;
  _Bool defer_stat;
               
               
               
  size_t maxarglen;
  size_t tmp___5;
  size_t tmp___6;
  _Bool tmp___7;
  int tmp___8;
  size_t len;
  size_t tmp___9;
  char const *v;
  struct _ftsent *tmp___10;
  _Bool tmp___11;
               
                    
                    
                    
                    
  {
    parent = (FTSENT *)((void *)0);
    tmp = (FTSENT *)((void *)0);
                        
     
       


       

     
                    
     








     
                        
     
       


       

     
    {
      sp = (FTS *)malloc(sizeof(FTS));
    }
                                                        
     

     
    {
      memset((void *)sp, 0, sizeof(FTS));
      sp->fts_compar = compar;
      sp->fts_options = options;
    }
                            
     


     
    {
      sp->fts_cwd_fd = -100;
      tmp___5 = (size_t)fts_maxarglen(argv);
      maxarglen = tmp___5;
    }
    if (maxarglen > 4096UL)
    {

    }
    else
    {
      tmp___6 = (size_t)4096;
    }
    {
      tmp___7 = fts_palloc(sp, tmp___6);
    }
                 
     

     
    if ((unsigned long)*argv != (unsigned long)((void *)0))
    {
      {
        parent = fts_alloc(sp, "", (size_t)0);
      }
                                                              
       

       
      parent->fts_level = (ptrdiff_t)-1;
    }
    if ((unsigned long)compar == (unsigned long)((void *)0))
    {
      tmp___8 = 1;
    }
    else
    {








    }
    defer_stat = (_Bool)tmp___8;
    root = (FTSENT *)((void *)0);
    nitems = (size_t)0;
    {
      while (1)
      {
                                     ;
        if (!((unsigned long)*argv != (unsigned long)((void *)0)))
        {
          goto while_break;
        }
        {
          tmp___9 = strlen((char const *)*argv);
          len = tmp___9;
        }
        if (!(options & 4096))
        {
          v = (char const *)*argv;
                        
           























           
        }
        {
          p = fts_alloc(sp, (char const *)*argv, len);
        }
                                                           
         

         
        p->fts_level = (ptrdiff_t)0;
        p->fts_parent = parent;
        p->fts_accpath = p->fts_name;
        if (defer_stat)
        {
          if ((unsigned long)root != (unsigned long)((void *)0))
          {
            {


            }
          }
          else
          {
            {
              p->fts_info = fts_stat(sp, p, (_Bool)0);
            }
          }
        }
        else
        {
          {

          }
        }
        if (compar)
        {


        }
        else
        {
          p->fts_link = (struct _ftsent *)((void *)0);
          if ((unsigned long)root == (unsigned long)((void *)0))
          {
            root = p;
            tmp = root;
          }
          else
          {


          }
        }
        argv++;
        nitems++;
      }

    }
  while_break:;
               
     






     
    {
      tmp___10 = fts_alloc(sp, "", (size_t)0);
      sp->fts_cur = tmp___10;
    }
                                                              
     

     
    {
      (sp->fts_cur)->fts_link = root;
      (sp->fts_cur)->fts_info = (unsigned short)9;
      tmp___11 = setup_dir(sp);
    }
                  
     

     
                               
     
                                   
       
         


         




       
     
    {
      i_ring_init(&sp->fts_fd_ring, -1);
    }
    return (sp);
       ;
  {


  }
       ;
  {

  }
       ;
  {

  }

  }
}
static void fts_load(FTS *sp, FTSENT *p)
{
  register size_t len;
  register char *cp;
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = p->fts_namelen;
      p->fts_pathlen = tmp;
      len = tmp;
      memmove((void *)sp->fts_path, (void const *)(p->fts_name), len + 1UL);
      cp = strrchr((char const *)(p->fts_name), '/');
    }
           
     





















     
    tmp___0 = sp->fts_path;
    p->fts_path = tmp___0;
    p->fts_accpath = tmp___0;
    return;
  }
}
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp);
int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp)
{

























































































































}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2))) fstatfs)(int __fildes, struct statfs *__buf);
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
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp);
FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp)
{
  register FTSENT *p;
  register FTSENT *tmp;
  register unsigned short instr;
  register char *t;
               
              
               
              
  struct _ftsent *tmp___4;
  int tmp___5;
               
              
  size_t tmp___8;
  char *tmp___9;
  FTSENT *parent;
                 
                
  _Bool tmp___12;
                
                           
                
               
                  
                
                
                
               
               
                
  int tmp___23;
  FTSENT *tmp___24;
                    
                    
                    
  {
                                                                 
     

     
        
     
                                  
       

       
     
    p = sp->fts_cur;
    instr = p->fts_instr;
    p->fts_instr = (unsigned short)3;
                        
     
       

       

     
                        
     





































     
    if ((int)p->fts_info == 1)
    {
                          
       

       
          
       
                                 
         































         
       
                                                                     
       








       
      if ((unsigned long)sp->fts_child != (unsigned long)((void *)0))
      {
        {

        }























      }
      else
      {
        {
          tmp___4 = fts_build(sp, 3);
          sp->fts_child = tmp___4;
        }
        if ((unsigned long)tmp___4 == (unsigned long)((void *)0))
        {
                                      
           

           
                           
           




           
          {
            while (1)
            {
                                               ;
              {
                leave_dir(sp, p);
              }
              goto while_break___1;
            }

          }
        while_break___1:;
          return (p);
        }
      }
      p = sp->fts_child;
      sp->fts_child = (struct _ftsent *)((void *)0);
      goto name;
    }
       ;
    tmp = p;
                                                                 
     
                                    
       
         




         








         

         

       
     
    p = p->fts_link;
    if ((unsigned long)p != (unsigned long)((void *)0))
    {
      {
        sp->fts_cur = p;
        free((void *)tmp);
      }
      if (p->fts_level == 0L)
      {
        {
          tmp___5 = restore_initial_cwd(sp);
        }
                    
         


         
        {
          free_dir(sp);
          fts_load(sp, p);
          setup_dir(sp);
        }
        goto check_for_dir;
      }
                                 
       

       
                                 
       
         

         























       
    name:;
      if ((int)*((p->fts_parent)->fts_path + ((p->fts_parent)->fts_pathlen - 1UL)) == 47)
      {

      }
      else
      {
        tmp___8 = (p->fts_parent)->fts_pathlen;
      }
      {
        t = sp->fts_path + tmp___8;
        tmp___9 = t;
        t++;
        *tmp___9 = (char)'/';
        memmove((void *)t, (void const *)(p->fts_name), p->fts_namelen + 1UL);
      }
    check_for_dir:;
      sp->fts_cur = p;
      if ((int)p->fts_info == 11)
      {
        if (p->fts_statp[0].st_size == 2L)
        {
          parent = p->fts_parent;
          if (0L < p->fts_level)
          {
            if (parent->fts_n_dirs_remaining == 0UL)
            {





















            }
            else
            {
              goto _L___4;
            }
          }
          else
          {
          _L___4:;
          {
            p->fts_info = fts_stat(sp, p, (_Bool)0);
          }
            if ((p->fts_statp[0].st_mode & 61440U) == 16384U)
            {
              if (p->fts_level != 0L)
              {
                if (parent->fts_n_dirs_remaining)
                {
                  (parent->fts_n_dirs_remaining)--;
                }
              }
            }
          }
        }
        else
        {
          {
            while (1)
            {
                                               ;
                                                   
               
                 

                 
               
              goto while_break___2;
            }

          }
        while_break___2:;
        }
      }
      if ((int)p->fts_info == 1)
      {
        if (p->fts_level == 0L)
        {
          sp->fts_dev = p->fts_statp[0].st_dev;
        }
        {
          tmp___12 = enter_dir(sp, p);
        }
                      
         
           


           

         
      }
      return (p);
    }
             ;
  {
    p = tmp->fts_parent;
    sp->fts_cur = p;
    free((void *)tmp);
  }
                            
     
       





       

     
    {
      while (1)
      {
                                         ;
                                      
         
           

           
         
        goto while_break___3;
      }

    }
  while_break___3:;
    *(sp->fts_path + p->fts_pathlen) = (char)'\000';
    if (p->fts_level == 0L)
    {
      {

      }








    }
    else
    {
      if ((int)p->fts_flags & 2)
      {






























        {

        }
      }
      else
      {
        if (!((int)p->fts_flags & 1))
        {
          {
            tmp___23 = fts_safe_changedir(sp, p->fts_parent, -1, "..");
          }
                       
           
             



             
           
        }
      }
    }
    if (p->fts_errno)
    {

    }
    else
    {
      p->fts_info = (unsigned short)6;
    }
    if (p->fts_errno == 0)
    {
      {
        while (1)
        {
                                           ;
          {
            leave_dir(sp, p);
          }
          goto while_break___4;
        }

      }
    while_break___4:;
    }
    if (sp->fts_options & 16384)
    {

    }
    else
    {
      tmp___24 = p;
    }
    return (tmp___24);
  }
}
__attribute__((__nothrow__)) int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr);
int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr)
{

























}
static int fts_compare_ino(struct _ftsent const **a, struct _ftsent const **b)
{





















}
static void set_stat_type(struct stat *st, unsigned int dtype)
{
  mode_t type;
  {
                    
     

     
                    
     

     
    if (dtype == 4U)
    {
      goto case_4;
    }
                    
     

     
                     
     

     
    if (dtype == 8U)
    {
      goto case_8;
    }





         ;


         ;


  case_4:;
    type = (mode_t)16384;
    goto switch_break;
         ;


          ;


  case_8:;
    type = (mode_t)32768;
    goto switch_break;
          ;


                 ;

  switch_break:;
    st->st_mode = type;
    return;
  }
}
static FTSENT *fts_build(FTS *sp, int type)
{
  register FTSENT *p;
  register FTSENT *head;
  register size_t nitems;
  FTSENT *tail;
                
                  
  _Bool descend;
  _Bool doadjust;
  ptrdiff_t level;
  nlink_t nlinks;
  _Bool nostat;
  size_t len;
  size_t maxlen;
  size_t new_len;
  char *cp;
  int dir_fd;
  FTSENT *cur;
  _Bool continue_readdir;
          
           
               
  DIR *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
               
  _Bool tmp___6;
  size_t max_entries;
  unsigned long tmp___7;
  int tmp___8;
               
  int tmp___10;
                 
  _Bool is_dir;
  size_t d_namelen;
  struct dirent *dp___0;
  struct dirent *tmp___12;
                
                
                 
                
  _Bool skip_stat;
  int tmp___17;
  int tmp___18;
               
               
  int tmp___21;
  int tmp___22;
                 
                    
  {
    cur = sp->fts_cur;
    continue_readdir = (_Bool)(!(!cur->fts_dirp));
    if (continue_readdir)
    {
      {


      }

























    }
    else
    {
      if (sp->fts_options & 16)
      {
        if (sp->fts_options & 1)
        {
          if (cur->fts_level == 0L)
          {
            tmp___2 = 0;
          }
          else
          {
            tmp___2 = 131072;
          }
        }
        else
        {

        }
      }
      else
      {

      }
      if (sp->fts_options & 2048)
      {

      }
      else
      {
        tmp___3 = 0;
      }
      if (!(sp->fts_options & 4))
      {
        if (sp->fts_options & 512)
        {
          tmp___4 = sp->fts_cwd_fd;
        }
        else
        {

        }
      }
      else
      {

      }
      {
        tmp___1 = opendirat(tmp___4, (char const *)cur->fts_accpath, tmp___2 | tmp___3, &dir_fd);
        cur->fts_dirp = tmp___1;
      }
                                                               
       









       
      if ((int)cur->fts_info == 11)
      {
        {

        }
      }
      else
      {
        if (sp->fts_options & 256)
        {
          {
            while (1)
            {
                                               ;
              {
                leave_dir(sp, cur);
              }
              goto while_break___0;
            }

          }
        while_break___0:;
        {
          fts_stat(sp, cur, (_Bool)0);
          tmp___6 = enter_dir(sp, cur);
        }
                       
           
             


             

           
        }
      }
    }
    if ((unsigned long)sp->fts_compar == (unsigned long)((void *)0))
    {
      tmp___7 = 100000UL;
    }
    else
    {

    }
    max_entries = tmp___7;
    if (type == 2)
    {


    }
    else
    {
      if (sp->fts_options & 8)
      {
        if (sp->fts_options & 16)
        {
          if (sp->fts_options & 32)
          {

          }
          else
          {
            tmp___8 = 2;
          }
          nlinks = cur->fts_statp[0].st_nlink - (__nlink_t)tmp___8;
          nostat = (_Bool)1;
        }
        else
        {


        }
      }
      else
      {


      }
    }
    if (continue_readdir)
    {

    }
    else
    {
      if (nlinks)
      {
        goto _L___0;
      }
      else
      {
        if (type == 3)
        {
        _L___0:;
          if (sp->fts_options & 512)
          {
            {
              dir_fd = dup_safer(dir_fd);
            }
            if (0 <= dir_fd)
            {
              {
                set_cloexec_flag(dir_fd, (_Bool)1);
              }
            }
          }
          if (dir_fd < 0)
          {

          }
          else
          {
            {
              tmp___10 = fts_safe_changedir(sp, cur, dir_fd, (char const *)((void *)0));
            }
            if (tmp___10)
            {
               ;












              {










              }











            }
            else
            {
              descend = (_Bool)1;
            }
          }
        }
        else
        {

        }
      }
    }
    if ((int)*(cur->fts_path + (cur->fts_pathlen - 1UL)) == 47)
    {

    }
    else
    {
      len = cur->fts_pathlen;
    }
    if (sp->fts_options & 4)
    {




    }
    else
    {
      cp = (char *)((void *)0);
    }
    len++;
    maxlen = sp->fts_pathlen - len;
    level = cur->fts_level + 1L;
    doadjust = (_Bool)0;
    head = (FTSENT *)((void *)0);
    tail = (FTSENT *)((void *)0);
    nitems = (size_t)0;
    {
      while (1)
      {
                                         ;
      while_continue___2:;
                           
         

         
        {
          tmp___12 = readdir(cur->fts_dirp);
          dp___0 = tmp___12;
        }
        if ((unsigned long)dp___0 == (unsigned long)((void *)0))
        {
          goto while_break___2;
        }
        if (!(sp->fts_options & 32))
        {
          if ((int)dp___0->d_name[0] == 46)
          {
            if (!dp___0->d_name[1])
            {
              goto while_continue___2;
            }
            else
            {
              if ((int)dp___0->d_name[1] == 46)
              {
                if (!dp___0->d_name[2])
                {
                  goto while_continue___2;
                }
              }
            }
          }
        }
        {
          d_namelen = strlen((char const *)(dp___0->d_name));
          p = fts_alloc(sp, (char const *)(dp___0->d_name), d_namelen);
        }
               
         

         
                                
         
           


           







































         
        new_len = len + d_namelen;
                          
         
           


           
           










           
                         
         




         

         
        p->fts_level = level;
        p->fts_parent = sp->fts_cur;
        p->fts_pathlen = new_len;
        p->fts_statp[0].st_ino = dp___0->d_ino;
        if (sp->fts_options & 4)
        {
          {


          }
        }
        else
        {
          p->fts_accpath = p->fts_name;
        }
        if ((unsigned long)sp->fts_compar == (unsigned long)((void *)0))
        {
          goto _L___1;
        }
        else
        {
          if (sp->fts_options & 1024)
          {
          _L___1:;
            if (sp->fts_options & 16)
            {
              if (sp->fts_options & 8)
              {
                if ((int)dp___0->d_type != 0)
                {
                  if (!((int)dp___0->d_type == 4))
                  {
                    tmp___17 = 1;
                  }
                  else
                  {
                    tmp___17 = 0;
                  }
                }
                else
                {

                }
              }
              else
              {

              }
            }
            else
            {

            }
            {
              skip_stat = (_Bool)tmp___17;
              p->fts_info = (unsigned short)11;
              set_stat_type(p->fts_statp, (unsigned int)dp___0->d_type);
              fts_set_stat_required(p, (_Bool)(!skip_stat));
            }
            if (sp->fts_options & 16)
            {
              if ((int)dp___0->d_type == 4)
              {
                tmp___18 = 1;
              }
              else
              {
                tmp___18 = 0;
              }
            }
            else
            {

            }
            is_dir = (_Bool)tmp___18;
          }
          else
          {
            {

            }























          }
        }
        if (nlinks > 0UL)
        {
          if (is_dir)
          {
            nlinks -= (nlink_t)nostat;
          }
        }
        p->fts_link = (struct _ftsent *)((void *)0);
        if ((unsigned long)head == (unsigned long)((void *)0))
        {
          tail = p;
          head = tail;
        }
        else
        {
          tail->fts_link = p;
          tail = p;
        }
        nitems++;
                                  
         

         
      }

    }
  while_break___2:;
    if (cur->fts_dirp)
    {
      {
        while (1)
        {
                                           ;
          {
            closedir(cur->fts_dirp);
            cur->fts_dirp = (DIR *)((void *)0);
          }
          goto while_break___5;
        }

      }
    while_break___5:;
    }
                         ;
                 
     
       

       
     
                            
     












     
    if (!continue_readdir)
    {
      if (descend)
      {
        if (type == 1)
        {

        }
        else
        {
          if (!nitems)
          {
                 ;
            if (cur->fts_level == 0L)
            {
              {


              }
            }
            else
            {
              {
                tmp___21 = fts_safe_changedir(sp, cur->fts_parent, -1, "..");
                tmp___22 = tmp___21;
              }
            }
                         
             
               



               

             
          }
        }
      }
    }
    if (!nitems)
    {
      if (type == 3)
      {
        cur->fts_info = (unsigned short)6;
      }
      {
        fts_lfree(head);
      }
      return ((FTSENT *)((void *)0));
    }
                         
     

















     
                       
     






     
    return (head);
  }
}
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow)
{
  struct stat *sbp;
                  
           
               
               
              
  int tmp___3;
               
  int tmp___5;
  int tmp___6;
  int tmp___7;
  {
    sbp = p->fts_statp;
    if (p->fts_level == 0L)
    {
      if (sp->fts_options & 1)
      {
        follow = (_Bool)1;
      }
    }
    if (sp->fts_options & 2)
    {

    }
    else
    {
      if (follow)
      {
         ;
      {
        tmp___3 = stat((char const * /* __restrict  */)((char const *)p->fts_accpath), (struct stat * /* __restrict  */) sbp);
      }
                    
         
           



           
















         
      }
      else
      {
        {
          tmp___5 = fstatat(sp->fts_cwd_fd, (char const * /* __restrict  */)((char const *)p->fts_accpath), (struct stat * /* __restrict  */) sbp, 256);
        }
                    
         
           


           
             
         

         

         
      }
    }
    if ((sbp->st_mode & 61440U) == 16384U)
    {
      if (sp->fts_options & 32)
      {

      }
      else
      {
        tmp___6 = 2;
      }
      p->fts_n_dirs_remaining = sbp->st_nlink - (__nlink_t)tmp___6;
      if ((int)p->fts_name[0] == 46)
      {
        if (!p->fts_name[1])
        {
          goto _L___0;
        }
        else
        {
          if ((int)p->fts_name[1] == 46)
          {
            if (!p->fts_name[2])
            {
            _L___0:;
              if (p->fts_level == 0L)
              {
                tmp___7 = 1;
              }
              else
              {

              }
              return ((unsigned short)tmp___7);
            }
          }
        }
      }
      return ((unsigned short)1);
    }









  }
}
static int fts_compar(void const *a, void const *b)
{











}
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems)
{






























































































}
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen)
{
  register FTSENT *p;
  size_t len;
  {
    {
      len = sizeof(FTSENT) + namelen;
      p = (FTSENT *)malloc(len);
    }
                                                       
     

     
    {
      memcpy((void * /* __restrict  */)((void *)(p->fts_name)), (void const * /* __restrict  */)((void const *)name), namelen);
      p->fts_name[namelen] = (char)'\000';
      p->fts_namelen = namelen;
      p->fts_fts = sp;
      p->fts_path = sp->fts_path;
      p->fts_errno = 0;
      p->fts_dirp = (DIR *)((void *)0);
      p->fts_flags = (unsigned short)0;
      p->fts_instr = (unsigned short)3;
      p->fts_number = 0L;
      p->fts_pointer = (void *)0;
    }
    return (p);
  }
}
static void fts_lfree(FTSENT *head)
{
  register FTSENT *p;
  {
    {
      while (1)
      {
                                     ;
        p = head;
        if (!p)
        {
          goto while_break;
        }







        {

        }
      }

    }
  while_break:;
    return;
  }
}
static _Bool fts_palloc(FTS *sp, size_t more)
{
  char *p;
  size_t new_len;
           
  {
    new_len = (sp->fts_pathlen + more) + 256UL;
                                  
     
       




       

     
    {
      sp->fts_pathlen = new_len;
      p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
    }
                                                       
     
       


       

     
    sp->fts_path = p;
    return ((_Bool)1);
  }
}
static void fts_padjust(FTS *sp, FTSENT *head)
{





































































}
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv)
{
  size_t len;
  size_t max;
  {
    max = (size_t)0;
    {
      while (1)
      {
                                     ;
        if (!*argv)
        {
          goto while_break;
        }
        {
          len = strlen((char const *)*argv);
        }
        if (len > max)
        {
          max = len;
        }
        argv++;
      }

    }
  while_break:;
    return ((size_t __attribute__((__pure__)))(max + 1UL));
  }
}
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir)
{
          
  _Bool is_dotdot;
  int tmp;
  int tmp___0;
  int newfd;
  int parent_fd;
  _Bool tmp___1;
                 
              
               
              
             
               
               
                    
  {
    if (dir)
    {
      {
        tmp = strcmp(dir, "..");
      }
      if (tmp == 0)
      {
        tmp___0 = 1;
      }
      else
      {

      }
    }
    else
    {
      tmp___0 = 0;
    }
    is_dotdot = (_Bool)tmp___0;
                            
     










     
    if (fd < 0)
    {
      if (is_dotdot)
      {
        if (sp->fts_options & 512)
        {
          {
            tmp___1 = i_ring_empty((I_ring const *)(&sp->fts_fd_ring));
          }
          if (!tmp___1)
          {
            {
              parent_fd = i_ring_pop(&sp->fts_fd_ring);
              is_dotdot = (_Bool)1;
            }
            if (0 <= parent_fd)
            {
              fd = parent_fd;
              dir = (char const *)((void *)0);
            }
          }
        }
      }
    }
    newfd = fd;
               
     
       

       




     
                            
     

     
        
     
              
       
         

         

































       
     
    if (sp->fts_options & 512)
    {
      {
        cwd_advance_fd(sp, newfd, (_Bool)(!is_dotdot));
      }
      return (0);
    }
    {

    }
       ;











  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) mempcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
int fd_safer(int fd)
{
        
          
        
               
               
  {
                
     
                  
       
         








         
       
     
    return (fd);
  }
}
extern int fcntl(int __fd, int __cmd, ...);
int rpl_fcntl(int fd, int action, ...);
static int have_dupfd_cloexec = 0;
int rpl_fcntl(int fd, int action, ...)
{
  va_list arg;
  int result;
             
          
               
            
              
                  
               
               
              
  void *p;
  void *tmp___5;
  {
    {
      result = -1;
      __builtin_va_start(arg, action);
    }
                       
     

     
    goto switch_default;
            ;
  {


  }






































































  switch_default:;
  {
    tmp___5 = __builtin_va_arg(arg, void *);
    p = tmp___5;
    result = fcntl(fd, action, p);
  }
    goto switch_break;
  switch_break:;
  {
    __builtin_va_end(arg);
  }
    return (result);
  }
}
int volatile exit_failure = (int volatile)1;
extern struct _IO_FILE *stdin;
extern FILE *fopen(char const *__restrict __filename, char const *__restrict __modes);
extern __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream);
extern int regcomp(regex_t *__restrict __preg, char const *__restrict __pattern, int __cflags);
extern int regexec(regex_t const *__restrict __preg, char const *__restrict __string, size_t __nmatch, regmatch_t *__restrict __pmatch, int __eflags);
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) __attribute__((__pure__));
struct exclude *new_exclude(void);
void add_exclude(struct exclude *ex, char const *pattern, int options);
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int), struct exclude *ex, char const *file_name___1, int options, char line_end);
int add_exclude_fp(void (*add_func)(struct exclude *, char const *, int, void *), struct exclude *ex, FILE *fp, int options, char line_end, void *data);
_Bool excluded_file_name(struct exclude const *ex, char const *f);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf);
_Bool exclude_fnmatch(char const *pattern, char const *f, int options);
extern int fnmatch(char const *__pattern, char const *__name, int __flags);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf)
{












}
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) __attribute__((__pure__));
_Bool fnmatch_pattern_has_wildcards(char const *str, int options)
{

















































































































}
static void unescape_pattern(char *str)
{











































}
struct exclude *new_exclude(void)
{








}
static size_t string_hasher(void const *data, size_t n_buckets)
{









}
static size_t string_hasher_ci(void const *data, size_t n_buckets)
{
































































}
static _Bool string_compare(void const *data1, void const *data2)
{











}
static _Bool string_compare_ci(void const *data1, void const *data2)
{











}
static void string_free(void *data)
{






}
static void new_exclude_segment(struct exclude *ex, enum exclude_type type, int options)
{
















































}
static int fnmatch_no_wildcards(char const *pattern, char const *f, int options)
{

































































































}
_Bool exclude_fnmatch(char const *pattern, char const *f, int options)
{
























































}
_Bool exclude_patopts(struct patopts const *opts, char const *f)
{






















}
static _Bool file_pattern_matches(struct exclude_segment const *seg, char const *f)
{






























}
static _Bool file_name_matches(struct exclude_segment const *seg, char const *f, char *buffer___0)
{




































































}
_Bool excluded_file_name(struct exclude const *ex, char const *f)
{




























































}
void add_exclude(struct exclude *ex, char const *pattern, int options)
{






























































































































































































}
int add_exclude_fp(void (*add_func)(struct exclude *, char const *, int, void *), struct exclude *ex, FILE *fp, int options, char line_end, void *data)
{



















































































































































}
static void call_addfn(struct exclude *ex, char const *pattern, int options, void *data)
{








}
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int), struct exclude *ex, char const *file_name___1, int options, char line_end)
{




















































}
int dup_safer(int fd)
{
  int tmp;
  {
    {
      tmp = rpl_fcntl(fd, 0, 3);
    }
    return (tmp);
  }
}
static _Bool is_zero_or_power_of_two(uintmax_t i)
{



}
void cycle_check_init(struct cycle_check_state *state)
{





}
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb)
{

































}
int should_colorize(void);
void init_colorize(void);
void print_start_colorize(char const *sgr_start___0, char const *sgr_seq);
void print_end_colorize(char const *sgr_end___0);
int should_colorize(void)
{






























}
void init_colorize(void)
{
  {
    return;
  }
}
void print_start_colorize(char const *sgr_start___0, char const *sgr_seq)
{






}
void print_end_colorize(char const *sgr_end___0)
{






}
void close_stdout(void);
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
static char const *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void)
{































































}
extern __attribute__((__nothrow__)) size_t __fpending(FILE *__fp);
int close_stream(FILE *stream)
{



















































}
int set_cloexec_flag(int desc, _Bool value)
{
  int flags;
  int tmp;
  int newflags;
  int tmp___0;
  int tmp___1;
  {
    {
      tmp = rpl_fcntl(desc, 1, 0);
      flags = tmp;
    }
    if (0 <= flags)
    {
      if (value)
      {
        tmp___0 = flags | 1;
      }
      else
      {

      }
      newflags = tmp___0;
      if (flags == newflags)
      {

      }
      else
      {
        {
          tmp___1 = rpl_fcntl(desc, 2, newflags);
        }
        if (tmp___1 != -1)
        {
          return (0);
        }
      }
    }

  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memrchr)(void const *__s, int __c, size_t __n) __attribute__((__pure__));
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_strcasecmp(char const *s1, char const *s2)
{



































}
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c)
{















































}
int c_tolower(int c) __attribute__((__const__));
int c_tolower(int c)
{



















}
int set_binary_mode(int fd, int mode___0)
{
  {
    return (0);
  }
}
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist, size_t valsize) __attribute__((__pure__));
void (*argmatch_die)(void);
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize);
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist, char const *vallist, size_t valsize, void (*exit_fn)(void));
extern int putc_unlocked(int __c, FILE *__stream);
__attribute__((__noreturn__)) void usage(int status);
static void __argmatch_die(void)
{






}
void (*argmatch_die)(void) = &__argmatch_die;
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist, size_t valsize) __attribute__((__pure__));
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist, size_t valsize)
{









































































}
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem)
{































}
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize)
{





























































}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist, char const *vallist, size_t valsize, void (*exit_fn)(void))
{


















}
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
int match_icase;
int match_words;
int match_lines;
unsigned char eolbyte;
int using_utf8(void);
void Pcompile(char const *pattern, size_t size);
size_t Pexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
extern pcre *pcre_compile(char const *, int, char const **, int *, unsigned char const *);
extern int pcre_exec(pcre const *, pcre_extra const *, char const *, int, int, int, int *, int);
extern int pcre_fullinfo(pcre const *, pcre_extra const *, int, void *);
extern unsigned char const *pcre_maketables(void);
extern pcre_extra *pcre_study(pcre const *, int, char const **);
extern pcre_jit_stack *pcre_jit_stack_alloc(int, int);
extern void pcre_assign_jit_stack(pcre_extra *, pcre_jit_stack *(*)(void *), void *);
static pcre *cre;
static pcre_extra *extra;
static pcre_jit_stack *jit_stack;
void Pcompile(char const *pattern, size_t size)
{





































































































































































































}
size_t Pexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr)
{





















































































































































































}
void kwsincr(kwset_t kwset___1, char const *text, size_t len);
void kwsprep(kwset_t kwset___1);
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text, size_t size, struct kwsmatch *kwsmatch);
void kwsinit(kwset_t *kwset___1);
char *mbtoupper(char const *beg, size_t *n, mb_len_map_t **len_map_p);
ptrdiff_t mb_goback(char const **mb_start, char const *cur, char const *end);
wint_t mb_prev_wc(char const *buf, char const *cur, char const *end);
wint_t mb_next_wc(char const *cur, char const *end);
void Fcompile(char const *pattern, size_t size);
size_t Fexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
static _Bool wordchar(wint_t wc)
{























}
static kwset_t kwset;
void Fcompile(char const *pattern, size_t size)
{
  size_t total;
  mb_len_map_t *map;
  char const *pat;
                
  char const *tmp___1;
                 
  char const *p;
  size_t len;
  char const *sep;
  char const *tmp___3;
  char *buf;
  {
    total = size;
    map = (mb_len_map_t *)((void *)0);
    if (match_icase)
    {
      {

      }











    }
    else
    {
      tmp___1 = pattern;
    }
    {
      pat = tmp___1;
      kwsinit(&kwset);
      p = pat;
    }
    {
      while (1)
      {
                                     ;
        {
          tmp___3 = (char const *)memchr((void const *)p, '\n', total);
          sep = tmp___3;
        }
        if (sep)
        {



        }
        else
        {
          len = total;
          total = (size_t)0;
        }
        buf = (char *)((void *)0);
                        
         
           






           
         
        {
          kwsincr(kwset, p, len);
          free((void *)buf);
          p = sep;
        }
        if (!p)
        {
          goto while_break;
        }
      }

    }
  while_break:;
  {
    kwsprep(kwset);
  }
    return;
  }
}
static void mb_case_map_apply(mb_len_map_t const *map, size_t *off, size_t *len)
{
                  
                  
           
  {
            
     



       











       

       











       
                     


     
    return;
  }
}
size_t Fexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr)
{
  char const *beg;
                  
  char const *end;
  char const *mb_start;
  size_t len;
  char eol;
  struct kwsmatch kwsmatch;
  size_t ret_val;
  mb_len_map_t *map;
                 
            
  size_t tmp___0;
  size_t offset;
  size_t tmp___1;
  size_t tmp___2;
              
                    
                 
                
                 
                
  size_t off;
                    
                    
  {
    {
      eol = (char)eolbyte;
      map = (mb_len_map_t *)((void *)0);
      tmp___0 = __ctype_get_mb_cur_max();
    }
                      
     












     
    if (start_ptr)
    {

    }
    else
    {
      beg = buf;
    }
    mb_start = beg;
    {
      while (1)
      {
                                     ;
                                                                 
         

         
        {
          tmp___1 = kwsexec(kwset, beg - match_lines, (size_t)(((buf + size) - beg) + (long)match_lines), &kwsmatch);
          offset = tmp___1;
        }
        if (offset == 0xffffffffffffffffUL)
        {
          goto failure;
        }
        len = kwsmatch.size[0] - (size_t)match_lines;
        if (!match_lines)
        {
          {
            tmp___2 = __ctype_get_mb_cur_max();
          }
                            
           
             

             











           
        }
        beg += offset;
                      
         




         
                        
         

         
        if (match_words)
        {

          {













































          }

        }
        else
        {
          goto success;
        }
             ;

      }

    }

  failure:;
    return ((size_t)-1);
  success:;
  {
    end = (char const *)memchr((void const *)(beg + len), (int)eol, (size_t)((buf + size) - (beg + len)));
  }
    if ((unsigned long)end != (unsigned long)((void *)0))
    {
      end++;
    }
    else
    {

    }
    {
      while (1)
      {
                                         ;
        if ((unsigned long)buf < (unsigned long)beg)
        {
          if (!((int const) * (beg + -1) != (int const)eol))
          {
            goto while_break___1;
          }
        }
        else
        {
          goto while_break___1;
        }
        beg--;
      }

    }
  while_break___1:;
    len = (size_t)(end - beg);
                         ;
  {
    off = (size_t)(beg - buf);
    mb_case_map_apply((mb_len_map_t const *)map, &off, &len);
    *match_size = len;
    ret_val = off;
  }
    return (ret_val);
  }
}
kwset_t kwsalloc(char const *trans___0);
static unsigned char to_uchar(char ch)
{



}
extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
static char tr(char const *trans___0, char c)
{
                    
  int tmp___0;
  {
    if (trans___0)
    {
      {


      }
    }
    else
    {
      tmp___0 = (int)c;
    }
    return ((char)tmp___0);
  }
}
kwset_t kwsalloc(char const *trans___0)
{
  struct kwset *kwset___1;
  struct kwset *tmp;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___0;
  char *tmp___1;
  {
    {
      tmp = (struct kwset *)xmalloc(sizeof(*kwset___1));
      kwset___1 = tmp;
      _obstack_begin(&kwset___1->obstack, 0, 0, (void *(*)(long))(&xmalloc), &free);
      kwset___1->words = (ptrdiff_t)0;
      __h = &kwset___1->obstack;
      __o = __h;
      __len = (int)sizeof(*(kwset___1->trie));
    }
                                                        
     
       

       
     
    __o->next_free += __len;
    __o1 = __h;
    __value = (void *)__o1->object_base;
                                                                 
     

     
    if (sizeof(long) < sizeof(void *))
    {

    }
    else
    {
      tmp___0 = (char *)0;
    }
    if (sizeof(long) < sizeof(void *))
    {

    }
    else
    {
      tmp___1 = (char *)0;
    }
    __o1->next_free = tmp___0 + (((__o1->next_free - tmp___1) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
                                                                                        
     

     
    __o1->object_base = __o1->next_free;
    kwset___1->trie = (struct trie *)__value;
    (kwset___1->trie)->accepting = (size_t)0;
    (kwset___1->trie)->links = (struct tree *)((void *)0);
    (kwset___1->trie)->parent = (struct trie *)((void *)0);
    (kwset___1->trie)->next = (struct trie *)((void *)0);
    (kwset___1->trie)->fail = (struct trie *)((void *)0);
    (kwset___1->trie)->depth = 0;
    (kwset___1->trie)->shift = 0;
    kwset___1->mind = 2147483647;
    kwset___1->maxd = -1;
    kwset___1->target = (char *)((void *)0);
    kwset___1->trans = trans___0;
    return (kwset___1);
  }
}
void kwsincr(kwset_t kwset___1, char const *text, size_t len)
{
  struct trie *trie;
  char const *trans___0;
  unsigned char uc;
  unsigned char label___0;
  int tmp;
  struct tree *kwset_link;
  struct tree *links[12];
  enum __anonenum_dirs_58 dirs[12];
  int depth___0;
              
              
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___2;
  char *tmp___3;
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___4;
  char *tmp___5;
                 
                 
                 
                  
                  
               
               
  size_t tmp___8;
                    
                    
  {
    trie = kwset___1->trie;
    trans___0 = kwset___1->trans;
    text += len;
    {
      while (1)
      {
                                     ;
        tmp___8 = len;
        len--;
        if (!tmp___8)
        {
          goto while_break;
        }
        text--;
        uc = (unsigned char)*text;
        if (trans___0)
        {

        }
        else
        {
          tmp = (int)uc;
        }
        label___0 = (unsigned char)tmp;
        kwset_link = trie->links;
        links[0] = (struct tree *)(&trie->links);
        dirs[0] = (enum __anonenum_dirs_58)0;
        depth___0 = 1;
        {
          while (1)
          {
                                             ;
            if (kwset_link)
            {




            }
            else
            {
              goto while_break___0;
            }















          }

        }
      while_break___0:;
        if (!kwset_link)
        {
          __h = &kwset___1->obstack;
          __o = __h;
          __len = (int)sizeof(*kwset_link);
                                                              
           
             

             
           
          __o->next_free += __len;
          __o1 = __h;
          __value = (void *)__o1->object_base;
                                                                       
           

           
          if (sizeof(long) < sizeof(void *))
          {

          }
          else
          {
            tmp___2 = (char *)0;
          }
          if (sizeof(long) < sizeof(void *))
          {

          }
          else
          {
            tmp___3 = (char *)0;
          }
          __o1->next_free = tmp___2 + (((__o1->next_free - tmp___3) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
                                                                                              
           

           
          __o1->object_base = __o1->next_free;
          kwset_link = (struct tree *)__value;
          kwset_link->llink = (struct tree *)((void *)0);
          kwset_link->rlink = (struct tree *)((void *)0);
          __h___0 = &kwset___1->obstack;
          __o___0 = __h___0;
          __len___0 = (int)sizeof(*(kwset_link->trie));
                                                                          
           
             

             
           
          __o___0->next_free += __len___0;
          __o1___0 = __h___0;
          __value___0 = (void *)__o1___0->object_base;
                                                                               
           

           
          if (sizeof(long) < sizeof(void *))
          {

          }
          else
          {
            tmp___4 = (char *)0;
          }
          if (sizeof(long) < sizeof(void *))
          {

          }
          else
          {
            tmp___5 = (char *)0;
          }
          __o1___0->next_free = tmp___4 + (((__o1___0->next_free - tmp___5) + (long)__o1___0->alignment_mask) & (long)(~__o1___0->alignment_mask));
                                                                                                              
           

           
          __o1___0->object_base = __o1___0->next_free;
          kwset_link->trie = (struct trie *)__value___0;
          (kwset_link->trie)->accepting = (size_t)0;
          (kwset_link->trie)->links = (struct tree *)((void *)0);
          (kwset_link->trie)->parent = trie;
          (kwset_link->trie)->next = (struct trie *)((void *)0);
          (kwset_link->trie)->fail = (struct trie *)((void *)0);
          (kwset_link->trie)->depth = trie->depth + 1;
          (kwset_link->trie)->shift = 0;
          kwset_link->label = label___0;
          kwset_link->balance = (char)0;
          depth___0--;
          if ((unsigned int)dirs[depth___0] == 0U)
          {
            (links[depth___0])->llink = kwset_link;
          }
          else
          {

          }
          {
            while (1)
            {
                                               ;
              if (depth___0)
              {




              }
              else
              {
                goto while_break___1;
              }









            }

          }
        while_break___1:;
                        
           


























































































































































           
        }
        trie = kwset_link->trie;
      }

    }
  while_break:;
    if (!trie->accepting)
    {
      trie->accepting = (size_t)(1L + 2L * kwset___1->words);
    }
    (kwset___1->words)++;
    if (trie->depth < kwset___1->mind)
    {
      kwset___1->mind = trie->depth;
    }
    if (trie->depth > kwset___1->maxd)
    {
      kwset___1->maxd = trie->depth;
    }
    return;
  }
}
static void enqueue(struct tree *tree, struct trie **last)
{
  struct trie *tmp;
  {
    if (!tree)
    {
      return;
    }
    {
      enqueue(tree->llink, last);
      enqueue(tree->rlink, last);
      tmp = tree->trie;
      (*last)->next = tmp;
      *last = tmp;
    }
    return;
  }
}
static void treefails(struct tree const *tree, struct trie const *fail, struct trie *recourse)
{
                          
  {
    if (!tree)
    {
      return;
    }
    {
      treefails((struct tree const *)tree->llink, fail, recourse);
      treefails((struct tree const *)tree->rlink, fail, recourse);
    }
    {
      while (1)
      {
                                     ;
        if (!fail)
        {
          goto while_break;
        }

        {
























        }







      }

    }
  while_break:;
    (tree->trie)->fail = recourse;
    return;
  }
}
static void treedelta(struct tree const *tree, unsigned int depth___0, unsigned char *delta)
{
  {
    if (!tree)
    {
      return;
    }
    {
      treedelta((struct tree const *)tree->llink, depth___0, delta);
      treedelta((struct tree const *)tree->rlink, depth___0, delta);
    }
    if (depth___0 < (unsigned int)*(delta + (int const)tree->label))
    {
      *(delta + (int const)tree->label) = (unsigned char)depth___0;
    }
    return;
  }
}
static int __attribute__((__pure__)) hasevery(struct tree const *a, struct tree const *b)
{
                                    
                                        
  {
    if (!b)
    {
      return ((int __attribute__((__pure__)))1);
    }
    {

    }




    {

    }




    {
























    }


  }
}
static void treenext(struct tree const *tree, struct trie **next)
{
  {
    if (!tree)
    {
      return;
    }
    {
      treenext((struct tree const *)tree->llink, next);
      treenext((struct tree const *)tree->rlink, next);
      *(next + (int const)tree->label) = (struct trie *)tree->trie;
    }
    return;
  }
}
void kwsprep(kwset_t kwset___1)
{
  char const *trans___0;
  int i;
  unsigned char deltabuf[256];
  unsigned char *delta;
  unsigned char *tmp;
  int tmp___0;
  struct trie *curr;
  struct trie *last;
  struct trie *fail;
  int __attribute__((__pure__)) tmp___1;
  struct trie *nextbuf[256];
  struct trie **next;
  struct trie **tmp___2;
                        
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___4;
  char *tmp___5;
                          
                          
                
                           
                    
                
                
  char gc1;
  char tmp___8;
  int gc1help;
                     
                      
                     
                       
                         
                 
                         
                    
                    
  {
    trans___0 = kwset___1->trans;
    if (trans___0)
    {

    }
    else
    {
      tmp = kwset___1->delta;
    }
    delta = tmp;
    if (kwset___1->mind < 255)
    {
      tmp___0 = kwset___1->mind;
    }
    else
    {

    }
    {
      memset((void *)delta, tmp___0, sizeof(deltabuf));
      last = kwset___1->trie;
      curr = last;
    }
    {
      while (1)
      {
                                     ;
        if (!curr)
        {
          goto while_break;
        }
        {
          enqueue(curr->links, &last);
          curr->shift = kwset___1->mind;
          curr->maxshift = kwset___1->mind;
          treedelta((struct tree const *)curr->links, (unsigned int)curr->depth, delta);
          treefails((struct tree const *)curr->links, (struct trie const *)curr->fail, kwset___1->trie);
          fail = curr->fail;
        }
        {
          while (1)
          {
                                             ;
            if (!fail)
            {
              goto while_break___0;
            }
            {
              tmp___1 = hasevery((struct tree const *)fail->links, (struct tree const *)curr->links);
            }
                         
             




             
                                
             
                                                             
               

               
             
            fail = fail->fail;
          }

        }
      while_break___0:;
        curr = curr->next;
      }

    }
  while_break:;
    curr = (kwset___1->trie)->next;
    {
      while (1)
      {
                                         ;
        if (!curr)
        {
          goto while_break___1;
        }
                                                      
         

         
                                         
         

         
        curr = curr->next;
      }

    }
  while_break___1:;
    if (trans___0)
    {

    }
    else
    {
      tmp___2 = kwset___1->next;
    }
    {
      next = tmp___2;
      memset((void *)next, 0, sizeof(nextbuf));
      treenext((struct tree const *)(kwset___1->trie)->links, next);
    }
                  
     

       














       

     
    if (kwset___1->words == 1L)
    {
      __h = &kwset___1->obstack;
      __o = __h;
      __len = kwset___1->mind;
                                                          
       
         

         
       
      __o->next_free += __len;
      __o1 = __h;
      __value = (void *)__o1->object_base;
                                                                   
       

       
      if (sizeof(long) < sizeof(void *))
      {

      }
      else
      {
        tmp___4 = (char *)0;
      }
      if (sizeof(long) < sizeof(void *))
      {

      }
      else
      {
        tmp___5 = (char *)0;
      }
      __o1->next_free = tmp___4 + (((__o1->next_free - tmp___5) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
                                                                                          
       

       
      __o1->object_base = __o1->next_free;
      kwset___1->target = (char *)__value;
      i = kwset___1->mind - 1;
      curr = kwset___1->trie;
      {
        while (1)
        {
                                           ;
          if (!(i >= 0))
          {
            goto while_break___3;
          }
          *(kwset___1->target + i) = (char)(curr->links)->label;
          curr = curr->next;
          i--;
        }

      }
    while_break___3:;
                              
       









































         












         

       
      {
        tmp___8 = tr(trans___0, *(kwset___1->target + (kwset___1->mind - 1)));
        gc1 = tmp___8;
        gc1help = -1;
      }
                    
       
         




         

















       
      kwset___1->gc1 = gc1;
      kwset___1->gc1help = gc1help;
                              
       
         

         
       
    }
                  
     

       














       

     
    return;
  }
}
static _Bool bm_delta2_search(char const **tpp, char const *ep, char const *sp, int len, char const *trans___0, char gc1, char gc2, unsigned char const *d1, kwset_t kwset___1)
{









































































































}
static char const *memchr_kwset(char const *s, size_t n, kwset_t kwset___1)
{
  char const *tmp;
                      
            
                
                 
                   
                        
                
                
  {
    if (kwset___1->gc1help < 0)
    {
      {
        tmp = (char const *)memchr((void const *)s, (int)kwset___1->gc1, n);
      }
      return (tmp);
    }



















    {

















    }
              ;













  }
}
static size_t __attribute__((__pure__)) bmexec_trans(kwset_t kwset___1, char const *text, size_t size)
{
                          
                 
                 
  char const *tp;
        
  int len;
  char const *trans___0;
  long tmp;
           
           
                  
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                        
                 
                         
                         
                 
  {
    len = kwset___1->mind;
    trans___0 = kwset___1->trans;
                 
     

     
                           
     

     
    if (len == 1)
    {
      {
        tp = memchr_kwset(text, size, kwset___1);
      }
      if (tp)
      {
        tmp = tp - text;
      }
      else
      {
        tmp = -1L;
      }
      return ((size_t __attribute__((__pure__)))tmp);
    }



























































































    {



    }
    {


























    }


  }
}
static size_t bmexec(kwset_t kwset___1, char const *text, size_t size)
{
                                       
  size_t __attribute__((__pure__)) tmp___0;
  size_t __attribute__((__pure__)) tmp___1;
  {
    if (kwset___1->trans)
    {
      {


      }
    }
    else
    {
      {
        tmp___0 = bmexec_trans(kwset___1, text, size);
        tmp___1 = tmp___0;
      }
    }
    return ((size_t)tmp___1);
  }
}
static size_t(__attribute__((__nonnull__(4))) cwexec)(kwset_t kwset___1, char const *text, size_t len, struct kwsmatch *kwsmatch)
{

























































































































































































































































































































}
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text, size_t size, struct kwsmatch *kwsmatch)
{
  size_t ret;
  size_t tmp;
                 
  {
    if (kwset___1->words == 1L)
    {
      {
        tmp = bmexec(kwset___1, text, size);
        ret = tmp;
      }
      if (ret != 0xffffffffffffffffUL)
      {
        kwsmatch->index = (size_t)0;
        kwsmatch->offset[0] = ret;
        kwsmatch->size[0] = (size_t)kwset___1->mind;
      }
      return (ret);
    }
    else
    {
      {

      }

    }
  }
}
extern reg_syntax_t re_set_syntax(reg_syntax_t __syntax);
extern char const *re_compile_pattern(char const *__pattern, size_t __length, struct re_pattern_buffer *__buffer);
extern regoff_t re_search(struct re_pattern_buffer *__buffer, char const *__string, __re_idx_t __length, __re_idx_t __start, regoff_t __range, struct re_registers *__regs);
extern regoff_t re_match(struct re_pattern_buffer *__buffer, char const *__string, __re_idx_t __length, __re_idx_t __start, struct re_registers *__regs);
struct dfa *dfaalloc(void);
struct dfamust *__attribute__((__pure__)) dfamusts(struct dfa const *d);
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol);
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag);
char *dfaexec(struct dfa *d, char const *begin, char *end, int allow_nl, size_t *count, int *backref);
struct dfa *dfasuperset(struct dfa const *d) __attribute__((__pure__));
_Bool dfaisfast(struct dfa const *d) __attribute__((__pure__));
void dfawarn(char const *mesg);
__attribute__((__noreturn__)) void dfaerror(char const *mesg);
void GEAcompile(char const *pattern, size_t size, reg_syntax_t syntax_bits___0);
size_t EGexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
static _Bool wordchar___0(wint_t wc)
{























}
static kwset_t kwset___0;
static struct dfa *dfa;
static struct patterns patterns0;
static struct patterns *patterns;
static size_t pcount;
static size_t kwset_exact_matches;
static _Bool begline;
__attribute__((__noreturn__)) void dfaerror(char const *mesg);
void dfaerror(char const *mesg)
{






}
static enum __anonenum_mode_60 mode;
void dfawarn(char const *mesg)
{

























}
static void kwsmusts(void)
{

























































































}
static char const line_beg_no_bk[3] = {(char const)'^', (char const)'(', (char const)'\000'};
static char const line_end_no_bk[3] = {(char const)')', (char const)'$', (char const)'\000'};
static char const word_beg_no_bk[19] = {(char const)'(', (char const)'^', (char const)'|', (char const)'[', (char const)'^', (char const)'[', (char const)':', (char const)'a', (char const)'l', (char const)'n', (char const)'u', (char const)'m', (char const)':', (char const)']', (char const)'_', (char const)']', (char const)')', (char const)'(', (char const)'\000'};
static char const word_end_no_bk[19] = {(char const)')', (char const)'(', (char const)'[', (char const)'^', (char const)'[', (char const)':', (char const)'a', (char const)'l', (char const)'n', (char const)'u', (char const)'m', (char const)':', (char const)']', (char const)'_', (char const)']', (char const)'|', (char const)'$', (char const)')', (char const)'\000'};
static char const line_beg_bk[4] = {(char const)'^', (char const)'\\', (char const)'(', (char const)'\000'};
static char const line_end_bk[4] = {(char const)'\\', (char const)')', (char const)'$', (char const)'\000'};
static char const word_beg_bk[23] = {(char const)'\\', (char const)'(', (char const)'^', (char const)'\\', (char const)'|', (char const)'[', (char const)'^', (char const)'[', (char const)':', (char const)'a', (char const)'l', (char const)'n', (char const)'u', (char const)'m', (char const)':', (char const)']', (char const)'_', (char const)']', (char const)'\\', (char const)')', (char const)'\\', (char const)'(', (char const)'\000'};
static char const word_end_bk[23] = {(char const)'\\', (char const)')', (char const)'\\', (char const)'(', (char const)'[', (char const)'^', (char const)'[', (char const)':', (char const)'a', (char const)'l', (char const)'n', (char const)'u', (char const)'m', (char const)':', (char const)']', (char const)'_', (char const)']', (char const)'\\', (char const)'|', (char const)'$', (char const)'\\', (char const)')', (char const)'\000'};
void GEAcompile(char const *pattern, size_t size, reg_syntax_t syntax_bits___0)
{
































































































































































}
size_t EGexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr)
{









































































































































































































































































































































































































































































































}
void dfafree(struct dfa *d);
void dfainit(struct dfa *d);
void dfaparse(char const *s, size_t len, struct dfa *d);
void dfaanalyze(struct dfa *d, int searchflag);
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0);
extern __attribute__((__nothrow__)) int isalnum(int);
extern __attribute__((__nothrow__)) int isalpha(int);
extern __attribute__((__nothrow__)) int iscntrl(int);
extern __attribute__((__nothrow__)) int isdigit(int);
extern __attribute__((__nothrow__)) int islower(int);
extern __attribute__((__nothrow__)) int isgraph(int);
extern __attribute__((__nothrow__)) int isprint(int);
extern __attribute__((__nothrow__)) int ispunct(int);
extern __attribute__((__nothrow__)) int isspace(int);
extern __attribute__((__nothrow__)) int isupper(int);
extern __attribute__((__nothrow__)) int isxdigit(int);
extern __attribute__((__nothrow__)) int toupper(int __c);
extern __attribute__((__nothrow__)) int isblank(int);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2))) strncpy)(char *__restrict __dest, char const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcoll)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *setlocale(int __category, char const *__locale);
extern __attribute__((__nothrow__)) int wctob(wint_t __c);
extern __attribute__((__nothrow__)) size_t wcrtomb(char *__restrict __s, wchar_t __wc, mbstate_t *__restrict __ps);
extern __attribute__((__nothrow__)) int iswalpha(wint_t __wc);
extern __attribute__((__nothrow__)) wctype_t wctype(char const *__property);
extern __attribute__((__nothrow__)) int iswctype(wint_t __wc, wctype_t __desc);
extern __attribute__((__nothrow__)) wint_t towupper(wint_t __wc);
static unsigned char to_uchar___0(char ch)
{



}
static void dfamust(struct dfa *d);
static void regexp(void);
static void dfambcache(struct dfa *d)
{







































}
static size_t mbs_to_wchar(wint_t *pwc, char const *s, size_t n, struct dfa *d)
{





























}
static _Bool tstbit(unsigned int b, charclass_word *const c)
{



}
static void setbit(unsigned int b, charclass_word *c)
{




}
static void clrbit(unsigned int b, charclass_word *c)
{




}
static void copyset(charclass_word *const src, charclass_word *dst)
{






}
static void zeroset(charclass_word *s)
{






}
static void notset(charclass_word *s)
{



















}
static _Bool equal(charclass_word *const s1, charclass_word *const s2)
{







}
static void *maybe_realloc(void *ptr, size_t nitems, size_t *nalloc, size_t itemsize)
{












}
static size_t dfa_charclass_index(struct dfa *d, charclass_word *const s)
{































}
static struct dfa *dfa___0;
static size_t charclass_index(charclass_word *const s)
{







}
static reg_syntax_t syntax_bits;
static reg_syntax_t syntax_bits_set;
static _Bool case_fold;
static unsigned char eolbyte___0;
static int sbit[256];
static charclass letters;
static charclass newline;
static int char_context(unsigned char c)
{






















}
static int wchar_context(wint_t wc)
{





























}
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol)
{













































}
static _Bool setbit_wc(wint_t wc, charclass_word *c)
{
















}
static void setbit_case_fold_c(int b, charclass_word *c)
{


































}
static int utf8 = -1;
int using_utf8(void)
{
































}
static _Bool using_simple_locale(void);
static int unibyte_c = -1;
static _Bool using_simple_locale(void)
{



















































}
static char const *lexptr;
static size_t lexleft;
static token lasttok;
static _Bool laststart;
static size_t parens;
static int minrep;
static int maxrep;
static int cur_mb_len = 1;
static wint_t wctok;
static short const lonesome_lower[19] = {(short const)181, (short const)305, (short const)383, (short const)453, (short const)456, (short const)459, (short const)498, (short const)837, (short const)962, (short const)976, (short const)977, (short const)981, (short const)982, (short const)1008, (short const)1009, (short const)1010, (short const)1013, (short const)7835, (short const)8126};
static int case_folded_counterparts(wchar_t c, wchar_t *folded)
{












































































}
static struct dfa_ctype const prednames[13] = {{"alpha", &isalpha, (_Bool)0}, {"upper", &isupper, (_Bool)0}, {"lower", &islower, (_Bool)0}, {"digit", &isdigit, (_Bool)1}, {"xdigit", &isxdigit, (_Bool)0}, {"space", &isspace, (_Bool)0}, {"punct", &ispunct, (_Bool)0}, {"alnum", &isalnum, (_Bool)0}, {"print", &isprint, (_Bool)0}, {"graph", &isgraph, (_Bool)0}, {"cntrl", &iscntrl, (_Bool)0}, {"blank", &isblank, (_Bool)0}, {(char const *)((void *)0), (predicate *)((void *)0), (_Bool)0}};
static struct dfa_ctype const *__attribute__((__pure__)) find_pred(char const *str)
{


























}
static charclass zeroclass;
static token parse_bracket_exp(void)
{



































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































}
static token lex(void)
{


















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































}
static token tok;
static size_t depth;
static void addtok_mb(token t, int mbprop)
{





































































}
static void addtok_wc(wint_t wc);
static void addtok(token t)
{














































































































}
static void addtok_wc(wint_t wc)
{
































































}
static void add_utf8_anychar(void);
static charclass const utf8_classes[5] = {{(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word)0, (charclass_word)0}, {((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0}, {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, 4294967292U & (((1U << 31) << 1) - 1U), (charclass_word)0}, {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)65535}, {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)16711680}};
static void add_utf8_anychar(void)
{



















































































}
static void atom(void)
{




























































































































































































































}
static size_t __attribute__((__pure__)) nsubtoks(size_t tindex)
{








































}
static void copytoks(size_t tindex, size_t ntokens)
{












































}
static void closure(void)
{




























































































































}
static void branch(void)
{




































}
static void regexp(void)
{























}
void dfaparse(char const *s, size_t len, struct dfa *d)
{


















































}
static void copy(position_set const *src, position_set *dst)
{















}
static void alloc_position_set(position_set *s, size_t size)
{








}
static void insert(position p, position_set *s)
{




























































}
static void merge(position_set const *s1, position_set const *s2, position_set *m)
{













































































































}
static void delete(position p, position_set *s)
{








































}
static state_num state_index(struct dfa *d, position_set const *s, int context)
{





































































































































}
static void epsclosure(position_set *s, struct dfa const *d, char *visited)
{


























































































































}
static int charclass_context(charclass_word *c)
{




































}
static int __attribute__((__pure__)) state_separate_contexts(position_set const *s)
{




























}
void dfaanalyze(struct dfa *d, int searchflag)
{












































































































































































































































































































}
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0)
{












































































































































































































































































































































































































































































































































































































}
static void realloc_trans_if_necessary(struct dfa *d, state_num new_state)
{















































}
static void build_state(state_num s, struct dfa *d)
{


















































































}
static void build_state_zero(struct dfa *d)
{















}
static status_transit_state transit_state_singlebyte(struct dfa *d, state_num s, unsigned char const *p, state_num *next_state)
{




















































}
static int match_anychar(struct dfa *d, state_num s, position pos, wint_t wc, size_t mbclen)
{






























































}
static int match_mb_charset(struct dfa *d, state_num s, position pos, char const *p, wint_t wc, size_t match_len)
{






















































































































































































































}
static int *check_matching_with_multibyte_ops(struct dfa *d, state_num s, char const *p, wint_t wc, size_t mbclen)
{












































}
static status_transit_state transit_state_consume_1char(struct dfa *d, state_num s, unsigned char const **pp, wint_t wc, size_t mbclen, int *match_lens)
{














































































}
static state_num transit_state(struct dfa *d, state_num s, unsigned char const **pp, unsigned char const *end)
{





























































































































}
char *dfaexec(struct dfa *d, char const *begin, char *end, int allow_nl, size_t *count, int *backref)
{

























































































































































































































}
struct dfa *dfasuperset(struct dfa const *d) __attribute__((__pure__));
struct dfa *dfasuperset(struct dfa const *d)
{



}
_Bool dfaisfast(struct dfa const *d) __attribute__((__pure__));
_Bool dfaisfast(struct dfa const *d)
{



}
static void free_mbdata(struct dfa *d)
{











































































}
void dfainit(struct dfa *d)
{










}
static void dfaoptimize(struct dfa *d)
{




































































}
static void dfassbuild(struct dfa *d)
{



















































































































































































}
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag)
{



















}
void dfafree(struct dfa *d)
{
















































































































}
static char *icatalloc(char *old, char const *new)
{




















}
static char *__attribute__((__pure__)) istrstr(char const *lookin, char const *lookfor)
{






























}
static void freelist(char **cpp)
{





















}
static char **enlist(char **cpp, char *new, size_t len)
{











































































}
static char **comsubs(char *left, char const *right)
{

















































































}
static char **addlists(char **old, char **new)
{





















}
static char **inboth(char **left, char **right)
{
















































}
static must *allocmust(must *mp)
{
















}
static void resetmust(must *mp)
{
















}
static void freemust(must *mp)
{











}
static void dfamust(struct dfa *d)
{








































































































































































































































































































































































































































































































































}
struct dfa *dfaalloc(void)
{







}
struct dfamust *__attribute__((__pure__)) dfamusts(struct dfa const *d)
{



}
extern __attribute__((__nothrow__)) size_t mbrlen(char const *__restrict __s, size_t __n, mbstate_t *__restrict __ps);
void build_mbclen_cache(void);
static size_t mbclen_cache[256];
static char trans[256];
void kwsinit(kwset_t *kwset___1)
{
        
             
  {
    if (match_icase)
    {
      {

      }





























    }
    else
    {
      {
        *kwset___1 = kwsalloc((char const *)((void *)0));
      }
    }
                    
     
       

       
     
    return;
  }
}
static char *out;
static mb_len_map_t *len_map;
static size_t outalloc;
char *mbtoupper(char const *beg, size_t *n, mb_len_map_t **len_map_p)
{
























































































































































}
void build_mbclen_cache(void)
{





























}
ptrdiff_t mb_goback(char const **mb_start, char const *cur, char const *end)
{

































































}
wint_t mb_prev_wc(char const *buf, char const *cur, char const *end)
{

















}
wint_t mb_next_wc(char const *cur, char const *end)
{




























}
extern int fflush_unlocked(FILE *__stream);
extern int fputc_unlocked(int __c, FILE *__stream);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern size_t fwrite_unlocked(void const *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) __off_t lseek(int __fd, __off_t __offset, int __whence);
extern __attribute__((__nothrow__)) int isatty(int __fd);
extern char *optarg;
extern int optind;
extern __attribute__((__nothrow__)) int getpagesize(void) __attribute__((__const__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) atexit)(void (*__func)(void));
extern __attribute__((__nothrow__, __noreturn__)) void exit(int __status);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcasecmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *textdomain(char const *__domainname);
extern __attribute__((__nothrow__)) char *bindtextdomain(char const *__domainname, char const *__dirname);
extern int getopt_long(int ___argc, char *const *___argv, char const *__shortopts, struct option const *__longopts, int *__longind);
static struct stat out_stat;
static int show_help;
static int show_version;
static int suppress_errors;
static int color_option;
static int only_matching;
static int align_tabs;
static char const *group_separator = "--";
static char const *selected_match_color = "01;31";
static char const *context_match_color = "01;31";
static char const *filename_color = "35";
static char const *line_num_color = "32";
static char const *byte_num_color = "32";
static char const *sep_color = "36";
static char const *selected_line_color = "";
static char const *context_line_color = "";
static char const *sgr_start = "\033[%sm\033[K";
static char const *sgr_end = "\033[m\033[K";
static void pr_sgr_start(char const *s)
{









}
static void pr_sgr_end(char const *s)
{









}
static void pr_sgr_start_if(char const *s)
{
  {
                     
     
       

       
     
    return;
  }
}
static void pr_sgr_end_if(char const *s)
{
  {
                     
     
       

       
     
    return;
  }
}
static void color_cap_mt_fct(void)
{




}
static void color_cap_rv_fct(void)
{




}
static void color_cap_ne_fct(void)
{







}
static struct color_cap const color_dict[12] = {{"mt", &selected_match_color, &color_cap_mt_fct}, {"ms", &selected_match_color, (void (*)(void))((void *)0)}, {"mc", &context_match_color, (void (*)(void))((void *)0)}, {"fn", &filename_color, (void (*)(void))((void *)0)}, {"ln", &line_num_color, (void (*)(void))((void *)0)}, {"bn", &byte_num_color, (void (*)(void))((void *)0)}, {"se", &sep_color, (void (*)(void))((void *)0)}, {"sl", &selected_line_color, (void (*)(void))((void *)0)}, {"cx", &context_line_color, (void (*)(void))((void *)0)}, {"rv", (char const **)((void *)0), &color_cap_rv_fct}, {"ne", (char const **)((void *)0), &color_cap_ne_fct}, {(char const *)((void *)0), (char const **)((void *)0), (void (*)(void))((void *)0)}};
static struct exclude *excluded_patterns;
static struct exclude *excluded_directory_patterns;
static char const short_options[58] = {(char const)'0', (char const)'1', (char const)'2', (char const)'3', (char const)'4', (char const)'5', (char const)'6', (char const)'7', (char const)'8', (char const)'9', (char const)'A', (char const)':', (char const)'B', (char const)':', (char const)'C', (char const)':', (char const)'D', (char const)':', (char const)'E', (char const)'F', (char const)'G', (char const)'H', (char const)'I', (char const)'P', (char const)'T', (char const)'U', (char const)'V', (char const)'X', (char const)':', (char const)'a', (char const)'b', (char const)'c', (char const)'d', (char const)':', (char const)'e', (char const)':', (char const)'f', (char const)':', (char const)'h', (char const)'i', (char const)'L', (char const)'l', (char const)'m', (char const)':', (char const)'n', (char const)'o', (char const)'q', (char const)'R', (char const)'r', (char const)'s', (char const)'u', (char const)'v', (char const)'w', (char const)'x', (char const)'y', (char const)'Z', (char const)'z', (char const)'\000'};
static struct option const long_options[50] = {{"basic-regexp", 0, (int *)((void *)0), 'G'}, {"extended-regexp", 0, (int *)((void *)0), 'E'}, {"fixed-regexp", 0, (int *)((void *)0), 'F'}, {"fixed-strings", 0, (int *)((void *)0), 'F'}, {"perl-regexp", 0, (int *)((void *)0), 'P'}, {"after-context", 1, (int *)((void *)0), 'A'}, {"before-context", 1, (int *)((void *)0), 'B'}, {"binary-files", 1, (int *)((void *)0), 128}, {"byte-offset", 0, (int *)((void *)0), 'b'}, {"context", 1, (int *)((void *)0), 'C'}, {"color", 2, (int *)((void *)0), 129}, {"colour", 2, (int *)((void *)0), 129}, {"count", 0, (int *)((void *)0), 'c'}, {"devices", 1, (int *)((void *)0), 'D'}, {"directories", 1, (int *)((void *)0), 'd'}, {"exclude", 1, (int *)((void *)0), 131}, {"exclude-from", 1, (int *)((void *)0), 132}, {"exclude-dir", 1, (int *)((void *)0), 135}, {"file", 1, (int *)((void *)0), 'f'}, {"files-with-matches", 0, (int *)((void *)0), 'l'}, {"files-without-match", 0, (int *)((void *)0), 'L'}, {"group-separator", 1, (int *)((void *)0), 136}, {"help", 0, &show_help, 1}, {"include", 1, (int *)((void *)0), 130}, {"ignore-case", 0, (int *)((void *)0), 'i'}, {"initial-tab", 0, (int *)((void *)0), 'T'}, {"label", 1, (int *)((void *)0), 134}, {"line-buffered", 0, (int *)((void *)0), 133}, {"line-number", 0, (int *)((void *)0), 'n'}, {"line-regexp", 0, (int *)((void *)0), 'x'}, {"max-count", 1, (int *)((void *)0), 'm'}, {"no-filename", 0, (int *)((void *)0), 'h'}, {"no-group-separator", 0, (int *)((void *)0), 136}, {"no-messages", 0, (int *)((void *)0), 's'}, {"null", 0, (int *)((void *)0), 'Z'}, {"null-data", 0, (int *)((void *)0), 'z'}, {"only-matching", 0, (int *)((void *)0), 'o'}, {"quiet", 0, (int *)((void *)0), 'q'}, {"recursive", 0, (int *)((void *)0), 'r'}, {"dereference-recursive", 0, (int *)((void *)0), 'R'}, {"regexp", 1, (int *)((void *)0), 'e'}, {"invert-match", 0, (int *)((void *)0), 'v'}, {"silent", 0, (int *)((void *)0), 'q'}, {"text", 0, (int *)((void *)0), 'a'}, {"binary", 0, (int *)((void *)0), 'U'}, {"unix-byte-offsets", 0, (int *)((void *)0), 'u'}, {"version", 0, (int *)((void *)0), 'V'}, {"with-filename", 0, (int *)((void *)0), 'H'}, {"word-regexp", 0, (int *)((void *)0), 'w'}, {(char const *)0, 0, (int *)0, 0}};
static char const *matcher;
static char const *filename;
static size_t filename_prefix_len;
static int errseen;
static int write_error_seen;
static char const *const directories_args[4] = {(char const * /* const  */) "read", (char const * /* const  */) "recurse", (char const * /* const  */) "skip", (char const * /* const  */)((char const *)((void *)0))};
static enum directories_type const directories_types[3] = {(enum directories_type const)2, (enum directories_type const)3, (enum directories_type const)4};
static enum directories_type directories = (enum directories_type)2;
static int fts_options = 793;
static enum __anonenum_devices_71 devices = (enum __anonenum_devices_71)0;
static int grepfile(int dirdesc, char const *name, int follow, int command_line);
static int grepdesc(int desc, int command_line);
static void dos_binary(void);
static void dos_unix_byte_offsets(void);
static int undossify_input(char *buf, size_t buflen);
static int is_device_mode(mode_t m)
{
  int tmp;
  {
    if ((m & 61440U) == 8192U)
    {

    }
    else
    {
      if ((m & 61440U) == 24576U)
      {

      }
      else
      {
        if ((m & 61440U) == 49152U)
        {

        }
        else
        {
          if ((m & 61440U) == 4096U)
          {

          }
          else
          {
            tmp = 0;
          }
        }
      }
    }
    return (tmp);
  }
}
static int usable_st_size(struct stat const *st)
{



















}
static void (*compile)(char const *, size_t);
static size_t (*execute)(char const *, size_t, size_t *, char const *);
static void suppressible_error(char const *mesg, int errnum)
{










}
static void clean_up_stdout(void)
{









}
static int file_is_binary(char const *buf, size_t bufsize, int fd, struct stat const *st)
{































































}
static void context_length_arg(char const *str, intmax_t *out___0)
{






























}
static int skipped_file(char const *name, int command_line, int is_dir)
{
            
  int tmp___0;
                
  int tmp___2;
  int tmp___3;
  {
    if (is_dir)
    {
      if ((unsigned int)directories == 4U)
      {

      }
      else
      {
        if (command_line)
        {
          if (filename_prefix_len != 0UL)
          {

          }
          else
          {
            goto _L;
          }
        }
        else
        {
        _L:;
          if (excluded_directory_patterns)
          {
            {

            }








          }
          else
          {
            tmp___0 = 0;
          }
        }
      }
      tmp___3 = tmp___0;
    }
    else
    {
      if (excluded_patterns)
      {
        {

        }








      }
      else
      {
        tmp___2 = 0;
      }
      tmp___3 = tmp___2;
    }
    return (tmp___3);
  }
}
static char *buffer;
static size_t bufalloc;
static int bufdesc;
static char *bufbeg;
static char *buflim;
static size_t pagesize;
static off_t bufoffset;
static off_t after_last_match;
static int reset(int fd, struct stat const *st)
{
  size_t tmp;
               
                
                   
  {
    if (!pagesize)
    {
      {
        pagesize = (size_t)getpagesize();
      }
                          
       
         

         
       
          
       
                                             
         
           

           
         
       
      if (32768UL % pagesize == 0UL)
      {
        tmp = (size_t)32768;
      }
      else
      {

      }
      {
        bufalloc = (tmp + pagesize) + 1UL;
        buffer = (char *)xmalloc(bufalloc);
      }
    }
    if ((size_t)(buffer + 1) % pagesize == 0UL)
    {

    }
    else
    {
      buflim = (buffer + 1) + (pagesize - (size_t)(buffer + 1) % pagesize);
    }
    bufbeg = buflim;
    *(bufbeg + -1) = (char)eolbyte;
    bufdesc = fd;
    if ((st->st_mode & 61440U) == 32768U)
    {
      if (fd != 0)
      {
        bufoffset = (off_t)0;
      }
      else
      {
        {

        }









      }
    }
    return (1);
  }
}
static int fillbuf(size_t save, struct stat const *st)
{
  ssize_t fillsize;
  int cc;
  char *readbuf;
  size_t readsize;
  size_t saved_offset;
                 
                 
                  
               
                   
                    
          
                
  {
    cc = 1;
    saved_offset = (size_t)((buflim - save) - buffer);
    if (pagesize <= (size_t)((buffer + bufalloc) - buflim))
    {
      readbuf = buflim;
      bufbeg = buflim - save;
    }
    else
    {


      {

























      }
                ;
    {

    }










































      {



      }







    }
    {
      readsize = (size_t)((buffer + bufalloc) - readbuf);
      readsize -= readsize % pagesize;
      fillsize = (ssize_t)safe_read(bufdesc, (void *)readbuf, readsize);
    }
                      
     


     
    {
      bufoffset += fillsize;
      fillsize = (ssize_t)undossify_input(readbuf, (size_t)fillsize);
      buflim = readbuf + fillsize;
    }
    return (cc);
  }
}
static enum __anonenum_binary_files_72 binary_files;
static int filename_mask;
static int out_quiet;
static _Bool out_invert;
static int out_file;
static int out_line;
static int out_byte;
static intmax_t out_before;
static intmax_t out_after;
static int count_matches;
static int list_files;
static int no_filenames;
static intmax_t max_count;
static int line_buffered;
static char *label = (char *)((void *)0);
static uintmax_t totalcc;
static char const *lastnl;
static char const *lastout;
static uintmax_t totalnl;
static intmax_t outleft;
static intmax_t pending;
static int done_on_match;
static int exit_on_match;
static int dos_report_unix_offset = 0;
static File_type dos_file_type = (File_type)0;
static File_type dos_use_file_type = (File_type)0;
static off_t dos_stripped_crs = (off_t)0;
static struct dos_map *dos_pos_map;
static int dos_pos_map_size = 0;
static int dos_pos_map_used = 0;
static int inp_map_idx = 0;
static int out_map_idx = 1;
static void dos_binary(void)
{



}
static void dos_unix_byte_offsets(void)
{



}
static int undossify_input(char *buf, size_t buflen)
{
                 
              
            
                
              
                
                 
  {
    return ((int)buflen);
















































































































  }
}
static off_t dossified_pos(off_t byteno)
{






































































}
static uintmax_t add_count(uintmax_t a, uintmax_t b)
{














}
static void nlscan(char const *lim)
{
































}
static void print_filename(void)
{
  {
    {
      pr_sgr_start_if(filename_color);
      fputs_unlocked((char const * /* __restrict  */)filename, (FILE * /* __restrict  */) stdout);
      pr_sgr_end_if(filename_color);
    }
    return;
  }
}
static void print_sep(char sep)
{








}
static void print_offset(uintmax_t pos, int min_width, char const *color)
{














































}
static void print_line_head(char const *beg, char const *lim, int sep)
{










































































}
static char const *print_line_middle(char const *beg, char const *lim, char const *line_color, char const *match_color)
{






































































































}
static char const *print_line_tail(char const *beg, char const *lim, char const *line_color)
{

















































}
static void prline(char const *beg, char const *lim, int sep)
{











































































































































}
static void prpending(char const *lim)
{

























































}
static _Bool used;
static void prtext(char const *beg, char const *lim)
{
  char eol;
  char const *p;
                 
                  
             
                 
                      
  intmax_t n;
  char const *nl___0;
  char const *tmp___1;
  {
    eol = (char)eolbyte;
                   
     






     
    p = beg;
                   
     










       


























       



























       
















       

     
    if (out_invert)
    {
      n = (intmax_t)0;
      {
        while (1)
        {
                                           ;
          if ((unsigned long)p < (unsigned long)lim)
          {
                               
             

             
          }
          else
          {
            goto while_break___2;
          }
          {
            tmp___1 = (char const *)memchr((void const *)p, (int)eol, (size_t)(lim - p));
            nl___0 = tmp___1;
            nl___0++;
          }
                         
           
             

             
           
          p = nl___0;
          n++;
        }

      }
    while_break___2:;
    }
    else
    {








    }
    after_last_match = bufoffset - (buflim - (char *)p);
    if (out_quiet)
    {
      pending = (intmax_t)0;
    }
    else
    {

    }
    used = (_Bool)1;
    outleft -= n;
    return;
  }
}
static size_t do_execute(char const *buf, size_t size, size_t *match_size, char const *start_ptr)
{
                
                        
  size_t tmp;
  size_t tmp___0;
                       
                       
                      
  {
    if ((unsigned long)execute == (unsigned long)(&Fexecute))
    {
      goto _L;
    }
    else
    {
      if ((unsigned long)execute == (unsigned long)(&Pexecute))
      {
      _L:;
      {
        tmp___0 = __ctype_get_mb_cur_max();
      }
        if (tmp___0 == 1UL)
        {
          {
            tmp = (*execute)(buf, size, match_size, start_ptr);
          }
          return (tmp);
        }
        else
        {







        }
      }
      else
      {
        {

        }

      }
    }

    {






































    }


  }
}
static intmax_t grepbuf(char const *beg, char const *lim)
{
  intmax_t outleft0;
  char const *p;
  char const *endp;
  size_t match_size;
  size_t match_offset;
  size_t tmp;
  char const *b;
  char const *prbeg;
  char const *tmp___0;
  char const *prend;
  char const *tmp___1;
  {
    outleft0 = outleft;
    p = beg;
    {
      while (1)
      {
                                     ;
        if (!((unsigned long)p < (unsigned long)lim))
        {
          goto while_break;
        }
        {
          tmp = do_execute(p, (size_t)(lim - p), &match_size, (char const *)((void *)0));
          match_offset = tmp;
        }
        if (match_offset == 0xffffffffffffffffUL)
        {
                          
           

           
          match_offset = (size_t)(lim - p);
          match_size = (size_t)0;
        }
        b = p + match_offset;
        endp = b + match_size;
                        
         




         
        if (!out_invert)
        {

        }
        else
        {
          if ((unsigned long)p < (unsigned long)b)
          {
                 ;
            if (out_invert)
            {
              tmp___0 = p;
            }
            else
            {

            }
            prbeg = tmp___0;
            if (out_invert)
            {
              tmp___1 = b;
            }
            else
            {

            }
            {
              prend = tmp___1;
              prtext(prbeg, prend);
            }
            if (!outleft)
            {

            }
            else
            {
              if (done_on_match)
              {
                 ;
                                  
                 
                   

                   
                 
                goto while_break;
              }
            }
          }
        }
        p = endp;
      }

    }
  while_break:;
    return (outleft0 - outleft);
  }
}
static intmax_t grep(int fd, struct stat const *st)
{
  intmax_t nlines;
  intmax_t i;
  int not_text;
  size_t residue;
  size_t save;
  char oldc;
  char *beg;
  char *lim;
  char eol;
  int tmp;
               
  int tmp___1;
              
  int tmp___3;
  intmax_t tmp___4;
               
  int tmp___6;
  char *tmp___7;
  intmax_t tmp___8;
                
                    
  {
    {
      eol = (char)eolbyte;
      tmp = reset(fd, st);
    }
             
     

     
    {
      totalcc = (uintmax_t)0;
      lastout = (char const *)0;
      totalnl = (uintmax_t)0;
      outleft = max_count;
      after_last_match = (off_t)0;
      pending = (intmax_t)0;
      nlines = (intmax_t)0;
      residue = (size_t)0;
      save = (size_t)0;
      tmp___1 = fillbuf(save, st);
    }
                 
     
       


       

     
    if ((unsigned int)binary_files == 0U)
    {
      if (!out_quiet)
      {

      }
      else
      {
        goto _L___0;
      }
    }
    else
    {
    _L___0:;
      if ((unsigned int)binary_files == 2U)
      {
         ;
      {

      }








      }
      else
      {
        tmp___3 = 0;
      }
    }
    not_text = tmp___3;
                 
     




     
    done_on_match += not_text;
    out_quiet += not_text;
    {
      while (1)
      {
                                     ;
        lastnl = (char const *)bufbeg;
                    
         

         
        beg = bufbeg + save;
        if ((unsigned long)beg == (unsigned long)buflim)
        {
          goto while_break;
        }
        {
          oldc = *(beg + -1);
          *(beg + -1) = eol;
          lim = (char *)memrchr((void const *)(beg - 1), (int)eol, (size_t)((buflim - beg) + 1L));
          lim++;
          *(beg + -1) = oldc;
        }
        if ((unsigned long)lim == (unsigned long)beg)
        {
          lim = beg - residue;
        }
        beg -= residue;
        residue = (size_t)(buflim - lim);
        if ((unsigned long)beg < (unsigned long)lim)
        {
          if (outleft)
          {
            {
              tmp___4 = grepbuf((char const *)beg, (char const *)lim);
              nlines += tmp___4;
            }
          }
                      
           
             

             
           
          if (!outleft)
          {








          }
          else
          {
                 ;
            if (nlines)
            {
              if (done_on_match)
              {
                goto finish_grep;
              }
            }
          }
        }
        i = (intmax_t)0;
        beg = lim;
        {
          while (1)
          {
                                             ;
            if (i < out_before)
            {











            }
            else
            {
              goto while_break___0;
            }

            {










            }

          }

        }
      while_break___0:;
        if ((unsigned long)beg != (unsigned long)lastout)
        {
          lastout = (char const *)0;
        }
        save = (size_t)((lim + residue) - beg);
                     
         
           

           
         
                     
         
           

           
         
        {
          tmp___6 = fillbuf(save, st);
        }
                     
         
           


           

         
      }

    }
  while_break:;
    if (residue)
    {
      tmp___7 = buflim;
      buflim++;
      *tmp___7 = eol;
      if (outleft)
      {
        {
          tmp___8 = grepbuf((char const *)((bufbeg + save) - residue), (char const *)buflim);
          nlines += tmp___8;
        }
      }
                  
       
         

         
       
    }
  finish_grep:;
    done_on_match -= not_text;
    out_quiet -= not_text;
                              
     







     
    return (nlines);
  }
}
static int grepdirent(FTS *fts, FTSENT *ent, int command_line)
{
  int follow;
  int dirdesc;
  struct stat *st;
  int tmp;
  int tmp___0;
  int tmp___1;
                
                
                  
           
              
               
              
  int tmp___7;
  int tmp___8;
                    
                    
                    
  {
    st = ent->fts_statp;
    command_line &= ent->fts_level == 0L;
    if ((int)ent->fts_info == 6)
    {
                                          
       
                         
         

         
       
      return (1);
    }
    if ((int)ent->fts_info == 1)
    {
      tmp = 1;
    }
    else
    {
      if ((int)ent->fts_info == 2)
      {

      }
      else
      {
        if ((int)ent->fts_info == 4)
        {

        }
        else
        {
          tmp = 0;
        }
      }
    }
    {
      tmp___0 = skipped_file((char const *)(ent->fts_name), command_line, tmp);
    }
                
     
       

       

     
    filename = (char const *)(ent->fts_path + filename_prefix_len);
    if (fts->fts_options & 2)
    {

    }
    else
    {
      if (fts->fts_options & 1)
      {
        if (command_line)
        {
          tmp___1 = 1;
        }
        else
        {
          tmp___1 = 0;
        }
      }
      else
      {

      }
    }
    follow = tmp___1;
    if ((int)ent->fts_info == 1)
    {
      goto case_1;
    }
                                
     

     
                                
     

     
                                
     

     
                                 
     

     
                                
     

     
    if ((int)ent->fts_info == 11)
    {
      goto case_3;
    }

















  case_1:;
    if ((unsigned int)directories == 3U)
    {
      out_file |= 2 * !no_filenames;
      return (1);
    }
    {

    }

         ;









         ;
  {

  }

  case_3:;
    if ((unsigned int)devices == 2U)
    {

    }
    else
    {
      if ((unsigned int)devices == 0U)
      {
        if (!command_line)
        {
           ;
                           
           








             


             









           
          {
            tmp___7 = is_device_mode(st->st_mode);
          }
                      
           

           
        }
      }
    }
    goto switch_break;
         ;

          ;

                 ;
  {

  }
  switch_break:;
    if ((fts->fts_options & 516) == 512)
    {
      dirdesc = fts->fts_cwd_fd;
    }
    else
    {

    }
    {
      tmp___8 = grepfile(dirdesc, (char const *)ent->fts_accpath, follow, command_line);
    }
    return (tmp___8);
  }
}
static int grepfile(int dirdesc, char const *name, int follow, int command_line)
{
  int desc;
  int tmp;
  int tmp___0;
               
               
               
  int tmp___4;
  {
    if (follow)
    {
      tmp = 0;
    }
    else
    {
      tmp = 131072;
    }
    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
                 
     



























     
    {
      tmp___4 = grepdesc(desc, command_line);
    }
    return (tmp___4);
  }
}
static int grepdesc(int desc, int command_line)
{
  intmax_t count;
  int status;
  struct stat st;
           
  int tmp___0;
  int tmp___1;
  FTS *fts;
  FTSENT *ent;
  int opts;
  int tmp___2;
  char *fts_arg[2];
               
  int tmp___4;
  int tmp___5;
               
               
               
              
  int tmp___10;
                       
                 
  int tmp___13;
                        
                 
                
                   
                
  int tmp___18;
                    
                    
                    
  {
    {
      status = 1;
      tmp___0 = fstat(desc, &st);
    }
                     
     
       


       

     
    if (desc != 0)
    {
      if (command_line)
      {
        {
          tmp___1 = skipped_file(filename, 1, (st.st_mode & 61440U) == 16384U);
        }
                    
         

         
      }
    }
    if (desc != 0)
    {
      if ((unsigned int)directories == 3U)
      {
        if ((st.st_mode & 61440U) == 16384U)
        {
          if (command_line)
          {
            tmp___2 = 0;
          }
          else
          {

          }
          {
            opts = fts_options & ~tmp___2;
            tmp___4 = close(desc);
          }
                           
           
             


             
           
          {
            fts_arg[0] = (char *)filename;
            fts_arg[1] = (char *)((void *)0);
            fts = fts_open((char *const *)(fts_arg), opts, (int (*)(FTSENT const **, FTSENT const **))((void *)0));
          }
                   
           
             

             
           
          {
            while (1)
            {
                                           ;
              {
                ent = fts_read(fts);
              }
                       
               

               
              {
                tmp___5 = grepdirent(fts, ent, command_line);
                status &= tmp___5;
              }
            }
                                          ;
          }
                    ;
        {

        }







          {

          }








        }
      }
    }
    if (desc != 0)
    {
      if ((unsigned int)directories == 4U)
      {








      }
      else
      {
             ;
        if ((unsigned int)devices == 2U)
        {

        }
        else
        {
          if ((unsigned int)devices == 0U)
          {
            if (!command_line)
            {
               ;
            {
              tmp___10 = is_device_mode(st.st_mode);
            }
                           
               

               
            }
          }
        }
      }
    }
                   
     




























     
    {
      tmp___13 = isatty(desc);
    }
    if (!tmp___13)
    {
      {
        set_binary_mode(desc, 0);
      }
    }
    {
      count = grep(desc, (struct stat const *)(&st));
    }
    if (count < 0L)
    {

    }
    else
    {
                        
       


















         

         
       
      status = !count;
      if (list_files == 1 - 2 * status)
      {
        {
          print_filename();
          fputc_unlocked(10 & filename_mask, stdout);
        }
      }
                    
       

























       
    }
           ;
    if (desc != 0)
    {
      {
        tmp___18 = close(desc);
      }
                        
       
         


         
       
    }
    return (status);
  }
}
static int grep_command_line_arg(char const *arg)
{
            
              
  int tmp___1;
  int tmp___2;
                   
  {
    {
      tmp___2 = strcmp(arg, "-");
    }
    if (tmp___2 == 0)
    {











      {

      }

    }
    else
    {
      {
        filename = arg;
        tmp___1 = grepfile(-100, arg, 1, 1);
      }
      return (tmp___1);
    }
  }
}
__attribute__((__noreturn__)) void usage(int status);
void usage(int status)
{



































































































}
static void Gcompile(char const *pattern, size_t size)
{






}
static void Ecompile(char const *pattern, size_t size)
{






}
static void Acompile(char const *pattern, size_t size)
{






}
static void GAcompile(char const *pattern, size_t size)
{






}
static void PAcompile(char const *pattern, size_t size)
{






}
static struct matcher const matchers[8] = {{{(char const)'g', (char const)'r', (char const)'e', (char const)'p', (char const)'\000'}, &Gcompile, &EGexecute}, {{(char const)'e', (char const)'g', (char const)'r', (char const)'e', (char const)'p', (char const)'\000'}, &Ecompile, &EGexecute}, {{(char const)'f', (char const)'g', (char const)'r', (char const)'e', (char const)'p', (char const)'\000'}, &Fcompile, &Fexecute}, {{(char const)'a', (char const)'w', (char const)'k', (char const)'\000'}, &Acompile, &EGexecute}, {{(char const)'g', (char const)'a', (char const)'w', (char const)'k', (char const)'\000'}, &GAcompile, &EGexecute}, {{(char const)'p', (char const)'o', (char const)'s', (char const)'i', (char const)'x', (char const)'a', (char const)'w', (char const)'k', (char const)'\000'}, &PAcompile, &EGexecute}, {{(char const)'p', (char const)'e', (char const)'r', (char const)'l', (char const)'\000'}, &Pcompile, &Pexecute}, {{(char const)'\000'}, (void (*)(char const *, size_t))((void *)0), (size_t(*)(char const *, size_t, size_t *, char const *))((void *)0)}};
static void setmatcher(char const *m)
{
  struct matcher const *p;
            
              
  int tmp___1;
                
                   
                    
  {
                
     
       

       







     
    p = matchers;
    {
      while (1)
      {
                                     ;
                        
         

         
        {
          tmp___1 = strcmp(m, (char const *)(p->name));
        }
        if (tmp___1 == 0)
        {
          matcher = (char const *)(p->name);
          compile = (void (*)(char const *, size_t))p->compile;
          execute = (size_t(*)(char const *, size_t, size_t *, char const *))p->execute;
          return;
        }
        p++;
      }

    }
              ;
  {


  }

  }
}
static size_t prepend_args(char const *options, char *buf, char **argv)
{




























































































}
static int prepend_default_options(char const *options, int *pargc, char ***pargv)
{
            
             
                
                   
                 
           
                    
            
                 
                       
                 
                 
                
                       
  {
                
     



















































     
    return (0);
  }
}
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context);
static int prev_digit_optind = -1;
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context)
{
  int this_digit_optind;
  int was_digit;
  char buf[((((sizeof(intmax_t) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) + 1UL) + 4UL];
  char *p;
  int opt;
            
                    
                    
  {
    p = buf;
    was_digit = 0;
    this_digit_optind = optind;
    {
      while (1)
      {
                                     ;
        {
          opt = getopt_long(argc, (char *const *)((char **)argv), short_options, long_options, (int *)((void *)0));
        }
        if (48 <= opt)
        {
          if (!(opt <= 57))
          {
            goto while_break;
          }
        }
        else
        {
          goto while_break;
        }





























      }

    }
  while_break:;
                                                 
     
       


       
     
    return (opt);
  }
}
static void parse_grep_colors(void)
{



















































































































































}
static _Bool contains_encoding_error(char const *pat, size_t patlen)
{






























}
static void fgrep_to_grep_pattern(size_t len, char const *keys, size_t *new_len, char **new_keys)
{














































































}
#include "argv-fuzz-inl.h"
int main(int argc, char **argv)
{
  AFL_INIT_SET0("grep");
  char *keys;
  size_t keycc;
  size_t oldcc;
  size_t keyalloc;
  int with_filenames;
  size_t cc;
  int opt;
  int status;
  int prepended;
  int prev_optind;
  int last_recursive;
  int fread_errno;
  intmax_t default_context;
  FILE *fp;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  int tmp___2;
  ptrdiff_t tmp___3;
  size_t tmp___4;
  FILE *tmp___6;
  int tmp___7;
  int *tmp___8;
  int *tmp___9;
  int tmp___10;
  size_t tmp___11;
  strtol_error tmp___12;
  char *tmp___13;
  char *tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  int tmp___27;
  int *tmp___28;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  char *userval;
  char *tmp___33;
  char *tmp___34;
  char const *tmp___35;
  struct stat tmp_stat;
  int tmp___36;
  int tmp___37;
  size_t new_keycc;
  char *new_keys;
  size_t tmp___38;
  _Bool tmp___39;
  size_t tmp___40;
  int tmp___41;
  int tmp___42;
  int tmp___43;
  void *__cil_tmp89;
  char *__cil_tmp90;
  char *__cil_tmp91;
  char *__cil_tmp92;
  char *__cil_tmp93;
  char *__cil_tmp94;
  char *__cil_tmp95;
  char *__cil_tmp96;
  char *__cil_tmp97;
  char *__cil_tmp98;
  char *__cil_tmp99;
  char *__cil_tmp100;
  char *__cil_tmp101;
  char *__cil_tmp102;
  char *__cil_tmp103;
  char *__cil_tmp104;
  char *__cil_tmp105;
  char *__cil_tmp106;
  char *__cil_tmp107;
  char *__cil_tmp108;
  {
    {
      exit_failure = (int volatile)2;
      set_program_name((char const *)*(argv + 0));
      program_name = (char const *)*(argv + 0);
      keys = (char *)((void *)0);
      keycc = (size_t)0;
      with_filenames = 0;
      eolbyte = (unsigned char)'\n';
      filename_mask = ~0;
      max_count = 9223372036854775807L;
      out_before = (intmax_t)-1;
      out_after = out_before;
      default_context = (intmax_t)-1;
      only_matching = 0;
      setlocale(6, "");
      bindtextdomain("grep", "/usr/local/share/locale");
      textdomain("grep");
      exit_failure = (int volatile)2;
      atexit(&clean_up_stdout);
      last_recursive = 0;
      tmp = getenv("GREP_OPTIONS");
      prepended = prepend_default_options((char const *)tmp, &argc, &argv);
      compile = (void (*)(char const *, size_t))matchers[0].compile;
      execute = (size_t(*)(char const *, size_t, size_t *, char const *))matchers[0].execute;
    }
    {
      while (1)
      {
      while_continue: /* CIL Label */;
        {
          prev_optind = optind;
          opt = get_nondigit_option(argc, (char *const *)argv, &default_context);
        }
        if (!(opt != -1))
        {
          goto while_break;
        }
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
        if (opt == 70)
        {
          goto case_70;
        }
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                       
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                       
         

         
                       
         

         
                       
         

         
                       
         

         
                       
         

         
                       
         

         
                      
         

         
        if (opt == 108)
        {
          goto case_108;
        }
                       
         

         
                       
         

         
                       
         

         
                       
         

         
                      
         

         
        if (opt == 114)
        {
          goto case_114;
        }
                       
         

         
        if (opt == 118)
        {
          goto case_118;
        }

























































      case_65:;
      {

      }

      case_66:;
      {

      }

      case_67:;
      {

      }

      case_68:;
      {

      }






















      case_69:;
      {

      }

      case_70:;
      {
        setmatcher("fgrep");
      }
        goto switch_break;
      case_80:;
      {

      }

      case_71:;
      {

      }

      case_88:;
      {

      }

      case_72:;



      case_73:;


      case_84:;


      case_85:;
      {

      }

      case_117:;
      {

      }

      case_86:;


      case_97:;


      case_98:;


      case_99:;


      case_100:;
      {


      }





      case_101:;
      {







      }

      case_102:;
      {

      }



















        {










        }
      while_break___0:;
      {


      }
        {



















        }
      while_break___1:;
      {



      }






















      case_104:;



      case_105:;


      case_76:;


      case_108:;
        list_files = 1;
        goto switch_break;
      case_109:;
      {

      }









      case_0:;

      switch_default:;
      {


      }


      case_110:;


      case_111:;


      case_113:;



      case_82:;

      case_114:;
        directories = (enum directories_type)3;
        last_recursive = prev_optind;
        goto switch_break;
      case_115:;


      case_118:;
        out_invert = (_Bool)1;
        goto switch_break;
      case_119:;


      case_120:;


      case_90:;


      case_122:;


      case_128:;
      {

      }
































      case_129:;



































































































      case_131:;














        {

        }

      case_132:;






        {

        }








      case_135:;






        {

        }

      case_136:;


      case_133:;


      case_134:;


      case_0___0:;

      switch_default___0:;
      {

      }

      switch_break:;
      }

    }
  while_break:;
                          
     
       

       



















     
    {
      init_colorize();
    }
                      
     

     
    if (exit_on_match | list_files)
    {
      count_matches = 0;
      done_on_match = 1;
    }
    out_quiet = count_matches | done_on_match;
    if (out_after < 0L)
    {
      out_after = default_context;
    }
    if (out_before < 0L)
    {
      out_before = default_context;
    }
                     
     
       


       








       

       
     
                     
     
       




       
     
                  
     
       

       
     
    {
      tmp___36 = fstat(1, &tmp_stat);
    }
                      
     
                                                
       

       
     
    if (keys)
    {










    }
    else
    {
      if (optind < argc)
      {
        {
          keycc = strlen((char const *)*(argv + optind));
          tmp___37 = optind;
          optind++;
          keys = (char *)xmemdup((void const *)*(argv + tmp___37), keycc + 1UL);
        }
      }
      else
      {
        {

        }
      }
    }
    if ((unsigned long)compile == (unsigned long)(&Fcompile))
    {
      {
        tmp___38 = __ctype_get_mb_cur_max();
      }
                         
       























       
    }
    {
      tmp___40 = __ctype_get_mb_cur_max();
    }
                       
     
       

       
     
    {
      (*compile)((char const *)keys, keycc);
      free((void *)keys);
    }
    if (argc - optind > 1)
    {
      if (!no_filenames)
      {
        out_file = 1;
      }
      else
      {

      }
    }
    else
    {
    _L___0:;




    }
    {
      tmp___41 = isatty(1);
    }
    if (!tmp___41)
    {
      {
        set_binary_mode(1, 0);
      }
    }
                        
     
       

       
     
                        
     




     
    if (optind < argc)
    {
      status = 1;
      {
        while (1)
        {
        while_continue___2: /* CIL Label */;
          {
            tmp___42 = grep_command_line_arg((char const *)*(argv + optind));
            status &= tmp___42;
            optind++;
          }
                               
           

           
        }
      while_break___6: /* CIL Label */;
      }

    }
    else
    {






















    }








    {

    }
  }
}
