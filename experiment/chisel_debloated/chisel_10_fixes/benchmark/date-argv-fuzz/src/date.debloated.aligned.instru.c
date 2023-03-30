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
                            
        printf("\nSTMT_EXEC;;275\n");
tmp = 1;
               
                
       
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
                   
                
              
                      
                  
                
                        
                    
                  
                          
                      
                    
                            
                        
                      
                printf("\nSTMT_EXEC;;307\n");
tmp = 0;
               
             
           
         
       
    }
    printf("\nSTMT_EXEC;;314\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
int c_tolower(int c) __attribute__((__const__));
                      
          
   
                  
                    
                            
               
                
       
            
              
     
                 
   
 
int c_toupper(int c) __attribute__((__const__));
int c_toupper(int c) {
  printf("\nFUNC_CALL;c_toupper(int);\n");
printf("\nSTMT_EXEC;;335\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;337\n");
if (c >= 97) {
                     
        printf("\nSTMT_EXEC;;339\n");
tmp = (c - 97) + 65;
               
                
       
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
                                             
          
                
   
                                              
               
            
               
     
                              
                   
     
                             
                     
   
 
                            
            
                
                
   
                              
                       
                    
            
                                          
                        
     
                             
   
 
extern __attribute__((__nothrow__))
size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s)
    __attribute__((__pure__));
char *last_component(char const *name) __attribute__((__pure__));
                                        
                   
                
                  
   
                    
                         
               
                                        
                         
       
             
     
              
             
               
                
                             
       
                                  
                             
              
                        
                   
                               
         
       
          
     
                   
                          
   
 
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           malloc)(size_t __size)
    __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__))
                                         free)(void *__ptr);
                                 
                           
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
                     
                  
          
                 
  printf("\nSTMT_EXEC;;512\n");
int tmp___1;
  {
                             
                         
    printf("\nSTMT_EXEC;;516\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
arglen = strlen(arg);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;517\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;518\n");
while (1) {
                            
                         
       
      printf("\nSTMT_EXEC;;522\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___1 = strncmp((char const *)*(arglist + i), arg, arglen);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;523\n");
if (!tmp___1) {
                                                       
                                
          printf("\nSTMT_EXEC;;526\n");
printf("\nFUNC_RETURN;;\n");
return ((ptrdiff_t)i);
                 
                                
                                    
                  
                                                                       
                                   
                    
                                                                                
                                                                           
                        
                                     
               
             
           
         
      }
      printf("\nSTMT_EXEC;;543\n");
i++;
    }
              ;
                    
                             
            
                        
     
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
                   {
      printf("\nSTMT_EXEC;;625\n");
printf("\nFUNC_RETURN;;\n");
return (res);
    }
                                        
                                              
                 
                           
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
                                        
extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);
                                           
                                                                        
                                                              
                              
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
             
                     
                     
       
     
    printf("\nSTMT_EXEC;;714\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
                                   
   
             
              
                
                           
       
     
                      
             
              
                     
       
     
               
   
 
void *xmemdup(void const *p, size_t s)
    __attribute__((__malloc__, __alloc_size__(2)));
                                        
            
                
   
                     
                                
                     
   
 
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
                                     
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
                                                            
                                                              
                                                                    
            
                
                
                
                
                
                
                
                
                
                
                 
   
                       
                                                                      
            
                                                   
     
                         
                                                      
             
                                                               
                                                                              
                                                                           
                                                                 
                                                  
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                        
         
            
         
                                          
                                                           
                      
         
                                                 
                                                                           
                      
         
                                                      
                                                                          
                            
                      
         
                                                           
                                                                          
                                            
                      
         
                                                               
                                                                          
                                                            
                      
         
                                                                   
                                                                          
                                                                            
                      
         
                                                                       
                                                                          
                                                                           
                            
                      
         
                                                                            
                                                                          
                                                                           
                                            
                      
         
                                                                                
                                                                          
                                                                           
                                                            
                      
                 
                       
                                                                          
                                                                           
                                                                           
                                                            
                      
                
           
   
 
                                                                                
                                                           
                   
                          
                  
   
                          
               
                             
                                                      
                                 
                                                                  
                           
         
              
                         
       
                  
     
              
                                                           
                                                               
           
   
 
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
                                                                             
                                            
                  
   
                                         
                                                                    
                              
           
   
 
                                        
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                          
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
printf("\nSTMT_EXEC;;998\n");
printf("\nFUNC_RETURN;;\n");
return ((struct timespec)st->st_mtim);
   
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
                                        
                                               
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
                                             
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
                                           
                                                                   
                                           
                                                  
                                                             
                                                             
                                                             
                                                              
                                                      
                                                                
                   
                  
                              
            
        
   
                          
            
              
            
                                     
     
                                                                       
                                                           
                                  
                                                 
               
   
 
                             
                                                      
                           
                   
   
                                    
                
                              
             
               
                            
                         
       
                                  
            
     
              
                                             
                                              
                                    
              
     
                    
               
   
 
                                                                           
                          
                  
                          
                      
              
                      
              
                      
   
                                       
                      
                                                             
                           
     
                                   
                                                 
                       
                                            
                                 
              
                                 
       
                       
     
                                                   
                       
                                            
                            
              
                             
       
                       
     
                                
                     
            
                     
     
                     
   
 
             
                                                                          
                                                                          
                                                                        
                                                                           
           
             
                           
                          
                          
                       
             
                           
                  
                    
                       
              
              
           
                  
                                 
                    
            
               
                 
           
              
              
              
              
                 
   
                    
                                   
                                 
                                 
                                   
                                         
                                                   
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                        
         
                                          
                                  
         
                              
                 
                               
                                       
         
              
                         
       
                 
     
                                 
                        
                                 
                      
         
                                 
                                  
                      
         
                                            
                                                     
                                                       
     
                              
                                
                 
                             
                               
         
                   
                                 
                                                  
           
                
                               
         
                      
                       
       
                     
     
                                 
                               
                                            
                      
         
                                          
                                  
         
                              
                 
                               
                                       
         
              
                             
       
                     
     
                        
                                 
                      
         
                                  
                      
                 
            
               
                  
               
                                            
                                               
              
                               
       
                    
                             
       
                                
                              
                               
                                                
                                                     
                                                                           
                               
                                       
                                               
               
                                        
             
           
         
       
                                    
                        
                        
       
                         
                     
       
                        
                        
       
                        
                        
       
                         
                     
       
                         
                     
       
                         
                     
       
                        
                    
       
                         
                     
       
                         
                     
       
                          
                      
       
                          
                      
       
                         
                     
       
                          
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                          
                     
       
                         
                         
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                              
               
                              
                                 
                                         
         
                   
                                 
                                         
           
                
                               
         
                       
                                
                                              
                                                        
                         
                                       
                                              
                 
                      
                                     
               
                             
                         
                                       
                                              
                 
                      
                                     
               
                             
             
           
         
                               
              
                        
                      
         
       
                            
            
                                              
                        
       
                                              
                        
       
                              
               
                               
                                       
       
                            
               
                      
                                
                                                      
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                    
                  
                                     
                                             
             
                                                  
                     
                       
                                     
                                            
               
                    
                                   
             
                           
                       
                                     
                                             
               
                    
                                   
             
                           
                       
                                     
                                             
               
                    
                                   
             
                           
                       
                                     
                                            
               
                    
                                    
             
                            
                                  
                             
                                  
                            
           
         
       
                            
                       
                            
                      
                            
               
                               
                    
               
                               
                    
            
                               
                    
            
                               
                              
            
                               
                              
           
                               
                              
            
                               
                    
            
              
                              
                                 
                                 
                         
           
         
       
                       
                                              
                                 
                                         
         
       
             
                              
                
                          
       
                            
             
                                            
                                               
              
                                 
       
                     
                              
       
            
                     
                              
       
            
                                              
                                 
                                         
         
       
                            
                
                                              
                                 
                                         
         
                   
                                 
                                         
           
                
                                
         
                        
                   
                                 
                                         
           
                
                                
         
                        
                   
                                 
                                         
           
                
                                
         
                        
       
                            
            
                            
                       
                           
                      
                                  
                                                                              
              
                                                       
                      
                             
                                              
                                
         
                   
                                                                            
                          
                             
                                  
                  
                                                
                                   
                                    
                    
                                                  
                                     
                           
                                        
                                            
                                            
                     
                          
                                          
                   
                      
                 
                                
                                      
                      
                                         
                                                          
                                  
                               
                                         
                                              
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                       
                                         
                       
                                              
                                
                                                     
                                       
                                            
                                     
                          
                     
                                    
                   
                 
                                              
                               
                                       
                 
                           
               
             
           
                                                           
                        
                                  
           
         
                        
       
                    
                    
              
                                
                           
                 
                         
                       
                                      
                                 
                                           
                                                   
                   
                             
                                           
                                                   
                     
                          
                                          
                   
                                  
                             
                                           
                                                                   
                     
                          
                                          
                   
                                  
                             
                                           
                                                                         
                     
                          
                                          
                   
                                 
                                                         
                        
                          
                 
                      
                 
                                     
                             
                                           
                                                   
                     
                          
                                          
                   
                                 
                                            
                 
               
                                    
                                      
               
                         
                                       
                                            
                 
                      
                                      
               
                             
                  
                                            
             
                            
                         
           
         
       
                      
                              
                    
              
                                 
               
                                
                                                                               
                                                              
                                                                        
                          
             
                  
                        
           
                
               
                                
                         
           
         
       
                 
                               
                                       
       
                 
                               
                                       
         
              
                              
       
                      
            
                 
                               
                                    
         
              
                              
       
                      
           
          
     
                   
                     
                                              
                                 
                                         
         
       
     
                       
                                
                   
                               
                                  
           
                     
                                   
                                                    
             
                  
                                  
           
                         
                         
         
                        
       
     
                           
                                     
     
                 
                            
                                       
                                                                    
                                                                    
                     
   
 
static char slot0[256];
                                
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options) {
        
           
                  
  printf("\nFUNC_CALL;quotearg_n_options(int,const char *,size_t,const struct quoting_options *);\n");
printf("\nSTMT_EXEC;;2368\n");
struct slotvec *sv;
            
                     
              
                          
              
  printf("\nSTMT_EXEC;;2374\n");
char *val;
            
               
                 
               
  {
                             
             
                         
    printf("\nSTMT_EXEC;;2383\n");
sv = slotvec;
                
              
     
                       
                             
                                                                              
                                                
                     
              
                     
       
                                               
                     
       
                         
                                                
              
                     
       
                                                                         
                   
                         
                       
       
                                                                            
                                
     
                          
    printf("\nSTMT_EXEC;;2412\n");
val = (sv + n)->val;
                                      
                                       
                                                                           
                                                         
                                                                               
                    
                        
                         
                            
                                                         
                          
       
                             
                          
                                                       
                                                                         
                                                                                
                                                                 
                                                                   
     
                                 
                 
    printf("\nSTMT_EXEC;;2435\n");
printf("\nFUNC_RETURN;;\n");
return (val);
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
                         
void set_program_name(char const *argv0);
                                     
                                           
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strrchr)(char const *__s, int __c)
    __attribute__((__pure__));
                                                     
                                          
                    
                   
          
              
   
                                                             
                                                                                
              
     
                                              
                                                             
                       
            
                   
     
                             
                                                        
                         
                     
                                              
                       
                           
                                                        
         
       
     
                         
                                            
           
   
 
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
printf("\nSTMT_EXEC;;2837\n");
printf("\nFUNC_RETURN;;\n");
return ((unsigned char)ch);  
printf("\nFUNC_RETURN;;\n");
}
static int yylex(union YYSTYPE *lvalp, parser_control *pc);
static int yyerror(parser_control const *pc __attribute__((__unused__)),
                   char const *s __attribute__((__unused__)));
static long time_zone_hhmm(parser_control *pc, textint s, long mm);
static void digits_to_date_time(parser_control *pc, textint text_int) {
   
                         
                             
                             
                               
                                
                  
                                        
                                  
                    
                          
             
           
                
                      
         
              
                    
       
            
           
       printf("\nFUNC_CALL;digits_to_date_time(parser_control *,textint);\n");
printf("\nSTMT_EXEC;;2865\n");
if (4UL < text_int.digits) {
                           
        printf("\nSTMT_EXEC;;2867\n");
pc->day = text_int.value % 100L;
        printf("\nSTMT_EXEC;;2868\n");
pc->month = (text_int.value / 100L) % 100L;
        printf("\nSTMT_EXEC;;2869\n");
pc->year.value = text_int.value / 10000L;
        printf("\nSTMT_EXEC;;2870\n");
pc->year.digits = text_int.digits - 4UL;
      } else {
                           
                                     
                                    
                           
                
                                           
                                              
         
                                         
                                                   
                         
      }
     
           
   
printf("\nFUNC_RETURN;;\n");
}
static void apply_relative_time(parser_control *pc, relative_time rel,
                                int factor) {
   
    printf("\nFUNC_CALL;apply_relative_time(parser_control *,relative_time,int);\n");
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
                             
           
   
printf("\nFUNC_RETURN;;\n");
}
static void set_hhmmss(parser_control *pc, long hour, long minutes, time_t sec,
                       long nsec) {
   
    printf("\nFUNC_CALL;set_hhmmss(parser_control *,long,long,time_t,long);\n");
printf("\nSTMT_EXEC;;2905\n");
pc->hour = hour;
    printf("\nSTMT_EXEC;;2906\n");
pc->minutes = minutes;
    printf("\nSTMT_EXEC;;2907\n");
pc->seconds.tv_sec = sec;
    printf("\nSTMT_EXEC;;2908\n");
pc->seconds.tv_nsec = nsec;
           
   
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
                                         
                                                                           
                                                                           
                                                                           
                                                                           
                                                                          
                                                                          
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                          
                                                                           
                                                                           
                                                                          
                                                                          
                                                                          
                                                                          
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                           
                                                                            
                                                                        
                                            
   
                 
                         
     
                        
                 
                      
                
           
   
 
int yyparse(parser_control *pc);
int yyparse(parser_control *pc) {
  printf("\nFUNC_CALL;yyparse(parser_control *);\n");
printf("\nSTMT_EXEC;;3300\n");
int yychar;
  printf("\nSTMT_EXEC;;3301\n");
YYSTYPE yylval;
              
  printf("\nSTMT_EXEC;;3303\n");
int yystate;
                  
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
                       
                      
                       
                     
                           
                               
               
  printf("\nSTMT_EXEC;;3324\n");
relative_time __constr_expr_13;
  printf("\nSTMT_EXEC;;3325\n");
relative_time __constr_expr_14;
                                 
  printf("\nSTMT_EXEC;;3327\n");
relative_time __constr_expr_16;
  printf("\nSTMT_EXEC;;3328\n");
relative_time __constr_expr_17;
                                 
  printf("\nSTMT_EXEC;;3330\n");
relative_time __constr_expr_19;
  printf("\nSTMT_EXEC;;3331\n");
relative_time __constr_expr_20;
                                 
  printf("\nSTMT_EXEC;;3333\n");
relative_time __constr_expr_22;
  printf("\nSTMT_EXEC;;3334\n");
relative_time __constr_expr_23;
                                 
  printf("\nSTMT_EXEC;;3336\n");
relative_time __constr_expr_25;
  printf("\nSTMT_EXEC;;3337\n");
relative_time __constr_expr_26;
                                 
  printf("\nSTMT_EXEC;;3339\n");
relative_time __constr_expr_28;
  printf("\nSTMT_EXEC;;3340\n");
relative_time __constr_expr_29;
  printf("\nSTMT_EXEC;;3341\n");
relative_time __constr_expr_30;
  printf("\nSTMT_EXEC;;3342\n");
relative_time __constr_expr_31;
                                 
                                 
                                 
  printf("\nSTMT_EXEC;;3346\n");
relative_time __constr_expr_35;
  printf("\nSTMT_EXEC;;3347\n");
relative_time __constr_expr_36;
                                 
  printf("\nSTMT_EXEC;;3349\n");
relative_time __constr_expr_38;
  printf("\nSTMT_EXEC;;3350\n");
relative_time __constr_expr_39;
  {
              
                
    printf("\nSTMT_EXEC;;3354\n");
yyss = yyssa;
    printf("\nSTMT_EXEC;;3355\n");
yyvs = yyvsa;
                       
    printf("\nSTMT_EXEC;;3357\n");
yystate = 0;
                    
                
    printf("\nSTMT_EXEC;;3360\n");
yychar = -2;
    printf("\nSTMT_EXEC;;3361\n");
yyssp = yyss;
    printf("\nSTMT_EXEC;;3362\n");
yyvsp = yyvs;
                    
  yynewstate:
    {
printf("\nSTMT_EXEC;;3365\n");
yyssp++;
}

             
     printf("\nSTMT_EXEC;;3367\n");
*yyssp = (yytype_int16)yystate;
                                                                            
                                                    
                                
                            
       
                         
                               
                           
       
                   
                                    
                                                                  
                                         
                  
                   
                            
       
                 
                                                                          
                                                 
                                  
                    
                                                                        
                                             
                         
       
                 
                 
                                                                          
                                                 
                                  
                        
                                                                        
                                                 
                             
       
                     
                                                           
                            
       
                                  
                                  
                                                                              
                        
       
     
    printf("\nSTMT_EXEC;;3414\n");
if (yystate == 12) {
      printf("\nSTMT_EXEC;;3415\n");
goto yyacceptlab;
    }
                  
           
     printf("\nSTMT_EXEC;;3419\n");
yyn = (int)yypact[yystate];
                     
                     
     
    printf("\nSTMT_EXEC;;3423\n");
if (yychar == -2) {
      printf("\nSTMT_EXEC;;3424\n");
yychar = yylex(&yylval, pc);
    }
                      
                  
                       
           {
                                         
        printf("\nSTMT_EXEC;;3431\n");
yytoken = (int)yytranslate[yychar];
               
                    
       
    }
    printf("\nSTMT_EXEC;;3436\n");
yyn += yytoken;
    printf("\nSTMT_EXEC;;3437\n");
if (yyn < 0) {
      printf("\nSTMT_EXEC;;3438\n");
goto yydefault;
    } else {
                      
                       
              
        printf("\nSTMT_EXEC;;3443\n");
if ((int const)yycheck[yyn] != (int const)yytoken) {
          printf("\nSTMT_EXEC;;3444\n");
goto yydefault;
        }
       
    }
    printf("\nSTMT_EXEC;;3448\n");
yyn = (int)yytable[yyn];
                   
                     
                      
              
                        
                        
         
       
                 
                    
     
                      
                    
     
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
                  
           
     printf("\nSTMT_EXEC;;3475\n");
yylen = (int)yyr2[yyn];
    printf("\nSTMT_EXEC;;3476\n");
yyval = *(yyvsp + (1 - yylen));
    printf("\nSTMT_EXEC;;3477\n");
if (yyn == 4) {
      printf("\nSTMT_EXEC;;3478\n");
goto case_4;
    }
                   
                  
     
    printf("\nSTMT_EXEC;;3483\n");
if (yyn == 8) {
      printf("\nSTMT_EXEC;;3484\n");
goto case_8;
    }
                   
                  
     
                    
                   
     
                    
                   
     
    printf("\nSTMT_EXEC;;3495\n");
if (yyn == 12) {
      printf("\nSTMT_EXEC;;3496\n");
goto case_12;
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
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
                    
                   
     
    printf("\nSTMT_EXEC;;3552\n");
if (yyn == 39) {
      printf("\nSTMT_EXEC;;3553\n");
goto case_39;
    }
                    
                   
     
                    
                   
     
    printf("\nSTMT_EXEC;;3561\n");
if (yyn == 42) {
      printf("\nSTMT_EXEC;;3562\n");
goto case_42;
    }
                    
                   
     
    printf("\nSTMT_EXEC;;3567\n");
if (yyn == 44) {
      printf("\nSTMT_EXEC;;3568\n");
goto case_44;
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
                    
                   
     
                    
                   
     
    printf("\nSTMT_EXEC;;3693\n");
goto switch_default;
  case_4:
    {
printf("\nSTMT_EXEC;;3695\n");
pc->seconds = (yyvsp + 0)->timespec;
}

    printf("\nSTMT_EXEC;;3696\n");
pc->timespec_seen = (_Bool)1;
                      
         
                       
                       
                      
  case_8:
    {
printf("\nSTMT_EXEC;;3703\n");
(pc->times_seen)++;
}

    printf("\nSTMT_EXEC;;3704\n");
goto switch_break;
         
                             
                      
          
                       
                      
          
                       
                      
  case_12:
    {
printf("\nSTMT_EXEC;;3715\n");
(pc->days_seen)++;
}

    printf("\nSTMT_EXEC;;3716\n");
goto switch_break;
          
                                                                      
                                            
                      
          
                                                  
                                                              
                                            
                      
          
                                                  
                                                                             
                                               
                                            
                      
          
                                                                      
                     
                      
  case_23:
    {
printf("\nSTMT_EXEC;;3737\n");
set_hhmmss(pc, (yyvsp + -3)->textintval.value,
               (yyvsp + -1)->textintval.value, (time_t)0, 0L);
}

                     
    printf("\nSTMT_EXEC;;3740\n");
goto switch_break;
  case_24:
    {
printf("\nSTMT_EXEC;;3742\n");
set_hhmmss(pc, (yyvsp + -5)->textintval.value,
               (yyvsp + -3)->textintval.value, (yyvsp + -1)->timespec.tv_sec,
               (yyvsp + -1)->timespec.tv_nsec);
}

                     
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
                      
          
                                               
                                                        
                      
          
                        
                                                               
                      
          
                                        
                      
          
                         
                      
          
                                         
                                                 
                      
          
                         
                                                 
                      
          
                                                                                
                                                   
                      
          
                                              
                      
          
                                               
                      
          
                         
                                              
                      
          
                         
                                               
                      
  case_39:
    {
printf("\nSTMT_EXEC;;3793\n");
pc->day_ordinal = (yyvsp + -1)->intval;
}

    printf("\nSTMT_EXEC;;3794\n");
pc->day_number = (int)(yyvsp + 0)->intval;
                      
          
                                                     
                                              
    printf("\nSTMT_EXEC;;3799\n");
goto switch_break;
          
                                               
                                            
                      
  case_42:
                                                 
                                          
                                                 
                                              
           {
      printf("\nSTMT_EXEC;;3810\n");
pc->month = (yyvsp + -4)->textintval.value;
      printf("\nSTMT_EXEC;;3811\n");
pc->day = (yyvsp + -2)->textintval.value;
      printf("\nSTMT_EXEC;;3812\n");
pc->year = (yyvsp + 0)->textintval;
    }
    printf("\nSTMT_EXEC;;3814\n");
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
                                                     
    printf("\nSTMT_EXEC;;3826\n");
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
          
                               
                                
                              
                               
                                  
                                              
                             
                                 
                        
                      
  case_57:
    {
printf("\nSTMT_EXEC;;3893\n");
__constr_expr_16.year = 0L;
}

                                
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
                      
          
                               
                                
                              
                               
                                  
                                              
                             
                                 
                         
    printf("\nSTMT_EXEC;;3924\n");
goto switch_break;
  case_60:
    {
printf("\nSTMT_EXEC;;3926\n");
__constr_expr_19.year = 0L;
}

    printf("\nSTMT_EXEC;;3927\n");
__constr_expr_19.month = 0L;
                              
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
                                  
    printf("\nSTMT_EXEC;;4008\n");
__constr_expr_26.seconds = (long_time_t)0;
    printf("\nSTMT_EXEC;;4009\n");
__constr_expr_26.ns = 0L;
    printf("\nSTMT_EXEC;;4010\n");
yyval.rel = __constr_expr_26;
    printf("\nSTMT_EXEC;;4011\n");
yyval.rel.minutes = (yyvsp + -1)->textintval.value;
                      
          
                               
                                
                              
                               
                                  
                                              
                             
                                 
                           
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

                                
                              
                               
                                  
                                              
                             
                                 
                                                      
                                                  
                      
          
     printf("\nSTMT_EXEC;;4059\n");
__constr_expr_31.year = 0L;
    printf("\nSTMT_EXEC;;4060\n");
__constr_expr_31.month = 0L;
    printf("\nSTMT_EXEC;;4061\n");
__constr_expr_31.day = 0L;
    printf("\nSTMT_EXEC;;4062\n");
__constr_expr_31.hour = 0L;
    printf("\nSTMT_EXEC;;4063\n");
__constr_expr_31.minutes = 0L;
                                              
                             
    printf("\nSTMT_EXEC;;4066\n");
yyval.rel = __constr_expr_31;
    printf("\nSTMT_EXEC;;4067\n");
yyval.rel.seconds = (yyvsp + -1)->timespec.tv_sec;
    printf("\nSTMT_EXEC;;4068\n");
yyval.rel.ns = (yyvsp + -1)->timespec.tv_nsec;
                      
          
                               
                                
                              
                               
                                  
                                              
                             
                                 
                                       
                      
          
                               
                                
                              
                               
                                  
                                              
                             
                                 
                                                    
                      
          
                               
                                
                              
                               
                                  
                                              
                             
                                 
                                                     
    printf("\nSTMT_EXEC;;4102\n");
goto switch_break;
  case_77:
    {
printf("\nSTMT_EXEC;;4104\n");
__constr_expr_35.year = 0L;
}

    printf("\nSTMT_EXEC;;4105\n");
__constr_expr_35.month = 0L;
                              
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
                      
  case_85:
    {
printf("\nSTMT_EXEC;;4159\n");
yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;
}

                                                  
                      
  case_87:
    {
printf("\nSTMT_EXEC;;4163\n");
yyval.timespec.tv_sec = (yyvsp + 0)->textintval.value;
}

                                                  
                      
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
              
    printf("\nSTMT_EXEC;;4185\n");
yyvsp++;
    printf("\nSTMT_EXEC;;4186\n");
*yyvsp = yyval;
    printf("\nSTMT_EXEC;;4187\n");
yyn = (int)yyr1[yyn];
    printf("\nSTMT_EXEC;;4188\n");
yystate = (int)((int const)yypgoto[yyn - 28] + (int const) * yyssp);
                      {
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
    }       
                                         
     
    printf("\nSTMT_EXEC;;4202\n");
goto yynewstate;
  yyerrlab:
                      {
                
                                                          
    }
                           
                        
                          
                          
         
              
                                                              
                    
       
     
                   
                   
                   
              
                          
                   
            
                    
               
                                 
                       
              
                       
                           
                                               
                                      
                            
                                     
               
             
           
         
       
                                                        
                        
       
                                                                    
              
              
                            
     
                  
            
                    
                  
                    
  yyacceptlab:
    {
printf("\nSTMT_EXEC;;4255\n");
yyresult = 0;
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
                                                   
                    
                   
                    
                                       
                                          
                                                             
                                                                 
                                                                
                                                                 
                                                                
                                                                
                                                                 
                                                                 
                                                              
                                                              
                                                               
                                                               
                                                               
                                                               
                                                               
                                                                                
                                         
                                       
                                       
                                       
                                       
                                       
                                       
                                      
                                      
                                      
                                      
                                      
                                      
                                                         
static long time_zone_hhmm(parser_control *pc, textint s, long mm) {
  printf("\nFUNC_CALL;time_zone_hhmm(parser_control *,textint,long);\n");
printf("\nSTMT_EXEC;;4386\n");
long n_minutes;
           
              
  {
                          
                    
                        
       
     
                 {
      printf("\nSTMT_EXEC;;4396\n");
n_minutes = (s.value / 100L) * 60L + s.value % 100L;
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
              
               
              
               
  {
                        
                  
     
                        
                  
     
                        
                 
                      {
                        
        printf("\nSTMT_EXEC;;4429\n");
tmp = hours;
               
                  
       
    }       
                
     
    printf("\nSTMT_EXEC;;4436\n");
printf("\nFUNC_RETURN;;\n");
return ((int)tmp);
         
                     
                        
                        
              
                
       
            
       
                         
                    
              
                     
       
                              
     
                          
         
                     
                        
                              
              
                    
       
            
           
                         
                     
              
                     
       
                              
     
                          
               
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
                        
                           
           {
      printf("\nSTMT_EXEC;;4482\n");
if (textyear.digits == 2UL) {
                            {
          printf("\nSTMT_EXEC;;4484\n");
tmp = 2000;
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
          
  printf("\nSTMT_EXEC;;4498\n");
int tmp___0;
              
  {
                                   
               
                      
                         
       
                                                 
                     
                    
       
           
     
              
     printf("\nSTMT_EXEC;;4513\n");
tp = (table const *)(pc->local_time_zone_table);
              {
                      
                             
       
      printf("\nSTMT_EXEC;;4518\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___0 = strcmp(name, (char const *)tp->name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;4519\n");
if (tmp___0 == 0) {
        printf("\nSTMT_EXEC;;4520\n");
printf("\nFUNC_RETURN;;\n");
return (tp);
      }
           
    }
                  
                          
               
                      
                             
       
                                                     
                         
                    
       
           
     
                   
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
          
  printf("\nSTMT_EXEC;;4543\n");
size_t wordlen;
  printf("\nSTMT_EXEC;;4544\n");
table const *tp;
                     
  printf("\nSTMT_EXEC;;4546\n");
_Bool abbrev;
  printf("\nSTMT_EXEC;;4547\n");
unsigned char ch;
          
  printf("\nSTMT_EXEC;;4549\n");
int tmp___0;
  printf("\nSTMT_EXEC;;4550\n");
int tmp___1;
  printf("\nSTMT_EXEC;;4551\n");
int tmp___2;
  printf("\nSTMT_EXEC;;4552\n");
int tmp___3;
              
  printf("\nSTMT_EXEC;;4554\n");
int tmp___5;
  printf("\nSTMT_EXEC;;4555\n");
int tmp___6;
  printf("\nSTMT_EXEC;;4556\n");
int tmp___7;
               
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

               
                      
                             
       
                                                                   
                     
                    
       
           
     
                  
     printf("\nSTMT_EXEC;;4581\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
wordlen = strlen((char const *)word___0);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;4582\n");
if (wordlen == 3UL) {
      printf("\nSTMT_EXEC;;4583\n");
tmp___0 = 1;
    } else {
                           
                                         
                      
                
          printf("\nSTMT_EXEC;;4589\n");
tmp___0 = 0;
         
               
                    
       
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
                  ;
                         
                          
                 
                        
                               
         
                                                           
                      
         
             
       
                     
     
                            
                 
          
               
                   
                   
                     
                             
       
                          
                                
              
            
       
          
     
                   
                       
                                                                  
               
                    
       
     
                                        
  }
printf("\nFUNC_RETURN;;\n");
}
static int yylex(union YYSTYPE *lvalp, parser_control *pc) {
  printf("\nFUNC_CALL;yylex(union YYSTYPE *,parser_control *);\n");
printf("\nSTMT_EXEC;;4703\n");
unsigned char c;
               
  printf("\nSTMT_EXEC;;4705\n");
_Bool tmp;
  printf("\nSTMT_EXEC;;4706\n");
char const *p;
  printf("\nSTMT_EXEC;;4707\n");
int sign;
  printf("\nSTMT_EXEC;;4708\n");
unsigned long value;
                
  printf("\nSTMT_EXEC;;4710\n");
unsigned long value1;
  printf("\nSTMT_EXEC;;4711\n");
time_t s;
  printf("\nSTMT_EXEC;;4712\n");
int ns;
  printf("\nSTMT_EXEC;;4713\n");
int digits;
                           
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
                       
  {
               
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

                          {
                                   
                   printf("\nSTMT_EXEC;;4759\n");
(pc->input)++;
                  printf("\nSTMT_EXEC;;4760\n");
c = (unsigned char)*(pc->input);
                                              
                                 
                                         
                   
                                          
                }
                              ;
                                                     
                              
                 
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
                                 
                                         
                                 
                                   
                     
                                                     
                         {
                    printf("\nSTMT_EXEC;;4807\n");
s = (time_t)value;
                                 
                                   
                     
                                                  
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
                }       
                              
                 
              } else {
                     
                                                                
                printf("\nSTMT_EXEC;;4878\n");
if (sign < 0) {
                  printf("\nSTMT_EXEC;;4879\n");
lvalp->textintval.value = (long)(-value);
                                                     
                                 
                   
                } else {
                  printf("\nSTMT_EXEC;;4884\n");
lvalp->textintval.value = (long)value;
                                                     
                                 
                   
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
                                                                  {
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
                                  
              printf("\nSTMT_EXEC;;4916\n");
goto while_break___6;
             
          }
        }
      while_break___6:
        {
printf("\nSTMT_EXEC;;4921\n");
*p___0 = (char)'\000';
}

        printf("\nSTMT_EXEC;;4922\n");
tp = lookup_word((parser_control const *)pc, buff);
                  
                       
         
        printf("\nSTMT_EXEC;;4926\n");
lvalp->intval = (long)tp->value;
        printf("\nSTMT_EXEC;;4927\n");
printf("\nFUNC_RETURN;;\n");
return ((int)tp->type);
      }
                        {
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
                        
                 
                             
                      
                                     
                          
                          
         
                           
                  
                
                             
                    
           
         
                              
                               
         
       
                     
           ;
     
               
  }
printf("\nFUNC_RETURN;;\n");
}
                                                                        
                                                               
                  
 
static _Bool mktime_ok(struct tm const *tm0, struct tm const *tm1, time_t t) {
   
                   
                                                               
                 
                          
       
     
    printf("\nFUNC_CALL;mktime_ok(const struct tm *,const struct tm *,time_t);\n");
printf("\nSTMT_EXEC;;4972\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)(
        !((((((tm0->tm_sec ^ tm1->tm_sec) | (tm0->tm_min ^ tm1->tm_min)) |
             (tm0->tm_hour ^ tm1->tm_hour)) |
            (tm0->tm_mday ^ tm1->tm_mday)) |
           (tm0->tm_mon ^ tm1->tm_mon)) |
          (tm0->tm_year ^ tm1->tm_year))));
   
printf("\nFUNC_RETURN;;\n");
}
                                  
           
            
                
                 
                
                
   
                       
             
             
                                         
                             
                            
                                                                  
                             
              
                                                    
                             
       
     
                
   
 
_Bool parse_datetime(struct timespec *result, char const *p,
                     struct timespec const *now) {
  printf("\nFUNC_CALL;parse_datetime(struct timespec *,const char *,const struct timespec *);\n");
printf("\nSTMT_EXEC;;5006\n");
time_t Start;
                
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
                  
                       
            
                   
  printf("\nSTMT_EXEC;;5017\n");
_Bool ok;
                
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
                   
                 
                  
  printf("\nSTMT_EXEC;;5027\n");
void *tmp___1;
  printf("\nSTMT_EXEC;;5028\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;5029\n");
int tmp___3;
              
  printf("\nSTMT_EXEC;;5031\n");
relative_time __constr_expr_40;
              
               
                            
                           
              
  printf("\nSTMT_EXEC;;5037\n");
int tmp___7;
  printf("\nSTMT_EXEC;;5038\n");
long tmp___8;
                 
                     
               
                          
                        
                                                                           
               
                 
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
               
  printf("\nSTMT_EXEC;;5067\n");
int tmp___15;
               
  {
                              
                              
    printf("\nSTMT_EXEC;;5072\n");
ok = (_Bool)1;
              {
      printf("\nSTMT_EXEC;;5074\n");
gettime(&gettime_buffer);
      printf("\nSTMT_EXEC;;5075\n");
now = (struct timespec const *)(&gettime_buffer);
    }
                                
                                  
    printf("\nSTMT_EXEC;;5079\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tmp = (struct tm const *)localtime(&now->tv_sec);printf("\nFUNC_RETURN;;\n");

               
                        
     
               
                            
                                  
                     
                         
       
          
     
              
                                              
                      {
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
                                    
              
                                         
                                           
                                   
             
           
               {
          printf("\nSTMT_EXEC;;5109\n");
if ((int const) * s == 34) {
                                               
                              
                                 
                          {
              printf("\nSTMT_EXEC;;5114\n");
tmp___1 = xmalloc(tzsize);
              printf("\nSTMT_EXEC;;5115\n");
tz1 = (char *)tmp___1;
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
                                 
                                   
                                              
                                  
    printf("\nSTMT_EXEC;;5163\n");
tm.tm_isdst = (int)tmp->tm_isdst;
                    
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
                              
    printf("\nSTMT_EXEC;;5176\n");
pc.days_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5177\n");
pc.times_seen = (size_t)0;
                                    
                             
    printf("\nSTMT_EXEC;;5180\n");
pc.zones_seen = (size_t)0;
    printf("\nSTMT_EXEC;;5181\n");
pc.local_time_zone_table[0].name = (char const *)tmp->tm_zone;
    printf("\nSTMT_EXEC;;5182\n");
pc.local_time_zone_table[0].type = 269;
                                                           
                                                                 
                
               
                            
                             
       
                                                  
                                                                       
                         
                     
                                
                                   
                                                             
                                                                               
                                                   
                                                                        
                                                                         
                                 
           
         
       
                
     
                   
                                           
                                             
                                                          
                                                           
                       
                                                 
                                                                       
         
       
     
    printf("\nSTMT_EXEC;;5218\n");
tmp___7 = yyparse(&pc);
                       
                
     
    printf("\nSTMT_EXEC;;5222\n");
if (pc.timespec_seen) {
      printf("\nSTMT_EXEC;;5223\n");
*result = pc.seconds;
    } else {
               
                                                                              
                                                    
                  
       
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
                               
                                
            _L:
              {
printf("\nSTMT_EXEC;;5241\n");
tm.tm_hour = to_hour(pc.hour, pc.meridian);
}

                                   
                          
               
              printf("\nSTMT_EXEC;;5245\n");
tm.tm_min = (int)pc.minutes;
              printf("\nSTMT_EXEC;;5246\n");
tm.tm_sec = (int)pc.seconds.tv_sec;
                     
                            
                                    
                                     
                                                        
             
                   
                          
                                  
                                   
                                                      
           
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
                             
          printf("\nSTMT_EXEC;;5278\n");
goto fail;
                 
                                   
                               
                                 
                  
                                
           
                                  
                                                   
                                                         
                                
                                 
           
                                                                      
                                                         
                                                                 
                              
                      
           
                                    
                   
                              
                                                         
                                                                
                          
                      
           
         
      }
      printf("\nSTMT_EXEC;;5308\n");
if (pc.days_seen) {
                             
                                   {
                                              
              printf("\nSTMT_EXEC;;5312\n");
tmp___13 = 1;
                     
                           
             
          }       
                         
           
          printf("\nSTMT_EXEC;;5319\n");
tm.tm_mday = (int)((long)tm.tm_mday +
                             ((long)(((pc.day_number - tm.tm_wday) + 7) % 7) +
                              7L * (pc.day_ordinal - (long)tmp___13)));
                           
                              
                             
                      
           
         
      }
                                                     {
        printf("\nSTMT_EXEC;;5330\n");
year___1 = (int)((long)tm.tm_year + pc.rel.year);
        printf("\nSTMT_EXEC;;5331\n");
month = (int)((long)tm.tm_mon + pc.rel.month);
        printf("\nSTMT_EXEC;;5332\n");
day = (int)((long)tm.tm_mday + pc.rel.day);
                                                             
                                                           
                                                       
                    
         
        printf("\nSTMT_EXEC;;5338\n");
tm.tm_year = year___1;
        printf("\nSTMT_EXEC;;5339\n");
tm.tm_mon = month;
        printf("\nSTMT_EXEC;;5340\n");
tm.tm_mday = day;
                                 
                               
                               
                                   
        printf("\nSTMT_EXEC;;5345\n");
printf("\nFUNC_CALL;mktime(struct tm *);\n");
Start = mktime(&tm);printf("\nFUNC_RETURN;;\n");

                           
                    
         
      }
      printf("\nSTMT_EXEC;;5350\n");
if (pc.zones_seen) {
        printf("\nSTMT_EXEC;;5351\n");
delta = pc.time_zone * 60L;
                              
        printf("\nSTMT_EXEC;;5353\n");
t1 = Start - delta;
                                           
                    
         
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
                
                                                      
                            
              
        printf("\nSTMT_EXEC;;5391\n");
printf("\nFUNC_CALL;unsetenv(const char *);\n");
tmp___15 = unsetenv("TZ");printf("\nFUNC_RETURN;;\n");

                            
       
                                              
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
printf("\nSTMT_EXEC;;5852\n");
struct timeval tv;
  {
                               
                   
             
     
    printf("\nSTMT_EXEC;;5858\n");
printf("\nFUNC_CALL;gettimeofday(struct timeval *__restrict,__timezone_ptr_t);\n");
gettimeofday(&tv, (__timezone_ptr_t)((void *)0));printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;5859\n");
ts->tv_sec = tv.tv_sec;
                                     
           
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
           
  }
printf("\nFUNC_RETURN;;\n");
}
static size_t strftime_case____0(_Bool upcase, FILE *s, char const *format,
                                 struct tm const *tp, int ut, int ns) {
                 
             
                   
  printf("\nFUNC_CALL;strftime_case____0(_Bool,FILE *,const char *,const struct tm *,int,int);\n");
printf("\nSTMT_EXEC;;5984\n");
size_t i;
  printf("\nSTMT_EXEC;;5985\n");
FILE *p;
  printf("\nSTMT_EXEC;;5986\n");
char const *f;
  printf("\nSTMT_EXEC;;5987\n");
int pad;
               
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
                     
  printf("\nSTMT_EXEC;;5996\n");
char sign_char;
  printf("\nSTMT_EXEC;;5997\n");
char *bufp;
  printf("\nSTMT_EXEC;;5998\n");
char buf___1[3UL + (((sizeof(time_t) * 8UL - 1UL) * 146UL) / 485UL + 2UL)];
  printf("\nSTMT_EXEC;;5999\n");
int width;
                   
  printf("\nSTMT_EXEC;;6001\n");
_Bool to_uppcase;
  printf("\nSTMT_EXEC;;6002\n");
size_t colons;
                    
  printf("\nSTMT_EXEC;;6004\n");
int format_char;
            
            
          
               
                 
                
            
                
                      
                
                
              
                   
                 
                    
                
                
             
                 
                
                
              
                   
                 
                    
                
                
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
                
  printf("\nSTMT_EXEC;;6039\n");
char *tmp___10;
  printf("\nSTMT_EXEC;;6040\n");
size_t _n___2;
                
               
                   
                  
                    
                
                
              
               
  printf("\nSTMT_EXEC;;6050\n");
int tmp___14;
                
                
               
                   
                  
                    
                
                
  printf("\nSTMT_EXEC;;6059\n");
int padding;
  printf("\nSTMT_EXEC;;6060\n");
size_t _i___9;
                
                
               
                   
                  
                    
                 
                 
                
                
               
                   
                  
                    
                 
                 
  printf("\nSTMT_EXEC;;6077\n");
size_t _i___14;
                
                
               
                   
                  
                    
                 
                 
  printf("\nSTMT_EXEC;;6086\n");
size_t _n___7;
                
               
                   
                  
                    
                 
                 
        
                
                
               
                   
                  
                    
                 
                 
  printf("\nSTMT_EXEC;;6103\n");
struct tm ltm;
  printf("\nSTMT_EXEC;;6104\n");
time_t t;
  printf("\nSTMT_EXEC;;6105\n");
int d;
  printf("\nSTMT_EXEC;;6106\n");
int tmp___27;
                
                
               
                   
                  
                    
                 
                 
               
               
                  
           
               
               
            
               
               
         
               
             
                 
                  
                 
               
                    
                  
                     
                 
                 
           
                
               
               
           
                 
                 
               
                    
                  
                     
                 
                 
  {
                         
                              
    printf("\nSTMT_EXEC;;6152\n");
i = (size_t)0;
    printf("\nSTMT_EXEC;;6153\n");
p = s;
                                     
                                     
                      
                   
            
                        
                    
       
     
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
                            
      printf("\nSTMT_EXEC;;6172\n");
to_uppcase = upcase;
                             
      printf("\nSTMT_EXEC;;6174\n");
if ((int const) * f != 37) {
                  {
                         
                          
                    
                  
                        
           
                           
                        
                         
                  
                         
           
                          
                                     
                               
           
                  
                              
                            
                                            
                                
                             
                                   
                               
                                           
                                             
                       
                                    
                           
                     
                                   
                                         
                   
                                 
                        
                             
                                       
                               
                                               
                                             
                       
                                    
                               
                     
                                   
                                         
                   
                                 
                 
               
             
            printf("\nSTMT_EXEC;;6227\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)*f, p);printf("\nFUNC_RETURN;;\n");

           
                     
                               
        }
                      ;
        printf("\nSTMT_EXEC;;6233\n");
goto __Cont;
      }
                {
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
                                    
                       
         
                                    
                       
         
        printf("\nSTMT_EXEC;;6247\n");
if ((int const) * f == 94) {
          printf("\nSTMT_EXEC;;6248\n");
goto case_94;
        }
                                    
                       
         
        printf("\nSTMT_EXEC;;6253\n");
goto switch_default;
      case_95:
        {
printf("\nSTMT_EXEC;;6255\n");
pad = (int)*f;
}

                                
      case_94:
        {
printf("\nSTMT_EXEC;;6258\n");
to_uppcase = (_Bool)1;
}

        printf("\nSTMT_EXEC;;6259\n");
goto while_continue___5;
              
                               
                                
      switch_default:
        {
printf("\nSTMT_EXEC;;6264\n");
goto switch_break;
}

      switch_break:;
                             
      }
                    ;
      printf("\nSTMT_EXEC;;6269\n");
if ((unsigned int)*f - 48U <= 9U) {
        printf("\nSTMT_EXEC;;6270\n");
width = 0;
        printf("\nSTMT_EXEC;;6271\n");
while (1) {
                                  
                               
                 {
                                     
                                             
                                   
                      
                            
                                                     
               
                    
              printf("\nSTMT_EXEC;;6283\n");
width *= 10;
              printf("\nSTMT_EXEC;;6284\n");
width += (int)((int const) * f - 48);
             
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
                                  
                     
       
                                  
                     
       
                              
            
                  
          
                               
                            
                       
                    
                            
                     
       printf("\nSTMT_EXEC;;6310\n");
format_char = (int)*f;
                              
                     
       
                              
                     
       
                              
                     
       
                              
                     
       
                               
                     
       
                              
                     
       
                              
                     
       
                              
                     
       
                               
                      
       
                              
                     
       
      printf("\nSTMT_EXEC;;6341\n");
if (format_char == 100) {
        printf("\nSTMT_EXEC;;6342\n");
goto case_100;
      }
                               
                      
       
                              
                     
       
                              
                     
       
                              
                     
       
                               
                      
       
                               
                      
       
                               
                      
       
                              
                     
       
                               
                      
       
      printf("\nSTMT_EXEC;;6371\n");
if (format_char == 78) {
        printf("\nSTMT_EXEC;;6372\n");
goto case_78;
      }
                               
                      
       
                              
                     
       
                               
                      
       
                              
                     
       
                               
                      
       
                              
                     
       
      printf("\nSTMT_EXEC;;6392\n");
if (format_char == 115) {
        printf("\nSTMT_EXEC;;6393\n");
goto case_115;
      }
                              
                     
       
                              
                     
       
                               
                      
       
                               
                      
       
                              
                     
       
                              
                     
       
                               
                     
       
                              
                     
       
                              
                     
       
                               
                      
       
      printf("\nSTMT_EXEC;;6425\n");
if (format_char == 89) {
        printf("\nSTMT_EXEC;;6426\n");
goto case_89;
      }
                               
                      
       
                              
                     
       
      printf("\nSTMT_EXEC;;6434\n");
if (format_char == 58) {
        printf("\nSTMT_EXEC;;6435\n");
goto case_58;
      }
                               
                      
       
                             
                        
       
                      
            
                          
                        
       
                 
                           
                        
                      
                
                          
         
                                 
                              
                           
                
                           
         
                            
                                       
                             
         
                
                            
                                  
                                                  
                              
                           
                                     
                             
                                                 
                                           
                     
                                  
                             
                   
                                 
                                       
                 
                               
                      
                           
                                     
                             
                                                 
                                            
                     
                                  
                             
                   
                                  
                                        
                 
                                
               
             
           
                            
         
                       
                             
       
                     
                            
            
                          
                        
       
                        
                              
                              
       
                               
            
                          
                        
       
                        
                              
                              
       
                               
            
                        
                              
                              
       
                          
                        
       
                               
            
                          
                        
       
                        
                              
                              
       
                               
            
                           
                        
       
                               
              
                                                                               
                                           
                    
                 
                     
                        
                      
                
                          
         
                                 
                              
                           
                
                           
         
                            
                                       
                             
         
                
                            
                                  
                                                  
                              
                           
                                     
                             
                                                 
                                            
                     
                                  
                             
                   
                                  
                                        
                 
                                
                      
                           
                                     
                             
                                                 
                                            
                     
                                  
                             
                   
                                  
                                        
                 
                                
               
             
           
                                                                
         
                       
                              
       
                      
                            
                        
       printf("\nSTMT_EXEC;;6612\n");
u = ufmt;
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

                          {
                  {
          printf("\nSTMT_EXEC;;6631\n");
_n___2 = len___0 - 1UL;
                          
                         
                  
                             
           
                                    
                                
                              
                  
                              
           
                               
                                         
                               
           
                 {
                              
                                    
                                                    
                                
                             
                                       
                               
                                                   
                                              
                       
                                    
                               
                     
                                    
                                          
                   
                                  
                        
                             
                                       
                               
                                                   
                                              
                       
                                    
                               
                     
                                    
                                          
                   
                                  
                 
               
             
                      {
                               
                                                                    
                      
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
                           ;
          }
                         
                                
        }
                       ;
      }
      printf("\nSTMT_EXEC;;6701\n");
goto switch_break___1;
            
                           
                        
       
                           
                                 
       
                                              
                                  
                          
                       
                
                       
         
              
                     
       
                          
                 
                                                     
                                             
                            
             
                           
                        
       
                               
            
                          
                        
       
                          
                     
    case_100:
                          {
                        
      }
      printf("\nSTMT_EXEC;;6739\n");
digits = 2;
      printf("\nSTMT_EXEC;;6740\n");
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
                               
                                   
         
      }
      printf("\nSTMT_EXEC;;6770\n");
bufp = buf___1 + sizeof(buf___1) / sizeof(buf___1[0]);
                            
                                         
       
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
                      
                        
                     
                               
                            
                           
                    
                               
             
                                      
                                  
                                
                    
                                
             
                                 
                                           
                                 
             
                    
                                
                                      
                                                      
                                  
                               
                                         
                                 
                                                     
                                                
                         
                                      
                                 
                       
                                      
                                            
                     
                                    
                          
                               
                                         
                                 
                                                     
                                                
                         
                                      
                                 
                       
                                      
                                            
                     
                                    
                   
                 
               
                                       
             
                           
                                  
           
                          
         
             {
        printf("\nSTMT_EXEC;;6866\n");
padding =
            (int)(((long)digits -
                   ((buf___1 + sizeof(buf___1) / sizeof(buf___1[0])) - bufp)) -
                  (long)(!(!sign_char)));
        printf("\nSTMT_EXEC;;6870\n");
if (padding > 0) {
          printf("\nSTMT_EXEC;;6871\n");
if (pad == 95) {
                                                 
                                 
             
                   {
                        {
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
                                      
              }
                             ;
            }
                                 
                                  
                               
                    
                        
             
            printf("\nSTMT_EXEC;;6896\n");
if (sign_char) {
                        {
                                   
                                
                               
                        
                                   
                 
                                          
                                      
                                    
                        
                                    
                 
                                     
                                               
                                     
                 
                        
                                    
                                          
                                                          
                                      
                                   
                                              
                                     
                                                          
                                                    
                             
                                          
                                      
                           
                                          
                                                
                         
                                        
                              
                                   
                                              
                                     
                                                          
                                                    
                             
                                          
                                      
                           
                                          
                                                
                         
                                        
                       
                     
                   
                  printf("\nSTMT_EXEC;;6949\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)sign_char, p);printf("\nFUNC_RETURN;;\n");

                 
                               
                                      
              }
                             ;
            }
          } else {
                                                
                                 
             
            printf("\nSTMT_EXEC;;6960\n");
if (sign_char) {
                        {
                                   
                                
                               
                        
                                   
                 
                                          
                                      
                                    
                        
                                    
                 
                                     
                                               
                                     
                 
                        
                                    
                                          
                                                          
                                      
                                   
                                              
                                     
                                                          
                                                    
                             
                                          
                                      
                           
                                          
                                                
                         
                                        
                              
                                   
                                              
                                     
                                                          
                                                    
                             
                                          
                                      
                           
                                          
                                                
                         
                                        
                       
                     
                   
                  printf("\nSTMT_EXEC;;7013\n");
printf("\nFUNC_CALL;fputc(int,FILE *);\n");
fputc((int)sign_char, p);printf("\nFUNC_RETURN;;\n");

                 
                               
                                      
              }
                             ;
            }
                   {
                        {
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
                                      
              }
                             ;
            }
                                 
                      
          }
        } else {
                          
                       
                                 
                              
                             
                      
                                 
               
                                        
                                    
                                  
                      
                                  
               
                                   
                                             
                                   
               
                      
                                  
                                        
                                                        
                                    
                                 
                                            
                                   
                                                        
                                                  
                           
                                        
                                    
                         
                                        
                                              
                       
                                      
                            
                                 
                                            
                                   
                                                        
                                                  
                           
                                        
                                    
                         
                                        
                                              
                       
                                      
                     
                   
                 
                                         
               
                             
                                    
             
                            
           
        }
      }
                {
        printf("\nSTMT_EXEC;;7102\n");
_n___7 =
            (size_t)((buf___1 + sizeof(buf___1) / sizeof(buf___1[0])) - bufp);
                        
                       
                
                           
         
                                  
                              
                            
                
                            
         
                             
                                       
                             
         
               {
                            
                                  
                                                  
                              
                           
                                      
                             
                                                  
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
                      
                           
                                      
                             
                                                  
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
               
             
           
                    {
                             
                                                            
                    
                               
                printf("\nSTMT_EXEC;;7159\n");
fwrite_uppcase(p, (char const *)bufp, _n___7);
                       
                                                                 
               
             
                                  
          }
                         ;
        }
                       
                              
      }
                     ;
      printf("\nSTMT_EXEC;;7172\n");
goto switch_break___1;
            
                          
                        
       
                          
                     
            
                           
                        
       
                 
                                      
                     
            
                           
                        
       
                 
                            
                     
             
                           
                        
       
                 
                                      
                              
             
                           
                        
       
                 
                            
                              
             
                           
                        
       
                 
                                                  
                                                      
                            
            
                           
                        
       
                 
                                     
                     
             
                           
                        
       
                 
                                                 
                                                     
                            
    case_78:
                          {
                        
      }
      printf("\nSTMT_EXEC;;7234\n");
number_value = ns;
                        
                  
              
                  
                   
                         
                                  
           
                             
              
         
                        
       
                     
                                  
      printf("\nSTMT_EXEC;;7250\n");
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
            
                           
                        
       
                               
            
                          
                     
             
                 
                           
                        
                       
                
                           
         
                                  
                              
                            
                
                            
         
                             
                                       
                             
         
                
                            
                                  
                                                  
                              
                           
                                      
                             
                                                  
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
                      
                           
                                      
                             
                                                  
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
               
             
           
                         
         
                       
                              
       
                      
                            
             
                 
                                                            
                     
            
                           
                        
       
                 
                                                                  
                     
            
                           
                        
       
                            
                       
              
                        
       
                                                          
                      
                                                                   
                      
                     
                         
                                      
                                          
                         
                  
                                            
                           
                    
                           
             
           
                
                       
         
                                                                              
                                               
              
                                
                                    
                         
                  
                                      
                           
                    
                           
             
           
                
                       
         
                                 
                                                                                
                         
                         
                          
                       
         
       
                                   
                          
       
                                  
                         
       
                              
                 
                                                                     
                 
                    
                          
              
                                                             
                         
                
                              
         
                                
       
                     
                
                 
                                                                                
                      
                                                                          
                            
                       
                 
                                  
                     
            
                           
                        
       
                 
                    
                                                                       
                     
             
                           
                        
       
                 
                                      
                     
    case_89:
                          {
                                 
      }
                           
                        
              
                   
       
      printf("\nSTMT_EXEC;;7541\n");
negative_number = (_Bool)(tp->tm_year < -1900);
      printf("\nSTMT_EXEC;;7542\n");
u_number_value = (unsigned int)tp->tm_year + 1900U;
      printf("\nSTMT_EXEC;;7543\n");
goto do_signed_number;
             
                           
                                 
       
                                        
                       
                                  
                           
                
                        
         
       
                 
                            
                     
            
                        
                              
                              
       
                  
                  
       
                 
                                
                           
                        
                       
                
                           
         
                                   
                                
                             
                
                             
         
                              
                                        
                             
         
                
                            
                                    
                                                    
                              
                           
                                      
                             
                                                   
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
                      
                           
                                      
                             
                                                   
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
               
             
           
                     
                             
                                               
                    
                               
                                                 
                      
                                                                  
               
             
                                  
           
                          
         
                        
                              
       
                      
                            
    case_58:
      {
printf("\nSTMT_EXEC;;7640\n");
colons = (size_t)1;
}

                 
                                                  
                                
         
                        
                 
                 
       
                      
                                              
                        
       
      printf("\nSTMT_EXEC;;7653\n");
f += colons;
                           
             
                         
                    
                             
                              
       
                                
                                   
                                  
                           
                          
                    
       
                          
                      
       
                          
                         
       
                          
                    
       
                              
           
                 
                                          
                        
                                                                  
                        
             
       printf("\nSTMT_EXEC;;7685\n");
digits = 6;
                                          
      printf("\nSTMT_EXEC;;7687\n");
tz_colon_mask = 4;
                                                                  
      printf("\nSTMT_EXEC;;7689\n");
goto do_tz_offset;
                
                 
                                          
                         
                      
                                                                          
                        
           
                          
                         
       
                          
                      
       
                 
                                          
                        
                                               
                        
                       
                      
               
          
               
                
                 
                                                      
                                
         
                        
                 
               
       
                      
                 
                               
                        
                       
                
                           
         
                                   
                                
                             
                
                             
         
                              
                                        
                             
         
                
                            
                                    
                                                    
                              
                           
                                      
                             
                                                   
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
                      
                           
                                      
                             
                                                   
                                            
                     
                                  
                              
                   
                                  
                                        
                 
                                
               
             
           
                     
                             
                                                         
                    
                               
                                                           
                      
                                                                              
               
             
                                  
           
                          
         
                        
                              
       
                      
                            
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
printf("\nSTMT_EXEC;;7890\n");
int result;
          
               
              
              
                  
              
               
  {
                    
               
                    
                 
                       
                   
     
                             
                       
                           
                                              
                           
         
                                 
                      
                                       
                                 
         
       
            
              
     
    printf("\nSTMT_EXEC;;7921\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
result = fclose(fp);printf("\nFUNC_RETURN;;\n");

                           
                                   
                             
                  
     
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
void close_stdout(void);
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
int close_stream(FILE *stream);
                             
                          
void close_stdout(void) {
                          
                  
                
               
               
  printf("\nFUNC_CALL;close_stdout();\n");
printf("\nSTMT_EXEC;;8114\n");
int tmp___3;
               
  printf("\nSTMT_EXEC;;8116\n");
int tmp___5;
  {
    printf("\nSTMT_EXEC;;8118\n");
tmp___3 = close_stream(stdout);
                       
                         
                                     
                                
                  
         
              
         
                                                   
                          
                        
                                              
                                       
                                                             
                
                                       
                                                
         
                                 
       
     
    printf("\nSTMT_EXEC;;8140\n");
tmp___5 = close_stream(stderr);
                       
                               
     
           
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
printf("\nSTMT_EXEC;;8159\n");
int tmp___1;
               
               
  {
                             
                                       
                                      
                                      
    printf("\nSTMT_EXEC;;8167\n");
tmp___1 = rpl_fclose(stream);
                                        
                    
                  
            
                        
                           
                      
                
                                       
                              
                 
                               
                                           
                           
             
                        
           
         
       
     
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
                  
               
              
  printf("\nSTMT_EXEC;;9295\n");
ssize_t line_length;
  printf("\nSTMT_EXEC;;9296\n");
ssize_t tmp___2;
                      
                
  printf("\nSTMT_EXEC;;9299\n");
_Bool tmp___5;
  printf("\nSTMT_EXEC;;9300\n");
_Bool tmp___6;
                      
               
  printf("\nSTMT_EXEC;;9303\n");
int tmp___9;
  {
                                          
                       
                                                               
                        
           {
      printf("\nSTMT_EXEC;;9310\n");
printf("\nFUNC_CALL;fopen(const char *__restrict,const char *__restrict);\n");
in_stream = fopen(input_filename, "r");printf("\nFUNC_RETURN;;\n");

                                                                   
                                    
                                     
                                      
       
    }
    printf("\nSTMT_EXEC;;9317\n");
line = (char *)((void *)0);
                       
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
                   {
        printf("\nSTMT_EXEC;;9329\n");
tmp___5 = show_date(format, when);
                                             
      }       
                                                      
                                                      
         
                                            
                                             
                                                    
                      
       
    }
  while_break:
    {
printf("\nSTMT_EXEC;;9342\n");
tmp___9 = rpl_fclose(in_stream);
}

                        
                                      
                                   
                                        
     
                       
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
                                            
                                                                        
                                                                        
                         
                                                                        
                                                                        
                                                                        
                                                                        
                                                                            
                                                                          
                                                                          
                                                                          
                                                                          
                                                                          
                                                           
                                                                        
                                                                        
                                                                        
                                          
                                                                        
                                                                        
                                                                        
                                                                        
                          
int main(int argc, char **argv) {
  printf("\nFUNC_CALL;main(int,char **);\n");
printf("\nSTMT_EXEC;;9\n");
AFL_INIT_SET0("date");
  printf("\nSTMT_EXEC;;9395\n");
int optc;
  printf("\nSTMT_EXEC;;9396\n");
char const *datestr;
                          
  printf("\nSTMT_EXEC;;9398\n");
struct timespec when;
                 
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
                       
                    
                       
                
              
                
  printf("\nSTMT_EXEC;;9415\n");
int tmp___5;
  printf("\nSTMT_EXEC;;9416\n");
int tmp___6;
  printf("\nSTMT_EXEC;;9417\n");
int tmp___7;
                
                
                       
                 
                 
  printf("\nSTMT_EXEC;;9423\n");
int tmp___13;
                       
                 
  printf("\nSTMT_EXEC;;9426\n");
_Bool valid_date;
                
  printf("\nSTMT_EXEC;;9428\n");
int tmp___17;
  printf("\nSTMT_EXEC;;9429\n");
char const *tmp___18;
  printf("\nSTMT_EXEC;;9430\n");
char *tmp___19;
                 
                
               
  printf("\nSTMT_EXEC;;9434\n");
_Bool tmp___23;
               
  {
    printf("\nSTMT_EXEC;;9437\n");
datestr = (char const *)((void *)0);
                                            
                        
    printf("\nSTMT_EXEC;;9440\n");
format = (char const *)((void *)0);
    printf("\nSTMT_EXEC;;9441\n");
batch_file = (char *)((void *)0);
    printf("\nSTMT_EXEC;;9442\n");
reference = (char *)((void *)0);
                                                
                     
                                                           
                            
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
                        
                      
       
                        
                      
       
                         
                          
       
                         
                          
       
                          
             
       printf("\nSTMT_EXEC;;9487\n");
datestr = (char const *)optarg;
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

                        
             
                                         
                          
                        
             
                                    
                                
                         
                     
       
                        
                 
               
                        
                 
                                                                              
                                       
              
                        
                   
               
    switch_break:;
      printf("\nSTMT_EXEC;;9540\n");
if (new_format) {
                     
                                                                 
                                             
         
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
                     
                  
           {
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
                                    
                        
                                                                              
                                         
               
     
                   
                                  
                          
                                                                              
                                           
                 
       
     
    printf("\nSTMT_EXEC;;9579\n");
if (optind < argc) {
                              
                                                               
                                               
                                                      
                 
       
                                               
                     
                                                                  
                                              
         
        printf("\nSTMT_EXEC;;9591\n");
tmp___13 = optind;
                 
        printf("\nSTMT_EXEC;;9593\n");
format = (char const *)(*(argv + tmp___13) + 1);
               
                       
                                                           
                    
                                                                              
                                                                            
                                                                      
                                                        
                   
                
                                      
                                                             
                      
                                                                                
                                                                              
                                                                        
                                                          
                     
           
         
       
    }
    printf("\nSTMT_EXEC;;9616\n");
if (!format) {
      printf("\nSTMT_EXEC;;9617\n");
printf("\nFUNC_CALL;nl_langinfo(nl_item);\n");
format = (char const *)nl_langinfo(131180);printf("\nFUNC_RETURN;;\n");

                     
                                           
       
    }
    printf("\nSTMT_EXEC;;9622\n");
if ((unsigned long)batch_file != (unsigned long)((void *)0)) {
      printf("\nSTMT_EXEC;;9623\n");
ok = batch_convert((char const *)batch_file, format);
    } else {
      printf("\nSTMT_EXEC;;9625\n");
valid_date = (_Bool)1;
                    
      printf("\nSTMT_EXEC;;9627\n");
if (!option_specified_date) {
                        
                              
                                
                                                     
                                                               
                                                
                  
            printf("\nSTMT_EXEC;;9635\n");
gettime(&when);
           
                 
                  
         
      } else {
         
         printf("\nSTMT_EXEC;;9642\n");
if ((unsigned long)reference != (unsigned long)((void *)0)) {
          printf("\nSTMT_EXEC;;9643\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___17 = stat((char const *)reference, &refstats);printf("\nFUNC_RETURN;;\n");

                              
                                          
                                                 
           
          printf("\nSTMT_EXEC;;9648\n");
when = get_stat_mtime((struct stat const *)(&refstats));
        } else {
                            
                                  
           
          printf("\nSTMT_EXEC;;9653\n");
valid_date = parse_datetime(&when, datestr,
                                      (struct timespec const *)((void *)0));
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
                     
                                                             
                            
                                                
                                        
                                                      
                        
         
       
      printf("\nSTMT_EXEC;;9671\n");
tmp___23 = show_date(format, when);
                                            
    }
             
                   
            
                   
     
                   
  }
printf("\nFUNC_RETURN;;\n");
}
static _Bool show_date(char const *format, struct timespec when) {
  printf("\nFUNC_CALL;show_date(const char *,struct timespec);\n");
printf("\nSTMT_EXEC;;9683\n");
struct tm *tm;
      
                                                                                
                   
            
                
  {
    printf("\nSTMT_EXEC;;9690\n");
printf("\nFUNC_CALL;localtime(const time_t *);\n");
tm = localtime((time_t const *)(&when.tv_sec));printf("\nFUNC_RETURN;;\n");

              
                                            
                                                   
                                              
                        
     
                                                                    
                        
     
    printf("\nSTMT_EXEC;;9700\n");
fprintftime(stdout, format, (struct tm const *)tm, 0, (int)when.tv_nsec);
    printf("\nSTMT_EXEC;;9701\n");
printf("\nFUNC_CALL;fputc_unlocked(int,FILE *);\n");
fputc_unlocked('\n', stdout);printf("\nFUNC_RETURN;;\n");

                                                                    
                       
     
    printf("\nSTMT_EXEC;;9705\n");
printf("\nFUNC_RETURN;;\n");
return ((_Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
