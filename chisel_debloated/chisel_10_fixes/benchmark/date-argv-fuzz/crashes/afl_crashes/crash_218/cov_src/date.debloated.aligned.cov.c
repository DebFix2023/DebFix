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













}
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) {





























}
int c_tolower(int c) __attribute__((__const__));
                      
          
   
                  
                    
                            
               
                
       
            
              
     
                 
   
 
int c_toupper(int c) __attribute__((__const__));
int c_toupper(int c) {













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




}
void (*argmatch_die)(void) = &__argmatch_die;
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize)
    __attribute__((__pure__));
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize) {














































}
                                                             
                                          
                     
            
                
                
                      
                
   
                         
                                                  
                    
            
                                                        
                        
     
                                   
                                  
                                                                
                                          
           
   
 
                                                                    
                                     
           
                       
            
                      
                      
              
   
                                         
                                          
                                              
                  
               
                            
                         
       
                     
                                                      
                                             
                                         
              
                                                
                                                                         
                      
                                                        
                                               
                                           
                
                                                        
                                           
         
       
          
     
              
                                
           
   
 
ptrdiff_t __xargmatch_internal(char const *context, char const *arg,
                               char const *const *arglist, char const *vallist,
                               size_t valsize, void (*exit_fn)(void)) {













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








































































}
                                                                      
                           
                             
                
   
                                        
            
                                                    
                                                                       
                     
   
 
                                                                   
                                 
            
   
                                      
                                      
                                             
                                                                         
                 
   
 
                                               
            
   
                                                 
                 
   
 
                                       
            
   
                                        
                 
   
 
struct quoting_options quote_quoting_options = {(enum quoting_style)6,
                                                0,
                                                {0U},
                                                (char const *)((void *)0),
                                                (char const *)((void *)0)};
char const *quote_n_mem(int n, char const *arg, size_t argsize) {







}
char const *quote_n(int n, char const *arg) {





}
char const *quote(char const *arg) {





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

}
static int yylex(union YYSTYPE *lvalp, parser_control *pc);
static int yyerror(parser_control const *pc __attribute__((__unused__)),
                   char const *s __attribute__((__unused__)));
static long time_zone_hhmm(parser_control *pc, textint s, long mm);
static void digits_to_date_time(parser_control *pc, textint text_int) {











































}
static void apply_relative_time(parser_control *pc, relative_time rel,
                                int factor) {











}
static void set_hhmmss(parser_control *pc, long hour, long minutes, time_t sec,
                       long nsec) {







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

























}
static int to_hour(long hours, int meridian) {




























































}
static long to_year(textint textyear) {


















}
static table const *__attribute__((__pure__))
lookup_zone(parser_control const *pc, char const *name) {











































}
static table const *lookup_word(parser_control const *pc, char *word___0) {
































































































































































}
static int yylex(union YYSTYPE *lvalp, parser_control *pc) {
































































































































































































































































}
                                                                        
                                                               
                  
 
static _Bool mktime_ok(struct tm const *tm0, struct tm const *tm1, time_t t) {














}
                                  
           
            
                
                 
                
                
   
                       
             
             
                                         
                             
                            
                                                                  
                             
              
                                                    
                             
       
     
                
   
 
_Bool parse_datetime(struct timespec *result, char const *p,
                     struct timespec const *now) {











































































































































































































































































































































































































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
















}
static size_t strftime_case____0(_Bool upcase, FILE *s, char const *format,
                                 struct tm const *tp, int ut, int ns) {





























































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































}
size_t fprintftime(FILE *s, char const *format, struct tm const *tp, int ut,
                   int ns) {





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





































}
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-prototypes"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic pop
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
int close_stream(FILE *stream) {




































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
  _Bool ok;
  FILE *in_stream;
  char *line;
  size_t buflen;
  struct timespec when;
                  
               
              
  ssize_t line_length;
  ssize_t tmp___2;
                      
                
  _Bool tmp___5;
  _Bool tmp___6;
                      
               
  int tmp___9;
  {
                                          
                       
                                                               
                        
           {
      in_stream = fopen(input_filename, "r");
                                                                   
                                    
                                     
                                      
       
    }
    line = (char *)((void *)0);
                       
    ok = (_Bool)1;
    while (1) {
      tmp___2 = getline(&line, &buflen, in_stream);
      line_length = tmp___2;
                             

       
      tmp___6 = parse_datetime(&when, (char const *)line,
                               (struct timespec const *)((void *)0));
                   {
        tmp___5 = show_date(format, when);
                                             
      }       
                                                      
                                                      
         
                                            
                                             
                                                    
                      
       
    }
  while_break:;

                        
                                      
                                   
                                        
     
                       

  }
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
  AFL_INIT_SET0("date");
  int optc;
  char const *datestr;
                          
  struct timespec when;
                 
  char const *format;
  char *batch_file;
  char *reference;
  struct stat refstats;
  _Bool ok;
  int option_specified_date;
  char const *new_format;
  enum Time_spec i;
  ptrdiff_t tmp;
                       
                    
                       
                
              
                
  int tmp___5;
  int tmp___6;
  int tmp___7;
                
                
                       
                 
                 
  int tmp___13;
                       
                 
  _Bool valid_date;
                
  int tmp___17;
  char const *tmp___18;
  char *tmp___19;
                 
                
               
  _Bool tmp___23;
               
  {
    datestr = (char const *)((void *)0);
                                            
                        
    format = (char const *)((void *)0);
    batch_file = (char *)((void *)0);
    reference = (char *)((void *)0);
                                                
                     
                                                           
                            
    atexit(&close_stdout);
    while (1) {
      optc = getopt_long(argc, (char *const *)argv, short_options,
                         long_options___1, (int *)((void *)0));
      if (!(optc != -1)) {
        goto while_break;
      }
      new_format = (char const *)((void *)0);
                        
                      
       
      if (optc == 102) {
        goto case_102;
      }
                        

       
                       
                     
       
      if (optc == 114) {
        goto case_114;
      }
                       

       
                        
                      
       
                        
                      
       
                         
                          
       
                         
                          
       
                          
             
       datestr = (char const *)optarg;
      goto switch_break;
    case_102:;
      batch_file = optarg;
      goto switch_break;
    case_128:;







            
                   
                                       
                                                                 
                                                                           
                                                   
              
                     
       
                                      
                                          
                        
    case_114:;
      reference = optarg;
      goto switch_break;
    case_82:;

                        
             
                                         
                          
                        
             
                                    
                                
                         
                     
       
                        
                 
               
                        
                 
                                                                              
                                       
              
                        
                   
               
    switch_break:;
                       
                     
                                                                 
                                             
         

       
    }
  while_break:;
    if (datestr) {

    } else {
      tmp___5 = 0;
    }
                     
                  
           {
      tmp___6 = 0;
    }
    if (reference) {
      tmp___7 = 1;
    } else {

    }
    option_specified_date = (tmp___5 + tmp___6) + tmp___7;
                                    
                        
                                                                              
                                         
               
     
                   
                                  
                          
                                                                              
                                           
                 
       
     
    if (optind < argc) {
                              
                                                               
                                               
                                                      
                 
       
                                               
                     
                                                                  
                                              
         
        tmp___13 = optind;
                 
        format = (char const *)(*(argv + tmp___13) + 1);
               
                       
                                                           
                    
                                                                              
                                                                            
                                                                      
                                                        
                   
                
                                      
                                                             
                      
                                                                                
                                                                              
                                                                        
                                                          
                     
           
         
       
    }
                  

                     
                                           
       
     
    if ((unsigned long)batch_file != (unsigned long)((void *)0)) {
      ok = batch_convert((char const *)batch_file, format);
    } else {

                    



































                     
                                                             
                            
                                                
                                        
                                                      
                        
         
       

                                            
    }
             
                   
            
                   
     
                   
  }
}
static _Bool show_date(char const *format, struct timespec when) {
























}
