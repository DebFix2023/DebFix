#include "argv-fuzz-inl.h";
typedef unsigned long size_t;
typedef long ptrdiff_t;
typedef unsigned long __ino_t;
typedef long __off_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __off64_t;
typedef long __ssize_t;
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
struct _IO_FILE {
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
typedef __ssize_t ssize_t;
enum quoting_style {
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
struct allocator;
struct allocator;
struct allocator;
struct allocator {
  void *(*allocate)(size_t);
  void *(*reallocate)(void *, size_t);
  void (*free)(void *);
  void (*die)(size_t);
};
struct option {
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
typedef long intmax_t;
typedef long __time_t;
typedef long __syscall_slong_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef unsigned int __gid_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
struct stat {
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
typedef int wchar_t;
typedef int nl_item;
typedef unsigned int wint_t;
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
typedef __time_t time_t;
union __anonunion___value_23 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22 {
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef __mbstate_t mbstate_t;
struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  char const *tm_zone;
};
typedef int __clockid_t;
typedef __clockid_t clockid_t;
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
typedef unsigned long reg_syntax_t;
typedef __off_t off_t;
typedef struct timezone *__restrict __timezone_ptr_t;
struct quoting_options;
struct quoting_options;
struct quoting_options;
struct quoting_options {
  enum quoting_style style;
  int flags;
  unsigned int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
  char const *left_quote;
  char const *right_quote;
};
struct slotvec {
  size_t size;
  char *val;
};
typedef long long_time_t;
struct __anonstruct_textint_27 {
  _Bool negative;
  long value;
  size_t digits;
};
typedef struct __anonstruct_textint_27 textint;
struct __anonstruct_table_28 {
  char const *name;
  int type;
  int value;
};
typedef struct __anonstruct_table_28 table;
struct __anonstruct_relative_time_31 {
  long year;
  long month;
  long day;
  long hour;
  long minutes;
  long_time_t seconds;
  long ns;
};
typedef struct __anonstruct_relative_time_31 relative_time;
struct __anonstruct_parser_control_32 {
  char const *input;
  long day_ordinal;
  int day_number;
  int local_isdst;
  long time_zone;
  int meridian;
  textint year;
  long month;
  long day;
  long hour;
  long minutes;
  struct timespec seconds;
  relative_time rel;
  _Bool timespec_seen;
  _Bool rels_seen;
  size_t dates_seen;
  size_t days_seen;
  size_t local_zones_seen;
  size_t dsts_seen;
  size_t times_seen;
  size_t zones_seen;
  table local_time_zone_table[3];
};
typedef struct __anonstruct_parser_control_32 parser_control;
union YYSTYPE;
union YYSTYPE;
union YYSTYPE;
union YYSTYPE {
  long intval;
  textint textintval;
  struct timespec timespec;
  relative_time rel;
};
typedef union YYSTYPE YYSTYPE;
typedef unsigned char yytype_uint8;
typedef signed char yytype_int8;
typedef short yytype_int16;
union yyalloc {
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};
enum Time_spec {
  TIME_SPEC_DATE = 0,
  TIME_SPEC_SECONDS = 1,
  TIME_SPEC_NS = 2,
  TIME_SPEC_HOURS = 3,
  TIME_SPEC_MINUTES = 4
};
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_strcasecmp(char const *s1, char const *s2) {
  printf("\nFUNC_CALL;c_strcasecmp(const char *,const char *);\n");
printf("\nSTMT_EXEC;;240\n");
register unsigned char const *p1;
  printf("\nSTMT_EXEC;;241\n");
register unsigned char const *p2;
  printf("\nSTMT_EXEC;;242\n");
unsigned char c1;
  printf("\nSTMT_EXEC;;243\n");
unsigned char c2;
  {
    printf("\nSTMT_EXEC;;245\n");
p1 = (unsigned char const *)s1;
    printf("\nSTMT_EXEC;;246\n");
p2 = (unsigned char const *)s2;
    printf("\nSTMT_EXEC;;247\n");
if ((unsigned long)p1 == (unsigned long)p2) {
      printf("\nSTMT_EXEC;;248\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;250\n");
while (1) {
      printf("\nSTMT_EXEC;;251\n");
c1 = (unsigned char)c_tolower((int)*p1);
      printf("\nSTMT_EXEC;;252\n");
c2 = (unsigned char)c_tolower((int)*p2);
      printf("\nSTMT_EXEC;;253\n");
if ((int)c1 == 0) {
        printf("\nSTMT_EXEC;;254\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;256\n");
p1++;
      printf("\nSTMT_EXEC;;257\n");
p2++;
      printf("\nSTMT_EXEC;;258\n");
if (!((int)c1 == (int)c2)) {
        printf("\nSTMT_EXEC;;259\n");
goto while_break;
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;263\n");
printf("\nFUNC_RETURN;;\n");
return ((int)c1 - (int)c2);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool c_isalpha(int c) __attribute__((__const__));
_Bool c_isspace(int c) __attribute__((__const__));
int c_toupper(int c) __attribute__((__const__));
_Bool c_isalpha(int c) __attribute__((__const__));
_Bool c_isalpha(int c) {
  printf("\nFUNC_CALL;c_isalpha(int);\n");
printf("\nSTMT_EXEC;;271\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;273\n");
if ((c & -33) >= 65) {
      printf("\nSTMT_EXEC;;274\n");
if ((c & -33) <= 90) {
        printf("\nSTMT_EXEC;;275\n");
tmp = 1;
      } else {
        printf("\nSTMT_EXEC;;277\n");
tmp = 0;
      }
    } else {
      printf("\nSTMT_EXEC;;280\n");
tmp = 0;
    }
    printf("\nSTMT_EXEC;;282\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) {
  printf("\nFUNC_CALL;c_isspace(int);\n");
printf("\nSTMT_EXEC;;287\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;289\n");
if (c == 32) {
      printf("\nSTMT_EXEC;;290\n");
tmp = 1;
    } else {
      printf("\nSTMT_EXEC;;292\n");
if (c == 9) {
        printf("\nSTMT_EXEC;;293\n");
tmp = 1;
      } else {
        printf("\nSTMT_EXEC;;295\n");
if (c == 10) {
          printf("\nSTMT_EXEC;;296\n");
tmp = 1;
        } else {
          printf("\nSTMT_EXEC;;298\n");
if (c == 11) {
            printf("\nSTMT_EXEC;;299\n");
tmp = 1;
          } else {
            printf("\nSTMT_EXEC;;301\n");
if (c == 12) {
              printf("\nSTMT_EXEC;;302\n");
tmp = 1;
            } else {
              printf("\nSTMT_EXEC;;304\n");
if (c == 13) {
                printf("\nSTMT_EXEC;;305\n");
tmp = 1;
              } else {
                printf("\nSTMT_EXEC;;307\n");
tmp = 0;
              }
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;314\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
int c_tolower(int c) __attribute__((__const__));
int c_tolower(int c) {
  printf("\nFUNC_CALL;c_tolower(int);\n");
printf("\nSTMT_EXEC;;319\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;321\n");
if (c >= 65) {
      printf("\nSTMT_EXEC;;322\n");
if (c <= 90) {
        printf("\nSTMT_EXEC;;323\n");
tmp = (c - 65) + 97;
      } else {
        printf("\nSTMT_EXEC;;325\n");
tmp = c;
      }
    } else {
      printf("\nSTMT_EXEC;;328\n");
tmp = c;
    }
    printf("\nSTMT_EXEC;;330\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
int c_toupper(int c) __attribute__((__const__));
int c_toupper(int c) {
  printf("\nFUNC_CALL;c_toupper(int);\n");
printf("\nSTMT_EXEC;;335\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;337\n");
if (c >= 97) {
      printf("\nSTMT_EXEC;;338\n");
if (c <= 122) {
        printf("\nSTMT_EXEC;;339\n");
tmp = (c - 97) + 65;
      } else {
        printf("\nSTMT_EXEC;;341\n");
tmp = c;
      }
    } else {
      printf("\nSTMT_EXEC;;344\n");
tmp = c;
    }
    printf("\nSTMT_EXEC;;346\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char *last_component(char const *name) __attribute__((__pure__));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__attribute__((__noreturn__)) void xalloc_die(void);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
__inline void *xnmalloc(size_t n, size_t s)
    __attribute__((__malloc__, __alloc_size__(1, 2)));
__inline void *xnmalloc(size_t n, size_t s)
    __attribute__((__malloc__, __alloc_size__(1, 2)));
__inline void *xnmalloc(size_t n, size_t s) {
  printf("\nFUNC_CALL;xnmalloc(size_t,size_t);\n");
printf("\nSTMT_EXEC;;369\n");
int tmp;
  printf("\nSTMT_EXEC;;370\n");
void *tmp___0;
  {
    printf("\nSTMT_EXEC;;372\n");
if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      printf("\nSTMT_EXEC;;373\n");
tmp = -1;
    } else {
      printf("\nSTMT_EXEC;;375\n");
tmp = -2;
    }
    printf("\nSTMT_EXEC;;377\n");
if ((size_t)tmp / s < n) {
      printf("\nSTMT_EXEC;;378\n");
xalloc_die();
    }
    printf("\nSTMT_EXEC;;380\n");
tmp___0 = xmalloc(n * s);
    printf("\nSTMT_EXEC;;381\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
char *xcharalloc(size_t n) {
  printf("\nFUNC_CALL;xcharalloc(size_t);\n");
printf("\nSTMT_EXEC;;385\n");
void *tmp;
  printf("\nSTMT_EXEC;;386\n");
void *tmp___0;
  printf("\nSTMT_EXEC;;387\n");
void *tmp___1;
  {
    printf("\nSTMT_EXEC;;389\n");
if (sizeof(char) == 1UL) {
      printf("\nSTMT_EXEC;;390\n");
tmp = xmalloc(n);
      printf("\nSTMT_EXEC;;391\n");
tmp___1 = tmp;
    } else {
      printf("\nSTMT_EXEC;;393\n");
tmp___0 = xnmalloc(n, sizeof(char));
      printf("\nSTMT_EXEC;;394\n");
tmp___1 = tmp___0;
    }
    printf("\nSTMT_EXEC;;396\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__))
size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s)
    __attribute__((__pure__));
char *last_component(char const *name) __attribute__((__pure__));
char *last_component(char const *name) {
  printf("\nFUNC_CALL;last_component(const char *);\n");
printf("\nSTMT_EXEC;;404\n");
char const *base;
  printf("\nSTMT_EXEC;;405\n");
char const *p;
  printf("\nSTMT_EXEC;;406\n");
_Bool saw_slash;
  {
    printf("\nSTMT_EXEC;;408\n");
base = name + 0;
    printf("\nSTMT_EXEC;;409\n");
saw_slash = (_Bool)0;
    printf("\nSTMT_EXEC;;410\n");
while (1) {
      printf("\nSTMT_EXEC;;411\n");
if (!((int const) * base == 47)) {
        printf("\nSTMT_EXEC;;412\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;414\n");
base++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;417\n");
p = base;
}

    printf("\nSTMT_EXEC;;418\n");
while (1) {
      printf("\nSTMT_EXEC;;419\n");
if (!*p) {
        printf("\nSTMT_EXEC;;420\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;422\n");
if ((int const) * p == 47) {
        printf("\nSTMT_EXEC;;423\n");
saw_slash = (_Bool)1;
      } else {
        printf("\nSTMT_EXEC;;425\n");
if (saw_slash) {
          printf("\nSTMT_EXEC;;426\n");
base = p;
          printf("\nSTMT_EXEC;;427\n");
saw_slash = (_Bool)0;
        }
      }
      printf("\nSTMT_EXEC;;430\n");
p++;
    }
  while_break___0:;
    printf("\nSTMT_EXEC;;433\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)base);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           malloc)(size_t __size)
    __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__))
                                         free)(void *__ptr);
char const *simple_backup_suffix;
void (*argmatch_die)(void);
ptrdiff_t __xargmatch_internal(char const *context, char const *arg,
                               char const *const *arglist, char const *vallist,
                               size_t valsize, void (*exit_fn)(void));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern __attribute__((__nothrow__)) int *(
    __attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           getenv)(char const *__name);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcmp)(void const *__s1, void const *__s2, size_t __n)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcpy)(char *__restrict __dest, char const *__restrict __src);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char const *simple_backup_suffix = "~";
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize)
    __attribute__((__pure__));
void argmatch_invalid(char const *context, char const *value,
                      ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize);
extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format,
                   ...);
extern int putc_unlocked(int __c, FILE *__stream);
extern int fputs_unlocked(char const *__restrict __s,
                          FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncmp)(char const *__s1, char const *__s2, size_t __n)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           gettext)(char const *__msgid)
    __attribute__((__format_arg__(1)));
extern void error(int __status, int __errnum, char const *__format, ...);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char const *quote_n(int n, char const *arg);
char const *quote(char const *arg);
__attribute__((__noreturn__)) void usage(int status);
static void __argmatch_die(void) {
  printf("\nFUNC_CALL;__argmatch_die();\n");
{
    printf("\nSTMT_EXEC;;496\n");
usage(1);
    printf("\nSTMT_EXEC;;497\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void (*argmatch_die)(void) = &__argmatch_die;
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize)
    __attribute__((__pure__));
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize) {
  printf("\nFUNC_CALL;argmatch(const char *,const char *const *,const char *,size_t);\n");
printf("\nSTMT_EXEC;;506\n");
size_t i;
  printf("\nSTMT_EXEC;;507\n");
size_t arglen;
  printf("\nSTMT_EXEC;;508\n");
ptrdiff_t matchind;
  printf("\nSTMT_EXEC;;509\n");
_Bool ambiguous;
  printf("\nSTMT_EXEC;;510\n");
int tmp;
  printf("\nSTMT_EXEC;;511\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;512\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;514\n");
matchind = (ptrdiff_t)-1;
    printf("\nSTMT_EXEC;;515\n");
ambiguous = (_Bool)0;
    printf("\nSTMT_EXEC;;516\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
arglen = strlen(arg);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;517\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;518\n");
while (1) {
      printf("\nSTMT_EXEC;;519\n");
if (!*(arglist + i)) {
        printf("\nSTMT_EXEC;;520\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;522\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___1 = strncmp((char const *)*(arglist + i), arg, arglen);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;523\n");
if (!tmp___1) {
        printf("\nSTMT_EXEC;;524\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen((char const *)*(arglist + i));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;525\n");
if (tmp___0 == arglen) {
          printf("\nSTMT_EXEC;;526\n");
printf("\nFUNC_RETURN;;\n");
return ((ptrdiff_t)i);
        } else {
          printf("\nSTMT_EXEC;;528\n");
if (matchind == -1L) {
            printf("\nSTMT_EXEC;;529\n");
matchind = (ptrdiff_t)i;
          } else {
            printf("\nSTMT_EXEC;;531\n");
if ((unsigned long)vallist == (unsigned long)((void *)0)) {
              printf("\nSTMT_EXEC;;532\n");
ambiguous = (_Bool)1;
            } else {
              printf("\nSTMT_EXEC;;534\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp = memcmp((void const *)(vallist + valsize * (size_t)matchind),
                           (void const *)(vallist + valsize * i), valsize);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;536\n");
if (tmp) {
                printf("\nSTMT_EXEC;;537\n");
ambiguous = (_Bool)1;
              }
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;543\n");
i++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;546\n");
if (ambiguous) {
      printf("\nSTMT_EXEC;;547\n");
printf("\nFUNC_RETURN;;\n");
return ((ptrdiff_t)-2);
    } else {
      printf("\nSTMT_EXEC;;549\n");
printf("\nFUNC_RETURN;;\n");
return (matchind);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
void argmatch_invalid(char const *context, char const *value,
                      ptrdiff_t problem) {
  printf("\nFUNC_CALL;argmatch_invalid(const char *,const char *,ptrdiff_t);\n");
printf("\nSTMT_EXEC;;555\n");
char const *format;
  printf("\nSTMT_EXEC;;556\n");
char *tmp;
  printf("\nSTMT_EXEC;;557\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;558\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;559\n");
char const *tmp___2;
  printf("\nSTMT_EXEC;;560\n");
char *tmp___3;
  {
    printf("\nSTMT_EXEC;;562\n");
if (problem == -1L) {
      printf("\nSTMT_EXEC;;563\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("invalid argument %s for %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;564\n");
tmp___1 = tmp;
    } else {
      printf("\nSTMT_EXEC;;566\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("ambiguous argument %s for %s");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;567\n");
tmp___1 = tmp___0;
    }
    printf("\nSTMT_EXEC;;569\n");
format = (char const *)tmp___1;
    printf("\nSTMT_EXEC;;570\n");
tmp___2 = quote_n(1, context);
    printf("\nSTMT_EXEC;;571\n");
tmp___3 = quotearg_n_style(0, (enum quoting_style)6, value);
    printf("\nSTMT_EXEC;;572\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, format, tmp___3, tmp___2);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;573\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize) {
  printf("\nFUNC_CALL;argmatch_valid(const char *const *,const char *,size_t);\n");
printf("\nSTMT_EXEC;;578\n");
size_t i;
  printf("\nSTMT_EXEC;;579\n");
char const *last_val;
  printf("\nSTMT_EXEC;;580\n");
char *tmp;
  printf("\nSTMT_EXEC;;581\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;582\n");
char const *tmp___1;
  printf("\nSTMT_EXEC;;583\n");
int tmp___2;
  {
    printf("\nSTMT_EXEC;;585\n");
last_val = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;586\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("Valid arguments are:");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;587\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp, stderr);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;588\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;589\n");
while (1) {
      printf("\nSTMT_EXEC;;590\n");
if (!*(arglist + i)) {
        printf("\nSTMT_EXEC;;591\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;593\n");
if (i == 0UL) {
        printf("\nSTMT_EXEC;;594\n");
tmp___0 = quote((char const *)*(arglist + i));
        printf("\nSTMT_EXEC;;595\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, "\n  - %s", tmp___0);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;596\n");
last_val = vallist + valsize * i;
      } else {
        printf("\nSTMT_EXEC;;598\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___2 = memcmp((void const *)last_val,
                         (void const *)(vallist + valsize * i), valsize);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;600\n");
if (tmp___2) {
          printf("\nSTMT_EXEC;;601\n");
tmp___0 = quote((char const *)*(arglist + i));
          printf("\nSTMT_EXEC;;602\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, "\n  - %s", tmp___0);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;603\n");
last_val = vallist + valsize * i;
        } else {
          printf("\nSTMT_EXEC;;605\n");
tmp___1 = quote((char const *)*(arglist + i));
          printf("\nSTMT_EXEC;;606\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, ", %s", tmp___1);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;609\n");
i++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;612\n");
printf("\nFUNC_CALL;putc_unlocked(int,FILE *);\n");
putc_unlocked('\n', stderr);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;613\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg,
                               char const *const *arglist, char const *vallist,
                               size_t valsize, void (*exit_fn)(void)) {
  printf("\nFUNC_CALL;__xargmatch_internal(const char *,const char *,const char *const *,const char *,size_t,void (*)(void));\n");
printf("\nSTMT_EXEC;;619\n");
ptrdiff_t res;
  printf("\nSTMT_EXEC;;620\n");
ptrdiff_t tmp;
  {
    printf("\nSTMT_EXEC;;622\n");
tmp = argmatch(arg, arglist, vallist, valsize);
    printf("\nSTMT_EXEC;;623\n");
res = tmp;
    printf("\nSTMT_EXEC;;624\n");
if (res >= 0L) {
      printf("\nSTMT_EXEC;;625\n");
printf("\nFUNC_RETURN;;\n");
return (res);
    }
    printf("\nSTMT_EXEC;;627\n");
argmatch_invalid(context, arg, res);
    printf("\nSTMT_EXEC;;628\n");
argmatch_valid(arglist, vallist, valsize);
    printf("\nSTMT_EXEC;;629\n");
(*exit_fn)();
    printf("\nSTMT_EXEC;;630\n");
printf("\nFUNC_RETURN;;\n");
return ((ptrdiff_t)-1);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
struct allocator const stdlib_allocator;
extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);
struct allocator const stdlib_allocator = {
    (void *(*)(size_t))(&malloc), (void *(*)(void *, size_t))(&realloc),
    (void (*)(void *))(&free), (void (*)(size_t))((void *)0)};
extern struct _IO_FILE *stdin;
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n,
                         FILE *__restrict __stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern __attribute__((__nothrow__)) unsigned short const **(
    __attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strchr)(char const *__s, int __c)
    __attribute__((__pure__));
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       abort)(void);
int volatile exit_failure;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern struct _IO_FILE *stdout;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
void *xmemdup(void const *p, size_t s)
    __attribute__((__malloc__, __alloc_size__(2)));
extern
    __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1),
                                                       __leaf__))
                                        memset)(void *__s, int __c, size_t __n);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xmalloc(size_t n) {
  printf("\nFUNC_CALL;xmalloc(size_t);\n");
printf("\nSTMT_EXEC;;704\n");
void *p;
  printf("\nSTMT_EXEC;;705\n");
void *tmp;
  {
    printf("\nSTMT_EXEC;;707\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
tmp = malloc(n);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;708\n");
p = tmp;
    printf("\nSTMT_EXEC;;709\n");
if (!p) {
      printf("\nSTMT_EXEC;;710\n");
if (n != 0UL) {
        printf("\nSTMT_EXEC;;711\n");
xalloc_die();
      }
    }
    printf("\nSTMT_EXEC;;714\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xrealloc(void *p, size_t n) {
  printf("\nFUNC_CALL;xrealloc(void *,size_t);\n");
{
    printf("\nSTMT_EXEC;;720\n");
if (!n) {
      printf("\nSTMT_EXEC;;721\n");
if (p) {
        printf("\nSTMT_EXEC;;722\n");
printf("\nFUNC_CALL;free(void *);\n");
free(p);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;723\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
      }
    }
    printf("\nSTMT_EXEC;;726\n");
printf("\nFUNC_CALL;realloc(void *,size_t);\n");
p = realloc(p, n);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;727\n");
if (!p) {
      printf("\nSTMT_EXEC;;728\n");
if (n) {
        printf("\nSTMT_EXEC;;729\n");
xalloc_die();
      }
    }
    printf("\nSTMT_EXEC;;732\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xmemdup(void const *p, size_t s)
    __attribute__((__malloc__, __alloc_size__(2)));
void *xmemdup(void const *p, size_t s) {
  printf("\nFUNC_CALL;xmemdup(const void *,size_t);\n");
printf("\nSTMT_EXEC;;738\n");
void *tmp;
  printf("\nSTMT_EXEC;;739\n");
void *tmp___0;
  {
    printf("\nSTMT_EXEC;;741\n");
tmp = xmalloc(s);
    printf("\nSTMT_EXEC;;742\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
tmp___0 = memcpy(tmp, p, s);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;743\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {
  printf("\nFUNC_CALL;xalloc_die();\n");
printf("\nSTMT_EXEC;;771\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;773\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("memory exhausted");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;774\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error((int)exit_failure, 0, "%s", tmp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;775\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     atexit)(void (*__func)(void));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern size_t fwrite(void const *__restrict __ptr, size_t __size, size_t __n,
                     FILE *__restrict __s);
extern int printf(char const *__restrict __format, ...);
char const version_etc_copyright[47];
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors) {
  printf("\nFUNC_CALL;version_etc_arn(FILE *,const char *,const char *,const char *,const char *const *,size_t);\n");
printf("\nSTMT_EXEC;;817\n");
char *tmp;
  printf("\nSTMT_EXEC;;818\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;819\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;820\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;821\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;822\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;823\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;824\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;825\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;826\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;827\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;828\n");
char *tmp___10;
  {
    printf("\nSTMT_EXEC;;830\n");
if (command_name) {
      printf("\nSTMT_EXEC;;831\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, "%s (%s) %s\n", command_name, package, version);printf("\nFUNC_RETURN;;\n");

    } else {
      printf("\nSTMT_EXEC;;833\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, "%s %s\n", package, version);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;835\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("(C)");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;836\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, version_etc_copyright, tmp, 2013);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;837\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 =
        gettext("\nLicense GPLv3+: GNU GPL version 3 or later "
                "<http://gnu.org/licenses/gpl.html>.\nThis is free software: "
                "you are free to change and redistribute it.\nThere is NO "
                "WARRANTY, to the extent permitted by law.\n\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;842\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___0, stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;843\n");
if (n_authors == 0UL) {
      printf("\nSTMT_EXEC;;844\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;846\n");
if (n_authors == 1UL) {
      printf("\nSTMT_EXEC;;847\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;849\n");
if (n_authors == 2UL) {
      printf("\nSTMT_EXEC;;850\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;852\n");
if (n_authors == 3UL) {
      printf("\nSTMT_EXEC;;853\n");
goto case_3;
    }
    printf("\nSTMT_EXEC;;855\n");
if (n_authors == 4UL) {
      printf("\nSTMT_EXEC;;856\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;858\n");
if (n_authors == 5UL) {
      printf("\nSTMT_EXEC;;859\n");
goto case_5;
    }
    printf("\nSTMT_EXEC;;861\n");
if (n_authors == 6UL) {
      printf("\nSTMT_EXEC;;862\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;864\n");
if (n_authors == 7UL) {
      printf("\nSTMT_EXEC;;865\n");
goto case_7;
    }
    printf("\nSTMT_EXEC;;867\n");
if (n_authors == 8UL) {
      printf("\nSTMT_EXEC;;868\n");
goto case_8;
    }
    printf("\nSTMT_EXEC;;870\n");
if (n_authors == 9UL) {
      printf("\nSTMT_EXEC;;871\n");
goto case_9;
    }
    printf("\nSTMT_EXEC;;873\n");
goto switch_default;
  case_0:
    {
printf("\nSTMT_EXEC;;875\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

}

  case_1:
    {
printf("\nSTMT_EXEC;;877\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("Written by %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;878\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___1, *(authors + 0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;879\n");
goto switch_break;
  case_2:
    {
printf("\nSTMT_EXEC;;881\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext("Written by %s and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;882\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___2, *(authors + 0), *(authors + 1));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;883\n");
goto switch_break;
  case_3:
    {
printf("\nSTMT_EXEC;;885\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext("Written by %s, %s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;886\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___3, *(authors + 0), *(authors + 1),
            *(authors + 2));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;888\n");
goto switch_break;
  case_4:
    {
printf("\nSTMT_EXEC;;890\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;891\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___4, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;893\n");
goto switch_break;
  case_5:
    {
printf("\nSTMT_EXEC;;895\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;896\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___5, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;898\n");
goto switch_break;
  case_6:
    {
printf("\nSTMT_EXEC;;900\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;901\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___6, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;903\n");
goto switch_break;
  case_7:
    {
printf("\nSTMT_EXEC;;905\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;906\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___7, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;909\n");
goto switch_break;
  case_8:
    {
printf("\nSTMT_EXEC;;911\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;912\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___8, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6), *(authors + 7));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;915\n");
goto switch_break;
  case_9:
    {
printf("\nSTMT_EXEC;;917\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;918\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___9, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6), *(authors + 7), *(authors + 8));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;921\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;923\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext(
        "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;925\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stream, (char const *)tmp___10, *(authors + 0), *(authors + 1),
            *(authors + 2), *(authors + 3), *(authors + 4), *(authors + 5),
            *(authors + 6), *(authors + 7), *(authors + 8));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;928\n");
goto switch_break;
  switch_break:;
    printf("\nSTMT_EXEC;;930\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors) {
  printf("\nFUNC_CALL;version_etc_va(FILE *,const char *,const char *,const char *,struct __va_list_tag *);\n");
printf("\nSTMT_EXEC;;935\n");
size_t n_authors;
  printf("\nSTMT_EXEC;;936\n");
char const *authtab[10];
  printf("\nSTMT_EXEC;;937\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;939\n");
n_authors = (size_t)0;
    printf("\nSTMT_EXEC;;940\n");
while (1) {
      printf("\nSTMT_EXEC;;941\n");
if (n_authors < 10UL) {
        printf("\nSTMT_EXEC;;942\n");
tmp = __builtin_va_arg(authors, char const *);
        printf("\nSTMT_EXEC;;943\n");
authtab[n_authors] = tmp;
        printf("\nSTMT_EXEC;;944\n");
if (!((unsigned long)tmp != (unsigned long)((void *)0))) {
          printf("\nSTMT_EXEC;;945\n");
goto while_break;
        }
      } else {
        printf("\nSTMT_EXEC;;948\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;950\n");
n_authors++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;953\n");
version_etc_arn(stream, command_name, package, version,
                    (char const *const *)(authtab), n_authors);
}

    printf("\nSTMT_EXEC;;955\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {
  printf("\nFUNC_CALL;version_etc(FILE *,const char *,const char *,const char *);\n");
printf("\nSTMT_EXEC;;962\n");
va_list authors;
  {
    printf("\nSTMT_EXEC;;964\n");
printf("\nFUNC_CALL;__builtin_va_start(struct __va_list_tag *);\n");
__builtin_va_start(authors, version);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;965\n");
version_etc_va(stream, command_name, package, version, authors);
    printf("\nSTMT_EXEC;;966\n");
printf("\nFUNC_CALL;__builtin_va_end(struct __va_list_tag *);\n");
__builtin_va_end(authors);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;967\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
char const version_etc_copyright[47] = {
    (char const)'C', (char const)'o', (char const)'p',   (char const)'y',
    (char const)'r', (char const)'i', (char const)'g',   (char const)'h',
    (char const)'t', (char const)' ', (char const)'%',   (char const)'s',
    (char const)' ', (char const)'%', (char const)'d',   (char const)' ',
    (char const)'F', (char const)'r', (char const)'e',   (char const)'e',
    (char const)' ', (char const)'S', (char const)'o',   (char const)'f',
    (char const)'t', (char const)'w', (char const)'a',   (char const)'r',
    (char const)'e', (char const)' ', (char const)'F',   (char const)'o',
    (char const)'u', (char const)'n', (char const)'d',   (char const)'a',
    (char const)'t', (char const)'i', (char const)'o',   (char const)'n',
    (char const)',', (char const)' ', (char const)'I',   (char const)'n',
    (char const)'c', (char const)'.', (char const)'\000'};
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           nl_langinfo)(nl_item __item);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
struct timespec get_stat_mtime(struct stat const *st) {
  printf("\nFUNC_CALL;get_stat_mtime(const struct stat *);\n");
{
    printf("\nSTMT_EXEC;;998\n");
printf("\nFUNC_RETURN;;\n");
return ((struct timespec)st->st_mtim);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stat)(char const *__restrict __file, struct stat *__restrict __buf);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
void gettime(struct timespec *ts);
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char const *locale_charset(void);
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        mbsinit)(mbstate_t const *__ps)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__))
       mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s,
                size_t __n, mbstate_t *__restrict __p);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
unsigned int const is_basic_table[8];
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int(__attribute__((__nonnull__(1))) open)(char const *__file,
                                                 int __oflag, ...);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) mktime)(struct tm *__tp);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) strftime)(char *__restrict __s,
                                           size_t __maxsize,
                                           char const *__restrict __format,
                                           struct tm const *__restrict __tp);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        tolower)(int __c);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        toupper)(int __c);
__inline static int iso_week_days(int yday, int wday) {
  printf("\nFUNC_CALL;iso_week_days(int,int);\n");
printf("\nSTMT_EXEC;;1125\n");
int big_enough_multiple_of_7;
  {
    printf("\nSTMT_EXEC;;1127\n");
big_enough_multiple_of_7 = 378;
    printf("\nSTMT_EXEC;;1128\n");
printf("\nFUNC_RETURN;;\n");
return (
        ((yday - (((yday - wday) + 4) + big_enough_multiple_of_7) % 7) + 4) -
        1);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int close(int __fd);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int
sprintf(char *__restrict __s, char const *__restrict __format, ...);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        ferror_unlocked)(FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__leaf__)) clock_settime)(
        clockid_t __clock_id, struct timespec const *__tp);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
int settime(struct timespec const *ts);
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                     settimeofday)(struct timeval const *__tv,
                                                   struct timezone const *__tz);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int settime(struct timespec const *ts) {
  printf("\nFUNC_CALL;settime(const struct timespec *);\n");
printf("\nSTMT_EXEC;;1179\n");
int r;
  printf("\nSTMT_EXEC;;1180\n");
int tmp;
  printf("\nSTMT_EXEC;;1181\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;1182\n");
struct timeval tv;
  printf("\nSTMT_EXEC;;1183\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;1185\n");
printf("\nFUNC_CALL;clock_settime(clockid_t,const struct timespec *);\n");
tmp = clock_settime(0, ts);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1186\n");
r = tmp;
    printf("\nSTMT_EXEC;;1187\n");
if (r == 0) {
      printf("\nSTMT_EXEC;;1188\n");
printf("\nFUNC_RETURN;;\n");
return (r);
    } else {
      printf("\nSTMT_EXEC;;1190\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1191\n");
if (*tmp___0 == 1) {
        printf("\nSTMT_EXEC;;1192\n");
printf("\nFUNC_RETURN;;\n");
return (r);
      }
    }
    printf("\nSTMT_EXEC;;1195\n");
tv.tv_sec = (__time_t)ts->tv_sec;
    printf("\nSTMT_EXEC;;1196\n");
tv.tv_usec = (__suseconds_t)(ts->tv_nsec / 1000L);
    printf("\nSTMT_EXEC;;1197\n");
printf("\nFUNC_CALL;settimeofday(const struct timeval *,const struct timezone *);\n");
tmp___1 =
        settimeofday((struct timeval const *)(&tv), (struct timezone const *)0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1199\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__noreturn__)) void _exit(int __status);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic ignored "-Wtype-limits"
reg_syntax_t rpl_re_syntax_options;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern int getc_unlocked(FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern FILE *fopen(char const *__restrict __filename,
                   char const *__restrict __modes);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fileno)(FILE *__stream);
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp);
char *quotearg_colon(char const *arg);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1), __leaf__))
    gettimeofday)(struct timeval *__restrict __tv, __timezone_ptr_t __tz);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
char const *const quoting_style_args[9];
enum quoting_style const quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
struct quoting_options quote_quoting_options;
char const *quote_n_mem(int n, char const *arg, size_t argsize);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        iswprint)(wint_t __wc);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char const *const quoting_style_args[9] = {
    "literal", "shell",   "shell-always", "c", "c-maybe", "escape",
    "locale",  "clocale", (char const *)0};
enum quoting_style const quoting_style_vals[8] = {
    (enum quoting_style const)0, (enum quoting_style const)1,
    (enum quoting_style const)2, (enum quoting_style const)3,
    (enum quoting_style const)4, (enum quoting_style const)5,
    (enum quoting_style const)6, (enum quoting_style const)7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i) {
  printf("\nFUNC_CALL;set_char_quoting(struct quoting_options *,char,int);\n");
printf("\nSTMT_EXEC;;1325\n");
unsigned char uc;
  printf("\nSTMT_EXEC;;1326\n");
unsigned int *p;
  printf("\nSTMT_EXEC;;1327\n");
struct quoting_options *tmp;
  printf("\nSTMT_EXEC;;1328\n");
int shift;
  printf("\nSTMT_EXEC;;1329\n");
int r;
  {
    printf("\nSTMT_EXEC;;1331\n");
uc = (unsigned char)c;
    printf("\nSTMT_EXEC;;1332\n");
if (o) {
      printf("\nSTMT_EXEC;;1333\n");
tmp = o;
    } else {
      printf("\nSTMT_EXEC;;1335\n");
tmp = &default_quoting_options;
    }
    printf("\nSTMT_EXEC;;1337\n");
p = tmp->quote_these_too + (unsigned long)uc / (sizeof(int) * 8UL);
    printf("\nSTMT_EXEC;;1338\n");
shift = (int)((unsigned long)uc % (sizeof(int) * 8UL));
    printf("\nSTMT_EXEC;;1339\n");
r = (int)((*p >> shift) & 1U);
    printf("\nSTMT_EXEC;;1340\n");
*p ^= (unsigned int)(((i & 1) ^ r) << shift);
    printf("\nSTMT_EXEC;;1341\n");
printf("\nFUNC_RETURN;;\n");
return (r);
  }
printf("\nFUNC_RETURN;;\n");
}
static struct quoting_options
quoting_options_from_style(enum quoting_style style) {
  printf("\nFUNC_CALL;quoting_options_from_style(enum quoting_style);\n");
printf("\nSTMT_EXEC;;1346\n");
struct quoting_options o;
  printf("\nSTMT_EXEC;;1347\n");
unsigned int tmp;
  {
    printf("\nSTMT_EXEC;;1349\n");
o.style = (enum quoting_style)0;
    printf("\nSTMT_EXEC;;1350\n");
o.flags = 0;
    printf("\nSTMT_EXEC;;1351\n");
o.quote_these_too[0] = 0U;
    printf("\nSTMT_EXEC;;1352\n");
tmp = 1U;
    printf("\nSTMT_EXEC;;1353\n");
while (1) {
      printf("\nSTMT_EXEC;;1354\n");
if (!(!(tmp >= 8U))) {
        printf("\nSTMT_EXEC;;1355\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;1357\n");
o.quote_these_too[tmp] = 0U;
      printf("\nSTMT_EXEC;;1358\n");
tmp++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;1361\n");
o.left_quote = (char const *)((void *)0);
}

    printf("\nSTMT_EXEC;;1362\n");
o.right_quote = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;1363\n");
if ((unsigned int)style == 8U) {
      printf("\nSTMT_EXEC;;1364\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;1366\n");
o.style = style;
    printf("\nSTMT_EXEC;;1367\n");
printf("\nFUNC_RETURN;;\n");
return (o);
  }
printf("\nFUNC_RETURN;;\n");
}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {
  printf("\nFUNC_CALL;gettext_quote(const char *,enum quoting_style);\n");
printf("\nSTMT_EXEC;;1371\n");
char const *translation;
  printf("\nSTMT_EXEC;;1372\n");
char const *tmp;
  printf("\nSTMT_EXEC;;1373\n");
char const *locale_code;
  printf("\nSTMT_EXEC;;1374\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;1375\n");
int tmp___1;
  printf("\nSTMT_EXEC;;1376\n");
char const *tmp___2;
  printf("\nSTMT_EXEC;;1377\n");
int tmp___3;
  printf("\nSTMT_EXEC;;1378\n");
char const *tmp___4;
  {
    printf("\nSTMT_EXEC;;1380\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = (char const *)gettext(msgid);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1381\n");
translation = tmp;
    printf("\nSTMT_EXEC;;1382\n");
if ((unsigned long)translation != (unsigned long)msgid) {
      printf("\nSTMT_EXEC;;1383\n");
printf("\nFUNC_RETURN;;\n");
return (translation);
    }
    printf("\nSTMT_EXEC;;1385\n");
locale_code = locale_charset();
    printf("\nSTMT_EXEC;;1386\n");
tmp___1 = c_strcasecmp(locale_code, "UTF-8");
    printf("\nSTMT_EXEC;;1387\n");
if (tmp___1 == 0) {
      printf("\nSTMT_EXEC;;1388\n");
if ((int const) * (msgid + 0) == 96) {
        printf("\nSTMT_EXEC;;1389\n");
tmp___0 = "\342\200\230";
      } else {
        printf("\nSTMT_EXEC;;1391\n");
tmp___0 = "\342\200\231";
      }
      printf("\nSTMT_EXEC;;1393\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
    }
    printf("\nSTMT_EXEC;;1395\n");
tmp___3 = c_strcasecmp(locale_code, "GB18030");
    printf("\nSTMT_EXEC;;1396\n");
if (tmp___3 == 0) {
      printf("\nSTMT_EXEC;;1397\n");
if ((int const) * (msgid + 0) == 96) {
        printf("\nSTMT_EXEC;;1398\n");
tmp___2 = "\241\ae";
      } else {
        printf("\nSTMT_EXEC;;1400\n");
tmp___2 = "\241\257";
      }
      printf("\nSTMT_EXEC;;1402\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___2);
    }
    printf("\nSTMT_EXEC;;1404\n");
if ((unsigned int)s == 7U) {
      printf("\nSTMT_EXEC;;1405\n");
tmp___4 = "\"";
    } else {
      printf("\nSTMT_EXEC;;1407\n");
tmp___4 = "\'";
    }
    printf("\nSTMT_EXEC;;1409\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___4);
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t
quotearg_buffer_restyled(char *buffer, size_t buffersize, char const *arg,
                         size_t argsize, enum quoting_style quoting_style,
                         int flags, unsigned int const *quote_these_too,
                         char const *left_quote, char const *right_quote) {
  printf("\nFUNC_CALL;quotearg_buffer_restyled(char *,size_t,const char *,size_t,enum quoting_style,int,const unsigned int *,const char *,const char *);\n");
printf("\nSTMT_EXEC;;1417\n");
size_t i;
  printf("\nSTMT_EXEC;;1418\n");
size_t len;
  printf("\nSTMT_EXEC;;1419\n");
char const *quote_string;
  printf("\nSTMT_EXEC;;1420\n");
size_t quote_string_len;
  printf("\nSTMT_EXEC;;1421\n");
_Bool backslash_escapes;
  printf("\nSTMT_EXEC;;1422\n");
_Bool unibyte_locale;
  printf("\nSTMT_EXEC;;1423\n");
size_t tmp;
  printf("\nSTMT_EXEC;;1424\n");
_Bool elide_outer_quotes;
  printf("\nSTMT_EXEC;;1425\n");
unsigned char c;
  printf("\nSTMT_EXEC;;1426\n");
unsigned char esc;
  printf("\nSTMT_EXEC;;1427\n");
_Bool is_right_quote;
  printf("\nSTMT_EXEC;;1428\n");
int tmp___0;
  printf("\nSTMT_EXEC;;1429\n");
int tmp___1;
  printf("\nSTMT_EXEC;;1430\n");
size_t m;
  printf("\nSTMT_EXEC;;1431\n");
_Bool printable;
  printf("\nSTMT_EXEC;;1432\n");
unsigned short const **tmp___2;
  printf("\nSTMT_EXEC;;1433\n");
mbstate_t mbstate;
  printf("\nSTMT_EXEC;;1434\n");
wchar_t w;
  printf("\nSTMT_EXEC;;1435\n");
size_t bytes;
  printf("\nSTMT_EXEC;;1436\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;1437\n");
size_t j;
  printf("\nSTMT_EXEC;;1438\n");
int tmp___4;
  printf("\nSTMT_EXEC;;1439\n");
int tmp___5;
  printf("\nSTMT_EXEC;;1440\n");
size_t ilim;
  printf("\nSTMT_EXEC;;1441\n");
int tmp___6;
  printf("\nSTMT_EXEC;;1442\n");
size_t tmp___7;
  {
    printf("\nSTMT_EXEC;;1444\n");
len = (size_t)0;
    printf("\nSTMT_EXEC;;1445\n");
quote_string = (char const *)0;
    printf("\nSTMT_EXEC;;1446\n");
quote_string_len = (size_t)0;
    printf("\nSTMT_EXEC;;1447\n");
backslash_escapes = (_Bool)0;
    printf("\nSTMT_EXEC;;1448\n");
printf("\nFUNC_CALL;__ctype_get_mb_cur_max();\n");
tmp = __ctype_get_mb_cur_max();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1449\n");
unibyte_locale = (_Bool)(tmp == 1UL);
    printf("\nSTMT_EXEC;;1450\n");
elide_outer_quotes = (_Bool)((flags & 2) != 0);
    printf("\nSTMT_EXEC;;1451\n");
if ((unsigned int)quoting_style == 4U) {
      printf("\nSTMT_EXEC;;1452\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;1454\n");
if ((unsigned int)quoting_style == 3U) {
      printf("\nSTMT_EXEC;;1455\n");
goto case_3;
    }
    printf("\nSTMT_EXEC;;1457\n");
if ((unsigned int)quoting_style == 5U) {
      printf("\nSTMT_EXEC;;1458\n");
goto case_5;
    }
    printf("\nSTMT_EXEC;;1460\n");
if ((unsigned int)quoting_style == 6U) {
      printf("\nSTMT_EXEC;;1461\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;1463\n");
if ((unsigned int)quoting_style == 7U) {
      printf("\nSTMT_EXEC;;1464\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;1466\n");
if ((unsigned int)quoting_style == 8U) {
      printf("\nSTMT_EXEC;;1467\n");
goto case_6;
    }
    printf("\nSTMT_EXEC;;1469\n");
if ((unsigned int)quoting_style == 1U) {
      printf("\nSTMT_EXEC;;1470\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;1472\n");
if ((unsigned int)quoting_style == 2U) {
      printf("\nSTMT_EXEC;;1473\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;1475\n");
if ((unsigned int)quoting_style == 0U) {
      printf("\nSTMT_EXEC;;1476\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;1478\n");
goto switch_default;
  case_4:
    {
printf("\nSTMT_EXEC;;1480\n");
quoting_style = (enum quoting_style)3;
}

    printf("\nSTMT_EXEC;;1481\n");
elide_outer_quotes = (_Bool)1;
  case_3:
    {
printf("\nSTMT_EXEC;;1483\n");
if (!elide_outer_quotes) {
      printf("\nSTMT_EXEC;;1484\n");
while (1) {
        printf("\nSTMT_EXEC;;1485\n");
if (len < buffersize) {
          printf("\nSTMT_EXEC;;1486\n");
*(buffer + len) = (char)'\"';
        }
        printf("\nSTMT_EXEC;;1488\n");
len++;
        printf("\nSTMT_EXEC;;1489\n");
goto while_break;
      }
    while_break:;
    }
}

    printf("\nSTMT_EXEC;;1493\n");
backslash_escapes = (_Bool)1;
    printf("\nSTMT_EXEC;;1494\n");
quote_string = "\"";
    printf("\nSTMT_EXEC;;1495\n");
quote_string_len = (size_t)1;
    printf("\nSTMT_EXEC;;1496\n");
goto switch_break;
  case_5:
    {
printf("\nSTMT_EXEC;;1498\n");
backslash_escapes = (_Bool)1;
}

    printf("\nSTMT_EXEC;;1499\n");
elide_outer_quotes = (_Bool)0;
    printf("\nSTMT_EXEC;;1500\n");
goto switch_break;
  case_6:
    {
printf("\nSTMT_EXEC;;1502\n");
if ((unsigned int)quoting_style != 8U) {
      printf("\nSTMT_EXEC;;1503\n");
left_quote = gettext_quote("`", quoting_style);
      printf("\nSTMT_EXEC;;1504\n");
right_quote = gettext_quote("\'", quoting_style);
    }
}

    printf("\nSTMT_EXEC;;1506\n");
if (!elide_outer_quotes) {
      printf("\nSTMT_EXEC;;1507\n");
quote_string = left_quote;
      printf("\nSTMT_EXEC;;1508\n");
while (1) {
        printf("\nSTMT_EXEC;;1509\n");
if (!*quote_string) {
          printf("\nSTMT_EXEC;;1510\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;1512\n");
while (1) {
          printf("\nSTMT_EXEC;;1513\n");
if (len < buffersize) {
            printf("\nSTMT_EXEC;;1514\n");
*(buffer + len) = (char)*quote_string;
          }
          printf("\nSTMT_EXEC;;1516\n");
len++;
          printf("\nSTMT_EXEC;;1517\n");
goto while_break___1;
        }
      while_break___1:
        {
printf("\nSTMT_EXEC;;1520\n");
quote_string++;
}

      }
    while_break___0:;
    }
    printf("\nSTMT_EXEC;;1524\n");
backslash_escapes = (_Bool)1;
    printf("\nSTMT_EXEC;;1525\n");
quote_string = right_quote;
    printf("\nSTMT_EXEC;;1526\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
quote_string_len = strlen(quote_string);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;1527\n");
goto switch_break;
  case_1:
    {
printf("\nSTMT_EXEC;;1529\n");
quoting_style = (enum quoting_style)2;
}

    printf("\nSTMT_EXEC;;1530\n");
elide_outer_quotes = (_Bool)1;
  case_2:
    {
printf("\nSTMT_EXEC;;1532\n");
if (!elide_outer_quotes) {
      printf("\nSTMT_EXEC;;1533\n");
while (1) {
        printf("\nSTMT_EXEC;;1534\n");
if (len < buffersize) {
          printf("\nSTMT_EXEC;;1535\n");
*(buffer + len) = (char)'\'';
        }
        printf("\nSTMT_EXEC;;1537\n");
len++;
        printf("\nSTMT_EXEC;;1538\n");
goto while_break___2;
      }
    while_break___2:;
    }
}

    printf("\nSTMT_EXEC;;1542\n");
quote_string = "\'";
    printf("\nSTMT_EXEC;;1543\n");
quote_string_len = (size_t)1;
    printf("\nSTMT_EXEC;;1544\n");
goto switch_break;
  case_0:
    {
printf("\nSTMT_EXEC;;1546\n");
elide_outer_quotes = (_Bool)0;
}

    printf("\nSTMT_EXEC;;1547\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;1549\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

}

  switch_break:
    {
printf("\nSTMT_EXEC;;1551\n");
i = (size_t)0;
}

    printf("\nSTMT_EXEC;;1552\n");
while (1) {
      printf("\nSTMT_EXEC;;1553\n");
if (argsize == 0xffffffffffffffffUL) {
        printf("\nSTMT_EXEC;;1554\n");
tmp___6 = (int const) * (arg + i) == 0;
      } else {
        printf("\nSTMT_EXEC;;1556\n");
tmp___6 = i == argsize;
      }
      printf("\nSTMT_EXEC;;1558\n");
if (tmp___6) {
        printf("\nSTMT_EXEC;;1559\n");
goto while_break___3;
      }
      printf("\nSTMT_EXEC;;1561\n");
is_right_quote = (_Bool)0;
      printf("\nSTMT_EXEC;;1562\n");
if (backslash_escapes) {
        printf("\nSTMT_EXEC;;1563\n");
if (quote_string_len) {
          printf("\nSTMT_EXEC;;1564\n");
if (i + quote_string_len <= argsize) {
            printf("\nSTMT_EXEC;;1565\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___0 = memcmp((void const *)(arg + i),
                             (void const *)quote_string, quote_string_len);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;1567\n");
if (tmp___0 == 0) {
              printf("\nSTMT_EXEC;;1568\n");
if (elide_outer_quotes) {
                printf("\nSTMT_EXEC;;1569\n");
goto force_outer_quoting_style;
              }
              printf("\nSTMT_EXEC;;1571\n");
is_right_quote = (_Bool)1;
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;1576\n");
c = (unsigned char)*(arg + i);
      printf("\nSTMT_EXEC;;1577\n");
if ((int)c == 0) {
        printf("\nSTMT_EXEC;;1578\n");
goto case_0___0;
      }
      printf("\nSTMT_EXEC;;1580\n");
if ((int)c == 63) {
        printf("\nSTMT_EXEC;;1581\n");
goto case_63;
      }
      printf("\nSTMT_EXEC;;1583\n");
if ((int)c == 7) {
        printf("\nSTMT_EXEC;;1584\n");
goto case_7___0;
      }
      printf("\nSTMT_EXEC;;1586\n");
if ((int)c == 8) {
        printf("\nSTMT_EXEC;;1587\n");
goto case_8___0;
      }
      printf("\nSTMT_EXEC;;1589\n");
if ((int)c == 12) {
        printf("\nSTMT_EXEC;;1590\n");
goto case_12;
      }
      printf("\nSTMT_EXEC;;1592\n");
if ((int)c == 10) {
        printf("\nSTMT_EXEC;;1593\n");
goto case_10;
      }
      printf("\nSTMT_EXEC;;1595\n");
if ((int)c == 13) {
        printf("\nSTMT_EXEC;;1596\n");
goto case_13;
      }
      printf("\nSTMT_EXEC;;1598\n");
if ((int)c == 9) {
        printf("\nSTMT_EXEC;;1599\n");
goto case_9;
      }
      printf("\nSTMT_EXEC;;1601\n");
if ((int)c == 11) {
        printf("\nSTMT_EXEC;;1602\n");
goto case_11;
      }
      printf("\nSTMT_EXEC;;1604\n");
if ((int)c == 92) {
        printf("\nSTMT_EXEC;;1605\n");
goto case_92;
      }
      printf("\nSTMT_EXEC;;1607\n");
if ((int)c == 123) {
        printf("\nSTMT_EXEC;;1608\n");
goto case_123;
      }
      printf("\nSTMT_EXEC;;1610\n");
if ((int)c == 125) {
        printf("\nSTMT_EXEC;;1611\n");
goto case_123;
      }
      printf("\nSTMT_EXEC;;1613\n");
if ((int)c == 35) {
        printf("\nSTMT_EXEC;;1614\n");
goto case_35;
      }
      printf("\nSTMT_EXEC;;1616\n");
if ((int)c == 126) {
        printf("\nSTMT_EXEC;;1617\n");
goto case_35;
      }
      printf("\nSTMT_EXEC;;1619\n");
if ((int)c == 32) {
        printf("\nSTMT_EXEC;;1620\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1622\n");
if ((int)c == 33) {
        printf("\nSTMT_EXEC;;1623\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1625\n");
if ((int)c == 34) {
        printf("\nSTMT_EXEC;;1626\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1628\n");
if ((int)c == 36) {
        printf("\nSTMT_EXEC;;1629\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1631\n");
if ((int)c == 38) {
        printf("\nSTMT_EXEC;;1632\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1634\n");
if ((int)c == 40) {
        printf("\nSTMT_EXEC;;1635\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1637\n");
if ((int)c == 41) {
        printf("\nSTMT_EXEC;;1638\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1640\n");
if ((int)c == 42) {
        printf("\nSTMT_EXEC;;1641\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1643\n");
if ((int)c == 59) {
        printf("\nSTMT_EXEC;;1644\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1646\n");
if ((int)c == 60) {
        printf("\nSTMT_EXEC;;1647\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1649\n");
if ((int)c == 61) {
        printf("\nSTMT_EXEC;;1650\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1652\n");
if ((int)c == 62) {
        printf("\nSTMT_EXEC;;1653\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1655\n");
if ((int)c == 91) {
        printf("\nSTMT_EXEC;;1656\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1658\n");
if ((int)c == 94) {
        printf("\nSTMT_EXEC;;1659\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1661\n");
if ((int)c == 96) {
        printf("\nSTMT_EXEC;;1662\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1664\n");
if ((int)c == 124) {
        printf("\nSTMT_EXEC;;1665\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;1667\n");
if ((int)c == 39) {
        printf("\nSTMT_EXEC;;1668\n");
goto case_39___0;
      }
      printf("\nSTMT_EXEC;;1670\n");
if ((int)c == 37) {
        printf("\nSTMT_EXEC;;1671\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1673\n");
if ((int)c == 43) {
        printf("\nSTMT_EXEC;;1674\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1676\n");
if ((int)c == 44) {
        printf("\nSTMT_EXEC;;1677\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1679\n");
if ((int)c == 45) {
        printf("\nSTMT_EXEC;;1680\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1682\n");
if ((int)c == 46) {
        printf("\nSTMT_EXEC;;1683\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1685\n");
if ((int)c == 47) {
        printf("\nSTMT_EXEC;;1686\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1688\n");
if ((int)c == 48) {
        printf("\nSTMT_EXEC;;1689\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1691\n");
if ((int)c == 49) {
        printf("\nSTMT_EXEC;;1692\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1694\n");
if ((int)c == 50) {
        printf("\nSTMT_EXEC;;1695\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1697\n");
if ((int)c == 51) {
        printf("\nSTMT_EXEC;;1698\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1700\n");
if ((int)c == 52) {
        printf("\nSTMT_EXEC;;1701\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1703\n");
if ((int)c == 53) {
        printf("\nSTMT_EXEC;;1704\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1706\n");
if ((int)c == 54) {
        printf("\nSTMT_EXEC;;1707\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1709\n");
if ((int)c == 55) {
        printf("\nSTMT_EXEC;;1710\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1712\n");
if ((int)c == 56) {
        printf("\nSTMT_EXEC;;1713\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1715\n");
if ((int)c == 57) {
        printf("\nSTMT_EXEC;;1716\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1718\n");
if ((int)c == 58) {
        printf("\nSTMT_EXEC;;1719\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1721\n");
if ((int)c == 65) {
        printf("\nSTMT_EXEC;;1722\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1724\n");
if ((int)c == 66) {
        printf("\nSTMT_EXEC;;1725\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1727\n");
if ((int)c == 67) {
        printf("\nSTMT_EXEC;;1728\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1730\n");
if ((int)c == 68) {
        printf("\nSTMT_EXEC;;1731\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1733\n");
if ((int)c == 69) {
        printf("\nSTMT_EXEC;;1734\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1736\n");
if ((int)c == 70) {
        printf("\nSTMT_EXEC;;1737\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1739\n");
if ((int)c == 71) {
        printf("\nSTMT_EXEC;;1740\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1742\n");
if ((int)c == 72) {
        printf("\nSTMT_EXEC;;1743\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1745\n");
if ((int)c == 73) {
        printf("\nSTMT_EXEC;;1746\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1748\n");
if ((int)c == 74) {
        printf("\nSTMT_EXEC;;1749\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1751\n");
if ((int)c == 75) {
        printf("\nSTMT_EXEC;;1752\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1754\n");
if ((int)c == 76) {
        printf("\nSTMT_EXEC;;1755\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1757\n");
if ((int)c == 77) {
        printf("\nSTMT_EXEC;;1758\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1760\n");
if ((int)c == 78) {
        printf("\nSTMT_EXEC;;1761\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1763\n");
if ((int)c == 79) {
        printf("\nSTMT_EXEC;;1764\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1766\n");
if ((int)c == 80) {
        printf("\nSTMT_EXEC;;1767\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1769\n");
if ((int)c == 81) {
        printf("\nSTMT_EXEC;;1770\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1772\n");
if ((int)c == 82) {
        printf("\nSTMT_EXEC;;1773\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1775\n");
if ((int)c == 83) {
        printf("\nSTMT_EXEC;;1776\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1778\n");
if ((int)c == 84) {
        printf("\nSTMT_EXEC;;1779\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1781\n");
if ((int)c == 85) {
        printf("\nSTMT_EXEC;;1782\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1784\n");
if ((int)c == 86) {
        printf("\nSTMT_EXEC;;1785\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1787\n");
if ((int)c == 87) {
        printf("\nSTMT_EXEC;;1788\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1790\n");
if ((int)c == 88) {
        printf("\nSTMT_EXEC;;1791\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1793\n");
if ((int)c == 89) {
        printf("\nSTMT_EXEC;;1794\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1796\n");
if ((int)c == 90) {
        printf("\nSTMT_EXEC;;1797\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1799\n");
if ((int)c == 93) {
        printf("\nSTMT_EXEC;;1800\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1802\n");
if ((int)c == 95) {
        printf("\nSTMT_EXEC;;1803\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1805\n");
if ((int)c == 97) {
        printf("\nSTMT_EXEC;;1806\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1808\n");
if ((int)c == 98) {
        printf("\nSTMT_EXEC;;1809\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1811\n");
if ((int)c == 99) {
        printf("\nSTMT_EXEC;;1812\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1814\n");
if ((int)c == 100) {
        printf("\nSTMT_EXEC;;1815\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1817\n");
if ((int)c == 101) {
        printf("\nSTMT_EXEC;;1818\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1820\n");
if ((int)c == 102) {
        printf("\nSTMT_EXEC;;1821\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1823\n");
if ((int)c == 103) {
        printf("\nSTMT_EXEC;;1824\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1826\n");
if ((int)c == 104) {
        printf("\nSTMT_EXEC;;1827\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1829\n");
if ((int)c == 105) {
        printf("\nSTMT_EXEC;;1830\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1832\n");
if ((int)c == 106) {
        printf("\nSTMT_EXEC;;1833\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1835\n");
if ((int)c == 107) {
        printf("\nSTMT_EXEC;;1836\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1838\n");
if ((int)c == 108) {
        printf("\nSTMT_EXEC;;1839\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1841\n");
if ((int)c == 109) {
        printf("\nSTMT_EXEC;;1842\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1844\n");
if ((int)c == 110) {
        printf("\nSTMT_EXEC;;1845\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1847\n");
if ((int)c == 111) {
        printf("\nSTMT_EXEC;;1848\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1850\n");
if ((int)c == 112) {
        printf("\nSTMT_EXEC;;1851\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1853\n");
if ((int)c == 113) {
        printf("\nSTMT_EXEC;;1854\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1856\n");
if ((int)c == 114) {
        printf("\nSTMT_EXEC;;1857\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1859\n");
if ((int)c == 115) {
        printf("\nSTMT_EXEC;;1860\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1862\n");
if ((int)c == 116) {
        printf("\nSTMT_EXEC;;1863\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1865\n");
if ((int)c == 117) {
        printf("\nSTMT_EXEC;;1866\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1868\n");
if ((int)c == 118) {
        printf("\nSTMT_EXEC;;1869\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1871\n");
if ((int)c == 119) {
        printf("\nSTMT_EXEC;;1872\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1874\n");
if ((int)c == 120) {
        printf("\nSTMT_EXEC;;1875\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1877\n");
if ((int)c == 121) {
        printf("\nSTMT_EXEC;;1878\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1880\n");
if ((int)c == 122) {
        printf("\nSTMT_EXEC;;1881\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;1883\n");
goto switch_default___2;
    case_0___0:
      {
printf("\nSTMT_EXEC;;1885\n");
if (backslash_escapes) {
        printf("\nSTMT_EXEC;;1886\n");
if (elide_outer_quotes) {
          printf("\nSTMT_EXEC;;1887\n");
goto force_outer_quoting_style;
        }
        printf("\nSTMT_EXEC;;1889\n");
while (1) {
          printf("\nSTMT_EXEC;;1890\n");
if (len < buffersize) {
            printf("\nSTMT_EXEC;;1891\n");
*(buffer + len) = (char)'\\';
          }
          printf("\nSTMT_EXEC;;1893\n");
len++;
          printf("\nSTMT_EXEC;;1894\n");
goto while_break___4;
        }
      while_break___4:;
        printf("\nSTMT_EXEC;;1897\n");
if (i + 1UL < argsize) {
          printf("\nSTMT_EXEC;;1898\n");
if (48 <= (int)*(arg + (i + 1UL))) {
            printf("\nSTMT_EXEC;;1899\n");
if ((int const) * (arg + (i + 1UL)) <= 57) {
              printf("\nSTMT_EXEC;;1900\n");
while (1) {
                printf("\nSTMT_EXEC;;1901\n");
if (len < buffersize) {
                  printf("\nSTMT_EXEC;;1902\n");
*(buffer + len) = (char)'0';
                }
                printf("\nSTMT_EXEC;;1904\n");
len++;
                printf("\nSTMT_EXEC;;1905\n");
goto while_break___5;
              }
            while_break___5:;
              printf("\nSTMT_EXEC;;1908\n");
while (1) {
                printf("\nSTMT_EXEC;;1909\n");
if (len < buffersize) {
                  printf("\nSTMT_EXEC;;1910\n");
*(buffer + len) = (char)'0';
                }
                printf("\nSTMT_EXEC;;1912\n");
len++;
                printf("\nSTMT_EXEC;;1913\n");
goto while_break___6;
              }
            while_break___6:;
            }
          }
        }
        printf("\nSTMT_EXEC;;1919\n");
c = (unsigned char)'0';
      } else {
        printf("\nSTMT_EXEC;;1921\n");
if (flags & 1) {
          printf("\nSTMT_EXEC;;1922\n");
goto __Cont;
        }
      }
}

      printf("\nSTMT_EXEC;;1925\n");
goto switch_break___0;
    case_63:
      {
printf("\nSTMT_EXEC;;1927\n");
if ((unsigned int)quoting_style == 2U) {
        printf("\nSTMT_EXEC;;1928\n");
goto case_2___0;
      }
}

      printf("\nSTMT_EXEC;;1930\n");
if ((unsigned int)quoting_style == 3U) {
        printf("\nSTMT_EXEC;;1931\n");
goto case_3___0;
      }
      printf("\nSTMT_EXEC;;1933\n");
goto switch_default___1;
    case_2___0:
      {
printf("\nSTMT_EXEC;;1935\n");
if (elide_outer_quotes) {
        printf("\nSTMT_EXEC;;1936\n");
goto force_outer_quoting_style;
      }
}

      printf("\nSTMT_EXEC;;1938\n");
goto switch_break___1;
    case_3___0:
      {
printf("\nSTMT_EXEC;;1940\n");
if (flags & 4) {
        printf("\nSTMT_EXEC;;1941\n");
if (i + 2UL < argsize) {
          printf("\nSTMT_EXEC;;1942\n");
if ((int const) * (arg + (i + 1UL)) == 63) {
            printf("\nSTMT_EXEC;;1943\n");
if ((int const) * (arg + (i + 2UL)) == 33) {
              printf("\nSTMT_EXEC;;1944\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1946\n");
if ((int const) * (arg + (i + 2UL)) == 39) {
              printf("\nSTMT_EXEC;;1947\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1949\n");
if ((int const) * (arg + (i + 2UL)) == 40) {
              printf("\nSTMT_EXEC;;1950\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1952\n");
if ((int const) * (arg + (i + 2UL)) == 41) {
              printf("\nSTMT_EXEC;;1953\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1955\n");
if ((int const) * (arg + (i + 2UL)) == 45) {
              printf("\nSTMT_EXEC;;1956\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1958\n");
if ((int const) * (arg + (i + 2UL)) == 47) {
              printf("\nSTMT_EXEC;;1959\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1961\n");
if ((int const) * (arg + (i + 2UL)) == 60) {
              printf("\nSTMT_EXEC;;1962\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1964\n");
if ((int const) * (arg + (i + 2UL)) == 61) {
              printf("\nSTMT_EXEC;;1965\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1967\n");
if ((int const) * (arg + (i + 2UL)) == 62) {
              printf("\nSTMT_EXEC;;1968\n");
goto case_33;
            }
            printf("\nSTMT_EXEC;;1970\n");
goto switch_default___0;
          case_33:
            {
printf("\nSTMT_EXEC;;1972\n");
if (elide_outer_quotes) {
              printf("\nSTMT_EXEC;;1973\n");
goto force_outer_quoting_style;
            }
}

            printf("\nSTMT_EXEC;;1975\n");
c = (unsigned char)*(arg + (i + 2UL));
            printf("\nSTMT_EXEC;;1976\n");
i += 2UL;
            printf("\nSTMT_EXEC;;1977\n");
while (1) {
              printf("\nSTMT_EXEC;;1978\n");
if (len < buffersize) {
                printf("\nSTMT_EXEC;;1979\n");
*(buffer + len) = (char)'?';
              }
              printf("\nSTMT_EXEC;;1981\n");
len++;
              printf("\nSTMT_EXEC;;1982\n");
goto while_break___7;
            }
          while_break___7:;
            printf("\nSTMT_EXEC;;1985\n");
while (1) {
              printf("\nSTMT_EXEC;;1986\n");
if (len < buffersize) {
                printf("\nSTMT_EXEC;;1987\n");
*(buffer + len) = (char)'\"';
              }
              printf("\nSTMT_EXEC;;1989\n");
len++;
              printf("\nSTMT_EXEC;;1990\n");
goto while_break___8;
            }
          while_break___8:;
            printf("\nSTMT_EXEC;;1993\n");
while (1) {
              printf("\nSTMT_EXEC;;1994\n");
if (len < buffersize) {
                printf("\nSTMT_EXEC;;1995\n");
*(buffer + len) = (char)'\"';
              }
              printf("\nSTMT_EXEC;;1997\n");
len++;
              printf("\nSTMT_EXEC;;1998\n");
goto while_break___9;
            }
          while_break___9:;
            printf("\nSTMT_EXEC;;2001\n");
while (1) {
              printf("\nSTMT_EXEC;;2002\n");
if (len < buffersize) {
                printf("\nSTMT_EXEC;;2003\n");
*(buffer + len) = (char)'?';
              }
              printf("\nSTMT_EXEC;;2005\n");
len++;
              printf("\nSTMT_EXEC;;2006\n");
goto while_break___10;
            }
          while_break___10:;
            printf("\nSTMT_EXEC;;2009\n");
goto switch_break___2;
          switch_default___0:
            {
printf("\nSTMT_EXEC;;2011\n");
goto switch_break___2;
}

          switch_break___2:;
          }
        }
      }
}

      printf("\nSTMT_EXEC;;2016\n");
goto switch_break___1;
    switch_default___1:
      {
printf("\nSTMT_EXEC;;2018\n");
goto switch_break___1;
}

    switch_break___1:;
      printf("\nSTMT_EXEC;;2020\n");
goto switch_break___0;
    case_7___0:
      {
printf("\nSTMT_EXEC;;2022\n");
esc = (unsigned char)'a';
}

      printf("\nSTMT_EXEC;;2023\n");
goto c_escape;
    case_8___0:
      {
printf("\nSTMT_EXEC;;2025\n");
esc = (unsigned char)'b';
}

      printf("\nSTMT_EXEC;;2026\n");
goto c_escape;
    case_12:
      {
printf("\nSTMT_EXEC;;2028\n");
esc = (unsigned char)'f';
}

      printf("\nSTMT_EXEC;;2029\n");
goto c_escape;
    case_10:
      {
printf("\nSTMT_EXEC;;2031\n");
esc = (unsigned char)'n';
}

      printf("\nSTMT_EXEC;;2032\n");
goto c_and_shell_escape;
    case_13:
      {
printf("\nSTMT_EXEC;;2034\n");
esc = (unsigned char)'r';
}

      printf("\nSTMT_EXEC;;2035\n");
goto c_and_shell_escape;
    case_9:
      {
printf("\nSTMT_EXEC;;2037\n");
esc = (unsigned char)'t';
}

      printf("\nSTMT_EXEC;;2038\n");
goto c_and_shell_escape;
    case_11:
      {
printf("\nSTMT_EXEC;;2040\n");
esc = (unsigned char)'v';
}

      printf("\nSTMT_EXEC;;2041\n");
goto c_escape;
    case_92:
      {
printf("\nSTMT_EXEC;;2043\n");
esc = c;
}

      printf("\nSTMT_EXEC;;2044\n");
if (backslash_escapes) {
        printf("\nSTMT_EXEC;;2045\n");
if (elide_outer_quotes) {
          printf("\nSTMT_EXEC;;2046\n");
if (quote_string_len) {
            printf("\nSTMT_EXEC;;2047\n");
goto store_c;
          }
        }
      }
    c_and_shell_escape:
      {
printf("\nSTMT_EXEC;;2052\n");
if ((unsigned int)quoting_style == 2U) {
        printf("\nSTMT_EXEC;;2053\n");
if (elide_outer_quotes) {
          printf("\nSTMT_EXEC;;2054\n");
goto force_outer_quoting_style;
        }
      }
}

    c_escape:
      {
printf("\nSTMT_EXEC;;2058\n");
if (backslash_escapes) {
        printf("\nSTMT_EXEC;;2059\n");
c = esc;
        printf("\nSTMT_EXEC;;2060\n");
goto store_escape;
      }
}

      printf("\nSTMT_EXEC;;2062\n");
goto switch_break___0;
    case_123:
      {
printf("\nSTMT_EXEC;;2064\n");
if (argsize == 0xffffffffffffffffUL) {
        printf("\nSTMT_EXEC;;2065\n");
tmp___1 = (int const) * (arg + 1) == 0;
      } else {
        printf("\nSTMT_EXEC;;2067\n");
tmp___1 = argsize == 1UL;
      }
}

      printf("\nSTMT_EXEC;;2069\n");
if (!tmp___1) {
        printf("\nSTMT_EXEC;;2070\n");
goto switch_break___0;
      }
    case_35:
      {
printf("\nSTMT_EXEC;;2073\n");
if (i != 0UL) {
        printf("\nSTMT_EXEC;;2074\n");
goto switch_break___0;
      }
}

    case_32:
      {
printf("\nSTMT_EXEC;;2077\n");
if ((unsigned int)quoting_style == 2U) {
        printf("\nSTMT_EXEC;;2078\n");
if (elide_outer_quotes) {
          printf("\nSTMT_EXEC;;2079\n");
goto force_outer_quoting_style;
        }
      }
}

      printf("\nSTMT_EXEC;;2082\n");
goto switch_break___0;
    case_39___0:
      {
printf("\nSTMT_EXEC;;2084\n");
if ((unsigned int)quoting_style == 2U) {
        printf("\nSTMT_EXEC;;2085\n");
if (elide_outer_quotes) {
          printf("\nSTMT_EXEC;;2086\n");
goto force_outer_quoting_style;
        }
        printf("\nSTMT_EXEC;;2088\n");
while (1) {
          printf("\nSTMT_EXEC;;2089\n");
if (len < buffersize) {
            printf("\nSTMT_EXEC;;2090\n");
*(buffer + len) = (char)'\'';
          }
          printf("\nSTMT_EXEC;;2092\n");
len++;
          printf("\nSTMT_EXEC;;2093\n");
goto while_break___11;
        }
      while_break___11:;
        printf("\nSTMT_EXEC;;2096\n");
while (1) {
          printf("\nSTMT_EXEC;;2097\n");
if (len < buffersize) {
            printf("\nSTMT_EXEC;;2098\n");
*(buffer + len) = (char)'\\';
          }
          printf("\nSTMT_EXEC;;2100\n");
len++;
          printf("\nSTMT_EXEC;;2101\n");
goto while_break___12;
        }
      while_break___12:;
        printf("\nSTMT_EXEC;;2104\n");
while (1) {
          printf("\nSTMT_EXEC;;2105\n");
if (len < buffersize) {
            printf("\nSTMT_EXEC;;2106\n");
*(buffer + len) = (char)'\'';
          }
          printf("\nSTMT_EXEC;;2108\n");
len++;
          printf("\nSTMT_EXEC;;2109\n");
goto while_break___13;
        }
      while_break___13:;
      }
}

      printf("\nSTMT_EXEC;;2113\n");
goto switch_break___0;
    case_37:
      {
printf("\nSTMT_EXEC;;2115\n");
goto switch_break___0;
}

    switch_default___2:
      {
printf("\nSTMT_EXEC;;2117\n");
if (unibyte_locale) {
        printf("\nSTMT_EXEC;;2118\n");
m = (size_t)1;
        printf("\nSTMT_EXEC;;2119\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___2 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;2120\n");
printable = (_Bool)(((int const) * (*tmp___2 + (int)c) & 16384) != 0);
      } else {
        printf("\nSTMT_EXEC;;2122\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(&mbstate), 0, sizeof(mbstate));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;2123\n");
m = (size_t)0;
        printf("\nSTMT_EXEC;;2124\n");
printable = (_Bool)1;
        printf("\nSTMT_EXEC;;2125\n");
if (argsize == 0xffffffffffffffffUL) {
          printf("\nSTMT_EXEC;;2126\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
argsize = strlen(arg);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;2128\n");
while (1) {
          printf("\nSTMT_EXEC;;2129\n");
printf("\nFUNC_CALL;mbrtowc(wchar_t *__restrict,const char *__restrict,size_t,mbstate_t *__restrict);\n");
tmp___3 = mbrtowc(&w, arg + (i + m), argsize - (i + m), &mbstate);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;2130\n");
bytes = tmp___3;
          printf("\nSTMT_EXEC;;2131\n");
if (bytes == 0UL) {
            printf("\nSTMT_EXEC;;2132\n");
goto while_break___14;
          } else {
            printf("\nSTMT_EXEC;;2134\n");
if (bytes == 0xffffffffffffffffUL) {
              printf("\nSTMT_EXEC;;2135\n");
printable = (_Bool)0;
              printf("\nSTMT_EXEC;;2136\n");
goto while_break___14;
            } else {
              printf("\nSTMT_EXEC;;2138\n");
if (bytes == 0xfffffffffffffffeUL) {
                printf("\nSTMT_EXEC;;2139\n");
printable = (_Bool)0;
                printf("\nSTMT_EXEC;;2140\n");
while (1) {
                  printf("\nSTMT_EXEC;;2141\n");
if (i + m < argsize) {
                    printf("\nSTMT_EXEC;;2142\n");
if (!*(arg + (i + m))) {
                      printf("\nSTMT_EXEC;;2143\n");
goto while_break___15;
                    }
                  } else {
                    printf("\nSTMT_EXEC;;2146\n");
goto while_break___15;
                  }
                  printf("\nSTMT_EXEC;;2148\n");
m++;
                }
              while_break___15:;
                printf("\nSTMT_EXEC;;2151\n");
goto while_break___14;
              } else {
                printf("\nSTMT_EXEC;;2153\n");
if (elide_outer_quotes) {
                  printf("\nSTMT_EXEC;;2154\n");
if ((unsigned int)quoting_style == 2U) {
                    printf("\nSTMT_EXEC;;2155\n");
j = (size_t)1;
                    printf("\nSTMT_EXEC;;2156\n");
while (1) {
                      printf("\nSTMT_EXEC;;2157\n");
if (!(j < bytes)) {
                        printf("\nSTMT_EXEC;;2158\n");
goto while_break___16;
                      }
                      printf("\nSTMT_EXEC;;2160\n");
if ((int const) * (arg + ((i + m) + j)) == 91) {
                        printf("\nSTMT_EXEC;;2161\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;2163\n");
if ((int const) * (arg + ((i + m) + j)) == 92) {
                        printf("\nSTMT_EXEC;;2164\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;2166\n");
if ((int const) * (arg + ((i + m) + j)) == 94) {
                        printf("\nSTMT_EXEC;;2167\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;2169\n");
if ((int const) * (arg + ((i + m) + j)) == 96) {
                        printf("\nSTMT_EXEC;;2170\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;2172\n");
if ((int const) * (arg + ((i + m) + j)) == 124) {
                        printf("\nSTMT_EXEC;;2173\n");
goto case_91___0;
                      }
                      printf("\nSTMT_EXEC;;2175\n");
goto switch_default___3;
                    case_91___0:
                      {
printf("\nSTMT_EXEC;;2177\n");
goto force_outer_quoting_style;
}

                    switch_default___3:
                      {
printf("\nSTMT_EXEC;;2179\n");
goto switch_break___3;
}

                    switch_break___3:
                      {
printf("\nSTMT_EXEC;;2181\n");
j++;
}

                    }
                  while_break___16:;
                  }
                }
                printf("\nSTMT_EXEC;;2186\n");
printf("\nFUNC_CALL;iswprint(wint_t);\n");
tmp___4 = iswprint((wint_t)w);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;2187\n");
if (!tmp___4) {
                  printf("\nSTMT_EXEC;;2188\n");
printable = (_Bool)0;
                }
                printf("\nSTMT_EXEC;;2190\n");
m += bytes;
              }
            }
          }
          printf("\nSTMT_EXEC;;2194\n");
printf("\nFUNC_CALL;mbsinit(const mbstate_t *);\n");
tmp___5 = mbsinit((mbstate_t const *)(&mbstate));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;2195\n");
if (tmp___5) {
            printf("\nSTMT_EXEC;;2196\n");
goto while_break___14;
          }
        }
      while_break___14:;
      }
}

      printf("\nSTMT_EXEC;;2201\n");
if (1UL < m) {
        printf("\nSTMT_EXEC;;2202\n");
goto _L___0;
      } else {
        printf("\nSTMT_EXEC;;2204\n");
if (backslash_escapes) {
          printf("\nSTMT_EXEC;;2205\n");
if (!printable) {
          _L___0:
            {
printf("\nSTMT_EXEC;;2207\n");
ilim = i + m;
}

            printf("\nSTMT_EXEC;;2208\n");
while (1) {
              printf("\nSTMT_EXEC;;2209\n");
if (backslash_escapes) {
                printf("\nSTMT_EXEC;;2210\n");
if (!printable) {
                  printf("\nSTMT_EXEC;;2211\n");
if (elide_outer_quotes) {
                    printf("\nSTMT_EXEC;;2212\n");
goto force_outer_quoting_style;
                  }
                  printf("\nSTMT_EXEC;;2214\n");
while (1) {
                    printf("\nSTMT_EXEC;;2215\n");
if (len < buffersize) {
                      printf("\nSTMT_EXEC;;2216\n");
*(buffer + len) = (char)'\\';
                    }
                    printf("\nSTMT_EXEC;;2218\n");
len++;
                    printf("\nSTMT_EXEC;;2219\n");
goto while_break___18;
                  }
                while_break___18:;
                  printf("\nSTMT_EXEC;;2222\n");
while (1) {
                    printf("\nSTMT_EXEC;;2223\n");
if (len < buffersize) {
                      printf("\nSTMT_EXEC;;2224\n");
*(buffer + len) = (char)(48 + ((int)c >> 6));
                    }
                    printf("\nSTMT_EXEC;;2226\n");
len++;
                    printf("\nSTMT_EXEC;;2227\n");
goto while_break___19;
                  }
                while_break___19:;
                  printf("\nSTMT_EXEC;;2230\n");
while (1) {
                    printf("\nSTMT_EXEC;;2231\n");
if (len < buffersize) {
                      printf("\nSTMT_EXEC;;2232\n");
*(buffer + len) = (char)(48 + (((int)c >> 3) & 7));
                    }
                    printf("\nSTMT_EXEC;;2234\n");
len++;
                    printf("\nSTMT_EXEC;;2235\n");
goto while_break___20;
                  }
                while_break___20:
                  {
printf("\nSTMT_EXEC;;2238\n");
c = (unsigned char)(48 + ((int)c & 7));
}

                } else {
                  printf("\nSTMT_EXEC;;2240\n");
goto _L;
                }
              } else {
              _L:
                {
printf("\nSTMT_EXEC;;2244\n");
if (is_right_quote) {
                  printf("\nSTMT_EXEC;;2245\n");
while (1) {
                    printf("\nSTMT_EXEC;;2246\n");
if (len < buffersize) {
                      printf("\nSTMT_EXEC;;2247\n");
*(buffer + len) = (char)'\\';
                    }
                    printf("\nSTMT_EXEC;;2249\n");
len++;
                    printf("\nSTMT_EXEC;;2250\n");
goto while_break___21;
                  }
                while_break___21:
                  {
printf("\nSTMT_EXEC;;2253\n");
is_right_quote = (_Bool)0;
}

                }
}

              }
              printf("\nSTMT_EXEC;;2256\n");
if (ilim <= i + 1UL) {
                printf("\nSTMT_EXEC;;2257\n");
goto while_break___17;
              }
              printf("\nSTMT_EXEC;;2259\n");
while (1) {
                printf("\nSTMT_EXEC;;2260\n");
if (len < buffersize) {
                  printf("\nSTMT_EXEC;;2261\n");
*(buffer + len) = (char)c;
                }
                printf("\nSTMT_EXEC;;2263\n");
len++;
                printf("\nSTMT_EXEC;;2264\n");
goto while_break___22;
              }
            while_break___22:
              {
printf("\nSTMT_EXEC;;2267\n");
i++;
}

              printf("\nSTMT_EXEC;;2268\n");
c = (unsigned char)*(arg + i);
            }
          while_break___17:;
            printf("\nSTMT_EXEC;;2271\n");
goto store_c;
          }
        }
      }
    switch_break___0:;
      printf("\nSTMT_EXEC;;2276\n");
if (backslash_escapes) {
        printf("\nSTMT_EXEC;;2277\n");
goto _L___3;
      } else {
        printf("\nSTMT_EXEC;;2279\n");
if (elide_outer_quotes) {
        _L___3:
          {
printf("\nSTMT_EXEC;;2281\n");
if (quote_these_too) {
            printf("\nSTMT_EXEC;;2282\n");
if (!(*(quote_these_too + (unsigned long)c / (sizeof(int) * 8UL)) &
                  (unsigned int const)(1 << (unsigned long)c %
                                                (sizeof(int) * 8UL)))) {
              printf("\nSTMT_EXEC;;2285\n");
goto _L___2;
            }
          } else {
            printf("\nSTMT_EXEC;;2288\n");
goto _L___2;
          }
}

        } else {
        _L___2:
          {
printf("\nSTMT_EXEC;;2292\n");
if (!is_right_quote) {
            printf("\nSTMT_EXEC;;2293\n");
goto store_c;
          }
}

        }
      }
    store_escape:
      {
printf("\nSTMT_EXEC;;2298\n");
if (elide_outer_quotes) {
        printf("\nSTMT_EXEC;;2299\n");
goto force_outer_quoting_style;
      }
}

      printf("\nSTMT_EXEC;;2301\n");
while (1) {
        printf("\nSTMT_EXEC;;2302\n");
if (len < buffersize) {
          printf("\nSTMT_EXEC;;2303\n");
*(buffer + len) = (char)'\\';
        }
        printf("\nSTMT_EXEC;;2305\n");
len++;
        printf("\nSTMT_EXEC;;2306\n");
goto while_break___23;
      }
    while_break___23:;
    store_c:
      {
printf("\nSTMT_EXEC;;2310\n");
while (1) {
        printf("\nSTMT_EXEC;;2311\n");
if (len < buffersize) {
          printf("\nSTMT_EXEC;;2312\n");
*(buffer + len) = (char)c;
        }
        printf("\nSTMT_EXEC;;2314\n");
len++;
        printf("\nSTMT_EXEC;;2315\n");
goto while_break___24;
      }
}

    while_break___24:;
    __Cont:
      {
printf("\nSTMT_EXEC;;2319\n");
i++;
}

    }
  while_break___3:;
    printf("\nSTMT_EXEC;;2322\n");
if (len == 0UL) {
      printf("\nSTMT_EXEC;;2323\n");
if ((unsigned int)quoting_style == 2U) {
        printf("\nSTMT_EXEC;;2324\n");
if (elide_outer_quotes) {
          printf("\nSTMT_EXEC;;2325\n");
goto force_outer_quoting_style;
        }
      }
    }
    printf("\nSTMT_EXEC;;2329\n");
if (quote_string) {
      printf("\nSTMT_EXEC;;2330\n");
if (!elide_outer_quotes) {
        printf("\nSTMT_EXEC;;2331\n");
while (1) {
          printf("\nSTMT_EXEC;;2332\n");
if (!*quote_string) {
            printf("\nSTMT_EXEC;;2333\n");
goto while_break___25;
          }
          printf("\nSTMT_EXEC;;2335\n");
while (1) {
            printf("\nSTMT_EXEC;;2336\n");
if (len < buffersize) {
              printf("\nSTMT_EXEC;;2337\n");
*(buffer + len) = (char)*quote_string;
            }
            printf("\nSTMT_EXEC;;2339\n");
len++;
            printf("\nSTMT_EXEC;;2340\n");
goto while_break___26;
          }
        while_break___26:
          {
printf("\nSTMT_EXEC;;2343\n");
quote_string++;
}

        }
      while_break___25:;
      }
    }
    printf("\nSTMT_EXEC;;2348\n");
if (len < buffersize) {
      printf("\nSTMT_EXEC;;2349\n");
*(buffer + len) = (char)'\000';
    }
    printf("\nSTMT_EXEC;;2351\n");
printf("\nFUNC_RETURN;;\n");
return (len);
  force_outer_quoting_style:
    {
printf("\nSTMT_EXEC;;2353\n");
tmp___7 = quotearg_buffer_restyled(
        buffer, buffersize, arg, argsize, quoting_style, flags & -3,
        (unsigned int const *)((void *)0), left_quote, right_quote);
}

    printf("\nSTMT_EXEC;;2356\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___7);
  }
printf("\nFUNC_RETURN;;\n");
}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options) {
  printf("\nFUNC_CALL;quotearg_n_options(int,const char *,size_t,const struct quoting_options *);\n");
printf("\nSTMT_EXEC;;2365\n");
int e;
  printf("\nSTMT_EXEC;;2366\n");
int *tmp;
  printf("\nSTMT_EXEC;;2367\n");
unsigned int n0;
  printf("\nSTMT_EXEC;;2368\n");
struct slotvec *sv;
  printf("\nSTMT_EXEC;;2369\n");
size_t n1;
  printf("\nSTMT_EXEC;;2370\n");
_Bool preallocated;
  printf("\nSTMT_EXEC;;2371\n");
int tmp___0;
  printf("\nSTMT_EXEC;;2372\n");
struct slotvec *tmp___1;
  printf("\nSTMT_EXEC;;2373\n");
size_t size;
  printf("\nSTMT_EXEC;;2374\n");
char *val;
  printf("\nSTMT_EXEC;;2375\n");
int flags;
  printf("\nSTMT_EXEC;;2376\n");
size_t qsize;
  printf("\nSTMT_EXEC;;2377\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;2378\n");
int *tmp___3;
  {
    printf("\nSTMT_EXEC;;2380\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2381\n");
e = *tmp;
    printf("\nSTMT_EXEC;;2382\n");
n0 = (unsigned int)n;
    printf("\nSTMT_EXEC;;2383\n");
sv = slotvec;
    printf("\nSTMT_EXEC;;2384\n");
if (n < 0) {
      printf("\nSTMT_EXEC;;2385\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;2387\n");
if (nslots <= n0) {
      printf("\nSTMT_EXEC;;2388\n");
n1 = (size_t)(n0 + 1U);
      printf("\nSTMT_EXEC;;2389\n");
preallocated = (_Bool)((unsigned long)sv == (unsigned long)(&slotvec0));
      printf("\nSTMT_EXEC;;2390\n");
if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
        printf("\nSTMT_EXEC;;2391\n");
tmp___0 = -1;
      } else {
        printf("\nSTMT_EXEC;;2393\n");
tmp___0 = -2;
      }
      printf("\nSTMT_EXEC;;2395\n");
if ((size_t)tmp___0 / sizeof(*sv) < n1) {
        printf("\nSTMT_EXEC;;2396\n");
xalloc_die();
      }
      printf("\nSTMT_EXEC;;2398\n");
if (preallocated) {
        printf("\nSTMT_EXEC;;2399\n");
tmp___1 = (struct slotvec *)((void *)0);
      } else {
        printf("\nSTMT_EXEC;;2401\n");
tmp___1 = sv;
      }
      printf("\nSTMT_EXEC;;2403\n");
sv = (struct slotvec *)xrealloc((void *)tmp___1, n1 * sizeof(*sv));
      printf("\nSTMT_EXEC;;2404\n");
slotvec = sv;
      printf("\nSTMT_EXEC;;2405\n");
if (preallocated) {
        printf("\nSTMT_EXEC;;2406\n");
*sv = slotvec0;
      }
      printf("\nSTMT_EXEC;;2408\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((void *)(sv + nslots), 0, (n1 - (size_t)nslots) * sizeof(*sv));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2409\n");
nslots = (unsigned int)n1;
    }
    printf("\nSTMT_EXEC;;2411\n");
size = (sv + n)->size;
    printf("\nSTMT_EXEC;;2412\n");
val = (sv + n)->val;
    printf("\nSTMT_EXEC;;2413\n");
flags = (int)(options->flags | 1);
    printf("\nSTMT_EXEC;;2414\n");
tmp___2 = quotearg_buffer_restyled(
        val, size, arg, argsize, (enum quoting_style)options->style, flags,
        (unsigned int const *)(options->quote_these_too),
        (char const *)options->left_quote, (char const *)options->right_quote);
    printf("\nSTMT_EXEC;;2418\n");
qsize = tmp___2;
    printf("\nSTMT_EXEC;;2419\n");
if (size <= qsize) {
      printf("\nSTMT_EXEC;;2420\n");
size = qsize + 1UL;
      printf("\nSTMT_EXEC;;2421\n");
(sv + n)->size = size;
      printf("\nSTMT_EXEC;;2422\n");
if ((unsigned long)val != (unsigned long)(slot0)) {
        printf("\nSTMT_EXEC;;2423\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)val);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;2425\n");
val = xcharalloc(size);
      printf("\nSTMT_EXEC;;2426\n");
(sv + n)->val = val;
      printf("\nSTMT_EXEC;;2427\n");
quotearg_buffer_restyled(val, size, arg, argsize,
                               (enum quoting_style)options->style, flags,
                               (unsigned int const *)(options->quote_these_too),
                               (char const *)options->left_quote,
                               (char const *)options->right_quote);
    }
    printf("\nSTMT_EXEC;;2433\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2434\n");
*tmp___3 = e;
    printf("\nSTMT_EXEC;;2435\n");
printf("\nFUNC_RETURN;;\n");
return (val);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
  printf("\nFUNC_CALL;quotearg_n_style(int,enum quoting_style,const char *);\n");
printf("\nSTMT_EXEC;;2439\n");
struct quoting_options o;
  printf("\nSTMT_EXEC;;2440\n");
struct quoting_options tmp;
  printf("\nSTMT_EXEC;;2441\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;2443\n");
tmp = quoting_options_from_style(s);
    printf("\nSTMT_EXEC;;2444\n");
o = tmp;
    printf("\nSTMT_EXEC;;2445\n");
tmp___0 = quotearg_n_options(n, arg, (size_t)-1,
                                 (struct quoting_options const *)(&o));
    printf("\nSTMT_EXEC;;2447\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {
  printf("\nFUNC_CALL;quotearg_char_mem(const char *,size_t,char);\n");
printf("\nSTMT_EXEC;;2451\n");
struct quoting_options options;
  printf("\nSTMT_EXEC;;2452\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;2454\n");
options = default_quoting_options;
    printf("\nSTMT_EXEC;;2455\n");
set_char_quoting(&options, ch, 1);
    printf("\nSTMT_EXEC;;2456\n");
tmp = quotearg_n_options(0, arg, argsize,
                             (struct quoting_options const *)(&options));
    printf("\nSTMT_EXEC;;2458\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_char(char const *arg, char ch) {
  printf("\nFUNC_CALL;quotearg_char(const char *,char);\n");
printf("\nSTMT_EXEC;;2462\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;2464\n");
tmp = quotearg_char_mem(arg, (size_t)-1, ch);
    printf("\nSTMT_EXEC;;2465\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char *quotearg_colon(char const *arg) {
  printf("\nFUNC_CALL;quotearg_colon(const char *);\n");
printf("\nSTMT_EXEC;;2469\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;2471\n");
tmp = quotearg_char(arg, (char)':');
    printf("\nSTMT_EXEC;;2472\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
struct quoting_options quote_quoting_options = {(enum quoting_style)6,
                                                0,
                                                {0U},
                                                (char const *)((void *)0),
                                                (char const *)((void *)0)};
char const *quote_n_mem(int n, char const *arg, size_t argsize) {
  printf("\nFUNC_CALL;quote_n_mem(int,const char *,size_t);\n");
printf("\nSTMT_EXEC;;2481\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;2483\n");
tmp = (char const *)quotearg_n_options(
        n, arg, argsize,
        (struct quoting_options const *)(&quote_quoting_options));
    printf("\nSTMT_EXEC;;2486\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char const *quote_n(int n, char const *arg) {
  printf("\nFUNC_CALL;quote_n(int,const char *);\n");
printf("\nSTMT_EXEC;;2490\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;2492\n");
tmp = quote_n_mem(n, arg, (size_t)-1);
    printf("\nSTMT_EXEC;;2493\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
char const *quote(char const *arg) {
  printf("\nFUNC_CALL;quote(const char *);\n");
printf("\nSTMT_EXEC;;2497\n");
char const *tmp;
  {
    printf("\nSTMT_EXEC;;2499\n");
tmp = quote_n(0, arg);
    printf("\nSTMT_EXEC;;2500\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
char const *program_name;
void set_program_name(char const *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strrchr)(char const *__s, int __c)
    __attribute__((__pure__));
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0) {
  printf("\nFUNC_CALL;set_program_name(const char *);\n");
printf("\nSTMT_EXEC;;2530\n");
char const *slash;
  printf("\nSTMT_EXEC;;2531\n");
char const *base;
  printf("\nSTMT_EXEC;;2532\n");
int tmp;
  printf("\nSTMT_EXEC;;2533\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;2535\n");
if ((unsigned long)argv0 == (unsigned long)((void *)0)) {
      printf("\nSTMT_EXEC;;2536\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs("A NULL argv[0] was passed through an exec system call.\n", stderr);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2537\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;2539\n");
printf("\nFUNC_CALL;strrchr(const char *,int);\n");
slash = (char const *)strrchr(argv0, '/');printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2540\n");
if ((unsigned long)slash != (unsigned long)((void *)0)) {
      printf("\nSTMT_EXEC;;2541\n");
base = slash + 1;
    } else {
      printf("\nSTMT_EXEC;;2543\n");
base = argv0;
    }
    printf("\nSTMT_EXEC;;2545\n");
if (base - argv0 >= 7L) {
      printf("\nSTMT_EXEC;;2546\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___0 = strncmp(base - 7, "/.libs/", (size_t)7);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2547\n");
if (tmp___0 == 0) {
        printf("\nSTMT_EXEC;;2548\n");
argv0 = base;
        printf("\nSTMT_EXEC;;2549\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp = strncmp(base, "lt-", (size_t)3);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;2550\n");
if (tmp == 0) {
          printf("\nSTMT_EXEC;;2551\n");
argv0 = base + 3;
          printf("\nSTMT_EXEC;;2552\n");
program_invocation_short_name = (char *)argv0;
        }
      }
    }
    printf("\nSTMT_EXEC;;2556\n");
program_name = argv0;
    printf("\nSTMT_EXEC;;2557\n");
program_invocation_name = (char *)argv0;
    printf("\nSTMT_EXEC;;2558\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) time)(time_t *__timer);
extern
    __attribute__((__nothrow__)) struct tm *(__attribute__((__leaf__))
                                             localtime)(time_t const *__timer);
_Bool posixtime(time_t *p, char const *s, unsigned int syntax_bits);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stpcpy)(char *__restrict __dest, char const *__restrict __src);
static int year(struct tm *tm, int const *digit_pair, size_t n,
                unsigned int syntax_bits) {
  printf("\nFUNC_CALL;year(struct tm *,const int *,size_t,unsigned int);\n");
printf("\nSTMT_EXEC;;2592\n");
time_t now;
  printf("\nSTMT_EXEC;;2593\n");
struct tm *tmp;
  {
    printf("\nSTMT_EXEC;;2595\n");
if (n == 1UL) {
      printf("\nSTMT_EXEC;;2596\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;2598\n");
if (n == 2UL) {
      printf("\nSTMT_EXEC;;2599\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;2601\n");
if (n == 0UL) {
      printf("\nSTMT_EXEC;;2602\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;2604\n");
goto switch_default;
  case_1:
    {
printf("\nSTMT_EXEC;;2606\n");
tm->tm_year = (int)*digit_pair;
}

    printf("\nSTMT_EXEC;;2607\n");
if (*(digit_pair + 0) <= 68) {
      printf("\nSTMT_EXEC;;2608\n");
if (syntax_bits & 16U) {
        printf("\nSTMT_EXEC;;2609\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
      printf("\nSTMT_EXEC;;2611\n");
tm->tm_year += 100;
    }
    printf("\nSTMT_EXEC;;2613\n");
goto switch_break;
  case_2:
    {
printf("\nSTMT_EXEC;;2615\n");
if (!(syntax_bits & 4U)) {
      printf("\nSTMT_EXEC;;2616\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
}

    printf("\nSTMT_EXEC;;2618\n");
tm->tm_year = (int)((*(digit_pair + 0) * 100 + *(digit_pair + 1)) - 1900);
    printf("\nSTMT_EXEC;;2619\n");
goto switch_break;
  case_0:
    {
printf("\nSTMT_EXEC;;2621\n");
printf("\nFUNC_CALL;time(time_t *);\n");
time(&now);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;2622\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tmp = localtime((time_t const *)(&now));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2623\n");
if (!tmp) {
      printf("\nSTMT_EXEC;;2624\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;2626\n");
tm->tm_year = tmp->tm_year;
    printf("\nSTMT_EXEC;;2627\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;2629\n");
printf("\nFUNC_CALL;abort();\n");
abort();printf("\nFUNC_RETURN;;\n");

}

  switch_break:;
    printf("\nSTMT_EXEC;;2631\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static int posix_time_parse(struct tm *tm, char const *s,
                            unsigned int syntax_bits) {
  printf("\nFUNC_CALL;posix_time_parse(struct tm *,const char *,unsigned int);\n");
printf("\nSTMT_EXEC;;2636\n");
char const *dot;
  printf("\nSTMT_EXEC;;2637\n");
int pair[6];
  printf("\nSTMT_EXEC;;2638\n");
int *p;
  printf("\nSTMT_EXEC;;2639\n");
size_t i;
  printf("\nSTMT_EXEC;;2640\n");
size_t s_len;
  printf("\nSTMT_EXEC;;2641\n");
size_t tmp;
  printf("\nSTMT_EXEC;;2642\n");
size_t len;
  printf("\nSTMT_EXEC;;2643\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;2644\n");
int tmp___1;
  printf("\nSTMT_EXEC;;2645\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;2646\n");
int *tmp___3;
  printf("\nSTMT_EXEC;;2647\n");
int *tmp___4;
  printf("\nSTMT_EXEC;;2648\n");
int *tmp___5;
  printf("\nSTMT_EXEC;;2649\n");
int tmp___6;
  printf("\nSTMT_EXEC;;2650\n");
int seconds;
  {
    printf("\nSTMT_EXEC;;2652\n");
dot = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;2653\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen(s);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2654\n");
s_len = tmp;
    printf("\nSTMT_EXEC;;2655\n");
if (syntax_bits & 8U) {
      printf("\nSTMT_EXEC;;2656\n");
printf("\nFUNC_CALL;strchr(const char *,int);\n");
dot = (char const *)strchr(s, '.');printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2657\n");
if (dot) {
        printf("\nSTMT_EXEC;;2658\n");
tmp___0 = (size_t)(dot - s);
      } else {
        printf("\nSTMT_EXEC;;2660\n");
tmp___0 = s_len;
      }
    } else {
      printf("\nSTMT_EXEC;;2663\n");
tmp___0 = s_len;
    }
    printf("\nSTMT_EXEC;;2665\n");
len = tmp___0;
    printf("\nSTMT_EXEC;;2666\n");
if (len != 8UL) {
      printf("\nSTMT_EXEC;;2667\n");
if (len != 10UL) {
        printf("\nSTMT_EXEC;;2668\n");
if (len != 12UL) {
          printf("\nSTMT_EXEC;;2669\n");
printf("\nFUNC_RETURN;;\n");
return (1);
        }
      }
    }
    printf("\nSTMT_EXEC;;2673\n");
if (dot) {
      printf("\nSTMT_EXEC;;2674\n");
if (!(syntax_bits & 8U)) {
        printf("\nSTMT_EXEC;;2675\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
      printf("\nSTMT_EXEC;;2677\n");
if (s_len - len != 3UL) {
        printf("\nSTMT_EXEC;;2678\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    printf("\nSTMT_EXEC;;2681\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;2682\n");
while (1) {
      printf("\nSTMT_EXEC;;2683\n");
if (!(i < len)) {
        printf("\nSTMT_EXEC;;2684\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;2686\n");
if (!((unsigned int)*(s + i) - 48U <= 9U)) {
        printf("\nSTMT_EXEC;;2687\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
      printf("\nSTMT_EXEC;;2689\n");
i++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;2692\n");
len /= 2UL;
}

    printf("\nSTMT_EXEC;;2693\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;2694\n");
while (1) {
      printf("\nSTMT_EXEC;;2695\n");
if (!(i < len)) {
        printf("\nSTMT_EXEC;;2696\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;2698\n");
pair[i] = (10 * (int)((int const) * (s + 2UL * i) - 48) +
                 (int)*(s + (2UL * i + 1UL))) -
                48;
      printf("\nSTMT_EXEC;;2701\n");
i++;
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;2704\n");
p = pair;
}

    printf("\nSTMT_EXEC;;2705\n");
if (syntax_bits & 1U) {
      printf("\nSTMT_EXEC;;2706\n");
tmp___1 = year(tm, (int const *)p, len - 4UL, syntax_bits);
      printf("\nSTMT_EXEC;;2707\n");
if (tmp___1) {
        printf("\nSTMT_EXEC;;2708\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
      printf("\nSTMT_EXEC;;2710\n");
p += len - 4UL;
      printf("\nSTMT_EXEC;;2711\n");
len = (size_t)4;
    }
    printf("\nSTMT_EXEC;;2713\n");
tmp___2 = p;
    printf("\nSTMT_EXEC;;2714\n");
p++;
    printf("\nSTMT_EXEC;;2715\n");
tm->tm_mon = *tmp___2 - 1;
    printf("\nSTMT_EXEC;;2716\n");
tmp___3 = p;
    printf("\nSTMT_EXEC;;2717\n");
p++;
    printf("\nSTMT_EXEC;;2718\n");
tm->tm_mday = *tmp___3;
    printf("\nSTMT_EXEC;;2719\n");
tmp___4 = p;
    printf("\nSTMT_EXEC;;2720\n");
p++;
    printf("\nSTMT_EXEC;;2721\n");
tm->tm_hour = *tmp___4;
    printf("\nSTMT_EXEC;;2722\n");
tmp___5 = p;
    printf("\nSTMT_EXEC;;2723\n");
p++;
    printf("\nSTMT_EXEC;;2724\n");
tm->tm_min = *tmp___5;
    printf("\nSTMT_EXEC;;2725\n");
len -= 4UL;
    printf("\nSTMT_EXEC;;2726\n");
if (syntax_bits & 2U) {
      printf("\nSTMT_EXEC;;2727\n");
tmp___6 = year(tm, (int const *)p, len, syntax_bits);
      printf("\nSTMT_EXEC;;2728\n");
if (tmp___6) {
        printf("\nSTMT_EXEC;;2729\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    printf("\nSTMT_EXEC;;2732\n");
if (!dot) {
      printf("\nSTMT_EXEC;;2733\n");
tm->tm_sec = 0;
    } else {
      printf("\nSTMT_EXEC;;2735\n");
dot++;
      printf("\nSTMT_EXEC;;2736\n");
if (!((unsigned int)*(dot + 0) - 48U <= 9U)) {
        printf("\nSTMT_EXEC;;2737\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      } else {
        printf("\nSTMT_EXEC;;2739\n");
if (!((unsigned int)*(dot + 1) - 48U <= 9U)) {
          printf("\nSTMT_EXEC;;2740\n");
printf("\nFUNC_RETURN;;\n");
return (1);
        }
      }
      printf("\nSTMT_EXEC;;2743\n");
seconds =
          (10 * (int)((int const) * (dot + 0) - 48) + (int)*(dot + 1)) - 48;
      printf("\nSTMT_EXEC;;2745\n");
tm->tm_sec = seconds;
    }
    printf("\nSTMT_EXEC;;2747\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool posixtime(time_t *p, char const *s, unsigned int syntax_bits) {
  printf("\nFUNC_CALL;posixtime(time_t *,const char *,unsigned int);\n");
printf("\nSTMT_EXEC;;2751\n");
struct tm tm0;
  printf("\nSTMT_EXEC;;2752\n");
struct tm tm1;
  printf("\nSTMT_EXEC;;2753\n");
struct tm const *tm;
  printf("\nSTMT_EXEC;;2754\n");
time_t t;
  printf("\nSTMT_EXEC;;2755\n");
int tmp;
  printf("\nSTMT_EXEC;;2756\n");
time_t dummy;
  printf("\nSTMT_EXEC;;2757\n");
char buf___1[16];
  printf("\nSTMT_EXEC;;2758\n");
char *b;
  printf("\nSTMT_EXEC;;2759\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;2760\n");
_Bool tmp___1;
  {
    printf("\nSTMT_EXEC;;2762\n");
tmp = posix_time_parse(&tm0, s, syntax_bits);
    printf("\nSTMT_EXEC;;2763\n");
if (tmp) {
      printf("\nSTMT_EXEC;;2764\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
    }
    printf("\nSTMT_EXEC;;2766\n");
tm1 = tm0;
    printf("\nSTMT_EXEC;;2767\n");
tm1.tm_isdst = -1;
    printf("\nSTMT_EXEC;;2768\n");
printf("\nFUNC_CALL;mktime(struct tm *);\n");
t = mktime(&tm1);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;2769\n");
if (t != -1L) {
      printf("\nSTMT_EXEC;;2770\n");
tm = (struct tm const *)(&tm1);
    } else {
      printf("\nSTMT_EXEC;;2772\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tm = (struct tm const *)localtime((time_t const *)(&t));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2773\n");
if (!tm) {
        printf("\nSTMT_EXEC;;2774\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
      }
    }
    printf("\nSTMT_EXEC;;2777\n");
if ((((((tm0.tm_year ^ (int)tm->tm_year) | (tm0.tm_mon ^ (int)tm->tm_mon)) |
           (tm0.tm_mday ^ (int)tm->tm_mday)) |
          (tm0.tm_hour ^ (int)tm->tm_hour)) |
         (tm0.tm_min ^ (int)tm->tm_min)) |
        (tm0.tm_sec ^ (int)tm->tm_sec)) {
      printf("\nSTMT_EXEC;;2782\n");
if (tm0.tm_sec != 60) {
        printf("\nSTMT_EXEC;;2783\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
      }
      printf("\nSTMT_EXEC;;2785\n");
printf("\nFUNC_CALL;stpcpy(char *__restrict,const char *__restrict);\n");
tmp___0 = stpcpy(buf___1, s);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2786\n");
b = tmp___0;
      printf("\nSTMT_EXEC;;2787\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy(b - 2, "59");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2788\n");
tmp___1 = posixtime(&dummy, (char const *)(buf___1), syntax_bits);
      printf("\nSTMT_EXEC;;2789\n");
if (!tmp___1) {
        printf("\nSTMT_EXEC;;2790\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
      }
    }
    printf("\nSTMT_EXEC;;2793\n");
*p = t;
    printf("\nSTMT_EXEC;;2794\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
_Bool parse_datetime(struct timespec *result, char const *p,
                     struct timespec const *now);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     setenv)(char const *__name,
                                             char const *__value,
                                             int __replace);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     unsetenv)(char const *__name);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) abs)(int __x)
    __attribute__((__const__));
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
static unsigned char to_uchar___0(char ch) {
  printf("\nFUNC_CALL;to_uchar___0(char);\n");
{ printf("\nSTMT_EXEC;;2837\n");
printf("\nFUNC_RETURN;;\n");
return ((unsigned char)ch); }
printf("\nFUNC_RETURN;;\n");
}
static int yylex(union YYSTYPE *lvalp, parser_control *pc);
static int yyerror(parser_control const *pc __attribute__((__unused__)),
                   char const *s __attribute__((__unused__)));
static long time_zone_hhmm(parser_control *pc, textint s, long mm);
static void digits_to_date_time(parser_control *pc, textint text_int) {
  printf("\nFUNC_CALL;digits_to_date_time(parser_control *,textint);\n");
{
    printf("\nSTMT_EXEC;;2845\n");
if (pc->dates_seen) {
      printf("\nSTMT_EXEC;;2846\n");
if (!pc->year.digits) {
        printf("\nSTMT_EXEC;;2847\n");
if (!pc->rels_seen) {
          printf("\nSTMT_EXEC;;2848\n");
if (pc->times_seen) {
            printf("\nSTMT_EXEC;;2849\n");
pc->year = text_int;
          } else {
            printf("\nSTMT_EXEC;;2851\n");
if (2UL < text_int.digits) {
              printf("\nSTMT_EXEC;;2852\n");
pc->year = text_int;
            } else {
              printf("\nSTMT_EXEC;;2854\n");
goto _L___1;
            }
          }
        } else {
          printf("\nSTMT_EXEC;;2858\n");
goto _L___1;
        }
      } else {
        printf("\nSTMT_EXEC;;2861\n");
goto _L___1;
      }
    } else {
    _L___1:
      {
printf("\nSTMT_EXEC;;2865\n");
if (4UL < text_int.digits) {
        printf("\nSTMT_EXEC;;2866\n");
(pc->dates_seen)++;
        printf("\nSTMT_EXEC;;2867\n");
pc->day = text_int.value % 100L;
        printf("\nSTMT_EXEC;;2868\n");
pc->month = (text_int.value / 100L) % 100L;
        printf("\nSTMT_EXEC;;2869\n");
pc->year.value = text_int.value / 10000L;
        printf("\nSTMT_EXEC;;2870\n");
pc->year.digits = text_int.digits - 4UL;
      } else {
        printf("\nSTMT_EXEC;;2872\n");
(pc->times_seen)++;
        printf("\nSTMT_EXEC;;2873\n");
if (text_int.digits <= 2UL) {
          printf("\nSTMT_EXEC;;2874\n");
pc->hour = text_int.value;
          printf("\nSTMT_EXEC;;2875\n");
pc->minutes = 0L;
        } else {
          printf("\nSTMT_EXEC;;2877\n");
pc->hour = text_int.value / 100L;
          printf("\nSTMT_EXEC;;2878\n");
pc->minutes = text_int.value % 100L;
        }
        printf("\nSTMT_EXEC;;2880\n");
pc->seconds.tv_sec = (__time_t)0;
        printf("\nSTMT_EXEC;;2881\n");
pc->seconds.tv_nsec = (__syscall_slong_t)0;
        printf("\nSTMT_EXEC;;2882\n");
pc->meridian = 2;
      }
}

    }
    printf("\nSTMT_EXEC;;2885\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void apply_relative_time(parser_control *pc, relative_time rel,
                                int factor) {
  printf("\nFUNC_CALL;apply_relative_time(parser_control *,relative_time,int);\n");
{
    printf("\nSTMT_EXEC;;2891\n");
pc->rel.ns += (long)factor * rel.ns;
    printf("\nSTMT_EXEC;;2892\n");
pc->rel.seconds += (long_time_t)factor * rel.seconds;
    printf("\nSTMT_EXEC;;2893\n");
pc->rel.minutes += (long)factor * rel.minutes;
    printf("\nSTMT_EXEC;;2894\n");
pc->rel.hour += (long)factor * rel.hour;
    printf("\nSTMT_EXEC;;2895\n");
pc->rel.day += (long)factor * rel.day;
    printf("\nSTMT_EXEC;;2896\n");
pc->rel.month += (long)factor * rel.month;
    printf("\nSTMT_EXEC;;2897\n");
pc->rel.year += (long)factor * rel.year;
    printf("\nSTMT_EXEC;;2898\n");
pc->rels_seen = (_Bool)1;
    printf("\nSTMT_EXEC;;2899\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void set_hhmmss(parser_control *pc, long hour, long minutes, time_t sec,
                       long nsec) {
  printf("\nFUNC_CALL;set_hhmmss(parser_control *,long,long,time_t,long);\n");
{
    printf("\nSTMT_EXEC;;2905\n");
pc->hour = hour;
    printf("\nSTMT_EXEC;;2906\n");
pc->minutes = minutes;
    printf("\nSTMT_EXEC;;2907\n");
pc->seconds.tv_sec = sec;
    printf("\nSTMT_EXEC;;2908\n");
pc->seconds.tv_nsec = nsec;
    printf("\nSTMT_EXEC;;2909\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static yytype_uint8 const yytranslate[278] = {
    (yytype_uint8 const)0,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)26,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)27,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)25, (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)23, (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)24, (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)2,  (yytype_uint8 const)2,
    (yytype_uint8 const)2,  (yytype_uint8 const)1,  (yytype_uint8 const)2,
    (yytype_uint8 const)3,  (yytype_uint8 const)4,  (yytype_uint8 const)5,
    (yytype_uint8 const)6,  (yytype_uint8 const)7,  (yytype_uint8 const)8,
    (yytype_uint8 const)9,  (yytype_uint8 const)10, (yytype_uint8 const)11,
    (yytype_uint8 const)12, (yytype_uint8 const)13, (yytype_uint8 const)14,
    (yytype_uint8 const)15, (yytype_uint8 const)16, (yytype_uint8 const)17,
    (yytype_uint8 const)18, (yytype_uint8 const)19, (yytype_uint8 const)20,
    (yytype_uint8 const)21, (yytype_uint8 const)22};
static yytype_uint8 const yyr1[92] = {
    (yytype_uint8 const)0,  (yytype_uint8 const)28, (yytype_uint8 const)29,
    (yytype_uint8 const)29, (yytype_uint8 const)30, (yytype_uint8 const)31,
    (yytype_uint8 const)31, (yytype_uint8 const)32, (yytype_uint8 const)32,
    (yytype_uint8 const)32, (yytype_uint8 const)32, (yytype_uint8 const)32,
    (yytype_uint8 const)32, (yytype_uint8 const)32, (yytype_uint8 const)32,
    (yytype_uint8 const)32, (yytype_uint8 const)33, (yytype_uint8 const)34,
    (yytype_uint8 const)35, (yytype_uint8 const)35, (yytype_uint8 const)35,
    (yytype_uint8 const)35, (yytype_uint8 const)36, (yytype_uint8 const)36,
    (yytype_uint8 const)36, (yytype_uint8 const)37, (yytype_uint8 const)37,
    (yytype_uint8 const)38, (yytype_uint8 const)39, (yytype_uint8 const)39,
    (yytype_uint8 const)40, (yytype_uint8 const)40, (yytype_uint8 const)40,
    (yytype_uint8 const)40, (yytype_uint8 const)40, (yytype_uint8 const)40,
    (yytype_uint8 const)40, (yytype_uint8 const)41, (yytype_uint8 const)41,
    (yytype_uint8 const)41, (yytype_uint8 const)41, (yytype_uint8 const)42,
    (yytype_uint8 const)42, (yytype_uint8 const)42, (yytype_uint8 const)42,
    (yytype_uint8 const)42, (yytype_uint8 const)42, (yytype_uint8 const)42,
    (yytype_uint8 const)42, (yytype_uint8 const)42, (yytype_uint8 const)43,
    (yytype_uint8 const)44, (yytype_uint8 const)44, (yytype_uint8 const)44,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)45, (yytype_uint8 const)45, (yytype_uint8 const)45,
    (yytype_uint8 const)46, (yytype_uint8 const)46, (yytype_uint8 const)46,
    (yytype_uint8 const)46, (yytype_uint8 const)46, (yytype_uint8 const)46,
    (yytype_uint8 const)47, (yytype_uint8 const)48, (yytype_uint8 const)48,
    (yytype_uint8 const)49, (yytype_uint8 const)49, (yytype_uint8 const)50,
    (yytype_uint8 const)50, (yytype_uint8 const)51, (yytype_uint8 const)52,
    (yytype_uint8 const)53, (yytype_uint8 const)53};
static yytype_uint8 const yyr2[92] = {
    (yytype_uint8 const)0, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)2, (yytype_uint8 const)0,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)3,
    (yytype_uint8 const)2, (yytype_uint8 const)4, (yytype_uint8 const)6,
    (yytype_uint8 const)1, (yytype_uint8 const)2, (yytype_uint8 const)4,
    (yytype_uint8 const)6, (yytype_uint8 const)0, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)3, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)3,
    (yytype_uint8 const)5, (yytype_uint8 const)3, (yytype_uint8 const)3,
    (yytype_uint8 const)2, (yytype_uint8 const)4, (yytype_uint8 const)2,
    (yytype_uint8 const)3, (yytype_uint8 const)1, (yytype_uint8 const)3,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)2,
    (yytype_uint8 const)2, (yytype_uint8 const)2, (yytype_uint8 const)2,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)1,
    (yytype_uint8 const)1, (yytype_uint8 const)1, (yytype_uint8 const)2,
    (yytype_uint8 const)0, (yytype_uint8 const)2};
static yytype_uint8 const yydefact[114] = {
    (yytype_uint8 const)5,  (yytype_uint8 const)0,  (yytype_uint8 const)0,
    (yytype_uint8 const)2,  (yytype_uint8 const)3,  (yytype_uint8 const)85,
    (yytype_uint8 const)87, (yytype_uint8 const)84, (yytype_uint8 const)86,
    (yytype_uint8 const)4,  (yytype_uint8 const)82, (yytype_uint8 const)83,
    (yytype_uint8 const)1,  (yytype_uint8 const)56, (yytype_uint8 const)59,
    (yytype_uint8 const)65, (yytype_uint8 const)68, (yytype_uint8 const)73,
    (yytype_uint8 const)62, (yytype_uint8 const)81, (yytype_uint8 const)37,
    (yytype_uint8 const)35, (yytype_uint8 const)28, (yytype_uint8 const)0,
    (yytype_uint8 const)0,  (yytype_uint8 const)30, (yytype_uint8 const)0,
    (yytype_uint8 const)88, (yytype_uint8 const)0,  (yytype_uint8 const)0,
    (yytype_uint8 const)31, (yytype_uint8 const)6,  (yytype_uint8 const)7,
    (yytype_uint8 const)16, (yytype_uint8 const)8,  (yytype_uint8 const)21,
    (yytype_uint8 const)9,  (yytype_uint8 const)10, (yytype_uint8 const)12,
    (yytype_uint8 const)11, (yytype_uint8 const)49, (yytype_uint8 const)13,
    (yytype_uint8 const)52, (yytype_uint8 const)74, (yytype_uint8 const)53,
    (yytype_uint8 const)14, (yytype_uint8 const)15, (yytype_uint8 const)38,
    (yytype_uint8 const)29, (yytype_uint8 const)0,  (yytype_uint8 const)45,
    (yytype_uint8 const)54, (yytype_uint8 const)57, (yytype_uint8 const)63,
    (yytype_uint8 const)66, (yytype_uint8 const)69, (yytype_uint8 const)60,
    (yytype_uint8 const)39, (yytype_uint8 const)36, (yytype_uint8 const)90,
    (yytype_uint8 const)32, (yytype_uint8 const)75, (yytype_uint8 const)76,
    (yytype_uint8 const)78, (yytype_uint8 const)79, (yytype_uint8 const)80,
    (yytype_uint8 const)77, (yytype_uint8 const)55, (yytype_uint8 const)58,
    (yytype_uint8 const)64, (yytype_uint8 const)67, (yytype_uint8 const)70,
    (yytype_uint8 const)61, (yytype_uint8 const)40, (yytype_uint8 const)18,
    (yytype_uint8 const)47, (yytype_uint8 const)90, (yytype_uint8 const)0,
    (yytype_uint8 const)0,  (yytype_uint8 const)22, (yytype_uint8 const)89,
    (yytype_uint8 const)71, (yytype_uint8 const)72, (yytype_uint8 const)33,
    (yytype_uint8 const)0,  (yytype_uint8 const)51, (yytype_uint8 const)44,
    (yytype_uint8 const)0,  (yytype_uint8 const)0,  (yytype_uint8 const)34,
    (yytype_uint8 const)43, (yytype_uint8 const)48, (yytype_uint8 const)50,
    (yytype_uint8 const)27, (yytype_uint8 const)25, (yytype_uint8 const)41,
    (yytype_uint8 const)0,  (yytype_uint8 const)17, (yytype_uint8 const)46,
    (yytype_uint8 const)91, (yytype_uint8 const)19, (yytype_uint8 const)90,
    (yytype_uint8 const)0,  (yytype_uint8 const)23, (yytype_uint8 const)26,
    (yytype_uint8 const)0,  (yytype_uint8 const)0,  (yytype_uint8 const)25,
    (yytype_uint8 const)42, (yytype_uint8 const)25, (yytype_uint8 const)20,
    (yytype_uint8 const)24, (yytype_uint8 const)0,  (yytype_uint8 const)25};
static yytype_int8 const yydefgoto[26] = {
    (yytype_int8 const)-1,  (yytype_int8 const)2,   (yytype_int8 const)3,
    (yytype_int8 const)4,   (yytype_int8 const)31,  (yytype_int8 const)32,
    (yytype_int8 const)33,  (yytype_int8 const)34,  (yytype_int8 const)35,
    (yytype_int8 const)103, (yytype_int8 const)104, (yytype_int8 const)36,
    (yytype_int8 const)37,  (yytype_int8 const)38,  (yytype_int8 const)39,
    (yytype_int8 const)40,  (yytype_int8 const)41,  (yytype_int8 const)42,
    (yytype_int8 const)43,  (yytype_int8 const)44,  (yytype_int8 const)9,
    (yytype_int8 const)10,  (yytype_int8 const)11,  (yytype_int8 const)45,
    (yytype_int8 const)46,  (yytype_int8 const)93};
static yytype_int8 const yypact[114] = {
    (yytype_int8 const)38,  (yytype_int8 const)27,  (yytype_int8 const)77,
    (yytype_int8 const)-93, (yytype_int8 const)46,  (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)62,
    (yytype_int8 const)-93, (yytype_int8 const)82,  (yytype_int8 const)-3,
    (yytype_int8 const)66,  (yytype_int8 const)3,   (yytype_int8 const)74,
    (yytype_int8 const)-4,  (yytype_int8 const)83,  (yytype_int8 const)84,
    (yytype_int8 const)75,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)71,  (yytype_int8 const)-93,
    (yytype_int8 const)93,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)78,  (yytype_int8 const)72,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)25,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)21,  (yytype_int8 const)19,  (yytype_int8 const)79,
    (yytype_int8 const)80,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)81,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)85,  (yytype_int8 const)86,  (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-6,  (yytype_int8 const)76,
    (yytype_int8 const)17,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)87,
    (yytype_int8 const)69,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)88,  (yytype_int8 const)89,  (yytype_int8 const)-1,
    (yytype_int8 const)-93, (yytype_int8 const)18,  (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)69,  (yytype_int8 const)91};
static yytype_int8 const yypgoto[26] = {
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)20,
    (yytype_int8 const)-68, (yytype_int8 const)-27, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)60,  (yytype_int8 const)-93, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)-92, (yytype_int8 const)-93,
    (yytype_int8 const)-93, (yytype_int8 const)43};
static yytype_uint8 const yytable[113] = {
    (yytype_uint8 const)79,  (yytype_uint8 const)67,  (yytype_uint8 const)68,
    (yytype_uint8 const)69,  (yytype_uint8 const)70,  (yytype_uint8 const)71,
    (yytype_uint8 const)72,  (yytype_uint8 const)58,  (yytype_uint8 const)73,
    (yytype_uint8 const)100, (yytype_uint8 const)107, (yytype_uint8 const)74,
    (yytype_uint8 const)75,  (yytype_uint8 const)101, (yytype_uint8 const)110,
    (yytype_uint8 const)76,  (yytype_uint8 const)49,  (yytype_uint8 const)50,
    (yytype_uint8 const)101, (yytype_uint8 const)102, (yytype_uint8 const)113,
    (yytype_uint8 const)77,  (yytype_uint8 const)59,  (yytype_uint8 const)78,
    (yytype_uint8 const)61,  (yytype_uint8 const)62,  (yytype_uint8 const)63,
    (yytype_uint8 const)64,  (yytype_uint8 const)65,  (yytype_uint8 const)66,
    (yytype_uint8 const)61,  (yytype_uint8 const)62,  (yytype_uint8 const)63,
    (yytype_uint8 const)64,  (yytype_uint8 const)65,  (yytype_uint8 const)66,
    (yytype_uint8 const)101, (yytype_uint8 const)101, (yytype_uint8 const)92,
    (yytype_uint8 const)111, (yytype_uint8 const)90,  (yytype_uint8 const)91,
    (yytype_uint8 const)106, (yytype_uint8 const)112, (yytype_uint8 const)88,
    (yytype_uint8 const)111, (yytype_uint8 const)5,   (yytype_uint8 const)6,
    (yytype_uint8 const)7,   (yytype_uint8 const)8,   (yytype_uint8 const)88,
    (yytype_uint8 const)13,  (yytype_uint8 const)14,  (yytype_uint8 const)15,
    (yytype_uint8 const)16,  (yytype_uint8 const)17,  (yytype_uint8 const)18,
    (yytype_uint8 const)19,  (yytype_uint8 const)20,  (yytype_uint8 const)21,
    (yytype_uint8 const)22,  (yytype_uint8 const)1,   (yytype_uint8 const)23,
    (yytype_uint8 const)24,  (yytype_uint8 const)25,  (yytype_uint8 const)26,
    (yytype_uint8 const)27,  (yytype_uint8 const)28,  (yytype_uint8 const)29,
    (yytype_uint8 const)79,  (yytype_uint8 const)30,  (yytype_uint8 const)51,
    (yytype_uint8 const)52,  (yytype_uint8 const)53,  (yytype_uint8 const)54,
    (yytype_uint8 const)55,  (yytype_uint8 const)56,  (yytype_uint8 const)12,
    (yytype_uint8 const)57,  (yytype_uint8 const)61,  (yytype_uint8 const)62,
    (yytype_uint8 const)63,  (yytype_uint8 const)64,  (yytype_uint8 const)65,
    (yytype_uint8 const)66,  (yytype_uint8 const)60,  (yytype_uint8 const)48,
    (yytype_uint8 const)80,  (yytype_uint8 const)47,  (yytype_uint8 const)6,
    (yytype_uint8 const)83,  (yytype_uint8 const)8,   (yytype_uint8 const)81,
    (yytype_uint8 const)82,  (yytype_uint8 const)26,  (yytype_uint8 const)84,
    (yytype_uint8 const)85,  (yytype_uint8 const)86,  (yytype_uint8 const)87,
    (yytype_uint8 const)94,  (yytype_uint8 const)95,  (yytype_uint8 const)96,
    (yytype_uint8 const)89,  (yytype_uint8 const)105, (yytype_uint8 const)97,
    (yytype_uint8 const)98,  (yytype_uint8 const)99,  (yytype_uint8 const)0,
    (yytype_uint8 const)108, (yytype_uint8 const)109, (yytype_uint8 const)101,
    (yytype_uint8 const)0,   (yytype_uint8 const)88};
static yytype_int8 const yycheck[113] = {
    (yytype_int8 const)27,  (yytype_int8 const)5,   (yytype_int8 const)6,
    (yytype_int8 const)7,   (yytype_int8 const)8,   (yytype_int8 const)9,
    (yytype_int8 const)10,  (yytype_int8 const)4,   (yytype_int8 const)12,
    (yytype_int8 const)15,  (yytype_int8 const)102, (yytype_int8 const)15,
    (yytype_int8 const)16,  (yytype_int8 const)19,  (yytype_int8 const)15,
    (yytype_int8 const)19,  (yytype_int8 const)19,  (yytype_int8 const)20,
    (yytype_int8 const)19,  (yytype_int8 const)25,  (yytype_int8 const)112,
    (yytype_int8 const)25,  (yytype_int8 const)19,  (yytype_int8 const)27,
    (yytype_int8 const)5,   (yytype_int8 const)6,   (yytype_int8 const)7,
    (yytype_int8 const)8,   (yytype_int8 const)9,   (yytype_int8 const)10,
    (yytype_int8 const)5,   (yytype_int8 const)6,   (yytype_int8 const)7,
    (yytype_int8 const)8,   (yytype_int8 const)9,   (yytype_int8 const)10,
    (yytype_int8 const)19,  (yytype_int8 const)19,  (yytype_int8 const)19,
    (yytype_int8 const)107, (yytype_int8 const)19,  (yytype_int8 const)20,
    (yytype_int8 const)25,  (yytype_int8 const)25,  (yytype_int8 const)25,
    (yytype_int8 const)113, (yytype_int8 const)19,  (yytype_int8 const)20,
    (yytype_int8 const)21,  (yytype_int8 const)22,  (yytype_int8 const)25,
    (yytype_int8 const)5,   (yytype_int8 const)6,   (yytype_int8 const)7,
    (yytype_int8 const)8,   (yytype_int8 const)9,   (yytype_int8 const)10,
    (yytype_int8 const)11,  (yytype_int8 const)12,  (yytype_int8 const)13,
    (yytype_int8 const)14,  (yytype_int8 const)23,  (yytype_int8 const)16,
    (yytype_int8 const)17,  (yytype_int8 const)18,  (yytype_int8 const)19,
    (yytype_int8 const)20,  (yytype_int8 const)21,  (yytype_int8 const)22,
    (yytype_int8 const)96,  (yytype_int8 const)24,  (yytype_int8 const)5,
    (yytype_int8 const)6,   (yytype_int8 const)7,   (yytype_int8 const)8,
    (yytype_int8 const)9,   (yytype_int8 const)10,  (yytype_int8 const)0,
    (yytype_int8 const)12,  (yytype_int8 const)5,   (yytype_int8 const)6,
    (yytype_int8 const)7,   (yytype_int8 const)8,   (yytype_int8 const)9,
    (yytype_int8 const)10,  (yytype_int8 const)25,  (yytype_int8 const)4,
    (yytype_int8 const)27,  (yytype_int8 const)26,  (yytype_int8 const)20,
    (yytype_int8 const)30,  (yytype_int8 const)22,  (yytype_int8 const)9,
    (yytype_int8 const)9,   (yytype_int8 const)19,  (yytype_int8 const)24,
    (yytype_int8 const)3,   (yytype_int8 const)19,  (yytype_int8 const)26,
    (yytype_int8 const)20,  (yytype_int8 const)20,  (yytype_int8 const)20,
    (yytype_int8 const)59,  (yytype_int8 const)27,  (yytype_int8 const)84,
    (yytype_int8 const)20,  (yytype_int8 const)20,  (yytype_int8 const)-1,
    (yytype_int8 const)20,  (yytype_int8 const)20,  (yytype_int8 const)19,
    (yytype_int8 const)-1,  (yytype_int8 const)25};
static yytype_uint8 const yystos[114] = {
    (yytype_uint8 const)0,  (yytype_uint8 const)23, (yytype_uint8 const)29,
    (yytype_uint8 const)30, (yytype_uint8 const)31, (yytype_uint8 const)19,
    (yytype_uint8 const)20, (yytype_uint8 const)21, (yytype_uint8 const)22,
    (yytype_uint8 const)48, (yytype_uint8 const)49, (yytype_uint8 const)50,
    (yytype_uint8 const)0,  (yytype_uint8 const)5,  (yytype_uint8 const)6,
    (yytype_uint8 const)7,  (yytype_uint8 const)8,  (yytype_uint8 const)9,
    (yytype_uint8 const)10, (yytype_uint8 const)11, (yytype_uint8 const)12,
    (yytype_uint8 const)13, (yytype_uint8 const)14, (yytype_uint8 const)16,
    (yytype_uint8 const)17, (yytype_uint8 const)18, (yytype_uint8 const)19,
    (yytype_uint8 const)20, (yytype_uint8 const)21, (yytype_uint8 const)22,
    (yytype_uint8 const)24, (yytype_uint8 const)32, (yytype_uint8 const)33,
    (yytype_uint8 const)34, (yytype_uint8 const)35, (yytype_uint8 const)36,
    (yytype_uint8 const)39, (yytype_uint8 const)40, (yytype_uint8 const)41,
    (yytype_uint8 const)42, (yytype_uint8 const)43, (yytype_uint8 const)44,
    (yytype_uint8 const)45, (yytype_uint8 const)46, (yytype_uint8 const)47,
    (yytype_uint8 const)51, (yytype_uint8 const)52, (yytype_uint8 const)26,
    (yytype_uint8 const)4,  (yytype_uint8 const)19, (yytype_uint8 const)20,
    (yytype_uint8 const)5,  (yytype_uint8 const)6,  (yytype_uint8 const)7,
    (yytype_uint8 const)8,  (yytype_uint8 const)9,  (yytype_uint8 const)10,
    (yytype_uint8 const)12, (yytype_uint8 const)4,  (yytype_uint8 const)19,
    (yytype_uint8 const)46, (yytype_uint8 const)5,  (yytype_uint8 const)6,
    (yytype_uint8 const)7,  (yytype_uint8 const)8,  (yytype_uint8 const)9,
    (yytype_uint8 const)10, (yytype_uint8 const)5,  (yytype_uint8 const)6,
    (yytype_uint8 const)7,  (yytype_uint8 const)8,  (yytype_uint8 const)9,
    (yytype_uint8 const)10, (yytype_uint8 const)12, (yytype_uint8 const)15,
    (yytype_uint8 const)16, (yytype_uint8 const)19, (yytype_uint8 const)25,
    (yytype_uint8 const)27, (yytype_uint8 const)38, (yytype_uint8 const)46,
    (yytype_uint8 const)9,  (yytype_uint8 const)9,  (yytype_uint8 const)46,
    (yytype_uint8 const)24, (yytype_uint8 const)3,  (yytype_uint8 const)19,
    (yytype_uint8 const)26, (yytype_uint8 const)25, (yytype_uint8 const)53,
    (yytype_uint8 const)19, (yytype_uint8 const)20, (yytype_uint8 const)19,
    (yytype_uint8 const)53, (yytype_uint8 const)20, (yytype_uint8 const)20,
    (yytype_uint8 const)20, (yytype_uint8 const)36, (yytype_uint8 const)20,
    (yytype_uint8 const)20, (yytype_uint8 const)15, (yytype_uint8 const)19,
    (yytype_uint8 const)25, (yytype_uint8 const)37, (yytype_uint8 const)38,
    (yytype_uint8 const)27, (yytype_uint8 const)25, (yytype_uint8 const)50,
    (yytype_uint8 const)20, (yytype_uint8 const)20, (yytype_uint8 const)15,
    (yytype_uint8 const)37, (yytype_uint8 const)25, (yytype_uint8 const)50};
static void yydestruct(char const *yymsg, int yytype, YYSTYPE *yyvaluep,
                       parser_control *pc) {
  printf("\nFUNC_CALL;yydestruct(const char *,int,YYSTYPE *,parser_control *);\n");
{
    printf("\nSTMT_EXEC;;3288\n");
if (!yymsg) {
      printf("\nSTMT_EXEC;;3289\n");
yymsg = "Deleting";
    }
    printf("\nSTMT_EXEC;;3291\n");
goto switch_default;
  switch_default:
    {
printf("\nSTMT_EXEC;;3293\n");
goto switch_break;
}

  switch_break:;
    printf("\nSTMT_EXEC;;3295\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int yyparse(parser_control *pc);
int yyparse(parser_control *pc) {
  printf("\nFUNC_CALL;yyparse(parser_control *);\n");
printf("\nSTMT_EXEC;;3300\n");
int yychar;
  printf("\nSTMT_EXEC;;3301\n");
YYSTYPE yylval;
  printf("\nSTMT_EXEC;;3302\n");
int yynerrs;
  printf("\nSTMT_EXEC;;3303\n");
int yystate;
  printf("\nSTMT_EXEC;;3304\n");
int yyerrstatus;
  printf("\nSTMT_EXEC;;3305\n");
yytype_int16 yyssa[20];
  printf("\nSTMT_EXEC;;3306\n");
yytype_int16 *yyss;
  printf("\nSTMT_EXEC;;3307\n");
yytype_int16 *yyssp;
  printf("\nSTMT_EXEC;;3308\n");
YYSTYPE yyvsa[20];
  printf("\nSTMT_EXEC;;3309\n");
YYSTYPE *yyvs;
  printf("\nSTMT_EXEC;;3310\n");
YYSTYPE *yyvsp;
  printf("\nSTMT_EXEC;;3311\n");
unsigned long yystacksize;
  printf("\nSTMT_EXEC;;3312\n");
int yyn;
  printf("\nSTMT_EXEC;;3313\n");
int yyresult;
  printf("\nSTMT_EXEC;;3314\n");
int yytoken;
  printf("\nSTMT_EXEC;;3315\n");
YYSTYPE yyval;
  printf("\nSTMT_EXEC;;3316\n");
int yylen;
  printf("\nSTMT_EXEC;;3317\n");
unsigned long yysize;
  printf("\nSTMT_EXEC;;3318\n");
yytype_int16 *yyss1;
  printf("\nSTMT_EXEC;;3319\n");
union yyalloc *yyptr;
  printf("\nSTMT_EXEC;;3320\n");
union yyalloc *tmp;
  printf("\nSTMT_EXEC;;3321\n");
unsigned long yynewbytes;
  printf("\nSTMT_EXEC;;3322\n");
unsigned long yynewbytes___0;
  printf("\nSTMT_EXEC;;3323\n");
long tmp___0;
  printf("\nSTMT_EXEC;;3324\n");
relative_time __constr_expr_13;
  printf("\nSTMT_EXEC;;3325\n");
relative_time __constr_expr_14;
  printf("\nSTMT_EXEC;;3326\n");
relative_time __constr_expr_15;
  printf("\nSTMT_EXEC;;3327\n");
relative_time __constr_expr_16;
  printf("\nSTMT_EXEC;;3328\n");
relative_time __constr_expr_17;
  printf("\nSTMT_EXEC;;3329\n");
relative_time __constr_expr_18;
  printf("\nSTMT_EXEC;;3330\n");
relative_time __constr_expr_19;
  printf("\nSTMT_EXEC;;3331\n");
relative_time __constr_expr_20;
  printf("\nSTMT_EXEC;;3332\n");
relative_time __constr_expr_21;
  printf("\nSTMT_EXEC;;3333\n");
relative_time __constr_expr_22;
  printf("\nSTMT_EXEC;;3334\n");
relative_time __constr_expr_23;
  printf("\nSTMT_EXEC;;3335\n");
relative_time __constr_expr_24;
  printf("\nSTMT_EXEC;;3336\n");
relative_time __constr_expr_25;
  printf("\nSTMT_EXEC;;3337\n");
relative_time __constr_expr_26;
  printf("\nSTMT_EXEC;;3338\n");
relative_time __constr_expr_27;
  printf("\nSTMT_EXEC;;3339\n");
relative_time __constr_expr_28;
  printf("\nSTMT_EXEC;;3340\n");
relative_time __constr_expr_29;
  printf("\nSTMT_EXEC;;3341\n");
relative_time __constr_expr_30;
  printf("\nSTMT_EXEC;;3342\n");
relative_time __constr_expr_31;
  printf("\nSTMT_EXEC;;3343\n");
relative_time __constr_expr_32;
  printf("\nSTMT_EXEC;;3344\n");
relative_time __constr_expr_33;
  printf("\nSTMT_EXEC;;3345\n");
relative_time __constr_expr_34;
  printf("\nSTMT_EXEC;;3346\n");
relative_time __constr_expr_35;
  printf("\nSTMT_EXEC;;3347\n");
relative_time __constr_expr_36;
  printf("\nSTMT_EXEC;;3348\n");
relative_time __constr_expr_37;
  printf("\nSTMT_EXEC;;3349\n");
relative_time __constr_expr_38;
  printf("\nSTMT_EXEC;;3350\n");
relative_time __constr_expr_39;
  {
    printf("\nSTMT_EXEC;;3352\n");
yylen = 0;
    printf("\nSTMT_EXEC;;3353\n");
yytoken = 0;
    printf("\nSTMT_EXEC;;3354\n");
yyss = yyssa;
    printf("\nSTMT_EXEC;;3355\n");
yyvs = yyvsa;
    printf("\nSTMT_EXEC;;3356\n");
yystacksize = 20UL;
    printf("\nSTMT_EXEC;;3357\n");
yystate = 0;
    printf("\nSTMT_EXEC;;3358\n");
yyerrstatus = 0;
    printf("\nSTMT_EXEC;;3359\n");
yynerrs = 0;
    printf("\nSTMT_EXEC;;3360\n");
yychar = -2;
    printf("\nSTMT_EXEC;;3361\n");
yyssp = yyss;
    printf("\nSTMT_EXEC;;3362\n");
yyvsp = yyvs;
    printf("\nSTMT_EXEC;;3363\n");
goto yysetstate;
  yynewstate:
    {
printf("\nSTMT_EXEC;;3365\n");
yyssp++;
}

  yysetstate:
    {
printf("\nSTMT_EXEC;;3367\n");
*yyssp = (yytype_int16)yystate;
}

    printf("\nSTMT_EXEC;;3368\n");
if ((unsigned long)((yyss + yystacksize) - 1) <= (unsigned long)yyssp) {
      printf("\nSTMT_EXEC;;3369\n");
yysize = (unsigned long)((yyssp - yyss) + 1L);
      printf("\nSTMT_EXEC;;3370\n");
if (20UL <= yystacksize) {
        printf("\nSTMT_EXEC;;3371\n");
goto yyexhaustedlab;
      }
      printf("\nSTMT_EXEC;;3373\n");
yystacksize *= 2UL;
      printf("\nSTMT_EXEC;;3374\n");
if (20UL < yystacksize) {
        printf("\nSTMT_EXEC;;3375\n");
yystacksize = 20UL;
      }
      printf("\nSTMT_EXEC;;3377\n");
yyss1 = yyss;
      printf("\nSTMT_EXEC;;3378\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
tmp = (union yyalloc *)malloc(
          yystacksize * (sizeof(yytype_int16) + sizeof(YYSTYPE)) +
          (sizeof(union yyalloc) - 1UL));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;3381\n");
yyptr = tmp;
      printf("\nSTMT_EXEC;;3382\n");
if (!yyptr) {
        printf("\nSTMT_EXEC;;3383\n");
goto yyexhaustedlab;
      }
      printf("\nSTMT_EXEC;;3385\n");
while (1) {
        printf("\nSTMT_EXEC;;3386\n");
printf("\nFUNC_CALL;__builtin_memcpy(void *,const void *,unsigned long);\n");
__builtin_memcpy((void *)(&yyptr->yyss_alloc), (void const *)yyss,
                         yysize * sizeof(*yyss));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;3388\n");
yyss = &yyptr->yyss_alloc;
        printf("\nSTMT_EXEC;;3389\n");
yynewbytes =
            yystacksize * sizeof(*yyss) + (sizeof(union yyalloc) - 1UL);
        printf("\nSTMT_EXEC;;3391\n");
yyptr += yynewbytes / sizeof(*yyptr);
        printf("\nSTMT_EXEC;;3392\n");
goto while_break;
      }
    while_break:;
      printf("\nSTMT_EXEC;;3395\n");
while (1) {
        printf("\nSTMT_EXEC;;3396\n");
printf("\nFUNC_CALL;__builtin_memcpy(void *,const void *,unsigned long);\n");
__builtin_memcpy((void *)(&yyptr->yyvs_alloc), (void const *)yyvs,
                         yysize * sizeof(*yyvs));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;3398\n");
yyvs = &yyptr->yyvs_alloc;
        printf("\nSTMT_EXEC;;3399\n");
yynewbytes___0 =
            yystacksize * sizeof(*yyvs) + (sizeof(union yyalloc) - 1UL);
        printf("\nSTMT_EXEC;;3401\n");
yyptr += yynewbytes___0 / sizeof(*yyptr);
        printf("\nSTMT_EXEC;;3402\n");
goto while_break___0;
      }
    while_break___0:;
      printf("\nSTMT_EXEC;;3405\n");
if ((unsigned long)yyss1 != (unsigned long)(yyssa)) {
        printf("\nSTMT_EXEC;;3406\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)yyss1);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;3408\n");
yyssp = (yyss + yysize) - 1;
      printf("\nSTMT_EXEC;;3409\n");
yyvsp = (yyvs + yysize) - 1;
      printf("\nSTMT_EXEC;;3410\n");
if ((unsigned long)((yyss + yystacksize) - 1) <= (unsigned long)yyssp) {
        printf("\nSTMT_EXEC;;3411\n");
goto yyabortlab;
      }
    }
    printf("\nSTMT_EXEC;;3414\n");
if (yystate == 12) {
      printf("\nSTMT_EXEC;;3415\n");
goto yyacceptlab;
    }
    printf("\nSTMT_EXEC;;3417\n");
goto yybackup;
  yybackup:
    {
printf("\nSTMT_EXEC;;3419\n");
yyn = (int)yypact[yystate];
}

    printf("\nSTMT_EXEC;;3420\n");
if (yyn == -93) {
      printf("\nSTMT_EXEC;;3421\n");
goto yydefault;
    }
    printf("\nSTMT_EXEC;;3423\n");
if (yychar == -2) {
      printf("\nSTMT_EXEC;;3424\n");
yychar = yylex(&yylval, pc);
    }
    printf("\nSTMT_EXEC;;3426\n");
if (yychar <= 0) {
      printf("\nSTMT_EXEC;;3427\n");
yytoken = 0;
      printf("\nSTMT_EXEC;;3428\n");
yychar = yytoken;
    } else {
      printf("\nSTMT_EXEC;;3430\n");
if ((unsigned int)yychar <= 277U) {
        printf("\nSTMT_EXEC;;3431\n");
yytoken = (int)yytranslate[yychar];
      } else {
        printf("\nSTMT_EXEC;;3433\n");
yytoken = 2;
      }
    }
    printf("\nSTMT_EXEC;;3436\n");
yyn += yytoken;
    printf("\nSTMT_EXEC;;3437\n");
if (yyn < 0) {
      printf("\nSTMT_EXEC;;3438\n");
goto yydefault;
    } else {
      printf("\nSTMT_EXEC;;3440\n");
if (112 < yyn) {
        printf("\nSTMT_EXEC;;3441\n");
goto yydefault;
      } else {
        printf("\nSTMT_EXEC;;3443\n");
if ((int const)yycheck[yyn] != (int const)yytoken) {
          printf("\nSTMT_EXEC;;3444\n");
goto yydefault;
        }
      }
    }
    printf("\nSTMT_EXEC;;3448\n");
yyn = (int)yytable[yyn];
    printf("\nSTMT_EXEC;;3449\n");
if (yyn <= 0) {
      printf("\nSTMT_EXEC;;3450\n");
if (yyn == 0) {
        printf("\nSTMT_EXEC;;3451\n");
goto yyerrlab;
      } else {
        printf("\nSTMT_EXEC;;3453\n");
if (yyn == -1) {
          printf("\nSTMT_EXEC;;3454\n");
goto yyerrlab;
        }
      }
      printf("\nSTMT_EXEC;;3457\n");
yyn = -yyn;
      printf("\nSTMT_EXEC;;3458\n");
goto yyreduce;
    }
    printf("\nSTMT_EXEC;;3460\n");
if (yyerrstatus) {
      printf("\nSTMT_EXEC;;3461\n");
yyerrstatus--;
    }
    printf("\nSTMT_EXEC;;3463\n");
yychar = -2;
    printf("\nSTMT_EXEC;;3464\n");
yystate = yyn;
    printf("\nSTMT_EXEC;;3465\n");
yyvsp++;
    printf("\nSTMT_EXEC;;3466\n");
*yyvsp = yylval;
    printf("\nSTMT_EXEC;;3467\n");
goto yynewstate;
  yydefault:
    {
printf("\nSTMT_EXEC;;3469\n");
yyn = (int)yydefact[yystate];
}

    printf("\nSTMT_EXEC;;3470\n");
if (yyn == 0) {
      printf("\nSTMT_EXEC;;3471\n");
goto yyerrlab;
    }
    printf("\nSTMT_EXEC;;3473\n");
goto yyreduce;
  yyreduce:
    {
printf("\nSTMT_EXEC;;3475\n");
yylen = (int)yyr2[yyn];
}

    printf("\nSTMT_EXEC;;3476\n");
yyval = *(yyvsp + (1 - yylen));
    printf("\nSTMT_EXEC;;3477\n");
if (yyn == 4) {
      printf("\nSTMT_EXEC;;3478\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;3480\n");
if (yyn == 7) {
      printf("\nSTMT_EXEC;;3481\n");
goto case_7;
    }
    printf("\nSTMT_EXEC;;3483\n");
if (yyn == 8) {
      printf("\nSTMT_EXEC;;3484\n");
goto case_8;
    }
    printf("\nSTMT_EXEC;;3486\n");
if (yyn == 9) {
      printf("\nSTMT_EXEC;;3487\n");
goto case_9;
    }
    printf("\nSTMT_EXEC;;3489\n");
if (yyn == 10) {
      printf("\nSTMT_EXEC;;3490\n");
goto case_10;
    }
    printf("\nSTMT_EXEC;;3492\n");
if (yyn == 11) {
      printf("\nSTMT_EXEC;;3493\n");
goto case_11;
    }
    printf("\nSTMT_EXEC;;3495\n");
if (yyn == 12) {
      printf("\nSTMT_EXEC;;3496\n");
goto case_12;
    }
    printf("\nSTMT_EXEC;;3498\n");
if (yyn == 18) {
      printf("\nSTMT_EXEC;;3499\n");
goto case_18;
    }
    printf("\nSTMT_EXEC;;3501\n");
if (yyn == 19) {
      printf("\nSTMT_EXEC;;3502\n");
goto case_19;
    }
    printf("\nSTMT_EXEC;;3504\n");
if (yyn == 20) {
      printf("\nSTMT_EXEC;;3505\n");
goto case_20;
    }
    printf("\nSTMT_EXEC;;3507\n");
if (yyn == 22) {
      printf("\nSTMT_EXEC;;3508\n");
goto case_22;
    }
    printf("\nSTMT_EXEC;;3510\n");
if (yyn == 23) {
      printf("\nSTMT_EXEC;;3511\n");
goto case_23;
    }
    printf("\nSTMT_EXEC;;3513\n");
if (yyn == 24) {
      printf("\nSTMT_EXEC;;3514\n");
goto case_24;
    }
    printf("\nSTMT_EXEC;;3516\n");
if (yyn == 27) {
      printf("\nSTMT_EXEC;;3517\n");
goto case_27;
    }
    printf("\nSTMT_EXEC;;3519\n");
if (yyn == 28) {
      printf("\nSTMT_EXEC;;3520\n");
goto case_28;
    }
    printf("\nSTMT_EXEC;;3522\n");
if (yyn == 29) {
      printf("\nSTMT_EXEC;;3523\n");
goto case_29;
    }
    printf("\nSTMT_EXEC;;3525\n");
if (yyn == 30) {
      printf("\nSTMT_EXEC;;3526\n");
goto case_30;
    }
    printf("\nSTMT_EXEC;;3528\n");
if (yyn == 31) {
      printf("\nSTMT_EXEC;;3529\n");
goto case_31;
    }
    printf("\nSTMT_EXEC;;3531\n");
if (yyn == 32) {
      printf("\nSTMT_EXEC;;3532\n");
goto case_32;
    }
    printf("\nSTMT_EXEC;;3534\n");
if (yyn == 33) {
      printf("\nSTMT_EXEC;;3535\n");
goto case_33;
    }
    printf("\nSTMT_EXEC;;3537\n");
if (yyn == 34) {
      printf("\nSTMT_EXEC;;3538\n");
goto case_34;
    }
    printf("\nSTMT_EXEC;;3540\n");
if (yyn == 35) {
      printf("\nSTMT_EXEC;;3541\n");
goto case_35;
    }
    printf("\nSTMT_EXEC;;3543\n");
if (yyn == 36) {
      printf("\nSTMT_EXEC;;3544\n");
goto case_36;
    }
    printf("\nSTMT_EXEC;;3546\n");
if (yyn == 37) {
      printf("\nSTMT_EXEC;;3547\n");
goto case_37;
    }
    printf("\nSTMT_EXEC;;3549\n");
if (yyn == 38) {
      printf("\nSTMT_EXEC;;3550\n");
goto case_38;
    }
    printf("\nSTMT_EXEC;;3552\n");
if (yyn == 39) {
      printf("\nSTMT_EXEC;;3553\n");
goto case_39;
    }
    printf("\nSTMT_EXEC;;3555\n");
if (yyn == 40) {
      printf("\nSTMT_EXEC;;3556\n");
goto case_40;
    }
    printf("\nSTMT_EXEC;;3558\n");
if (yyn == 41) {
      printf("\nSTMT_EXEC;;3559\n");
goto case_41;
    }
    printf("\nSTMT_EXEC;;3561\n");
if (yyn == 42) {
      printf("\nSTMT_EXEC;;3562\n");
goto case_42;
    }
    printf("\nSTMT_EXEC;;3564\n");
if (yyn == 43) {
      printf("\nSTMT_EXEC;;3565\n");
goto case_43;
    }
    printf("\nSTMT_EXEC;;3567\n");
if (yyn == 44) {
      printf("\nSTMT_EXEC;;3568\n");
goto case_44;
    }
    printf("\nSTMT_EXEC;;3570\n");
if (yyn == 45) {
      printf("\nSTMT_EXEC;;3571\n");
goto case_45;
    }
    printf("\nSTMT_EXEC;;3573\n");
if (yyn == 46) {
      printf("\nSTMT_EXEC;;3574\n");
goto case_46;
    }
    printf("\nSTMT_EXEC;;3576\n");
if (yyn == 47) {
      printf("\nSTMT_EXEC;;3577\n");
goto case_47;
    }
    printf("\nSTMT_EXEC;;3579\n");
if (yyn == 48) {
      printf("\nSTMT_EXEC;;3580\n");
goto case_48;
    }
    printf("\nSTMT_EXEC;;3582\n");
if (yyn == 50) {
      printf("\nSTMT_EXEC;;3583\n");
goto case_50;
    }
    printf("\nSTMT_EXEC;;3585\n");
if (yyn == 51) {
      printf("\nSTMT_EXEC;;3586\n");
goto case_51;
    }
    printf("\nSTMT_EXEC;;3588\n");
if (yyn == 52) {
      printf("\nSTMT_EXEC;;3589\n");
goto case_52;
    }
    printf("\nSTMT_EXEC;;3591\n");
if (yyn == 53) {
      printf("\nSTMT_EXEC;;3592\n");
goto case_53;
    }
    printf("\nSTMT_EXEC;;3594\n");
if (yyn == 54) {
      printf("\nSTMT_EXEC;;3595\n");
goto case_54;
    }
    printf("\nSTMT_EXEC;;3597\n");
if (yyn == 55) {
      printf("\nSTMT_EXEC;;3598\n");
goto case_55;
    }
    printf("\nSTMT_EXEC;;3600\n");
if (yyn == 56) {
      printf("\nSTMT_EXEC;;3601\n");
goto case_56;
    }
    printf("\nSTMT_EXEC;;3603\n");
if (yyn == 57) {
      printf("\nSTMT_EXEC;;3604\n");
goto case_57;
    }
    printf("\nSTMT_EXEC;;3606\n");
if (yyn == 58) {
      printf("\nSTMT_EXEC;;3607\n");
goto case_58;
    }
    printf("\nSTMT_EXEC;;3609\n");
if (yyn == 59) {
      printf("\nSTMT_EXEC;;3610\n");
goto case_59;
    }
    printf("\nSTMT_EXEC;;3612\n");
if (yyn == 60) {
      printf("\nSTMT_EXEC;;3613\n");
goto case_60;
    }
    printf("\nSTMT_EXEC;;3615\n");
if (yyn == 61) {
      printf("\nSTMT_EXEC;;3616\n");
goto case_61;
    }
    printf("\nSTMT_EXEC;;3618\n");
if (yyn == 62) {
      printf("\nSTMT_EXEC;;3619\n");
goto case_62;
    }
    printf("\nSTMT_EXEC;;3621\n");
if (yyn == 63) {
      printf("\nSTMT_EXEC;;3622\n");
goto case_63;
    }
    printf("\nSTMT_EXEC;;3624\n");
if (yyn == 64) {
      printf("\nSTMT_EXEC;;3625\n");
goto case_64;
    }
    printf("\nSTMT_EXEC;;3627\n");
if (yyn == 65) {
      printf("\nSTMT_EXEC;;3628\n");
goto case_65;
    }
    printf("\nSTMT_EXEC;;3630\n");
if (yyn == 66) {
      printf("\nSTMT_EXEC;;3631\n");
goto case_66;
    }
    printf("\nSTMT_EXEC;;3633\n");
if (yyn == 67) {
      printf("\nSTMT_EXEC;;3634\n");
goto case_67;
    }
    printf("\nSTMT_EXEC;;3636\n");
if (yyn == 68) {
      printf("\nSTMT_EXEC;;3637\n");
goto case_68;
    }
    printf("\nSTMT_EXEC;;3639\n");
if (yyn == 69) {
      printf("\nSTMT_EXEC;;3640\n");
goto case_69;
    }
    printf("\nSTMT_EXEC;;3642\n");
if (yyn == 70) {
      printf("\nSTMT_EXEC;;3643\n");
goto case_70;
    }
    printf("\nSTMT_EXEC;;3645\n");
if (yyn == 71) {
      printf("\nSTMT_EXEC;;3646\n");
goto case_71;
    }
    printf("\nSTMT_EXEC;;3648\n");
if (yyn == 72) {
      printf("\nSTMT_EXEC;;3649\n");
goto case_72;
    }
    printf("\nSTMT_EXEC;;3651\n");
if (yyn == 73) {
      printf("\nSTMT_EXEC;;3652\n");
goto case_73;
    }
    printf("\nSTMT_EXEC;;3654\n");
if (yyn == 75) {
      printf("\nSTMT_EXEC;;3655\n");
goto case_75;
    }
    printf("\nSTMT_EXEC;;3657\n");
if (yyn == 76) {
      printf("\nSTMT_EXEC;;3658\n");
goto case_76;
    }
    printf("\nSTMT_EXEC;;3660\n");
if (yyn == 77) {
      printf("\nSTMT_EXEC;;3661\n");
goto case_77;
    }
    printf("\nSTMT_EXEC;;3663\n");
if (yyn == 78) {
      printf("\nSTMT_EXEC;;3664\n");
goto case_78;
    }
    printf("\nSTMT_EXEC;;3666\n");
if (yyn == 79) {
      printf("\nSTMT_EXEC;;3667\n");
goto case_79;
    }
    printf("\nSTMT_EXEC;;3669\n");
if (yyn == 80) {
      printf("\nSTMT_EXEC;;3670\n");
goto case_80;
    }
    printf("\nSTMT_EXEC;;3672\n");
if (yyn == 81) {
      printf("\nSTMT_EXEC;;3673\n");
goto case_81;
    }
    printf("\nSTMT_EXEC;;3675\n");
if (yyn == 85) {
      printf("\nSTMT_EXEC;;3676\n");
goto case_85;
    }
    printf("\nSTMT_EXEC;;3678\n");
if (yyn == 87) {
      printf("\nSTMT_EXEC;;3679\n");
goto case_87;
    }
    printf("\nSTMT_EXEC;;3681\n");
if (yyn == 88) {
      printf("\nSTMT_EXEC;;3682\n");
goto case_88;
    }
    printf("\nSTMT_EXEC;;3684\n");
if (yyn == 89) {
      printf("\nSTMT_EXEC;;3685\n");
goto case_89;
    }
    printf("\nSTMT_EXEC;;3687\n");
if (yyn == 90) {
      printf("\nSTMT_EXEC;;3688\n");
goto case_90;
    }
    printf("\nSTMT_EXEC;;3690\n");
if (yyn == 91) {
      printf("\nSTMT_EXEC;;3691\n");
goto case_91;
    }
    printf("\nSTMT_EXEC;;3693\n");
goto switch_default;
  case_4:
    {
printf("\nSTMT_EXEC;;3695\n");
pc->seconds = (yyvsp + 0)->timespec;
}

    printf("\nSTMT_EXEC;;3696\n");
pc->timespec_seen = (_Bool)1;
    printf("\nSTMT_EXEC;;3697\n");
goto switch_break;
  case_7:
    {
printf("\nSTMT_EXEC;;3699\n");
(pc->times_seen)++;
}

    printf("\nSTMT_EXEC;;3700\n");
(pc->dates_seen)++;
    printf("\nSTMT_EXEC;;3701\n");
goto switch_break;
  case_8:
    {
printf("\nSTMT_EXEC;;3703\n");
(pc->times_seen)++;
}

    printf("\nSTMT_EXEC;;3704\n");
goto switch_break;
  case_9:
    {
printf("\nSTMT_EXEC;;3706\n");
(pc->local_zones_seen)++;
}

    printf("\nSTMT_EXEC;;3707\n");
goto switch_break;
  case_10:
    {
printf("\nSTMT_EXEC;;3709\n");
(pc->zones_seen)++;
}

    printf("\nSTMT_EXEC;;3710\n");
goto switch_break;
  case_11:
    {
printf("\nSTMT_EXEC;;3712\n");
(pc->dates_seen)++;
}

    printf("\nSTMT_EXEC;;3713\n");
goto switch_break;
  case_12:
    {
printf("\nSTMT_EXEC;;3715\n");
(pc->days_seen)++;
}

    printf("\nSTMT_EXEC;;3716\n");
goto switch_break;
  case_18:
    {
printf("\nSTMT_EXEC;;3718\n");
set_hhmmss(pc, (yyvsp + -1)->textintval.value, 0L, (time_t)0, 0L);
}

    printf("\nSTMT_EXEC;;3719\n");
pc->meridian = (int)(yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3720\n");
goto switch_break;
  case_19:
    {
printf("\nSTMT_EXEC;;3722\n");
set_hhmmss(pc, (yyvsp + -3)->textintval.value,
               (yyvsp + -1)->textintval.value, (time_t)0, 0L);
}

    printf("\nSTMT_EXEC;;3724\n");
pc->meridian = (int)(yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3725\n");
goto switch_break;
  case_20:
    {
printf("\nSTMT_EXEC;;3727\n");
set_hhmmss(pc, (yyvsp + -5)->textintval.value,
               (yyvsp + -3)->textintval.value, (yyvsp + -1)->timespec.tv_sec,
               (yyvsp + -1)->timespec.tv_nsec);
}

    printf("\nSTMT_EXEC;;3730\n");
pc->meridian = (int)(yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3731\n");
goto switch_break;
  case_22:
    {
printf("\nSTMT_EXEC;;3733\n");
set_hhmmss(pc, (yyvsp + -1)->textintval.value, 0L, (time_t)0, 0L);
}

    printf("\nSTMT_EXEC;;3734\n");
pc->meridian = 2;
    printf("\nSTMT_EXEC;;3735\n");
goto switch_break;
  case_23:
    {
printf("\nSTMT_EXEC;;3737\n");
set_hhmmss(pc, (yyvsp + -3)->textintval.value,
               (yyvsp + -1)->textintval.value, (time_t)0, 0L);
}

    printf("\nSTMT_EXEC;;3739\n");
pc->meridian = 2;
    printf("\nSTMT_EXEC;;3740\n");
goto switch_break;
  case_24:
    {
printf("\nSTMT_EXEC;;3742\n");
set_hhmmss(pc, (yyvsp + -5)->textintval.value,
               (yyvsp + -3)->textintval.value, (yyvsp + -1)->timespec.tv_sec,
               (yyvsp + -1)->timespec.tv_nsec);
}

    printf("\nSTMT_EXEC;;3745\n");
pc->meridian = 2;
    printf("\nSTMT_EXEC;;3746\n");
goto switch_break;
  case_27:
    {
printf("\nSTMT_EXEC;;3748\n");
(pc->zones_seen)++;
}

    printf("\nSTMT_EXEC;;3749\n");
pc->time_zone =
        time_zone_hhmm(pc, (yyvsp + -1)->textintval, (yyvsp + 0)->intval);
    printf("\nSTMT_EXEC;;3751\n");
goto switch_break;
  case_28:
    {
printf("\nSTMT_EXEC;;3753\n");
pc->local_isdst = (int)(yyvsp + 0)->intval;
}

    printf("\nSTMT_EXEC;;3754\n");
pc->dsts_seen += (size_t)(0L < (yyvsp + 0)->intval);
    printf("\nSTMT_EXEC;;3755\n");
goto switch_break;
  case_29:
    {
printf("\nSTMT_EXEC;;3757\n");
pc->local_isdst = 1;
}

    printf("\nSTMT_EXEC;;3758\n");
pc->dsts_seen += (size_t)((0L < (yyvsp + -1)->intval) + 1);
    printf("\nSTMT_EXEC;;3759\n");
goto switch_break;
  case_30:
    {
printf("\nSTMT_EXEC;;3761\n");
pc->time_zone = (yyvsp + 0)->intval;
}

    printf("\nSTMT_EXEC;;3762\n");
goto switch_break;
  case_31:
    {
printf("\nSTMT_EXEC;;3764\n");
pc->time_zone = 420L;
}

    printf("\nSTMT_EXEC;;3765\n");
goto switch_break;
  case_32:
    {
printf("\nSTMT_EXEC;;3767\n");
pc->time_zone = (yyvsp + -1)->intval;
}

    printf("\nSTMT_EXEC;;3768\n");
apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    printf("\nSTMT_EXEC;;3769\n");
goto switch_break;
  case_33:
    {
printf("\nSTMT_EXEC;;3771\n");
pc->time_zone = 420L;
}

    printf("\nSTMT_EXEC;;3772\n");
apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    printf("\nSTMT_EXEC;;3773\n");
goto switch_break;
  case_34:
    {
printf("\nSTMT_EXEC;;3775\n");
tmp___0 = time_zone_hhmm(pc, (yyvsp + -1)->textintval, (yyvsp + 0)->intval);
}

    printf("\nSTMT_EXEC;;3776\n");
pc->time_zone = (yyvsp + -2)->intval + tmp___0;
    printf("\nSTMT_EXEC;;3777\n");
goto switch_break;
  case_35:
    {
printf("\nSTMT_EXEC;;3779\n");
pc->time_zone = (yyvsp + 0)->intval + 60L;
}

    printf("\nSTMT_EXEC;;3780\n");
goto switch_break;
  case_36:
    {
printf("\nSTMT_EXEC;;3782\n");
pc->time_zone = (yyvsp + -1)->intval + 60L;
}

    printf("\nSTMT_EXEC;;3783\n");
goto switch_break;
  case_37:
    {
printf("\nSTMT_EXEC;;3785\n");
pc->day_ordinal = 0L;
}

    printf("\nSTMT_EXEC;;3786\n");
pc->day_number = (int)(yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3787\n");
goto switch_break;
  case_38:
    {
printf("\nSTMT_EXEC;;3789\n");
pc->day_ordinal = 0L;
}

    printf("\nSTMT_EXEC;;3790\n");
pc->day_number = (int)(yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;3791\n");
goto switch_break;
  case_39:
    {
printf("\nSTMT_EXEC;;3793\n");
pc->day_ordinal = (yyvsp + -1)->intval;
}

    printf("\nSTMT_EXEC;;3794\n");
pc->day_number = (int)(yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3795\n");
goto switch_break;
  case_40:
    {
printf("\nSTMT_EXEC;;3797\n");
pc->day_ordinal = (yyvsp + -1)->textintval.value;
}

    printf("\nSTMT_EXEC;;3798\n");
pc->day_number = (int)(yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3799\n");
goto switch_break;
  case_41:
    {
printf("\nSTMT_EXEC;;3801\n");
pc->month = (yyvsp + -2)->textintval.value;
}

    printf("\nSTMT_EXEC;;3802\n");
pc->day = (yyvsp + 0)->textintval.value;
    printf("\nSTMT_EXEC;;3803\n");
goto switch_break;
  case_42:
    {
printf("\nSTMT_EXEC;;3805\n");
if (4UL <= (yyvsp + -4)->textintval.digits) {
      printf("\nSTMT_EXEC;;3806\n");
pc->year = (yyvsp + -4)->textintval;
      printf("\nSTMT_EXEC;;3807\n");
pc->month = (yyvsp + -2)->textintval.value;
      printf("\nSTMT_EXEC;;3808\n");
pc->day = (yyvsp + 0)->textintval.value;
    } else {
      printf("\nSTMT_EXEC;;3810\n");
pc->month = (yyvsp + -4)->textintval.value;
      printf("\nSTMT_EXEC;;3811\n");
pc->day = (yyvsp + -2)->textintval.value;
      printf("\nSTMT_EXEC;;3812\n");
pc->year = (yyvsp + 0)->textintval;
    }
}

    printf("\nSTMT_EXEC;;3814\n");
goto switch_break;
  case_43:
    {
printf("\nSTMT_EXEC;;3816\n");
pc->day = (yyvsp + -2)->textintval.value;
}

    printf("\nSTMT_EXEC;;3817\n");
pc->month = (yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;3818\n");
pc->year.value = -(yyvsp + 0)->textintval.value;
    printf("\nSTMT_EXEC;;3819\n");
pc->year.digits = (yyvsp + 0)->textintval.digits;
    printf("\nSTMT_EXEC;;3820\n");
goto switch_break;
  case_44:
    {
printf("\nSTMT_EXEC;;3822\n");
pc->month = (yyvsp + -2)->intval;
}

    printf("\nSTMT_EXEC;;3823\n");
pc->day = -(yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;3824\n");
pc->year.value = -(yyvsp + 0)->textintval.value;
    printf("\nSTMT_EXEC;;3825\n");
pc->year.digits = (yyvsp + 0)->textintval.digits;
    printf("\nSTMT_EXEC;;3826\n");
goto switch_break;
  case_45:
    {
printf("\nSTMT_EXEC;;3828\n");
pc->month = (yyvsp + -1)->intval;
}

    printf("\nSTMT_EXEC;;3829\n");
pc->day = (yyvsp + 0)->textintval.value;
    printf("\nSTMT_EXEC;;3830\n");
goto switch_break;
  case_46:
    {
printf("\nSTMT_EXEC;;3832\n");
pc->month = (yyvsp + -3)->intval;
}

    printf("\nSTMT_EXEC;;3833\n");
pc->day = (yyvsp + -2)->textintval.value;
    printf("\nSTMT_EXEC;;3834\n");
pc->year = (yyvsp + 0)->textintval;
    printf("\nSTMT_EXEC;;3835\n");
goto switch_break;
  case_47:
    {
printf("\nSTMT_EXEC;;3837\n");
pc->day = (yyvsp + -1)->textintval.value;
}

    printf("\nSTMT_EXEC;;3838\n");
pc->month = (yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3839\n");
goto switch_break;
  case_48:
    {
printf("\nSTMT_EXEC;;3841\n");
pc->day = (yyvsp + -2)->textintval.value;
}

    printf("\nSTMT_EXEC;;3842\n");
pc->month = (yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;3843\n");
pc->year = (yyvsp + 0)->textintval;
    printf("\nSTMT_EXEC;;3844\n");
goto switch_break;
  case_50:
    {
printf("\nSTMT_EXEC;;3846\n");
pc->year = (yyvsp + -2)->textintval;
}

    printf("\nSTMT_EXEC;;3847\n");
pc->month = -(yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;3848\n");
pc->day = -(yyvsp + 0)->textintval.value;
    printf("\nSTMT_EXEC;;3849\n");
goto switch_break;
  case_51:
    {
printf("\nSTMT_EXEC;;3851\n");
apply_relative_time(pc, (yyvsp + -1)->rel, (int)(yyvsp + 0)->intval);
}

    printf("\nSTMT_EXEC;;3852\n");
goto switch_break;
  case_52:
    {
printf("\nSTMT_EXEC;;3854\n");
apply_relative_time(pc, (yyvsp + 0)->rel, 1);
}

    printf("\nSTMT_EXEC;;3855\n");
goto switch_break;
  case_53:
    {
printf("\nSTMT_EXEC;;3857\n");
apply_relative_time(pc, (yyvsp + 0)->rel, 1);
}

    printf("\nSTMT_EXEC;;3858\n");
goto switch_break;
  case_54:
    {
printf("\nSTMT_EXEC;;3860\n");
__constr_expr_13.year = 0L;
}

    printf("\nSTMT_EXEC;;3861\n");
__constr_expr_13.month = 0L;
    printf("\nSTMT_EXEC;;3862\n");
__constr_expr_13.day = 0L;
    printf("\nSTMT_EXEC;;3863\n");
__constr_expr_13.hour = 0L;
    printf("\nSTMT_EXEC;;3864\n");
__constr_expr_13.minutes = 0L;
    printf("\nSTMT_EXEC;;3865\n");
__constr_expr_13.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3866\n");
__constr_expr_13.ns = 0L;
    printf("\nSTMT_EXEC;;3867\n");
yyval.rel = __constr_expr_13;
    printf("\nSTMT_EXEC;;3868\n");
yyval.rel.year = (yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;3869\n");
goto switch_break;
  case_55:
    {
printf("\nSTMT_EXEC;;3871\n");
__constr_expr_14.year = 0L;
}

    printf("\nSTMT_EXEC;;3872\n");
__constr_expr_14.month = 0L;
    printf("\nSTMT_EXEC;;3873\n");
__constr_expr_14.day = 0L;
    printf("\nSTMT_EXEC;;3874\n");
__constr_expr_14.hour = 0L;
    printf("\nSTMT_EXEC;;3875\n");
__constr_expr_14.minutes = 0L;
    printf("\nSTMT_EXEC;;3876\n");
__constr_expr_14.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3877\n");
__constr_expr_14.ns = 0L;
    printf("\nSTMT_EXEC;;3878\n");
yyval.rel = __constr_expr_14;
    printf("\nSTMT_EXEC;;3879\n");
yyval.rel.year = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;3880\n");
goto switch_break;
  case_56:
    {
printf("\nSTMT_EXEC;;3882\n");
__constr_expr_15.year = 0L;
}

    printf("\nSTMT_EXEC;;3883\n");
__constr_expr_15.month = 0L;
    printf("\nSTMT_EXEC;;3884\n");
__constr_expr_15.day = 0L;
    printf("\nSTMT_EXEC;;3885\n");
__constr_expr_15.hour = 0L;
    printf("\nSTMT_EXEC;;3886\n");
__constr_expr_15.minutes = 0L;
    printf("\nSTMT_EXEC;;3887\n");
__constr_expr_15.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3888\n");
__constr_expr_15.ns = 0L;
    printf("\nSTMT_EXEC;;3889\n");
yyval.rel = __constr_expr_15;
    printf("\nSTMT_EXEC;;3890\n");
yyval.rel.year = 1L;
    printf("\nSTMT_EXEC;;3891\n");
goto switch_break;
  case_57:
    {
printf("\nSTMT_EXEC;;3893\n");
__constr_expr_16.year = 0L;
}

    printf("\nSTMT_EXEC;;3894\n");
__constr_expr_16.month = 0L;
    printf("\nSTMT_EXEC;;3895\n");
__constr_expr_16.day = 0L;
    printf("\nSTMT_EXEC;;3896\n");
__constr_expr_16.hour = 0L;
    printf("\nSTMT_EXEC;;3897\n");
__constr_expr_16.minutes = 0L;
    printf("\nSTMT_EXEC;;3898\n");
__constr_expr_16.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3899\n");
__constr_expr_16.ns = 0L;
    printf("\nSTMT_EXEC;;3900\n");
yyval.rel = __constr_expr_16;
    printf("\nSTMT_EXEC;;3901\n");
yyval.rel.month = (yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;3902\n");
goto switch_break;
  case_58:
    {
printf("\nSTMT_EXEC;;3904\n");
__constr_expr_17.year = 0L;
}

    printf("\nSTMT_EXEC;;3905\n");
__constr_expr_17.month = 0L;
    printf("\nSTMT_EXEC;;3906\n");
__constr_expr_17.day = 0L;
    printf("\nSTMT_EXEC;;3907\n");
__constr_expr_17.hour = 0L;
    printf("\nSTMT_EXEC;;3908\n");
__constr_expr_17.minutes = 0L;
    printf("\nSTMT_EXEC;;3909\n");
__constr_expr_17.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3910\n");
__constr_expr_17.ns = 0L;
    printf("\nSTMT_EXEC;;3911\n");
yyval.rel = __constr_expr_17;
    printf("\nSTMT_EXEC;;3912\n");
yyval.rel.month = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;3913\n");
goto switch_break;
  case_59:
    {
printf("\nSTMT_EXEC;;3915\n");
__constr_expr_18.year = 0L;
}

    printf("\nSTMT_EXEC;;3916\n");
__constr_expr_18.month = 0L;
    printf("\nSTMT_EXEC;;3917\n");
__constr_expr_18.day = 0L;
    printf("\nSTMT_EXEC;;3918\n");
__constr_expr_18.hour = 0L;
    printf("\nSTMT_EXEC;;3919\n");
__constr_expr_18.minutes = 0L;
    printf("\nSTMT_EXEC;;3920\n");
__constr_expr_18.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3921\n");
__constr_expr_18.ns = 0L;
    printf("\nSTMT_EXEC;;3922\n");
yyval.rel = __constr_expr_18;
    printf("\nSTMT_EXEC;;3923\n");
yyval.rel.month = 1L;
    printf("\nSTMT_EXEC;;3924\n");
goto switch_break;
  case_60:
    {
printf("\nSTMT_EXEC;;3926\n");
__constr_expr_19.year = 0L;
}

    printf("\nSTMT_EXEC;;3927\n");
__constr_expr_19.month = 0L;
    printf("\nSTMT_EXEC;;3928\n");
__constr_expr_19.day = 0L;
    printf("\nSTMT_EXEC;;3929\n");
__constr_expr_19.hour = 0L;
    printf("\nSTMT_EXEC;;3930\n");
__constr_expr_19.minutes = 0L;
    printf("\nSTMT_EXEC;;3931\n");
__constr_expr_19.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3932\n");
__constr_expr_19.ns = 0L;
    printf("\nSTMT_EXEC;;3933\n");
yyval.rel = __constr_expr_19;
    printf("\nSTMT_EXEC;;3934\n");
yyval.rel.day = (yyvsp + -1)->intval * (yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3935\n");
goto switch_break;
  case_61:
    {
printf("\nSTMT_EXEC;;3937\n");
__constr_expr_20.year = 0L;
}

    printf("\nSTMT_EXEC;;3938\n");
__constr_expr_20.month = 0L;
    printf("\nSTMT_EXEC;;3939\n");
__constr_expr_20.day = 0L;
    printf("\nSTMT_EXEC;;3940\n");
__constr_expr_20.hour = 0L;
    printf("\nSTMT_EXEC;;3941\n");
__constr_expr_20.minutes = 0L;
    printf("\nSTMT_EXEC;;3942\n");
__constr_expr_20.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3943\n");
__constr_expr_20.ns = 0L;
    printf("\nSTMT_EXEC;;3944\n");
yyval.rel = __constr_expr_20;
    printf("\nSTMT_EXEC;;3945\n");
yyval.rel.day = (yyvsp + -1)->textintval.value * (yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3946\n");
goto switch_break;
  case_62:
    {
printf("\nSTMT_EXEC;;3948\n");
__constr_expr_21.year = 0L;
}

    printf("\nSTMT_EXEC;;3949\n");
__constr_expr_21.month = 0L;
    printf("\nSTMT_EXEC;;3950\n");
__constr_expr_21.day = 0L;
    printf("\nSTMT_EXEC;;3951\n");
__constr_expr_21.hour = 0L;
    printf("\nSTMT_EXEC;;3952\n");
__constr_expr_21.minutes = 0L;
    printf("\nSTMT_EXEC;;3953\n");
__constr_expr_21.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3954\n");
__constr_expr_21.ns = 0L;
    printf("\nSTMT_EXEC;;3955\n");
yyval.rel = __constr_expr_21;
    printf("\nSTMT_EXEC;;3956\n");
yyval.rel.day = (yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;3957\n");
goto switch_break;
  case_63:
    {
printf("\nSTMT_EXEC;;3959\n");
__constr_expr_22.year = 0L;
}

    printf("\nSTMT_EXEC;;3960\n");
__constr_expr_22.month = 0L;
    printf("\nSTMT_EXEC;;3961\n");
__constr_expr_22.day = 0L;
    printf("\nSTMT_EXEC;;3962\n");
__constr_expr_22.hour = 0L;
    printf("\nSTMT_EXEC;;3963\n");
__constr_expr_22.minutes = 0L;
    printf("\nSTMT_EXEC;;3964\n");
__constr_expr_22.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3965\n");
__constr_expr_22.ns = 0L;
    printf("\nSTMT_EXEC;;3966\n");
yyval.rel = __constr_expr_22;
    printf("\nSTMT_EXEC;;3967\n");
yyval.rel.hour = (yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;3968\n");
goto switch_break;
  case_64:
    {
printf("\nSTMT_EXEC;;3970\n");
__constr_expr_23.year = 0L;
}

    printf("\nSTMT_EXEC;;3971\n");
__constr_expr_23.month = 0L;
    printf("\nSTMT_EXEC;;3972\n");
__constr_expr_23.day = 0L;
    printf("\nSTMT_EXEC;;3973\n");
__constr_expr_23.hour = 0L;
    printf("\nSTMT_EXEC;;3974\n");
__constr_expr_23.minutes = 0L;
    printf("\nSTMT_EXEC;;3975\n");
__constr_expr_23.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3976\n");
__constr_expr_23.ns = 0L;
    printf("\nSTMT_EXEC;;3977\n");
yyval.rel = __constr_expr_23;
    printf("\nSTMT_EXEC;;3978\n");
yyval.rel.hour = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;3979\n");
goto switch_break;
  case_65:
    {
printf("\nSTMT_EXEC;;3981\n");
__constr_expr_24.year = 0L;
}

    printf("\nSTMT_EXEC;;3982\n");
__constr_expr_24.month = 0L;
    printf("\nSTMT_EXEC;;3983\n");
__constr_expr_24.day = 0L;
    printf("\nSTMT_EXEC;;3984\n");
__constr_expr_24.hour = 0L;
    printf("\nSTMT_EXEC;;3985\n");
__constr_expr_24.minutes = 0L;
    printf("\nSTMT_EXEC;;3986\n");
__constr_expr_24.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3987\n");
__constr_expr_24.ns = 0L;
    printf("\nSTMT_EXEC;;3988\n");
yyval.rel = __constr_expr_24;
    printf("\nSTMT_EXEC;;3989\n");
yyval.rel.hour = 1L;
    printf("\nSTMT_EXEC;;3990\n");
goto switch_break;
  case_66:
    {
printf("\nSTMT_EXEC;;3992\n");
__constr_expr_25.year = 0L;
}

    printf("\nSTMT_EXEC;;3993\n");
__constr_expr_25.month = 0L;
    printf("\nSTMT_EXEC;;3994\n");
__constr_expr_25.day = 0L;
    printf("\nSTMT_EXEC;;3995\n");
__constr_expr_25.hour = 0L;
    printf("\nSTMT_EXEC;;3996\n");
__constr_expr_25.minutes = 0L;
    printf("\nSTMT_EXEC;;3997\n");
__constr_expr_25.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;3998\n");
__constr_expr_25.ns = 0L;
    printf("\nSTMT_EXEC;;3999\n");
yyval.rel = __constr_expr_25;
    printf("\nSTMT_EXEC;;4000\n");
yyval.rel.minutes = (yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;4001\n");
goto switch_break;
  case_67:
    {
printf("\nSTMT_EXEC;;4003\n");
__constr_expr_26.year = 0L;
}

    printf("\nSTMT_EXEC;;4004\n");
__constr_expr_26.month = 0L;
    printf("\nSTMT_EXEC;;4005\n");
__constr_expr_26.day = 0L;
    printf("\nSTMT_EXEC;;4006\n");
__constr_expr_26.hour = 0L;
    printf("\nSTMT_EXEC;;4007\n");
__constr_expr_26.minutes = 0L;
    printf("\nSTMT_EXEC;;4008\n");
__constr_expr_26.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4009\n");
__constr_expr_26.ns = 0L;
    printf("\nSTMT_EXEC;;4010\n");
yyval.rel = __constr_expr_26;
    printf("\nSTMT_EXEC;;4011\n");
yyval.rel.minutes = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;4012\n");
goto switch_break;
  case_68:
    {
printf("\nSTMT_EXEC;;4014\n");
__constr_expr_27.year = 0L;
}

    printf("\nSTMT_EXEC;;4015\n");
__constr_expr_27.month = 0L;
    printf("\nSTMT_EXEC;;4016\n");
__constr_expr_27.day = 0L;
    printf("\nSTMT_EXEC;;4017\n");
__constr_expr_27.hour = 0L;
    printf("\nSTMT_EXEC;;4018\n");
__constr_expr_27.minutes = 0L;
    printf("\nSTMT_EXEC;;4019\n");
__constr_expr_27.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4020\n");
__constr_expr_27.ns = 0L;
    printf("\nSTMT_EXEC;;4021\n");
yyval.rel = __constr_expr_27;
    printf("\nSTMT_EXEC;;4022\n");
yyval.rel.minutes = 1L;
    printf("\nSTMT_EXEC;;4023\n");
goto switch_break;
  case_69:
    {
printf("\nSTMT_EXEC;;4025\n");
__constr_expr_28.year = 0L;
}

    printf("\nSTMT_EXEC;;4026\n");
__constr_expr_28.month = 0L;
    printf("\nSTMT_EXEC;;4027\n");
__constr_expr_28.day = 0L;
    printf("\nSTMT_EXEC;;4028\n");
__constr_expr_28.hour = 0L;
    printf("\nSTMT_EXEC;;4029\n");
__constr_expr_28.minutes = 0L;
    printf("\nSTMT_EXEC;;4030\n");
__constr_expr_28.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4031\n");
__constr_expr_28.ns = 0L;
    printf("\nSTMT_EXEC;;4032\n");
yyval.rel = __constr_expr_28;
    printf("\nSTMT_EXEC;;4033\n");
yyval.rel.seconds = (yyvsp + -1)->intval;
    printf("\nSTMT_EXEC;;4034\n");
goto switch_break;
  case_70:
    {
printf("\nSTMT_EXEC;;4036\n");
__constr_expr_29.year = 0L;
}

    printf("\nSTMT_EXEC;;4037\n");
__constr_expr_29.month = 0L;
    printf("\nSTMT_EXEC;;4038\n");
__constr_expr_29.day = 0L;
    printf("\nSTMT_EXEC;;4039\n");
__constr_expr_29.hour = 0L;
    printf("\nSTMT_EXEC;;4040\n");
__constr_expr_29.minutes = 0L;
    printf("\nSTMT_EXEC;;4041\n");
__constr_expr_29.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4042\n");
__constr_expr_29.ns = 0L;
    printf("\nSTMT_EXEC;;4043\n");
yyval.rel = __constr_expr_29;
    printf("\nSTMT_EXEC;;4044\n");
yyval.rel.seconds = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;4045\n");
goto switch_break;
  case_71:
    {
printf("\nSTMT_EXEC;;4047\n");
__constr_expr_30.year = 0L;
}

    printf("\nSTMT_EXEC;;4048\n");
__constr_expr_30.month = 0L;
    printf("\nSTMT_EXEC;;4049\n");
__constr_expr_30.day = 0L;
    printf("\nSTMT_EXEC;;4050\n");
__constr_expr_30.hour = 0L;
    printf("\nSTMT_EXEC;;4051\n");
__constr_expr_30.minutes = 0L;
    printf("\nSTMT_EXEC;;4052\n");
__constr_expr_30.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4053\n");
__constr_expr_30.ns = 0L;
    printf("\nSTMT_EXEC;;4054\n");
yyval.rel = __constr_expr_30;
    printf("\nSTMT_EXEC;;4055\n");
yyval.rel.seconds = (yyvsp + -1)->timespec.tv_sec;
    printf("\nSTMT_EXEC;;4056\n");
yyval.rel.ns = (yyvsp + -1)->timespec.tv_nsec;
    printf("\nSTMT_EXEC;;4057\n");
goto switch_break;
  case_72:
    {
printf("\nSTMT_EXEC;;4059\n");
__constr_expr_31.year = 0L;
}

    printf("\nSTMT_EXEC;;4060\n");
__constr_expr_31.month = 0L;
    printf("\nSTMT_EXEC;;4061\n");
__constr_expr_31.day = 0L;
    printf("\nSTMT_EXEC;;4062\n");
__constr_expr_31.hour = 0L;
    printf("\nSTMT_EXEC;;4063\n");
__constr_expr_31.minutes = 0L;
    printf("\nSTMT_EXEC;;4064\n");
__constr_expr_31.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4065\n");
__constr_expr_31.ns = 0L;
    printf("\nSTMT_EXEC;;4066\n");
yyval.rel = __constr_expr_31;
    printf("\nSTMT_EXEC;;4067\n");
yyval.rel.seconds = (yyvsp + -1)->timespec.tv_sec;
    printf("\nSTMT_EXEC;;4068\n");
yyval.rel.ns = (yyvsp + -1)->timespec.tv_nsec;
    printf("\nSTMT_EXEC;;4069\n");
goto switch_break;
  case_73:
    {
printf("\nSTMT_EXEC;;4071\n");
__constr_expr_32.year = 0L;
}

    printf("\nSTMT_EXEC;;4072\n");
__constr_expr_32.month = 0L;
    printf("\nSTMT_EXEC;;4073\n");
__constr_expr_32.day = 0L;
    printf("\nSTMT_EXEC;;4074\n");
__constr_expr_32.hour = 0L;
    printf("\nSTMT_EXEC;;4075\n");
__constr_expr_32.minutes = 0L;
    printf("\nSTMT_EXEC;;4076\n");
__constr_expr_32.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4077\n");
__constr_expr_32.ns = 0L;
    printf("\nSTMT_EXEC;;4078\n");
yyval.rel = __constr_expr_32;
    printf("\nSTMT_EXEC;;4079\n");
yyval.rel.seconds = (long_time_t)1;
    printf("\nSTMT_EXEC;;4080\n");
goto switch_break;
  case_75:
    {
printf("\nSTMT_EXEC;;4082\n");
__constr_expr_33.year = 0L;
}

    printf("\nSTMT_EXEC;;4083\n");
__constr_expr_33.month = 0L;
    printf("\nSTMT_EXEC;;4084\n");
__constr_expr_33.day = 0L;
    printf("\nSTMT_EXEC;;4085\n");
__constr_expr_33.hour = 0L;
    printf("\nSTMT_EXEC;;4086\n");
__constr_expr_33.minutes = 0L;
    printf("\nSTMT_EXEC;;4087\n");
__constr_expr_33.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4088\n");
__constr_expr_33.ns = 0L;
    printf("\nSTMT_EXEC;;4089\n");
yyval.rel = __constr_expr_33;
    printf("\nSTMT_EXEC;;4090\n");
yyval.rel.year = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;4091\n");
goto switch_break;
  case_76:
    {
printf("\nSTMT_EXEC;;4093\n");
__constr_expr_34.year = 0L;
}

    printf("\nSTMT_EXEC;;4094\n");
__constr_expr_34.month = 0L;
    printf("\nSTMT_EXEC;;4095\n");
__constr_expr_34.day = 0L;
    printf("\nSTMT_EXEC;;4096\n");
__constr_expr_34.hour = 0L;
    printf("\nSTMT_EXEC;;4097\n");
__constr_expr_34.minutes = 0L;
    printf("\nSTMT_EXEC;;4098\n");
__constr_expr_34.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4099\n");
__constr_expr_34.ns = 0L;
    printf("\nSTMT_EXEC;;4100\n");
yyval.rel = __constr_expr_34;
    printf("\nSTMT_EXEC;;4101\n");
yyval.rel.month = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;4102\n");
goto switch_break;
  case_77:
    {
printf("\nSTMT_EXEC;;4104\n");
__constr_expr_35.year = 0L;
}

    printf("\nSTMT_EXEC;;4105\n");
__constr_expr_35.month = 0L;
    printf("\nSTMT_EXEC;;4106\n");
__constr_expr_35.day = 0L;
    printf("\nSTMT_EXEC;;4107\n");
__constr_expr_35.hour = 0L;
    printf("\nSTMT_EXEC;;4108\n");
__constr_expr_35.minutes = 0L;
    printf("\nSTMT_EXEC;;4109\n");
__constr_expr_35.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4110\n");
__constr_expr_35.ns = 0L;
    printf("\nSTMT_EXEC;;4111\n");
yyval.rel = __constr_expr_35;
    printf("\nSTMT_EXEC;;4112\n");
yyval.rel.day = (yyvsp + -1)->textintval.value * (yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;4113\n");
goto switch_break;
  case_78:
    {
printf("\nSTMT_EXEC;;4115\n");
__constr_expr_36.year = 0L;
}

    printf("\nSTMT_EXEC;;4116\n");
__constr_expr_36.month = 0L;
    printf("\nSTMT_EXEC;;4117\n");
__constr_expr_36.day = 0L;
    printf("\nSTMT_EXEC;;4118\n");
__constr_expr_36.hour = 0L;
    printf("\nSTMT_EXEC;;4119\n");
__constr_expr_36.minutes = 0L;
    printf("\nSTMT_EXEC;;4120\n");
__constr_expr_36.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4121\n");
__constr_expr_36.ns = 0L;
    printf("\nSTMT_EXEC;;4122\n");
yyval.rel = __constr_expr_36;
    printf("\nSTMT_EXEC;;4123\n");
yyval.rel.hour = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;4124\n");
goto switch_break;
  case_79:
    {
printf("\nSTMT_EXEC;;4126\n");
__constr_expr_37.year = 0L;
}

    printf("\nSTMT_EXEC;;4127\n");
__constr_expr_37.month = 0L;
    printf("\nSTMT_EXEC;;4128\n");
__constr_expr_37.day = 0L;
    printf("\nSTMT_EXEC;;4129\n");
__constr_expr_37.hour = 0L;
    printf("\nSTMT_EXEC;;4130\n");
__constr_expr_37.minutes = 0L;
    printf("\nSTMT_EXEC;;4131\n");
__constr_expr_37.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4132\n");
__constr_expr_37.ns = 0L;
    printf("\nSTMT_EXEC;;4133\n");
yyval.rel = __constr_expr_37;
    printf("\nSTMT_EXEC;;4134\n");
yyval.rel.minutes = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;4135\n");
goto switch_break;
  case_80:
    {
printf("\nSTMT_EXEC;;4137\n");
__constr_expr_38.year = 0L;
}

    printf("\nSTMT_EXEC;;4138\n");
__constr_expr_38.month = 0L;
    printf("\nSTMT_EXEC;;4139\n");
__constr_expr_38.day = 0L;
    printf("\nSTMT_EXEC;;4140\n");
__constr_expr_38.hour = 0L;
    printf("\nSTMT_EXEC;;4141\n");
__constr_expr_38.minutes = 0L;
    printf("\nSTMT_EXEC;;4142\n");
__constr_expr_38.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4143\n");
__constr_expr_38.ns = 0L;
    printf("\nSTMT_EXEC;;4144\n");
yyval.rel = __constr_expr_38;
    printf("\nSTMT_EXEC;;4145\n");
yyval.rel.seconds = (yyvsp + -1)->textintval.value;
    printf("\nSTMT_EXEC;;4146\n");
goto switch_break;
  case_81:
    {
printf("\nSTMT_EXEC;;4148\n");
__constr_expr_39.year = 0L;
}

    printf("\nSTMT_EXEC;;4149\n");
__constr_expr_39.month = 0L;
    printf("\nSTMT_EXEC;;4150\n");
__constr_expr_39.day = 0L;
    printf("\nSTMT_EXEC;;4151\n");
__constr_expr_39.hour = 0L;
    printf("\nSTMT_EXEC;;4152\n");
__constr_expr_39.minutes = 0L;
    printf("\nSTMT_EXEC;;4153\n");
__constr_expr_39.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4154\n");
__constr_expr_39.ns = 0L;
    printf("\nSTMT_EXEC;;4155\n");
yyval.rel = __constr_expr_39;
    printf("\nSTMT_EXEC;;4156\n");
yyval.rel.day = (yyvsp + 0)->intval;
    printf("\nSTMT_EXEC;;4157\n");
goto switch_break;
  case_85:
    {
printf("\nSTMT_EXEC;;4159\n");
yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;
}

    printf("\nSTMT_EXEC;;4160\n");
yyval.timespec.tv_nsec = (__syscall_slong_t)0;
    printf("\nSTMT_EXEC;;4161\n");
goto switch_break;
  case_87:
    {
printf("\nSTMT_EXEC;;4163\n");
yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;
}

    printf("\nSTMT_EXEC;;4164\n");
yyval.timespec.tv_nsec = (__syscall_slong_t)0;
    printf("\nSTMT_EXEC;;4165\n");
goto switch_break;
  case_88:
    {
printf("\nSTMT_EXEC;;4167\n");
digits_to_date_time(pc, (yyvsp + 0)->textintval);
}

    printf("\nSTMT_EXEC;;4168\n");
goto switch_break;
  case_89:
    {
printf("\nSTMT_EXEC;;4170\n");
digits_to_date_time(pc, (yyvsp + -1)->textintval);
}

    printf("\nSTMT_EXEC;;4171\n");
apply_relative_time(pc, (yyvsp + 0)->rel, 1);
    printf("\nSTMT_EXEC;;4172\n");
goto switch_break;
  case_90:
    {
printf("\nSTMT_EXEC;;4174\n");
yyval.intval = -1L;
}

    printf("\nSTMT_EXEC;;4175\n");
goto switch_break;
  case_91:
    {
printf("\nSTMT_EXEC;;4177\n");
yyval.intval = (yyvsp + 0)->textintval.value;
}

    printf("\nSTMT_EXEC;;4178\n");
goto switch_break;
  switch_default:
    {
printf("\nSTMT_EXEC;;4180\n");
goto switch_break;
}

  switch_break:
    {
printf("\nSTMT_EXEC;;4182\n");
yyvsp -= yylen;
}

    printf("\nSTMT_EXEC;;4183\n");
yyssp -= yylen;
    printf("\nSTMT_EXEC;;4184\n");
yylen = 0;
    printf("\nSTMT_EXEC;;4185\n");
yyvsp++;
    printf("\nSTMT_EXEC;;4186\n");
*yyvsp = yyval;
    printf("\nSTMT_EXEC;;4187\n");
yyn = (int)yyr1[yyn];
    printf("\nSTMT_EXEC;;4188\n");
yystate = (int)((int const)yypgoto[yyn - 28] + (int const) * yyssp);
    printf("\nSTMT_EXEC;;4189\n");
if (0 <= yystate) {
      printf("\nSTMT_EXEC;;4190\n");
if (yystate <= 112) {
        printf("\nSTMT_EXEC;;4191\n");
if ((int const)yycheck[yystate] == (int const) * yyssp) {
          printf("\nSTMT_EXEC;;4192\n");
yystate = (int)yytable[yystate];
        } else {
          printf("\nSTMT_EXEC;;4194\n");
yystate = (int)yydefgoto[yyn - 28];
        }
      } else {
        printf("\nSTMT_EXEC;;4197\n");
yystate = (int)yydefgoto[yyn - 28];
      }
    } else {
      printf("\nSTMT_EXEC;;4200\n");
yystate = (int)yydefgoto[yyn - 28];
    }
    printf("\nSTMT_EXEC;;4202\n");
goto yynewstate;
  yyerrlab:
    {
printf("\nSTMT_EXEC;;4204\n");
if (!yyerrstatus) {
      printf("\nSTMT_EXEC;;4205\n");
yynerrs++;
      printf("\nSTMT_EXEC;;4206\n");
yyerror((parser_control const *)pc, "syntax error");
    }
}

    printf("\nSTMT_EXEC;;4208\n");
if (yyerrstatus == 3) {
      printf("\nSTMT_EXEC;;4209\n");
if (yychar <= 0) {
        printf("\nSTMT_EXEC;;4210\n");
if (yychar == 0) {
          printf("\nSTMT_EXEC;;4211\n");
goto yyabortlab;
        }
      } else {
        printf("\nSTMT_EXEC;;4214\n");
yydestruct("Error: discarding", yytoken, &yylval, pc);
        printf("\nSTMT_EXEC;;4215\n");
yychar = -2;
      }
    }
    printf("\nSTMT_EXEC;;4218\n");
goto yyerrlab1;
    printf("\nSTMT_EXEC;;4219\n");
yyvsp -= yylen;
    printf("\nSTMT_EXEC;;4220\n");
yyssp -= yylen;
    printf("\nSTMT_EXEC;;4221\n");
yylen = 0;
    printf("\nSTMT_EXEC;;4222\n");
yystate = (int)*yyssp;
    printf("\nSTMT_EXEC;;4223\n");
goto yyerrlab1;
  yyerrlab1:
    {
printf("\nSTMT_EXEC;;4225\n");
yyerrstatus = 3;
}

    printf("\nSTMT_EXEC;;4226\n");
while (1) {
      printf("\nSTMT_EXEC;;4227\n");
yyn = (int)yypact[yystate];
      printf("\nSTMT_EXEC;;4228\n");
if (yyn != -93) {
        printf("\nSTMT_EXEC;;4229\n");
yyn++;
        printf("\nSTMT_EXEC;;4230\n");
if (0 <= yyn) {
          printf("\nSTMT_EXEC;;4231\n");
if (yyn <= 112) {
            printf("\nSTMT_EXEC;;4232\n");
if ((int const)yycheck[yyn] == 1) {
              printf("\nSTMT_EXEC;;4233\n");
yyn = (int)yytable[yyn];
              printf("\nSTMT_EXEC;;4234\n");
if (0 < yyn) {
                printf("\nSTMT_EXEC;;4235\n");
goto while_break___1;
              }
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;4241\n");
if ((unsigned long)yyssp == (unsigned long)yyss) {
        printf("\nSTMT_EXEC;;4242\n");
goto yyabortlab;
      }
      printf("\nSTMT_EXEC;;4244\n");
yydestruct("Error: popping", (int)yystos[yystate], yyvsp, pc);
      printf("\nSTMT_EXEC;;4245\n");
yyvsp--;
      printf("\nSTMT_EXEC;;4246\n");
yyssp--;
      printf("\nSTMT_EXEC;;4247\n");
yystate = (int)*yyssp;
    }
  while_break___1:
    {
printf("\nSTMT_EXEC;;4250\n");
yyvsp++;
}

    printf("\nSTMT_EXEC;;4251\n");
*yyvsp = yylval;
    printf("\nSTMT_EXEC;;4252\n");
yystate = yyn;
    printf("\nSTMT_EXEC;;4253\n");
goto yynewstate;
  yyacceptlab:
    {
printf("\nSTMT_EXEC;;4255\n");
yyresult = 0;
}

    printf("\nSTMT_EXEC;;4256\n");
goto yyreturn;
  yyabortlab:
    {
printf("\nSTMT_EXEC;;4258\n");
yyresult = 1;
}

    printf("\nSTMT_EXEC;;4259\n");
goto yyreturn;
  yyexhaustedlab:
    {
printf("\nSTMT_EXEC;;4261\n");
yyerror((parser_control const *)pc, "memory exhausted");
}

    printf("\nSTMT_EXEC;;4262\n");
yyresult = 2;
  yyreturn:
    {
printf("\nSTMT_EXEC;;4264\n");
if (yychar != -2) {
      printf("\nSTMT_EXEC;;4265\n");
yydestruct("Cleanup: discarding lookahead", yytoken, &yylval, pc);
    }
}

    printf("\nSTMT_EXEC;;4267\n");
yyvsp -= yylen;
    printf("\nSTMT_EXEC;;4268\n");
yyssp -= yylen;
    printf("\nSTMT_EXEC;;4269\n");
while (1) {
      printf("\nSTMT_EXEC;;4270\n");
if (!((unsigned long)yyssp != (unsigned long)yyss)) {
        printf("\nSTMT_EXEC;;4271\n");
goto while_break___2;
      }
      printf("\nSTMT_EXEC;;4273\n");
yydestruct("Cleanup: popping", (int)yystos[*yyssp], yyvsp, pc);
      printf("\nSTMT_EXEC;;4274\n");
yyvsp--;
      printf("\nSTMT_EXEC;;4275\n");
yyssp--;
    }
  while_break___2:;
    printf("\nSTMT_EXEC;;4278\n");
if ((unsigned long)yyss != (unsigned long)(yyssa)) {
      printf("\nSTMT_EXEC;;4279\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)yyss);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;4281\n");
printf("\nFUNC_RETURN;;\n");
return (yyresult);
  }
printf("\nFUNC_RETURN;;\n");
}
static table const meridian_table[5] = {{"AM", 270, 0},
                                        {"A.M.", 270, 0},
                                        {"PM", 270, 1},
                                        {"P.M.", 270, 1},
                                        {(char const *)((void *)0), 0, 0}};
static table const dst_table[1] = {{"DST", 259, 0}};
static table const month_and_day_table[25] = {
    {"JANUARY", 271, 1},
    {"FEBRUARY", 271, 2},
    {"MARCH", 271, 3},
    {"APRIL", 271, 4},
    {"MAY", 271, 5},
    {"JUNE", 271, 6},
    {"JULY", 271, 7},
    {"AUGUST", 271, 8},
    {"SEPTEMBER", 271, 9},
    {"SEPT", 271, 9},
    {"OCTOBER", 271, 10},
    {"NOVEMBER", 271, 11},
    {"DECEMBER", 271, 12},
    {"SUNDAY", 267, 0},
    {"MONDAY", 267, 1},
    {"TUESDAY", 267, 2},
    {"TUES", 267, 2},
    {"WEDNESDAY", 267, 3},
    {"WEDNES", 267, 3},
    {"THURSDAY", 267, 4},
    {"THUR", 267, 4},
    {"THURS", 267, 4},
    {"FRIDAY", 267, 5},
    {"SATURDAY", 267, 6},
    {(char const *)((void *)0), 0, 0}};
static table const time_units_table[11] = {{"YEAR", 260, 1},
                                           {"MONTH", 261, 1},
                                           {"FORTNIGHT", 265, 14},
                                           {"WEEK", 265, 7},
                                           {"DAY", 265, 1},
                                           {"HOUR", 262, 1},
                                           {"MINUTE", 263, 1},
                                           {"MIN", 263, 1},
                                           {"SECOND", 264, 1},
                                           {"SEC", 264, 1},
                                           {(char const *)((void *)0), 0, 0}};
static table const relative_time_table[21] = {
    {"TOMORROW", 266, 1},
    {"YESTERDAY", 266, -1},
    {"TODAY", 266, 0},
    {"NOW", 266, 0},
    {"LAST", 272, -1},
    {"THIS", 272, 0},
    {"NEXT", 272, 1},
    {"FIRST", 272, 1},
    {"THIRD", 272, 3},
    {"FOURTH", 272, 4},
    {"FIFTH", 272, 5},
    {"SIXTH", 272, 6},
    {"SEVENTH", 272, 7},
    {"EIGHTH", 272, 8},
    {"NINTH", 272, 9},
    {"TENTH", 272, 10},
    {"ELEVENTH", 272, 11},
    {"TWELFTH", 272, 12},
    {"AGO", 258, -1},
    {"HENCE", 258, 1},
    {(char const *)((void *)0), 0, 0}};
static table const universal_time_zone_table[4] = {
    {"GMT", 273, 0},
    {"UT", 273, 0},
    {"UTC", 273, 0},
    {(char const *)((void *)0), 0, 0}};
static table const time_zone_table[48] = {
    {"WET", 273, 0},     {"WEST", 268, 0},   {"BST", 268, 0},
    {"ART", 273, -180},  {"BRT", 273, -180}, {"BRST", 268, -180},
    {"NST", 273, -210},  {"NDT", 268, -210}, {"AST", 273, -240},
    {"ADT", 268, -240},  {"CLT", 273, -240}, {"CLST", 268, -240},
    {"EST", 273, -300},  {"EDT", 268, -300}, {"CST", 273, -360},
    {"CDT", 268, -360},  {"MST", 273, -420}, {"MDT", 268, -420},
    {"PST", 273, -480},  {"PDT", 268, -480}, {"AKST", 273, -540},
    {"AKDT", 268, -540}, {"HST", 273, -600}, {"HAST", 273, -600},
    {"HADT", 268, -600}, {"SST", 273, -720}, {"WAT", 273, 60},
    {"CET", 273, 60},    {"CEST", 268, 60},  {"MET", 273, 60},
    {"MEZ", 273, 60},    {"MEST", 268, 60},  {"MESZ", 268, 60},
    {"EET", 273, 120},   {"EEST", 268, 120}, {"CAT", 273, 120},
    {"SAST", 273, 120},  {"EAT", 273, 180},  {"MSK", 273, 180},
    {"MSD", 268, 180},   {"IST", 273, 330},  {"SGT", 273, 480},
    {"KST", 273, 540},   {"JST", 273, 540},  {"GST", 273, 600},
    {"NZST", 273, 720},  {"NZDT", 268, 720}, {(char const *)((void *)0), 0, 0}};
static table const military_table[26] = {
    {"A", 273, -60},  {"B", 273, -120},
    {"C", 273, -180}, {"D", 273, -240},
    {"E", 273, -300}, {"F", 273, -360},
    {"G", 273, -420}, {"H", 273, -480},
    {"I", 273, -540}, {"K", 273, -600},
    {"L", 273, -660}, {"M", 273, -720},
    {"N", 273, 60},   {"O", 273, 120},
    {"P", 273, 180},  {"Q", 273, 240},
    {"R", 273, 300},  {"S", 273, 360},
    {"T", 'T', 0},    {"U", 273, 480},
    {"V", 273, 540},  {"W", 273, 600},
    {"X", 273, 660},  {"Y", 273, 720},
    {"Z", 273, 0},    {(char const *)((void *)0), 0, 0}};
static long time_zone_hhmm(parser_control *pc, textint s, long mm) {
  printf("\nFUNC_CALL;time_zone_hhmm(parser_control *,textint,long);\n");
printf("\nSTMT_EXEC;;4386\n");
long n_minutes;
  printf("\nSTMT_EXEC;;4387\n");
long tmp;
  printf("\nSTMT_EXEC;;4388\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;4390\n");
if (s.digits <= 2UL) {
      printf("\nSTMT_EXEC;;4391\n");
if (mm < 0L) {
        printf("\nSTMT_EXEC;;4392\n");
s.value *= 100L;
      }
    }
    printf("\nSTMT_EXEC;;4395\n");
if (mm < 0L) {
      printf("\nSTMT_EXEC;;4396\n");
n_minutes = (s.value / 100L) * 60L + s.value % 100L;
    } else {
      printf("\nSTMT_EXEC;;4398\n");
if (s.negative) {
        printf("\nSTMT_EXEC;;4399\n");
tmp = -mm;
      } else {
        printf("\nSTMT_EXEC;;4401\n");
tmp = mm;
      }
      printf("\nSTMT_EXEC;;4403\n");
n_minutes = s.value * 60L + tmp;
    }
    printf("\nSTMT_EXEC;;4405\n");
printf("\nFUNC_CALL;abs(int);\n");
tmp___0 = abs((int)n_minutes);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;4406\n");
if (1440 < tmp___0) {
      printf("\nSTMT_EXEC;;4407\n");
(pc->zones_seen)++;
    }
    printf("\nSTMT_EXEC;;4409\n");
printf("\nFUNC_RETURN;;\n");
return (n_minutes);
  }
printf("\nFUNC_RETURN;;\n");
}
static int to_hour(long hours, int meridian) {
  printf("\nFUNC_CALL;to_hour(long,int);\n");
printf("\nSTMT_EXEC;;4413\n");
long tmp;
  printf("\nSTMT_EXEC;;4414\n");
int tmp___0;
  printf("\nSTMT_EXEC;;4415\n");
long tmp___1;
  printf("\nSTMT_EXEC;;4416\n");
int tmp___2;
  printf("\nSTMT_EXEC;;4417\n");
long tmp___3;
  {
    printf("\nSTMT_EXEC;;4419\n");
if (meridian == 0) {
      printf("\nSTMT_EXEC;;4420\n");
goto case_0;
    }
    printf("\nSTMT_EXEC;;4422\n");
if (meridian == 1) {
      printf("\nSTMT_EXEC;;4423\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;4425\n");
goto switch_default;
  switch_default:
    {
printf("\nSTMT_EXEC;;4427\n");
if (0L <= hours) {
      printf("\nSTMT_EXEC;;4428\n");
if (hours < 24L) {
        printf("\nSTMT_EXEC;;4429\n");
tmp = hours;
      } else {
        printf("\nSTMT_EXEC;;4431\n");
tmp = -1L;
      }
    } else {
      printf("\nSTMT_EXEC;;4434\n");
tmp = -1L;
    }
}

    printf("\nSTMT_EXEC;;4436\n");
printf("\nFUNC_RETURN;;\n");
return ((int)tmp);
  case_0:
    {
printf("\nSTMT_EXEC;;4438\n");
if (0L < hours) {
      printf("\nSTMT_EXEC;;4439\n");
if (hours < 12L) {
        printf("\nSTMT_EXEC;;4440\n");
tmp___1 = hours;
      } else {
        printf("\nSTMT_EXEC;;4442\n");
goto _L;
      }
    } else {
    _L:
      {
printf("\nSTMT_EXEC;;4446\n");
if (hours == 12L) {
        printf("\nSTMT_EXEC;;4447\n");
tmp___0 = 0;
      } else {
        printf("\nSTMT_EXEC;;4449\n");
tmp___0 = -1;
      }
}

      printf("\nSTMT_EXEC;;4451\n");
tmp___1 = (long)tmp___0;
    }
}

    printf("\nSTMT_EXEC;;4453\n");
printf("\nFUNC_RETURN;;\n");
return ((int)tmp___1);
  case_1:
    {
printf("\nSTMT_EXEC;;4455\n");
if (0L < hours) {
      printf("\nSTMT_EXEC;;4456\n");
if (hours < 12L) {
        printf("\nSTMT_EXEC;;4457\n");
tmp___3 = hours + 12L;
      } else {
        printf("\nSTMT_EXEC;;4459\n");
goto _L___0;
      }
    } else {
    _L___0:
      {
printf("\nSTMT_EXEC;;4463\n");
if (hours == 12L) {
        printf("\nSTMT_EXEC;;4464\n");
tmp___2 = 12;
      } else {
        printf("\nSTMT_EXEC;;4466\n");
tmp___2 = -1;
      }
}

      printf("\nSTMT_EXEC;;4468\n");
tmp___3 = (long)tmp___2;
    }
}

    printf("\nSTMT_EXEC;;4470\n");
printf("\nFUNC_RETURN;;\n");
return ((int)tmp___3);
    printf("\nSTMT_EXEC;;4471\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static long to_year(textint textyear) {
  printf("\nFUNC_CALL;to_year(textint);\n");
printf("\nSTMT_EXEC;;4475\n");
long year___1;
  printf("\nSTMT_EXEC;;4476\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;4478\n");
year___1 = textyear.value;
    printf("\nSTMT_EXEC;;4479\n");
if (year___1 < 0L) {
      printf("\nSTMT_EXEC;;4480\n");
year___1 = -year___1;
    } else {
      printf("\nSTMT_EXEC;;4482\n");
if (textyear.digits == 2UL) {
        printf("\nSTMT_EXEC;;4483\n");
if (year___1 < 69L) {
          printf("\nSTMT_EXEC;;4484\n");
tmp = 2000;
        } else {
          printf("\nSTMT_EXEC;;4486\n");
tmp = 1900;
        }
        printf("\nSTMT_EXEC;;4488\n");
year___1 += (long)tmp;
      }
    }
    printf("\nSTMT_EXEC;;4491\n");
printf("\nFUNC_RETURN;;\n");
return (year___1);
  }
printf("\nFUNC_RETURN;;\n");
}
static table const *__attribute__((__pure__))
lookup_zone(parser_control const *pc, char const *name) {
  printf("\nFUNC_CALL;lookup_zone(const parser_control *,const char *);\n");
printf("\nSTMT_EXEC;;4496\n");
table const *tp;
  printf("\nSTMT_EXEC;;4497\n");
int tmp;
  printf("\nSTMT_EXEC;;4498\n");
int tmp___0;
  printf("\nSTMT_EXEC;;4499\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;4501\n");
tp = universal_time_zone_table;
    printf("\nSTMT_EXEC;;4502\n");
while (1) {
      printf("\nSTMT_EXEC;;4503\n");
if (!tp->name) {
        printf("\nSTMT_EXEC;;4504\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;4506\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp(name, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4507\n");
if (tmp == 0) {
        printf("\nSTMT_EXEC;;4508\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
      printf("\nSTMT_EXEC;;4510\n");
tp++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;4513\n");
tp = (table const *)(pc->local_time_zone_table);
}

    printf("\nSTMT_EXEC;;4514\n");
while (1) {
      printf("\nSTMT_EXEC;;4515\n");
if (!tp->name) {
        printf("\nSTMT_EXEC;;4516\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;4518\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___0 = strcmp(name, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4519\n");
if (tmp___0 == 0) {
        printf("\nSTMT_EXEC;;4520\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
      printf("\nSTMT_EXEC;;4522\n");
tp++;
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;4525\n");
tp = time_zone_table;
}

    printf("\nSTMT_EXEC;;4526\n");
while (1) {
      printf("\nSTMT_EXEC;;4527\n");
if (!tp->name) {
        printf("\nSTMT_EXEC;;4528\n");
goto while_break___1;
      }
      printf("\nSTMT_EXEC;;4530\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp(name, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4531\n");
if (tmp___1 == 0) {
        printf("\nSTMT_EXEC;;4532\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
      printf("\nSTMT_EXEC;;4534\n");
tp++;
    }
  while_break___1:;
    printf("\nSTMT_EXEC;;4537\n");
printf("\nFUNC_RETURN;;\n");
return ((table const *)((void *)0));
  }
printf("\nFUNC_RETURN;;\n");
}
static table const *lookup_word(parser_control const *pc, char *word___0) {
  printf("\nFUNC_CALL;lookup_word(const parser_control *,char *);\n");
printf("\nSTMT_EXEC;;4541\n");
char *p;
  printf("\nSTMT_EXEC;;4542\n");
char *q;
  printf("\nSTMT_EXEC;;4543\n");
size_t wordlen;
  printf("\nSTMT_EXEC;;4544\n");
table const *tp;
  printf("\nSTMT_EXEC;;4545\n");
_Bool period_found;
  printf("\nSTMT_EXEC;;4546\n");
_Bool abbrev;
  printf("\nSTMT_EXEC;;4547\n");
unsigned char ch;
  printf("\nSTMT_EXEC;;4548\n");
int tmp;
  printf("\nSTMT_EXEC;;4549\n");
int tmp___0;
  printf("\nSTMT_EXEC;;4550\n");
int tmp___1;
  printf("\nSTMT_EXEC;;4551\n");
int tmp___2;
  printf("\nSTMT_EXEC;;4552\n");
int tmp___3;
  printf("\nSTMT_EXEC;;4553\n");
int tmp___4;
  printf("\nSTMT_EXEC;;4554\n");
int tmp___5;
  printf("\nSTMT_EXEC;;4555\n");
int tmp___6;
  printf("\nSTMT_EXEC;;4556\n");
int tmp___7;
  printf("\nSTMT_EXEC;;4557\n");
char tmp___8;
  {
    printf("\nSTMT_EXEC;;4559\n");
p = word___0;
    printf("\nSTMT_EXEC;;4560\n");
while (1) {
      printf("\nSTMT_EXEC;;4561\n");
if (!*p) {
        printf("\nSTMT_EXEC;;4562\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;4564\n");
ch = (unsigned char)*p;
      printf("\nSTMT_EXEC;;4565\n");
*p = (char)c_toupper((int)ch);
      printf("\nSTMT_EXEC;;4566\n");
p++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;4569\n");
tp = meridian_table;
}

    printf("\nSTMT_EXEC;;4570\n");
while (1) {
      printf("\nSTMT_EXEC;;4571\n");
if (!tp->name) {
        printf("\nSTMT_EXEC;;4572\n");
goto while_break___0;
      }
      printf("\nSTMT_EXEC;;4574\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)word___0, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4575\n");
if (tmp == 0) {
        printf("\nSTMT_EXEC;;4576\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
      printf("\nSTMT_EXEC;;4578\n");
tp++;
    }
  while_break___0:
    {
printf("\nSTMT_EXEC;;4581\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
wordlen = strlen((char const *)word___0);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;4582\n");
if (wordlen == 3UL) {
      printf("\nSTMT_EXEC;;4583\n");
tmp___0 = 1;
    } else {
      printf("\nSTMT_EXEC;;4585\n");
if (wordlen == 4UL) {
        printf("\nSTMT_EXEC;;4586\n");
if ((int)*(word___0 + 3) == 46) {
          printf("\nSTMT_EXEC;;4587\n");
tmp___0 = 1;
        } else {
          printf("\nSTMT_EXEC;;4589\n");
tmp___0 = 0;
        }
      } else {
        printf("\nSTMT_EXEC;;4592\n");
tmp___0 = 0;
      }
    }
    printf("\nSTMT_EXEC;;4595\n");
abbrev = (_Bool)tmp___0;
    printf("\nSTMT_EXEC;;4596\n");
tp = month_and_day_table;
    printf("\nSTMT_EXEC;;4597\n");
while (1) {
      printf("\nSTMT_EXEC;;4598\n");
if (!tp->name) {
        printf("\nSTMT_EXEC;;4599\n");
goto while_break___1;
      }
      printf("\nSTMT_EXEC;;4601\n");
if (abbrev) {
        printf("\nSTMT_EXEC;;4602\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___1 =
            strncmp((char const *)word___0, (char const *)tp->name, (size_t)3);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;4604\n");
tmp___3 = tmp___1;
      } else {
        printf("\nSTMT_EXEC;;4606\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___2 = strcmp((char const *)word___0, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;4607\n");
tmp___3 = tmp___2;
      }
      printf("\nSTMT_EXEC;;4609\n");
if (tmp___3 == 0) {
        printf("\nSTMT_EXEC;;4610\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
      printf("\nSTMT_EXEC;;4612\n");
tp++;
    }
  while_break___1:
    {
printf("\nSTMT_EXEC;;4615\n");
tp = (table const *)lookup_zone(pc, (char const *)word___0);
}

    printf("\nSTMT_EXEC;;4616\n");
if (tp) {
      printf("\nSTMT_EXEC;;4617\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
    }
    printf("\nSTMT_EXEC;;4619\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___4 = strcmp((char const *)word___0, (char const *)dst_table[0].name);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;4620\n");
if (tmp___4 == 0) {
      printf("\nSTMT_EXEC;;4621\n");
printf("\nFUNC_RETURN;;\n");
return (dst_table);
    }
    printf("\nSTMT_EXEC;;4623\n");
tp = time_units_table;
    printf("\nSTMT_EXEC;;4624\n");
while (1) {
      printf("\nSTMT_EXEC;;4625\n");
if (!tp->name) {
        printf("\nSTMT_EXEC;;4626\n");
goto while_break___2;
      }
      printf("\nSTMT_EXEC;;4628\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___5 = strcmp((char const *)word___0, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4629\n");
if (tmp___5 == 0) {
        printf("\nSTMT_EXEC;;4630\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
      printf("\nSTMT_EXEC;;4632\n");
tp++;
    }
  while_break___2:;
    printf("\nSTMT_EXEC;;4635\n");
if ((int)*(word___0 + (wordlen - 1UL)) == 83) {
      printf("\nSTMT_EXEC;;4636\n");
*(word___0 + (wordlen - 1UL)) = (char)'\000';
      printf("\nSTMT_EXEC;;4637\n");
tp = time_units_table;
      printf("\nSTMT_EXEC;;4638\n");
while (1) {
        printf("\nSTMT_EXEC;;4639\n");
if (!tp->name) {
          printf("\nSTMT_EXEC;;4640\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;4642\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___6 = strcmp((char const *)word___0, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;4643\n");
if (tmp___6 == 0) {
          printf("\nSTMT_EXEC;;4644\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
        }
        printf("\nSTMT_EXEC;;4646\n");
tp++;
      }
    while_break___3:
      {
printf("\nSTMT_EXEC;;4649\n");
*(word___0 + (wordlen - 1UL)) = (char)'S';
}

    }
    printf("\nSTMT_EXEC;;4651\n");
tp = relative_time_table;
    printf("\nSTMT_EXEC;;4652\n");
while (1) {
      printf("\nSTMT_EXEC;;4653\n");
if (!tp->name) {
        printf("\nSTMT_EXEC;;4654\n");
goto while_break___4;
      }
      printf("\nSTMT_EXEC;;4656\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___7 = strcmp((char const *)word___0, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4657\n");
if (tmp___7 == 0) {
        printf("\nSTMT_EXEC;;4658\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
      printf("\nSTMT_EXEC;;4660\n");
tp++;
    }
  while_break___4:;
    printf("\nSTMT_EXEC;;4663\n");
if (wordlen == 1UL) {
      printf("\nSTMT_EXEC;;4664\n");
tp = military_table;
      printf("\nSTMT_EXEC;;4665\n");
while (1) {
        printf("\nSTMT_EXEC;;4666\n");
if (!tp->name) {
          printf("\nSTMT_EXEC;;4667\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;4669\n");
if ((int)*(word___0 + 0) == (int)*(tp->name + 0)) {
          printf("\nSTMT_EXEC;;4670\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
        }
        printf("\nSTMT_EXEC;;4672\n");
tp++;
      }
    while_break___5:;
    }
    printf("\nSTMT_EXEC;;4676\n");
period_found = (_Bool)0;
    printf("\nSTMT_EXEC;;4677\n");
q = word___0;
    printf("\nSTMT_EXEC;;4678\n");
p = q;
    printf("\nSTMT_EXEC;;4679\n");
while (1) {
      printf("\nSTMT_EXEC;;4680\n");
tmp___8 = *q;
      printf("\nSTMT_EXEC;;4681\n");
*p = tmp___8;
      printf("\nSTMT_EXEC;;4682\n");
if (!tmp___8) {
        printf("\nSTMT_EXEC;;4683\n");
goto while_break___6;
      }
      printf("\nSTMT_EXEC;;4685\n");
if ((int)*q == 46) {
        printf("\nSTMT_EXEC;;4686\n");
period_found = (_Bool)1;
      } else {
        printf("\nSTMT_EXEC;;4688\n");
p++;
      }
      printf("\nSTMT_EXEC;;4690\n");
q++;
    }
  while_break___6:;
    printf("\nSTMT_EXEC;;4693\n");
if (period_found) {
      printf("\nSTMT_EXEC;;4694\n");
tp = (table const *)lookup_zone(pc, (char const *)word___0);
      printf("\nSTMT_EXEC;;4695\n");
if (tp) {
        printf("\nSTMT_EXEC;;4696\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
    }
    printf("\nSTMT_EXEC;;4699\n");
printf("\nFUNC_RETURN;;\n");
return ((table const *)((void *)0));
  }
printf("\nFUNC_RETURN;;\n");
}
static int yylex(union YYSTYPE *lvalp, parser_control *pc) {
  printf("\nFUNC_CALL;yylex(union YYSTYPE *,parser_control *);\n");
printf("\nSTMT_EXEC;;4703\n");
unsigned char c;
  printf("\nSTMT_EXEC;;4704\n");
size_t count;
  printf("\nSTMT_EXEC;;4705\n");
_Bool tmp;
  printf("\nSTMT_EXEC;;4706\n");
char const *p;
  printf("\nSTMT_EXEC;;4707\n");
int sign;
  printf("\nSTMT_EXEC;;4708\n");
unsigned long value;
  printf("\nSTMT_EXEC;;4709\n");
_Bool tmp___0;
  printf("\nSTMT_EXEC;;4710\n");
unsigned long value1;
  printf("\nSTMT_EXEC;;4711\n");
time_t s;
  printf("\nSTMT_EXEC;;4712\n");
int ns;
  printf("\nSTMT_EXEC;;4713\n");
int digits;
  printf("\nSTMT_EXEC;;4714\n");
unsigned long value1___0;
  printf("\nSTMT_EXEC;;4715\n");
char const *tmp___1;
  printf("\nSTMT_EXEC;;4716\n");
char const *tmp___2;
  printf("\nSTMT_EXEC;;4717\n");
int tmp___3;
  printf("\nSTMT_EXEC;;4718\n");
int tmp___4;
  printf("\nSTMT_EXEC;;4719\n");
char buff[20];
  printf("\nSTMT_EXEC;;4720\n");
char *p___0;
  printf("\nSTMT_EXEC;;4721\n");
table const *tp;
  printf("\nSTMT_EXEC;;4722\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;4723\n");
_Bool tmp___6;
  printf("\nSTMT_EXEC;;4724\n");
_Bool tmp___7;
  printf("\nSTMT_EXEC;;4725\n");
char const *tmp___8;
  printf("\nSTMT_EXEC;;4726\n");
int tmp___9;
  printf("\nSTMT_EXEC;;4727\n");
char const *tmp___10;
  {
    printf("\nSTMT_EXEC;;4729\n");
while (1) {
      printf("\nSTMT_EXEC;;4730\n");
while (1) {
        printf("\nSTMT_EXEC;;4731\n");
c = (unsigned char)*(pc->input);
        printf("\nSTMT_EXEC;;4732\n");
tmp = c_isspace((int)c);
        printf("\nSTMT_EXEC;;4733\n");
if (!tmp) {
          printf("\nSTMT_EXEC;;4734\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;4736\n");
(pc->input)++;
      }
    while_break___0:;
      printf("\nSTMT_EXEC;;4739\n");
if ((unsigned int)c - 48U <= 9U) {
        printf("\nSTMT_EXEC;;4740\n");
goto _L___2;
      } else {
        printf("\nSTMT_EXEC;;4742\n");
if ((int)c == 45) {
          printf("\nSTMT_EXEC;;4743\n");
goto _L___2;
        } else {
          printf("\nSTMT_EXEC;;4745\n");
if ((int)c == 43) {
          _L___2:
            {
printf("\nSTMT_EXEC;;4747\n");
if ((int)c == 45) {
              printf("\nSTMT_EXEC;;4748\n");
goto _L;
            } else {
              printf("\nSTMT_EXEC;;4750\n");
if ((int)c == 43) {
              _L:
                {
printf("\nSTMT_EXEC;;4752\n");
if ((int)c == 45) {
                  printf("\nSTMT_EXEC;;4753\n");
sign = -1;
                } else {
                  printf("\nSTMT_EXEC;;4755\n");
sign = 1;
                }
}

                printf("\nSTMT_EXEC;;4757\n");
while (1) {
                while_continue___1:
                  {
printf("\nSTMT_EXEC;;4759\n");
(pc->input)++;
}

                  printf("\nSTMT_EXEC;;4760\n");
c = (unsigned char)*(pc->input);
                  printf("\nSTMT_EXEC;;4761\n");
tmp___0 = c_isspace((int)c);
                  printf("\nSTMT_EXEC;;4762\n");
if (!tmp___0) {
                    printf("\nSTMT_EXEC;;4763\n");
goto while_break___1;
                  }
                  printf("\nSTMT_EXEC;;4765\n");
goto while_continue___1;
                }
              while_break___1:;
                printf("\nSTMT_EXEC;;4768\n");
if (!((unsigned int)c - 48U <= 9U)) {
                  printf("\nSTMT_EXEC;;4769\n");
goto __Cont;
                }
              } else {
                printf("\nSTMT_EXEC;;4772\n");
sign = 0;
              }
            }
}

            printf("\nSTMT_EXEC;;4775\n");
p = pc->input;
            printf("\nSTMT_EXEC;;4776\n");
value = 0UL;
            printf("\nSTMT_EXEC;;4777\n");
while (1) {
              printf("\nSTMT_EXEC;;4778\n");
value1 = value + (unsigned long)((int)c - 48);
              printf("\nSTMT_EXEC;;4779\n");
if (value1 < value) {
                printf("\nSTMT_EXEC;;4780\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
              }
              printf("\nSTMT_EXEC;;4782\n");
value = value1;
              printf("\nSTMT_EXEC;;4783\n");
p++;
              printf("\nSTMT_EXEC;;4784\n");
c = (unsigned char)*p;
              printf("\nSTMT_EXEC;;4785\n");
if (!((unsigned int)c - 48U <= 9U)) {
                printf("\nSTMT_EXEC;;4786\n");
goto while_break___2;
              }
              printf("\nSTMT_EXEC;;4788\n");
if (1844674407370955161UL < value) {
                printf("\nSTMT_EXEC;;4789\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
              }
              printf("\nSTMT_EXEC;;4791\n");
value *= 10UL;
            }
          while_break___2:;
            printf("\nSTMT_EXEC;;4794\n");
if ((int)c == 46) {
              printf("\nSTMT_EXEC;;4795\n");
goto _L___1;
            } else {
              printf("\nSTMT_EXEC;;4797\n");
if ((int)c == 44) {
              _L___1:
                {
printf("\nSTMT_EXEC;;4799\n");
if ((unsigned int)*(p + 1) - 48U <= 9U) {
                  printf("\nSTMT_EXEC;;4800\n");
if (sign < 0) {
                    printf("\nSTMT_EXEC;;4801\n");
s = (time_t)(-value);
                    printf("\nSTMT_EXEC;;4802\n");
if (0L < s) {
                      printf("\nSTMT_EXEC;;4803\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
                    }
                    printf("\nSTMT_EXEC;;4805\n");
value1___0 = (unsigned long)(-s);
                  } else {
                    printf("\nSTMT_EXEC;;4807\n");
s = (time_t)value;
                    printf("\nSTMT_EXEC;;4808\n");
if (s < 0L) {
                      printf("\nSTMT_EXEC;;4809\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
                    }
                    printf("\nSTMT_EXEC;;4811\n");
value1___0 = (unsigned long)s;
                  }
                  printf("\nSTMT_EXEC;;4813\n");
if (value != value1___0) {
                    printf("\nSTMT_EXEC;;4814\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
                  }
                  printf("\nSTMT_EXEC;;4816\n");
p++;
                  printf("\nSTMT_EXEC;;4817\n");
tmp___1 = p;
                  printf("\nSTMT_EXEC;;4818\n");
p++;
                  printf("\nSTMT_EXEC;;4819\n");
ns = (int)((int const) * tmp___1 - 48);
                  printf("\nSTMT_EXEC;;4820\n");
digits = 2;
                  printf("\nSTMT_EXEC;;4821\n");
while (1) {
                    printf("\nSTMT_EXEC;;4822\n");
if (!(digits <= 9)) {
                      printf("\nSTMT_EXEC;;4823\n");
goto while_break___3;
                    }
                    printf("\nSTMT_EXEC;;4825\n");
ns *= 10;
                    printf("\nSTMT_EXEC;;4826\n");
if ((unsigned int)*p - 48U <= 9U) {
                      printf("\nSTMT_EXEC;;4827\n");
tmp___2 = p;
                      printf("\nSTMT_EXEC;;4828\n");
p++;
                      printf("\nSTMT_EXEC;;4829\n");
ns += (int)((int const) * tmp___2 - 48);
                    }
                    printf("\nSTMT_EXEC;;4831\n");
digits++;
                  }
                while_break___3:;
                  printf("\nSTMT_EXEC;;4834\n");
if (sign < 0) {
                    printf("\nSTMT_EXEC;;4835\n");
while (1) {
                      printf("\nSTMT_EXEC;;4836\n");
if (!((unsigned int)*p - 48U <= 9U)) {
                        printf("\nSTMT_EXEC;;4837\n");
goto while_break___4;
                      }
                      printf("\nSTMT_EXEC;;4839\n");
if ((int const) * p != 48) {
                        printf("\nSTMT_EXEC;;4840\n");
ns++;
                        printf("\nSTMT_EXEC;;4841\n");
goto while_break___4;
                      }
                      printf("\nSTMT_EXEC;;4843\n");
p++;
                    }
                  while_break___4:;
                  }
                  printf("\nSTMT_EXEC;;4847\n");
while (1) {
                    printf("\nSTMT_EXEC;;4848\n");
if (!((unsigned int)*p - 48U <= 9U)) {
                      printf("\nSTMT_EXEC;;4849\n");
goto while_break___5;
                    }
                    printf("\nSTMT_EXEC;;4851\n");
p++;
                  }
                while_break___5:;
                  printf("\nSTMT_EXEC;;4854\n");
if (sign < 0) {
                    printf("\nSTMT_EXEC;;4855\n");
if (ns) {
                      printf("\nSTMT_EXEC;;4856\n");
s--;
                      printf("\nSTMT_EXEC;;4857\n");
if (!(s < 0L)) {
                        printf("\nSTMT_EXEC;;4858\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
                      }
                      printf("\nSTMT_EXEC;;4860\n");
ns = 1000000000 - ns;
                    }
                  }
                  printf("\nSTMT_EXEC;;4863\n");
lvalp->timespec.tv_sec = s;
                  printf("\nSTMT_EXEC;;4864\n");
lvalp->timespec.tv_nsec = (__syscall_slong_t)ns;
                  printf("\nSTMT_EXEC;;4865\n");
pc->input = p;
                  printf("\nSTMT_EXEC;;4866\n");
if (sign) {
                    printf("\nSTMT_EXEC;;4867\n");
tmp___3 = 276;
                  } else {
                    printf("\nSTMT_EXEC;;4869\n");
tmp___3 = 277;
                  }
                  printf("\nSTMT_EXEC;;4871\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___3);
                } else {
                  printf("\nSTMT_EXEC;;4873\n");
goto _L___0;
                }
}

              } else {
              _L___0:
                {
printf("\nSTMT_EXEC;;4877\n");
lvalp->textintval.negative = (_Bool)(sign < 0);
}

                printf("\nSTMT_EXEC;;4878\n");
if (sign < 0) {
                  printf("\nSTMT_EXEC;;4879\n");
lvalp->textintval.value = (long)(-value);
                  printf("\nSTMT_EXEC;;4880\n");
if (0L < lvalp->textintval.value) {
                    printf("\nSTMT_EXEC;;4881\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
                  }
                } else {
                  printf("\nSTMT_EXEC;;4884\n");
lvalp->textintval.value = (long)value;
                  printf("\nSTMT_EXEC;;4885\n");
if (lvalp->textintval.value < 0L) {
                    printf("\nSTMT_EXEC;;4886\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
                  }
                }
                printf("\nSTMT_EXEC;;4889\n");
lvalp->textintval.digits = (size_t)(p - pc->input);
                printf("\nSTMT_EXEC;;4890\n");
pc->input = p;
                printf("\nSTMT_EXEC;;4891\n");
if (sign) {
                  printf("\nSTMT_EXEC;;4892\n");
tmp___4 = 274;
                } else {
                  printf("\nSTMT_EXEC;;4894\n");
tmp___4 = 275;
                }
                printf("\nSTMT_EXEC;;4896\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___4);
              }
            }
          }
        }
      }
      printf("\nSTMT_EXEC;;4902\n");
tmp___7 = c_isalpha((int)c);
      printf("\nSTMT_EXEC;;4903\n");
if (tmp___7) {
        printf("\nSTMT_EXEC;;4904\n");
p___0 = buff;
        printf("\nSTMT_EXEC;;4905\n");
while (1) {
          printf("\nSTMT_EXEC;;4906\n");
if ((unsigned long)(p___0 - buff) < sizeof(buff) - 1UL) {
            printf("\nSTMT_EXEC;;4907\n");
tmp___5 = p___0;
            printf("\nSTMT_EXEC;;4908\n");
p___0++;
            printf("\nSTMT_EXEC;;4909\n");
*tmp___5 = (char)c;
          }
          printf("\nSTMT_EXEC;;4911\n");
(pc->input)++;
          printf("\nSTMT_EXEC;;4912\n");
c = (unsigned char)*(pc->input);
          printf("\nSTMT_EXEC;;4913\n");
tmp___6 = c_isalpha((int)c);
          printf("\nSTMT_EXEC;;4914\n");
if (!tmp___6) {
            printf("\nSTMT_EXEC;;4915\n");
if (!((int)c == 46)) {
              printf("\nSTMT_EXEC;;4916\n");
goto while_break___6;
            }
          }
        }
      while_break___6:
        {
printf("\nSTMT_EXEC;;4921\n");
*p___0 = (char)'\000';
}

        printf("\nSTMT_EXEC;;4922\n");
tp = lookup_word((parser_control const *)pc, buff);
        printf("\nSTMT_EXEC;;4923\n");
if (!tp) {
          printf("\nSTMT_EXEC;;4924\n");
printf("\nFUNC_RETURN;;\n");
return ('?');
        }
        printf("\nSTMT_EXEC;;4926\n");
lvalp->intval = (long)tp->value;
        printf("\nSTMT_EXEC;;4927\n");
printf("\nFUNC_RETURN;;\n");
return ((int)tp->type);
      }
      printf("\nSTMT_EXEC;;4929\n");
if ((int)c != 40) {
        printf("\nSTMT_EXEC;;4930\n");
tmp___8 = pc->input;
        printf("\nSTMT_EXEC;;4931\n");
(pc->input)++;
        printf("\nSTMT_EXEC;;4932\n");
tmp___9 = (int)to_uchar___0((char)*tmp___8);
        printf("\nSTMT_EXEC;;4933\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___9);
      }
      printf("\nSTMT_EXEC;;4935\n");
count = (size_t)0;
      printf("\nSTMT_EXEC;;4936\n");
while (1) {
        printf("\nSTMT_EXEC;;4937\n");
tmp___10 = pc->input;
        printf("\nSTMT_EXEC;;4938\n");
(pc->input)++;
        printf("\nSTMT_EXEC;;4939\n");
c = (unsigned char)*tmp___10;
        printf("\nSTMT_EXEC;;4940\n");
if ((int)c == 0) {
          printf("\nSTMT_EXEC;;4941\n");
printf("\nFUNC_RETURN;;\n");
return ((int)c);
        }
        printf("\nSTMT_EXEC;;4943\n");
if ((int)c == 40) {
          printf("\nSTMT_EXEC;;4944\n");
count++;
        } else {
          printf("\nSTMT_EXEC;;4946\n");
if ((int)c == 41) {
            printf("\nSTMT_EXEC;;4947\n");
count--;
          }
        }
        printf("\nSTMT_EXEC;;4950\n");
if (!(count != 0UL)) {
          printf("\nSTMT_EXEC;;4951\n");
goto while_break___7;
        }
      }
    while_break___7:;
    __Cont:;
    }
    printf("\nSTMT_EXEC;;4957\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static int yyerror(parser_control const *pc __attribute__((__unused__)),
                   char const *s __attribute__((__unused__))) {
  printf("\nFUNC_CALL;yyerror(const parser_control *,const char *);\n");
{ printf("\nSTMT_EXEC;;4962\n");
printf("\nFUNC_RETURN;;\n");
return (0); }
printf("\nFUNC_RETURN;;\n");
}
static _Bool mktime_ok(struct tm const *tm0, struct tm const *tm1, time_t t) {
  printf("\nFUNC_CALL;mktime_ok(const struct tm *,const struct tm *,time_t);\n");
{
    printf("\nSTMT_EXEC;;4966\n");
if (t == -1L) {
      printf("\nSTMT_EXEC;;4967\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tm1 = (struct tm const *)localtime((time_t const *)(&t));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4968\n");
if (!tm1) {
        printf("\nSTMT_EXEC;;4969\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
      }
    }
    printf("\nSTMT_EXEC;;4972\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)(
        !((((((tm0->tm_sec ^ tm1->tm_sec) | (tm0->tm_min ^ tm1->tm_min)) |
             (tm0->tm_hour ^ tm1->tm_hour)) |
            (tm0->tm_mday ^ tm1->tm_mday)) |
           (tm0->tm_mon ^ tm1->tm_mon)) |
          (tm0->tm_year ^ tm1->tm_year))));
  }
printf("\nFUNC_RETURN;;\n");
}
static char *get_tz(char *tzbuf) {
  printf("\nFUNC_CALL;get_tz(char *);\n");
printf("\nSTMT_EXEC;;4981\n");
char *tz;
  printf("\nSTMT_EXEC;;4982\n");
char *tmp;
  printf("\nSTMT_EXEC;;4983\n");
size_t tzsize;
  printf("\nSTMT_EXEC;;4984\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;4985\n");
void *tmp___1;
  printf("\nSTMT_EXEC;;4986\n");
void *tmp___2;
  {
    printf("\nSTMT_EXEC;;4988\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
tmp = getenv("TZ");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;4989\n");
tz = tmp;
    printf("\nSTMT_EXEC;;4990\n");
if (tz) {
      printf("\nSTMT_EXEC;;4991\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen((char const *)tz);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4992\n");
tzsize = tmp___0 + 1UL;
      printf("\nSTMT_EXEC;;4993\n");
if (tzsize <= 100UL) {
        printf("\nSTMT_EXEC;;4994\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
tmp___1 = memcpy((void *)tzbuf, (void const *)tz, tzsize);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;4995\n");
tz = (char *)tmp___1;
      } else {
        printf("\nSTMT_EXEC;;4997\n");
tmp___2 = xmemdup((void const *)tz, tzsize);
        printf("\nSTMT_EXEC;;4998\n");
tz = (char *)tmp___2;
      }
    }
    printf("\nSTMT_EXEC;;5001\n");
printf("\nFUNC_RETURN;;\n");
return (tz);
  }
printf("\nFUNC_RETURN;;\n");
}
_Bool parse_datetime(struct timespec *result, char const *p,
                     struct timespec const *now) {
  printf("\nFUNC_CALL;parse_datetime(struct timespec *,const char *,const struct timespec *);\n");
printf("\nSTMT_EXEC;;5006\n");
time_t Start;
  printf("\nSTMT_EXEC;;5007\n");
long Start_ns;
  printf("\nSTMT_EXEC;;5008\n");
struct tm const *tmp;
  printf("\nSTMT_EXEC;;5009\n");
struct tm tm;
  printf("\nSTMT_EXEC;;5010\n");
struct tm tm0;
  printf("\nSTMT_EXEC;;5011\n");
parser_control pc;
  printf("\nSTMT_EXEC;;5012\n");
struct timespec gettime_buffer;
  printf("\nSTMT_EXEC;;5013\n");
unsigned char c;
  printf("\nSTMT_EXEC;;5014\n");
_Bool tz_was_altered;
  printf("\nSTMT_EXEC;;5015\n");
char *tz0;
  printf("\nSTMT_EXEC;;5016\n");
char tz0buf[100];
  printf("\nSTMT_EXEC;;5017\n");
_Bool ok;
  printf("\nSTMT_EXEC;;5018\n");
_Bool tmp___0;
  printf("\nSTMT_EXEC;;5019\n");
char const *tzbase;
  printf("\nSTMT_EXEC;;5020\n");
size_t tzsize;
  printf("\nSTMT_EXEC;;5021\n");
char const *s;
  printf("\nSTMT_EXEC;;5022\n");
char *z;
  printf("\nSTMT_EXEC;;5023\n");
char *tz1;
  printf("\nSTMT_EXEC;;5024\n");
char tz1buf[100];
  printf("\nSTMT_EXEC;;5025\n");
_Bool large_tz;
  printf("\nSTMT_EXEC;;5026\n");
_Bool setenv_ok;
  printf("\nSTMT_EXEC;;5027\n");
void *tmp___1;
  printf("\nSTMT_EXEC;;5028\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;5029\n");
int tmp___3;
  printf("\nSTMT_EXEC;;5030\n");
int tmp___4;
  printf("\nSTMT_EXEC;;5031\n");
relative_time __constr_expr_40;
  printf("\nSTMT_EXEC;;5032\n");
int quarter;
  printf("\nSTMT_EXEC;;5033\n");
time_t probe;
  printf("\nSTMT_EXEC;;5034\n");
struct tm const *probe_tm;
  printf("\nSTMT_EXEC;;5035\n");
struct tm const *tmp___5;
  printf("\nSTMT_EXEC;;5036\n");
int tmp___6;
  printf("\nSTMT_EXEC;;5037\n");
int tmp___7;
  printf("\nSTMT_EXEC;;5038\n");
long tmp___8;
  printf("\nSTMT_EXEC;;5039\n");
long time_zone;
  printf("\nSTMT_EXEC;;5040\n");
long abs_time_zone;
  printf("\nSTMT_EXEC;;5041\n");
long tmp___9;
  printf("\nSTMT_EXEC;;5042\n");
long abs_time_zone_hour;
  printf("\nSTMT_EXEC;;5043\n");
int abs_time_zone_min;
  printf("\nSTMT_EXEC;;5044\n");
char tz1buf___0[sizeof("XXX+0:00") + (sizeof(pc.time_zone) * 8UL) / 3UL];
  printf("\nSTMT_EXEC;;5045\n");
int tmp___10;
  printf("\nSTMT_EXEC;;5046\n");
_Bool tmp___11;
  printf("\nSTMT_EXEC;;5047\n");
_Bool tmp___12;
  printf("\nSTMT_EXEC;;5048\n");
int tmp___13;
  printf("\nSTMT_EXEC;;5049\n");
int year___1;
  printf("\nSTMT_EXEC;;5050\n");
int month;
  printf("\nSTMT_EXEC;;5051\n");
int day;
  printf("\nSTMT_EXEC;;5052\n");
long delta;
  printf("\nSTMT_EXEC;;5053\n");
time_t t1;
  printf("\nSTMT_EXEC;;5054\n");
long sum_ns;
  printf("\nSTMT_EXEC;;5055\n");
long normalized_ns;
  printf("\nSTMT_EXEC;;5056\n");
time_t t0;
  printf("\nSTMT_EXEC;;5057\n");
long d1;
  printf("\nSTMT_EXEC;;5058\n");
time_t t1___0;
  printf("\nSTMT_EXEC;;5059\n");
long d2;
  printf("\nSTMT_EXEC;;5060\n");
time_t t2;
  printf("\nSTMT_EXEC;;5061\n");
long_time_t d3;
  printf("\nSTMT_EXEC;;5062\n");
long_time_t t3;
  printf("\nSTMT_EXEC;;5063\n");
long d4;
  printf("\nSTMT_EXEC;;5064\n");
long_time_t t4;
  printf("\nSTMT_EXEC;;5065\n");
time_t t5;
  printf("\nSTMT_EXEC;;5066\n");
int tmp___14;
  printf("\nSTMT_EXEC;;5067\n");
int tmp___15;
  printf("\nSTMT_EXEC;;5068\n");
int tmp___16;
  {
    printf("\nSTMT_EXEC;;5070\n");
tz_was_altered = (_Bool)0;
    printf("\nSTMT_EXEC;;5071\n");
tz0 = (char *)((void *)0);
    printf("\nSTMT_EXEC;;5072\n");
ok = (_Bool)1;
    printf("\nSTMT_EXEC;;5073\n");
if (!now) {
      printf("\nSTMT_EXEC;;5074\n");
gettime(&gettime_buffer);
      printf("\nSTMT_EXEC;;5075\n");
now = (struct timespec const *)(&gettime_buffer);
    }
    printf("\nSTMT_EXEC;;5077\n");
Start = (time_t)now->tv_sec;
    printf("\nSTMT_EXEC;;5078\n");
Start_ns = (long)now->tv_nsec;
    printf("\nSTMT_EXEC;;5079\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tmp = (struct tm const *)localtime(&now->tv_sec);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5080\n");
if (!tmp) {
      printf("\nSTMT_EXEC;;5081\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
    }
    printf("\nSTMT_EXEC;;5083\n");
while (1) {
      printf("\nSTMT_EXEC;;5084\n");
c = (unsigned char)*p;
      printf("\nSTMT_EXEC;;5085\n");
tmp___0 = c_isspace((int)c);
      printf("\nSTMT_EXEC;;5086\n");
if (!tmp___0) {
        printf("\nSTMT_EXEC;;5087\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;5089\n");
p++;
    }
  while_break:
    {
printf("\nSTMT_EXEC;;5092\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___4 = strncmp(p, "TZ=\"", (size_t)4);printf("\nFUNC_RETURN;;\n");

}

    printf("\nSTMT_EXEC;;5093\n");
if (tmp___4 == 0) {
      printf("\nSTMT_EXEC;;5094\n");
tzbase = p + 4;
      printf("\nSTMT_EXEC;;5095\n");
tzsize = (size_t)1;
      printf("\nSTMT_EXEC;;5096\n");
s = tzbase;
      printf("\nSTMT_EXEC;;5097\n");
while (1) {
        printf("\nSTMT_EXEC;;5098\n");
if (!*s) {
          printf("\nSTMT_EXEC;;5099\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;5101\n");
if ((int const) * s == 92) {
          printf("\nSTMT_EXEC;;5102\n");
s++;
          printf("\nSTMT_EXEC;;5103\n");
if (!((int const) * s == 92)) {
            printf("\nSTMT_EXEC;;5104\n");
if (!((int const) * s == 34)) {
              printf("\nSTMT_EXEC;;5105\n");
goto while_break___0;
            }
          }
        } else {
          printf("\nSTMT_EXEC;;5109\n");
if ((int const) * s == 34) {
            printf("\nSTMT_EXEC;;5110\n");
large_tz = (_Bool)(100UL < tzsize);
            printf("\nSTMT_EXEC;;5111\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)tz0);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;5112\n");
tz0 = get_tz(tz0buf);
            printf("\nSTMT_EXEC;;5113\n");
if (large_tz) {
              printf("\nSTMT_EXEC;;5114\n");
tmp___1 = xmalloc(tzsize);
              printf("\nSTMT_EXEC;;5115\n");
tz1 = (char *)tmp___1;
            } else {
              printf("\nSTMT_EXEC;;5117\n");
tz1 = tz1buf;
            }
            printf("\nSTMT_EXEC;;5119\n");
z = tz1;
            printf("\nSTMT_EXEC;;5120\n");
s = tzbase;
            printf("\nSTMT_EXEC;;5121\n");
while (1) {
              printf("\nSTMT_EXEC;;5122\n");
if (!((int const) * s != 34)) {
                printf("\nSTMT_EXEC;;5123\n");
goto while_break___1;
              }
              printf("\nSTMT_EXEC;;5125\n");
tmp___2 = z;
              printf("\nSTMT_EXEC;;5126\n");
z++;
              printf("\nSTMT_EXEC;;5127\n");
s += (int const) * s == 92;
              printf("\nSTMT_EXEC;;5128\n");
*tmp___2 = (char)*s;
              printf("\nSTMT_EXEC;;5129\n");
s++;
            }
          while_break___1:
            {
printf("\nSTMT_EXEC;;5132\n");
*z = (char)'\000';
}

            printf("\nSTMT_EXEC;;5133\n");
printf("\nFUNC_CALL;setenv(const char *,const char *,int);\n");
tmp___3 = setenv("TZ", (char const *)tz1, 1);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;5134\n");
setenv_ok = (_Bool)(tmp___3 == 0);
            printf("\nSTMT_EXEC;;5135\n");
if (large_tz) {
              printf("\nSTMT_EXEC;;5136\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)tz1);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;5138\n");
if (!setenv_ok) {
              printf("\nSTMT_EXEC;;5139\n");
goto fail;
            }
            printf("\nSTMT_EXEC;;5141\n");
tz_was_altered = (_Bool)1;
            printf("\nSTMT_EXEC;;5142\n");
p = s + 1;
          }
        }
        printf("\nSTMT_EXEC;;5145\n");
s++;
        printf("\nSTMT_EXEC;;5146\n");
tzsize++;
      }
    while_break___0:;
    }
    printf("\nSTMT_EXEC;;5150\n");
if ((int const) * p == 0) {
      printf("\nSTMT_EXEC;;5151\n");
p = "0";
    }
    printf("\nSTMT_EXEC;;5153\n");
pc.input = p;
    printf("\nSTMT_EXEC;;5154\n");
pc.year.value = (long)tmp->tm_year;
    printf("\nSTMT_EXEC;;5155\n");
pc.year.value += 1900L;
    printf("\nSTMT_EXEC;;5156\n");
pc.year.digits = (size_t)0;
    printf("\nSTMT_EXEC;;5157\n");
pc.month = (long)(tmp->tm_mon + 1);
    printf("\nSTMT_EXEC;;5158\n");
pc.day = (long)tmp->tm_mday;
    printf("\nSTMT_EXEC;;5159\n");
pc.hour = (long)tmp->tm_hour;
    printf("\nSTMT_EXEC;;5160\n");
pc.minutes = (long)tmp->tm_min;
    printf("\nSTMT_EXEC;;5161\n");
pc.seconds.tv_sec = (__time_t)tmp->tm_sec;
    printf("\nSTMT_EXEC;;5162\n");
pc.seconds.tv_nsec = Start_ns;
    printf("\nSTMT_EXEC;;5163\n");
tm.tm_isdst = (int)tmp->tm_isdst;
    printf("\nSTMT_EXEC;;5164\n");
pc.meridian = 2;
    printf("\nSTMT_EXEC;;5165\n");
__constr_expr_40.year = 0L;
    printf("\nSTMT_EXEC;;5166\n");
__constr_expr_40.month = 0L;
    printf("\nSTMT_EXEC;;5167\n");
__constr_expr_40.day = 0L;
    printf("\nSTMT_EXEC;;5168\n");
__constr_expr_40.hour = 0L;
    printf("\nSTMT_EXEC;;5169\n");
__constr_expr_40.minutes = 0L;
    printf("\nSTMT_EXEC;;5170\n");
__constr_expr_40.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;5171\n");
__constr_expr_40.ns = 0L;
    printf("\nSTMT_EXEC;;5172\n");
pc.rel = __constr_expr_40;
    printf("\nSTMT_EXEC;;5173\n");
pc.timespec_seen = (_Bool)0;
    printf("\nSTMT_EXEC;;5174\n");
pc.rels_seen = (_Bool)0;
    printf("\nSTMT_EXEC;;5175\n");
pc.dates_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5176\n");
pc.days_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5177\n");
pc.times_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5178\n");
pc.local_zones_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5179\n");
pc.dsts_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5180\n");
pc.zones_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5181\n");
pc.local_time_zone_table[0].name = (char const *)tmp->tm_zone;
    printf("\nSTMT_EXEC;;5182\n");
pc.local_time_zone_table[0].type = 269;
    printf("\nSTMT_EXEC;;5183\n");
pc.local_time_zone_table[0].value = (int)tmp->tm_isdst;
    printf("\nSTMT_EXEC;;5184\n");
pc.local_time_zone_table[1].name = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;5185\n");
quarter = 1;
    printf("\nSTMT_EXEC;;5186\n");
while (1) {
      printf("\nSTMT_EXEC;;5187\n");
if (!(quarter <= 3)) {
        printf("\nSTMT_EXEC;;5188\n");
goto while_break___2;
      }
      printf("\nSTMT_EXEC;;5190\n");
probe = Start + (time_t)(quarter * 7776000);
      printf("\nSTMT_EXEC;;5191\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tmp___5 = (struct tm const *)localtime((time_t const *)(&probe));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5192\n");
probe_tm = tmp___5;
      printf("\nSTMT_EXEC;;5193\n");
if (probe_tm) {
        printf("\nSTMT_EXEC;;5194\n");
if (probe_tm->tm_zone) {
          printf("\nSTMT_EXEC;;5195\n");
if (probe_tm->tm_isdst !=
              (int const)pc.local_time_zone_table[0].value) {
            printf("\nSTMT_EXEC;;5197\n");
pc.local_time_zone_table[1].name = (char const *)probe_tm->tm_zone;
            printf("\nSTMT_EXEC;;5198\n");
pc.local_time_zone_table[1].type = 269;
            printf("\nSTMT_EXEC;;5199\n");
pc.local_time_zone_table[1].value = (int)probe_tm->tm_isdst;
            printf("\nSTMT_EXEC;;5200\n");
pc.local_time_zone_table[2].name = (char const *)((void *)0);
            printf("\nSTMT_EXEC;;5201\n");
goto while_break___2;
          }
        }
      }
      printf("\nSTMT_EXEC;;5205\n");
quarter++;
    }
  while_break___2:;
    printf("\nSTMT_EXEC;;5208\n");
if (pc.local_time_zone_table[0].name) {
      printf("\nSTMT_EXEC;;5209\n");
if (pc.local_time_zone_table[1].name) {
        printf("\nSTMT_EXEC;;5210\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___6 = strcmp(pc.local_time_zone_table[0].name,
                         pc.local_time_zone_table[1].name);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5212\n");
if (!tmp___6) {
          printf("\nSTMT_EXEC;;5213\n");
pc.local_time_zone_table[0].value = -1;
          printf("\nSTMT_EXEC;;5214\n");
pc.local_time_zone_table[1].name = (char const *)((void *)0);
        }
      }
    }
    printf("\nSTMT_EXEC;;5218\n");
tmp___7 = yyparse(&pc);
    printf("\nSTMT_EXEC;;5219\n");
if (tmp___7 != 0) {
      printf("\nSTMT_EXEC;;5220\n");
goto fail;
    }
    printf("\nSTMT_EXEC;;5222\n");
if (pc.timespec_seen) {
      printf("\nSTMT_EXEC;;5223\n");
*result = pc.seconds;
    } else {
      printf("\nSTMT_EXEC;;5225\n");
if (1UL <
          ((((pc.times_seen | pc.dates_seen) | pc.days_seen) | pc.dsts_seen) |
           (pc.local_zones_seen + pc.zones_seen))) {
        printf("\nSTMT_EXEC;;5228\n");
goto fail;
      }
      printf("\nSTMT_EXEC;;5230\n");
tmp___8 = to_year(pc.year);
      printf("\nSTMT_EXEC;;5231\n");
tm.tm_year = (int)(tmp___8 - 1900L);
      printf("\nSTMT_EXEC;;5232\n");
tm.tm_mon = (int)(pc.month - 1L);
      printf("\nSTMT_EXEC;;5233\n");
tm.tm_mday = (int)pc.day;
      printf("\nSTMT_EXEC;;5234\n");
if (pc.times_seen) {
        printf("\nSTMT_EXEC;;5235\n");
goto _L;
      } else {
        printf("\nSTMT_EXEC;;5237\n");
if (pc.rels_seen) {
          printf("\nSTMT_EXEC;;5238\n");
if (!pc.dates_seen) {
            printf("\nSTMT_EXEC;;5239\n");
if (!pc.days_seen) {
            _L:
              {
printf("\nSTMT_EXEC;;5241\n");
tm.tm_hour = to_hour(pc.hour, pc.meridian);
}

              printf("\nSTMT_EXEC;;5242\n");
if (tm.tm_hour < 0) {
                printf("\nSTMT_EXEC;;5243\n");
goto fail;
              }
              printf("\nSTMT_EXEC;;5245\n");
tm.tm_min = (int)pc.minutes;
              printf("\nSTMT_EXEC;;5246\n");
tm.tm_sec = (int)pc.seconds.tv_sec;
            } else {
              printf("\nSTMT_EXEC;;5248\n");
tm.tm_sec = 0;
              printf("\nSTMT_EXEC;;5249\n");
tm.tm_min = tm.tm_sec;
              printf("\nSTMT_EXEC;;5250\n");
tm.tm_hour = tm.tm_min;
              printf("\nSTMT_EXEC;;5251\n");
pc.seconds.tv_nsec = (__syscall_slong_t)0;
            }
          } else {
            printf("\nSTMT_EXEC;;5254\n");
tm.tm_sec = 0;
            printf("\nSTMT_EXEC;;5255\n");
tm.tm_min = tm.tm_sec;
            printf("\nSTMT_EXEC;;5256\n");
tm.tm_hour = tm.tm_min;
            printf("\nSTMT_EXEC;;5257\n");
pc.seconds.tv_nsec = (__syscall_slong_t)0;
          }
        } else {
          printf("\nSTMT_EXEC;;5260\n");
tm.tm_sec = 0;
          printf("\nSTMT_EXEC;;5261\n");
tm.tm_min = tm.tm_sec;
          printf("\nSTMT_EXEC;;5262\n");
tm.tm_hour = tm.tm_min;
          printf("\nSTMT_EXEC;;5263\n");
pc.seconds.tv_nsec = (__syscall_slong_t)0;
        }
      }
      printf("\nSTMT_EXEC;;5266\n");
if ((pc.dates_seen | pc.days_seen) | pc.times_seen) {
        printf("\nSTMT_EXEC;;5267\n");
tm.tm_isdst = -1;
      }
      printf("\nSTMT_EXEC;;5269\n");
if (pc.local_zones_seen) {
        printf("\nSTMT_EXEC;;5270\n");
tm.tm_isdst = pc.local_isdst;
      }
      printf("\nSTMT_EXEC;;5272\n");
tm0 = tm;
      printf("\nSTMT_EXEC;;5273\n");
printf("\nFUNC_CALL;mktime(struct tm *);\n");
Start = mktime(&tm);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5274\n");
tmp___12 =
          mktime_ok((struct tm const *)(&tm0), (struct tm const *)(&tm), Start);
      printf("\nSTMT_EXEC;;5276\n");
if (!tmp___12) {
        printf("\nSTMT_EXEC;;5277\n");
if (!pc.zones_seen) {
          printf("\nSTMT_EXEC;;5278\n");
goto fail;
        } else {
          printf("\nSTMT_EXEC;;5280\n");
time_zone = pc.time_zone;
          printf("\nSTMT_EXEC;;5281\n");
if (time_zone < 0L) {
            printf("\nSTMT_EXEC;;5282\n");
tmp___9 = -time_zone;
          } else {
            printf("\nSTMT_EXEC;;5284\n");
tmp___9 = time_zone;
          }
          printf("\nSTMT_EXEC;;5286\n");
abs_time_zone = tmp___9;
          printf("\nSTMT_EXEC;;5287\n");
abs_time_zone_hour = abs_time_zone / 60L;
          printf("\nSTMT_EXEC;;5288\n");
abs_time_zone_min = (int)(abs_time_zone % 60L);
          printf("\nSTMT_EXEC;;5289\n");
if (!tz_was_altered) {
            printf("\nSTMT_EXEC;;5290\n");
tz0 = get_tz(tz0buf);
          }
          printf("\nSTMT_EXEC;;5292\n");
printf("\nFUNC_CALL;sprintf(char *__restrict,const char *__restrict);\n");
sprintf(tz1buf___0, "XXX%s%ld:%02d", "-" + (time_zone < 0L),
                  abs_time_zone_hour, abs_time_zone_min);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5294\n");
printf("\nFUNC_CALL;setenv(const char *,const char *,int);\n");
tmp___10 = setenv("TZ", (char const *)(tz1buf___0), 1);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5295\n");
if (tmp___10 != 0) {
            printf("\nSTMT_EXEC;;5296\n");
goto fail;
          }
          printf("\nSTMT_EXEC;;5298\n");
tz_was_altered = (_Bool)1;
          printf("\nSTMT_EXEC;;5299\n");
tm = tm0;
          printf("\nSTMT_EXEC;;5300\n");
printf("\nFUNC_CALL;mktime(struct tm *);\n");
Start = mktime(&tm);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5301\n");
tmp___11 = mktime_ok((struct tm const *)(&tm0),
                               (struct tm const *)(&tm), Start);
          printf("\nSTMT_EXEC;;5303\n");
if (!tmp___11) {
            printf("\nSTMT_EXEC;;5304\n");
goto fail;
          }
        }
      }
      printf("\nSTMT_EXEC;;5308\n");
if (pc.days_seen) {
        printf("\nSTMT_EXEC;;5309\n");
if (!pc.dates_seen) {
          printf("\nSTMT_EXEC;;5310\n");
if (0L < pc.day_ordinal) {
            printf("\nSTMT_EXEC;;5311\n");
if (tm.tm_wday != pc.day_number) {
              printf("\nSTMT_EXEC;;5312\n");
tmp___13 = 1;
            } else {
              printf("\nSTMT_EXEC;;5314\n");
tmp___13 = 0;
            }
          } else {
            printf("\nSTMT_EXEC;;5317\n");
tmp___13 = 0;
          }
          printf("\nSTMT_EXEC;;5319\n");
tm.tm_mday = (int)((long)tm.tm_mday +
                             ((long)(((pc.day_number - tm.tm_wday) + 7) % 7) +
                              7L * (pc.day_ordinal - (long)tmp___13)));
          printf("\nSTMT_EXEC;;5322\n");
tm.tm_isdst = -1;
          printf("\nSTMT_EXEC;;5323\n");
printf("\nFUNC_CALL;mktime(struct tm *);\n");
Start = mktime(&tm);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5324\n");
if (Start == -1L) {
            printf("\nSTMT_EXEC;;5325\n");
goto fail;
          }
        }
      }
      printf("\nSTMT_EXEC;;5329\n");
if ((pc.rel.year | pc.rel.month) | pc.rel.day) {
        printf("\nSTMT_EXEC;;5330\n");
year___1 = (int)((long)tm.tm_year + pc.rel.year);
        printf("\nSTMT_EXEC;;5331\n");
month = (int)((long)tm.tm_mon + pc.rel.month);
        printf("\nSTMT_EXEC;;5332\n");
day = (int)((long)tm.tm_mday + pc.rel.day);
        printf("\nSTMT_EXEC;;5333\n");
if ((((year___1 < tm.tm_year) ^ (pc.rel.year < 0L)) |
             ((month < tm.tm_mon) ^ (pc.rel.month < 0L))) |
            ((day < tm.tm_mday) ^ (pc.rel.day < 0L))) {
          printf("\nSTMT_EXEC;;5336\n");
goto fail;
        }
        printf("\nSTMT_EXEC;;5338\n");
tm.tm_year = year___1;
        printf("\nSTMT_EXEC;;5339\n");
tm.tm_mon = month;
        printf("\nSTMT_EXEC;;5340\n");
tm.tm_mday = day;
        printf("\nSTMT_EXEC;;5341\n");
tm.tm_hour = tm0.tm_hour;
        printf("\nSTMT_EXEC;;5342\n");
tm.tm_min = tm0.tm_min;
        printf("\nSTMT_EXEC;;5343\n");
tm.tm_sec = tm0.tm_sec;
        printf("\nSTMT_EXEC;;5344\n");
tm.tm_isdst = tm0.tm_isdst;
        printf("\nSTMT_EXEC;;5345\n");
printf("\nFUNC_CALL;mktime(struct tm *);\n");
Start = mktime(&tm);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5346\n");
if (Start == -1L) {
          printf("\nSTMT_EXEC;;5347\n");
goto fail;
        }
      }
      printf("\nSTMT_EXEC;;5350\n");
if (pc.zones_seen) {
        printf("\nSTMT_EXEC;;5351\n");
delta = pc.time_zone * 60L;
        printf("\nSTMT_EXEC;;5352\n");
delta -= tm.tm_gmtoff;
        printf("\nSTMT_EXEC;;5353\n");
t1 = Start - delta;
        printf("\nSTMT_EXEC;;5354\n");
if ((Start < t1) != (delta < 0L)) {
          printf("\nSTMT_EXEC;;5355\n");
goto fail;
        }
        printf("\nSTMT_EXEC;;5357\n");
Start = t1;
      }
      printf("\nSTMT_EXEC;;5359\n");
sum_ns = pc.seconds.tv_nsec + pc.rel.ns;
      printf("\nSTMT_EXEC;;5360\n");
normalized_ns = (sum_ns % 1000000000L + 1000000000L) % 1000000000L;
      printf("\nSTMT_EXEC;;5361\n");
t0 = Start;
      printf("\nSTMT_EXEC;;5362\n");
d1 = 3600L * pc.rel.hour;
      printf("\nSTMT_EXEC;;5363\n");
t1___0 = t0 + d1;
      printf("\nSTMT_EXEC;;5364\n");
d2 = 60L * pc.rel.minutes;
      printf("\nSTMT_EXEC;;5365\n");
t2 = t1___0 + d2;
      printf("\nSTMT_EXEC;;5366\n");
d3 = pc.rel.seconds;
      printf("\nSTMT_EXEC;;5367\n");
t3 = t2 + d3;
      printf("\nSTMT_EXEC;;5368\n");
d4 = (sum_ns - normalized_ns) / 1000000000L;
      printf("\nSTMT_EXEC;;5369\n");
t4 = t3 + d4;
      printf("\nSTMT_EXEC;;5370\n");
t5 = t4;
      printf("\nSTMT_EXEC;;5371\n");
if (((((((d1 / 3600L ^ pc.rel.hour) | (d2 / 60L ^ pc.rel.minutes)) |
              (long)((t1___0 < t0) ^ (d1 < 0L))) |
             (long)((t2 < t1___0) ^ (d2 < 0L))) |
            (long)((t3 < t2) ^ (d3 < 0L))) |
           (long)((t4 < t3) ^ (d4 < 0L))) |
          (long)(t5 != t4)) {
        printf("\nSTMT_EXEC;;5377\n");
goto fail;
      }
      printf("\nSTMT_EXEC;;5379\n");
result->tv_sec = t5;
      printf("\nSTMT_EXEC;;5380\n");
result->tv_nsec = normalized_ns;
    }
    printf("\nSTMT_EXEC;;5382\n");
goto done;
  fail:
    {
printf("\nSTMT_EXEC;;5384\n");
ok = (_Bool)0;
}

  done:
    {
printf("\nSTMT_EXEC;;5386\n");
if (tz_was_altered) {
      printf("\nSTMT_EXEC;;5387\n");
if (tz0) {
        printf("\nSTMT_EXEC;;5388\n");
printf("\nFUNC_CALL;setenv(const char *,const char *,int);\n");
tmp___14 = setenv("TZ", (char const *)tz0, 1);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5389\n");
tmp___16 = tmp___14;
      } else {
        printf("\nSTMT_EXEC;;5391\n");
printf("\nFUNC_CALL;unsetenv(const char *);\n");
tmp___15 = unsetenv("TZ");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5392\n");
tmp___16 = tmp___15;
      }
      printf("\nSTMT_EXEC;;5394\n");
ok = (_Bool)((int)ok & (tmp___16 == 0));
    }
}

    printf("\nSTMT_EXEC;;5396\n");
if ((unsigned long)tz0 != (unsigned long)(tz0buf)) {
      printf("\nSTMT_EXEC;;5397\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)tz0);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;5399\n");
printf("\nFUNC_RETURN;;\n");
return (ok);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
unsigned int const is_basic_table[8] = {
    (unsigned int const)6656, (unsigned int const)4294967279U,
    (unsigned int const)4294967294U, (unsigned int const)2147483646};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       exit)(int __status);
extern int optind;
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getopt_long)(
    int ___argc, char *const *___argv, char const *__shortopts,
    struct option const *__longopts, int *__longind);
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
extern __attribute__((__nothrow__))
FILE *(__attribute__((__leaf__)) fdopen)(int __fd, char const *__modes);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format,
                  ...);
extern int ungetc(int __c, FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
static char const *volatile charset_aliases;
static char const *get_charset_aliases(void) {
  printf("\nFUNC_CALL;get_charset_aliases();\n");
printf("\nSTMT_EXEC;;5581\n");
char const *cp;
  printf("\nSTMT_EXEC;;5582\n");
char const *dir;
  printf("\nSTMT_EXEC;;5583\n");
char const *base;
  printf("\nSTMT_EXEC;;5584\n");
char *file_name___3;
  printf("\nSTMT_EXEC;;5585\n");
size_t dir_len___0;
  printf("\nSTMT_EXEC;;5586\n");
size_t tmp;
  printf("\nSTMT_EXEC;;5587\n");
size_t base_len___0;
  printf("\nSTMT_EXEC;;5588\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;5589\n");
int add_slash;
  printf("\nSTMT_EXEC;;5590\n");
int tmp___1;
  printf("\nSTMT_EXEC;;5591\n");
int fd;
  printf("\nSTMT_EXEC;;5592\n");
FILE *fp;
  printf("\nSTMT_EXEC;;5593\n");
char *res_ptr;
  printf("\nSTMT_EXEC;;5594\n");
size_t res_size;
  printf("\nSTMT_EXEC;;5595\n");
int c;
  printf("\nSTMT_EXEC;;5596\n");
char buf1[51];
  printf("\nSTMT_EXEC;;5597\n");
char buf2[51];
  printf("\nSTMT_EXEC;;5598\n");
size_t l1;
  printf("\nSTMT_EXEC;;5599\n");
size_t l2;
  printf("\nSTMT_EXEC;;5600\n");
char *old_res_ptr;
  printf("\nSTMT_EXEC;;5601\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;5603\n");
cp = (char const *)charset_aliases;
    printf("\nSTMT_EXEC;;5604\n");
if ((unsigned long)cp == (unsigned long)((void *)0)) {
      printf("\nSTMT_EXEC;;5605\n");
base = "charset.alias";
      printf("\nSTMT_EXEC;;5606\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
dir = (char const *)getenv("CHARSETALIASDIR");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5607\n");
if ((unsigned long)dir == (unsigned long)((void *)0)) {
        printf("\nSTMT_EXEC;;5608\n");
dir = "/usr/local/lib";
      } else {
        printf("\nSTMT_EXEC;;5610\n");
if ((int const) * (dir + 0) == 0) {
          printf("\nSTMT_EXEC;;5611\n");
dir = "/usr/local/lib";
        }
      }
      printf("\nSTMT_EXEC;;5614\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen(dir);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5615\n");
dir_len___0 = tmp;
      printf("\nSTMT_EXEC;;5616\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen(base);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5617\n");
base_len___0 = tmp___0;
      printf("\nSTMT_EXEC;;5618\n");
if (dir_len___0 > 0UL) {
        printf("\nSTMT_EXEC;;5619\n");
if (!((int const) * (dir + (dir_len___0 - 1UL)) == 47)) {
          printf("\nSTMT_EXEC;;5620\n");
tmp___1 = 1;
        } else {
          printf("\nSTMT_EXEC;;5622\n");
tmp___1 = 0;
        }
      } else {
        printf("\nSTMT_EXEC;;5625\n");
tmp___1 = 0;
      }
      printf("\nSTMT_EXEC;;5627\n");
add_slash = tmp___1;
      printf("\nSTMT_EXEC;;5628\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
file_name___3 = (char *)malloc(
          ((dir_len___0 + (size_t)add_slash) + base_len___0) + 1UL);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5630\n");
if ((unsigned long)file_name___3 != (unsigned long)((void *)0)) {
        printf("\nSTMT_EXEC;;5631\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)file_name___3, (void const *)dir, dir_len___0);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5632\n");
if (add_slash) {
          printf("\nSTMT_EXEC;;5633\n");
*(file_name___3 + dir_len___0) = (char)'/';
        }
        printf("\nSTMT_EXEC;;5635\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void *)((file_name___3 + dir_len___0) + add_slash),
               (void const *)base, base_len___0 + 1UL);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;5638\n");
if ((unsigned long)file_name___3 == (unsigned long)((void *)0)) {
        printf("\nSTMT_EXEC;;5639\n");
cp = "";
      } else {
        printf("\nSTMT_EXEC;;5641\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
fd = open((char const *)file_name___3, 131072);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5642\n");
if (fd < 0) {
          printf("\nSTMT_EXEC;;5643\n");
cp = "";
        } else {
          printf("\nSTMT_EXEC;;5645\n");
printf("\nFUNC_CALL;fdopen(int,const char *);\n");
fp = fdopen(fd, "r");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5646\n");
if ((unsigned long)fp == (unsigned long)((void *)0)) {
            printf("\nSTMT_EXEC;;5647\n");
printf("\nFUNC_CALL;close(int);\n");
close(fd);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;5648\n");
cp = "";
          } else {
            printf("\nSTMT_EXEC;;5650\n");
res_ptr = (char *)((void *)0);
            printf("\nSTMT_EXEC;;5651\n");
res_size = (size_t)0;
            printf("\nSTMT_EXEC;;5652\n");
while (1) {
              printf("\nSTMT_EXEC;;5653\n");
printf("\nFUNC_CALL;getc_unlocked(FILE *);\n");
c = getc_unlocked(fp);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;5654\n");
if (c == -1) {
                printf("\nSTMT_EXEC;;5655\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;5657\n");
if (c == 10) {
                printf("\nSTMT_EXEC;;5658\n");
goto __Cont;
              } else {
                printf("\nSTMT_EXEC;;5660\n");
if (c == 32) {
                  printf("\nSTMT_EXEC;;5661\n");
goto __Cont;
                } else {
                  printf("\nSTMT_EXEC;;5663\n");
if (c == 9) {
                    printf("\nSTMT_EXEC;;5664\n");
goto __Cont;
                  }
                }
              }
              printf("\nSTMT_EXEC;;5668\n");
if (c == 35) {
                printf("\nSTMT_EXEC;;5669\n");
while (1) {
                  printf("\nSTMT_EXEC;;5670\n");
printf("\nFUNC_CALL;getc_unlocked(FILE *);\n");
c = getc_unlocked(fp);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;5671\n");
if (c == -1) {
                    printf("\nSTMT_EXEC;;5672\n");
goto while_break___0;
                  } else {
                    printf("\nSTMT_EXEC;;5674\n");
if (c == 10) {
                      printf("\nSTMT_EXEC;;5675\n");
goto while_break___0;
                    }
                  }
                }
              while_break___0:;
                printf("\nSTMT_EXEC;;5680\n");
if (c == -1) {
                  printf("\nSTMT_EXEC;;5681\n");
goto while_break;
                }
                printf("\nSTMT_EXEC;;5683\n");
goto __Cont;
              }
              printf("\nSTMT_EXEC;;5685\n");
printf("\nFUNC_CALL;ungetc(int,FILE *);\n");
ungetc(c, fp);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;5686\n");
printf("\nFUNC_CALL;fscanf(FILE *__restrict,const char *__restrict);\n");
tmp___3 = fscanf(fp, "%50s %50s", buf1, buf2);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;5687\n");
if (tmp___3 < 2) {
                printf("\nSTMT_EXEC;;5688\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;5690\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
l1 = strlen((char const *)(buf1));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;5691\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
l2 = strlen((char const *)(buf2));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;5692\n");
old_res_ptr = res_ptr;
              printf("\nSTMT_EXEC;;5693\n");
if (res_size == 0UL) {
                printf("\nSTMT_EXEC;;5694\n");
res_size = ((l1 + 1UL) + l2) + 1UL;
                printf("\nSTMT_EXEC;;5695\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
res_ptr = (char *)malloc(res_size + 1UL);printf("\nFUNC_RETURN;;\n");

              } else {
                printf("\nSTMT_EXEC;;5697\n");
res_size += ((l1 + 1UL) + l2) + 1UL;
                printf("\nSTMT_EXEC;;5698\n");
printf("\nFUNC_CALL;realloc(void *,size_t);\n");
res_ptr = (char *)realloc((void *)res_ptr, res_size + 1UL);printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;5700\n");
if ((unsigned long)res_ptr == (unsigned long)((void *)0)) {
                printf("\nSTMT_EXEC;;5701\n");
res_size = (size_t)0;
                printf("\nSTMT_EXEC;;5702\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)old_res_ptr);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;5703\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;5705\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy(((res_ptr + res_size) - (l2 + 1UL)) - (l1 + 1UL),
                     (char const *)(buf1));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;5707\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((res_ptr + res_size) - (l2 + 1UL), (char const *)(buf2));printf("\nFUNC_RETURN;;\n");

            __Cont:;
            }
          while_break:
            {
printf("\nSTMT_EXEC;;5711\n");
rpl_fclose(fp);
}

            printf("\nSTMT_EXEC;;5712\n");
if (res_size == 0UL) {
              printf("\nSTMT_EXEC;;5713\n");
cp = "";
            } else {
              printf("\nSTMT_EXEC;;5715\n");
*(res_ptr + res_size) = (char)'\000';
              printf("\nSTMT_EXEC;;5716\n");
cp = (char const *)res_ptr;
            }
          }
        }
        printf("\nSTMT_EXEC;;5720\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)file_name___3);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;5722\n");
charset_aliases = cp;
    }
    printf("\nSTMT_EXEC;;5724\n");
printf("\nFUNC_RETURN;;\n");
return (cp);
  }
printf("\nFUNC_RETURN;;\n");
}
char const *locale_charset(void) {
  printf("\nFUNC_CALL;locale_charset();\n");
printf("\nSTMT_EXEC;;5728\n");
char const *codeset;
  printf("\nSTMT_EXEC;;5729\n");
char const *aliases;
  printf("\nSTMT_EXEC;;5730\n");
size_t tmp;
  printf("\nSTMT_EXEC;;5731\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;5732\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;5733\n");
int tmp___2;
  {
    printf("\nSTMT_EXEC;;5735\n");
printf("\nFUNC_CALL;nl_langinfo(nl_item);\n");
codeset = (char const *)nl_langinfo(14);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5736\n");
if ((unsigned long)codeset == (unsigned long)((void *)0)) {
      printf("\nSTMT_EXEC;;5737\n");
codeset = "";
    }
    printf("\nSTMT_EXEC;;5739\n");
aliases = get_charset_aliases();
    printf("\nSTMT_EXEC;;5740\n");
while (1) {
      printf("\nSTMT_EXEC;;5741\n");
if (!((int const) * aliases != 0)) {
        printf("\nSTMT_EXEC;;5742\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;5744\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___2 = strcmp(codeset, aliases);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5745\n");
if (tmp___2 == 0) {
        printf("\nSTMT_EXEC;;5746\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___1 = strlen(aliases);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;5747\n");
codeset = (aliases + tmp___1) + 1;
        printf("\nSTMT_EXEC;;5748\n");
goto while_break;
      } else {
        printf("\nSTMT_EXEC;;5750\n");
if ((int const) * (aliases + 0) == 42) {
          printf("\nSTMT_EXEC;;5751\n");
if ((int const) * (aliases + 1) == 0) {
            printf("\nSTMT_EXEC;;5752\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___1 = strlen(aliases);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;5753\n");
codeset = (aliases + tmp___1) + 1;
            printf("\nSTMT_EXEC;;5754\n");
goto while_break;
          }
        }
      }
      printf("\nSTMT_EXEC;;5758\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen(aliases);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5759\n");
aliases += tmp + 1UL;
      printf("\nSTMT_EXEC;;5760\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen(aliases);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5761\n");
aliases += tmp___0 + 1UL;
    }
  while_break:;
    printf("\nSTMT_EXEC;;5764\n");
if ((int const) * (codeset + 0) == 0) {
      printf("\nSTMT_EXEC;;5765\n");
codeset = "ASCII";
    }
    printf("\nSTMT_EXEC;;5767\n");
printf("\nFUNC_RETURN;;\n");
return (codeset);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
char *(__attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i,
                                                          char *buf___1);
char *(__attribute__((__warn_unused_result__)) imaxtostr)(intmax_t i,
                                                          char *buf___1) {
  printf("\nFUNC_CALL;imaxtostr(intmax_t,char *);\n");
printf("\nSTMT_EXEC;;5787\n");
char *p;
  {
    printf("\nSTMT_EXEC;;5789\n");
p = buf___1 +
        (((sizeof(intmax_t) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL);
    printf("\nSTMT_EXEC;;5791\n");
*p = (char)0;
    printf("\nSTMT_EXEC;;5792\n");
if (i < 0L) {
      printf("\nSTMT_EXEC;;5793\n");
while (1) {
        printf("\nSTMT_EXEC;;5794\n");
p--;
        printf("\nSTMT_EXEC;;5795\n");
*p = (char)(48L - i % 10L);
        printf("\nSTMT_EXEC;;5796\n");
i /= 10L;
        printf("\nSTMT_EXEC;;5797\n");
if (!(i != 0L)) {
          printf("\nSTMT_EXEC;;5798\n");
goto while_break;
        }
      }
    while_break:
      {
printf("\nSTMT_EXEC;;5802\n");
p--;
}

      printf("\nSTMT_EXEC;;5803\n");
*p = (char)'-';
    } else {
      printf("\nSTMT_EXEC;;5805\n");
while (1) {
        printf("\nSTMT_EXEC;;5806\n");
p--;
        printf("\nSTMT_EXEC;;5807\n");
*p = (char)(48L + i % 10L);
        printf("\nSTMT_EXEC;;5808\n");
i /= 10L;
        printf("\nSTMT_EXEC;;5809\n");
if (!(i != 0L)) {
          printf("\nSTMT_EXEC;;5810\n");
goto while_break___0;
        }
      }
    while_break___0:;
    }
    printf("\nSTMT_EXEC;;5815\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           setlocale)(int __category,
                                                      char const *__locale);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        clock_gettime)(clockid_t __clock_id,
                                                       struct timespec *__tp);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
void gettime(struct timespec *ts) {
  printf("\nFUNC_CALL;gettime(struct timespec *);\n");
printf("\nSTMT_EXEC;;5851\n");
int tmp;
  printf("\nSTMT_EXEC;;5852\n");
struct timeval tv;
  {
    printf("\nSTMT_EXEC;;5854\n");
printf("\nFUNC_CALL;clock_gettime(clockid_t,struct timespec *);\n");
tmp = clock_gettime(0, ts);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5855\n");
if (tmp == 0) {
      printf("\nSTMT_EXEC;;5856\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;5858\n");
printf("\nFUNC_CALL;gettimeofday(struct timeval *__restrict,__timezone_ptr_t);\n");
gettimeofday(&tv, (__timezone_ptr_t)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5859\n");
ts->tv_sec = tv.tv_sec;
    printf("\nSTMT_EXEC;;5860\n");
ts->tv_nsec = tv.tv_usec * 1000L;
    printf("\nSTMT_EXEC;;5861\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset,
                                                int whence);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __attribute__((__nothrow__))
__off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset,
                                         int __whence);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset,
                                                int whence) {
  printf("\nFUNC_CALL;rpl_fseeko(FILE *,off_t,int);\n");
printf("\nSTMT_EXEC;;5903\n");
off_t pos;
  printf("\nSTMT_EXEC;;5904\n");
int tmp;
  printf("\nSTMT_EXEC;;5905\n");
off_t tmp___0;
  printf("\nSTMT_EXEC;;5906\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;5908\n");
if ((unsigned long)fp->_IO_read_end == (unsigned long)fp->_IO_read_ptr) {
      printf("\nSTMT_EXEC;;5909\n");
if ((unsigned long)fp->_IO_write_ptr ==
          (unsigned long)fp->_IO_write_base) {
        printf("\nSTMT_EXEC;;5911\n");
if ((unsigned long)fp->_IO_save_base == (unsigned long)((void *)0)) {
          printf("\nSTMT_EXEC;;5912\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp = fileno(fp);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5913\n");
printf("\nFUNC_CALL;lseek(int,__off_t,int);\n");
tmp___0 = lseek(tmp, offset, whence);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;5914\n");
pos = tmp___0;
          printf("\nSTMT_EXEC;;5915\n");
if (pos == -1L) {
            printf("\nSTMT_EXEC;;5916\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
          }
          printf("\nSTMT_EXEC;;5918\n");
fp->_flags &= -17;
          printf("\nSTMT_EXEC;;5919\n");
fp->_offset = pos;
          printf("\nSTMT_EXEC;;5920\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
      }
    }
    printf("\nSTMT_EXEC;;5924\n");
printf("\nFUNC_CALL;fseeko(FILE *,__off_t,int);\n");
tmp___1 = fseeko(fp, offset, whence);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5925\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fputc(int __c, FILE *__stream);
size_t fprintftime(FILE *s, char const *format, struct tm const *tp, int ut,
                   int ns);
static void fwrite_lowcase(FILE *fp, char const *src, size_t len) {
  printf("\nFUNC_CALL;fwrite_lowcase(FILE *,const char *,size_t);\n");
printf("\nSTMT_EXEC;;5944\n");
int tmp;
  printf("\nSTMT_EXEC;;5945\n");
size_t tmp___0;
  {
    printf("\nSTMT_EXEC;;5947\n");
while (1) {
      printf("\nSTMT_EXEC;;5948\n");
tmp___0 = len;
      printf("\nSTMT_EXEC;;5949\n");
len--;
      printf("\nSTMT_EXEC;;5950\n");
if (!(tmp___0 > 0UL)) {
        printf("\nSTMT_EXEC;;5951\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;5953\n");
printf("\nFUNC_CALL;tolower(int);\n");
tmp = tolower((int)((unsigned char)*src));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5954\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(tmp, fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5955\n");
src++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;5958\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void fwrite_uppcase(FILE *fp, char const *src, size_t len) {
  printf("\nFUNC_CALL;fwrite_uppcase(FILE *,const char *,size_t);\n");
printf("\nSTMT_EXEC;;5962\n");
int tmp;
  printf("\nSTMT_EXEC;;5963\n");
size_t tmp___0;
  {
    printf("\nSTMT_EXEC;;5965\n");
while (1) {
      printf("\nSTMT_EXEC;;5966\n");
tmp___0 = len;
      printf("\nSTMT_EXEC;;5967\n");
len--;
      printf("\nSTMT_EXEC;;5968\n");
if (!(tmp___0 > 0UL)) {
        printf("\nSTMT_EXEC;;5969\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;5971\n");
printf("\nFUNC_CALL;toupper(int);\n");
tmp = toupper((int)((unsigned char)*src));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5972\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(tmp, fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5973\n");
src++;
    }
  while_break:;
    printf("\nSTMT_EXEC;;5976\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t strftime_case____0(_Bool upcase, FILE *s, char const *format,
                                 struct tm const *tp, int ut, int ns) {
  printf("\nFUNC_CALL;strftime_case____0(_Bool,FILE *,const char *,const struct tm *,int,int);\n");
printf("\nSTMT_EXEC;;5981\n");
size_t maxsize;
  printf("\nSTMT_EXEC;;5982\n");
int hour12;
  printf("\nSTMT_EXEC;;5983\n");
char const *zone;
  printf("\nSTMT_EXEC;;5984\n");
size_t i;
  printf("\nSTMT_EXEC;;5985\n");
FILE *p;
  printf("\nSTMT_EXEC;;5986\n");
char const *f;
  printf("\nSTMT_EXEC;;5987\n");
int pad;
  printf("\nSTMT_EXEC;;5988\n");
int modifier;
  printf("\nSTMT_EXEC;;5989\n");
int digits;
  printf("\nSTMT_EXEC;;5990\n");
int number_value;
  printf("\nSTMT_EXEC;;5991\n");
unsigned int u_number_value;
  printf("\nSTMT_EXEC;;5992\n");
_Bool negative_number;
  printf("\nSTMT_EXEC;;5993\n");
_Bool always_output_a_sign;
  printf("\nSTMT_EXEC;;5994\n");
int tz_colon_mask;
  printf("\nSTMT_EXEC;;5995\n");
char const *subfmt;
  printf("\nSTMT_EXEC;;5996\n");
char sign_char;
  printf("\nSTMT_EXEC;;5997\n");
char *bufp;
  printf("\nSTMT_EXEC;;5998\n");
char buf___1[3UL + (((sizeof(time_t) * 8UL - 1UL) * 146UL) / 485UL + 2UL)];
  printf("\nSTMT_EXEC;;5999\n");
int width;
  printf("\nSTMT_EXEC;;6000\n");
_Bool to_lowcase;
  printf("\nSTMT_EXEC;;6001\n");
_Bool to_uppcase;
  printf("\nSTMT_EXEC;;6002\n");
size_t colons;
  printf("\nSTMT_EXEC;;6003\n");
_Bool change_case;
  printf("\nSTMT_EXEC;;6004\n");
int format_char;
  printf("\nSTMT_EXEC;;6005\n");
size_t _n;
  printf("\nSTMT_EXEC;;6006\n");
size_t _w;
  printf("\nSTMT_EXEC;;6007\n");
int tmp;
  printf("\nSTMT_EXEC;;6008\n");
size_t _incr;
  printf("\nSTMT_EXEC;;6009\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;6010\n");
size_t _delta;
  printf("\nSTMT_EXEC;;6011\n");
size_t _i;
  printf("\nSTMT_EXEC;;6012\n");
size_t _i___0;
  printf("\nSTMT_EXEC;;6013\n");
char const *tmp___1;
  printf("\nSTMT_EXEC;;6014\n");
size_t _n___0;
  printf("\nSTMT_EXEC;;6015\n");
size_t _w___0;
  printf("\nSTMT_EXEC;;6016\n");
int tmp___2;
  printf("\nSTMT_EXEC;;6017\n");
size_t _incr___0;
  printf("\nSTMT_EXEC;;6018\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;6019\n");
size_t _delta___0;
  printf("\nSTMT_EXEC;;6020\n");
size_t _i___1;
  printf("\nSTMT_EXEC;;6021\n");
size_t _i___2;
  printf("\nSTMT_EXEC;;6022\n");
size_t len;
  printf("\nSTMT_EXEC;;6023\n");
size_t tmp___4;
  printf("\nSTMT_EXEC;;6024\n");
size_t _n___1;
  printf("\nSTMT_EXEC;;6025\n");
size_t _w___1;
  printf("\nSTMT_EXEC;;6026\n");
int tmp___5;
  printf("\nSTMT_EXEC;;6027\n");
size_t _incr___1;
  printf("\nSTMT_EXEC;;6028\n");
size_t tmp___6;
  printf("\nSTMT_EXEC;;6029\n");
size_t _delta___1;
  printf("\nSTMT_EXEC;;6030\n");
size_t _i___3;
  printf("\nSTMT_EXEC;;6031\n");
size_t _i___4;
  printf("\nSTMT_EXEC;;6032\n");
char ufmt[5];
  printf("\nSTMT_EXEC;;6033\n");
char *u;
  printf("\nSTMT_EXEC;;6034\n");
char ubuf[1024];
  printf("\nSTMT_EXEC;;6035\n");
size_t len___0;
  printf("\nSTMT_EXEC;;6036\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;6037\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;6038\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;6039\n");
char *tmp___10;
  printf("\nSTMT_EXEC;;6040\n");
size_t _n___2;
  printf("\nSTMT_EXEC;;6041\n");
size_t _w___2;
  printf("\nSTMT_EXEC;;6042\n");
int tmp___11;
  printf("\nSTMT_EXEC;;6043\n");
size_t _incr___2;
  printf("\nSTMT_EXEC;;6044\n");
size_t tmp___12;
  printf("\nSTMT_EXEC;;6045\n");
size_t _delta___2;
  printf("\nSTMT_EXEC;;6046\n");
size_t _i___5;
  printf("\nSTMT_EXEC;;6047\n");
size_t _i___6;
  printf("\nSTMT_EXEC;;6048\n");
int century;
  printf("\nSTMT_EXEC;;6049\n");
int tmp___13;
  printf("\nSTMT_EXEC;;6050\n");
int tmp___14;
  printf("\nSTMT_EXEC;;6051\n");
size_t _n___3;
  printf("\nSTMT_EXEC;;6052\n");
size_t _w___3;
  printf("\nSTMT_EXEC;;6053\n");
int tmp___15;
  printf("\nSTMT_EXEC;;6054\n");
size_t _incr___3;
  printf("\nSTMT_EXEC;;6055\n");
size_t tmp___16;
  printf("\nSTMT_EXEC;;6056\n");
size_t _delta___3;
  printf("\nSTMT_EXEC;;6057\n");
size_t _i___7;
  printf("\nSTMT_EXEC;;6058\n");
size_t _i___8;
  printf("\nSTMT_EXEC;;6059\n");
int padding;
  printf("\nSTMT_EXEC;;6060\n");
size_t _i___9;
  printf("\nSTMT_EXEC;;6061\n");
size_t _n___4;
  printf("\nSTMT_EXEC;;6062\n");
size_t _w___4;
  printf("\nSTMT_EXEC;;6063\n");
int tmp___17;
  printf("\nSTMT_EXEC;;6064\n");
size_t _incr___4;
  printf("\nSTMT_EXEC;;6065\n");
size_t tmp___18;
  printf("\nSTMT_EXEC;;6066\n");
size_t _delta___4;
  printf("\nSTMT_EXEC;;6067\n");
size_t _i___10;
  printf("\nSTMT_EXEC;;6068\n");
size_t _i___11;
  printf("\nSTMT_EXEC;;6069\n");
size_t _n___5;
  printf("\nSTMT_EXEC;;6070\n");
size_t _w___5;
  printf("\nSTMT_EXEC;;6071\n");
int tmp___19;
  printf("\nSTMT_EXEC;;6072\n");
size_t _incr___5;
  printf("\nSTMT_EXEC;;6073\n");
size_t tmp___20;
  printf("\nSTMT_EXEC;;6074\n");
size_t _delta___5;
  printf("\nSTMT_EXEC;;6075\n");
size_t _i___12;
  printf("\nSTMT_EXEC;;6076\n");
size_t _i___13;
  printf("\nSTMT_EXEC;;6077\n");
size_t _i___14;
  printf("\nSTMT_EXEC;;6078\n");
size_t _n___6;
  printf("\nSTMT_EXEC;;6079\n");
size_t _w___6;
  printf("\nSTMT_EXEC;;6080\n");
int tmp___21;
  printf("\nSTMT_EXEC;;6081\n");
size_t _incr___6;
  printf("\nSTMT_EXEC;;6082\n");
size_t tmp___22;
  printf("\nSTMT_EXEC;;6083\n");
size_t _delta___6;
  printf("\nSTMT_EXEC;;6084\n");
size_t _i___15;
  printf("\nSTMT_EXEC;;6085\n");
size_t _i___16;
  printf("\nSTMT_EXEC;;6086\n");
size_t _n___7;
  printf("\nSTMT_EXEC;;6087\n");
size_t _w___7;
  printf("\nSTMT_EXEC;;6088\n");
int tmp___23;
  printf("\nSTMT_EXEC;;6089\n");
size_t _incr___7;
  printf("\nSTMT_EXEC;;6090\n");
size_t tmp___24;
  printf("\nSTMT_EXEC;;6091\n");
size_t _delta___7;
  printf("\nSTMT_EXEC;;6092\n");
size_t _i___17;
  printf("\nSTMT_EXEC;;6093\n");
size_t _i___18;
  printf("\nSTMT_EXEC;;6094\n");
int j;
  printf("\nSTMT_EXEC;;6095\n");
size_t _n___8;
  printf("\nSTMT_EXEC;;6096\n");
size_t _w___8;
  printf("\nSTMT_EXEC;;6097\n");
int tmp___25;
  printf("\nSTMT_EXEC;;6098\n");
size_t _incr___8;
  printf("\nSTMT_EXEC;;6099\n");
size_t tmp___26;
  printf("\nSTMT_EXEC;;6100\n");
size_t _delta___8;
  printf("\nSTMT_EXEC;;6101\n");
size_t _i___19;
  printf("\nSTMT_EXEC;;6102\n");
size_t _i___20;
  printf("\nSTMT_EXEC;;6103\n");
struct tm ltm;
  printf("\nSTMT_EXEC;;6104\n");
time_t t;
  printf("\nSTMT_EXEC;;6105\n");
int d;
  printf("\nSTMT_EXEC;;6106\n");
int tmp___27;
  printf("\nSTMT_EXEC;;6107\n");
size_t _n___9;
  printf("\nSTMT_EXEC;;6108\n");
size_t _w___9;
  printf("\nSTMT_EXEC;;6109\n");
int tmp___28;
  printf("\nSTMT_EXEC;;6110\n");
size_t _incr___9;
  printf("\nSTMT_EXEC;;6111\n");
size_t tmp___29;
  printf("\nSTMT_EXEC;;6112\n");
size_t _delta___9;
  printf("\nSTMT_EXEC;;6113\n");
size_t _i___21;
  printf("\nSTMT_EXEC;;6114\n");
size_t _i___22;
  printf("\nSTMT_EXEC;;6115\n");
int year___1;
  printf("\nSTMT_EXEC;;6116\n");
int tmp___30;
  printf("\nSTMT_EXEC;;6117\n");
int year_adjust;
  printf("\nSTMT_EXEC;;6118\n");
int days;
  printf("\nSTMT_EXEC;;6119\n");
int tmp___31;
  printf("\nSTMT_EXEC;;6120\n");
int tmp___32;
  printf("\nSTMT_EXEC;;6121\n");
int d___0;
  printf("\nSTMT_EXEC;;6122\n");
int tmp___33;
  printf("\nSTMT_EXEC;;6123\n");
int tmp___34;
  printf("\nSTMT_EXEC;;6124\n");
int yy;
  printf("\nSTMT_EXEC;;6125\n");
int tmp___35;
  printf("\nSTMT_EXEC;;6126\n");
int yy___0;
  printf("\nSTMT_EXEC;;6127\n");
size_t _n___10;
  printf("\nSTMT_EXEC;;6128\n");
size_t tmp___36;
  printf("\nSTMT_EXEC;;6129\n");
size_t _w___10;
  printf("\nSTMT_EXEC;;6130\n");
int tmp___37;
  printf("\nSTMT_EXEC;;6131\n");
size_t _incr___10;
  printf("\nSTMT_EXEC;;6132\n");
size_t tmp___38;
  printf("\nSTMT_EXEC;;6133\n");
size_t _delta___10;
  printf("\nSTMT_EXEC;;6134\n");
size_t _i___23;
  printf("\nSTMT_EXEC;;6135\n");
size_t _i___24;
  printf("\nSTMT_EXEC;;6136\n");
int diff;
  printf("\nSTMT_EXEC;;6137\n");
int hour_diff;
  printf("\nSTMT_EXEC;;6138\n");
int min_diff;
  printf("\nSTMT_EXEC;;6139\n");
int sec_diff;
  printf("\nSTMT_EXEC;;6140\n");
int flen;
  printf("\nSTMT_EXEC;;6141\n");
size_t _n___11;
  printf("\nSTMT_EXEC;;6142\n");
size_t _w___11;
  printf("\nSTMT_EXEC;;6143\n");
int tmp___39;
  printf("\nSTMT_EXEC;;6144\n");
size_t _incr___11;
  printf("\nSTMT_EXEC;;6145\n");
size_t tmp___40;
  printf("\nSTMT_EXEC;;6146\n");
size_t _delta___11;
  printf("\nSTMT_EXEC;;6147\n");
size_t _i___25;
  printf("\nSTMT_EXEC;;6148\n");
size_t _i___26;
  {
    printf("\nSTMT_EXEC;;6150\n");
maxsize = (size_t)-1;
    printf("\nSTMT_EXEC;;6151\n");
hour12 = (int)tp->tm_hour;
    printf("\nSTMT_EXEC;;6152\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;6153\n");
p = s;
    printf("\nSTMT_EXEC;;6154\n");
zone = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;6155\n");
zone = (char const *)tp->tm_zone;
    printf("\nSTMT_EXEC;;6156\n");
if (hour12 > 12) {
      printf("\nSTMT_EXEC;;6157\n");
hour12 -= 12;
    } else {
      printf("\nSTMT_EXEC;;6159\n");
if (hour12 == 0) {
        printf("\nSTMT_EXEC;;6160\n");
hour12 = 12;
      }
    }
    printf("\nSTMT_EXEC;;6163\n");
f = format;
    printf("\nSTMT_EXEC;;6164\n");
while (1) {
      printf("\nSTMT_EXEC;;6165\n");
if (!((int const) * f != 0)) {
        printf("\nSTMT_EXEC;;6166\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;6168\n");
pad = 0;
      printf("\nSTMT_EXEC;;6169\n");
digits = 0;
      printf("\nSTMT_EXEC;;6170\n");
width = -1;
      printf("\nSTMT_EXEC;;6171\n");
to_lowcase = (_Bool)0;
      printf("\nSTMT_EXEC;;6172\n");
to_uppcase = upcase;
      printf("\nSTMT_EXEC;;6173\n");
change_case = (_Bool)0;
      printf("\nSTMT_EXEC;;6174\n");
if ((int const) * f != 37) {
        printf("\nSTMT_EXEC;;6175\n");
while (1) {
          printf("\nSTMT_EXEC;;6176\n");
_n = (size_t)1;
          printf("\nSTMT_EXEC;;6177\n");
if (width < 0) {
            printf("\nSTMT_EXEC;;6178\n");
tmp = 0;
          } else {
            printf("\nSTMT_EXEC;;6180\n");
tmp = width;
          }
          printf("\nSTMT_EXEC;;6182\n");
_w = (size_t)tmp;
          printf("\nSTMT_EXEC;;6183\n");
if (_n < _w) {
            printf("\nSTMT_EXEC;;6184\n");
tmp___0 = _w;
          } else {
            printf("\nSTMT_EXEC;;6186\n");
tmp___0 = _n;
          }
          printf("\nSTMT_EXEC;;6188\n");
_incr = tmp___0;
          printf("\nSTMT_EXEC;;6189\n");
if (_incr >= maxsize - i) {
            printf("\nSTMT_EXEC;;6190\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
          }
          printf("\nSTMT_EXEC;;6192\n");
if (p) {
            printf("\nSTMT_EXEC;;6193\n");
if (digits == 0) {
              printf("\nSTMT_EXEC;;6194\n");
if (_n < _w) {
                printf("\nSTMT_EXEC;;6195\n");
_delta = (size_t)width - _n;
                printf("\nSTMT_EXEC;;6196\n");
if (pad == 48) {
                  printf("\nSTMT_EXEC;;6197\n");
while (1) {
                    printf("\nSTMT_EXEC;;6198\n");
_i = (size_t)0;
                    printf("\nSTMT_EXEC;;6199\n");
while (1) {
                      printf("\nSTMT_EXEC;;6200\n");
if (!(_i < _delta)) {
                        printf("\nSTMT_EXEC;;6201\n");
goto while_break___2;
                      }
                      printf("\nSTMT_EXEC;;6203\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                      printf("\nSTMT_EXEC;;6204\n");
_i++;
                    }
                  while_break___2:;
                    printf("\nSTMT_EXEC;;6207\n");
goto while_break___1;
                  }
                while_break___1:;
                } else {
                  printf("\nSTMT_EXEC;;6211\n");
while (1) {
                    printf("\nSTMT_EXEC;;6212\n");
_i___0 = (size_t)0;
                    printf("\nSTMT_EXEC;;6213\n");
while (1) {
                      printf("\nSTMT_EXEC;;6214\n");
if (!(_i___0 < _delta)) {
                        printf("\nSTMT_EXEC;;6215\n");
goto while_break___4;
                      }
                      printf("\nSTMT_EXEC;;6217\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                      printf("\nSTMT_EXEC;;6218\n");
_i___0++;
                    }
                  while_break___4:;
                    printf("\nSTMT_EXEC;;6221\n");
goto while_break___3;
                  }
                while_break___3:;
                }
              }
            }
            printf("\nSTMT_EXEC;;6227\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)*f, p);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;6229\n");
i += _incr;
          printf("\nSTMT_EXEC;;6230\n");
goto while_break___0;
        }
      while_break___0:;
        printf("\nSTMT_EXEC;;6233\n");
goto __Cont;
      }
      printf("\nSTMT_EXEC;;6235\n");
while (1) {
      while_continue___5:
        {
printf("\nSTMT_EXEC;;6237\n");
f++;
}

        printf("\nSTMT_EXEC;;6238\n");
if ((int const) * f == 95) {
          printf("\nSTMT_EXEC;;6239\n");
goto case_95;
        }
        printf("\nSTMT_EXEC;;6241\n");
if ((int const) * f == 45) {
          printf("\nSTMT_EXEC;;6242\n");
goto case_95;
        }
        printf("\nSTMT_EXEC;;6244\n");
if ((int const) * f == 48) {
          printf("\nSTMT_EXEC;;6245\n");
goto case_95;
        }
        printf("\nSTMT_EXEC;;6247\n");
if ((int const) * f == 94) {
          printf("\nSTMT_EXEC;;6248\n");
goto case_94;
        }
        printf("\nSTMT_EXEC;;6250\n");
if ((int const) * f == 35) {
          printf("\nSTMT_EXEC;;6251\n");
goto case_35;
        }
        printf("\nSTMT_EXEC;;6253\n");
goto switch_default;
      case_95:
        {
printf("\nSTMT_EXEC;;6255\n");
pad = (int)*f;
}

        printf("\nSTMT_EXEC;;6256\n");
goto while_continue___5;
      case_94:
        {
printf("\nSTMT_EXEC;;6258\n");
to_uppcase = (_Bool)1;
}

        printf("\nSTMT_EXEC;;6259\n");
goto while_continue___5;
      case_35:
        {
printf("\nSTMT_EXEC;;6261\n");
change_case = (_Bool)1;
}

        printf("\nSTMT_EXEC;;6262\n");
goto while_continue___5;
      switch_default:
        {
printf("\nSTMT_EXEC;;6264\n");
goto switch_break;
}

      switch_break:;
        printf("\nSTMT_EXEC;;6266\n");
goto while_break___5;
      }
    while_break___5:;
      printf("\nSTMT_EXEC;;6269\n");
if ((unsigned int)*f - 48U <= 9U) {
        printf("\nSTMT_EXEC;;6270\n");
width = 0;
        printf("\nSTMT_EXEC;;6271\n");
while (1) {
          printf("\nSTMT_EXEC;;6272\n");
if (width > 214748364) {
            printf("\nSTMT_EXEC;;6273\n");
width = 2147483647;
          } else {
            printf("\nSTMT_EXEC;;6275\n");
if (width == 214748364) {
              printf("\nSTMT_EXEC;;6276\n");
if ((int const) * f - 48 > 7) {
                printf("\nSTMT_EXEC;;6277\n");
width = 2147483647;
              } else {
                printf("\nSTMT_EXEC;;6279\n");
width *= 10;
                printf("\nSTMT_EXEC;;6280\n");
width += (int)((int const) * f - 48);
              }
            } else {
              printf("\nSTMT_EXEC;;6283\n");
width *= 10;
              printf("\nSTMT_EXEC;;6284\n");
width += (int)((int const) * f - 48);
            }
          }
          printf("\nSTMT_EXEC;;6287\n");
f++;
          printf("\nSTMT_EXEC;;6288\n");
if (!((unsigned int)*f - 48U <= 9U)) {
            printf("\nSTMT_EXEC;;6289\n");
goto while_break___6;
          }
        }
      while_break___6:;
      }
      printf("\nSTMT_EXEC;;6294\n");
if ((int const) * f == 69) {
        printf("\nSTMT_EXEC;;6295\n");
goto case_69;
      }
      printf("\nSTMT_EXEC;;6297\n");
if ((int const) * f == 79) {
        printf("\nSTMT_EXEC;;6298\n");
goto case_69;
      }
      printf("\nSTMT_EXEC;;6300\n");
goto switch_default___0;
    case_69:
      {
printf("\nSTMT_EXEC;;6302\n");
tmp___1 = f;
}

      printf("\nSTMT_EXEC;;6303\n");
f++;
      printf("\nSTMT_EXEC;;6304\n");
modifier = (int)*tmp___1;
      printf("\nSTMT_EXEC;;6305\n");
goto switch_break___0;
    switch_default___0:
      {
printf("\nSTMT_EXEC;;6307\n");
modifier = 0;
}

      printf("\nSTMT_EXEC;;6308\n");
goto switch_break___0;
    switch_break___0:
      {
printf("\nSTMT_EXEC;;6310\n");
format_char = (int)*f;
}

      printf("\nSTMT_EXEC;;6311\n");
if (format_char == 37) {
        printf("\nSTMT_EXEC;;6312\n");
goto case_37;
      }
      printf("\nSTMT_EXEC;;6314\n");
if (format_char == 97) {
        printf("\nSTMT_EXEC;;6315\n");
goto case_97;
      }
      printf("\nSTMT_EXEC;;6317\n");
if (format_char == 65) {
        printf("\nSTMT_EXEC;;6318\n");
goto case_65;
      }
      printf("\nSTMT_EXEC;;6320\n");
if (format_char == 98) {
        printf("\nSTMT_EXEC;;6321\n");
goto case_98;
      }
      printf("\nSTMT_EXEC;;6323\n");
if (format_char == 104) {
        printf("\nSTMT_EXEC;;6324\n");
goto case_98;
      }
      printf("\nSTMT_EXEC;;6326\n");
if (format_char == 66) {
        printf("\nSTMT_EXEC;;6327\n");
goto case_66;
      }
      printf("\nSTMT_EXEC;;6329\n");
if (format_char == 99) {
        printf("\nSTMT_EXEC;;6330\n");
goto case_99;
      }
      printf("\nSTMT_EXEC;;6332\n");
if (format_char == 67) {
        printf("\nSTMT_EXEC;;6333\n");
goto case_67;
      }
      printf("\nSTMT_EXEC;;6335\n");
if (format_char == 120) {
        printf("\nSTMT_EXEC;;6336\n");
goto case_120;
      }
      printf("\nSTMT_EXEC;;6338\n");
if (format_char == 68) {
        printf("\nSTMT_EXEC;;6339\n");
goto case_68;
      }
      printf("\nSTMT_EXEC;;6341\n");
if (format_char == 100) {
        printf("\nSTMT_EXEC;;6342\n");
goto case_100;
      }
      printf("\nSTMT_EXEC;;6344\n");
if (format_char == 101) {
        printf("\nSTMT_EXEC;;6345\n");
goto case_101;
      }
      printf("\nSTMT_EXEC;;6347\n");
if (format_char == 70) {
        printf("\nSTMT_EXEC;;6348\n");
goto case_70;
      }
      printf("\nSTMT_EXEC;;6350\n");
if (format_char == 72) {
        printf("\nSTMT_EXEC;;6351\n");
goto case_72;
      }
      printf("\nSTMT_EXEC;;6353\n");
if (format_char == 73) {
        printf("\nSTMT_EXEC;;6354\n");
goto case_73;
      }
      printf("\nSTMT_EXEC;;6356\n");
if (format_char == 107) {
        printf("\nSTMT_EXEC;;6357\n");
goto case_107;
      }
      printf("\nSTMT_EXEC;;6359\n");
if (format_char == 108) {
        printf("\nSTMT_EXEC;;6360\n");
goto case_108;
      }
      printf("\nSTMT_EXEC;;6362\n");
if (format_char == 106) {
        printf("\nSTMT_EXEC;;6363\n");
goto case_106;
      }
      printf("\nSTMT_EXEC;;6365\n");
if (format_char == 77) {
        printf("\nSTMT_EXEC;;6366\n");
goto case_77;
      }
      printf("\nSTMT_EXEC;;6368\n");
if (format_char == 109) {
        printf("\nSTMT_EXEC;;6369\n");
goto case_109;
      }
      printf("\nSTMT_EXEC;;6371\n");
if (format_char == 78) {
        printf("\nSTMT_EXEC;;6372\n");
goto case_78;
      }
      printf("\nSTMT_EXEC;;6374\n");
if (format_char == 110) {
        printf("\nSTMT_EXEC;;6375\n");
goto case_110;
      }
      printf("\nSTMT_EXEC;;6377\n");
if (format_char == 80) {
        printf("\nSTMT_EXEC;;6378\n");
goto case_80;
      }
      printf("\nSTMT_EXEC;;6380\n");
if (format_char == 112) {
        printf("\nSTMT_EXEC;;6381\n");
goto case_112;
      }
      printf("\nSTMT_EXEC;;6383\n");
if (format_char == 82) {
        printf("\nSTMT_EXEC;;6384\n");
goto case_82;
      }
      printf("\nSTMT_EXEC;;6386\n");
if (format_char == 114) {
        printf("\nSTMT_EXEC;;6387\n");
goto case_114;
      }
      printf("\nSTMT_EXEC;;6389\n");
if (format_char == 83) {
        printf("\nSTMT_EXEC;;6390\n");
goto case_83;
      }
      printf("\nSTMT_EXEC;;6392\n");
if (format_char == 115) {
        printf("\nSTMT_EXEC;;6393\n");
goto case_115;
      }
      printf("\nSTMT_EXEC;;6395\n");
if (format_char == 88) {
        printf("\nSTMT_EXEC;;6396\n");
goto case_88;
      }
      printf("\nSTMT_EXEC;;6398\n");
if (format_char == 84) {
        printf("\nSTMT_EXEC;;6399\n");
goto case_84;
      }
      printf("\nSTMT_EXEC;;6401\n");
if (format_char == 116) {
        printf("\nSTMT_EXEC;;6402\n");
goto case_116;
      }
      printf("\nSTMT_EXEC;;6404\n");
if (format_char == 117) {
        printf("\nSTMT_EXEC;;6405\n");
goto case_117;
      }
      printf("\nSTMT_EXEC;;6407\n");
if (format_char == 85) {
        printf("\nSTMT_EXEC;;6408\n");
goto case_85;
      }
      printf("\nSTMT_EXEC;;6410\n");
if (format_char == 86) {
        printf("\nSTMT_EXEC;;6411\n");
goto case_86;
      }
      printf("\nSTMT_EXEC;;6413\n");
if (format_char == 103) {
        printf("\nSTMT_EXEC;;6414\n");
goto case_86;
      }
      printf("\nSTMT_EXEC;;6416\n");
if (format_char == 71) {
        printf("\nSTMT_EXEC;;6417\n");
goto case_86;
      }
      printf("\nSTMT_EXEC;;6419\n");
if (format_char == 87) {
        printf("\nSTMT_EXEC;;6420\n");
goto case_87;
      }
      printf("\nSTMT_EXEC;;6422\n");
if (format_char == 119) {
        printf("\nSTMT_EXEC;;6423\n");
goto case_119;
      }
      printf("\nSTMT_EXEC;;6425\n");
if (format_char == 89) {
        printf("\nSTMT_EXEC;;6426\n");
goto case_89;
      }
      printf("\nSTMT_EXEC;;6428\n");
if (format_char == 121) {
        printf("\nSTMT_EXEC;;6429\n");
goto case_121;
      }
      printf("\nSTMT_EXEC;;6431\n");
if (format_char == 90) {
        printf("\nSTMT_EXEC;;6432\n");
goto case_90;
      }
      printf("\nSTMT_EXEC;;6434\n");
if (format_char == 58) {
        printf("\nSTMT_EXEC;;6435\n");
goto case_58;
      }
      printf("\nSTMT_EXEC;;6437\n");
if (format_char == 122) {
        printf("\nSTMT_EXEC;;6438\n");
goto case_122;
      }
      printf("\nSTMT_EXEC;;6440\n");
if (format_char == 0) {
        printf("\nSTMT_EXEC;;6441\n");
goto case_0___0;
      }
      printf("\nSTMT_EXEC;;6443\n");
goto bad_format;
    case_37:
      {
printf("\nSTMT_EXEC;;6445\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;6446\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6448\n");
while (1) {
        printf("\nSTMT_EXEC;;6449\n");
_n___0 = (size_t)1;
        printf("\nSTMT_EXEC;;6450\n");
if (width < 0) {
          printf("\nSTMT_EXEC;;6451\n");
tmp___2 = 0;
        } else {
          printf("\nSTMT_EXEC;;6453\n");
tmp___2 = width;
        }
        printf("\nSTMT_EXEC;;6455\n");
_w___0 = (size_t)tmp___2;
        printf("\nSTMT_EXEC;;6456\n");
if (_n___0 < _w___0) {
          printf("\nSTMT_EXEC;;6457\n");
tmp___3 = _w___0;
        } else {
          printf("\nSTMT_EXEC;;6459\n");
tmp___3 = _n___0;
        }
        printf("\nSTMT_EXEC;;6461\n");
_incr___0 = tmp___3;
        printf("\nSTMT_EXEC;;6462\n");
if (_incr___0 >= maxsize - i) {
          printf("\nSTMT_EXEC;;6463\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
        }
        printf("\nSTMT_EXEC;;6465\n");
if (p) {
          printf("\nSTMT_EXEC;;6466\n");
if (digits == 0) {
            printf("\nSTMT_EXEC;;6467\n");
if (_n___0 < _w___0) {
              printf("\nSTMT_EXEC;;6468\n");
_delta___0 = (size_t)width - _n___0;
              printf("\nSTMT_EXEC;;6469\n");
if (pad == 48) {
                printf("\nSTMT_EXEC;;6470\n");
while (1) {
                  printf("\nSTMT_EXEC;;6471\n");
_i___1 = (size_t)0;
                  printf("\nSTMT_EXEC;;6472\n");
while (1) {
                    printf("\nSTMT_EXEC;;6473\n");
if (!(_i___1 < _delta___0)) {
                      printf("\nSTMT_EXEC;;6474\n");
goto while_break___9;
                    }
                    printf("\nSTMT_EXEC;;6476\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;6477\n");
_i___1++;
                  }
                while_break___9:;
                  printf("\nSTMT_EXEC;;6480\n");
goto while_break___8;
                }
              while_break___8:;
              } else {
                printf("\nSTMT_EXEC;;6484\n");
while (1) {
                  printf("\nSTMT_EXEC;;6485\n");
_i___2 = (size_t)0;
                  printf("\nSTMT_EXEC;;6486\n");
while (1) {
                    printf("\nSTMT_EXEC;;6487\n");
if (!(_i___2 < _delta___0)) {
                      printf("\nSTMT_EXEC;;6488\n");
goto while_break___11;
                    }
                    printf("\nSTMT_EXEC;;6490\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;6491\n");
_i___2++;
                  }
                while_break___11:;
                  printf("\nSTMT_EXEC;;6494\n");
goto while_break___10;
                }
              while_break___10:;
              }
            }
          }
          printf("\nSTMT_EXEC;;6500\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)*f, p);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;6502\n");
i += _incr___0;
        printf("\nSTMT_EXEC;;6503\n");
goto while_break___7;
      }
    while_break___7:;
      printf("\nSTMT_EXEC;;6506\n");
goto switch_break___1;
    case_97:
      {
printf("\nSTMT_EXEC;;6508\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;6509\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6511\n");
if (change_case) {
        printf("\nSTMT_EXEC;;6512\n");
to_uppcase = (_Bool)1;
        printf("\nSTMT_EXEC;;6513\n");
to_lowcase = (_Bool)0;
      }
      printf("\nSTMT_EXEC;;6515\n");
goto underlying_strftime;
    case_65:
      {
printf("\nSTMT_EXEC;;6517\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;6518\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6520\n");
if (change_case) {
        printf("\nSTMT_EXEC;;6521\n");
to_uppcase = (_Bool)1;
        printf("\nSTMT_EXEC;;6522\n");
to_lowcase = (_Bool)0;
      }
      printf("\nSTMT_EXEC;;6524\n");
goto underlying_strftime;
    case_98:
      {
printf("\nSTMT_EXEC;;6526\n");
if (change_case) {
        printf("\nSTMT_EXEC;;6527\n");
to_uppcase = (_Bool)1;
        printf("\nSTMT_EXEC;;6528\n");
to_lowcase = (_Bool)0;
      }
}

      printf("\nSTMT_EXEC;;6530\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;6531\n");
goto bad_format;
      }
      printf("\nSTMT_EXEC;;6533\n");
goto underlying_strftime;
    case_66:
      {
printf("\nSTMT_EXEC;;6535\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;6536\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6538\n");
if (change_case) {
        printf("\nSTMT_EXEC;;6539\n");
to_uppcase = (_Bool)1;
        printf("\nSTMT_EXEC;;6540\n");
to_lowcase = (_Bool)0;
      }
      printf("\nSTMT_EXEC;;6542\n");
goto underlying_strftime;
    case_99:
      {
printf("\nSTMT_EXEC;;6544\n");
if (modifier == 79) {
        printf("\nSTMT_EXEC;;6545\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6547\n");
goto underlying_strftime;
    subformat:
      {
printf("\nSTMT_EXEC;;6549\n");
tmp___4 = strftime_case____0(to_uppcase, (FILE *)((void *)0), subfmt, tp,
                                   ut, ns);
}

      printf("\nSTMT_EXEC;;6551\n");
len = tmp___4;
      printf("\nSTMT_EXEC;;6552\n");
while (1) {
        printf("\nSTMT_EXEC;;6553\n");
_n___1 = len;
        printf("\nSTMT_EXEC;;6554\n");
if (width < 0) {
          printf("\nSTMT_EXEC;;6555\n");
tmp___5 = 0;
        } else {
          printf("\nSTMT_EXEC;;6557\n");
tmp___5 = width;
        }
        printf("\nSTMT_EXEC;;6559\n");
_w___1 = (size_t)tmp___5;
        printf("\nSTMT_EXEC;;6560\n");
if (_n___1 < _w___1) {
          printf("\nSTMT_EXEC;;6561\n");
tmp___6 = _w___1;
        } else {
          printf("\nSTMT_EXEC;;6563\n");
tmp___6 = _n___1;
        }
        printf("\nSTMT_EXEC;;6565\n");
_incr___1 = tmp___6;
        printf("\nSTMT_EXEC;;6566\n");
if (_incr___1 >= maxsize - i) {
          printf("\nSTMT_EXEC;;6567\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
        }
        printf("\nSTMT_EXEC;;6569\n");
if (p) {
          printf("\nSTMT_EXEC;;6570\n");
if (digits == 0) {
            printf("\nSTMT_EXEC;;6571\n");
if (_n___1 < _w___1) {
              printf("\nSTMT_EXEC;;6572\n");
_delta___1 = (size_t)width - _n___1;
              printf("\nSTMT_EXEC;;6573\n");
if (pad == 48) {
                printf("\nSTMT_EXEC;;6574\n");
while (1) {
                  printf("\nSTMT_EXEC;;6575\n");
_i___3 = (size_t)0;
                  printf("\nSTMT_EXEC;;6576\n");
while (1) {
                    printf("\nSTMT_EXEC;;6577\n");
if (!(_i___3 < _delta___1)) {
                      printf("\nSTMT_EXEC;;6578\n");
goto while_break___14;
                    }
                    printf("\nSTMT_EXEC;;6580\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;6581\n");
_i___3++;
                  }
                while_break___14:;
                  printf("\nSTMT_EXEC;;6584\n");
goto while_break___13;
                }
              while_break___13:;
              } else {
                printf("\nSTMT_EXEC;;6588\n");
while (1) {
                  printf("\nSTMT_EXEC;;6589\n");
_i___4 = (size_t)0;
                  printf("\nSTMT_EXEC;;6590\n");
while (1) {
                    printf("\nSTMT_EXEC;;6591\n");
if (!(_i___4 < _delta___1)) {
                      printf("\nSTMT_EXEC;;6592\n");
goto while_break___16;
                    }
                    printf("\nSTMT_EXEC;;6594\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;6595\n");
_i___4++;
                  }
                while_break___16:;
                  printf("\nSTMT_EXEC;;6598\n");
goto while_break___15;
                }
              while_break___15:;
              }
            }
          }
          printf("\nSTMT_EXEC;;6604\n");
strftime_case____0(to_uppcase, p, subfmt, tp, ut, ns);
        }
        printf("\nSTMT_EXEC;;6606\n");
i += _incr___1;
        printf("\nSTMT_EXEC;;6607\n");
goto while_break___12;
      }
    while_break___12:;
      printf("\nSTMT_EXEC;;6610\n");
goto switch_break___1;
    underlying_strftime:
      {
printf("\nSTMT_EXEC;;6612\n");
u = ufmt;
}

      printf("\nSTMT_EXEC;;6613\n");
tmp___7 = u;
      printf("\nSTMT_EXEC;;6614\n");
u++;
      printf("\nSTMT_EXEC;;6615\n");
*tmp___7 = (char)' ';
      printf("\nSTMT_EXEC;;6616\n");
tmp___8 = u;
      printf("\nSTMT_EXEC;;6617\n");
u++;
      printf("\nSTMT_EXEC;;6618\n");
*tmp___8 = (char)'%';
      printf("\nSTMT_EXEC;;6619\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;6620\n");
tmp___9 = u;
        printf("\nSTMT_EXEC;;6621\n");
u++;
        printf("\nSTMT_EXEC;;6622\n");
*tmp___9 = (char)modifier;
      }
      printf("\nSTMT_EXEC;;6624\n");
tmp___10 = u;
      printf("\nSTMT_EXEC;;6625\n");
u++;
      printf("\nSTMT_EXEC;;6626\n");
*tmp___10 = (char)format_char;
      printf("\nSTMT_EXEC;;6627\n");
*u = (char)'\000';
      printf("\nSTMT_EXEC;;6628\n");
printf("\nFUNC_CALL;strftime(char *__restrict,size_t,const char *__restrict,const struct tm *__restrict);\n");
len___0 = strftime(ubuf, sizeof(ubuf), (char const *)(ufmt), tp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6629\n");
if (len___0 != 0UL) {
        printf("\nSTMT_EXEC;;6630\n");
while (1) {
          printf("\nSTMT_EXEC;;6631\n");
_n___2 = len___0 - 1UL;
          printf("\nSTMT_EXEC;;6632\n");
if (width < 0) {
            printf("\nSTMT_EXEC;;6633\n");
tmp___11 = 0;
          } else {
            printf("\nSTMT_EXEC;;6635\n");
tmp___11 = width;
          }
          printf("\nSTMT_EXEC;;6637\n");
_w___2 = (size_t)tmp___11;
          printf("\nSTMT_EXEC;;6638\n");
if (_n___2 < _w___2) {
            printf("\nSTMT_EXEC;;6639\n");
tmp___12 = _w___2;
          } else {
            printf("\nSTMT_EXEC;;6641\n");
tmp___12 = _n___2;
          }
          printf("\nSTMT_EXEC;;6643\n");
_incr___2 = tmp___12;
          printf("\nSTMT_EXEC;;6644\n");
if (_incr___2 >= maxsize - i) {
            printf("\nSTMT_EXEC;;6645\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
          }
          printf("\nSTMT_EXEC;;6647\n");
if (p) {
            printf("\nSTMT_EXEC;;6648\n");
if (digits == 0) {
              printf("\nSTMT_EXEC;;6649\n");
if (_n___2 < _w___2) {
                printf("\nSTMT_EXEC;;6650\n");
_delta___2 = (size_t)width - _n___2;
                printf("\nSTMT_EXEC;;6651\n");
if (pad == 48) {
                  printf("\nSTMT_EXEC;;6652\n");
while (1) {
                    printf("\nSTMT_EXEC;;6653\n");
_i___5 = (size_t)0;
                    printf("\nSTMT_EXEC;;6654\n");
while (1) {
                      printf("\nSTMT_EXEC;;6655\n");
if (!(_i___5 < _delta___2)) {
                        printf("\nSTMT_EXEC;;6656\n");
goto while_break___19;
                      }
                      printf("\nSTMT_EXEC;;6658\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                      printf("\nSTMT_EXEC;;6659\n");
_i___5++;
                    }
                  while_break___19:;
                    printf("\nSTMT_EXEC;;6662\n");
goto while_break___18;
                  }
                while_break___18:;
                } else {
                  printf("\nSTMT_EXEC;;6666\n");
while (1) {
                    printf("\nSTMT_EXEC;;6667\n");
_i___6 = (size_t)0;
                    printf("\nSTMT_EXEC;;6668\n");
while (1) {
                      printf("\nSTMT_EXEC;;6669\n");
if (!(_i___6 < _delta___2)) {
                        printf("\nSTMT_EXEC;;6670\n");
goto while_break___21;
                      }
                      printf("\nSTMT_EXEC;;6672\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                      printf("\nSTMT_EXEC;;6673\n");
_i___6++;
                    }
                  while_break___21:;
                    printf("\nSTMT_EXEC;;6676\n");
goto while_break___20;
                  }
                while_break___20:;
                }
              }
            }
            printf("\nSTMT_EXEC;;6682\n");
while (1) {
              printf("\nSTMT_EXEC;;6683\n");
if (to_lowcase) {
                printf("\nSTMT_EXEC;;6684\n");
fwrite_lowcase(p, (char const *)(ubuf + 1), _n___2);
              } else {
                printf("\nSTMT_EXEC;;6686\n");
if (to_uppcase) {
                  printf("\nSTMT_EXEC;;6687\n");
fwrite_uppcase(p, (char const *)(ubuf + 1), _n___2);
                } else {
                  printf("\nSTMT_EXEC;;6689\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
fwrite((void const *)(ubuf + 1), _n___2, (size_t)1, p);printf("\nFUNC_RETURN;;\n");

                }
              }
              printf("\nSTMT_EXEC;;6692\n");
goto while_break___22;
            }
          while_break___22:;
          }
          printf("\nSTMT_EXEC;;6696\n");
i += _incr___2;
          printf("\nSTMT_EXEC;;6697\n");
goto while_break___17;
        }
      while_break___17:;
      }
      printf("\nSTMT_EXEC;;6701\n");
goto switch_break___1;
    case_67:
      {
printf("\nSTMT_EXEC;;6703\n");
if (modifier == 79) {
        printf("\nSTMT_EXEC;;6704\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6706\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;6707\n");
goto underlying_strftime;
      }
      printf("\nSTMT_EXEC;;6709\n");
century = (int)(tp->tm_year / 100 + 19);
      printf("\nSTMT_EXEC;;6710\n");
if (tp->tm_year % 100 < 0) {
        printf("\nSTMT_EXEC;;6711\n");
if (0 < century) {
          printf("\nSTMT_EXEC;;6712\n");
tmp___13 = 1;
        } else {
          printf("\nSTMT_EXEC;;6714\n");
tmp___13 = 0;
        }
      } else {
        printf("\nSTMT_EXEC;;6717\n");
tmp___13 = 0;
      }
      printf("\nSTMT_EXEC;;6719\n");
century -= tmp___13;
      printf("\nSTMT_EXEC;;6720\n");
digits = 2;
      printf("\nSTMT_EXEC;;6721\n");
negative_number = (_Bool)(tp->tm_year < -1900);
      printf("\nSTMT_EXEC;;6722\n");
u_number_value = (unsigned int)century;
      printf("\nSTMT_EXEC;;6723\n");
goto do_signed_number;
    case_120:
      {
printf("\nSTMT_EXEC;;6725\n");
if (modifier == 79) {
        printf("\nSTMT_EXEC;;6726\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6728\n");
goto underlying_strftime;
    case_68:
      {
printf("\nSTMT_EXEC;;6730\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;6731\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6733\n");
subfmt = "%m/%d/%y";
      printf("\nSTMT_EXEC;;6734\n");
goto subformat;
    case_100:
      {
printf("\nSTMT_EXEC;;6736\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;6737\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6739\n");
digits = 2;
      printf("\nSTMT_EXEC;;6740\n");
number_value = (int)tp->tm_mday;
      printf("\nSTMT_EXEC;;6741\n");
goto do_number;
    case_101:
      {
printf("\nSTMT_EXEC;;6743\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;6744\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;6746\n");
digits = 2;
      printf("\nSTMT_EXEC;;6747\n");
number_value = (int)tp->tm_mday;
      printf("\nSTMT_EXEC;;6748\n");
goto do_number_spacepad;
    do_tz_offset:
      {
printf("\nSTMT_EXEC;;6750\n");
always_output_a_sign = (_Bool)1;
}

      printf("\nSTMT_EXEC;;6751\n");
goto do_number_body;
    do_number_spacepad:
      {
printf("\nSTMT_EXEC;;6753\n");
if (pad != 48) {
        printf("\nSTMT_EXEC;;6754\n");
if (pad != 45) {
          printf("\nSTMT_EXEC;;6755\n");
pad = '_';
        }
      }
}

    do_number:
      {
printf("\nSTMT_EXEC;;6759\n");
negative_number = (_Bool)(number_value < 0);
}

      printf("\nSTMT_EXEC;;6760\n");
u_number_value = (unsigned int)number_value;
    do_signed_number:
      {
printf("\nSTMT_EXEC;;6762\n");
always_output_a_sign = (_Bool)0;
}

      printf("\nSTMT_EXEC;;6763\n");
tz_colon_mask = 0;
    do_number_body:
      {
printf("\nSTMT_EXEC;;6765\n");
if (modifier == 79) {
        printf("\nSTMT_EXEC;;6766\n");
if (!negative_number) {
          printf("\nSTMT_EXEC;;6767\n");
goto underlying_strftime;
        }
      }
}

      printf("\nSTMT_EXEC;;6770\n");
bufp = buf___1 + sizeof(buf___1) / sizeof(buf___1[0]);
      printf("\nSTMT_EXEC;;6771\n");
if (negative_number) {
        printf("\nSTMT_EXEC;;6772\n");
u_number_value = -u_number_value;
      }
      printf("\nSTMT_EXEC;;6774\n");
while (1) {
        printf("\nSTMT_EXEC;;6775\n");
if (tz_colon_mask & 1) {
          printf("\nSTMT_EXEC;;6776\n");
bufp--;
          printf("\nSTMT_EXEC;;6777\n");
*bufp = (char)':';
        }
        printf("\nSTMT_EXEC;;6779\n");
tz_colon_mask >>= 1;
        printf("\nSTMT_EXEC;;6780\n");
bufp--;
        printf("\nSTMT_EXEC;;6781\n");
*bufp = (char)(u_number_value % 10U + 48U);
        printf("\nSTMT_EXEC;;6782\n");
u_number_value /= 10U;
        printf("\nSTMT_EXEC;;6783\n");
if (!(u_number_value != 0U)) {
          printf("\nSTMT_EXEC;;6784\n");
if (!(tz_colon_mask != 0)) {
            printf("\nSTMT_EXEC;;6785\n");
goto while_break___23;
          }
        }
      }
    while_break___23:;
    do_number_sign_and_padding:
      {
printf("\nSTMT_EXEC;;6791\n");
if (digits < width) {
        printf("\nSTMT_EXEC;;6792\n");
digits = width;
      }
}

      printf("\nSTMT_EXEC;;6794\n");
if (negative_number) {
        printf("\nSTMT_EXEC;;6795\n");
sign_char = (char)'-';
      } else {
        printf("\nSTMT_EXEC;;6797\n");
if (always_output_a_sign) {
          printf("\nSTMT_EXEC;;6798\n");
tmp___14 = '+';
        } else {
          printf("\nSTMT_EXEC;;6800\n");
tmp___14 = 0;
        }
        printf("\nSTMT_EXEC;;6802\n");
sign_char = (char)tmp___14;
      }
      printf("\nSTMT_EXEC;;6804\n");
if (pad == 45) {
        printf("\nSTMT_EXEC;;6805\n");
if (sign_char) {
          printf("\nSTMT_EXEC;;6806\n");
while (1) {
            printf("\nSTMT_EXEC;;6807\n");
_n___3 = (size_t)1;
            printf("\nSTMT_EXEC;;6808\n");
if (width < 0) {
              printf("\nSTMT_EXEC;;6809\n");
tmp___15 = 0;
            } else {
              printf("\nSTMT_EXEC;;6811\n");
tmp___15 = width;
            }
            printf("\nSTMT_EXEC;;6813\n");
_w___3 = (size_t)tmp___15;
            printf("\nSTMT_EXEC;;6814\n");
if (_n___3 < _w___3) {
              printf("\nSTMT_EXEC;;6815\n");
tmp___16 = _w___3;
            } else {
              printf("\nSTMT_EXEC;;6817\n");
tmp___16 = _n___3;
            }
            printf("\nSTMT_EXEC;;6819\n");
_incr___3 = tmp___16;
            printf("\nSTMT_EXEC;;6820\n");
if (_incr___3 >= maxsize - i) {
              printf("\nSTMT_EXEC;;6821\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
            }
            printf("\nSTMT_EXEC;;6823\n");
if (p) {
              printf("\nSTMT_EXEC;;6824\n");
if (digits == 0) {
                printf("\nSTMT_EXEC;;6825\n");
if (_n___3 < _w___3) {
                  printf("\nSTMT_EXEC;;6826\n");
_delta___3 = (size_t)width - _n___3;
                  printf("\nSTMT_EXEC;;6827\n");
if (pad == 48) {
                    printf("\nSTMT_EXEC;;6828\n");
while (1) {
                      printf("\nSTMT_EXEC;;6829\n");
_i___7 = (size_t)0;
                      printf("\nSTMT_EXEC;;6830\n");
while (1) {
                        printf("\nSTMT_EXEC;;6831\n");
if (!(_i___7 < _delta___3)) {
                          printf("\nSTMT_EXEC;;6832\n");
goto while_break___26;
                        }
                        printf("\nSTMT_EXEC;;6834\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                        printf("\nSTMT_EXEC;;6835\n");
_i___7++;
                      }
                    while_break___26:;
                      printf("\nSTMT_EXEC;;6838\n");
goto while_break___25;
                    }
                  while_break___25:;
                  } else {
                    printf("\nSTMT_EXEC;;6842\n");
while (1) {
                      printf("\nSTMT_EXEC;;6843\n");
_i___8 = (size_t)0;
                      printf("\nSTMT_EXEC;;6844\n");
while (1) {
                        printf("\nSTMT_EXEC;;6845\n");
if (!(_i___8 < _delta___3)) {
                          printf("\nSTMT_EXEC;;6846\n");
goto while_break___28;
                        }
                        printf("\nSTMT_EXEC;;6848\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                        printf("\nSTMT_EXEC;;6849\n");
_i___8++;
                      }
                    while_break___28:;
                      printf("\nSTMT_EXEC;;6852\n");
goto while_break___27;
                    }
                  while_break___27:;
                  }
                }
              }
              printf("\nSTMT_EXEC;;6858\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)sign_char, p);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;6860\n");
i += _incr___3;
            printf("\nSTMT_EXEC;;6861\n");
goto while_break___24;
          }
        while_break___24:;
        }
      } else {
        printf("\nSTMT_EXEC;;6866\n");
padding =
            (int)(((long)digits -
                   ((buf___1 + sizeof(buf___1) / sizeof(buf___1[0])) - bufp)) -
                  (long)(!(!sign_char)));
        printf("\nSTMT_EXEC;;6870\n");
if (padding > 0) {
          printf("\nSTMT_EXEC;;6871\n");
if (pad == 95) {
            printf("\nSTMT_EXEC;;6872\n");
if ((size_t)padding >= maxsize - i) {
              printf("\nSTMT_EXEC;;6873\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
            }
            printf("\nSTMT_EXEC;;6875\n");
if (p) {
              printf("\nSTMT_EXEC;;6876\n");
while (1) {
                printf("\nSTMT_EXEC;;6877\n");
_i___9 = (size_t)0;
                printf("\nSTMT_EXEC;;6878\n");
while (1) {
                  printf("\nSTMT_EXEC;;6879\n");
if (!(_i___9 < (size_t)padding)) {
                    printf("\nSTMT_EXEC;;6880\n");
goto while_break___30;
                  }
                  printf("\nSTMT_EXEC;;6882\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;6883\n");
_i___9++;
                }
              while_break___30:;
                printf("\nSTMT_EXEC;;6886\n");
goto while_break___29;
              }
            while_break___29:;
            }
            printf("\nSTMT_EXEC;;6890\n");
i += (size_t)padding;
            printf("\nSTMT_EXEC;;6891\n");
if (width > padding) {
              printf("\nSTMT_EXEC;;6892\n");
width -= padding;
            } else {
              printf("\nSTMT_EXEC;;6894\n");
width = 0;
            }
            printf("\nSTMT_EXEC;;6896\n");
if (sign_char) {
              printf("\nSTMT_EXEC;;6897\n");
while (1) {
                printf("\nSTMT_EXEC;;6898\n");
_n___4 = (size_t)1;
                printf("\nSTMT_EXEC;;6899\n");
if (width < 0) {
                  printf("\nSTMT_EXEC;;6900\n");
tmp___17 = 0;
                } else {
                  printf("\nSTMT_EXEC;;6902\n");
tmp___17 = width;
                }
                printf("\nSTMT_EXEC;;6904\n");
_w___4 = (size_t)tmp___17;
                printf("\nSTMT_EXEC;;6905\n");
if (_n___4 < _w___4) {
                  printf("\nSTMT_EXEC;;6906\n");
tmp___18 = _w___4;
                } else {
                  printf("\nSTMT_EXEC;;6908\n");
tmp___18 = _n___4;
                }
                printf("\nSTMT_EXEC;;6910\n");
_incr___4 = tmp___18;
                printf("\nSTMT_EXEC;;6911\n");
if (_incr___4 >= maxsize - i) {
                  printf("\nSTMT_EXEC;;6912\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
                }
                printf("\nSTMT_EXEC;;6914\n");
if (p) {
                  printf("\nSTMT_EXEC;;6915\n");
if (digits == 0) {
                    printf("\nSTMT_EXEC;;6916\n");
if (_n___4 < _w___4) {
                      printf("\nSTMT_EXEC;;6917\n");
_delta___4 = (size_t)width - _n___4;
                      printf("\nSTMT_EXEC;;6918\n");
if (pad == 48) {
                        printf("\nSTMT_EXEC;;6919\n");
while (1) {
                          printf("\nSTMT_EXEC;;6920\n");
_i___10 = (size_t)0;
                          printf("\nSTMT_EXEC;;6921\n");
while (1) {
                            printf("\nSTMT_EXEC;;6922\n");
if (!(_i___10 < _delta___4)) {
                              printf("\nSTMT_EXEC;;6923\n");
goto while_break___33;
                            }
                            printf("\nSTMT_EXEC;;6925\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                            printf("\nSTMT_EXEC;;6926\n");
_i___10++;
                          }
                        while_break___33:;
                          printf("\nSTMT_EXEC;;6929\n");
goto while_break___32;
                        }
                      while_break___32:;
                      } else {
                        printf("\nSTMT_EXEC;;6933\n");
while (1) {
                          printf("\nSTMT_EXEC;;6934\n");
_i___11 = (size_t)0;
                          printf("\nSTMT_EXEC;;6935\n");
while (1) {
                            printf("\nSTMT_EXEC;;6936\n");
if (!(_i___11 < _delta___4)) {
                              printf("\nSTMT_EXEC;;6937\n");
goto while_break___35;
                            }
                            printf("\nSTMT_EXEC;;6939\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                            printf("\nSTMT_EXEC;;6940\n");
_i___11++;
                          }
                        while_break___35:;
                          printf("\nSTMT_EXEC;;6943\n");
goto while_break___34;
                        }
                      while_break___34:;
                      }
                    }
                  }
                  printf("\nSTMT_EXEC;;6949\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)sign_char, p);printf("\nFUNC_RETURN;;\n");

                }
                printf("\nSTMT_EXEC;;6951\n");
i += _incr___4;
                printf("\nSTMT_EXEC;;6952\n");
goto while_break___31;
              }
            while_break___31:;
            }
          } else {
            printf("\nSTMT_EXEC;;6957\n");
if ((size_t)digits >= maxsize - i) {
              printf("\nSTMT_EXEC;;6958\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
            }
            printf("\nSTMT_EXEC;;6960\n");
if (sign_char) {
              printf("\nSTMT_EXEC;;6961\n");
while (1) {
                printf("\nSTMT_EXEC;;6962\n");
_n___5 = (size_t)1;
                printf("\nSTMT_EXEC;;6963\n");
if (width < 0) {
                  printf("\nSTMT_EXEC;;6964\n");
tmp___19 = 0;
                } else {
                  printf("\nSTMT_EXEC;;6966\n");
tmp___19 = width;
                }
                printf("\nSTMT_EXEC;;6968\n");
_w___5 = (size_t)tmp___19;
                printf("\nSTMT_EXEC;;6969\n");
if (_n___5 < _w___5) {
                  printf("\nSTMT_EXEC;;6970\n");
tmp___20 = _w___5;
                } else {
                  printf("\nSTMT_EXEC;;6972\n");
tmp___20 = _n___5;
                }
                printf("\nSTMT_EXEC;;6974\n");
_incr___5 = tmp___20;
                printf("\nSTMT_EXEC;;6975\n");
if (_incr___5 >= maxsize - i) {
                  printf("\nSTMT_EXEC;;6976\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
                }
                printf("\nSTMT_EXEC;;6978\n");
if (p) {
                  printf("\nSTMT_EXEC;;6979\n");
if (digits == 0) {
                    printf("\nSTMT_EXEC;;6980\n");
if (_n___5 < _w___5) {
                      printf("\nSTMT_EXEC;;6981\n");
_delta___5 = (size_t)width - _n___5;
                      printf("\nSTMT_EXEC;;6982\n");
if (pad == 48) {
                        printf("\nSTMT_EXEC;;6983\n");
while (1) {
                          printf("\nSTMT_EXEC;;6984\n");
_i___12 = (size_t)0;
                          printf("\nSTMT_EXEC;;6985\n");
while (1) {
                            printf("\nSTMT_EXEC;;6986\n");
if (!(_i___12 < _delta___5)) {
                              printf("\nSTMT_EXEC;;6987\n");
goto while_break___38;
                            }
                            printf("\nSTMT_EXEC;;6989\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                            printf("\nSTMT_EXEC;;6990\n");
_i___12++;
                          }
                        while_break___38:;
                          printf("\nSTMT_EXEC;;6993\n");
goto while_break___37;
                        }
                      while_break___37:;
                      } else {
                        printf("\nSTMT_EXEC;;6997\n");
while (1) {
                          printf("\nSTMT_EXEC;;6998\n");
_i___13 = (size_t)0;
                          printf("\nSTMT_EXEC;;6999\n");
while (1) {
                            printf("\nSTMT_EXEC;;7000\n");
if (!(_i___13 < _delta___5)) {
                              printf("\nSTMT_EXEC;;7001\n");
goto while_break___40;
                            }
                            printf("\nSTMT_EXEC;;7003\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                            printf("\nSTMT_EXEC;;7004\n");
_i___13++;
                          }
                        while_break___40:;
                          printf("\nSTMT_EXEC;;7007\n");
goto while_break___39;
                        }
                      while_break___39:;
                      }
                    }
                  }
                  printf("\nSTMT_EXEC;;7013\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)sign_char, p);printf("\nFUNC_RETURN;;\n");

                }
                printf("\nSTMT_EXEC;;7015\n");
i += _incr___5;
                printf("\nSTMT_EXEC;;7016\n");
goto while_break___36;
              }
            while_break___36:;
            }
            printf("\nSTMT_EXEC;;7020\n");
if (p) {
              printf("\nSTMT_EXEC;;7021\n");
while (1) {
                printf("\nSTMT_EXEC;;7022\n");
_i___14 = (size_t)0;
                printf("\nSTMT_EXEC;;7023\n");
while (1) {
                  printf("\nSTMT_EXEC;;7024\n");
if (!(_i___14 < (size_t)padding)) {
                    printf("\nSTMT_EXEC;;7025\n");
goto while_break___42;
                  }
                  printf("\nSTMT_EXEC;;7027\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;7028\n");
_i___14++;
                }
              while_break___42:;
                printf("\nSTMT_EXEC;;7031\n");
goto while_break___41;
              }
            while_break___41:;
            }
            printf("\nSTMT_EXEC;;7035\n");
i += (size_t)padding;
            printf("\nSTMT_EXEC;;7036\n");
width = 0;
          }
        } else {
          printf("\nSTMT_EXEC;;7039\n");
if (sign_char) {
            printf("\nSTMT_EXEC;;7040\n");
while (1) {
              printf("\nSTMT_EXEC;;7041\n");
_n___6 = (size_t)1;
              printf("\nSTMT_EXEC;;7042\n");
if (width < 0) {
                printf("\nSTMT_EXEC;;7043\n");
tmp___21 = 0;
              } else {
                printf("\nSTMT_EXEC;;7045\n");
tmp___21 = width;
              }
              printf("\nSTMT_EXEC;;7047\n");
_w___6 = (size_t)tmp___21;
              printf("\nSTMT_EXEC;;7048\n");
if (_n___6 < _w___6) {
                printf("\nSTMT_EXEC;;7049\n");
tmp___22 = _w___6;
              } else {
                printf("\nSTMT_EXEC;;7051\n");
tmp___22 = _n___6;
              }
              printf("\nSTMT_EXEC;;7053\n");
_incr___6 = tmp___22;
              printf("\nSTMT_EXEC;;7054\n");
if (_incr___6 >= maxsize - i) {
                printf("\nSTMT_EXEC;;7055\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
              }
              printf("\nSTMT_EXEC;;7057\n");
if (p) {
                printf("\nSTMT_EXEC;;7058\n");
if (digits == 0) {
                  printf("\nSTMT_EXEC;;7059\n");
if (_n___6 < _w___6) {
                    printf("\nSTMT_EXEC;;7060\n");
_delta___6 = (size_t)width - _n___6;
                    printf("\nSTMT_EXEC;;7061\n");
if (pad == 48) {
                      printf("\nSTMT_EXEC;;7062\n");
while (1) {
                        printf("\nSTMT_EXEC;;7063\n");
_i___15 = (size_t)0;
                        printf("\nSTMT_EXEC;;7064\n");
while (1) {
                          printf("\nSTMT_EXEC;;7065\n");
if (!(_i___15 < _delta___6)) {
                            printf("\nSTMT_EXEC;;7066\n");
goto while_break___45;
                          }
                          printf("\nSTMT_EXEC;;7068\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                          printf("\nSTMT_EXEC;;7069\n");
_i___15++;
                        }
                      while_break___45:;
                        printf("\nSTMT_EXEC;;7072\n");
goto while_break___44;
                      }
                    while_break___44:;
                    } else {
                      printf("\nSTMT_EXEC;;7076\n");
while (1) {
                        printf("\nSTMT_EXEC;;7077\n");
_i___16 = (size_t)0;
                        printf("\nSTMT_EXEC;;7078\n");
while (1) {
                          printf("\nSTMT_EXEC;;7079\n");
if (!(_i___16 < _delta___6)) {
                            printf("\nSTMT_EXEC;;7080\n");
goto while_break___47;
                          }
                          printf("\nSTMT_EXEC;;7082\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                          printf("\nSTMT_EXEC;;7083\n");
_i___16++;
                        }
                      while_break___47:;
                        printf("\nSTMT_EXEC;;7086\n");
goto while_break___46;
                      }
                    while_break___46:;
                    }
                  }
                }
                printf("\nSTMT_EXEC;;7092\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)sign_char, p);printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;7094\n");
i += _incr___6;
              printf("\nSTMT_EXEC;;7095\n");
goto while_break___43;
            }
          while_break___43:;
          }
        }
      }
      printf("\nSTMT_EXEC;;7101\n");
while (1) {
        printf("\nSTMT_EXEC;;7102\n");
_n___7 =
            (size_t)((buf___1 + sizeof(buf___1) / sizeof(buf___1[0])) - bufp);
        printf("\nSTMT_EXEC;;7104\n");
if (width < 0) {
          printf("\nSTMT_EXEC;;7105\n");
tmp___23 = 0;
        } else {
          printf("\nSTMT_EXEC;;7107\n");
tmp___23 = width;
        }
        printf("\nSTMT_EXEC;;7109\n");
_w___7 = (size_t)tmp___23;
        printf("\nSTMT_EXEC;;7110\n");
if (_n___7 < _w___7) {
          printf("\nSTMT_EXEC;;7111\n");
tmp___24 = _w___7;
        } else {
          printf("\nSTMT_EXEC;;7113\n");
tmp___24 = _n___7;
        }
        printf("\nSTMT_EXEC;;7115\n");
_incr___7 = tmp___24;
        printf("\nSTMT_EXEC;;7116\n");
if (_incr___7 >= maxsize - i) {
          printf("\nSTMT_EXEC;;7117\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
        }
        printf("\nSTMT_EXEC;;7119\n");
if (p) {
          printf("\nSTMT_EXEC;;7120\n");
if (digits == 0) {
            printf("\nSTMT_EXEC;;7121\n");
if (_n___7 < _w___7) {
              printf("\nSTMT_EXEC;;7122\n");
_delta___7 = (size_t)width - _n___7;
              printf("\nSTMT_EXEC;;7123\n");
if (pad == 48) {
                printf("\nSTMT_EXEC;;7124\n");
while (1) {
                  printf("\nSTMT_EXEC;;7125\n");
_i___17 = (size_t)0;
                  printf("\nSTMT_EXEC;;7126\n");
while (1) {
                    printf("\nSTMT_EXEC;;7127\n");
if (!(_i___17 < _delta___7)) {
                      printf("\nSTMT_EXEC;;7128\n");
goto while_break___50;
                    }
                    printf("\nSTMT_EXEC;;7130\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7131\n");
_i___17++;
                  }
                while_break___50:;
                  printf("\nSTMT_EXEC;;7134\n");
goto while_break___49;
                }
              while_break___49:;
              } else {
                printf("\nSTMT_EXEC;;7138\n");
while (1) {
                  printf("\nSTMT_EXEC;;7139\n");
_i___18 = (size_t)0;
                  printf("\nSTMT_EXEC;;7140\n");
while (1) {
                    printf("\nSTMT_EXEC;;7141\n");
if (!(_i___18 < _delta___7)) {
                      printf("\nSTMT_EXEC;;7142\n");
goto while_break___52;
                    }
                    printf("\nSTMT_EXEC;;7144\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7145\n");
_i___18++;
                  }
                while_break___52:;
                  printf("\nSTMT_EXEC;;7148\n");
goto while_break___51;
                }
              while_break___51:;
              }
            }
          }
          printf("\nSTMT_EXEC;;7154\n");
while (1) {
            printf("\nSTMT_EXEC;;7155\n");
if (to_lowcase) {
              printf("\nSTMT_EXEC;;7156\n");
fwrite_lowcase(p, (char const *)bufp, _n___7);
            } else {
              printf("\nSTMT_EXEC;;7158\n");
if (to_uppcase) {
                printf("\nSTMT_EXEC;;7159\n");
fwrite_uppcase(p, (char const *)bufp, _n___7);
              } else {
                printf("\nSTMT_EXEC;;7161\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
fwrite((void const *)bufp, _n___7, (size_t)1, p);printf("\nFUNC_RETURN;;\n");

              }
            }
            printf("\nSTMT_EXEC;;7164\n");
goto while_break___53;
          }
        while_break___53:;
        }
        printf("\nSTMT_EXEC;;7168\n");
i += _incr___7;
        printf("\nSTMT_EXEC;;7169\n");
goto while_break___48;
      }
    while_break___48:;
      printf("\nSTMT_EXEC;;7172\n");
goto switch_break___1;
    case_70:
      {
printf("\nSTMT_EXEC;;7174\n");
if (modifier != 0) {
        printf("\nSTMT_EXEC;;7175\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7177\n");
subfmt = "%Y-%m-%d";
      printf("\nSTMT_EXEC;;7178\n");
goto subformat;
    case_72:
      {
printf("\nSTMT_EXEC;;7180\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7181\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7183\n");
digits = 2;
      printf("\nSTMT_EXEC;;7184\n");
number_value = (int)tp->tm_hour;
      printf("\nSTMT_EXEC;;7185\n");
goto do_number;
    case_73:
      {
printf("\nSTMT_EXEC;;7187\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7188\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7190\n");
digits = 2;
      printf("\nSTMT_EXEC;;7191\n");
number_value = hour12;
      printf("\nSTMT_EXEC;;7192\n");
goto do_number;
    case_107:
      {
printf("\nSTMT_EXEC;;7194\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7195\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7197\n");
digits = 2;
      printf("\nSTMT_EXEC;;7198\n");
number_value = (int)tp->tm_hour;
      printf("\nSTMT_EXEC;;7199\n");
goto do_number_spacepad;
    case_108:
      {
printf("\nSTMT_EXEC;;7201\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7202\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7204\n");
digits = 2;
      printf("\nSTMT_EXEC;;7205\n");
number_value = hour12;
      printf("\nSTMT_EXEC;;7206\n");
goto do_number_spacepad;
    case_106:
      {
printf("\nSTMT_EXEC;;7208\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7209\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7211\n");
digits = 3;
      printf("\nSTMT_EXEC;;7212\n");
negative_number = (_Bool)(tp->tm_yday < -1);
      printf("\nSTMT_EXEC;;7213\n");
u_number_value = (unsigned int)tp->tm_yday + 1U;
      printf("\nSTMT_EXEC;;7214\n");
goto do_signed_number;
    case_77:
      {
printf("\nSTMT_EXEC;;7216\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7217\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7219\n");
digits = 2;
      printf("\nSTMT_EXEC;;7220\n");
number_value = (int)tp->tm_min;
      printf("\nSTMT_EXEC;;7221\n");
goto do_number;
    case_109:
      {
printf("\nSTMT_EXEC;;7223\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7224\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7226\n");
digits = 2;
      printf("\nSTMT_EXEC;;7227\n");
negative_number = (_Bool)(tp->tm_mon < -1);
      printf("\nSTMT_EXEC;;7228\n");
u_number_value = (unsigned int)tp->tm_mon + 1U;
      printf("\nSTMT_EXEC;;7229\n");
goto do_signed_number;
    case_78:
      {
printf("\nSTMT_EXEC;;7231\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7232\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7234\n");
number_value = ns;
      printf("\nSTMT_EXEC;;7235\n");
if (width == -1) {
        printf("\nSTMT_EXEC;;7236\n");
width = 9;
      } else {
        printf("\nSTMT_EXEC;;7238\n");
j = width;
        printf("\nSTMT_EXEC;;7239\n");
while (1) {
          printf("\nSTMT_EXEC;;7240\n");
if (!(j < 9)) {
            printf("\nSTMT_EXEC;;7241\n");
goto while_break___54;
          }
          printf("\nSTMT_EXEC;;7243\n");
number_value /= 10;
          printf("\nSTMT_EXEC;;7244\n");
j++;
        }
      while_break___54:;
      }
      printf("\nSTMT_EXEC;;7248\n");
digits = width;
      printf("\nSTMT_EXEC;;7249\n");
number_value = number_value;
      printf("\nSTMT_EXEC;;7250\n");
goto do_number;
    case_110:
      {
printf("\nSTMT_EXEC;;7252\n");
while (1) {
        printf("\nSTMT_EXEC;;7253\n");
_n___8 = (size_t)1;
        printf("\nSTMT_EXEC;;7254\n");
if (width < 0) {
          printf("\nSTMT_EXEC;;7255\n");
tmp___25 = 0;
        } else {
          printf("\nSTMT_EXEC;;7257\n");
tmp___25 = width;
        }
        printf("\nSTMT_EXEC;;7259\n");
_w___8 = (size_t)tmp___25;
        printf("\nSTMT_EXEC;;7260\n");
if (_n___8 < _w___8) {
          printf("\nSTMT_EXEC;;7261\n");
tmp___26 = _w___8;
        } else {
          printf("\nSTMT_EXEC;;7263\n");
tmp___26 = _n___8;
        }
        printf("\nSTMT_EXEC;;7265\n");
_incr___8 = tmp___26;
        printf("\nSTMT_EXEC;;7266\n");
if (_incr___8 >= maxsize - i) {
          printf("\nSTMT_EXEC;;7267\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
        }
        printf("\nSTMT_EXEC;;7269\n");
if (p) {
          printf("\nSTMT_EXEC;;7270\n");
if (digits == 0) {
            printf("\nSTMT_EXEC;;7271\n");
if (_n___8 < _w___8) {
              printf("\nSTMT_EXEC;;7272\n");
_delta___8 = (size_t)width - _n___8;
              printf("\nSTMT_EXEC;;7273\n");
if (pad == 48) {
                printf("\nSTMT_EXEC;;7274\n");
while (1) {
                  printf("\nSTMT_EXEC;;7275\n");
_i___19 = (size_t)0;
                  printf("\nSTMT_EXEC;;7276\n");
while (1) {
                    printf("\nSTMT_EXEC;;7277\n");
if (!(_i___19 < _delta___8)) {
                      printf("\nSTMT_EXEC;;7278\n");
goto while_break___57;
                    }
                    printf("\nSTMT_EXEC;;7280\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7281\n");
_i___19++;
                  }
                while_break___57:;
                  printf("\nSTMT_EXEC;;7284\n");
goto while_break___56;
                }
              while_break___56:;
              } else {
                printf("\nSTMT_EXEC;;7288\n");
while (1) {
                  printf("\nSTMT_EXEC;;7289\n");
_i___20 = (size_t)0;
                  printf("\nSTMT_EXEC;;7290\n");
while (1) {
                    printf("\nSTMT_EXEC;;7291\n");
if (!(_i___20 < _delta___8)) {
                      printf("\nSTMT_EXEC;;7292\n");
goto while_break___59;
                    }
                    printf("\nSTMT_EXEC;;7294\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7295\n");
_i___20++;
                  }
                while_break___59:;
                  printf("\nSTMT_EXEC;;7298\n");
goto while_break___58;
                }
              while_break___58:;
              }
            }
          }
          printf("\nSTMT_EXEC;;7304\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('\n', p);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;7306\n");
i += _incr___8;
        printf("\nSTMT_EXEC;;7307\n");
goto while_break___55;
      }
}

    while_break___55:;
      printf("\nSTMT_EXEC;;7310\n");
goto switch_break___1;
    case_80:
      {
printf("\nSTMT_EXEC;;7312\n");
to_lowcase = (_Bool)1;
}

      printf("\nSTMT_EXEC;;7313\n");
format_char = 'p';
    case_112:
      {
printf("\nSTMT_EXEC;;7315\n");
if (change_case) {
        printf("\nSTMT_EXEC;;7316\n");
to_uppcase = (_Bool)0;
        printf("\nSTMT_EXEC;;7317\n");
to_lowcase = (_Bool)1;
      }
}

      printf("\nSTMT_EXEC;;7319\n");
goto underlying_strftime;
    case_82:
      {
printf("\nSTMT_EXEC;;7321\n");
subfmt = "%H:%M";
}

      printf("\nSTMT_EXEC;;7322\n");
goto subformat;
    case_114:
      {
printf("\nSTMT_EXEC;;7324\n");
goto underlying_strftime;
}

    case_83:
      {
printf("\nSTMT_EXEC;;7326\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7327\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7329\n");
digits = 2;
      printf("\nSTMT_EXEC;;7330\n");
number_value = (int)tp->tm_sec;
      printf("\nSTMT_EXEC;;7331\n");
goto do_number;
    case_115:
      {
printf("\nSTMT_EXEC;;7333\n");
ltm = (struct tm) * tp;
}

      printf("\nSTMT_EXEC;;7334\n");
printf("\nFUNC_CALL;mktime(struct tm *);\n");
t = mktime(&ltm);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7335\n");
bufp = buf___1 + sizeof(buf___1) / sizeof(buf___1[0]);
      printf("\nSTMT_EXEC;;7336\n");
negative_number = (_Bool)(t < 0L);
      printf("\nSTMT_EXEC;;7337\n");
while (1) {
        printf("\nSTMT_EXEC;;7338\n");
d = (int)(t % 10L);
        printf("\nSTMT_EXEC;;7339\n");
t /= 10L;
        printf("\nSTMT_EXEC;;7340\n");
bufp--;
        printf("\nSTMT_EXEC;;7341\n");
if (negative_number) {
          printf("\nSTMT_EXEC;;7342\n");
tmp___27 = -d;
        } else {
          printf("\nSTMT_EXEC;;7344\n");
tmp___27 = d;
        }
        printf("\nSTMT_EXEC;;7346\n");
*bufp = (char)(tmp___27 + 48);
        printf("\nSTMT_EXEC;;7347\n");
if (!(t != 0L)) {
          printf("\nSTMT_EXEC;;7348\n");
goto while_break___60;
        }
      }
    while_break___60:
      {
printf("\nSTMT_EXEC;;7352\n");
digits = 1;
}

      printf("\nSTMT_EXEC;;7353\n");
always_output_a_sign = (_Bool)0;
      printf("\nSTMT_EXEC;;7354\n");
goto do_number_sign_and_padding;
    case_88:
      {
printf("\nSTMT_EXEC;;7356\n");
if (modifier == 79) {
        printf("\nSTMT_EXEC;;7357\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7359\n");
goto underlying_strftime;
    case_84:
      {
printf("\nSTMT_EXEC;;7361\n");
subfmt = "%H:%M:%S";
}

      printf("\nSTMT_EXEC;;7362\n");
goto subformat;
    case_116:
      {
printf("\nSTMT_EXEC;;7364\n");
while (1) {
        printf("\nSTMT_EXEC;;7365\n");
_n___9 = (size_t)1;
        printf("\nSTMT_EXEC;;7366\n");
if (width < 0) {
          printf("\nSTMT_EXEC;;7367\n");
tmp___28 = 0;
        } else {
          printf("\nSTMT_EXEC;;7369\n");
tmp___28 = width;
        }
        printf("\nSTMT_EXEC;;7371\n");
_w___9 = (size_t)tmp___28;
        printf("\nSTMT_EXEC;;7372\n");
if (_n___9 < _w___9) {
          printf("\nSTMT_EXEC;;7373\n");
tmp___29 = _w___9;
        } else {
          printf("\nSTMT_EXEC;;7375\n");
tmp___29 = _n___9;
        }
        printf("\nSTMT_EXEC;;7377\n");
_incr___9 = tmp___29;
        printf("\nSTMT_EXEC;;7378\n");
if (_incr___9 >= maxsize - i) {
          printf("\nSTMT_EXEC;;7379\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
        }
        printf("\nSTMT_EXEC;;7381\n");
if (p) {
          printf("\nSTMT_EXEC;;7382\n");
if (digits == 0) {
            printf("\nSTMT_EXEC;;7383\n");
if (_n___9 < _w___9) {
              printf("\nSTMT_EXEC;;7384\n");
_delta___9 = (size_t)width - _n___9;
              printf("\nSTMT_EXEC;;7385\n");
if (pad == 48) {
                printf("\nSTMT_EXEC;;7386\n");
while (1) {
                  printf("\nSTMT_EXEC;;7387\n");
_i___21 = (size_t)0;
                  printf("\nSTMT_EXEC;;7388\n");
while (1) {
                    printf("\nSTMT_EXEC;;7389\n");
if (!(_i___21 < _delta___9)) {
                      printf("\nSTMT_EXEC;;7390\n");
goto while_break___63;
                    }
                    printf("\nSTMT_EXEC;;7392\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7393\n");
_i___21++;
                  }
                while_break___63:;
                  printf("\nSTMT_EXEC;;7396\n");
goto while_break___62;
                }
              while_break___62:;
              } else {
                printf("\nSTMT_EXEC;;7400\n");
while (1) {
                  printf("\nSTMT_EXEC;;7401\n");
_i___22 = (size_t)0;
                  printf("\nSTMT_EXEC;;7402\n");
while (1) {
                    printf("\nSTMT_EXEC;;7403\n");
if (!(_i___22 < _delta___9)) {
                      printf("\nSTMT_EXEC;;7404\n");
goto while_break___65;
                    }
                    printf("\nSTMT_EXEC;;7406\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7407\n");
_i___22++;
                  }
                while_break___65:;
                  printf("\nSTMT_EXEC;;7410\n");
goto while_break___64;
                }
              while_break___64:;
              }
            }
          }
          printf("\nSTMT_EXEC;;7416\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('\t', p);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;7418\n");
i += _incr___9;
        printf("\nSTMT_EXEC;;7419\n");
goto while_break___61;
      }
}

    while_break___61:;
      printf("\nSTMT_EXEC;;7422\n");
goto switch_break___1;
    case_117:
      {
printf("\nSTMT_EXEC;;7424\n");
digits = 1;
}

      printf("\nSTMT_EXEC;;7425\n");
number_value = (int)(((tp->tm_wday - 1) + 7) % 7 + 1);
      printf("\nSTMT_EXEC;;7426\n");
goto do_number;
    case_85:
      {
printf("\nSTMT_EXEC;;7428\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7429\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7431\n");
digits = 2;
      printf("\nSTMT_EXEC;;7432\n");
number_value = (int)(((tp->tm_yday - tp->tm_wday) + 7) / 7);
      printf("\nSTMT_EXEC;;7433\n");
goto do_number;
    case_86:
      {
printf("\nSTMT_EXEC;;7435\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7436\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7438\n");
if (tp->tm_year < 0) {
        printf("\nSTMT_EXEC;;7439\n");
tmp___30 = 300;
      } else {
        printf("\nSTMT_EXEC;;7441\n");
tmp___30 = -100;
      }
      printf("\nSTMT_EXEC;;7443\n");
year___1 = (int)(tp->tm_year + (int const)tmp___30);
      printf("\nSTMT_EXEC;;7444\n");
year_adjust = 0;
      printf("\nSTMT_EXEC;;7445\n");
tmp___31 = iso_week_days((int)tp->tm_yday, (int)tp->tm_wday);
      printf("\nSTMT_EXEC;;7446\n");
days = tmp___31;
      printf("\nSTMT_EXEC;;7447\n");
if (days < 0) {
        printf("\nSTMT_EXEC;;7448\n");
year_adjust = -1;
        printf("\nSTMT_EXEC;;7449\n");
if ((year___1 - 1) % 4 == 0) {
          printf("\nSTMT_EXEC;;7450\n");
if ((year___1 - 1) % 100 != 0) {
            printf("\nSTMT_EXEC;;7451\n");
tmp___32 = 1;
          } else {
            printf("\nSTMT_EXEC;;7453\n");
if ((year___1 - 1) % 400 == 0) {
              printf("\nSTMT_EXEC;;7454\n");
tmp___32 = 1;
            } else {
              printf("\nSTMT_EXEC;;7456\n");
tmp___32 = 0;
            }
          }
        } else {
          printf("\nSTMT_EXEC;;7460\n");
tmp___32 = 0;
        }
        printf("\nSTMT_EXEC;;7462\n");
days = iso_week_days((int)(tp->tm_yday + (int const)(365 + tmp___32)),
                             (int)tp->tm_wday);
      } else {
        printf("\nSTMT_EXEC;;7465\n");
if (year___1 % 4 == 0) {
          printf("\nSTMT_EXEC;;7466\n");
if (year___1 % 100 != 0) {
            printf("\nSTMT_EXEC;;7467\n");
tmp___33 = 1;
          } else {
            printf("\nSTMT_EXEC;;7469\n");
if (year___1 % 400 == 0) {
              printf("\nSTMT_EXEC;;7470\n");
tmp___33 = 1;
            } else {
              printf("\nSTMT_EXEC;;7472\n");
tmp___33 = 0;
            }
          }
        } else {
          printf("\nSTMT_EXEC;;7476\n");
tmp___33 = 0;
        }
        printf("\nSTMT_EXEC;;7478\n");
tmp___34 = iso_week_days(
            (int)(tp->tm_yday - (int const)(365 + tmp___33)), (int)tp->tm_wday);
        printf("\nSTMT_EXEC;;7480\n");
d___0 = tmp___34;
        printf("\nSTMT_EXEC;;7481\n");
if (0 <= d___0) {
          printf("\nSTMT_EXEC;;7482\n");
year_adjust = 1;
          printf("\nSTMT_EXEC;;7483\n");
days = d___0;
        }
      }
      printf("\nSTMT_EXEC;;7486\n");
if ((int const) * f == 103) {
        printf("\nSTMT_EXEC;;7487\n");
goto case_103___0;
      }
      printf("\nSTMT_EXEC;;7489\n");
if ((int const) * f == 71) {
        printf("\nSTMT_EXEC;;7490\n");
goto case_71___0;
      }
      printf("\nSTMT_EXEC;;7492\n");
goto switch_default___1;
    case_103___0:
      {
printf("\nSTMT_EXEC;;7494\n");
yy = (int)((tp->tm_year % 100 + (int const)year_adjust) % 100);
}

      printf("\nSTMT_EXEC;;7495\n");
digits = 2;
      printf("\nSTMT_EXEC;;7496\n");
if (0 <= yy) {
        printf("\nSTMT_EXEC;;7497\n");
number_value = yy;
      } else {
        printf("\nSTMT_EXEC;;7499\n");
if (tp->tm_year < (int const)(-1900 - year_adjust)) {
          printf("\nSTMT_EXEC;;7500\n");
tmp___35 = -yy;
        } else {
          printf("\nSTMT_EXEC;;7502\n");
tmp___35 = yy + 100;
        }
        printf("\nSTMT_EXEC;;7504\n");
number_value = tmp___35;
      }
      printf("\nSTMT_EXEC;;7506\n");
goto do_number;
    case_71___0:
      {
printf("\nSTMT_EXEC;;7508\n");
digits = 4;
}

      printf("\nSTMT_EXEC;;7509\n");
negative_number = (_Bool)(tp->tm_year < (int const)(-1900 - year_adjust));
      printf("\nSTMT_EXEC;;7510\n");
u_number_value =
          ((unsigned int)tp->tm_year + 1900U) + (unsigned int)year_adjust;
      printf("\nSTMT_EXEC;;7512\n");
goto do_signed_number;
    switch_default___1:
      {
printf("\nSTMT_EXEC;;7514\n");
digits = 2;
}

      printf("\nSTMT_EXEC;;7515\n");
number_value = days / 7 + 1;
      printf("\nSTMT_EXEC;;7516\n");
goto do_number;
    case_87:
      {
printf("\nSTMT_EXEC;;7518\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7519\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7521\n");
digits = 2;
      printf("\nSTMT_EXEC;;7522\n");
number_value =
          (int)(((tp->tm_yday - ((tp->tm_wday - 1) + 7) % 7) + 7) / 7);
      printf("\nSTMT_EXEC;;7524\n");
goto do_number;
    case_119:
      {
printf("\nSTMT_EXEC;;7526\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7527\n");
goto bad_format;
      }
}

      printf("\nSTMT_EXEC;;7529\n");
digits = 1;
      printf("\nSTMT_EXEC;;7530\n");
number_value = (int)tp->tm_wday;
      printf("\nSTMT_EXEC;;7531\n");
goto do_number;
    case_89:
      {
printf("\nSTMT_EXEC;;7533\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7534\n");
goto underlying_strftime;
      }
}

      printf("\nSTMT_EXEC;;7536\n");
if (modifier == 79) {
        printf("\nSTMT_EXEC;;7537\n");
goto bad_format;
      } else {
        printf("\nSTMT_EXEC;;7539\n");
digits = 4;
      }
      printf("\nSTMT_EXEC;;7541\n");
negative_number = (_Bool)(tp->tm_year < -1900);
      printf("\nSTMT_EXEC;;7542\n");
u_number_value = (unsigned int)tp->tm_year + 1900U;
      printf("\nSTMT_EXEC;;7543\n");
goto do_signed_number;
    case_121:
      {
printf("\nSTMT_EXEC;;7545\n");
if (modifier == 69) {
        printf("\nSTMT_EXEC;;7546\n");
goto underlying_strftime;
      }
}

      printf("\nSTMT_EXEC;;7548\n");
yy___0 = (int)(tp->tm_year % 100);
      printf("\nSTMT_EXEC;;7549\n");
if (yy___0 < 0) {
        printf("\nSTMT_EXEC;;7550\n");
if (tp->tm_year < -1900) {
          printf("\nSTMT_EXEC;;7551\n");
yy___0 = -yy___0;
        } else {
          printf("\nSTMT_EXEC;;7553\n");
yy___0 += 100;
        }
      }
      printf("\nSTMT_EXEC;;7556\n");
digits = 2;
      printf("\nSTMT_EXEC;;7557\n");
number_value = yy___0;
      printf("\nSTMT_EXEC;;7558\n");
goto do_number;
    case_90:
      {
printf("\nSTMT_EXEC;;7560\n");
if (change_case) {
        printf("\nSTMT_EXEC;;7561\n");
to_uppcase = (_Bool)0;
        printf("\nSTMT_EXEC;;7562\n");
to_lowcase = (_Bool)1;
      }
}

      printf("\nSTMT_EXEC;;7564\n");
if (!zone) {
        printf("\nSTMT_EXEC;;7565\n");
zone = "";
      }
      printf("\nSTMT_EXEC;;7567\n");
while (1) {
        printf("\nSTMT_EXEC;;7568\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___36 = strlen(zone);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7569\n");
_n___10 = tmp___36;
        printf("\nSTMT_EXEC;;7570\n");
if (width < 0) {
          printf("\nSTMT_EXEC;;7571\n");
tmp___37 = 0;
        } else {
          printf("\nSTMT_EXEC;;7573\n");
tmp___37 = width;
        }
        printf("\nSTMT_EXEC;;7575\n");
_w___10 = (size_t)tmp___37;
        printf("\nSTMT_EXEC;;7576\n");
if (_n___10 < _w___10) {
          printf("\nSTMT_EXEC;;7577\n");
tmp___38 = _w___10;
        } else {
          printf("\nSTMT_EXEC;;7579\n");
tmp___38 = _n___10;
        }
        printf("\nSTMT_EXEC;;7581\n");
_incr___10 = tmp___38;
        printf("\nSTMT_EXEC;;7582\n");
if (_incr___10 >= maxsize - i) {
          printf("\nSTMT_EXEC;;7583\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
        }
        printf("\nSTMT_EXEC;;7585\n");
if (p) {
          printf("\nSTMT_EXEC;;7586\n");
if (digits == 0) {
            printf("\nSTMT_EXEC;;7587\n");
if (_n___10 < _w___10) {
              printf("\nSTMT_EXEC;;7588\n");
_delta___10 = (size_t)width - _n___10;
              printf("\nSTMT_EXEC;;7589\n");
if (pad == 48) {
                printf("\nSTMT_EXEC;;7590\n");
while (1) {
                  printf("\nSTMT_EXEC;;7591\n");
_i___23 = (size_t)0;
                  printf("\nSTMT_EXEC;;7592\n");
while (1) {
                    printf("\nSTMT_EXEC;;7593\n");
if (!(_i___23 < _delta___10)) {
                      printf("\nSTMT_EXEC;;7594\n");
goto while_break___68;
                    }
                    printf("\nSTMT_EXEC;;7596\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7597\n");
_i___23++;
                  }
                while_break___68:;
                  printf("\nSTMT_EXEC;;7600\n");
goto while_break___67;
                }
              while_break___67:;
              } else {
                printf("\nSTMT_EXEC;;7604\n");
while (1) {
                  printf("\nSTMT_EXEC;;7605\n");
_i___24 = (size_t)0;
                  printf("\nSTMT_EXEC;;7606\n");
while (1) {
                    printf("\nSTMT_EXEC;;7607\n");
if (!(_i___24 < _delta___10)) {
                      printf("\nSTMT_EXEC;;7608\n");
goto while_break___70;
                    }
                    printf("\nSTMT_EXEC;;7610\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7611\n");
_i___24++;
                  }
                while_break___70:;
                  printf("\nSTMT_EXEC;;7614\n");
goto while_break___69;
                }
              while_break___69:;
              }
            }
          }
          printf("\nSTMT_EXEC;;7620\n");
while (1) {
            printf("\nSTMT_EXEC;;7621\n");
if (to_lowcase) {
              printf("\nSTMT_EXEC;;7622\n");
fwrite_lowcase(p, zone, _n___10);
            } else {
              printf("\nSTMT_EXEC;;7624\n");
if (to_uppcase) {
                printf("\nSTMT_EXEC;;7625\n");
fwrite_uppcase(p, zone, _n___10);
              } else {
                printf("\nSTMT_EXEC;;7627\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
fwrite((void const *)zone, _n___10, (size_t)1, p);printf("\nFUNC_RETURN;;\n");

              }
            }
            printf("\nSTMT_EXEC;;7630\n");
goto while_break___71;
          }
        while_break___71:;
        }
        printf("\nSTMT_EXEC;;7634\n");
i += _incr___10;
        printf("\nSTMT_EXEC;;7635\n");
goto while_break___66;
      }
    while_break___66:;
      printf("\nSTMT_EXEC;;7638\n");
goto switch_break___1;
    case_58:
      {
printf("\nSTMT_EXEC;;7640\n");
colons = (size_t)1;
}

      printf("\nSTMT_EXEC;;7641\n");
while (1) {
        printf("\nSTMT_EXEC;;7642\n");
if (!((int const) * (f + colons) == 58)) {
          printf("\nSTMT_EXEC;;7643\n");
goto while_break___72;
        }
        printf("\nSTMT_EXEC;;7645\n");
goto __Cont___0;
      __Cont___0:
        {
printf("\nSTMT_EXEC;;7647\n");
colons++;
}

      }
    while_break___72:;
      printf("\nSTMT_EXEC;;7650\n");
if ((int const) * (f + colons) != 122) {
        printf("\nSTMT_EXEC;;7651\n");
goto bad_format;
      }
      printf("\nSTMT_EXEC;;7653\n");
f += colons;
      printf("\nSTMT_EXEC;;7654\n");
goto do_z_conversion;
    case_122:
      {
printf("\nSTMT_EXEC;;7656\n");
colons = (size_t)0;
}

    do_z_conversion:
      {
printf("\nSTMT_EXEC;;7658\n");
if (tp->tm_isdst < 0) {
        printf("\nSTMT_EXEC;;7659\n");
goto switch_break___1;
      }
}

      printf("\nSTMT_EXEC;;7661\n");
diff = (int)tp->tm_gmtoff;
      printf("\nSTMT_EXEC;;7662\n");
hour_diff = (diff / 60) / 60;
      printf("\nSTMT_EXEC;;7663\n");
min_diff = (diff / 60) % 60;
      printf("\nSTMT_EXEC;;7664\n");
sec_diff = diff % 60;
      printf("\nSTMT_EXEC;;7665\n");
if (colons == 0UL) {
        printf("\nSTMT_EXEC;;7666\n");
goto case_0;
      }
      printf("\nSTMT_EXEC;;7668\n");
if (colons == 1UL) {
        printf("\nSTMT_EXEC;;7669\n");
goto tz_hh_mm;
      }
      printf("\nSTMT_EXEC;;7671\n");
if (colons == 2UL) {
        printf("\nSTMT_EXEC;;7672\n");
goto tz_hh_mm_ss;
      }
      printf("\nSTMT_EXEC;;7674\n");
if (colons == 3UL) {
        printf("\nSTMT_EXEC;;7675\n");
goto case_3;
      }
      printf("\nSTMT_EXEC;;7677\n");
goto switch_default___2;
    case_0:
      {
printf("\nSTMT_EXEC;;7679\n");
digits = 5;
}

      printf("\nSTMT_EXEC;;7680\n");
negative_number = (_Bool)(diff < 0);
      printf("\nSTMT_EXEC;;7681\n");
tz_colon_mask = 0;
      printf("\nSTMT_EXEC;;7682\n");
u_number_value = (unsigned int)(hour_diff * 100 + min_diff);
      printf("\nSTMT_EXEC;;7683\n");
goto do_tz_offset;
    tz_hh_mm:
      {
printf("\nSTMT_EXEC;;7685\n");
digits = 6;
}

      printf("\nSTMT_EXEC;;7686\n");
negative_number = (_Bool)(diff < 0);
      printf("\nSTMT_EXEC;;7687\n");
tz_colon_mask = 4;
      printf("\nSTMT_EXEC;;7688\n");
u_number_value = (unsigned int)(hour_diff * 100 + min_diff);
      printf("\nSTMT_EXEC;;7689\n");
goto do_tz_offset;
    tz_hh_mm_ss:
      {
printf("\nSTMT_EXEC;;7691\n");
digits = 9;
}

      printf("\nSTMT_EXEC;;7692\n");
negative_number = (_Bool)(diff < 0);
      printf("\nSTMT_EXEC;;7693\n");
tz_colon_mask = 20;
      printf("\nSTMT_EXEC;;7694\n");
u_number_value =
          (unsigned int)((hour_diff * 10000 + min_diff * 100) + sec_diff);
      printf("\nSTMT_EXEC;;7696\n");
goto do_tz_offset;
    case_3:
      {
printf("\nSTMT_EXEC;;7698\n");
if (sec_diff != 0) {
        printf("\nSTMT_EXEC;;7699\n");
goto tz_hh_mm_ss;
      }
}

      printf("\nSTMT_EXEC;;7701\n");
if (min_diff != 0) {
        printf("\nSTMT_EXEC;;7702\n");
goto tz_hh_mm;
      }
      printf("\nSTMT_EXEC;;7704\n");
digits = 3;
      printf("\nSTMT_EXEC;;7705\n");
negative_number = (_Bool)(diff < 0);
      printf("\nSTMT_EXEC;;7706\n");
tz_colon_mask = 0;
      printf("\nSTMT_EXEC;;7707\n");
u_number_value = (unsigned int)hour_diff;
      printf("\nSTMT_EXEC;;7708\n");
goto do_tz_offset;
    switch_default___2:
      {
printf("\nSTMT_EXEC;;7710\n");
goto bad_format;
}

    case_0___0:
      {
printf("\nSTMT_EXEC;;7712\n");
f--;
}

    bad_format:
      {
printf("\nSTMT_EXEC;;7714\n");
flen = 1;
}

      printf("\nSTMT_EXEC;;7715\n");
while (1) {
        printf("\nSTMT_EXEC;;7716\n");
if (!((int const) * (f + (1 - flen)) != 37)) {
          printf("\nSTMT_EXEC;;7717\n");
goto while_break___73;
        }
        printf("\nSTMT_EXEC;;7719\n");
goto __Cont___1;
      __Cont___1:
        {
printf("\nSTMT_EXEC;;7721\n");
flen++;
}

      }
    while_break___73:;
      printf("\nSTMT_EXEC;;7724\n");
while (1) {
        printf("\nSTMT_EXEC;;7725\n");
_n___11 = (size_t)flen;
        printf("\nSTMT_EXEC;;7726\n");
if (width < 0) {
          printf("\nSTMT_EXEC;;7727\n");
tmp___39 = 0;
        } else {
          printf("\nSTMT_EXEC;;7729\n");
tmp___39 = width;
        }
        printf("\nSTMT_EXEC;;7731\n");
_w___11 = (size_t)tmp___39;
        printf("\nSTMT_EXEC;;7732\n");
if (_n___11 < _w___11) {
          printf("\nSTMT_EXEC;;7733\n");
tmp___40 = _w___11;
        } else {
          printf("\nSTMT_EXEC;;7735\n");
tmp___40 = _n___11;
        }
        printf("\nSTMT_EXEC;;7737\n");
_incr___11 = tmp___40;
        printf("\nSTMT_EXEC;;7738\n");
if (_incr___11 >= maxsize - i) {
          printf("\nSTMT_EXEC;;7739\n");
printf("\nFUNC_RETURN;;\n");
return ((size_t)0);
        }
        printf("\nSTMT_EXEC;;7741\n");
if (p) {
          printf("\nSTMT_EXEC;;7742\n");
if (digits == 0) {
            printf("\nSTMT_EXEC;;7743\n");
if (_n___11 < _w___11) {
              printf("\nSTMT_EXEC;;7744\n");
_delta___11 = (size_t)width - _n___11;
              printf("\nSTMT_EXEC;;7745\n");
if (pad == 48) {
                printf("\nSTMT_EXEC;;7746\n");
while (1) {
                  printf("\nSTMT_EXEC;;7747\n");
_i___25 = (size_t)0;
                  printf("\nSTMT_EXEC;;7748\n");
while (1) {
                    printf("\nSTMT_EXEC;;7749\n");
if (!(_i___25 < _delta___11)) {
                      printf("\nSTMT_EXEC;;7750\n");
goto while_break___76;
                    }
                    printf("\nSTMT_EXEC;;7752\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc('0', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7753\n");
_i___25++;
                  }
                while_break___76:;
                  printf("\nSTMT_EXEC;;7756\n");
goto while_break___75;
                }
              while_break___75:;
              } else {
                printf("\nSTMT_EXEC;;7760\n");
while (1) {
                  printf("\nSTMT_EXEC;;7761\n");
_i___26 = (size_t)0;
                  printf("\nSTMT_EXEC;;7762\n");
while (1) {
                    printf("\nSTMT_EXEC;;7763\n");
if (!(_i___26 < _delta___11)) {
                      printf("\nSTMT_EXEC;;7764\n");
goto while_break___78;
                    }
                    printf("\nSTMT_EXEC;;7766\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc(' ', p);printf("\nFUNC_RETURN;;\n");

                    printf("\nSTMT_EXEC;;7767\n");
_i___26++;
                  }
                while_break___78:;
                  printf("\nSTMT_EXEC;;7770\n");
goto while_break___77;
                }
              while_break___77:;
              }
            }
          }
          printf("\nSTMT_EXEC;;7776\n");
while (1) {
            printf("\nSTMT_EXEC;;7777\n");
if (to_lowcase) {
              printf("\nSTMT_EXEC;;7778\n");
fwrite_lowcase(p, f + (1 - flen), _n___11);
            } else {
              printf("\nSTMT_EXEC;;7780\n");
if (to_uppcase) {
                printf("\nSTMT_EXEC;;7781\n");
fwrite_uppcase(p, f + (1 - flen), _n___11);
              } else {
                printf("\nSTMT_EXEC;;7783\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
fwrite((void const *)(f + (1 - flen)), _n___11, (size_t)1, p);printf("\nFUNC_RETURN;;\n");

              }
            }
            printf("\nSTMT_EXEC;;7786\n");
goto while_break___79;
          }
        while_break___79:;
        }
        printf("\nSTMT_EXEC;;7790\n");
i += _incr___11;
        printf("\nSTMT_EXEC;;7791\n");
goto while_break___74;
      }
    while_break___74:;
      printf("\nSTMT_EXEC;;7794\n");
goto switch_break___1;
    switch_break___1:;
    __Cont:
      {
printf("\nSTMT_EXEC;;7797\n");
f++;
}

    }
  while_break:;
    printf("\nSTMT_EXEC;;7800\n");
printf("\nFUNC_RETURN;;\n");
return (i);
  }
printf("\nFUNC_RETURN;;\n");
}
size_t fprintftime(FILE *s, char const *format, struct tm const *tp, int ut,
                   int ns) {
  printf("\nFUNC_CALL;fprintftime(FILE *,const char *,const struct tm *,int,int);\n");
printf("\nSTMT_EXEC;;7805\n");
size_t tmp;
  {
    printf("\nSTMT_EXEC;;7807\n");
tmp = strftime_case____0((_Bool)0, s, format, tp, ut, ns);
    printf("\nSTMT_EXEC;;7808\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fflush(FILE *__stream);
int rpl_fflush(FILE *stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        __freading)(FILE *__fp);
static void clear_ungetc_buffer_preserving_position(FILE *fp) {
  printf("\nFUNC_CALL;clear_ungetc_buffer_preserving_position(FILE *);\n");
{
    printf("\nSTMT_EXEC;;7836\n");
if (fp->_flags & 256) {
      printf("\nSTMT_EXEC;;7837\n");
rpl_fseeko(fp, (off_t)0, 1);
    }
    printf("\nSTMT_EXEC;;7839\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int rpl_fflush(FILE *stream) {
  printf("\nFUNC_CALL;rpl_fflush(FILE *);\n");
printf("\nSTMT_EXEC;;7843\n");
int tmp;
  printf("\nSTMT_EXEC;;7844\n");
int tmp___0;
  printf("\nSTMT_EXEC;;7845\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;7847\n");
if ((unsigned long)stream == (unsigned long)((void *)0)) {
      printf("\nSTMT_EXEC;;7848\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
tmp = fflush(stream);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7849\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    } else {
      printf("\nSTMT_EXEC;;7851\n");
printf("\nFUNC_CALL;__freading(FILE *);\n");
tmp___0 = __freading(stream);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7852\n");
if (!(tmp___0 != 0)) {
        printf("\nSTMT_EXEC;;7853\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
tmp = fflush(stream);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7854\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
      }
    }
    printf("\nSTMT_EXEC;;7857\n");
clear_ungetc_buffer_preserving_position(stream);
    printf("\nSTMT_EXEC;;7858\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
tmp___1 = fflush(stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7859\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern int fclose(FILE *__stream);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int(__attribute__((__nonnull__(1))) rpl_fclose)(FILE *fp) {
  printf("\nFUNC_CALL;rpl_fclose(FILE *);\n");
printf("\nSTMT_EXEC;;7888\n");
int saved_errno;
  printf("\nSTMT_EXEC;;7889\n");
int fd;
  printf("\nSTMT_EXEC;;7890\n");
int result;
  printf("\nSTMT_EXEC;;7891\n");
int tmp;
  printf("\nSTMT_EXEC;;7892\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;7893\n");
int tmp___1;
  printf("\nSTMT_EXEC;;7894\n");
int tmp___2;
  printf("\nSTMT_EXEC;;7895\n");
__off_t tmp___3;
  printf("\nSTMT_EXEC;;7896\n");
int tmp___4;
  printf("\nSTMT_EXEC;;7897\n");
int *tmp___5;
  {
    printf("\nSTMT_EXEC;;7899\n");
saved_errno = 0;
    printf("\nSTMT_EXEC;;7900\n");
result = 0;
    printf("\nSTMT_EXEC;;7901\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
fd = fileno(fp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7902\n");
if (fd < 0) {
      printf("\nSTMT_EXEC;;7903\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
tmp = fclose(fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7904\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    }
    printf("\nSTMT_EXEC;;7906\n");
printf("\nFUNC_CALL;__freading(FILE *);\n");
tmp___1 = __freading(fp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7907\n");
if (tmp___1 != 0) {
      printf("\nSTMT_EXEC;;7908\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___2 = fileno(fp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7909\n");
printf("\nFUNC_CALL;lseek(int,__off_t,int);\n");
tmp___3 = lseek(tmp___2, (__off_t)0, 1);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7910\n");
if (tmp___3 != -1L) {
      _L:
        {
printf("\nSTMT_EXEC;;7912\n");
tmp___4 = rpl_fflush(fp);
}

        printf("\nSTMT_EXEC;;7913\n");
if (tmp___4) {
          printf("\nSTMT_EXEC;;7914\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7915\n");
saved_errno = *tmp___0;
        }
      }
    } else {
      printf("\nSTMT_EXEC;;7919\n");
goto _L;
    }
    printf("\nSTMT_EXEC;;7921\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
result = fclose(fp);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;7922\n");
if (saved_errno != 0) {
      printf("\nSTMT_EXEC;;7923\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7924\n");
*tmp___5 = saved_errno;
      printf("\nSTMT_EXEC;;7925\n");
result = -1;
    }
    printf("\nSTMT_EXEC;;7927\n");
printf("\nFUNC_RETURN;;\n");
return (result);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
int volatile exit_failure = (int volatile)1;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char const diacrit_base[256];
char const diacrit_diac[256];
char const diacrit_base[256] = {
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)'A', (char const)'B', (char const)'C',
    (char const)'D', (char const)'E', (char const)'F', (char const)'G',
    (char const)'H', (char const)'I', (char const)'J', (char const)'K',
    (char const)'L', (char const)'M', (char const)'N', (char const)'O',
    (char const)'P', (char const)'Q', (char const)'R', (char const)'S',
    (char const)'T', (char const)'U', (char const)'V', (char const)'W',
    (char const)'X', (char const)'Y', (char const)'Z', (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)'a', (char const)'b', (char const)'c',
    (char const)'d', (char const)'e', (char const)'f', (char const)'g',
    (char const)'h', (char const)'i', (char const)'j', (char const)'k',
    (char const)'l', (char const)'m', (char const)'n', (char const)'o',
    (char const)'p', (char const)'q', (char const)'r', (char const)'s',
    (char const)'t', (char const)'u', (char const)'v', (char const)'w',
    (char const)'x', (char const)'y', (char const)'z', (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)'A', (char const)'A', (char const)'A', (char const)'A',
    (char const)'A', (char const)'A', (char const)'A', (char const)'C',
    (char const)'E', (char const)'E', (char const)'E', (char const)'E',
    (char const)'I', (char const)'I', (char const)'I', (char const)'I',
    (char const)0,   (char const)'N', (char const)'O', (char const)'O',
    (char const)'O', (char const)'O', (char const)'O', (char const)0,
    (char const)'O', (char const)'U', (char const)'U', (char const)'U',
    (char const)'U', (char const)'Y', (char const)0,   (char const)0,
    (char const)'a', (char const)'a', (char const)'a', (char const)'a',
    (char const)'a', (char const)'a', (char const)'a', (char const)'c',
    (char const)'e', (char const)'e', (char const)'e', (char const)'e',
    (char const)'i', (char const)'i', (char const)'i', (char const)'i',
    (char const)0,   (char const)'n', (char const)'o', (char const)'o',
    (char const)'o', (char const)'o', (char const)'o', (char const)0,
    (char const)'o', (char const)'u', (char const)'u', (char const)'u',
    (char const)'u', (char const)'y', (char const)0,   (char const)'y'};
char const diacrit_diac[256] = {
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)4,
    (char const)0, (char const)3, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)6, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)3, (char const)2, (char const)4,
    (char const)6, (char const)5, (char const)8, (char const)1, (char const)7,
    (char const)3, (char const)2, (char const)4, (char const)5, (char const)3,
    (char const)2, (char const)4, (char const)5, (char const)0, (char const)6,
    (char const)3, (char const)2, (char const)4, (char const)6, (char const)5,
    (char const)0, (char const)9, (char const)3, (char const)2, (char const)4,
    (char const)5, (char const)2, (char const)0, (char const)0, (char const)3,
    (char const)2, (char const)4, (char const)6, (char const)5, (char const)8,
    (char const)1, (char const)7, (char const)3, (char const)2, (char const)4,
    (char const)5, (char const)3, (char const)2, (char const)4, (char const)5,
    (char const)0, (char const)6, (char const)3, (char const)2, (char const)4,
    (char const)6, (char const)5, (char const)0, (char const)9, (char const)3,
    (char const)2, (char const)4, (char const)5, (char const)2, (char const)0,
    (char const)0};
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
void close_stdout(void);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int close_stream(FILE *stream);
static char const *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void) {
  printf("\nFUNC_CALL;close_stdout();\n");
printf("\nSTMT_EXEC;;8109\n");
char const *write_error;
  printf("\nSTMT_EXEC;;8110\n");
char const *tmp;
  printf("\nSTMT_EXEC;;8111\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;8112\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;8113\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;8114\n");
int tmp___3;
  printf("\nSTMT_EXEC;;8115\n");
int *tmp___4;
  printf("\nSTMT_EXEC;;8116\n");
int tmp___5;
  {
    printf("\nSTMT_EXEC;;8118\n");
tmp___3 = close_stream(stdout);
    printf("\nSTMT_EXEC;;8119\n");
if (tmp___3 != 0) {
      printf("\nSTMT_EXEC;;8120\n");
if (ignore_EPIPE) {
        printf("\nSTMT_EXEC;;8121\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___4 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8122\n");
if (!(*tmp___4 == 32)) {
          printf("\nSTMT_EXEC;;8123\n");
goto _L;
        }
      } else {
      _L:
        {
printf("\nSTMT_EXEC;;8127\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = (char const *)gettext("write error");printf("\nFUNC_RETURN;;\n");

}

        printf("\nSTMT_EXEC;;8128\n");
write_error = tmp;
        printf("\nSTMT_EXEC;;8129\n");
if (file_name) {
          printf("\nSTMT_EXEC;;8130\n");
tmp___0 = quotearg_colon(file_name);
          printf("\nSTMT_EXEC;;8131\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8132\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___1, "%s: %s", tmp___0, write_error);printf("\nFUNC_RETURN;;\n");

        } else {
          printf("\nSTMT_EXEC;;8134\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8135\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___2, "%s", write_error);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8137\n");
printf("\nFUNC_CALL;_exit(int);\n");
_exit((int)exit_failure);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;8140\n");
tmp___5 = close_stream(stderr);
    printf("\nSTMT_EXEC;;8141\n");
if (tmp___5 != 0) {
      printf("\nSTMT_EXEC;;8142\n");
printf("\nFUNC_CALL;_exit(int);\n");
_exit((int)exit_failure);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8144\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
int close_stream(FILE *stream) {
  printf("\nFUNC_CALL;close_stream(FILE *);\n");
printf("\nSTMT_EXEC;;8154\n");
_Bool some_pending;
  printf("\nSTMT_EXEC;;8155\n");
size_t tmp;
  printf("\nSTMT_EXEC;;8156\n");
_Bool prev_fail;
  printf("\nSTMT_EXEC;;8157\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8158\n");
_Bool fclose_fail;
  printf("\nSTMT_EXEC;;8159\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8160\n");
int *tmp___2;
  printf("\nSTMT_EXEC;;8161\n");
int *tmp___3;
  {
    printf("\nSTMT_EXEC;;8163\n");
printf("\nFUNC_CALL;__fpending(FILE *);\n");
tmp = __fpending(stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8164\n");
some_pending = (_Bool)(tmp != 0UL);
    printf("\nSTMT_EXEC;;8165\n");
printf("\nFUNC_CALL;ferror_unlocked(FILE *);\n");
tmp___0 = ferror_unlocked(stream);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;8166\n");
prev_fail = (_Bool)(tmp___0 != 0);
    printf("\nSTMT_EXEC;;8167\n");
tmp___1 = rpl_fclose(stream);
    printf("\nSTMT_EXEC;;8168\n");
fclose_fail = (_Bool)(tmp___1 != 0);
    printf("\nSTMT_EXEC;;8169\n");
if (prev_fail) {
      printf("\nSTMT_EXEC;;8170\n");
goto _L___0;
    } else {
      printf("\nSTMT_EXEC;;8172\n");
if (fclose_fail) {
        printf("\nSTMT_EXEC;;8173\n");
if (some_pending) {
          printf("\nSTMT_EXEC;;8174\n");
goto _L___0;
        } else {
          printf("\nSTMT_EXEC;;8176\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___3 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8177\n");
if (*tmp___3 != 9) {
          _L___0:
            {
printf("\nSTMT_EXEC;;8179\n");
if (!fclose_fail) {
              printf("\nSTMT_EXEC;;8180\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___2 = __errno_location();printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;8181\n");
*tmp___2 = 0;
            }
}

            printf("\nSTMT_EXEC;;8183\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;8188\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=pure"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
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
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic ignored "-Wtype-limits"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wsuggest-attribute=const"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
char const *Version = "8.21";
extern int fputc_unlocked(int __c, FILE *__stream);
extern char *optarg;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     putenv)(char *__string);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern
    __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                        textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((
    __leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
__inline static void emit_mandatory_arg_note(void) {
  printf("\nFUNC_CALL;emit_mandatory_arg_note();\n");
printf("\nSTMT_EXEC;;9036\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;9038\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("\nMandatory arguments to long options are mandatory for "
                  "short options too.\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9040\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp, stdout);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9041\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static void emit_ancillary_info(void) {
  printf("\nFUNC_CALL;emit_ancillary_info();\n");
printf("\nSTMT_EXEC;;9045\n");
char *tmp;
  printf("\nSTMT_EXEC;;9046\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;9047\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;9048\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;9049\n");
char const *lc_messages;
  printf("\nSTMT_EXEC;;9050\n");
char const *tmp___3;
  printf("\nSTMT_EXEC;;9051\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;9052\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;9053\n");
int tmp___6;
  printf("\nSTMT_EXEC;;9054\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;9055\n");
char *tmp___8;
  {
    printf("\nSTMT_EXEC;;9057\n");
tmp = last_component(program_name);
    printf("\nSTMT_EXEC;;9058\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("\nReport %s bugs to %s\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9059\n");
printf((char const *)tmp___0, tmp, "bug-coreutils@gnu.org");
    printf("\nSTMT_EXEC;;9060\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext("%s home page: <%s>\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9061\n");
printf((char const *)tmp___1, "GNU coreutils",
           "http://www.gnu.org/software/coreutils/");
    printf("\nSTMT_EXEC;;9063\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 = gettext(
        "General help using GNU software: <http://www.gnu.org/gethelp/>\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9065\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___2, stdout);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9066\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
tmp___3 = (char const *)setlocale(5, (char const *)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9067\n");
lc_messages = tmp___3;
    printf("\nSTMT_EXEC;;9068\n");
if (lc_messages) {
      printf("\nSTMT_EXEC;;9069\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___6 = strncmp(lc_messages, "en_", sizeof("en_") - 1UL);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9070\n");
if (tmp___6) {
        printf("\nSTMT_EXEC;;9071\n");
tmp___4 = last_component(program_name);
        printf("\nSTMT_EXEC;;9072\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 = gettext("Report %s translation bugs to "
                          "<http://translationproject.org/team/>\n");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9074\n");
printf((char const *)tmp___5, tmp___4);
      }
    }
    printf("\nSTMT_EXEC;;9077\n");
tmp___7 = last_component(program_name);
    printf("\nSTMT_EXEC;;9078\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 = gettext(
        "For complete documentation, run: info coreutils \'%s invocation\'\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9080\n");
printf((char const *)tmp___8, tmp___7);
    printf("\nSTMT_EXEC;;9081\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static void emit_try_help(void) {
  printf("\nFUNC_CALL;emit_try_help();\n");
printf("\nSTMT_EXEC;;9085\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;9087\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("Try \'%s --help\' for more information.\n");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9088\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf(stderr, (char const *)tmp, program_name);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9089\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static char *timetostr(time_t t, char *buf___1) {
  printf("\nFUNC_CALL;timetostr(time_t,char *);\n");
printf("\nSTMT_EXEC;;9093\n");
char *tmp;
  {
    printf("\nSTMT_EXEC;;9095\n");
tmp = imaxtostr(t, buf___1);
    printf("\nSTMT_EXEC;;9096\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static char *bad_cast(char const *s) {
  printf("\nFUNC_CALL;bad_cast(const char *);\n");
{ printf("\nSTMT_EXEC;;9100\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)s); }
printf("\nFUNC_RETURN;;\n");
}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
static _Bool show_date(char const *format, struct timespec when);
static char const *const time_spec_string[6] = {
    "hours", "minutes", "date", "seconds", "ns", (char const *)((void *)0)};
static enum Time_spec const time_spec[5] = {
    (enum Time_spec const)3, (enum Time_spec const)4, (enum Time_spec const)0,
    (enum Time_spec const)1, (enum Time_spec const)2};
static char const rfc_2822_format[25] = {
    (char const)'%',   (char const)'a', (char const)',', (char const)' ',
    (char const)'%',   (char const)'d', (char const)' ', (char const)'%',
    (char const)'b',   (char const)' ', (char const)'%', (char const)'Y',
    (char const)' ',   (char const)'%', (char const)'H', (char const)':',
    (char const)'%',   (char const)'M', (char const)':', (char const)'%',
    (char const)'S',   (char const)' ', (char const)'%', (char const)'z',
    (char const)'\000'};
static char const short_options[14] = {
    (char const)'d', (char const)':',   (char const)'f', (char const)':',
    (char const)'I', (char const)':',   (char const)':', (char const)'r',
    (char const)':', (char const)'R',   (char const)'s', (char const)':',
    (char const)'u', (char const)'\000'};
static struct option const long_options___1[14] = {
    {"date", 1, (int *)((void *)0), 'd'},
    {"file", 1, (int *)((void *)0), 'f'},
    {"iso-8601", 2, (int *)((void *)0), 'I'},
    {"reference", 1, (int *)((void *)0), 'r'},
    {"rfc-822", 0, (int *)((void *)0), 'R'},
    {"rfc-2822", 0, (int *)((void *)0), 'R'},
    {"rfc-3339", 1, (int *)((void *)0), 128},
    {"set", 1, (int *)((void *)0), 's'},
    {"uct", 0, (int *)((void *)0), 'u'},
    {"utc", 0, (int *)((void *)0), 'u'},
    {"universal", 0, (int *)((void *)0), 'u'},
    {"help", 0, (int *)((void *)0), -130},
    {"version", 0, (int *)((void *)0), -131},
    {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
__attribute__((__noreturn__)) void usage(int status);
void usage(int status) {
  printf("\nFUNC_CALL;usage(int);\n");
printf("\nSTMT_EXEC;;9142\n");
char *tmp;
  printf("\nSTMT_EXEC;;9143\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;9144\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;9145\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;9146\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;9147\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;9148\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;9149\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;9150\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;9151\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;9152\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;9153\n");
char *tmp___10;
  printf("\nSTMT_EXEC;;9154\n");
char *tmp___11;
  printf("\nSTMT_EXEC;;9155\n");
char *tmp___12;
  printf("\nSTMT_EXEC;;9156\n");
char *tmp___13;
  printf("\nSTMT_EXEC;;9157\n");
char *tmp___14;
  printf("\nSTMT_EXEC;;9158\n");
char *tmp___15;
  printf("\nSTMT_EXEC;;9159\n");
char *tmp___16;
  printf("\nSTMT_EXEC;;9160\n");
char *tmp___17;
  printf("\nSTMT_EXEC;;9161\n");
char *tmp___18;
  printf("\nSTMT_EXEC;;9162\n");
char *tmp___19;
  {
    printf("\nSTMT_EXEC;;9164\n");
if (status != 0) {
      printf("\nSTMT_EXEC;;9165\n");
emit_try_help();
    } else {
      printf("\nSTMT_EXEC;;9167\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp = gettext("Usage: %s [OPTION]... [+FORMAT]\n  or:  %s "
                    "[-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9169\n");
printf((char const *)tmp, program_name, program_name);
      printf("\nSTMT_EXEC;;9170\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("Display the current time in the given FORMAT, or set "
                        "the system date.\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9172\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___0, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9173\n");
emit_mandatory_arg_note();
      printf("\nSTMT_EXEC;;9174\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___1 = gettext(
          "  -d, --date=STRING         display time described by STRING, not "
          "\'now\'\n  -f, --file=DATEFILE       like --date once for each line "
          "of DATEFILE\n  -I[TIMESPEC], --iso-8601[=TIMESPEC]  output "
          "date/time in ISO 8601 format.\n                            "
          "TIMESPEC=\'date\' for date only (the default),\n                    "
          "        \'hours\', \'minutes\', \'seconds\', or \'ns\' for date\n   "
          "                         and time to the indicated precision.\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9182\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___1, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9183\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___2 =
          gettext("  -r, --reference=FILE      display the last modification "
                  "time of FILE\n  -R, --rfc-2822            output date and "
                  "time in RFC 2822 format.\n                            "
                  "Example: Mon, 07 Aug 2006 12:34:56 -0600\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9188\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___2, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9189\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___3 = gettext(
          "      --rfc-3339=TIMESPEC   output date and time in RFC 3339 "
          "format.\n                            TIMESPEC=\'date\', "
          "\'seconds\', or \'ns\' for\n                            date and "
          "time to the indicated precision.\n                            Date "
          "and time components are separated by\n                            a "
          "single space: 2006-08-07 12:34:56-06:00\n  -s, --set=STRING         "
          " set time described by STRING\n  -u, --utc, --universal    print or "
          "set Coordinated Universal Time\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9198\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___3, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9199\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("      --help     display this help and exit\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9200\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___4, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9201\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___5 =
          gettext("      --version  output version information and exit\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9203\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___5, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9204\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___6 = gettext("\nFORMAT controls the output.  Interpreted sequences "
                        "are:\n\n  %%   a literal %\n  %a   locale\'s "
                        "abbreviated weekday name (e.g., Sun)\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9207\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___6, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9208\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___7 =
          gettext("  %A   locale\'s full weekday name (e.g., Sunday)\n  %b   "
                  "locale\'s abbreviated month name (e.g., Jan)\n  %B   "
                  "locale\'s full month name (e.g., January)\n  %c   locale\'s "
                  "date and time (e.g., Thu Mar  3 23:05:25 2005)\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9213\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___7, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9214\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 =
          gettext("  %C   century; like %Y, except omit last two digits (e.g., "
                  "20)\n  %d   day of month (e.g., 01)\n  %D   date; same as "
                  "%m/%d/%y\n  %e   day of month, space padded; same as %_d\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9218\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___8, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9219\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___9 =
          gettext("  %F   full date; same as %Y-%m-%d\n  %g   last two digits "
                  "of year of ISO week number (see %G)\n  %G   year of ISO "
                  "week number (see %V); normally useful only with %V\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9223\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___9, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9224\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___10 = gettext("  %h   same as %b\n  %H   hour (00..23)\n  %I   hour "
                         "(01..12)\n  %j   day of year (001..366)\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9226\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___10, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9227\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___11 = gettext("  %k   hour, space padded ( 0..23); same as %_H\n  "
                         "%l   hour, space padded ( 1..12); same as %_I\n  %m  "
                         " month (01..12)\n  %M   minute (00..59)\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9230\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___11, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9231\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___12 = gettext(
          "  %n   a newline\n  %N   nanoseconds (000000000..999999999)\n  %p   "
          "locale\'s equivalent of either AM or PM; blank if not known\n  %P   "
          "like %p, but lower case\n  %r   locale\'s 12-hour clock time (e.g., "
          "11:11:04 PM)\n  %R   24-hour hour and minute; same as %H:%M\n  %s   "
          "seconds since 1970-01-01 00:00:00 UTC\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9237\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___12, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9238\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___13 =
          gettext("  %S   second (00..60)\n  %t   a tab\n  %T   time; same as "
                  "%H:%M:%S\n  %u   day of week (1..7); 1 is Monday\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9241\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___13, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9242\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___14 = gettext(
          "  %U   week number of year, with Sunday as first day of week "
          "(00..53)\n  %V   ISO week number, with Monday as first day of week "
          "(01..53)\n  %w   day of week (0..6); 0 is Sunday\n  %W   week "
          "number of year, with Monday as first day of week (00..53)\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9247\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___14, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9248\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___15 =
          gettext("  %x   locale\'s date representation (e.g., 12/31/99)\n  %X "
                  "  locale\'s time representation (e.g., 23:13:48)\n  %y   "
                  "last two digits of year (00..99)\n  %Y   year\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9252\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___15, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9253\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___16 =
          gettext("  %z   +hhmm numeric time zone (e.g., -0400)\n  %:z  +hh:mm "
                  "numeric time zone (e.g., -04:00)\n  %::z  +hh:mm:ss numeric "
                  "time zone (e.g., -04:00:00)\n  %:::z  numeric time zone "
                  "with : to necessary precision (e.g., -04, +05:30)\n  %Z   "
                  "alphabetic time zone abbreviation (e.g., EDT)\n\nBy "
                  "default, date pads numeric fields with zeroes.\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9260\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___16, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9261\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___17 =
          gettext("The following optional flags may follow \'%\':\n\n  -  "
                  "(hyphen) do not pad the field\n  _  (underscore) pad with "
                  "spaces\n  0  (zero) pad with zeros\n  ^  use upper case if "
                  "possible\n  #  use opposite case if possible\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9266\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___17, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9267\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___18 = gettext(
          "\nAfter any flags comes an optional field width, as a decimal "
          "number;\nthen an optional modifier, which is either\nE to use the "
          "locale\'s alternate representations if available, or\nO to use the "
          "locale\'s alternate numeric symbols if available.\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9272\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___18, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9273\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___19 = gettext(
          "\nExamples:\nConvert seconds since the epoch (1970-01-01 UTC) to a "
          "date\n  $ date --date=\'@2147483647\'\n\nShow the time on the west "
          "coast of the US (use tzselect(1) to find TZ)\n  $ "
          "TZ=\'America/Los_Angeles\' date\n\nShow the local time for 9AM next "
          "Friday on the west coast of the US\n  $ date "
          "--date=\'TZ=\"America/Los_Angeles\" 09:00 next Fri\'\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9280\n");
printf("\nFUNC_CALL;fputs_unlocked(const char *__restrict,FILE *__restrict);\n");
fputs_unlocked((char const *)tmp___19, stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9281\n");
emit_ancillary_info();
    }
    printf("\nSTMT_EXEC;;9283\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(status);printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool batch_convert(char const *input_filename, char const *format) {
  printf("\nFUNC_CALL;batch_convert(const char *,const char *);\n");
printf("\nSTMT_EXEC;;9287\n");
_Bool ok;
  printf("\nSTMT_EXEC;;9288\n");
FILE *in_stream;
  printf("\nSTMT_EXEC;;9289\n");
char *line;
  printf("\nSTMT_EXEC;;9290\n");
size_t buflen;
  printf("\nSTMT_EXEC;;9291\n");
struct timespec when;
  printf("\nSTMT_EXEC;;9292\n");
char const *tmp;
  printf("\nSTMT_EXEC;;9293\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;9294\n");
int tmp___1;
  printf("\nSTMT_EXEC;;9295\n");
ssize_t line_length;
  printf("\nSTMT_EXEC;;9296\n");
ssize_t tmp___2;
  printf("\nSTMT_EXEC;;9297\n");
char const *tmp___3;
  printf("\nSTMT_EXEC;;9298\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;9299\n");
_Bool tmp___5;
  printf("\nSTMT_EXEC;;9300\n");
_Bool tmp___6;
  printf("\nSTMT_EXEC;;9301\n");
char const *tmp___7;
  printf("\nSTMT_EXEC;;9302\n");
int *tmp___8;
  printf("\nSTMT_EXEC;;9303\n");
int tmp___9;
  {
    printf("\nSTMT_EXEC;;9305\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp(input_filename, "-");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9306\n");
if (tmp___1 == 0) {
      printf("\nSTMT_EXEC;;9307\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
input_filename = (char const *)gettext("standard input");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9308\n");
in_stream = stdin;
    } else {
      printf("\nSTMT_EXEC;;9310\n");
printf("\nFUNC_CALL;fopen(const char *__restrict,const char *__restrict);\n");
in_stream = fopen(input_filename, "r");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9311\n");
if ((unsigned long)in_stream == (unsigned long)((void *)0)) {
        printf("\nSTMT_EXEC;;9312\n");
tmp = quote(input_filename);
        printf("\nSTMT_EXEC;;9313\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9314\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(1, *tmp___0, "%s", tmp);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;9317\n");
line = (char *)((void *)0);
    printf("\nSTMT_EXEC;;9318\n");
buflen = (size_t)0;
    printf("\nSTMT_EXEC;;9319\n");
ok = (_Bool)1;
    printf("\nSTMT_EXEC;;9320\n");
while (1) {
      printf("\nSTMT_EXEC;;9321\n");
printf("\nFUNC_CALL;getline(char **__restrict,size_t *__restrict,FILE *__restrict);\n");
tmp___2 = getline(&line, &buflen, in_stream);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9322\n");
line_length = tmp___2;
      printf("\nSTMT_EXEC;;9323\n");
if (line_length < 0L) {
        printf("\nSTMT_EXEC;;9324\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;9326\n");
tmp___6 = parse_datetime(&when, (char const *)line,
                               (struct timespec const *)((void *)0));
      printf("\nSTMT_EXEC;;9328\n");
if (tmp___6) {
        printf("\nSTMT_EXEC;;9329\n");
tmp___5 = show_date(format, when);
        printf("\nSTMT_EXEC;;9330\n");
ok = (_Bool)((int)ok & (int)tmp___5);
      } else {
        printf("\nSTMT_EXEC;;9332\n");
if ((int)*(line + (line_length - 1L)) == 10) {
          printf("\nSTMT_EXEC;;9333\n");
*(line + (line_length - 1L)) = (char)'\000';
        }
        printf("\nSTMT_EXEC;;9335\n");
tmp___3 = quote((char const *)line);
        printf("\nSTMT_EXEC;;9336\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("invalid date %s");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9337\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___4, tmp___3);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9338\n");
ok = (_Bool)0;
      }
    }
  while_break:
    {
printf("\nSTMT_EXEC;;9342\n");
tmp___9 = rpl_fclose(in_stream);
}

    printf("\nSTMT_EXEC;;9343\n");
if (tmp___9 == -1) {
      printf("\nSTMT_EXEC;;9344\n");
tmp___7 = quote(input_filename);
      printf("\nSTMT_EXEC;;9345\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___8 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9346\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(1, *tmp___8, "%s", tmp___7);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9348\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)line);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9349\n");
printf("\nFUNC_RETURN;;\n");
return (ok);
  }
printf("\nFUNC_RETURN;;\n");
}
int main(int argc, char **argv);
static char const rfc_3339_format[3][32] = {
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'\000'},
    {(char const)'%',   (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m',   (char const)'-', (char const)'%', (char const)'d',
     (char const)' ',   (char const)'%', (char const)'H', (char const)':',
     (char const)'%',   (char const)'M', (char const)':', (char const)'%',
     (char const)'S',   (char const)'%', (char const)':', (char const)'z',
     (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)' ', (char const)'%', (char const)'H', (char const)':',
     (char const)'%', (char const)'M', (char const)':', (char const)'%',
     (char const)'S', (char const)'.', (char const)'%', (char const)'N',
     (char const)'%', (char const)':', (char const)'z', (char const)'\000'}};
static char const iso_8601_format[5][32] = {
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'T', (char const)'%', (char const)'H', (char const)':',
     (char const)'%', (char const)'M', (char const)':', (char const)'%',
     (char const)'S', (char const)'%', (char const)'z', (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-',   (char const)'%',
     (char const)'m', (char const)'-', (char const)'%',   (char const)'d',
     (char const)'T', (char const)'%', (char const)'H',   (char const)':',
     (char const)'%', (char const)'M', (char const)':',   (char const)'%',
     (char const)'S', (char const)',', (char const)'%',   (char const)'N',
     (char const)'%', (char const)'z', (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'T', (char const)'%', (char const)'H', (char const)'%',
     (char const)'z', (char const)'\000'},
    {(char const)'%', (char const)'Y', (char const)'-', (char const)'%',
     (char const)'m', (char const)'-', (char const)'%', (char const)'d',
     (char const)'T', (char const)'%', (char const)'H', (char const)':',
     (char const)'%', (char const)'M', (char const)'%', (char const)'z',
     (char const)'\000'}};
int main(int argc, char **argv) {
  printf("\nFUNC_CALL;main(int,char **);\n");
printf("\nSTMT_EXEC;;9\n");
AFL_INIT_SET0("date");
  printf("\nSTMT_EXEC;;9395\n");
int optc;
  printf("\nSTMT_EXEC;;9396\n");
char const *datestr;
  printf("\nSTMT_EXEC;;9397\n");
char const *set_datestr;
  printf("\nSTMT_EXEC;;9398\n");
struct timespec when;
  printf("\nSTMT_EXEC;;9399\n");
_Bool set_date;
  printf("\nSTMT_EXEC;;9400\n");
char const *format;
  printf("\nSTMT_EXEC;;9401\n");
char *batch_file;
  printf("\nSTMT_EXEC;;9402\n");
char *reference;
  printf("\nSTMT_EXEC;;9403\n");
struct stat refstats;
  printf("\nSTMT_EXEC;;9404\n");
_Bool ok;
  printf("\nSTMT_EXEC;;9405\n");
int option_specified_date;
  printf("\nSTMT_EXEC;;9406\n");
char const *new_format;
  printf("\nSTMT_EXEC;;9407\n");
enum Time_spec i;
  printf("\nSTMT_EXEC;;9408\n");
ptrdiff_t tmp;
  printf("\nSTMT_EXEC;;9409\n");
enum Time_spec i___0;
  printf("\nSTMT_EXEC;;9410\n");
ptrdiff_t tmp___0;
  printf("\nSTMT_EXEC;;9411\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;9412\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;9413\n");
int tmp___3;
  printf("\nSTMT_EXEC;;9414\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;9415\n");
int tmp___5;
  printf("\nSTMT_EXEC;;9416\n");
int tmp___6;
  printf("\nSTMT_EXEC;;9417\n");
int tmp___7;
  printf("\nSTMT_EXEC;;9418\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;9419\n");
char *tmp___9;
  printf("\nSTMT_EXEC;;9420\n");
char const *tmp___10;
  printf("\nSTMT_EXEC;;9421\n");
char *tmp___11;
  printf("\nSTMT_EXEC;;9422\n");
char *tmp___12;
  printf("\nSTMT_EXEC;;9423\n");
int tmp___13;
  printf("\nSTMT_EXEC;;9424\n");
char const *tmp___14;
  printf("\nSTMT_EXEC;;9425\n");
char *tmp___15;
  printf("\nSTMT_EXEC;;9426\n");
_Bool valid_date;
  printf("\nSTMT_EXEC;;9427\n");
int *tmp___16;
  printf("\nSTMT_EXEC;;9428\n");
int tmp___17;
  printf("\nSTMT_EXEC;;9429\n");
char const *tmp___18;
  printf("\nSTMT_EXEC;;9430\n");
char *tmp___19;
  printf("\nSTMT_EXEC;;9431\n");
char *tmp___20;
  printf("\nSTMT_EXEC;;9432\n");
int *tmp___21;
  printf("\nSTMT_EXEC;;9433\n");
int tmp___22;
  printf("\nSTMT_EXEC;;9434\n");
_Bool tmp___23;
  printf("\nSTMT_EXEC;;9435\n");
int tmp___24;
  {
    printf("\nSTMT_EXEC;;9437\n");
datestr = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;9438\n");
set_datestr = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;9439\n");
set_date = (_Bool)0;
    printf("\nSTMT_EXEC;;9440\n");
format = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;9441\n");
batch_file = (char *)((void *)0);
    printf("\nSTMT_EXEC;;9442\n");
reference = (char *)((void *)0);
    printf("\nSTMT_EXEC;;9443\n");
set_program_name((char const *)*(argv + 0));
    printf("\nSTMT_EXEC;;9444\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
setlocale(6, "");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9445\n");
printf("\nFUNC_CALL;bindtextdomain(const char *,const char *);\n");
bindtextdomain("coreutils", "/usr/local/share/locale");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9446\n");
printf("\nFUNC_CALL;textdomain(const char *);\n");
textdomain("coreutils");printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9447\n");
printf("\nFUNC_CALL;atexit(void (*)(void));\n");
atexit(&close_stdout);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9448\n");
while (1) {
      printf("\nSTMT_EXEC;;9449\n");
printf("\nFUNC_CALL;getopt_long(int,char *const *,const char *,const struct option *,int *);\n");
optc = getopt_long(argc, (char *const *)argv, short_options,
                         long_options___1, (int *)((void *)0));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9451\n");
if (!(optc != -1)) {
        printf("\nSTMT_EXEC;;9452\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;9454\n");
new_format = (char const *)((void *)0);
      printf("\nSTMT_EXEC;;9455\n");
if (optc == 100) {
        printf("\nSTMT_EXEC;;9456\n");
goto case_100;
      }
      printf("\nSTMT_EXEC;;9458\n");
if (optc == 102) {
        printf("\nSTMT_EXEC;;9459\n");
goto case_102;
      }
      printf("\nSTMT_EXEC;;9461\n");
if (optc == 128) {
        printf("\nSTMT_EXEC;;9462\n");
goto case_128;
      }
      printf("\nSTMT_EXEC;;9464\n");
if (optc == 73) {
        printf("\nSTMT_EXEC;;9465\n");
goto case_73;
      }
      printf("\nSTMT_EXEC;;9467\n");
if (optc == 114) {
        printf("\nSTMT_EXEC;;9468\n");
goto case_114;
      }
      printf("\nSTMT_EXEC;;9470\n");
if (optc == 82) {
        printf("\nSTMT_EXEC;;9471\n");
goto case_82;
      }
      printf("\nSTMT_EXEC;;9473\n");
if (optc == 115) {
        printf("\nSTMT_EXEC;;9474\n");
goto case_115;
      }
      printf("\nSTMT_EXEC;;9476\n");
if (optc == 117) {
        printf("\nSTMT_EXEC;;9477\n");
goto case_117;
      }
      printf("\nSTMT_EXEC;;9479\n");
if (optc == -130) {
        printf("\nSTMT_EXEC;;9480\n");
goto case_neg_130;
      }
      printf("\nSTMT_EXEC;;9482\n");
if (optc == -131) {
        printf("\nSTMT_EXEC;;9483\n");
goto case_neg_131;
      }
      printf("\nSTMT_EXEC;;9485\n");
goto switch_default;
    case_100:
      {
printf("\nSTMT_EXEC;;9487\n");
datestr = (char const *)optarg;
}

      printf("\nSTMT_EXEC;;9488\n");
goto switch_break;
    case_102:
      {
printf("\nSTMT_EXEC;;9490\n");
batch_file = optarg;
}

      printf("\nSTMT_EXEC;;9491\n");
goto switch_break;
    case_128:
      {
printf("\nSTMT_EXEC;;9493\n");
tmp = __xargmatch_internal("--rfc-3339", (char const *)optarg,
                                 time_spec_string + 2,
                                 (char const *)(time_spec + 2),
                                 sizeof(*(time_spec + 2)), argmatch_die);
}

      printf("\nSTMT_EXEC;;9497\n");
i = (enum Time_spec) * ((time_spec + 2) + tmp);
      printf("\nSTMT_EXEC;;9498\n");
new_format = rfc_3339_format[i];
      printf("\nSTMT_EXEC;;9499\n");
goto switch_break;
    case_73:
      {
printf("\nSTMT_EXEC;;9501\n");
if (optarg) {
        printf("\nSTMT_EXEC;;9502\n");
tmp___0 = __xargmatch_internal(
            "--iso-8601", (char const *)optarg, time_spec_string,
            (char const *)(time_spec), sizeof(time_spec[0]), argmatch_die);
        printf("\nSTMT_EXEC;;9505\n");
tmp___1 = (unsigned int)time_spec[tmp___0];
      } else {
        printf("\nSTMT_EXEC;;9507\n");
tmp___1 = 0U;
      }
}

      printf("\nSTMT_EXEC;;9509\n");
i___0 = (enum Time_spec)tmp___1;
      printf("\nSTMT_EXEC;;9510\n");
new_format = iso_8601_format[i___0];
      printf("\nSTMT_EXEC;;9511\n");
goto switch_break;
    case_114:
      {
printf("\nSTMT_EXEC;;9513\n");
reference = optarg;
}

      printf("\nSTMT_EXEC;;9514\n");
goto switch_break;
    case_82:
      {
printf("\nSTMT_EXEC;;9516\n");
new_format = rfc_2822_format;
}

      printf("\nSTMT_EXEC;;9517\n");
goto switch_break;
    case_115:
      {
printf("\nSTMT_EXEC;;9519\n");
set_datestr = (char const *)optarg;
}

      printf("\nSTMT_EXEC;;9520\n");
set_date = (_Bool)1;
      printf("\nSTMT_EXEC;;9521\n");
goto switch_break;
    case_117:
      {
printf("\nSTMT_EXEC;;9523\n");
tmp___2 = bad_cast("TZ=UTC0");
}

      printf("\nSTMT_EXEC;;9524\n");
printf("\nFUNC_CALL;putenv(char *);\n");
tmp___3 = putenv(tmp___2);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9525\n");
if (tmp___3 != 0) {
        printf("\nSTMT_EXEC;;9526\n");
xalloc_die();
      }
      printf("\nSTMT_EXEC;;9528\n");
goto switch_break;
    case_neg_130:
      {
printf("\nSTMT_EXEC;;9530\n");
usage(0);
}

      printf("\nSTMT_EXEC;;9531\n");
goto switch_break;
    case_neg_131:
      {
printf("\nSTMT_EXEC;;9533\n");
version_etc(stdout, "date", "GNU coreutils", Version, "David MacKenzie",
                  (char *)((void *)0));
}

      printf("\nSTMT_EXEC;;9535\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(0);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9536\n");
goto switch_break;
    switch_default:
      {
printf("\nSTMT_EXEC;;9538\n");
usage(1);
}

    switch_break:;
      printf("\nSTMT_EXEC;;9540\n");
if (new_format) {
        printf("\nSTMT_EXEC;;9541\n");
if (format) {
          printf("\nSTMT_EXEC;;9542\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___4 = gettext("multiple output formats specified");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9543\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(1, 0, (char const *)tmp___4);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9545\n");
format = new_format;
      }
    }
  while_break:;
    printf("\nSTMT_EXEC;;9549\n");
if (datestr) {
      printf("\nSTMT_EXEC;;9550\n");
tmp___5 = 1;
    } else {
      printf("\nSTMT_EXEC;;9552\n");
tmp___5 = 0;
    }
    printf("\nSTMT_EXEC;;9554\n");
if (batch_file) {
      printf("\nSTMT_EXEC;;9555\n");
tmp___6 = 1;
    } else {
      printf("\nSTMT_EXEC;;9557\n");
tmp___6 = 0;
    }
    printf("\nSTMT_EXEC;;9559\n");
if (reference) {
      printf("\nSTMT_EXEC;;9560\n");
tmp___7 = 1;
    } else {
      printf("\nSTMT_EXEC;;9562\n");
tmp___7 = 0;
    }
    printf("\nSTMT_EXEC;;9564\n");
option_specified_date = (tmp___5 + tmp___6) + tmp___7;
    printf("\nSTMT_EXEC;;9565\n");
if (option_specified_date > 1) {
      printf("\nSTMT_EXEC;;9566\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___8 = gettext(
          "the options to specify dates for printing are mutually exclusive");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9568\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___8);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9569\n");
usage(1);
    }
    printf("\nSTMT_EXEC;;9571\n");
if (set_date) {
      printf("\nSTMT_EXEC;;9572\n");
if (option_specified_date) {
        printf("\nSTMT_EXEC;;9573\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___9 = gettext(
            "the options to print and set the time may not be used together");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9575\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___9);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9576\n");
usage(1);
      }
    }
    printf("\nSTMT_EXEC;;9579\n");
if (optind < argc) {
      printf("\nSTMT_EXEC;;9580\n");
if (optind + 1 < argc) {
        printf("\nSTMT_EXEC;;9581\n");
tmp___10 = quote((char const *)*(argv + (optind + 1)));
        printf("\nSTMT_EXEC;;9582\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___11 = gettext("extra operand %s");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9583\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___11, tmp___10);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9584\n");
usage(1);
      }
      printf("\nSTMT_EXEC;;9586\n");
if ((int)*(*(argv + optind) + 0) == 43) {
        printf("\nSTMT_EXEC;;9587\n");
if (format) {
          printf("\nSTMT_EXEC;;9588\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___12 = gettext("multiple output formats specified");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9589\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(1, 0, (char const *)tmp___12);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9591\n");
tmp___13 = optind;
        printf("\nSTMT_EXEC;;9592\n");
optind++;
        printf("\nSTMT_EXEC;;9593\n");
format = (char const *)(*(argv + tmp___13) + 1);
      } else {
        printf("\nSTMT_EXEC;;9595\n");
if (set_date) {
          printf("\nSTMT_EXEC;;9596\n");
tmp___14 = quote((char const *)*(argv + optind));
          printf("\nSTMT_EXEC;;9597\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___15 =
              gettext("the argument %s lacks a leading \'+\';\nwhen using an "
                      "option to specify date(s), any non-option\nargument "
                      "must be a format string beginning with \'+\'");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9601\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___15, tmp___14);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9602\n");
usage(1);
        } else {
          printf("\nSTMT_EXEC;;9604\n");
if (option_specified_date) {
            printf("\nSTMT_EXEC;;9605\n");
tmp___14 = quote((char const *)*(argv + optind));
            printf("\nSTMT_EXEC;;9606\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___15 =
                gettext("the argument %s lacks a leading \'+\';\nwhen using an "
                        "option to specify date(s), any non-option\nargument "
                        "must be a format string beginning with \'+\'");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9610\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___15, tmp___14);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9611\n");
usage(1);
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;9616\n");
if (!format) {
      printf("\nSTMT_EXEC;;9617\n");
printf("\nFUNC_CALL;nl_langinfo(nl_item);\n");
format = (char const *)nl_langinfo(131180);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9618\n");
if (!*format) {
        printf("\nSTMT_EXEC;;9619\n");
format = "%a %b %e %H:%M:%S %Z %Y";
      }
    }
    printf("\nSTMT_EXEC;;9622\n");
if ((unsigned long)batch_file != (unsigned long)((void *)0)) {
      printf("\nSTMT_EXEC;;9623\n");
ok = batch_convert((char const *)batch_file, format);
    } else {
      printf("\nSTMT_EXEC;;9625\n");
valid_date = (_Bool)1;
      printf("\nSTMT_EXEC;;9626\n");
ok = (_Bool)1;
      printf("\nSTMT_EXEC;;9627\n");
if (!option_specified_date) {
        printf("\nSTMT_EXEC;;9628\n");
if (!set_date) {
          printf("\nSTMT_EXEC;;9629\n");
if (optind < argc) {
            printf("\nSTMT_EXEC;;9630\n");
set_date = (_Bool)1;
            printf("\nSTMT_EXEC;;9631\n");
datestr = (char const *)*(argv + optind);
            printf("\nSTMT_EXEC;;9632\n");
valid_date = posixtime(&when.tv_sec, datestr, 14U);
            printf("\nSTMT_EXEC;;9633\n");
when.tv_nsec = (__syscall_slong_t)0;
          } else {
            printf("\nSTMT_EXEC;;9635\n");
gettime(&when);
          }
        } else {
          printf("\nSTMT_EXEC;;9638\n");
goto _L;
        }
      } else {
      _L:
        {
printf("\nSTMT_EXEC;;9642\n");
if ((unsigned long)reference != (unsigned long)((void *)0)) {
          printf("\nSTMT_EXEC;;9643\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___17 = stat((char const *)reference, &refstats);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9644\n");
if (tmp___17 != 0) {
            printf("\nSTMT_EXEC;;9645\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___16 = __errno_location();printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9646\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(1, *tmp___16, "%s", reference);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;9648\n");
when = get_stat_mtime((struct stat const *)(&refstats));
        } else {
          printf("\nSTMT_EXEC;;9650\n");
if (set_datestr) {
            printf("\nSTMT_EXEC;;9651\n");
datestr = set_datestr;
          }
          printf("\nSTMT_EXEC;;9653\n");
valid_date = parse_datetime(&when, datestr,
                                      (struct timespec const *)((void *)0));
        }
}

      }
      printf("\nSTMT_EXEC;;9657\n");
if (!valid_date) {
        printf("\nSTMT_EXEC;;9658\n");
tmp___18 = quote(datestr);
        printf("\nSTMT_EXEC;;9659\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___19 = gettext("invalid date %s");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9660\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(1, 0, (char const *)tmp___19, tmp___18);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;9662\n");
if (set_date) {
        printf("\nSTMT_EXEC;;9663\n");
tmp___22 = settime((struct timespec const *)(&when));
        printf("\nSTMT_EXEC;;9664\n");
if (tmp___22 != 0) {
          printf("\nSTMT_EXEC;;9665\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___20 = gettext("cannot set date");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9666\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___21 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9667\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, *tmp___21, (char const *)tmp___20);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9668\n");
ok = (_Bool)0;
        }
      }
      printf("\nSTMT_EXEC;;9671\n");
tmp___23 = show_date(format, when);
      printf("\nSTMT_EXEC;;9672\n");
ok = (_Bool)((int)ok & (int)tmp___23);
    }
    printf("\nSTMT_EXEC;;9674\n");
if (ok) {
      printf("\nSTMT_EXEC;;9675\n");
tmp___24 = 0;
    } else {
      printf("\nSTMT_EXEC;;9677\n");
tmp___24 = 1;
    }
    printf("\nSTMT_EXEC;;9679\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(tmp___24);printf("\nFUNC_RETURN;;\n");

  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool show_date(char const *format, struct timespec when) {
  printf("\nFUNC_CALL;show_date(const char *,struct timespec);\n");
printf("\nSTMT_EXEC;;9683\n");
struct tm *tm;
  printf("\nSTMT_EXEC;;9684\n");
char
      buf___1[(((sizeof(intmax_t) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) +
              1UL];
  printf("\nSTMT_EXEC;;9687\n");
char *tmp;
  printf("\nSTMT_EXEC;;9688\n");
char *tmp___0;
  {
    printf("\nSTMT_EXEC;;9690\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tm = localtime((time_t const *)(&when.tv_sec));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9691\n");
if (!tm) {
      printf("\nSTMT_EXEC;;9692\n");
tmp = timetostr(when.tv_sec, buf___1);
      printf("\nSTMT_EXEC;;9693\n");
printf("\nFUNC_CALL;gettext(const char *);\n");
tmp___0 = gettext("time %s is out of range");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9694\n");
printf("\nFUNC_CALL;error(int,int,const char *);\n");
error(0, 0, (char const *)tmp___0, tmp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9695\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)0);
    }
    printf("\nSTMT_EXEC;;9697\n");
if ((unsigned long)format == (unsigned long)(rfc_2822_format)) {
      printf("\nSTMT_EXEC;;9698\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
setlocale(2, "C");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9700\n");
fprintftime(stdout, format, (struct tm const *)tm, 0, (int)when.tv_nsec);
    printf("\nSTMT_EXEC;;9701\n");
printf("\nFUNC_CALL;fputc_unlocked(int,FILE *);\n");
fputc_unlocked('\n', stdout);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9702\n");
if ((unsigned long)format == (unsigned long)(rfc_2822_format)) {
      printf("\nSTMT_EXEC;;9703\n");
printf("\nFUNC_CALL;setlocale(int,const char *);\n");
setlocale(2, "");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9705\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
