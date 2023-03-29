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
  int tmp;
  void *tmp___0;
  {
    if (sizeof(ptrdiff_t) <= sizeof(size_t))
    {
      tmp = -1;
    }
    else
    {

    }
                            
     
       

       
     
    {
      tmp___0 = xmalloc(n * s);
    }
    return (tmp___0);
  }
}
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s)
{
  int tmp;
  void *tmp___0;
  {
    if (sizeof(ptrdiff_t) <= sizeof(size_t))
    {
      tmp = -1;
    }
    else
    {

    }
                            
     
       

       
     
    {
      tmp___0 = xrealloc(p, n * s);
    }
    return (tmp___0);
  }
}
void *x2nrealloc(void *p, size_t *pn, size_t s)
{
  size_t n;
  void *tmp;
  {
    n = *pn;
    if (!p)
    {
      if (!n)
      {
        n = 128UL / s;
        n += (size_t)(!n);
      }
    }
    else
    {







    }
    {
      *pn = n;
      tmp = xrealloc(p, n * s);
    }
    return (tmp);
  }
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
  {
           
     







     
    {
      p = realloc(p, n);
    }
           
     






     
    return (p);
  }
}
void *x2realloc(void *p, size_t *pn)
{







}
void *xzalloc(size_t s) __attribute__((__malloc__, __alloc_size__(1)));
void *xzalloc(size_t s)
{
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memset(tmp, 0, s);
    }
    return (tmp___0);
  }
}
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xcalloc(size_t n, size_t s)
{
  void *p;
  {
    {
      p = calloc(n, s);
    }
           
     
       

       
     
    return (p);
  }
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
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = strlen(string);
      tmp___0 = (char *)xmemdup((void const *)string, tmp + 1UL);
    }
    return (tmp___0);
  }
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























}
_Bool i_ring_empty(I_ring const *ir) __attribute__((__pure__));
_Bool i_ring_empty(I_ring const *ir)
{



}
int i_ring_push(I_ring *ir, int val)
{














}
int i_ring_pop(I_ring *ir)
{
























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






































}
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate)
{
































}
static size_t raw_hasher(void const *data, size_t n)
{









}
static _Bool raw_comparator(void const *a, void const *b)
{



}
static _Bool check_tuning(Hash_table *table)
{


































}
static size_t __attribute__((__pure__)) compute_bucket_size(size_t candidate, Hash_tuning const *tuning)
{





























}
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate, Hash_tuning const *tuning, size_t (*hasher)(void const *, size_t), _Bool (*comparator)(void const *, void const *), void (*data_freer)(void *))
{


























































}
void hash_free(Hash_table *table)
{




































































































}
static struct hash_entry *allocate_entry(Hash_table *table)
{















}
static void free_entry(Hash_table *table, struct hash_entry *entry)
{






}
static void *hash_find_entry(Hash_table *table, void const *entry, struct hash_entry **bucket_head, _Bool delete___0)
{


























































































}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe)
{


























































































}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate)
{















































































}
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent)
{























































































}
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table, void const *entry)
{




























}
void *hash_delete(Hash_table *table, void const *entry)
{



































































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
static DIR *opendirat(int fd, char const *dir, int extra_flags, int *pdir_fd)
{



































}
static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one)
{



















































}
static int restore_initial_cwd(FTS *sp)
{


























































}
static int diropen(FTS const *sp, char const *dir)
{
















































}
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **));
FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv, int options, int (*compar)(FTSENT const **, FTSENT const **))
{























































































































































































































































































}
static void fts_load(FTS *sp, FTSENT *p)
{









































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
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv)
{


























}
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir)
{
























































































































































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
                          
                  
                
               
               
  int tmp___3;
               
  int tmp___5;
                    
  {
    {
      tmp___3 = close_stream(stdout);
    }
                     
     




































     
    {
      tmp___5 = close_stream(stderr);
    }
                     
     
       

       
     
    return;
  }
}
extern __attribute__((__nothrow__)) size_t __fpending(FILE *__fp);
int close_stream(FILE *stream)
{
  _Bool some_pending;
  size_t tmp;
  _Bool prev_fail;
  int tmp___0;
  _Bool fclose_fail;
  int tmp___1;
               
               
  {
    {
      tmp = __fpending(stream);
      some_pending = (_Bool)(tmp != 0UL);
      tmp___0 = ferror_unlocked(stream);
      prev_fail = (_Bool)(tmp___0 != 0);
      tmp___1 = fclose(stream);
      fclose_fail = (_Bool)(tmp___1 != 0);
    }
                  
     

     
        
     
                      
       






















       
     
    return (0);
  }
}
int set_cloexec_flag(int desc, _Bool value)
{






































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

























































































}
static void mb_case_map_apply(mb_len_map_t const *map, size_t *off, size_t *len)
{










































}
size_t Fexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr)
{




















































































































































































































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
  struct tree *kwset_link;
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
        kwset_link = (struct tree *)fail->links;
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
            if ((int const)tree->label < (int const)kwset_link->label)
            {

            }
            else
            {
              kwset_link = kwset_link->rlink;
            }
          }

        }
      while_break___0:;
                       
         


         
        fail = (struct trie const *)fail->fail;
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
  int __attribute__((__pure__)) tmp;
  int __attribute__((__pure__)) tmp___0;
  {
    if (!b)
    {
      return ((int __attribute__((__pure__)))1);
    }
    {
      tmp = hasevery(a, (struct tree const *)b->llink);
    }
             
     

     
    {
      tmp___0 = hasevery(a, (struct tree const *)b->rlink);
    }
                 
     

     
    {
      while (1)
      {
                                     ;
        if (a)
        {
                                                            
           

           
        }
        else
        {
          goto while_break;
        }
        if ((int const)b->label < (int const)a->label)
        {

        }
        else
        {
          a = (struct tree const *)a->rlink;
        }
      }

    }
  while_break:;
    return ((int __attribute__((__pure__)))(!(!a)));
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
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___6;
  char *tmp___7;
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
            if (!tmp___1)
            {
              if (curr->depth - fail->depth < fail->shift)
              {
                fail->shift = curr->depth - fail->depth;
              }
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
      if (kwset___1->mind > 1)
      {
        __h___0 = &kwset___1->obstack;
        __o___0 = __h___0;
        __len___0 = (int)(sizeof(*(kwset___1->shift)) * (unsigned long)(kwset___1->mind - 1));
                                                                        
         
           

           
         
        __o___0->next_free += __len___0;
        __o1___0 = __h___0;
        __value___0 = (void *)__o1___0->object_base;
                                                                             
         

         
        if (sizeof(long) < sizeof(void *))
        {

        }
        else
        {
          tmp___6 = (char *)0;
        }
        if (sizeof(long) < sizeof(void *))
        {

        }
        else
        {
          tmp___7 = (char *)0;
        }
        __o1___0->next_free = tmp___6 + (((__o1___0->next_free - tmp___7) + (long)__o1___0->alignment_mask) & (long)(~__o1___0->alignment_mask));
                                                                                                            
         

         
        __o1___0->object_base = __o1___0->next_free;
        kwset___1->shift = (int *)__value___0;
        i = 0;
        curr = (kwset___1->trie)->next;
        {
          while (1)
          {
                                             ;
            if (!(i < kwset___1->mind - 1))
            {
              goto while_break___4;
            }
            *(kwset___1->shift + i) = curr->shift;
            curr = curr->next;
            i++;
          }

        }
      while_break___4:;
      }
      {
        tmp___8 = tr(trans___0, *(kwset___1->target + (kwset___1->mind - 1)));
        gc1 = tmp___8;
        gc1help = -1;
      }
                    
       
         




         

















       
      kwset___1->gc1 = gc1;
      kwset___1->gc1help = gc1help;
      if (kwset___1->mind > 1)
      {
        {
          kwset___1->gc2 = tr(trans___0, *(kwset___1->target + (kwset___1->mind - 2)));
        }
      }
    }
                  
     

       














       

     
    return;
  }
}
static _Bool bm_delta2_search(char const **tpp, char const *ep, char const *sp, int len, char const *trans___0, char gc1, char gc2, unsigned char const *d1, kwset_t kwset___1)
{









































































































}
static char const *memchr_kwset(char const *s, size_t n, kwset_t kwset___1)
{






































































}
static size_t __attribute__((__pure__)) bmexec_trans(kwset_t kwset___1, char const *text, size_t size)
{



















































































































































































}
static size_t bmexec(kwset_t kwset___1, char const *text, size_t size)
{




















}
static size_t(__attribute__((__nonnull__(4))) cwexec)(kwset_t kwset___1, char const *text, size_t len, struct kwsmatch *kwsmatch)
{

























































































































































































































































































































}
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text, size_t size, struct kwsmatch *kwsmatch)
{


























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
  struct dfamust const *dm;
  struct dfamust const *tmp;
                 
                 
                 
                 
                
           
  size_t tmp___2;
  {
    {
      tmp = (struct dfamust const *)dfamusts((struct dfa const *)dfa);
      dm = tmp;
    }
    if (dm)
    {
      {
        kwsinit(&kwset___0);
      }
      {
        while (1)
        {
                                       ;
          if (!dm)
          {
            goto while_break;
          }
          if (!dm->exact)
          {
            goto __Cont;
          }
          {











          }




          {


          }
        __Cont:;
          dm = (struct dfamust const *)dm->next;
        }

      }
    while_break:;
    {
      dm = (struct dfamust const *)dfamusts((struct dfa const *)dfa);
    }
      {
        while (1)
        {
                                           ;
          if (!dm)
          {
            goto while_break___0;
          }
                        
           

           
          {
            tmp___2 = strlen((char const *)dm->must);
            kwsincr(kwset___0, (char const *)dm->must, tmp___2);
          }
                   ;
          dm = (struct dfamust const *)dm->next;
        }

      }
    while_break___0:;
    {
      kwsprep(kwset___0);
    }
    }
    return;
  }
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
  size_t total;
  char *motif;
  char const *p;
  size_t len;
  char const *sep;
  char const *tmp;
  char const *err;
  char const *tmp___0;
         
          
                
                      
                      
                      
                      
                      
                      
                 
  {
    total = size;
                    
     

     
    {
      re_set_syntax(syntax_bits___0);
      dfasyntax(syntax_bits___0, match_icase, eolbyte);
      p = pattern;
    }
    {
      while (1)
      {
                                     ;
        {
          tmp = (char const *)memchr((void const *)p, '\n', total);
          sep = tmp;
        }
        if (sep)
        {



        }
        else
        {
          len = total;
          total = (size_t)0;
        }
        {
          patterns = (struct patterns *)xnrealloc((void *)patterns, pcount + 1UL, sizeof(*patterns));
          *(patterns + pcount) = patterns0;
          tmp___0 = re_compile_pattern(p, len, &(patterns + pcount)->regexbuf);
          err = tmp___0;
        }
                
         
           

           
         
        pcount++;
        p = sep;
        if (!p)
        {
          goto while_break;
        }
      }

    }
  while_break:;
    if (match_words)
    {

    }
    else
    {
      if (match_lines)
      {
         ;
      {



      }
























        {




        }
























        {






        }
      }
      else
      {
        motif = (char *)((void *)0);
      }
    }
    {
      dfa = dfaalloc();
      dfacomp(pattern, size, dfa, 1);
      kwsmusts();
      free((void *)motif);
    }
    return;
  }
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
  {
    return ((unsigned char)ch);
  }
}
static void dfamust(struct dfa *d);
static void regexp(void);
static void dfambcache(struct dfa *d)
{
  int i;
  char c;
  unsigned char uc;
  mbstate_t s;
  wchar_t wc;
  size_t tmp___0;
                   
  {
    i = -128;
    {
      while (1)
      {
                                     ;
        if (!(i <= 127))
        {
          goto while_break;
        }
        {
          c = (char)i;
          uc = (unsigned char)i;
          s.__count = 0;
          s.__value.__wch = 0U;
          tmp___0 = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */)((char const *)(&c)), (size_t)1, (mbstate_t * /* __restrict  */)(&s));
        }
        if (tmp___0 <= 1UL)
        {
          d->mbrtowc_cache[uc] = (wint_t)wc;
        }
        else
        {
          d->mbrtowc_cache[uc] = 4294967295U;
        }
        i++;
      }

    }
  while_break:;
    return;
  }
}
static size_t mbs_to_wchar(wint_t *pwc, char const *s, size_t n, struct dfa *d)
{
  unsigned char uc;
  wint_t wc;
              
                
             
  {
    uc = (unsigned char)*(s + 0);
    wc = d->mbrtowc_cache[uc];
                          
     
       


       








       

       
     
    *pwc = wc;
    return ((size_t)1);
  }
}
static _Bool tstbit(unsigned int b, charclass_word *const c)
{
  {
    return ((_Bool)((*(c + b / 32U) >> b % 32U) & 1U));
  }
}
static void setbit(unsigned int b, charclass_word *c)
{
  {
    *(c + b / 32U) |= 1U << b % 32U;
    return;
  }
}
static void clrbit(unsigned int b, charclass_word *c)
{
  {
    *(c + b / 32U) &= ~(1U << b % 32U);
    return;
  }
}
static void copyset(charclass_word *const src, charclass_word *dst)
{
  {
    {
      memcpy((void * /* __restrict  */)((void *)dst), (void const * /* __restrict  */)((void const *)src), sizeof(charclass));
    }
    return;
  }
}
static void zeroset(charclass_word *s)
{
  {
    {
      memset((void *)s, 0, sizeof(charclass));
    }
    return;
  }
}
static void notset(charclass_word *s)
{
  int i;
  {
    i = 0;
    {
      while (1)
      {
                                     ;
        if (!(i < 8))
        {
          goto while_break;
        }
        *(s + i) = (((1U << 31) << 1) - 1U) & ~*(s + i);
        i++;
      }

    }
  while_break:;
    return;
  }
}
static _Bool equal(charclass_word *const s1, charclass_word *const s2)
{







}
static void *maybe_realloc(void *ptr, size_t nitems, size_t *nalloc, size_t itemsize)
{
  void *tmp;
  {
    if (nitems < *nalloc)
    {
      return (ptr);
    }
    {
      *nalloc = nitems;
      tmp = x2nrealloc(ptr, nalloc, itemsize);
    }
    return (tmp);
  }
}
static size_t dfa_charclass_index(struct dfa *d, charclass_word *const s)
{
  size_t i;
            
  {
    i = (size_t)0;
    {
      while (1)
      {
                                     ;
        if (!(i < d->cindex))
        {
          goto while_break;
        }
        {

        }





      }

    }
  while_break:;
  {
    d->charclasses = (charclass *)maybe_realloc((void *)d->charclasses, d->cindex, &d->calloc, sizeof(*(d->charclasses)));
    (d->cindex)++;
    copyset(s, *(d->charclasses + i));
  }
    return (i);
  }
}
static struct dfa *dfa___0;
static size_t charclass_index(charclass_word *const s)
{
  size_t tmp;
  {
    {
      tmp = dfa_charclass_index(dfa___0, s);
    }
    return (tmp);
  }
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
  unsigned short const **tmp;
  {
    if ((int)c == (int)eolbyte___0)
    {
      return (4);
    }
    {
      tmp = __ctype_b_loc();
    }
    if ((int const) * (*tmp + (int)c) & 8)
    {
      return (2);
    }
    else
    {
      if ((int)c == 95)
      {
        return (2);
      }
    }
    return (1);
  }
}
static int wchar_context(wint_t wc)
{





























}
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol)
{
  unsigned int i;
  {
    syntax_bits_set = (reg_syntax_t)1;
    syntax_bits = bits;
    case_fold = (_Bool)(fold != 0);
    eolbyte___0 = eol;
    i = 0U;
    {
      while (1)
      {
                                     ;
        if (!(i < 256U))
        {
          goto while_break;
        }
        {
          sbit[i] = char_context((unsigned char)i);
        }
        if (sbit[i] == 2)
        {
          goto case_2;
        }
        if (sbit[i] == 4)
        {
          goto case_4;
        }
        goto switch_break;
      case_2:;
      {
        setbit(i, letters);
      }
        goto switch_break;
      case_4:;
      {
        setbit(i, newline);
      }
        goto switch_break;
      switch_break:;
        i++;
      }

    }
  while_break:;
    return;
  }
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
  wchar_t wc;
  mbstate_t mbs;
  size_t tmp;
  int tmp___0;
                   
  {
    if (utf8 < 0)
    {
      {
        mbs.__count = 0;
        mbs.__value.__wch = 0U;
        tmp = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */) "\304\200", (size_t)2, (mbstate_t * /* __restrict  */)(&mbs));
      }
      if (tmp == 2UL)
      {








      }
      else
      {
        tmp___0 = 0;
      }
      utf8 = tmp___0;
    }
    return (utf8);
  }
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
  int c;
         
  _Bool backslash;
  charclass ccl;
  int i;
  wint_t _wc;
  size_t nbytes;
  size_t tmp;
  unsigned char tmp___0;
                
              
              
              
              
              
              
                
                  
                
                      
                       
                 
  size_t tmp___12;
                                  
                  
                           
                       
                                  
                  
                  
                                  
                    
                    
                    
                    
                    
                    
  {
    backslash = (_Bool)0;
    i = 0;
    {
      while (1)
      {
                                     ;
                     
         

         
        {
          while (1)
          {
                                             ;
            if (!lexleft)
            {
              lasttok = (token)-1;
              return (lasttok);
            }
            else
            {
              {
                tmp = mbs_to_wchar(&_wc, lexptr, lexleft, dfa___0);
                nbytes = tmp;
                cur_mb_len = (int)nbytes;
                wctok = _wc;
              }
              if (nbytes == 1UL)
              {
                {
                  tmp___0 = to_uchar___0((char)*lexptr);
                  c = (int)tmp___0;
                }
              }
              else
              {

              }
              lexptr += nbytes;
              lexleft -= nbytes;
            }
            goto while_break___0;
          }

        }
      while_break___0:;
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
        if (c == 60)
        {
          goto case_60;
        }
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                    
         

         
                     
         

         
                     
         

         
                    
         

         
                    
         

         
                    
         

         
        if (c == 46)
        {
          goto case_46;
        }
                     
         

         
                    
         

         
                     
         

         
                    
         

         
                    
         

         
        goto normal_char;
              ;













              ;


































              ;










































































































































              ;










              ;









              ;









      case_60:;
                      
         





         
        goto normal_char;
              ;









              ;









              ;









              ;

















              ;













              ;

















               ;



















        {
































        }





























































































































               ;











              ;





















              ;








              ;















      case_46:;
                      
         

         
                               
         



         
        {
          zeroset(ccl);
          notset(ccl);
        }
        if (!(syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)))
        {
          {
            clrbit((unsigned int)eolbyte___0, ccl);
          }
        }
                                                                               
         
           

           
         
        {
          laststart = (_Bool)0;
          tmp___12 = charclass_index((charclass_word * /* const  */)(ccl));
          lasttok = (token)(275UL + tmp___12);
        }
        return (lasttok);
               ;




















































        {






















        }
                      ;


               ;











        {


        }
        {




























        }







        {



        }

              ;




        {


        }

      normal_char:;
        laststart = (_Bool)0;
                               
         


         
                      
         
           

           










         
        lasttok = (token)c;
        return (lasttok);
                   ;

      }

    }
              ;
  {

  }

  }
}
static token tok;
static size_t depth;
static void addtok_mb(token t, int mbprop)
{
  size_t tmp;
  {
    if (dfa___0->talloc == dfa___0->tindex)
    {
      {
        dfa___0->tokens = (token *)x2nrealloc((void *)dfa___0->tokens, &dfa___0->talloc, sizeof(*(dfa___0->tokens)));
      }
                             
       
         

         
       
    }
                           
     

     
    tmp = dfa___0->tindex;
    (dfa___0->tindex)++;
    *(dfa___0->tokens + tmp) = t;
                  
     

     
                  
     

     
                  
     

     
    if (t == 268L)
    {
      goto case_268;
    }
                  
     

     
                  
     

     
                  
     

     
    goto switch_default;
           ;

  case_268:;
    depth--;
    goto switch_break;
           ;

  switch_default:;
    (dfa___0->nleaves)++;
           ;
    depth++;
    goto switch_break;
  switch_break:;
    if (depth > dfa___0->depth)
    {
      dfa___0->depth = depth;
    }
    return;
  }
}
static void addtok_wc(wint_t wc);
static void addtok(token t)
{
                
                                   
           
  {
    if (dfa___0->multibyte)
    {































































































    }
    else
    {
      {
        addtok_mb(t, 3);
      }
    }
    return;
  }
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
                     
        
        
          
                
              
                   
                    
  {
    if (tok == 274L)
    {





































      {

      }
    }
    else
    {
      if (tok == 272L)
      {
        {

        }











      }
      else
      {
             ;
        if (tok >= 0L)
        {
          if (tok < 256L)
          {
            {
              addtok(tok);
              tok = lex();
            }
          }
          else
          {
            goto _L;
          }
        }
        else
        {
        _L:;
          if (tok >= 275L)
          {
            {
              addtok(tok);
              tok = lex();
            }
          }
          else
          {


















































































































          }
        }
      }
    }
    return;
  }
}
static size_t __attribute__((__pure__)) nsubtoks(size_t tindex)
{








































}
static void copytoks(size_t tindex, size_t ntokens)
{












































}
static void closure(void)
{
        
                
                 
                                       
  {
    {
      atom();
    }
    {
      while (1)
      {
                                     ;
        if (!(tok == 264L))
        {
          if (!(tok == 265L))
          {
            if (!(tok == 266L))
            {
              if (!(tok == 267L))
              {
                goto while_break;
              }
            }
          }
        }





























































































      }

    }
  while_break:;
    return;
  }
}
static void branch(void)
{
  {
    {
      closure();
    }
    {
      while (1)
      {
                                     ;
        if (tok != 271L)
        {
          if (tok != 269L)
          {
            if (!(tok >= 0L))
            {
              goto while_break;
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
          closure();
          addtok((token)268);
        }
      }

    }
  while_break:;
    return;
  }
}
static void regexp(void)
{
  {
    {
      branch();
    }
    {
      while (1)
      {
                                     ;
        if (!(tok == 269L))
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
void dfaparse(char const *s, size_t len, struct dfa *d)
{
            
                
                   
                   
  {
    dfa___0 = d;
    lexptr = s;
    lexleft = len;
    lasttok = (token)-1;
    laststart = (_Bool)1;
    parens = (size_t)0;
                           
     
       


       
     
                         
     
       


       
     
    {
      tok = lex();
      depth = d->depth;
      regexp();
    }
                   
     
       


       
     
    {
      addtok((token)(0xffffffffffffffffUL - d->nregexps));
      addtok((token)268);
    }
                    
     
       

       
     
    (d->nregexps)++;
    return;
  }
}
static void copy(position_set const *src, position_set *dst)
{
  {
                                        
     
       



       
     
    {
      memcpy((void * /* __restrict  */)((void *)dst->elems), (void const * /* __restrict  */)((void const *)src->elems), (size_t)(src->nelem * (size_t const)sizeof(*(dst->elems))));
      dst->nelem = (size_t)src->nelem;
    }
    return;
  }
}
static void alloc_position_set(position_set *s, size_t size)
{
  {
    {
      s->elems = (position *)xnmalloc(size, sizeof(*(s->elems)));
      s->alloc = size;
      s->nelem = (size_t)0;
    }
    return;
  }
}
static void insert(position p, position_set *s)
{
  size_t count;
  size_t lo;
  size_t hi;
  size_t i;
             
  {
    count = s->nelem;
    lo = (size_t)0;
    hi = count;
    {
      while (1)
      {
                                     ;
        if (!(lo < hi))
        {
          goto while_break;
        }









      }

    }
  while_break:;
                   
     





     
    {
      s->elems = (position *)maybe_realloc((void *)s->elems, count, &s->alloc, sizeof(*(s->elems)));
      i = count;
    }
    {
      while (1)
      {
                                         ;
        if (!(i > lo))
        {
          goto while_break___0;
        }


      }

    }
  while_break___0:;
    *(s->elems + lo) = p;
    (s->nelem)++;
    return;
  }
}
static void merge(position_set const *s1, position_set const *s2, position_set *m)
{
  size_t i;
  size_t j;
             
                 
                 
                 
                 
                 
                 
  size_t tmp___6;
  size_t tmp___7;
                 
                 
  {
    i = (size_t)0;
    j = (size_t)0;
                                                   
     
       


       
     
    m->nelem = (size_t)0;
    {
      while (1)
      {
                                     ;
        if (i < (size_t)s1->nelem)
        {
          if (!(j < (size_t)s2->nelem))
          {
            goto while_break;
          }
        }
        else
        {

        }






























      }

    }
  while_break:;
    {
      while (1)
      {
                                         ;
        if (!(i < (size_t)s1->nelem))
        {
          goto while_break___0;
        }
        tmp___6 = m->nelem;
        (m->nelem)++;
        tmp___7 = i;
        i++;
        *(m->elems + tmp___6) = *(s1->elems + tmp___7);
      }

    }
  while_break___0:;
    {
      while (1)
      {
                                         ;
        if (!(j < (size_t)s2->nelem))
        {
          goto while_break___1;
        }





      }

    }
  while_break___1:;
    return;
  }
}
static void delete(position p, position_set *s)
{








































}
static state_num state_index(struct dfa *d, position_set const *s, int context)
{
  size_t hash;
                 
  state_num i;
  state_num j;
  {
    hash = (size_t)0;
    i = (state_num)0;
    {
      while (1)
      {
                                     ;
        if (!((size_t const)i < s->nelem))
        {
          goto while_break;
        }
        hash ^= (s->elems + i)->index + (size_t)(s->elems + i)->constraint;
        i++;
      }

    }
  while_break:;
    i = (state_num)0;
    {
      while (1)
      {
                                         ;
        if (!(i < d->sindex))
        {
          goto while_break___0;
        }



















        {





















        }





             ;

      }

    }
  while_break___0:;
  {
    d->states = (dfa_state *)maybe_realloc((void *)d->states, (size_t)d->sindex, &d->salloc, sizeof(*(d->states)));
    (d->states + i)->hash = hash;
    alloc_position_set(&(d->states + i)->elems, (size_t)s->nelem);
    copy(s, &(d->states + i)->elems);
    (d->states + i)->context = (unsigned char)context;
    (d->states + i)->has_backref = (_Bool)0;
    (d->states + i)->has_mbcset = (_Bool)0;
    (d->states + i)->constraint = (unsigned short)0;
    (d->states + i)->first_end = (token)0;
    (d->states + i)->mbps.nelem = (size_t)0;
    (d->states + i)->mbps.elems = (position *)((void *)0);
    j = (state_num)0;
  }
    {
      while (1)
      {
                                         ;
        if (!((size_t const)j < s->nelem))
        {
          goto while_break___2;
        }
                                                      
         









         
            
         
                                                           
           


           
         
        j++;
      }

    }
  while_break___2:;
    (d->sindex)++;
    return (i);
  }
}
static void epsclosure(position_set *s, struct dfa const *d, char *visited)
{
  size_t i;
           
             
               
  _Bool initialized;
  {
    initialized = (_Bool)0;
    i = (size_t)0;
    {
      while (1)
      {
                                     ;
        if (!(i < s->nelem))
        {
          goto while_break;
        }
                                                         
         
                                                           
           
                                                             
             
                                                               
               
                                                                
                 







                   



                   































                          


                          


                          


                          


                          


                          


                                

                              

                   














                   
                                 

                 
               
             
           
         
             ;
        i++;
      }

    }
  while_break:;
    return;
  }
}
static int charclass_context(charclass_word *c)
{




































}
static int __attribute__((__pure__)) state_separate_contexts(position_set const *s)
{
  int separate_contexts;
  size_t j;
  {
    separate_contexts = 0;
    j = (size_t)0;
    {
      while (1)
      {
                                     ;
        if (!(j < (size_t)s->nelem))
        {
          goto while_break;
        }
                                                                                              
         

         
                                                                                              
         

         
        j++;
      }

    }
  while_break:;
    return ((int __attribute__((__pure__)))separate_contexts);
  }
}
void dfaanalyze(struct dfa *d, int searchflag)
{
  position *posalloc;
  position *tmp;
  position *firstpos;
  position *lastpos;
  struct __anonstruct_stkalloc_43 *stkalloc;
  struct __anonstruct_stkalloc_43 *tmp___0;
  struct __anonstruct_stkalloc_43 *stk;
  position_set tmp___1;
  position_set merged;
  int separate_contexts;
  size_t i;
  size_t j;
  position *pos;
  char *visited;
  char *tmp___2;
                 
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  unsigned int tmp___7;
  int tmp___8;
  {
    {
      tmp = (position *)xnmalloc(d->nleaves, 2UL * sizeof(*posalloc));
      posalloc = tmp;
      firstpos = posalloc + d->nleaves;
      lastpos = firstpos + d->nleaves;
      tmp___0 = (struct __anonstruct_stkalloc_43 *)xnmalloc(d->depth, sizeof(*stkalloc));
      stkalloc = tmp___0;
      stk = stkalloc;
      tmp___2 = (char *)xnmalloc(d->tindex, sizeof(*visited));
      visited = tmp___2;
      d->searchflag = (_Bool)(searchflag != 0);
      alloc_position_set(&merged, d->nleaves);
      d->follows = (position_set *)xcalloc(d->tindex, sizeof(*(d->follows)));
      i = (size_t)0;
    }
    {
      while (1)
      {
                                     ;
        if (!(i < d->tindex))
        {
          goto while_break;
        }
                                     
         

         
                                     
         

         
                                     
         

         
                                     
         

         
        if (*(d->tokens + i) == 268L)
        {
          goto case_268;
        }
                                     
         

         
        goto switch_default;
               ;






               ;




        {














        }

               ;





      case_268:;
        tmp___1.nelem = (stk + -1)->nfirstpos;
        tmp___1.elems = firstpos;
        pos = lastpos + (stk + -1)->nlastpos;
        j = (size_t)0;
        {
          while (1)
          {
                                             ;
            if (!(j < (stk + -2)->nlastpos))
            {
              goto while_break___1;
            }
            {
              merge((position_set const *)(&tmp___1), (position_set const *)(d->follows + (pos + j)->index), &merged);
              copy((position_set const *)(&merged), d->follows + (pos + j)->index);
              j++;
            }
          }

        }
      while_break___1:;
        if ((stk + -2)->nullable)
        {

        }
        else
        {
          firstpos += (stk + -1)->nfirstpos;
        }
        if ((stk + -1)->nullable)
        {

        }
        else
        {
          pos = lastpos + (stk + -2)->nlastpos;
          j = (stk + -1)->nlastpos;
          {
            while (1)
            {
                                               ;
              tmp___4 = j;
              j--;
              if (!(tmp___4 > 0UL))
              {
                goto while_break___2;
              }
              *(pos + j) = *(lastpos + j);
            }

          }
        while_break___2:;
          lastpos += (stk + -2)->nlastpos;
          (stk + -2)->nlastpos = (stk + -1)->nlastpos;
        }
        (stk + -2)->nullable = (_Bool)((int)(stk + -2)->nullable & (int)(stk + -1)->nullable);
        stk--;
        goto switch_break;
               ;





      switch_default:;
      {
        stk->nullable = (_Bool)(*(d->tokens + i) == 257L);
        tmp___5 = (size_t)1;
        stk->nlastpos = tmp___5;
        stk->nfirstpos = tmp___5;
        stk++;
        firstpos--;
        lastpos--;
        tmp___6 = i;
        lastpos->index = tmp___6;
        firstpos->index = tmp___6;
        tmp___7 = 1911U;
        lastpos->constraint = tmp___7;
        firstpos->constraint = tmp___7;
        alloc_position_set(d->follows + i, (size_t)1);
      }
        goto switch_break;
      switch_break:;
        i++;
      }

    }
  while_break:;
    i = (size_t)0;
    {
      while (1)
      {
                                         ;
        if (!(i < d->tindex))
        {
          goto while_break___3;
        }
        if (*(d->tokens + i) < 256L)
        {
          {
            copy((position_set const *)(d->follows + i), &merged);
            epsclosure(&merged, (struct dfa const *)d, visited);
            copy((position_set const *)(&merged), d->follows + i);
          }
        }
        else
        {
          if (*(d->tokens + i) == 257L)

          {
            {



            }
          }
          else
          {
            if (*(d->tokens + i) == 272L)
            {
              {



              }
            }
            else
            {
              if (*(d->tokens + i) == 273L)
              {
                {



                }
              }
              else
              {
                if (*(d->tokens + i) >= 275L)
                {
                  {
                    copy((position_set const *)(d->follows + i), &merged);
                    epsclosure(&merged, (struct dfa const *)d, visited);
                    copy((position_set const *)(&merged), d->follows + i);
                  }
                }
              }
            }
          }
        }
        i++;
      }

    }
  while_break___3:;
    merged.nelem = (size_t)0;
    i = (size_t)0;
    {
      while (1)
      {
                                         ;
        if (!(i < (stk + -1)->nfirstpos))
        {
          goto while_break___4;
        }
        {
          insert(*(firstpos + i), &merged);
          i++;
        }
      }

    }
  while_break___4:;
  {
    epsclosure(&merged, (struct dfa const *)d, visited);
    separate_contexts = (int)state_separate_contexts((position_set const *)(&merged));
  }
    if (separate_contexts & 4)
    {

    }
    else
    {
      tmp___8 = separate_contexts ^ 7;
    }
    {
      state_index(d, (position_set const *)(&merged), tmp___8);
      free((void *)posalloc);
      free((void *)stkalloc);
      free((void *)merged.elems);
      free((void *)visited);
    }
    return;
  }
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
  size_t tmp;
  {
    {
      memset((void *)d, 0, sizeof(*d));
      tmp = __ctype_get_mb_cur_max();
      d->multibyte = (_Bool)(tmp > 1UL);
      d->fast = (_Bool)(!d->multibyte);
    }
    return;
  }
}
static void dfaoptimize(struct dfa *d)
{
           
  _Bool have_backref;
  int tmp;
  {
    {
      have_backref = (_Bool)0;
      tmp = using_utf8();
    }
    if (!tmp)
    {
      return;
    }

    {



































    }












    {


    }

  }
}
static void dfassbuild(struct dfa *d)
{
  size_t i;
  size_t j;
                
  _Bool have_achar;
  _Bool have_nchar;
  struct dfa *sup;
  struct dfa *tmp;
                 
                 
                 
                 
  size_t tmp___4;
                    
  {
    {
      have_achar = (_Bool)0;
      have_nchar = (_Bool)0;
      tmp = dfaalloc();
      sup = tmp;
      *sup = *d;
      sup->multibyte = (_Bool)0;
      sup->multibyte_prop = (int *)((void *)0);
      sup->mbcsets = (struct mb_char_classes *)((void *)0);
      sup->superset = (struct dfa *)((void *)0);
      sup->states = (dfa_state *)((void *)0);
      sup->sindex = (state_num)0;
      sup->follows = (position_set *)((void *)0);
      sup->tralloc = (state_num)0;
      sup->trans = (state_num **)((void *)0);
      sup->fails = (state_num **)((void *)0);
      sup->success = (int *)((void *)0);
      sup->newlines = (state_num *)((void *)0);
      sup->musts = (struct dfamust *)((void *)0);
      sup->charclasses = (charclass *)xnmalloc(sup->calloc, sizeof(*(sup->charclasses)));
      memcpy((void * /* __restrict  */)((void *)sup->charclasses), (void const * /* __restrict  */)((void const *)d->charclasses), d->cindex * sizeof(*(sup->charclasses)));
      sup->tokens = (token *)xnmalloc(d->tindex, 2UL * sizeof(*(sup->tokens)));
      sup->talloc = d->tindex * 2UL;
      j = (size_t)0;
      i = j;
    }
    {
      while (1)
      {
                                     ;
        if (!(i < d->tindex))
        {
          goto while_break;
        }
                                     
         

         
                                     
         

         
                                     
         

         
                                     
         

         
                                     
         

         
                                     
         

         
                                     
         

         
        goto switch_default;
               ;
      {









      }




















               ;








      switch_default:;
        tmp___4 = j;
        j++;
        *(sup->tokens + tmp___4) = *(d->tokens + i);
        if (0L <= *(d->tokens + i))
        {
          if (*(d->tokens + i) < 256L)
          {
            have_nchar = (_Bool)1;
          }
          else
          {
            goto _L;
          }
        }
        else
        {
        _L:;
          if (*(d->tokens + i) >= 275L)
          {
            have_nchar = (_Bool)1;
          }
        }
        goto switch_break;
      switch_break:;
        i++;
      }

    }
  while_break:;
    sup->tindex = j;
    if (have_nchar)
    {
      if (have_achar)
      {

      }
      else
      {
        if (d->multibyte)
        {

        }
        else
        {
          {
            dfafree(sup);
            free((void *)sup);
          }
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
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag)
{
  {
    {
      dfainit(d);
      dfambcache(d);
      dfaparse(s, len, d);
      dfamust(d);
      dfassbuild(d);
      dfaoptimize(d);
      dfaanalyze(d, searchflag);
    }
                    
     
       


       
     
    return;
  }
}
void dfafree(struct dfa *d)
{
  size_t i;
  struct dfamust *dm;
                      
  {
    {
      free((void *)d->charclasses);
      free((void *)d->tokens);
    }
                     
     
       

       
     
    i = (size_t)0;
    {
      while (1)
      {
                                     ;
        if (!(i < (size_t)d->sindex))
        {
          goto while_break;
        }
        {



        }
      }

    }
  while_break:;
  {
    free((void *)d->states);
  }
                   
     

       













       
                     
     

     
     
                 
     

       














       
                     
     




     
     
    dm = d->musts;
    {
      while (1)
      {
                                         ;
        if (!dm)
        {
          goto while_break___2;
        }
        {




        }
      }

    }
  while_break___2:;
                    
     
       

       
     
    return;
  }
}
static char *icatalloc(char *old, char const *new)
{
  char *result;
  size_t oldsize;
  size_t newsize;
  size_t tmp;
  {
    {
      tmp = strlen(new);
      newsize = tmp;
    }
    if (newsize == 0UL)
    {
      return (old);
    }
    {
      oldsize = strlen((char const *)old);
      result = (char *)xrealloc((void *)old, (oldsize + newsize) + 1UL);
      memcpy((void * /* __restrict  */)((void *)(result + oldsize)), (void const * /* __restrict  */)((void const *)new), newsize + 1UL);
    }
    return (result);
  }
}
static char *__attribute__((__pure__)) istrstr(char const *lookin, char const *lookfor)
{
  char const *cp;
  size_t len;
  int tmp;
  {
    {
      len = strlen(lookfor);
      cp = lookin;
    }
    {
      while (1)
      {
                                     ;
        if (!((int const) * cp != 0))
        {
          goto while_break;
        }
        {
          tmp = strncmp(cp, lookfor, len);
        }
        if (tmp == 0)
        {
          return ((char * /* __attribute__((__pure__)) */)((char *)cp));
        }
        cp++;
      }

    }
  while_break:;
    return ((char * /* __attribute__((__pure__)) */)((char *)((void *)0)));
  }
}
static void freelist(char **cpp)
{
  char **tmp;
  {
    {
      while (1)
      {
                                     ;
        if (!*cpp)
        {
          goto while_break;
        }
        {
          tmp = cpp;
          cpp++;
          free((void *)*tmp);
        }
      }

    }
  while_break:;
    return;
  }
}
static char **enlist(char **cpp, char *new, size_t len)
{
  size_t i;
  size_t j;
  void *tmp;
  char *__attribute__((__pure__)) tmp___0;
  char *__attribute__((__pure__)) tmp___1;
  {
    {
      tmp = xmalloc(len + 1UL);
      new = (char *)memcpy((void * /* __restrict  */)tmp, (void const * /* __restrict  */)((void const *)new), len);
      *(new + len) = (char)'\000';
      i = (size_t)0;
    }
    {
      while (1)
      {
                                     ;
        if (!((unsigned long)*(cpp + i) != (unsigned long)((void *)0)))
        {
          goto while_break;
        }
        {
          tmp___0 = istrstr((char const *)*(cpp + i), (char const *)new);
        }
                                                                 
         
           

           

         
        i++;
      }

    }
  while_break:;
    j = (size_t)0;
    {
      while (1)
      {
                                         ;
        if (!((unsigned long)*(cpp + j) != (unsigned long)((void *)0)))
        {
          goto while_break___0;
        }
        {
          tmp___1 = istrstr((char const *)new, (char const *)*(cpp + j));
        }
        if ((unsigned long)tmp___1 == (unsigned long)((void *)0))
        {
          j++;
        }
        else
        {
          {
            free((void *)*(cpp + j));
            i--;
          }
          if (i == j)
          {
            goto while_break___0;
          }
          *(cpp + j) = *(cpp + i);
          *(cpp + i) = (char *)((void *)0);
        }
      }

    }
  while_break___0:;
  {
    cpp = (char **)xnrealloc((void *)cpp, i + 2UL, sizeof(*cpp));
    *(cpp + i) = new;
    *(cpp + (i + 1UL)) = (char *)((void *)0);
  }
    return (cpp);
  }
}
static char **comsubs(char *left, char const *right)
{

















































































}
static char **addlists(char **old, char **new)
{
  size_t tmp;
  {
    {
      while (1)
      {
                                     ;
        if (!*new)
        {
          goto while_break;
        }
        {
          tmp = strlen((char const *)*new);
          old = enlist(old, *new, tmp);
          new ++;
        }
      }

    }
  while_break:;
    return (old);
  }
}
static char **inboth(char **left, char **right)
{
















































}
static must *allocmust(must *mp)
{
  must *new_mp;
  must *tmp;
  {
    {
      tmp = (must *)xmalloc(sizeof(*new_mp));
      new_mp = tmp;
      new_mp->in = (char **)xzalloc(sizeof(*(new_mp->in)));
      new_mp->left = (char *)xzalloc((size_t)2);
      new_mp->right = (char *)xzalloc((size_t)2);
      new_mp->is = (char *)xzalloc((size_t)2);
      new_mp->begline = (_Bool)0;
      new_mp->endline = (_Bool)0;
      new_mp->prev = mp;
    }
    return (new_mp);
  }
}
static void resetmust(must *mp)
{
















}
static void freemust(must *mp)
{
  {
    {
      freelist(mp->in);
      free((void *)mp->in);
      free((void *)mp->left);
      free((void *)mp->right);
      free((void *)mp->is);
      free((void *)mp);
    }
    return;
  }
}
static void dfamust(struct dfa *d)
{
  must *mp;
  char const *result;
  size_t ri;
  size_t i;
  _Bool exact;
  _Bool begline___0;
  _Bool endline;
  struct dfamust *dm;
  token t;
             
            
            
           
            
            
           
          
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  must *rmp___0;
  must *lmp___0;
  size_t lrlen;
  size_t tmp___3;
  size_t rllen;
  size_t tmp___4;
  char *tp;
  char *tmp___5;
  charclass *ccl;
  int j___0;
  _Bool tmp___6;
  _Bool tmp___7;
              
              
  char tmp___10;
  char tmp___11;
               
  char tmp___13;
  char tmp___14;
  must *prev;
                    
  {
    mp = (must *)((void *)0);
    result = "";
    exact = (_Bool)0;
    begline___0 = (_Bool)0;
    endline = (_Bool)0;
    ri = (size_t)0;
    {
      while (1)
      {
                                     ;
                              
         

         
        t = *(d->tokens + ri);
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
        if (t == -1L)
        {
          goto case_neg_1;
        }
        if (t == 268L)
        {
          goto case_268;
        }
                    
         

         
        goto switch_default;
               ;
      {


      }

               ;
      {


      }

               ;
      {

      }
               ;
      {

      }

               ;
      {

      }

               ;
      {




      }







        {

















        }
                      ;
      {




      }





        {














        }
                      ;

        {











        }
                      ;
      {






      }

               ;


      case_neg_1:;
                         
         
           

           
         
        i = (size_t)0;
        {
          while (1)
          {
                                             ;
            if (!((unsigned long)*(mp->in + i) != (unsigned long)((void *)0)))
            {
              goto while_break___3;
            }
            {
              tmp___0 = strlen((char const *)*(mp->in + i));
              tmp___1 = strlen(result);
            }
            if (tmp___0 > tmp___1)
            {
              result = (char const *)*(mp->in + i);
            }
            i++;
          }

        }
      while_break___3:;
      {
        tmp___2 = strcmp(result, (char const *)mp->is);
      }
                         
         



         
        goto done;
      case_268:;
      {
        rmp___0 = mp;
        mp = mp->prev;
        lmp___0 = mp;
        lmp___0->in = addlists(lmp___0->in, rmp___0->in);
      }
        if ((int)*(lmp___0->right + 0) != 0)
        {
          if ((int)*(rmp___0->left + 0) != 0)
          {
            {
              tmp___3 = strlen((char const *)lmp___0->right);
              lrlen = tmp___3;
              tmp___4 = strlen((char const *)rmp___0->left);
              rllen = tmp___4;
              tmp___5 = (char *)xmalloc(lrlen + rllen);
              tp = tmp___5;
              memcpy((void * /* __restrict  */)((void *)tp), (void const * /* __restrict  */)((void const *)lmp___0->right), lrlen);
              memcpy((void * /* __restrict  */)((void *)(tp + lrlen)), (void const * /* __restrict  */)((void const *)rmp___0->left), rllen);
              lmp___0->in = enlist(lmp___0->in, tp, lrlen + rllen);
              free((void *)tp);
            }
          }
        }
        if ((int)*(lmp___0->is + 0) != 0)
        {
          {
            lmp___0->left = icatalloc(lmp___0->left, (char const *)rmp___0->left);
          }
        }
        if ((int)*(rmp___0->is + 0) == 0)
        {
          *(lmp___0->right + 0) = (char)'\000';
        }
        {
          lmp___0->right = icatalloc(lmp___0->right, (char const *)rmp___0->right);
        }
        if ((int)*(lmp___0->is + 0) != 0)
        {
          goto _L;
        }
        else
        {
          if (lmp___0->begline)
          {
          _L:;
            if ((int)*(rmp___0->is + 0) != 0)
            {
              {
                lmp___0->is = icatalloc(lmp___0->is, (char const *)rmp___0->is);
                lmp___0->endline = rmp___0->endline;
              }
            }
            else
            {
              if (rmp___0->endline)
              {
                {


                }
              }
              else
              {
                *(lmp___0->is + 0) = (char)'\000';
                lmp___0->begline = (_Bool)0;
                lmp___0->endline = (_Bool)0;
              }
            }
          }
          else
          {



          }
        }
        {
          freemust(rmp___0);
        }
        goto switch_break;
             ;

      switch_default:;
      {
        mp = allocmust(mp);
      }
        if (275L <= t)
        {
          ccl = d->charclasses + (t - 275L);
          j___0 = 0;
          {
            while (1)
            {
                                               ;
                                 
               

               
              {
                tmp___6 = tstbit((unsigned int)j___0, (charclass_word * /* const  */)(*ccl));
              }
              if (tmp___6)
              {
                goto while_break___4;
              }

            }

          }
        while_break___4:;
                             
           

           
          t = (token)j___0;
          {
            while (1)
            {
                                               ;
              j___0++;
                                 
               

               
              {
                tmp___7 = tstbit((unsigned int)j___0, (charclass_word * /* const  */)(*ccl));
              }
              if (tmp___7)
              {
                if (case_fold)
                {















                }
                else
                {
                  goto while_break___5;
                }
              }
            }

          }
        while_break___5:;
          if (j___0 < 256)
          {
            goto switch_break;
          }
        }
        if (case_fold)
        {











        }
        else
        {
          tmp___11 = (char)t;
        }
        {
          *(mp->right + 0) = tmp___11;
          tmp___10 = tmp___11;
          *(mp->left + 0) = tmp___10;
          *(mp->is + 0) = tmp___10;
          tmp___14 = (char)'\000';
          *(mp->right + 1) = tmp___14;
          tmp___13 = tmp___14;
          *(mp->left + 1) = tmp___13;
          *(mp->is + 1) = tmp___13;
          mp->in = enlist(mp->in, mp->is, (size_t)1);
        }
        goto switch_break;
      switch_break:;
        ri++;
      }

    }

  done:;
    if (*result)
    {
      {
        dm = (struct dfamust *)xmalloc(sizeof(*dm));
        dm->exact = exact;
        dm->begline = begline___0;
        dm->endline = endline;
        dm->must = xstrdup(result);
        dm->next = d->musts;
        d->musts = dm;
      }
    }
    {
      while (1)
      {
                                         ;
        if (!mp)
        {
          goto while_break___6;
        }
        {
          prev = mp->prev;
          freemust(mp);
          mp = prev;
        }
      }

    }
  while_break___6:;
    return;
  }
}
struct dfa *dfaalloc(void)
{
  struct dfa *tmp;
  {
    {
      tmp = (struct dfa *)xmalloc(sizeof(struct dfa));
    }
    return (tmp);
  }
}
struct dfamust *__attribute__((__pure__)) dfamusts(struct dfa const *d)
{
  {
    return ((struct dfamust * /* __attribute__((__pure__)) */)((struct dfamust *)d->musts));
  }
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









}
static void pr_sgr_end_if(char const *s)
{









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

































}
static int usable_st_size(struct stat const *st)
{



















}
static void (*compile)(char const *, size_t);
static size_t (*execute)(char const *, size_t, size_t *, char const *);
static void suppressible_error(char const *mesg, int errnum)
{
  {
    if (!suppress_errors)
    {
      {
        error(0, errnum, "%s", mesg);
      }
    }
    errseen = 1;
    return;
  }
}
static void clean_up_stdout(void)
{
  {
    if (!write_error_seen)
    {
      {
        close_stdout();
      }
    }
    return;
  }
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
    if (fillsize < 0L)
    {
      cc = 0;
      fillsize = (ssize_t)cc;
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









































































































































































}
static size_t do_execute(char const *buf, size_t size, size_t *match_size, char const *start_ptr)
{


























































































}
static intmax_t grepbuf(char const *beg, char const *lim)
{





































































































}
static intmax_t grep(int fd, struct stat const *st)
{
  intmax_t nlines;
             
               
  size_t residue;
  size_t save;
            
            
            
  char eol;
  int tmp;
  int *tmp___0;
  int tmp___1;
              
              
                   
               
              
                
                   
                
                    
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
    if (!tmp___1)
    {
      {
        tmp___0 = __errno_location();
        suppressible_error(filename, *tmp___0);
      }
      return ((intmax_t)0);
    }












































    {








































































































































    }




















              ;













  }
}
static int grepdirent(FTS *fts, FTSENT *ent, int command_line)
{



































































































































































































































}
static int grepfile(int dirdesc, char const *name, int follow, int command_line)
{
  int desc;
  int tmp;
  int tmp___0;
  int *tmp___1;
               
               
  int tmp___4;
  {
    if (follow)
    {
      tmp = 0;
    }
    else
    {

    }
    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
    if (desc < 0)
    {
      if (follow)
      {
        {
          tmp___1 = __errno_location();
          suppressible_error(filename, *tmp___1);
        }
      }
      else
      {
        {

        }













      }
      return (1);
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
  {
    {
      GEAcompile(pattern, size, (((((1UL << 1) | ((1UL << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
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
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                       
         

         
                      
         

         
                      
         

         
                      
         

         
                      
         

         
                       
         

         
                       
         

         
                       
         

         
                       
         

         
                       
         

         
                       
         

         
                      
         

         
                       
         

         
                       
         

         
                       
         

         
        if (opt == 111)
        {
          goto case_111;
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

      }

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


      case_109:;
      {

      }









      case_0:;

      switch_default:;
      {


      }


      case_110:;


      case_111:;
        only_matching = 1;
        goto switch_break;
      case_113:;



      case_82:;

      case_114:;



      case_115:;


      case_118:;


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
          if (!(optind < argc))
          {
            goto while_break___2;
          }
        }

      }
    while_break___2:;
    }
    else
    {






















    }
    if (errseen)
    {
      tmp___43 = 2;
    }
    else
    {

    }
    {
      exit(tmp___43);
    }
  }
}
