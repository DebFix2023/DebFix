#include "argv-fuzz-inl.h"
#include "path_check.h"
typedef void *voidp;
typedef unsigned char uch;
typedef unsigned short ush;
typedef unsigned long ulg;
typedef long __off_t;
typedef long __off64_t;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
typedef unsigned long size_t;
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
typedef unsigned char char_type;
typedef long code_int;
typedef unsigned long cmp_code_int;
typedef struct _IO_FILE _IO_FILE;
struct huft;
union __anonunion_v_25
{
  ush n;
  struct huft *t;
};
struct huft
{
  uch e;
  uch b;
  union __anonunion_v_25 v;
};
typedef int file_t;
union __anonunion_fc_7
{
  ush freq;
  ush code;
};
union __anonunion_dl_8
{
  ush dad;
  ush len;
};
struct ct_data
{
  union __anonunion_fc_7 fc;
  union __anonunion_dl_8 dl;
};
typedef struct ct_data ct_data;
struct tree_desc
{
  ct_data *dyn_tree;
  ct_data *static_tree;
  int *extra_bits;
  int extra_base;
  int elems;
  int max_length;
  int max_code;
};
typedef struct tree_desc tree_desc;
typedef ush Pos;
typedef unsigned int IPos;
struct config
{
  ush good_length;
  ush max_lazy;
  ush nice_length;
  ush max_chain;
};
typedef struct config config;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
typedef __off_t off_t;
typedef __time_t time_t;
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef void (*__sighandler_t)(int);
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
struct option
{
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
struct dirent
{
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef struct dirent dir_type;
struct utimbuf
{
  __time_t actime;
  __time_t modtime;
};
uch inbuf[32832];
uch outbuf[18432];
ush d_buf[32768];
uch window[65536L];
ush prev[1L << 16];
unsigned int insize;
unsigned int inptr;
int ifd;
int ofd;

int unlzh(int in, int out);
int fill_inbuf(int eof_ok);
void write_buf(int fd, voidp buf, unsigned int cnt);
void error(char *m);
static unsigned int decode(unsigned int count, uch *buffer);
static void decode_start(void);
static void huf_decode_start(void);
static unsigned int decode_c(void);
static unsigned int decode_p(void);
static void read_pt_len(int nn, int nbit, int i_special);
static void read_c_len(void);
static void fillbuf(int n);
static unsigned int getbits(int n);
static void init_getbits(void);
static void make_table(int nchar, uch *bitlen, int tablebits, ush *table);































































































































































































































































































































































































































































































































































































































































































































































































































unsigned int outcnt;

int unpack(int in, int out);
void flush_window(void);









static void read_tree(void);
static void build_tree(void);




















































































































































































































































































































































































extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2), __leaf__)) memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1), __leaf__)) memset)(void *__s, int __c, size_t __n);
long bytes_in;
char ifname[1024];
char *progname;



void read_error(void);


int unlzw(int in, int out);













































































































































































































































































































































int lzw(int in, int out);




















extern __attribute__((__nothrow__)) unsigned short const **(__attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) int *(__attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern ssize_t write(int __fd, void const *__buf, size_t __n);
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) calloc)(size_t __nmemb, size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) free)(void *__ptr);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) getenv)(char const *__name);
extern int _IO_putc(int __c, _IO_FILE *__fp);
extern void perror(char const *__s);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) strrchr)(char const *__s, int __c) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1, 2), __leaf__)) strcspn)(char const *__s, char const *__reject) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1, 2), __leaf__)) strspn)(char const *__s, char const *__accept) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s) __attribute__((__pure__));
char ofname[1024];
void abort_gzip(void);
int copy(int in, int out);
ulg updcrc(uch *s, unsigned int n);
void clear_bufs(void);
void flush_outbuf(void);
char *strlwr(char *s);
char *basename(char *fname);
char *add_envopt(int *argcp, char ***argvp, char *env___0);
void write_error(void);
void display_ratio(long num, long den, FILE *file);
voidp xmalloc(unsigned int size);
ulg crc_32_tab[256];
















































static ulg crc = (ulg)4294967295L;
ulg updcrc(uch *s, unsigned int n)
{
  printf("\nFUNC_CALL;updcrc(uch *,unsigned int);\n");
printf("\nSTMT_EXEC;;1826\n");
register ulg c;
  printf("\nSTMT_EXEC;;1827\n");
uch *tmp;
  {





    {
      printf("\nSTMT_EXEC;;1835\n");
c = crc;
      printf("\nSTMT_EXEC;;1836\n");
if (n)
      {

        printf("\nSTMT_EXEC;;1839\n");
while (1)
        {
          ;
          printf("\nSTMT_EXEC;;1842\n");
tmp = s;
          printf("\nSTMT_EXEC;;1843\n");
s++;
          printf("\nSTMT_EXEC;;1844\n");
c = crc_32_tab[((int)c ^ (int)*tmp) & 255] ^ (c >> 8);
          printf("\nSTMT_EXEC;;1845\n");
n--;
          printf("\nSTMT_EXEC;;1846\n");
if (!n)
          {
            printf("\nSTMT_EXEC;;1848\n");
goto while_break;
          }
        }
      while_break: /* CIL Label */;

      }
    }
    printf("\nSTMT_EXEC;;1855\n");
crc = c;
    printf("\nSTMT_EXEC;;1856\n");
printf("\nFUNC_RETURN;;\n");
return (c ^ 4294967295UL);
  }
printf("\nFUNC_RETURN;;\n");
}











int fill_inbuf(int eof_ok)
{
  printf("\nFUNC_CALL;fill_inbuf(int);\n");
printf("\nSTMT_EXEC;;1872\n");
int len;

  {
    {
      printf("\nSTMT_EXEC;;1876\n");
insize = 0U;


    }
    {

      {
        ;
        {
          printf("\nSTMT_EXEC;;1885\n");
len = (int)read(ifd, (void *)((char *)(inbuf) + insize), (size_t)(32768U - insize));
        }











        printf("\nSTMT_EXEC;;1898\n");
insize += (unsigned int)len;



      };
    }













    printf("\nSTMT_EXEC;;1917\n");
inptr = 1U;
    printf("\nSTMT_EXEC;;1918\n");
printf("\nFUNC_RETURN;;\n");
return ((int)inbuf[0]);
  }
printf("\nFUNC_RETURN;;\n");
}
void flush_outbuf(void)
{






  printf("\nFUNC_CALL;flush_outbuf();\n");
printf("\nSTMT_EXEC;;1929\n");
write_buf(ofd, (voidp)((char *)(outbuf)), outcnt);

  printf("\nSTMT_EXEC;;1931\n");
outcnt = 0U;



printf("\nFUNC_RETURN;;\n");
}
void flush_window(void)
{











  printf("\nFUNC_CALL;flush_window();\n");
printf("\nSTMT_EXEC;;1949\n");
write_buf(ofd, (voidp)((char *)(window)), outcnt);






printf("\nFUNC_RETURN;;\n");
}
void write_buf(int fd, voidp buf, unsigned int cnt)
{
  printf("\nFUNC_CALL;write_buf(int,voidp,unsigned int);\n");
printf("\nSTMT_EXEC;;1959\n");
unsigned int n;
  {
    {
      ;


      {
        printf("\nSTMT_EXEC;;1966\n");
printf("\nFUNC_CALL;write(int,const void *,size_t);\n");
n = (unsigned int)write(fd, (void const *)buf, (size_t)cnt);printf("\nFUNC_RETURN;;\n");

      }

      {





        printf("\nSTMT_EXEC;;1975\n");
write_error();
      }
    };






  }
printf("\nFUNC_RETURN;;\n");
}
































char *basename(char *fname)
{
  printf("\nFUNC_CALL;basename(char *);\n");
printf("\nSTMT_EXEC;;2020\n");
char *p;
  {
    {
      printf("\nSTMT_EXEC;;2023\n");
printf("\nFUNC_CALL;strrchr(const char *,int);\n");
p = strrchr((char const *)fname, '/');printf("\nFUNC_RETURN;;\n");

    }

    {
      printf("\nSTMT_EXEC;;2027\n");
fname = p + 1;
    }
    printf("\nSTMT_EXEC;;2029\n");
printf("\nFUNC_RETURN;;\n");
return (fname);
  }
printf("\nFUNC_RETURN;;\n");
}





























































































































































void error(char *m)
{


  printf("\nFUNC_CALL;error(char *);\n");
printf("\nSTMT_EXEC;;2193\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: %s: %s\n", progname, ifname, m);printf("\nFUNC_RETURN;;\n");


printf("\nFUNC_RETURN;;\n");
}





























void write_error(void)
{



  printf("\nFUNC_CALL;write_error();\n");
printf("\nSTMT_EXEC;;2230\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ofname));printf("\nFUNC_RETURN;;\n");


printf("\nFUNC_RETURN;;\n");
}




























































ulg crc_32_tab[256] = {(ulg)0L, (ulg)1996959894L, (ulg)3993919788L, (ulg)2567524794L, (ulg)124634137L, (ulg)1886057615L, (ulg)3915621685L, (ulg)2657392035L, (ulg)249268274L, (ulg)2044508324L, (ulg)3772115230L, (ulg)2547177864L, (ulg)162941995L, (ulg)2125561021L, (ulg)3887607047L, (ulg)2428444049L, (ulg)498536548L, (ulg)1789927666L, (ulg)4089016648L, (ulg)2227061214L, (ulg)450548861L, (ulg)1843258603L, (ulg)4107580753L, (ulg)2211677639L, (ulg)325883990L, (ulg)1684777152L, (ulg)4251122042L, (ulg)2321926636L, (ulg)335633487L, (ulg)1661365465L, (ulg)4195302755L, (ulg)2366115317L, (ulg)997073096L, (ulg)1281953886L, (ulg)3579855332L, (ulg)2724688242L, (ulg)1006888145L, (ulg)1258607687L, (ulg)3524101629L, (ulg)2768942443L, (ulg)901097722L, (ulg)1119000684L, (ulg)3686517206L, (ulg)2898065728L, (ulg)853044451L, (ulg)1172266101L, (ulg)3705015759L, (ulg)2882616665L, (ulg)651767980L, (ulg)1373503546L, (ulg)3369554304L, (ulg)3218104598L, (ulg)565507253L, (ulg)1454621731L, (ulg)3485111705L, (ulg)3099436303L, (ulg)671266974L, (ulg)1594198024L, (ulg)3322730930L, (ulg)2970347812L, (ulg)795835527L, (ulg)1483230225L, (ulg)3244367275L, (ulg)3060149565L, (ulg)1994146192L, (ulg)31158534L, (ulg)2563907772L, (ulg)4023717930L, (ulg)1907459465L, (ulg)112637215L, (ulg)2680153253L, (ulg)3904427059L, (ulg)2013776290L, (ulg)251722036L, (ulg)2517215374L, (ulg)3775830040L, (ulg)2137656763L, (ulg)141376813L, (ulg)2439277719L, (ulg)3865271297L, (ulg)1802195444L, (ulg)476864866L, (ulg)2238001368L, (ulg)4066508878L, (ulg)1812370925L, (ulg)453092731L, (ulg)2181625025L, (ulg)4111451223L, (ulg)1706088902L, (ulg)314042704L, (ulg)2344532202L, (ulg)4240017532L, (ulg)1658658271L, (ulg)366619977L, (ulg)2362670323L, (ulg)4224994405L, (ulg)1303535960L, (ulg)984961486L, (ulg)2747007092L, (ulg)3569037538L, (ulg)1256170817L, (ulg)1037604311L, (ulg)2765210733L, (ulg)3554079995L, (ulg)1131014506L, (ulg)879679996L, (ulg)2909243462L, (ulg)3663771856L, (ulg)1141124467L, (ulg)855842277L, (ulg)2852801631L, (ulg)3708648649L, (ulg)1342533948L, (ulg)654459306L, (ulg)3188396048L, (ulg)3373015174L, (ulg)1466479909L, (ulg)544179635L, (ulg)3110523913L, (ulg)3462522015L, (ulg)1591671054L, (ulg)702138776L, (ulg)2966460450L, (ulg)3352799412L, (ulg)1504918807L, (ulg)783551873L, (ulg)3082640443L, (ulg)3233442989L, (ulg)3988292384L, (ulg)2596254646L, (ulg)62317068L, (ulg)1957810842L, (ulg)3939845945L, (ulg)2647816111L, (ulg)81470997L, (ulg)1943803523L, (ulg)3814918930L, (ulg)2489596804L, (ulg)225274430L, (ulg)2053790376L, (ulg)3826175755L, (ulg)2466906013L, (ulg)167816743L, (ulg)2097651377L, (ulg)4027552580L, (ulg)2265490386L, (ulg)503444072L, (ulg)1762050814L, (ulg)4150417245L, (ulg)2154129355L, (ulg)426522225L, (ulg)1852507879L, (ulg)4275313526L, (ulg)2312317920L, (ulg)282753626L, (ulg)1742555852L, (ulg)4189708143L, (ulg)2394877945L, (ulg)397917763L, (ulg)1622183637L, (ulg)3604390888L, (ulg)2714866558L, (ulg)953729732L, (ulg)1340076626L, (ulg)3518719985L, (ulg)2797360999L, (ulg)1068828381L, (ulg)1219638859L, (ulg)3624741850L, (ulg)2936675148L, (ulg)906185462L, (ulg)1090812512L, (ulg)3747672003L, (ulg)2825379669L, (ulg)829329135L, (ulg)1181335161L, (ulg)3412177804L, (ulg)3160834842L, (ulg)628085408L, (ulg)1382605366L, (ulg)3423369109L, (ulg)3138078467L, (ulg)570562233L, (ulg)1426400815L, (ulg)3317316542L, (ulg)2998733608L, (ulg)733239954L, (ulg)1555261956L, (ulg)3268935591L, (ulg)3050360625L, (ulg)752459403L, (ulg)1541320221L, (ulg)2607071920L, (ulg)3965973030L, (ulg)1969922972L, (ulg)40735498L, (ulg)2617837225L, (ulg)3943577151L, (ulg)1913087877L, (ulg)83908371L, (ulg)2512341634L, (ulg)3803740692L, (ulg)2075208622L, (ulg)213261112L, (ulg)2463272603L, (ulg)3855990285L, (ulg)2094854071L, (ulg)198958881L, (ulg)2262029012L, (ulg)4057260610L, (ulg)1759359992L, (ulg)534414190L, (ulg)2176718541L, (ulg)4139329115L, (ulg)1873836001L, (ulg)414664567L, (ulg)2282248934L, (ulg)4279200368L, (ulg)1711684554L, (ulg)285281116L, (ulg)2405801727L, (ulg)4167216745L, (ulg)1634467795L, (ulg)376229701L, (ulg)2685067896L, (ulg)3608007406L, (ulg)1308918612L, (ulg)956543938L, (ulg)2808555105L, (ulg)3495958263L, (ulg)1231636301L, (ulg)1047427035L, (ulg)2932959818L, (ulg)3654703836L, (ulg)1088359270L, (ulg)936918000L, (ulg)2847714899L, (ulg)3736837829L, (ulg)1202900863L, (ulg)817233897L, (ulg)3183342108L, (ulg)3401237130L, (ulg)1404277552L, (ulg)615818150L, (ulg)3134207493L, (ulg)3453421203L, (ulg)1423857449L, (ulg)601450431L, (ulg)3009837614L, (ulg)3294710456L, (ulg)1567103746L, (ulg)711928724L, (ulg)3020668471L, (ulg)3272380065L, (ulg)1510334235L, (ulg)755167117L};
int inflate(void);
int huft_build(unsigned int *b, unsigned int n, unsigned int s, ush *d, ush *e, struct huft **t, int *m);
int huft_free(struct huft *t);
int inflate_codes(struct huft *tl, struct huft *td, int bl, int bd);
int inflate_stored(void);
int inflate_fixed(void);
int inflate_dynamic(void);
int inflate_block(int *e);
static unsigned int border[19] = {16U, 17U, 18U, 0U, 8U, 7U, 9U, 6U, 10U, 5U, 11U, 4U, 12U, 3U, 13U, 2U, 14U, 1U, 15U};
static ush cplens[31] = {(ush)3, (ush)4, (ush)5, (ush)6, (ush)7, (ush)8, (ush)9, (ush)10, (ush)11, (ush)13, (ush)15, (ush)17, (ush)19, (ush)23, (ush)27, (ush)31, (ush)35, (ush)43, (ush)51, (ush)59, (ush)67, (ush)83, (ush)99, (ush)115, (ush)131, (ush)163, (ush)195, (ush)227, (ush)258, (ush)0, (ush)0};
static ush cplext[31] = {(ush)0, (ush)0, (ush)0, (ush)0, (ush)0, (ush)0, (ush)0, (ush)0, (ush)1, (ush)1, (ush)1, (ush)1, (ush)2, (ush)2, (ush)2, (ush)2, (ush)3, (ush)3, (ush)3, (ush)3, (ush)4, (ush)4, (ush)4, (ush)4, (ush)5, (ush)5, (ush)5, (ush)5, (ush)0, (ush)99, (ush)99};
static ush cpdist[30] = {(ush)1, (ush)2, (ush)3, (ush)4, (ush)5, (ush)7, (ush)9, (ush)13, (ush)17, (ush)25, (ush)33, (ush)49, (ush)65, (ush)97, (ush)129, (ush)193, (ush)257, (ush)385, (ush)513, (ush)769, (ush)1025, (ush)1537, (ush)2049, (ush)3073, (ush)4097, (ush)6145, (ush)8193, (ush)12289, (ush)16385, (ush)24577};
static ush cpdext[30] = {(ush)0, (ush)0, (ush)0, (ush)0, (ush)1, (ush)1, (ush)2, (ush)2, (ush)3, (ush)3, (ush)4, (ush)4, (ush)5, (ush)5, (ush)6, (ush)6, (ush)7, (ush)7, (ush)8, (ush)8, (ush)9, (ush)9, (ush)10, (ush)10, (ush)11, (ush)11, (ush)12, (ush)12, (ush)13, (ush)13};
ulg bb;
unsigned int bk;
ush mask_bits[17] = {(ush)0, (ush)1, (ush)3, (ush)7, (ush)15, (ush)31, (ush)63, (ush)127, (ush)255, (ush)511, (ush)1023, (ush)2047, (ush)4095, (ush)8191, (ush)16383, (ush)32767, (ush)65535};

int dbits = 6;

int huft_build(unsigned int *b, unsigned int n, unsigned int s, ush *d, ush *e, struct huft **t, int *m)
{
  printf("\nFUNC_CALL;huft_build(unsigned int *,unsigned int,unsigned int,ush *,ush *,struct huft **,int *);\n");
printf("\nSTMT_EXEC;;2315\n");
unsigned int a;
  printf("\nSTMT_EXEC;;2316\n");
unsigned int c[17];
  printf("\nSTMT_EXEC;;2317\n");
unsigned int f;
  printf("\nSTMT_EXEC;;2318\n");
int g;
  printf("\nSTMT_EXEC;;2319\n");
int h;
  printf("\nSTMT_EXEC;;2320\n");
register unsigned int i___0;
  printf("\nSTMT_EXEC;;2321\n");
register unsigned int j___0;
  printf("\nSTMT_EXEC;;2322\n");
register int k;
  printf("\nSTMT_EXEC;;2323\n");
int l;
  printf("\nSTMT_EXEC;;2324\n");
register unsigned int *p;
  printf("\nSTMT_EXEC;;2325\n");
register struct huft *q;
  printf("\nSTMT_EXEC;;2326\n");
struct huft r;
  printf("\nSTMT_EXEC;;2327\n");
struct huft *u[16];
  printf("\nSTMT_EXEC;;2328\n");
unsigned int v[288];
  printf("\nSTMT_EXEC;;2329\n");
register int w;
  printf("\nSTMT_EXEC;;2330\n");
unsigned int x[17];
  printf("\nSTMT_EXEC;;2331\n");
unsigned int *xp;

  printf("\nSTMT_EXEC;;2333\n");
unsigned int z;
  printf("\nSTMT_EXEC;;2334\n");
unsigned int *tmp;
  printf("\nSTMT_EXEC;;2335\n");
unsigned int *tmp___0;
  printf("\nSTMT_EXEC;;2336\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;2337\n");
unsigned int *tmp___2;
  printf("\nSTMT_EXEC;;2338\n");
int tmp___4;
  printf("\nSTMT_EXEC;;2339\n");
unsigned int *tmp___5;
  printf("\nSTMT_EXEC;;2340\n");
unsigned int tmp___6;
  printf("\nSTMT_EXEC;;2341\n");
int tmp___7;





  {
    {
      printf("\nSTMT_EXEC;;2349\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((voidp)(c), 0, sizeof(c));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2350\n");
p = b;
      printf("\nSTMT_EXEC;;2351\n");
i___0 = n;
    }
    {
      printf("\nSTMT_EXEC;;2354\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2357\n");
(c[*p])++;
        printf("\nSTMT_EXEC;;2358\n");
p++;
        printf("\nSTMT_EXEC;;2359\n");
i___0--;
        printf("\nSTMT_EXEC;;2360\n");
if (!i___0)
        {
          printf("\nSTMT_EXEC;;2362\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }






    printf("\nSTMT_EXEC;;2373\n");
l = *m;
    printf("\nSTMT_EXEC;;2374\n");
j___0 = 1U;
















    printf("\nSTMT_EXEC;;2391\n");
k = (int)j___0;




    printf("\nSTMT_EXEC;;2396\n");
i___0 = 16U;
















    printf("\nSTMT_EXEC;;2413\n");
g = (int)i___0;






























    printf("\nSTMT_EXEC;;2444\n");
j___0 = 0U;

    printf("\nSTMT_EXEC;;2446\n");
p = c + 1;
    printf("\nSTMT_EXEC;;2447\n");
xp = x + 2;
    {
      printf("\nSTMT_EXEC;;2449\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2452\n");
i___0--;
        printf("\nSTMT_EXEC;;2453\n");
if (!i___0)
        {
          printf("\nSTMT_EXEC;;2455\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;2457\n");
tmp = xp;
        printf("\nSTMT_EXEC;;2458\n");
xp++;
        printf("\nSTMT_EXEC;;2459\n");
tmp___0 = p;
        printf("\nSTMT_EXEC;;2460\n");
p++;
        printf("\nSTMT_EXEC;;2461\n");
j___0 += *tmp___0;
        printf("\nSTMT_EXEC;;2462\n");
*tmp = j___0;
      }
    while_break___3: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2466\n");
p = b;

    {
      printf("\nSTMT_EXEC;;2469\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2472\n");
tmp___2 = p;
        printf("\nSTMT_EXEC;;2473\n");
p++;
        printf("\nSTMT_EXEC;;2474\n");
j___0 = *tmp___2;
        printf("\nSTMT_EXEC;;2475\n");
if (j___0 != 0U)
        {
          printf("\nSTMT_EXEC;;2477\n");
tmp___1 = x[j___0];
          printf("\nSTMT_EXEC;;2478\n");
(x[j___0])++;
          printf("\nSTMT_EXEC;;2479\n");
v[tmp___1] = i___0;
        }
        printf("\nSTMT_EXEC;;2481\n");
i___0++;
        printf("\nSTMT_EXEC;;2482\n");
if (!(i___0 < n))
        {
          printf("\nSTMT_EXEC;;2484\n");
goto while_break___4;
        }
      }
    while_break___4: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2489\n");
i___0 = 0U;
    printf("\nSTMT_EXEC;;2490\n");
x[0] = i___0;
    printf("\nSTMT_EXEC;;2491\n");
p = v;
    printf("\nSTMT_EXEC;;2492\n");
h = -1;
    printf("\nSTMT_EXEC;;2493\n");
w = -l;



    {
      printf("\nSTMT_EXEC;;2498\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2501\n");
if (!(k <= g))
        {
          printf("\nSTMT_EXEC;;2503\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;2505\n");
a = c[k];
        {
          printf("\nSTMT_EXEC;;2507\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;2510\n");
tmp___6 = a;
            printf("\nSTMT_EXEC;;2511\n");
a--;
            printf("\nSTMT_EXEC;;2512\n");
if (!tmp___6)
            {
              printf("\nSTMT_EXEC;;2514\n");
goto while_break___6;
            }
            {

              {
                ;
                printf("\nSTMT_EXEC;;2520\n");
if (!(k > w + l))
                {
                  printf("\nSTMT_EXEC;;2522\n");
goto while_break___7;
                }
                printf("\nSTMT_EXEC;;2524\n");
h++;
                printf("\nSTMT_EXEC;;2525\n");
w += l;


                {
                  printf("\nSTMT_EXEC;;2529\n");
z = (unsigned int)l;
                }




                printf("\nSTMT_EXEC;;2535\n");
j___0 = (unsigned int)(k - w);


                {



                  printf("\nSTMT_EXEC;;2542\n");
while (1)
                  {
                    ;
                    printf("\nSTMT_EXEC;;2545\n");
j___0++;
                    printf("\nSTMT_EXEC;;2546\n");
if (!(j___0 < z))
                    {
                      printf("\nSTMT_EXEC;;2548\n");
goto while_break___8;
                    }







                  }
                while_break___8: /* CIL Label */;

                }
                {
                  printf("\nSTMT_EXEC;;2562\n");
z = (unsigned int)(1 << j___0);
                  printf("\nSTMT_EXEC;;2563\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
q = (struct huft *)malloc((unsigned long)(z + 1U) * sizeof(struct huft));printf("\nFUNC_RETURN;;\n");

                }
                printf("\nSTMT_EXEC;;2565\n");
if ((unsigned long)q == (unsigned long)((struct huft *)((void *)0)))
                {






                  printf("\nSTMT_EXEC;;2573\n");
printf("\nFUNC_RETURN;;\n");
return (3);
                }

                printf("\nSTMT_EXEC;;2576\n");
*t = q + 1;
                printf("\nSTMT_EXEC;;2577\n");
t = &q->v.t;

                printf("\nSTMT_EXEC;;2579\n");
q++;
                printf("\nSTMT_EXEC;;2580\n");
u[h] = q;
                printf("\nSTMT_EXEC;;2581\n");
if (h)
                {
                  printf("\nSTMT_EXEC;;2583\n");
x[h] = i___0;
                  printf("\nSTMT_EXEC;;2584\n");
r.b = (uch)l;
                  printf("\nSTMT_EXEC;;2585\n");
r.e = (uch)(16U + j___0);
                  printf("\nSTMT_EXEC;;2586\n");
r.v.t = q;
                  printf("\nSTMT_EXEC;;2587\n");
j___0 = i___0 >> (w - l);
                  printf("\nSTMT_EXEC;;2588\n");
*(u[h - 1] + j___0) = r;
                }
              }
            while_break___7: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;2593\n");
r.b = (uch)(k - w);





            {
              printf("\nSTMT_EXEC;;2600\n");
if (*p < s)
              {
                printf("\nSTMT_EXEC;;2602\n");
if (*p < 256U)
                {
                  printf("\nSTMT_EXEC;;2604\n");
tmp___4 = 16;
                }
                else
                {
                  printf("\nSTMT_EXEC;;2608\n");
tmp___4 = 15;
                }
                printf("\nSTMT_EXEC;;2610\n");
r.e = (uch)tmp___4;
                printf("\nSTMT_EXEC;;2611\n");
r.v.n = (ush)*p;
                printf("\nSTMT_EXEC;;2612\n");
p++;
              }
              else
              {
                printf("\nSTMT_EXEC;;2616\n");
r.e = (uch) * (e + (*p - s));
                printf("\nSTMT_EXEC;;2617\n");
tmp___5 = p;
                printf("\nSTMT_EXEC;;2618\n");
p++;
                printf("\nSTMT_EXEC;;2619\n");
r.v.n = *(d + (*tmp___5 - s));
              }
            }
            printf("\nSTMT_EXEC;;2622\n");
f = (unsigned int)(1 << (k - w));
            printf("\nSTMT_EXEC;;2623\n");
j___0 = i___0 >> w;
            {
              printf("\nSTMT_EXEC;;2625\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;2628\n");
if (!(j___0 < z))
                {
                  printf("\nSTMT_EXEC;;2630\n");
goto while_break___9;
                }
                printf("\nSTMT_EXEC;;2632\n");
*(q + j___0) = r;
                printf("\nSTMT_EXEC;;2633\n");
j___0 += f;
              }
            while_break___9: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;2637\n");
j___0 = (unsigned int)(1 << (k - 1));
            {
              printf("\nSTMT_EXEC;;2639\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;2642\n");
if (!(i___0 & j___0))
                {
                  printf("\nSTMT_EXEC;;2644\n");
goto while_break___10;
                }
                printf("\nSTMT_EXEC;;2646\n");
i___0 ^= j___0;
                printf("\nSTMT_EXEC;;2647\n");
j___0 >>= 1;
              }
            while_break___10: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;2651\n");
i___0 ^= j___0;
            {

              {
                ;
                printf("\nSTMT_EXEC;;2656\n");
if (!((i___0 & (unsigned int)((1 << w) - 1)) != x[h]))
                {
                  printf("\nSTMT_EXEC;;2658\n");
goto while_break___11;
                }
                printf("\nSTMT_EXEC;;2660\n");
h--;
                printf("\nSTMT_EXEC;;2661\n");
w -= l;
              }
            while_break___11: /* CIL Label */;
            }
          }
        while_break___6: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2668\n");
k++;
      }
    while_break___5: /* CIL Label */;
    }







    {
      printf("\nSTMT_EXEC;;2680\n");
tmp___7 = 0;
    }





    printf("\nSTMT_EXEC;;2687\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___7);
  }
printf("\nFUNC_RETURN;;\n");
}


























int inflate_codes(struct huft *tl, struct huft *td, int bl, int bd)
{
  printf("\nFUNC_CALL;inflate_codes(struct huft *,struct huft *,int,int);\n");
printf("\nSTMT_EXEC;;2718\n");
register unsigned int e;
  printf("\nSTMT_EXEC;;2719\n");
unsigned int n;
  printf("\nSTMT_EXEC;;2720\n");
unsigned int d;
  printf("\nSTMT_EXEC;;2721\n");
unsigned int w;
  printf("\nSTMT_EXEC;;2722\n");
struct huft *t;
  printf("\nSTMT_EXEC;;2723\n");
unsigned int ml;
  printf("\nSTMT_EXEC;;2724\n");
unsigned int md;
  printf("\nSTMT_EXEC;;2725\n");
register ulg b;
  printf("\nSTMT_EXEC;;2726\n");
register unsigned int k;
  printf("\nSTMT_EXEC;;2727\n");
unsigned int tmp;

  printf("\nSTMT_EXEC;;2729\n");
int tmp___1;
  printf("\nSTMT_EXEC;;2730\n");
unsigned int tmp___2;

  printf("\nSTMT_EXEC;;2732\n");
int tmp___4;
  printf("\nSTMT_EXEC;;2733\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;2734\n");
unsigned int tmp___6;
  printf("\nSTMT_EXEC;;2735\n");
int tmp___7;
  printf("\nSTMT_EXEC;;2736\n");
int tmp___8;
  printf("\nSTMT_EXEC;;2737\n");
unsigned int tmp___9;

  printf("\nSTMT_EXEC;;2739\n");
int tmp___11;



  printf("\nSTMT_EXEC;;2743\n");
unsigned int tmp___15;

  printf("\nSTMT_EXEC;;2745\n");
int tmp___17;
  printf("\nSTMT_EXEC;;2746\n");
unsigned int tmp___19;
  printf("\nSTMT_EXEC;;2747\n");
unsigned int tmp___20;
  printf("\nSTMT_EXEC;;2748\n");
unsigned int tmp___21;
  {
    printf("\nSTMT_EXEC;;2750\n");
b = bb;
    printf("\nSTMT_EXEC;;2751\n");
k = bk;
    printf("\nSTMT_EXEC;;2752\n");
w = outcnt;
    printf("\nSTMT_EXEC;;2753\n");
ml = (unsigned int)mask_bits[bl];
    printf("\nSTMT_EXEC;;2754\n");
md = (unsigned int)mask_bits[bd];
    {
      printf("\nSTMT_EXEC;;2756\n");
while (1)
      {
        ;
        {

          {
            ;
            printf("\nSTMT_EXEC;;2763\n");
if (!(k < (unsigned int)bl))
            {
              printf("\nSTMT_EXEC;;2765\n");
goto while_break___0;
            }

            {
              printf("\nSTMT_EXEC;;2769\n");
tmp = inptr;
              printf("\nSTMT_EXEC;;2770\n");
inptr++;
              printf("\nSTMT_EXEC;;2771\n");
tmp___1 = (int)inbuf[tmp];
            }







            printf("\nSTMT_EXEC;;2780\n");
b |= (ulg)((uch)tmp___1) << k;
            printf("\nSTMT_EXEC;;2781\n");
k += 8U;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2785\n");
t = tl + ((unsigned int)b & ml);
        printf("\nSTMT_EXEC;;2786\n");
e = (unsigned int)t->e;
        printf("\nSTMT_EXEC;;2787\n");
if (e > 16U)
        {
          {
            ;






            printf("\nSTMT_EXEC;;2797\n");
b >>= (int)t->b;
            printf("\nSTMT_EXEC;;2798\n");
k -= (unsigned int)t->b;
            printf("\nSTMT_EXEC;;2799\n");
e -= 16U;
            {

              {
                ;





                {
                  printf("\nSTMT_EXEC;;2810\n");
tmp___2 = inptr;
                  printf("\nSTMT_EXEC;;2811\n");
inptr++;
                  printf("\nSTMT_EXEC;;2812\n");
tmp___4 = (int)inbuf[tmp___2];
                }







                printf("\nSTMT_EXEC;;2821\n");
b |= (ulg)((uch)tmp___4) << k;
                printf("\nSTMT_EXEC;;2822\n");
k += 8U;
              };

            }
            printf("\nSTMT_EXEC;;2826\n");
t = t->v.t + ((unsigned int)b & (unsigned int)mask_bits[e]);
            printf("\nSTMT_EXEC;;2827\n");
e = (unsigned int)t->e;






          };
        }
        printf("\nSTMT_EXEC;;2836\n");
b >>= (int)t->b;
        printf("\nSTMT_EXEC;;2837\n");
k -= (unsigned int)t->b;
        printf("\nSTMT_EXEC;;2838\n");
if (e == 16U)
        {
          printf("\nSTMT_EXEC;;2840\n");
tmp___5 = w;
          printf("\nSTMT_EXEC;;2841\n");
w++;
          printf("\nSTMT_EXEC;;2842\n");
window[tmp___5] = (uch)t->v.n;
          printf("\nSTMT_EXEC;;2843\n");
if (w == 32768U)
          {


            printf("\nSTMT_EXEC;;2847\n");
flush_window();
            printf("\nSTMT_EXEC;;2848\n");
w = 0U;
          }
        }

        else
        {
          printf("\nSTMT_EXEC;;2854\n");
if (e == 15U)
          {
            printf("\nSTMT_EXEC;;2856\n");
goto while_break;
          }
          {

            {
              ;




              printf("\nSTMT_EXEC;;2866\n");
if (inptr < insize)
              {
                printf("\nSTMT_EXEC;;2868\n");
tmp___6 = inptr;
                printf("\nSTMT_EXEC;;2869\n");
inptr++;
                printf("\nSTMT_EXEC;;2870\n");
tmp___8 = (int)inbuf[tmp___6];
              }
              else
              {

                printf("\nSTMT_EXEC;;2875\n");
tmp___7 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;2876\n");
tmp___8 = tmp___7;
              }

              printf("\nSTMT_EXEC;;2879\n");
b |= (ulg)((uch)tmp___8) << k;
              printf("\nSTMT_EXEC;;2880\n");
k += 8U;
            };

          }
          printf("\nSTMT_EXEC;;2884\n");
n = (unsigned int)t->v.n + ((unsigned int)b & (unsigned int)mask_bits[e]);
          printf("\nSTMT_EXEC;;2885\n");
b >>= e;
          printf("\nSTMT_EXEC;;2886\n");
k -= e;
          {

            {
              ;





              {
                printf("\nSTMT_EXEC;;2897\n");
tmp___9 = inptr;
                printf("\nSTMT_EXEC;;2898\n");
inptr++;
                printf("\nSTMT_EXEC;;2899\n");
tmp___11 = (int)inbuf[tmp___9];
              }







              printf("\nSTMT_EXEC;;2908\n");
b |= (ulg)((uch)tmp___11) << k;
              printf("\nSTMT_EXEC;;2909\n");
k += 8U;
            };

          }
          printf("\nSTMT_EXEC;;2913\n");
t = td + ((unsigned int)b & md);
          printf("\nSTMT_EXEC;;2914\n");
e = (unsigned int)t->e;
          printf("\nSTMT_EXEC;;2915\n");
if (e > 16U)
          {

            printf("\nSTMT_EXEC;;2918\n");
while (1)
            {
              ;




              printf("\nSTMT_EXEC;;2925\n");
b >>= (int)t->b;
              printf("\nSTMT_EXEC;;2926\n");
k -= (unsigned int)t->b;
              printf("\nSTMT_EXEC;;2927\n");
e -= 16U;


























              printf("\nSTMT_EXEC;;2954\n");
t = t->v.t + ((unsigned int)b & (unsigned int)mask_bits[e]);
              printf("\nSTMT_EXEC;;2955\n");
e = (unsigned int)t->e;
              printf("\nSTMT_EXEC;;2956\n");
if (!(e > 16U))
              {
                printf("\nSTMT_EXEC;;2958\n");
goto while_break___5;
              }
            }
          while_break___5: /* CIL Label */;

          }
          printf("\nSTMT_EXEC;;2964\n");
b >>= (int)t->b;
          printf("\nSTMT_EXEC;;2965\n");
k -= (unsigned int)t->b;
          {

            {
              ;
              printf("\nSTMT_EXEC;;2970\n");
if (!(k < e))
              {
                printf("\nSTMT_EXEC;;2972\n");
goto while_break___7;
              }

              {
                printf("\nSTMT_EXEC;;2976\n");
tmp___15 = inptr;
                printf("\nSTMT_EXEC;;2977\n");
inptr++;
                printf("\nSTMT_EXEC;;2978\n");
tmp___17 = (int)inbuf[tmp___15];
              }







              printf("\nSTMT_EXEC;;2987\n");
b |= (ulg)((uch)tmp___17) << k;
              printf("\nSTMT_EXEC;;2988\n");
k += 8U;
            }
          while_break___7: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;2992\n");
d = (w - (unsigned int)t->v.n) - ((unsigned int)b & (unsigned int)mask_bits[e]);
          printf("\nSTMT_EXEC;;2993\n");
b >>= e;
          printf("\nSTMT_EXEC;;2994\n");
k -= e;
          {
            printf("\nSTMT_EXEC;;2996\n");
while (1)
            {
              ;
              printf("\nSTMT_EXEC;;2999\n");
d &= 32767U;
              printf("\nSTMT_EXEC;;3000\n");
if (d > w)
              {
                printf("\nSTMT_EXEC;;3002\n");
tmp___19 = d;
              }
              else
              {
                printf("\nSTMT_EXEC;;3006\n");
tmp___19 = w;
              }
              printf("\nSTMT_EXEC;;3008\n");
e = 32768U - tmp___19;
              printf("\nSTMT_EXEC;;3009\n");
if (e > n)
              {
                printf("\nSTMT_EXEC;;3011\n");
e = n;
              }
              else
              {

              }
              printf("\nSTMT_EXEC;;3017\n");
n -= e;

              {









                printf("\nSTMT_EXEC;;3029\n");
while (1)
                {
                  ;
                  printf("\nSTMT_EXEC;;3032\n");
tmp___20 = w;
                  printf("\nSTMT_EXEC;;3033\n");
w++;
                  printf("\nSTMT_EXEC;;3034\n");
tmp___21 = d;
                  printf("\nSTMT_EXEC;;3035\n");
d++;
                  printf("\nSTMT_EXEC;;3036\n");
window[tmp___20] = window[tmp___21];
                  printf("\nSTMT_EXEC;;3037\n");
e--;
                  printf("\nSTMT_EXEC;;3038\n");
if (!e)
                  {
                    printf("\nSTMT_EXEC;;3040\n");
goto while_break___9;
                  }
                }
              while_break___9: /* CIL Label */;
              }

              printf("\nSTMT_EXEC;;3046\n");
if (w == 32768U)
              {

                printf("\nSTMT_EXEC;;3049\n");
outcnt = w;
                printf("\nSTMT_EXEC;;3050\n");
flush_window();
                printf("\nSTMT_EXEC;;3051\n");
w = 0U;
              }

              printf("\nSTMT_EXEC;;3054\n");
if (!n)
              {
                printf("\nSTMT_EXEC;;3056\n");
goto while_break___8;
              }
            }
          while_break___8: /* CIL Label */;
          }
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3065\n");
outcnt = w;
    printf("\nSTMT_EXEC;;3066\n");
bb = b;
    printf("\nSTMT_EXEC;;3067\n");
bk = k;
    printf("\nSTMT_EXEC;;3068\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}






























































































































































































































































int inflate_dynamic(void)
{
  printf("\nFUNC_CALL;inflate_dynamic();\n");
printf("\nSTMT_EXEC;;3327\n");
int i___0;
  printf("\nSTMT_EXEC;;3328\n");
unsigned int j___0;
  printf("\nSTMT_EXEC;;3329\n");
unsigned int l;
  printf("\nSTMT_EXEC;;3330\n");
unsigned int m;
  printf("\nSTMT_EXEC;;3331\n");
unsigned int n;
  printf("\nSTMT_EXEC;;3332\n");
struct huft *tl;
  printf("\nSTMT_EXEC;;3333\n");
struct huft *td;
  printf("\nSTMT_EXEC;;3334\n");
int bl;
  printf("\nSTMT_EXEC;;3335\n");
int bd;
  printf("\nSTMT_EXEC;;3336\n");
unsigned int nb;
  printf("\nSTMT_EXEC;;3337\n");
unsigned int nl;
  printf("\nSTMT_EXEC;;3338\n");
unsigned int nd;
  printf("\nSTMT_EXEC;;3339\n");
unsigned int ll[316];
  printf("\nSTMT_EXEC;;3340\n");
register ulg b;
  printf("\nSTMT_EXEC;;3341\n");
register unsigned int k;
  printf("\nSTMT_EXEC;;3342\n");
unsigned int tmp;

  printf("\nSTMT_EXEC;;3344\n");
int tmp___1;



  printf("\nSTMT_EXEC;;3348\n");
unsigned int tmp___5;

  printf("\nSTMT_EXEC;;3350\n");
int tmp___7;
  printf("\nSTMT_EXEC;;3351\n");
unsigned int tmp___8;

  printf("\nSTMT_EXEC;;3353\n");
int tmp___10;
  printf("\nSTMT_EXEC;;3354\n");
unsigned int tmp___11;

  printf("\nSTMT_EXEC;;3356\n");
int tmp___13;
  printf("\nSTMT_EXEC;;3357\n");
int tmp___14;



  printf("\nSTMT_EXEC;;3361\n");
int tmp___18;
  printf("\nSTMT_EXEC;;3362\n");
unsigned int tmp___19;










  printf("\nSTMT_EXEC;;3373\n");
int tmp___30;

  {
    printf("\nSTMT_EXEC;;3376\n");
b = bb;
    printf("\nSTMT_EXEC;;3377\n");
k = bk;
    {

      {
        ;





        {
          printf("\nSTMT_EXEC;;3388\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;3389\n");
inptr++;
          printf("\nSTMT_EXEC;;3390\n");
tmp___1 = (int)inbuf[tmp];
        }







        printf("\nSTMT_EXEC;;3399\n");
b |= (ulg)((uch)tmp___1) << k;
        printf("\nSTMT_EXEC;;3400\n");
k += 8U;
      };

    }
    printf("\nSTMT_EXEC;;3404\n");
nl = 257U + ((unsigned int)b & 31U);
    printf("\nSTMT_EXEC;;3405\n");
b >>= 5;
    printf("\nSTMT_EXEC;;3406\n");
k -= 5U;


























    printf("\nSTMT_EXEC;;3433\n");
nd = 1U + ((unsigned int)b & 31U);
    printf("\nSTMT_EXEC;;3434\n");
b >>= 5;
    printf("\nSTMT_EXEC;;3435\n");
k -= 5U;
    {

      {
        ;





        {
          printf("\nSTMT_EXEC;;3446\n");
tmp___5 = inptr;
          printf("\nSTMT_EXEC;;3447\n");
inptr++;
          printf("\nSTMT_EXEC;;3448\n");
tmp___7 = (int)inbuf[tmp___5];
        }







        printf("\nSTMT_EXEC;;3457\n");
b |= (ulg)((uch)tmp___7) << k;
        printf("\nSTMT_EXEC;;3458\n");
k += 8U;
      };

    }
    printf("\nSTMT_EXEC;;3462\n");
nb = 4U + ((unsigned int)b & 15U);
    printf("\nSTMT_EXEC;;3463\n");
b >>= 4;
    printf("\nSTMT_EXEC;;3464\n");
k -= 4U;











    printf("\nSTMT_EXEC;;3476\n");
j___0 = 0U;
    {
      printf("\nSTMT_EXEC;;3478\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3481\n");
if (!(j___0 < nb))
        {
          printf("\nSTMT_EXEC;;3483\n");
goto while_break___2;
        }
        {

          {
            ;
            printf("\nSTMT_EXEC;;3489\n");
if (!(k < 3U))
            {
              printf("\nSTMT_EXEC;;3491\n");
goto while_break___3;
            }

            {
              printf("\nSTMT_EXEC;;3495\n");
tmp___8 = inptr;
              printf("\nSTMT_EXEC;;3496\n");
inptr++;
              printf("\nSTMT_EXEC;;3497\n");
tmp___10 = (int)inbuf[tmp___8];
            }







            printf("\nSTMT_EXEC;;3506\n");
b |= (ulg)((uch)tmp___10) << k;
            printf("\nSTMT_EXEC;;3507\n");
k += 8U;
          }
        while_break___3: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;3511\n");
ll[border[j___0]] = (unsigned int)b & 7U;
        printf("\nSTMT_EXEC;;3512\n");
b >>= 3;
        printf("\nSTMT_EXEC;;3513\n");
k -= 3U;
        printf("\nSTMT_EXEC;;3514\n");
j___0++;
      }
    while_break___2: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3519\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3522\n");
if (!(j___0 < 19U))
        {
          printf("\nSTMT_EXEC;;3524\n");
goto while_break___4;
        }
        printf("\nSTMT_EXEC;;3526\n");
ll[border[j___0]] = 0U;
        printf("\nSTMT_EXEC;;3527\n");
j___0++;
      }
    while_break___4: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3532\n");
bl = 7;
      printf("\nSTMT_EXEC;;3533\n");
i___0 = huft_build(ll, 19U, 19U, (ush *)((void *)0), (ush *)((void *)0), &tl, &bl);
    }
    printf("\nSTMT_EXEC;;3535\n");
if (i___0 != 0)
    {






      printf("\nSTMT_EXEC;;3543\n");
printf("\nFUNC_RETURN;;\n");
return (i___0);
    }
    printf("\nSTMT_EXEC;;3545\n");
n = nl + nd;
    printf("\nSTMT_EXEC;;3546\n");
m = (unsigned int)mask_bits[bl];


    {
      printf("\nSTMT_EXEC;;3550\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3553\n");
if (!((unsigned int)i___0 < n))
        {
          printf("\nSTMT_EXEC;;3555\n");
goto while_break___5;
        }
        {

          {
            ;
            printf("\nSTMT_EXEC;;3561\n");
if (!(k < (unsigned int)bl))
            {
              printf("\nSTMT_EXEC;;3563\n");
goto while_break___6;
            }

            {
              printf("\nSTMT_EXEC;;3567\n");
tmp___11 = inptr;
              printf("\nSTMT_EXEC;;3568\n");
inptr++;
              printf("\nSTMT_EXEC;;3569\n");
tmp___13 = (int)inbuf[tmp___11];
            }







            printf("\nSTMT_EXEC;;3578\n");
b |= (ulg)((uch)tmp___13) << k;
            printf("\nSTMT_EXEC;;3579\n");
k += 8U;
          }
        while_break___6: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;3583\n");
td = tl + ((unsigned int)b & m);
        printf("\nSTMT_EXEC;;3584\n");
j___0 = (unsigned int)td->b;
        printf("\nSTMT_EXEC;;3585\n");
b >>= j___0;
        printf("\nSTMT_EXEC;;3586\n");
k -= j___0;
        printf("\nSTMT_EXEC;;3587\n");
j___0 = (unsigned int)td->v.n;
        printf("\nSTMT_EXEC;;3588\n");
if (j___0 < 16U)
        {
          printf("\nSTMT_EXEC;;3590\n");
tmp___14 = i___0;
          printf("\nSTMT_EXEC;;3591\n");
i___0++;
          printf("\nSTMT_EXEC;;3592\n");
l = j___0;
          printf("\nSTMT_EXEC;;3593\n");
ll[tmp___14] = l;
        }
        else
        {




























          printf("\nSTMT_EXEC;;3625\n");
j___0 = 3U + ((unsigned int)b & 3U);
          printf("\nSTMT_EXEC;;3626\n");
b >>= 2;
          printf("\nSTMT_EXEC;;3627\n");
k -= 2U;




          {
            printf("\nSTMT_EXEC;;3633\n");
while (1)
            {
              ;
              printf("\nSTMT_EXEC;;3636\n");
tmp___19 = j___0;
              printf("\nSTMT_EXEC;;3637\n");
j___0--;
              printf("\nSTMT_EXEC;;3638\n");
if (!tmp___19)
              {
                printf("\nSTMT_EXEC;;3640\n");
goto while_break___8;
              }
              printf("\nSTMT_EXEC;;3642\n");
tmp___18 = i___0;
              printf("\nSTMT_EXEC;;3643\n");
i___0++;
              printf("\nSTMT_EXEC;;3644\n");
ll[tmp___18] = l;
            }
          while_break___8: /* CIL Label */;
          }
        }














































































































      }
    while_break___5: /* CIL Label */;
    }
    {

      printf("\nSTMT_EXEC;;3764\n");
bb = b;
      printf("\nSTMT_EXEC;;3765\n");
bk = k;

      printf("\nSTMT_EXEC;;3767\n");
i___0 = huft_build(ll, nl, 257U, cplens, cplext, &tl, &bl);
    }











    {
      printf("\nSTMT_EXEC;;3781\n");
bd = dbits;
      printf("\nSTMT_EXEC;;3782\n");
i___0 = huft_build(ll + nl, nd, 0U, cpdist, cpdext, &td, &bd);
    }














    {
      printf("\nSTMT_EXEC;;3799\n");
tmp___30 = inflate_codes(tl, td, bl, bd);
    }








    printf("\nSTMT_EXEC;;3809\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int inflate_block(int *e)
{

  printf("\nFUNC_CALL;inflate_block(int *);\n");
printf("\nSTMT_EXEC;;3815\n");
register ulg b;
  printf("\nSTMT_EXEC;;3816\n");
register unsigned int k;
  printf("\nSTMT_EXEC;;3817\n");
unsigned int tmp;

  printf("\nSTMT_EXEC;;3819\n");
int tmp___1;



  printf("\nSTMT_EXEC;;3823\n");
int tmp___5;


  {
    printf("\nSTMT_EXEC;;3827\n");
b = bb;
    printf("\nSTMT_EXEC;;3828\n");
k = bk;
    {

      {
        ;





        {
          printf("\nSTMT_EXEC;;3839\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;3840\n");
inptr++;
          printf("\nSTMT_EXEC;;3841\n");
tmp___1 = (int)inbuf[tmp];
        }







        printf("\nSTMT_EXEC;;3850\n");
b |= (ulg)((uch)tmp___1) << k;
        printf("\nSTMT_EXEC;;3851\n");
k += 8U;
      };

    }
    printf("\nSTMT_EXEC;;3855\n");
*e = (int)b & 1;
    printf("\nSTMT_EXEC;;3856\n");
b >>= 1;
    printf("\nSTMT_EXEC;;3857\n");
k--;



























    printf("\nSTMT_EXEC;;3885\n");
b >>= 2;
    printf("\nSTMT_EXEC;;3886\n");
k -= 2U;
    printf("\nSTMT_EXEC;;3887\n");
bb = b;
    printf("\nSTMT_EXEC;;3888\n");
bk = k;

    {
      {
        printf("\nSTMT_EXEC;;3892\n");
tmp___5 = inflate_dynamic();
      }
      printf("\nSTMT_EXEC;;3894\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___5);
    }















  }
printf("\nFUNC_RETURN;;\n");
}
int inflate(void)
{
  printf("\nFUNC_CALL;inflate();\n");
printf("\nSTMT_EXEC;;3915\n");
int e;
  printf("\nSTMT_EXEC;;3916\n");
int r;

  {




    {
      printf("\nSTMT_EXEC;;3924\n");
while (1)
      {
        ;
        {

          printf("\nSTMT_EXEC;;3929\n");
r = inflate_block(&e);
        }
        printf("\nSTMT_EXEC;;3931\n");
if (r != 0)
        {
          printf("\nSTMT_EXEC;;3933\n");
printf("\nFUNC_RETURN;;\n");
return (r);
        }




        printf("\nSTMT_EXEC;;3939\n");
if (!(!e))
        {
          printf("\nSTMT_EXEC;;3941\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    {














      printf("\nSTMT_EXEC;;3961\n");
flush_window();
    }

  }
printf("\nFUNC_RETURN;;\n");
}
int method;

int unzip(int in, int out);
int check_zipfile(int in);


























































int unzip(int in, int out)
{





  printf("\nFUNC_CALL;unzip(int,int);\n");
printf("\nSTMT_EXEC;;4035\n");
int tmp;























  {
    {



      printf("\nSTMT_EXEC;;4064\n");
ofd = out;

    }









    {
      {
        printf("\nSTMT_EXEC;;4078\n");
tmp = inflate();

      }

      {

        printf("\nSTMT_EXEC;;4084\n");
error((char *)"out of memory");
      }
    }
















































































































































































































    printf("\nSTMT_EXEC;;4295\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int file_read(char *buf, unsigned int size);
void bi_init(file_t zipfile);
void send_bits(int value, int length);
unsigned int bi_reverse(unsigned int code, int len);
void bi_windup(void);
void copy_block(char *buf, unsigned int len, int header);
int (*read_buf)(char *buf, unsigned int size);

static unsigned short bi_buf;
static int bi_valid;
void bi_init(file_t zipfile)
{






  printf("\nFUNC_CALL;bi_init(file_t);\n");
printf("\nSTMT_EXEC;;4316\n");
read_buf = &file_read;



printf("\nFUNC_RETURN;;\n");
}
void send_bits(int value, int length)
{


  printf("\nFUNC_CALL;send_bits(int,int);\n");
printf("\nSTMT_EXEC;;4325\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;4326\n");
unsigned int tmp___2;
  {
    printf("\nSTMT_EXEC;;4328\n");
if (bi_valid > (int)(16UL * sizeof(char)) - length)
    {
      printf("\nSTMT_EXEC;;4330\n");
bi_buf = (unsigned short)((int)bi_buf | (value << bi_valid));










      {
        printf("\nSTMT_EXEC;;4342\n");
tmp___1 = outcnt;
        printf("\nSTMT_EXEC;;4343\n");
outcnt++;
        printf("\nSTMT_EXEC;;4344\n");
outbuf[tmp___1] = (uch)((int)bi_buf & 255);






        printf("\nSTMT_EXEC;;4351\n");
tmp___2 = outcnt;
        printf("\nSTMT_EXEC;;4352\n");
outcnt++;
        printf("\nSTMT_EXEC;;4353\n");
outbuf[tmp___2] = (uch)((int)bi_buf >> 8);

        {

          printf("\nSTMT_EXEC;;4357\n");
flush_outbuf();

        }
      }
      printf("\nSTMT_EXEC;;4361\n");
bi_buf = (unsigned short)((int)((ush)value) >> (16UL * sizeof(char) - (unsigned long)bi_valid));
      printf("\nSTMT_EXEC;;4362\n");
bi_valid = (int)((unsigned long)bi_valid + ((unsigned long)length - 16UL * sizeof(char)));
    }
    else
    {
      printf("\nSTMT_EXEC;;4366\n");
bi_buf = (unsigned short)((int)bi_buf | (value << bi_valid));
      printf("\nSTMT_EXEC;;4367\n");
bi_valid += length;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
unsigned int bi_reverse(unsigned int code, int len)
{
  printf("\nFUNC_CALL;bi_reverse(unsigned int,int);\n");
printf("\nSTMT_EXEC;;4374\n");
register unsigned int res;
  {
    printf("\nSTMT_EXEC;;4376\n");
res = 0U;
    {
      printf("\nSTMT_EXEC;;4378\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4381\n");
res |= code & 1U;
        printf("\nSTMT_EXEC;;4382\n");
code >>= 1;
        printf("\nSTMT_EXEC;;4383\n");
res <<= 1;
        printf("\nSTMT_EXEC;;4384\n");
len--;
        printf("\nSTMT_EXEC;;4385\n");
if (!(len > 0))
        {
          printf("\nSTMT_EXEC;;4387\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4392\n");
printf("\nFUNC_RETURN;;\n");
return (res >> 1);
  }
printf("\nFUNC_RETURN;;\n");
}
void bi_windup(void)
{




  printf("\nFUNC_CALL;bi_windup();\n");
printf("\nSTMT_EXEC;;4401\n");
unsigned int tmp___3;
  {





































    printf("\nSTMT_EXEC;;4440\n");
tmp___3 = outcnt;
    printf("\nSTMT_EXEC;;4441\n");
outcnt++;
    printf("\nSTMT_EXEC;;4442\n");
outbuf[tmp___3] = (uch)bi_buf;




  }
printf("\nFUNC_RETURN;;\n");
}


















































































































int level;
void ct_init(ush *attr, int *methodp);
int ct_tally(int dist, int lc);
ulg flush_block(char *buf, ulg stored_len, int eof);
static int extra_lbits[29] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0};
static int extra_dbits[30] = {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13};
static int extra_blbits[19] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 7};
static ct_data dyn_ltree[573];
static ct_data dyn_dtree[61];
static ct_data static_ltree[288];
static ct_data static_dtree[30];
static ct_data bl_tree[39];
static tree_desc l_desc = {dyn_ltree, static_ltree, extra_lbits, 257, 286, 15, 0};
static tree_desc d_desc = {dyn_dtree, static_dtree, extra_dbits, 0, 30, 15, 0};
static tree_desc bl_desc = {bl_tree, (ct_data *)0, extra_blbits, 0, 19, 7, 0};
static ush bl_count[16];
static uch bl_order[19] = {(uch)16, (uch)17, (uch)18, (uch)0, (uch)8, (uch)7, (uch)9, (uch)6, (uch)10, (uch)5, (uch)11, (uch)4, (uch)12, (uch)3, (uch)13, (uch)2, (uch)14, (uch)1, (uch)15};
static int heap[573];
static int heap_len;
static int heap_max;
static uch depth[573];
static uch length_code[256];
static uch dist_code[512];
static int base_length[29];
static int base_dist[30];
static uch flag_buf[4096];
static unsigned int last_lit;
static unsigned int last_dist;
static unsigned int last_flags;
static uch flags;
static uch flag_bit;


static ulg compressed_len;



long block_start;
unsigned int strstart;
static void init_block(void);
static void pqdownheap(ct_data *tree, int k);
static void gen_bitlen(tree_desc *desc);
static void gen_codes(ct_data *tree, int max_code);
static void build_tree___0(tree_desc *desc);
static void scan_tree(ct_data *tree, int max_code);
static void send_tree(ct_data *tree, int max_code);
static int build_bl_tree(void);
static void send_all_trees(int lcodes, int dcodes, int blcodes);
static void compress_block(ct_data *ltree, ct_data *dtree);
static void set_file_type(void);
void ct_init(ush *attr, int *methodp)
{
  printf("\nFUNC_CALL;ct_init(ush *,int *);\n");
printf("\nSTMT_EXEC;;4615\n");
int n;

  printf("\nSTMT_EXEC;;4617\n");
int length;
  printf("\nSTMT_EXEC;;4618\n");
int code;
  printf("\nSTMT_EXEC;;4619\n");
int dist;
  printf("\nSTMT_EXEC;;4620\n");
int tmp;
  printf("\nSTMT_EXEC;;4621\n");
int tmp___0;
  printf("\nSTMT_EXEC;;4622\n");
int tmp___1;




  {








    printf("\nSTMT_EXEC;;4636\n");
length = 0;
    printf("\nSTMT_EXEC;;4637\n");
code = 0;
    {
      printf("\nSTMT_EXEC;;4639\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4642\n");
if (!(code < 28))
        {
          printf("\nSTMT_EXEC;;4644\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;4646\n");
base_length[code] = length;
        printf("\nSTMT_EXEC;;4647\n");
n = 0;
        {
          printf("\nSTMT_EXEC;;4649\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4652\n");
if (!(n < 1 << extra_lbits[code]))
            {
              printf("\nSTMT_EXEC;;4654\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;4656\n");
tmp = length;
            printf("\nSTMT_EXEC;;4657\n");
length++;
            printf("\nSTMT_EXEC;;4658\n");
length_code[tmp] = (uch)code;
            printf("\nSTMT_EXEC;;4659\n");
n++;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4663\n");
code++;
      }
    while_break: /* CIL Label */;
    }

    printf("\nSTMT_EXEC;;4668\n");
dist = 0;
    printf("\nSTMT_EXEC;;4669\n");
code = 0;
    {
      printf("\nSTMT_EXEC;;4671\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4674\n");
if (!(code < 16))
        {
          printf("\nSTMT_EXEC;;4676\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;4678\n");
base_dist[code] = dist;
        printf("\nSTMT_EXEC;;4679\n");
n = 0;
        {
          printf("\nSTMT_EXEC;;4681\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4684\n");
if (!(n < 1 << extra_dbits[code]))
            {
              printf("\nSTMT_EXEC;;4686\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;4688\n");
tmp___0 = dist;
            printf("\nSTMT_EXEC;;4689\n");
dist++;
            printf("\nSTMT_EXEC;;4690\n");
dist_code[tmp___0] = (uch)code;
            printf("\nSTMT_EXEC;;4691\n");
n++;
          }
        while_break___2: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4695\n");
code++;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4699\n");
dist >>= 7;
    {
      printf("\nSTMT_EXEC;;4701\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4704\n");
if (!(code < 30))
        {
          printf("\nSTMT_EXEC;;4706\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;4708\n");
base_dist[code] = dist << 7;
        printf("\nSTMT_EXEC;;4709\n");
n = 0;
        {
          printf("\nSTMT_EXEC;;4711\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4714\n");
if (!(n < 1 << (extra_dbits[code] - 7)))
            {
              printf("\nSTMT_EXEC;;4716\n");
goto while_break___4;
            }
            printf("\nSTMT_EXEC;;4718\n");
tmp___1 = dist;
            printf("\nSTMT_EXEC;;4719\n");
dist++;
            printf("\nSTMT_EXEC;;4720\n");
dist_code[256 + tmp___1] = (uch)code;
            printf("\nSTMT_EXEC;;4721\n");
n++;
          }
        while_break___4: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4725\n");
code++;
      }
    while_break___3: /* CIL Label */;
    }































































































    {
      printf("\nSTMT_EXEC;;4825\n");
init_block();
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void init_block(void)
{
  printf("\nFUNC_CALL;init_block();\n");
printf("\nSTMT_EXEC;;4832\n");
int n;
  {
    printf("\nSTMT_EXEC;;4834\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;4836\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4839\n");
if (!(n < 286))
        {
          printf("\nSTMT_EXEC;;4841\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;4843\n");
dyn_ltree[n].fc.freq = (ush)0;
        printf("\nSTMT_EXEC;;4844\n");
n++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4848\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;4850\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4853\n");
if (!(n < 30))
        {
          printf("\nSTMT_EXEC;;4855\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;4857\n");
dyn_dtree[n].fc.freq = (ush)0;
        printf("\nSTMT_EXEC;;4858\n");
n++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4862\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;4864\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4867\n");
if (!(n < 19))
        {
          printf("\nSTMT_EXEC;;4869\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;4871\n");
bl_tree[n].fc.freq = (ush)0;
        printf("\nSTMT_EXEC;;4872\n");
n++;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4876\n");
dyn_ltree[256].fc.freq = (ush)1;


    printf("\nSTMT_EXEC;;4879\n");
last_flags = 0U;
    printf("\nSTMT_EXEC;;4880\n");
last_dist = last_flags;
    printf("\nSTMT_EXEC;;4881\n");
last_lit = last_dist;



  }
printf("\nFUNC_RETURN;;\n");
}
static void pqdownheap(ct_data *tree, int k)
{
  printf("\nFUNC_CALL;pqdownheap(ct_data *,int);\n");
printf("\nSTMT_EXEC;;4889\n");
int v;
  printf("\nSTMT_EXEC;;4890\n");
int j___0;
  {
    printf("\nSTMT_EXEC;;4892\n");
v = heap[k];
    printf("\nSTMT_EXEC;;4893\n");
j___0 = k << 1;
    {
      printf("\nSTMT_EXEC;;4895\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4898\n");
if (!(j___0 <= heap_len))
        {
          printf("\nSTMT_EXEC;;4900\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;4902\n");
if (j___0 < heap_len)
        {
          printf("\nSTMT_EXEC;;4904\n");
if ((int)(tree + heap[j___0 + 1])->fc.freq < (int)(tree + heap[j___0])->fc.freq)
          {
            printf("\nSTMT_EXEC;;4906\n");
j___0++;
          }
          else
          {
            printf("\nSTMT_EXEC;;4910\n");
if ((int)(tree + heap[j___0 + 1])->fc.freq == (int)(tree + heap[j___0])->fc.freq)
            {
              printf("\nSTMT_EXEC;;4912\n");
if ((int)depth[heap[j___0 + 1]] <= (int)depth[heap[j___0]])
              {
                printf("\nSTMT_EXEC;;4914\n");
j___0++;
              }
            }
          }
        }
        printf("\nSTMT_EXEC;;4919\n");
if ((int)(tree + v)->fc.freq < (int)(tree + heap[j___0])->fc.freq)
        {
          printf("\nSTMT_EXEC;;4921\n");
goto while_break;
        }
        else
        {
          printf("\nSTMT_EXEC;;4925\n");
if ((int)(tree + v)->fc.freq == (int)(tree + heap[j___0])->fc.freq)
          {
            printf("\nSTMT_EXEC;;4927\n");
if ((int)depth[v] <= (int)depth[heap[j___0]])
            {
              printf("\nSTMT_EXEC;;4929\n");
goto while_break;
            }
          }
        }
        printf("\nSTMT_EXEC;;4933\n");
heap[k] = heap[j___0];
        printf("\nSTMT_EXEC;;4934\n");
k = j___0;
        printf("\nSTMT_EXEC;;4935\n");
j___0 <<= 1;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4939\n");
heap[k] = v;

  }
printf("\nFUNC_RETURN;;\n");
}
static void gen_bitlen(tree_desc *desc)
{
  printf("\nFUNC_CALL;gen_bitlen(tree_desc *);\n");
printf("\nSTMT_EXEC;;4945\n");
ct_data *tree;


  printf("\nSTMT_EXEC;;4948\n");
int max_code;


  printf("\nSTMT_EXEC;;4951\n");
int h;
  printf("\nSTMT_EXEC;;4952\n");
int n;

  printf("\nSTMT_EXEC;;4954\n");
int bits;



  {
    printf("\nSTMT_EXEC;;4959\n");
tree = desc->dyn_tree;


    printf("\nSTMT_EXEC;;4962\n");
max_code = desc->max_code;



    printf("\nSTMT_EXEC;;4966\n");
bits = 0;
    {
      printf("\nSTMT_EXEC;;4968\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4971\n");
if (!(bits <= 15))
        {
          printf("\nSTMT_EXEC;;4973\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;4975\n");
bl_count[bits] = (ush)0;
        printf("\nSTMT_EXEC;;4976\n");
bits++;
      }
    while_break: /* CIL Label */;
    }

    printf("\nSTMT_EXEC;;4981\n");
h = heap_max + 1;
    {
      printf("\nSTMT_EXEC;;4983\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4986\n");
if (!(h < 573))
        {
          printf("\nSTMT_EXEC;;4988\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;4990\n");
n = heap[h];
        printf("\nSTMT_EXEC;;4991\n");
bits = (int)(tree + (int)(tree + n)->dl.dad)->dl.len + 1;





        printf("\nSTMT_EXEC;;4997\n");
(tree + n)->dl.len = (ush)bits;
        printf("\nSTMT_EXEC;;4998\n");
if (n > max_code)
        {
          printf("\nSTMT_EXEC;;5000\n");
goto __Cont;
        }
        printf("\nSTMT_EXEC;;5002\n");
bl_count[bits] = (ush)((int)bl_count[bits] + 1);











      __Cont:
        {
printf("\nSTMT_EXEC;;5015\n");
h++;
}

      }
    while_break___0: /* CIL Label */;
    }






































































  }
printf("\nFUNC_RETURN;;\n");
}
static void gen_codes(ct_data *tree, int max_code)
{
  printf("\nFUNC_CALL;gen_codes(ct_data *,int);\n");
printf("\nSTMT_EXEC;;5093\n");
ush next_code[16];
  printf("\nSTMT_EXEC;;5094\n");
ush code;
  printf("\nSTMT_EXEC;;5095\n");
int bits;
  printf("\nSTMT_EXEC;;5096\n");
int n;
  printf("\nSTMT_EXEC;;5097\n");
int len;
  printf("\nSTMT_EXEC;;5098\n");
ush tmp;

  {

    printf("\nSTMT_EXEC;;5102\n");
bits = 1;
    {
      printf("\nSTMT_EXEC;;5104\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5107\n");
if (!(bits <= 15))
        {
          printf("\nSTMT_EXEC;;5109\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5111\n");
code = (ush)(((int)code + (int)bl_count[bits - 1]) << 1);
        printf("\nSTMT_EXEC;;5112\n");
next_code[bits] = code;
        printf("\nSTMT_EXEC;;5113\n");
bits++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5117\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;5119\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5122\n");
if (!(n <= max_code))
        {
          printf("\nSTMT_EXEC;;5124\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;5126\n");
len = (int)(tree + n)->dl.len;




        {
          printf("\nSTMT_EXEC;;5132\n");
tmp = next_code[len];
          printf("\nSTMT_EXEC;;5133\n");
next_code[len] = (ush)((int)next_code[len] + 1);
          printf("\nSTMT_EXEC;;5134\n");
(tree + n)->fc.code = (ush)bi_reverse((unsigned int)tmp, len);
        }

        printf("\nSTMT_EXEC;;5137\n");
n++;
      }
    while_break___0: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void build_tree___0(tree_desc *desc)
{
  printf("\nFUNC_CALL;build_tree___0(tree_desc *);\n");
printf("\nSTMT_EXEC;;5146\n");
ct_data *tree;

  printf("\nSTMT_EXEC;;5148\n");
int elems;
  printf("\nSTMT_EXEC;;5149\n");
int n;
  printf("\nSTMT_EXEC;;5150\n");
int m;
  printf("\nSTMT_EXEC;;5151\n");
int max_code;
  printf("\nSTMT_EXEC;;5152\n");
int node;


  printf("\nSTMT_EXEC;;5155\n");
int tmp___0;
  printf("\nSTMT_EXEC;;5156\n");
int tmp___1;
  printf("\nSTMT_EXEC;;5157\n");
ush tmp___2;
  printf("\nSTMT_EXEC;;5158\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;5160\n");
tree = desc->dyn_tree;

    printf("\nSTMT_EXEC;;5162\n");
elems = desc->elems;

    printf("\nSTMT_EXEC;;5164\n");
node = elems;
    printf("\nSTMT_EXEC;;5165\n");
heap_len = 0;
    printf("\nSTMT_EXEC;;5166\n");
heap_max = 573;
    printf("\nSTMT_EXEC;;5167\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;5169\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5172\n");
if (!(n < elems))
        {
          printf("\nSTMT_EXEC;;5174\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5176\n");
if ((int)(tree + n)->fc.freq != 0)
        {
          printf("\nSTMT_EXEC;;5178\n");
heap_len++;
          printf("\nSTMT_EXEC;;5179\n");
max_code = n;
          printf("\nSTMT_EXEC;;5180\n");
heap[heap_len] = max_code;

        }
        else
        {
          printf("\nSTMT_EXEC;;5185\n");
(tree + n)->dl.len = (ush)0;
        }
        printf("\nSTMT_EXEC;;5187\n");
n++;
      }
    while_break: /* CIL Label */;
    }






























    printf("\nSTMT_EXEC;;5221\n");
desc->max_code = max_code;

    {
      printf("\nSTMT_EXEC;;5224\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5227\n");
if (!(n >= 1))
        {
          printf("\nSTMT_EXEC;;5229\n");
goto while_break___1;
        }
        {
          printf("\nSTMT_EXEC;;5232\n");
pqdownheap(tree, n);
          printf("\nSTMT_EXEC;;5233\n");
n--;
        }
      }
    while_break___1: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;5239\n");
while (1)
      {
        ;
        {
          printf("\nSTMT_EXEC;;5243\n");
n = heap[1];
          printf("\nSTMT_EXEC;;5244\n");
tmp___0 = heap_len;
          printf("\nSTMT_EXEC;;5245\n");
heap_len--;
          printf("\nSTMT_EXEC;;5246\n");
heap[1] = heap[tmp___0];
          printf("\nSTMT_EXEC;;5247\n");
pqdownheap(tree, 1);
          printf("\nSTMT_EXEC;;5248\n");
m = heap[1];
          printf("\nSTMT_EXEC;;5249\n");
heap_max--;
          printf("\nSTMT_EXEC;;5250\n");
heap[heap_max] = n;
          printf("\nSTMT_EXEC;;5251\n");
heap_max--;
          printf("\nSTMT_EXEC;;5252\n");
heap[heap_max] = m;
          printf("\nSTMT_EXEC;;5253\n");
(tree + node)->fc.freq = (ush)((int)(tree + n)->fc.freq + (int)(tree + m)->fc.freq);
        }

        {
          printf("\nSTMT_EXEC;;5257\n");
tmp___1 = (int)depth[n];
        }




        {
          printf("\nSTMT_EXEC;;5264\n");
depth[node] = (uch)(tmp___1 + 1);
          printf("\nSTMT_EXEC;;5265\n");
tmp___2 = (ush)node;
          printf("\nSTMT_EXEC;;5266\n");
(tree + m)->dl.dad = tmp___2;
          printf("\nSTMT_EXEC;;5267\n");
(tree + n)->dl.dad = tmp___2;
          printf("\nSTMT_EXEC;;5268\n");
tmp___3 = node;
          printf("\nSTMT_EXEC;;5269\n");
node++;
          printf("\nSTMT_EXEC;;5270\n");
heap[1] = tmp___3;
          printf("\nSTMT_EXEC;;5271\n");
pqdownheap(tree, 1);
        }
        printf("\nSTMT_EXEC;;5273\n");
if (!(heap_len >= 2))
        {
          printf("\nSTMT_EXEC;;5275\n");
goto while_break___2;
        }
      }
    while_break___2: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;5281\n");
heap_max--;

      printf("\nSTMT_EXEC;;5283\n");
gen_bitlen(desc);
      printf("\nSTMT_EXEC;;5284\n");
gen_codes(tree, max_code);
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void scan_tree(ct_data *tree, int max_code)
{
  printf("\nFUNC_CALL;scan_tree(ct_data *,int);\n");
printf("\nSTMT_EXEC;;5291\n");
int n;

  printf("\nSTMT_EXEC;;5293\n");
int curlen;
  printf("\nSTMT_EXEC;;5294\n");
int nextlen;
  printf("\nSTMT_EXEC;;5295\n");
int count;
  printf("\nSTMT_EXEC;;5296\n");
int max_count;
  printf("\nSTMT_EXEC;;5297\n");
int min_count;
  {

    printf("\nSTMT_EXEC;;5300\n");
nextlen = (int)(tree + 0)->dl.len;
    printf("\nSTMT_EXEC;;5301\n");
count = 0;
    printf("\nSTMT_EXEC;;5302\n");
max_count = 7;
    printf("\nSTMT_EXEC;;5303\n");
min_count = 4;






    printf("\nSTMT_EXEC;;5310\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;5312\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5315\n");
if (!(n <= max_code))
        {
          printf("\nSTMT_EXEC;;5317\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5319\n");
curlen = nextlen;
        printf("\nSTMT_EXEC;;5320\n");
nextlen = (int)(tree + (n + 1))->dl.len;
        printf("\nSTMT_EXEC;;5321\n");
count++;
        printf("\nSTMT_EXEC;;5322\n");
if (count < max_count)
        {
          printf("\nSTMT_EXEC;;5324\n");
if (curlen == nextlen)
          {
            printf("\nSTMT_EXEC;;5326\n");
goto __Cont;
          }
          else
          {
            printf("\nSTMT_EXEC;;5330\n");
goto _L;
          }
        }
        else
        {
        _L:
          {
printf("\nSTMT_EXEC;;5336\n");
if (count < min_count)
          {
            printf("\nSTMT_EXEC;;5338\n");
bl_tree[curlen].fc.freq = (ush)((int)bl_tree[curlen].fc.freq + count);
          }
          else
          {



            {
              printf("\nSTMT_EXEC;;5346\n");
bl_tree[curlen].fc.freq = (ush)((int)bl_tree[curlen].fc.freq + 1);
            }
            printf("\nSTMT_EXEC;;5348\n");
bl_tree[16].fc.freq = (ush)((int)bl_tree[16].fc.freq + 1);
          }
}













        }
        printf("\nSTMT_EXEC;;5363\n");
count = 0;



















      __Cont:
        {
printf("\nSTMT_EXEC;;5384\n");
n++;
}

      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void send_tree(ct_data *tree, int max_code)
{
  printf("\nFUNC_CALL;send_tree(ct_data *,int);\n");
printf("\nSTMT_EXEC;;5393\n");
int n;

  printf("\nSTMT_EXEC;;5395\n");
int curlen;
  printf("\nSTMT_EXEC;;5396\n");
int nextlen;
  printf("\nSTMT_EXEC;;5397\n");
int count;
  printf("\nSTMT_EXEC;;5398\n");
int max_count;
  printf("\nSTMT_EXEC;;5399\n");
int min_count;
  {

    printf("\nSTMT_EXEC;;5402\n");
nextlen = (int)(tree + 0)->dl.len;
    printf("\nSTMT_EXEC;;5403\n");
count = 0;
    printf("\nSTMT_EXEC;;5404\n");
max_count = 7;
    printf("\nSTMT_EXEC;;5405\n");
min_count = 4;





    printf("\nSTMT_EXEC;;5411\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;5413\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5416\n");
if (!(n <= max_code))
        {
          printf("\nSTMT_EXEC;;5418\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5420\n");
curlen = nextlen;
        printf("\nSTMT_EXEC;;5421\n");
nextlen = (int)(tree + (n + 1))->dl.len;
        printf("\nSTMT_EXEC;;5422\n");
count++;
        printf("\nSTMT_EXEC;;5423\n");
if (count < max_count)
        {
          printf("\nSTMT_EXEC;;5425\n");
if (curlen == nextlen)
          {
            printf("\nSTMT_EXEC;;5427\n");
goto __Cont;
          }
          else
          {
            printf("\nSTMT_EXEC;;5431\n");
goto _L;
          }
        }
        else
        {
        _L:
          {
printf("\nSTMT_EXEC;;5437\n");
if (count < min_count)
          {

            printf("\nSTMT_EXEC;;5440\n");
while (1)
            {
              ;
              {
                printf("\nSTMT_EXEC;;5444\n");
send_bits((int)bl_tree[curlen].fc.code, (int)bl_tree[curlen].dl.len);
                printf("\nSTMT_EXEC;;5445\n");
count--;
              }
              printf("\nSTMT_EXEC;;5447\n");
if (!(count != 0))
              {
                printf("\nSTMT_EXEC;;5449\n");
goto while_break___0;
              }
            }
          while_break___0: /* CIL Label */;
          }

          else
          {

            {



              printf("\nSTMT_EXEC;;5462\n");
send_bits((int)bl_tree[curlen].fc.code, (int)bl_tree[curlen].dl.len);
              printf("\nSTMT_EXEC;;5463\n");
count--;
            }

            {
              printf("\nSTMT_EXEC;;5467\n");
send_bits((int)bl_tree[16].fc.code, (int)bl_tree[16].dl.len);
              printf("\nSTMT_EXEC;;5468\n");
send_bits(count - 3, 2);
            }
          }
}



















        }
        printf("\nSTMT_EXEC;;5490\n");
count = 0;



















      __Cont:
        {
printf("\nSTMT_EXEC;;5511\n");
n++;
}

      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static int build_bl_tree(void)
{
  printf("\nFUNC_CALL;build_bl_tree();\n");
printf("\nSTMT_EXEC;;5520\n");
int max_blindex;
  {
    {
      printf("\nSTMT_EXEC;;5523\n");
scan_tree(dyn_ltree, l_desc.max_code);
      printf("\nSTMT_EXEC;;5524\n");
scan_tree(dyn_dtree, d_desc.max_code);
      printf("\nSTMT_EXEC;;5525\n");
build_tree___0(&bl_desc);
      printf("\nSTMT_EXEC;;5526\n");
max_blindex = 18;
    }
    {
      printf("\nSTMT_EXEC;;5529\n");
while (1)
      {
        ;




        printf("\nSTMT_EXEC;;5536\n");
if ((int)bl_tree[bl_order[max_blindex]].dl.len != 0)
        {
          printf("\nSTMT_EXEC;;5538\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5540\n");
max_blindex--;
      }
    while_break: /* CIL Label */;
    }

    printf("\nSTMT_EXEC;;5545\n");
printf("\nFUNC_RETURN;;\n");
return (max_blindex);
  }
printf("\nFUNC_RETURN;;\n");
}
static void send_all_trees(int lcodes, int dcodes, int blcodes)
{
  printf("\nFUNC_CALL;send_all_trees(int,int,int);\n");
printf("\nSTMT_EXEC;;5550\n");
int rank;
  {
    {
      printf("\nSTMT_EXEC;;5553\n");
send_bits(lcodes - 257, 5);
      printf("\nSTMT_EXEC;;5554\n");
send_bits(dcodes - 1, 5);
      printf("\nSTMT_EXEC;;5555\n");
send_bits(blcodes - 4, 4);
      printf("\nSTMT_EXEC;;5556\n");
rank = 0;
    }
    {
      printf("\nSTMT_EXEC;;5559\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5562\n");
if (!(rank < blcodes))
        {
          printf("\nSTMT_EXEC;;5564\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;5567\n");
send_bits((int)bl_tree[bl_order[rank]].dl.len, 3);
          printf("\nSTMT_EXEC;;5568\n");
rank++;
        }
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;5574\n");
send_tree(dyn_ltree, lcodes - 1);
      printf("\nSTMT_EXEC;;5575\n");
send_tree(dyn_dtree, dcodes - 1);
    }

  }
printf("\nFUNC_RETURN;;\n");
}
ulg flush_block(char *buf, ulg stored_len, int eof)
{


  printf("\nFUNC_CALL;flush_block(char *,ulg,int);\n");
printf("\nSTMT_EXEC;;5584\n");
int max_blindex;
  {
    printf("\nSTMT_EXEC;;5586\n");
flag_buf[last_flags] = flags;






    {
      printf("\nSTMT_EXEC;;5594\n");
build_tree___0(&l_desc);
      printf("\nSTMT_EXEC;;5595\n");
build_tree___0(&d_desc);
      printf("\nSTMT_EXEC;;5596\n");
max_blindex = build_bl_tree();



    }

    {





















































      printf("\nSTMT_EXEC;;5656\n");
send_bits((2 << 1) + eof, 3);
      printf("\nSTMT_EXEC;;5657\n");
send_all_trees(l_desc.max_code + 1, d_desc.max_code + 1, max_blindex + 1);
      printf("\nSTMT_EXEC;;5658\n");
compress_block(dyn_ltree, dyn_dtree);




    }
    {
      printf("\nSTMT_EXEC;;5665\n");
init_block();
    }
    printf("\nSTMT_EXEC;;5667\n");
if (eof)
    {

      printf("\nSTMT_EXEC;;5670\n");
bi_windup();


    }
    printf("\nSTMT_EXEC;;5674\n");
printf("\nFUNC_RETURN;;\n");
return (compressed_len >> 3);
  }
printf("\nFUNC_RETURN;;\n");
}
int ct_tally(int dist, int lc)
{
  printf("\nFUNC_CALL;ct_tally(int,int);\n");
printf("\nSTMT_EXEC;;5679\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;5680\n");
int tmp___0;
  printf("\nSTMT_EXEC;;5681\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;5682\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;5683\n");
ulg out_length;
  printf("\nSTMT_EXEC;;5684\n");
ulg in_length;
  printf("\nSTMT_EXEC;;5685\n");
int dcode;
  printf("\nSTMT_EXEC;;5686\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;5688\n");
tmp = last_lit;
    printf("\nSTMT_EXEC;;5689\n");
last_lit++;
    printf("\nSTMT_EXEC;;5690\n");
inbuf[tmp] = (uch)lc;
    printf("\nSTMT_EXEC;;5691\n");
if (dist == 0)
    {
      printf("\nSTMT_EXEC;;5693\n");
dyn_ltree[lc].fc.freq = (ush)((int)dyn_ltree[lc].fc.freq + 1);
    }
    else
    {
      printf("\nSTMT_EXEC;;5697\n");
dist--;
      printf("\nSTMT_EXEC;;5698\n");
dyn_ltree[((int)length_code[lc] + 256) + 1].fc.freq = (ush)((int)dyn_ltree[((int)length_code[lc] + 256) + 1].fc.freq + 1);
      printf("\nSTMT_EXEC;;5699\n");
if (dist < 256)
      {
        printf("\nSTMT_EXEC;;5701\n");
tmp___0 = (int)dist_code[dist];
      }
      else
      {
        printf("\nSTMT_EXEC;;5705\n");
tmp___0 = (int)dist_code[256 + (dist >> 7)];
      }
      printf("\nSTMT_EXEC;;5707\n");
dyn_dtree[tmp___0].fc.freq = (ush)((int)dyn_dtree[tmp___0].fc.freq + 1);
      printf("\nSTMT_EXEC;;5708\n");
tmp___1 = last_dist;
      printf("\nSTMT_EXEC;;5709\n");
last_dist++;
      printf("\nSTMT_EXEC;;5710\n");
d_buf[tmp___1] = (ush)dist;
      printf("\nSTMT_EXEC;;5711\n");
flags = (uch)((int)flags | (int)flag_bit);
    }
    printf("\nSTMT_EXEC;;5713\n");
flag_bit = (uch)((int)flag_bit << 1);
    printf("\nSTMT_EXEC;;5714\n");
if ((last_lit & 7U) == 0U)
    {
      printf("\nSTMT_EXEC;;5716\n");
tmp___2 = last_flags;
      printf("\nSTMT_EXEC;;5717\n");
last_flags++;
      printf("\nSTMT_EXEC;;5718\n");
flag_buf[tmp___2] = flags;
      printf("\nSTMT_EXEC;;5719\n");
flags = (uch)0;
      printf("\nSTMT_EXEC;;5720\n");
flag_bit = (uch)1;
    }

    {
      printf("\nSTMT_EXEC;;5724\n");
if ((last_lit & 4095U) == 0U)
      {
        printf("\nSTMT_EXEC;;5726\n");
out_length = (ulg)last_lit * 8UL;
        printf("\nSTMT_EXEC;;5727\n");
in_length = (ulg)strstart - (ulg)block_start;
        printf("\nSTMT_EXEC;;5728\n");
dcode = 0;
        {
          printf("\nSTMT_EXEC;;5730\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;5733\n");
if (!(dcode < 30))
            {
              printf("\nSTMT_EXEC;;5735\n");
goto while_break;
            }
            printf("\nSTMT_EXEC;;5737\n");
out_length += (ulg)dyn_dtree[dcode].fc.freq * (ulg)(5L + (long)extra_dbits[dcode]);
            printf("\nSTMT_EXEC;;5738\n");
dcode++;
          }
        while_break: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;5742\n");
out_length >>= 3;
        printf("\nSTMT_EXEC;;5743\n");
if (last_dist < last_lit / 2U)
        {
          printf("\nSTMT_EXEC;;5745\n");
if (out_length < in_length / 2UL)
          {
            printf("\nSTMT_EXEC;;5747\n");
printf("\nFUNC_RETURN;;\n");
return (1);
          }
        }
      }
    }

    {










      printf("\nSTMT_EXEC;;5764\n");
tmp___3 = 0;

    }
    printf("\nSTMT_EXEC;;5767\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___3);
  }
printf("\nFUNC_RETURN;;\n");
}
static void compress_block(ct_data *ltree, ct_data *dtree)
{
  printf("\nFUNC_CALL;compress_block(ct_data *,ct_data *);\n");
printf("\nSTMT_EXEC;;5772\n");
unsigned int dist;
  printf("\nSTMT_EXEC;;5773\n");
int lc;
  printf("\nSTMT_EXEC;;5774\n");
unsigned int lx;
  printf("\nSTMT_EXEC;;5775\n");
unsigned int dx;
  printf("\nSTMT_EXEC;;5776\n");
unsigned int fx;
  printf("\nSTMT_EXEC;;5777\n");
uch flag;
  printf("\nSTMT_EXEC;;5778\n");
unsigned int code;
  printf("\nSTMT_EXEC;;5779\n");
int extra;
  printf("\nSTMT_EXEC;;5780\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;5781\n");
unsigned int tmp___0;
  printf("\nSTMT_EXEC;;5782\n");
unsigned int tmp___1;
  {
    printf("\nSTMT_EXEC;;5784\n");
lx = 0U;
    printf("\nSTMT_EXEC;;5785\n");
dx = 0U;
    printf("\nSTMT_EXEC;;5786\n");
fx = 0U;


    {

      printf("\nSTMT_EXEC;;5791\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5794\n");
if ((lx & 7U) == 0U)
        {
          printf("\nSTMT_EXEC;;5796\n");
tmp = fx;
          printf("\nSTMT_EXEC;;5797\n");
fx++;
          printf("\nSTMT_EXEC;;5798\n");
flag = flag_buf[tmp];
        }
        printf("\nSTMT_EXEC;;5800\n");
tmp___0 = lx;
        printf("\nSTMT_EXEC;;5801\n");
lx++;
        printf("\nSTMT_EXEC;;5802\n");
lc = (int)inbuf[tmp___0];
        printf("\nSTMT_EXEC;;5803\n");
if (((int)flag & 1) == 0)
        {

          printf("\nSTMT_EXEC;;5806\n");
send_bits((int)(ltree + lc)->fc.code, (int)(ltree + lc)->dl.len);
        }

        else
        {
          {
            printf("\nSTMT_EXEC;;5812\n");
code = (unsigned int)length_code[lc];
            printf("\nSTMT_EXEC;;5813\n");
send_bits((int)(ltree + ((code + 256U) + 1U))->fc.code, (int)(ltree + ((code + 256U) + 1U))->dl.len);
            printf("\nSTMT_EXEC;;5814\n");
extra = extra_lbits[code];
          }

          {

            printf("\nSTMT_EXEC;;5819\n");
lc -= base_length[code];
            printf("\nSTMT_EXEC;;5820\n");
send_bits(lc, extra);

          }
          printf("\nSTMT_EXEC;;5823\n");
tmp___1 = dx;
          printf("\nSTMT_EXEC;;5824\n");
dx++;
          printf("\nSTMT_EXEC;;5825\n");
dist = (unsigned int)d_buf[tmp___1];
          printf("\nSTMT_EXEC;;5826\n");
if (dist < 256U)
          {
            printf("\nSTMT_EXEC;;5828\n");
code = (unsigned int)dist_code[dist];
          }
          else
          {
            printf("\nSTMT_EXEC;;5832\n");
code = (unsigned int)dist_code[256U + (dist >> 7)];
          }
          {
            printf("\nSTMT_EXEC;;5835\n");
send_bits((int)(dtree + code)->fc.code, (int)(dtree + code)->dl.len);
            printf("\nSTMT_EXEC;;5836\n");
extra = extra_dbits[code];
          }

          {

            printf("\nSTMT_EXEC;;5841\n");
dist -= (unsigned int)base_dist[code];
            printf("\nSTMT_EXEC;;5842\n");
send_bits((int)dist, extra);
          }
        }

        printf("\nSTMT_EXEC;;5846\n");
flag = (uch)((int)flag >> 1);
        printf("\nSTMT_EXEC;;5847\n");
if (!(lx < last_lit))
        {
          printf("\nSTMT_EXEC;;5849\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }

    {
      printf("\nSTMT_EXEC;;5856\n");
send_bits((int)(ltree + 256)->fc.code, (int)(ltree + 256)->dl.len);
    }

  }
printf("\nFUNC_RETURN;;\n");
}

































































void lm_init(int pack_level, ush *flags___0);
ulg deflate(void);
ulg window_size = 65536UL;
static unsigned int ins_h;
unsigned int prev_length;
unsigned int match_start;

static unsigned int lookahead;
unsigned int max_chain_length;
static unsigned int max_lazy_match;

unsigned int good_match;

static config configuration_table[10] = {{(ush)0, (ush)0, (ush)0, (ush)0}, {(ush)4, (ush)4, (ush)8, (ush)4}, {(ush)4, (ush)5, (ush)16, (ush)8}, {(ush)4, (ush)6, (ush)32, (ush)32}, {(ush)4, (ush)4, (ush)16, (ush)16}, {(ush)8, (ush)16, (ush)32, (ush)32}, {(ush)8, (ush)16, (ush)128, (ush)128}, {(ush)8, (ush)32, (ush)128, (ush)256}, {(ush)32, (ush)128, (ush)258, (ush)1024}, {(ush)32, (ush)258, (ush)258, (ush)4096}};
static void fill_window(void);
static ulg deflate_fast(void);
int longest_match(IPos cur_match);
void lm_init(int pack_level, ush *flags___0)
{

  printf("\nFUNC_CALL;lm_init(int,ush *);\n");
printf("\nSTMT_EXEC;;5946\n");
unsigned int tmp;


  {

    {
















      printf("\nSTMT_EXEC;;5968\n");
max_lazy_match = (unsigned int)configuration_table[pack_level].max_lazy;
      printf("\nSTMT_EXEC;;5969\n");
good_match = (unsigned int)configuration_table[pack_level].good_length;

      printf("\nSTMT_EXEC;;5971\n");
max_chain_length = (unsigned int)configuration_table[pack_level].max_chain;
    }














    {
      printf("\nSTMT_EXEC;;5988\n");
tmp = 32768U;
    }




    {
      printf("\nSTMT_EXEC;;5995\n");
lookahead = (unsigned int)(*read_buf)((char *)(window), tmp);
    }





















































  }
printf("\nFUNC_RETURN;;\n");
}
int longest_match(IPos cur_match)
{
  printf("\nFUNC_CALL;longest_match(IPos);\n");
printf("\nSTMT_EXEC;;6054\n");
unsigned int chain_length;
  printf("\nSTMT_EXEC;;6055\n");
register uch *scan;
  printf("\nSTMT_EXEC;;6056\n");
register uch *match;
  printf("\nSTMT_EXEC;;6057\n");
register int len;
  printf("\nSTMT_EXEC;;6058\n");
int best_len;
  printf("\nSTMT_EXEC;;6059\n");
IPos limit;
  printf("\nSTMT_EXEC;;6060\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;6061\n");
register uch *strend;


  {
    printf("\nSTMT_EXEC;;6065\n");
chain_length = max_chain_length;
    printf("\nSTMT_EXEC;;6066\n");
scan = window + strstart;
    printf("\nSTMT_EXEC;;6067\n");
best_len = (int)prev_length;
    printf("\nSTMT_EXEC;;6068\n");
if (strstart > 32506U)
    {
      printf("\nSTMT_EXEC;;6070\n");
tmp = strstart - 32506U;
    }
    else
    {
      printf("\nSTMT_EXEC;;6074\n");
tmp = 0U;
    }
    printf("\nSTMT_EXEC;;6076\n");
limit = tmp;
    printf("\nSTMT_EXEC;;6077\n");
strend = (window + strstart) + 258;


    printf("\nSTMT_EXEC;;6080\n");
if (prev_length >= good_match)
    {
      printf("\nSTMT_EXEC;;6082\n");
chain_length >>= 2;
    }
    {
      printf("\nSTMT_EXEC;;6085\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;6088\n");
match = window + cur_match;

        {










          printf("\nSTMT_EXEC;;6101\n");
if ((int)*match != (int)*scan)
          {
            printf("\nSTMT_EXEC;;6103\n");
goto __Cont;
          }
          else
          {
            printf("\nSTMT_EXEC;;6107\n");
match++;





          }
        }
        printf("\nSTMT_EXEC;;6115\n");
scan += 2;
        printf("\nSTMT_EXEC;;6116\n");
match++;
        {
          printf("\nSTMT_EXEC;;6118\n");
while (1)
          {
            ;
            {
              printf("\nSTMT_EXEC;;6122\n");
if ((int)*scan == (int)*match)
              {
                printf("\nSTMT_EXEC;;6124\n");
scan++;
                printf("\nSTMT_EXEC;;6125\n");
match++;


































              }
              else
              {
                printf("\nSTMT_EXEC;;6163\n");
goto while_break___0;
              }
            }


































          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;6203\n");
len = 258 - (int)(strend - scan);
        printf("\nSTMT_EXEC;;6204\n");
scan = strend - 258;
        printf("\nSTMT_EXEC;;6205\n");
if (len > best_len)
        {
          printf("\nSTMT_EXEC;;6207\n");
match_start = cur_match;
          printf("\nSTMT_EXEC;;6208\n");
best_len = len;






        }
      __Cont:
        {
printf("\nSTMT_EXEC;;6217\n");
cur_match = (IPos)prev[cur_match & 32767U];
}

        printf("\nSTMT_EXEC;;6218\n");
if (cur_match > limit)
        {
          printf("\nSTMT_EXEC;;6220\n");
chain_length--;
          printf("\nSTMT_EXEC;;6221\n");
if (!(chain_length != 0U))
          {
            printf("\nSTMT_EXEC;;6223\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;6228\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;6233\n");
printf("\nFUNC_RETURN;;\n");
return (best_len);
  }
printf("\nFUNC_RETURN;;\n");
}
static void fill_window(void)
{
  printf("\nFUNC_CALL;fill_window();\n");
printf("\nSTMT_EXEC;;6238\n");
register unsigned int n;
  printf("\nSTMT_EXEC;;6239\n");
register unsigned int m;
  printf("\nSTMT_EXEC;;6240\n");
unsigned int more;
  printf("\nSTMT_EXEC;;6241\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;6242\n");
unsigned int tmp___0;
  {
    printf("\nSTMT_EXEC;;6244\n");
more = (unsigned int)((window_size - (ulg)lookahead) - (ulg)strstart);





    {
      printf("\nSTMT_EXEC;;6251\n");
if (strstart >= 65274U)
      {
        {
          printf("\nSTMT_EXEC;;6254\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void * /* __restrict  */)((char *)(window)), (void const * /* __restrict  */)((char *)(window) + 32768), (size_t)32768U);printf("\nFUNC_RETURN;;\n");


          printf("\nSTMT_EXEC;;6256\n");
strstart -= 32768U;

          printf("\nSTMT_EXEC;;6258\n");
n = 0U;
        }
        {
          printf("\nSTMT_EXEC;;6261\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;6264\n");
if (!(n < (unsigned int)(1 << 15)))
            {
              printf("\nSTMT_EXEC;;6266\n");
goto while_break;
            }
            printf("\nSTMT_EXEC;;6268\n");
m = (unsigned int)*((prev + 32768) + n);

            {
              printf("\nSTMT_EXEC;;6271\n");
tmp = m - 32768U;
            }




            printf("\nSTMT_EXEC;;6277\n");
*((prev + 32768) + n) = (Pos)tmp;
            printf("\nSTMT_EXEC;;6278\n");
n++;
          }
        while_break: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;6282\n");
n = 0U;
        {
          printf("\nSTMT_EXEC;;6284\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;6287\n");
if (!(n < 32768U))
            {
              printf("\nSTMT_EXEC;;6289\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;6291\n");
m = (unsigned int)prev[n];

            {
              printf("\nSTMT_EXEC;;6294\n");
tmp___0 = m - 32768U;
            }




            printf("\nSTMT_EXEC;;6300\n");
prev[n] = (Pos)tmp___0;
            printf("\nSTMT_EXEC;;6301\n");
n++;
          }
        while_break___0: /* CIL Label */;
        }

      }
    }

    {
      {
        printf("\nSTMT_EXEC;;6311\n");
n = (unsigned int)(*read_buf)(((char *)(window) + strstart) + lookahead, more);
      }

      {










        printf("\nSTMT_EXEC;;6325\n");
lookahead += n;
      }
    }
  }

printf("\nFUNC_RETURN;;\n");
}






































































































































ulg deflate(void)
{
  printf("\nFUNC_CALL;deflate();\n");
printf("\nSTMT_EXEC;;6467\n");
IPos hash_head;
  printf("\nSTMT_EXEC;;6468\n");
IPos prev_match;
  printf("\nSTMT_EXEC;;6469\n");
int flush;
  printf("\nSTMT_EXEC;;6470\n");
int match_available;
  printf("\nSTMT_EXEC;;6471\n");
register unsigned int match_length;


  printf("\nSTMT_EXEC;;6474\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;6475\n");
int tmp___2;
  printf("\nSTMT_EXEC;;6476\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;6477\n");
ulg tmp___4;
  {
    printf("\nSTMT_EXEC;;6479\n");
match_available = 0;
    printf("\nSTMT_EXEC;;6480\n");
match_length = 2U;







    {
      printf("\nSTMT_EXEC;;6489\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;6492\n");
if (!(lookahead != 0U))
        {
          printf("\nSTMT_EXEC;;6494\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;6496\n");
ins_h = ((ins_h << 5) ^ (unsigned int)window[(strstart + 3U) - 1U]) & ((unsigned int)(1 << 15) - 1U);
        printf("\nSTMT_EXEC;;6497\n");
hash_head = (IPos) * ((prev + 32768) + ins_h);
        printf("\nSTMT_EXEC;;6498\n");
prev[strstart & 32767U] = (ush)hash_head;
        printf("\nSTMT_EXEC;;6499\n");
*((prev + 32768) + ins_h) = (ush)strstart;
        printf("\nSTMT_EXEC;;6500\n");
prev_length = match_length;
        printf("\nSTMT_EXEC;;6501\n");
prev_match = match_start;

        printf("\nSTMT_EXEC;;6503\n");
if (hash_head != 0U)
        {
          printf("\nSTMT_EXEC;;6505\n");
if (prev_length < max_lazy_match)
          {
            printf("\nSTMT_EXEC;;6507\n");
if (strstart - hash_head <= 32506U)
            {
              {
                printf("\nSTMT_EXEC;;6510\n");
match_length = (unsigned int)longest_match(hash_head);
              }




              printf("\nSTMT_EXEC;;6516\n");
if (match_length == 3U)
              {
                printf("\nSTMT_EXEC;;6518\n");
if (strstart - match_start > 4096U)
                {
                  printf("\nSTMT_EXEC;;6520\n");
match_length--;
                }
              }
            }
          }
        }
        printf("\nSTMT_EXEC;;6526\n");
if (prev_length >= 3U)
        {
          printf("\nSTMT_EXEC;;6528\n");
if (match_length <= prev_length)
          {
            {
              printf("\nSTMT_EXEC;;6531\n");
flush = ct_tally((int)((strstart - 1U) - prev_match), (int)(prev_length - 3U));
              printf("\nSTMT_EXEC;;6532\n");
lookahead -= prev_length - 1U;
              printf("\nSTMT_EXEC;;6533\n");
prev_length -= 2U;
            }
            {
              printf("\nSTMT_EXEC;;6536\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;6539\n");
strstart++;
                printf("\nSTMT_EXEC;;6540\n");
ins_h = ((ins_h << 5) ^ (unsigned int)window[(strstart + 3U) - 1U]) & ((unsigned int)(1 << 15) - 1U);
                printf("\nSTMT_EXEC;;6541\n");
hash_head = (IPos) * ((prev + 32768) + ins_h);
                printf("\nSTMT_EXEC;;6542\n");
prev[strstart & 32767U] = (ush)hash_head;
                printf("\nSTMT_EXEC;;6543\n");
*((prev + 32768) + ins_h) = (ush)strstart;
                printf("\nSTMT_EXEC;;6544\n");
prev_length--;
                printf("\nSTMT_EXEC;;6545\n");
if (!(prev_length != 0U))
                {
                  printf("\nSTMT_EXEC;;6547\n");
goto while_break___0;
                }
              }
            while_break___0: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;6552\n");
match_available = 0;
            printf("\nSTMT_EXEC;;6553\n");
match_length = 2U;
            printf("\nSTMT_EXEC;;6554\n");
strstart++;





          }
          else
          {










            printf("\nSTMT_EXEC;;6573\n");
goto _L;
          }
        }
        else
        {
        _L:
          {
printf("\nSTMT_EXEC;;6579\n");
if (match_available)
          {
            {
              printf("\nSTMT_EXEC;;6582\n");
tmp___2 = ct_tally(0, (int)window[strstart - 1U]);
            }
            printf("\nSTMT_EXEC;;6584\n");
if (tmp___2)
            {

              {
                printf("\nSTMT_EXEC;;6588\n");
tmp___1 = (char *)(&window[(unsigned int)block_start]);
              }




              {
                printf("\nSTMT_EXEC;;6595\n");
flush_block(tmp___1, (ulg)((long)strstart - block_start), 0);

              }
            }
            printf("\nSTMT_EXEC;;6599\n");
strstart++;
            printf("\nSTMT_EXEC;;6600\n");
lookahead--;
          }
          else
          {
            printf("\nSTMT_EXEC;;6604\n");
match_available = 1;
            printf("\nSTMT_EXEC;;6605\n");
strstart++;
            printf("\nSTMT_EXEC;;6606\n");
lookahead--;
          }
}

        }
        {

          {
            ;











            {
              printf("\nSTMT_EXEC;;6625\n");
fill_window();
            }
          };

        }
      }
    while_break: /* CIL Label */;
    }







    {
      printf("\nSTMT_EXEC;;6641\n");
tmp___3 = (char *)(&window[(unsigned int)block_start]);
    }




    {
      printf("\nSTMT_EXEC;;6648\n");
tmp___4 = flush_block(tmp___3, (ulg)((long)strstart - block_start), 1);
    }
    printf("\nSTMT_EXEC;;6650\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___4);
  }
printf("\nFUNC_RETURN;;\n");
}

long time_stamp;

int zip(int in, int out);
static ulg crc___0;
int zip(int in, int out)
{

  printf("\nFUNC_CALL;zip(int,int);\n");
printf("\nSTMT_EXEC;;6661\n");
ush attr;
  printf("\nSTMT_EXEC;;6662\n");
ush deflate_flags;
  printf("\nSTMT_EXEC;;6663\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;6664\n");
unsigned int tmp___0;
  printf("\nSTMT_EXEC;;6665\n");
unsigned int tmp___1;

  printf("\nSTMT_EXEC;;6667\n");
unsigned int tmp___3;
  printf("\nSTMT_EXEC;;6668\n");
unsigned int tmp___4;


  printf("\nSTMT_EXEC;;6671\n");
unsigned int tmp___7;
  printf("\nSTMT_EXEC;;6672\n");
unsigned int tmp___8;



  printf("\nSTMT_EXEC;;6676\n");
unsigned int tmp___12;




  printf("\nSTMT_EXEC;;6681\n");
unsigned int tmp___16;
  printf("\nSTMT_EXEC;;6682\n");
unsigned int tmp___17;


  printf("\nSTMT_EXEC;;6685\n");
unsigned int tmp___20;
  printf("\nSTMT_EXEC;;6686\n");
unsigned int tmp___21;


  printf("\nSTMT_EXEC;;6689\n");
unsigned int tmp___24;
  printf("\nSTMT_EXEC;;6690\n");
unsigned int tmp___25;


  printf("\nSTMT_EXEC;;6693\n");
unsigned int tmp___28;





  {




    printf("\nSTMT_EXEC;;6704\n");
ofd = out;


    printf("\nSTMT_EXEC;;6707\n");
tmp = outcnt;
    printf("\nSTMT_EXEC;;6708\n");
outcnt++;
    printf("\nSTMT_EXEC;;6709\n");
outbuf[tmp] = (uch) * ("\037\213" + 0);






    printf("\nSTMT_EXEC;;6716\n");
tmp___0 = outcnt;
    printf("\nSTMT_EXEC;;6717\n");
outcnt++;
    printf("\nSTMT_EXEC;;6718\n");
outbuf[tmp___0] = (uch) * ("\037\213" + 1);






    printf("\nSTMT_EXEC;;6725\n");
tmp___1 = outcnt;
    printf("\nSTMT_EXEC;;6726\n");
outcnt++;
    printf("\nSTMT_EXEC;;6727\n");
outbuf[tmp___1] = (uch)8;











    printf("\nSTMT_EXEC;;6739\n");
outcnt++;








    {
      printf("\nSTMT_EXEC;;6749\n");
tmp___3 = outcnt;
      printf("\nSTMT_EXEC;;6750\n");
outcnt++;
      printf("\nSTMT_EXEC;;6751\n");
outbuf[tmp___3] = (uch)((time_stamp & 65535L) & 255L);
      printf("\nSTMT_EXEC;;6752\n");
tmp___4 = outcnt;
      printf("\nSTMT_EXEC;;6753\n");
outcnt++;
      printf("\nSTMT_EXEC;;6754\n");
outbuf[tmp___4] = (uch)((int)((ush)(time_stamp & 65535L)) >> 8);
    }






















    {
      printf("\nSTMT_EXEC;;6779\n");
tmp___7 = outcnt;
      printf("\nSTMT_EXEC;;6780\n");
outcnt++;
      printf("\nSTMT_EXEC;;6781\n");
outbuf[tmp___7] = (uch)(((ulg)time_stamp >> 16) & 255UL);
      printf("\nSTMT_EXEC;;6782\n");
tmp___8 = outcnt;
      printf("\nSTMT_EXEC;;6783\n");
outcnt++;
      printf("\nSTMT_EXEC;;6784\n");
outbuf[tmp___8] = (uch)((int)((ush)((ulg)time_stamp >> 16)) >> 8);
    }

    {





















      printf("\nSTMT_EXEC;;6809\n");
bi_init(out);
      printf("\nSTMT_EXEC;;6810\n");
ct_init(&attr, &method);
      printf("\nSTMT_EXEC;;6811\n");
lm_init(level, &deflate_flags);

      printf("\nSTMT_EXEC;;6813\n");
outcnt++;

    }






    printf("\nSTMT_EXEC;;6822\n");
tmp___12 = outcnt;
    printf("\nSTMT_EXEC;;6823\n");
outcnt++;
    printf("\nSTMT_EXEC;;6824\n");
outbuf[tmp___12] = (uch)3;

    {



































      printf("\nSTMT_EXEC;;6862\n");
deflate();
    }

    {
      printf("\nSTMT_EXEC;;6866\n");
tmp___16 = outcnt;
      printf("\nSTMT_EXEC;;6867\n");
outcnt++;
      printf("\nSTMT_EXEC;;6868\n");
outbuf[tmp___16] = (uch)((crc___0 & 65535UL) & 255UL);
      printf("\nSTMT_EXEC;;6869\n");
tmp___17 = outcnt;
      printf("\nSTMT_EXEC;;6870\n");
outcnt++;
      printf("\nSTMT_EXEC;;6871\n");
outbuf[tmp___17] = (uch)((int)((ush)(crc___0 & 65535UL)) >> 8);
    }






















    {
      printf("\nSTMT_EXEC;;6896\n");
tmp___20 = outcnt;
      printf("\nSTMT_EXEC;;6897\n");
outcnt++;
      printf("\nSTMT_EXEC;;6898\n");
outbuf[tmp___20] = (uch)((crc___0 >> 16) & 255UL);
      printf("\nSTMT_EXEC;;6899\n");
tmp___21 = outcnt;
      printf("\nSTMT_EXEC;;6900\n");
outcnt++;
      printf("\nSTMT_EXEC;;6901\n");
outbuf[tmp___21] = (uch)((int)((ush)(crc___0 >> 16)) >> 8);
    }






















    {
      printf("\nSTMT_EXEC;;6926\n");
tmp___24 = outcnt;
      printf("\nSTMT_EXEC;;6927\n");
outcnt++;
      printf("\nSTMT_EXEC;;6928\n");
outbuf[tmp___24] = (uch)((bytes_in & 65535L) & 255L);
      printf("\nSTMT_EXEC;;6929\n");
tmp___25 = outcnt;
      printf("\nSTMT_EXEC;;6930\n");
outcnt++;
      printf("\nSTMT_EXEC;;6931\n");
outbuf[tmp___25] = (uch)((int)((ush)(bytes_in & 65535L)) >> 8);
    }






















    {
      printf("\nSTMT_EXEC;;6956\n");
tmp___28 = outcnt;
      printf("\nSTMT_EXEC;;6957\n");
outcnt++;
      printf("\nSTMT_EXEC;;6958\n");
outbuf[tmp___28] = (uch)(((ulg)bytes_in >> 16) & 255UL);

      printf("\nSTMT_EXEC;;6960\n");
outcnt++;

    }

    {





















      printf("\nSTMT_EXEC;;6986\n");
flush_outbuf();
    }
    printf("\nSTMT_EXEC;;6988\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int file_read(char *buf, unsigned int size)
{
  printf("\nFUNC_CALL;file_read(char *,unsigned int);\n");
printf("\nSTMT_EXEC;;6993\n");
unsigned int len;
  {
    {
      printf("\nSTMT_EXEC;;6996\n");
len = (unsigned int)read(ifd, (void *)buf, (size_t)size);
    }











    {
      printf("\nSTMT_EXEC;;7010\n");
crc___0 = updcrc((uch *)buf, len);
      printf("\nSTMT_EXEC;;7011\n");
bytes_in = (long)((ulg)bytes_in + (ulg)len);
    }
    printf("\nSTMT_EXEC;;7013\n");
printf("\nFUNC_RETURN;;\n");
return ((int)len);
  }
printf("\nFUNC_RETURN;;\n");
}
static char *license_msg[15] = {(char *)"   Copyright (C) 1992-1993 Jean-loup Gailly",
                                (char *)"   This program is free software; you can redistribute it and/or "
                                        "modify",
                                (char *)"   it under the terms of the GNU General Public License as "
                                        "published by",
                                (char *)"   the Free Software Foundation; either version 2, or (at your "
                                        "option)",
                                (char *)"   any later version.",
                                (char *)"",
                                (char *)"   This program is distributed in the hope that it will be useful,",
                                (char *)"   but WITHOUT ANY WARRANTY; without even the implied warranty of",
                                (char *)"   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the",
                                (char *)"   GNU General Public License for more details.",
                                (char *)"",
                                (char *)"   You should have received a copy of the GNU General Public "
                                        "License",
                                (char *)"   along with this program; if not, write to the Free Software",
                                (char *)"   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.",
                                (char *)0};
extern __attribute__((__nothrow__)) __sighandler_t(__attribute__((__leaf__)) signal)(int __sig, void (*__handler)(int));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__)) fstat)(int __fd, struct stat *__buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) lstat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) chmod)(char const *__file, __mode_t __mode);
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern int fflush(FILE *__stream);
extern int printf(char const *__restrict __format, ...);
extern char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) fileno)(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) memcmp)(void const *__s1, void const *__s2, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strncpy)(char *__restrict __dest, char const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strcat)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strncmp)(char const *__s1, char const *__s2, size_t __n) __attribute__((__pure__));



extern int optind;
extern int getopt_long(int argc, char *const *argv, char const *shortopts, struct option const *longopts, int *longind);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) ctime)(time_t const *__timer);
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
extern __attribute__((__nothrow__)) __off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset, int __whence);
extern int close(int __fd);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) chown)(char const *__file, __uid_t __owner, __gid_t __group);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) isatty)(int __fd);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) unlink)(char const *__name);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) atoi)(char const *__nptr) __attribute__((__pure__));
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) exit)(int __status);
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) utime)(char const *__file, struct utimbuf const *__file_times);


int decompress = 0;











int method = 8;
int level = 6;
int exit_code = 0;









struct stat istat;
struct option longopts[24] = {{"ascii", 0, (int *)0, 'a'}, {"to-stdout", 0, (int *)0, 'c'}, {"stdout", 0, (int *)0, 'c'}, {"decompress", 0, (int *)0, 'd'}, {"uncompress", 0, (int *)0, 'd'}, {"force", 0, (int *)0, 'f'}, {"help", 0, (int *)0, 'h'}, {"list", 0, (int *)0, 'l'}, {"license", 0, (int *)0, 'L'}, {"no-name", 0, (int *)0, 'n'}, {"name", 0, (int *)0, 'N'}, {"quiet", 0, (int *)0, 'q'}, {"silent", 0, (int *)0, 'q'}, {"recursive", 0, (int *)0, 'r'}, {"suffix", 1, (int *)0, 'S'}, {"test", 0, (int *)0, 't'}, {"no-time", 0, (int *)0, 'T'}, {"verbose", 0, (int *)0, 'v'}, {"version", 0, (int *)0, 'V'}, {"fast", 0, (int *)0, '1'}, {"best", 0, (int *)0, '9'}, {"lzw", 0, (int *)0, 'Z'}, {"bits", 1, (int *)0, 'b'}, {(char const *)0, 0, (int *)0, 0}};
static void usage(void);
static void help(void);
static void license(void);
static void version(void);
static void treat_stdin(void);
static void treat_file(char *iname);
static int create_outfile(void);
static int do_stat(char *name, struct stat *sbuf);
static char *get_suffix(char *name);
static int get_istat(char *iname, struct stat *sbuf);
static int make_ofname(void);
static int same_file(struct stat *stat1, struct stat *stat2);
static int name_too_long(char *name, struct stat *statb);
static void shorten_name(char *name);
static int get_method(int in);
static void do_list(int ifd___0, int method___0);
static int check_ofname(void);
static void copy_stat(struct stat *ifstat);
static void do_exit(int exitcode);
int main(int argc, char **argv);
int (*work)(int infile, int outfile) = &zip;
static void treat_dir(char *dir);
static void reset_times(char *name, struct stat *statb);












static char *help_msg[18] = {(char *)" -c --stdout      write on standard output, keep original files "
                                     "unchanged",
                             (char *)" -d --decompress  decompress",
                             (char *)" -f --force       force overwrite of output file and compress "
                                     "links",
                             (char *)" -h --help        give this help",
                             (char *)" -l --list        list compressed file contents",
                             (char *)" -L --license     display software license",
                             (char *)" -n --no-name     do not save or restore the original name and "
                                     "time stamp",
                             (char *)" -N --name        save or restore the original name and time stamp",
                             (char *)" -q --quiet       suppress all warnings",
                             (char *)" -r --recursive   operate recursively on directories",
                             (char *)" -S .suf  --suffix .suf     use suffix .suf on compressed files",
                             (char *)" -t --test        test compressed file integrity",
                             (char *)" -v --verbose     verbose mode",
                             (char *)" -V --version     display version number",
                             (char *)" -1 --fast        compress faster",
                             (char *)" -9 --best        compress better",
                             (char *)" file...          files to (de)compress. If none given, use "
                                     "standard input.",
                             (char *)0};
static void help(void)
{
  printf("\nFUNC_CALL;help();\n");
printf("\nSTMT_EXEC;;7156\n");
char **p;
  printf("\nSTMT_EXEC;;7157\n");
char **tmp;
  {
    {
      printf("\nSTMT_EXEC;;7160\n");
p = help_msg;


    }
    {
      printf("\nSTMT_EXEC;;7165\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;7168\n");
if (!*p)
        {
          printf("\nSTMT_EXEC;;7170\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;7173\n");
tmp = p;
          printf("\nSTMT_EXEC;;7174\n");
p++;
          printf("\nSTMT_EXEC;;7175\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s\n", *tmp);printf("\nFUNC_RETURN;;\n");

        }
      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void license(void)
{
  printf("\nFUNC_CALL;license();\n");
printf("\nSTMT_EXEC;;7185\n");
char **p;
  printf("\nSTMT_EXEC;;7186\n");
char **tmp;
  {
    {
      printf("\nSTMT_EXEC;;7189\n");
p = license_msg;

    }
    {
      printf("\nSTMT_EXEC;;7193\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;7196\n");
if (!*p)
        {
          printf("\nSTMT_EXEC;;7198\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;7201\n");
tmp = p;
          printf("\nSTMT_EXEC;;7202\n");
p++;
          printf("\nSTMT_EXEC;;7203\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s\n", *tmp);printf("\nFUNC_RETURN;;\n");

        }
      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void version(void)
{


  printf("\nFUNC_CALL;version();\n");
printf("\nSTMT_EXEC;;7215\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s %s (%s)\n", progname, "1.2.4", "18 Aug 93");printf("\nFUNC_RETURN;;\n");

  printf("\nSTMT_EXEC;;7216\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "Compilation options:\n%s %s ", "DIRENT", "UTIME");printf("\nFUNC_RETURN;;\n");

  printf("\nSTMT_EXEC;;7217\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "STDC_HEADERS ");printf("\nFUNC_RETURN;;\n");

  printf("\nSTMT_EXEC;;7218\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "HAVE_UNISTD_H ");printf("\nFUNC_RETURN;;\n");

  printf("\nSTMT_EXEC;;7219\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n");printf("\nFUNC_RETURN;;\n");




printf("\nFUNC_RETURN;;\n");
}
int main(int argc, char **argv)
{
  printf("\nFUNC_CALL;main(int,char **);\n");
printf("\nSTMT_EXEC;;39\n");
AFL_INIT_SET0("gzip");
  printf("\nSTMT_EXEC;;7227\n");
printf("\nFUNC_CALL;path_check(int,char **);\n");
path_check(argc, argv);printf("\nFUNC_RETURN;;\n");

  printf("\nSTMT_EXEC;;7228\n");
int file_count;

  printf("\nSTMT_EXEC;;7230\n");
int optc;









  printf("\nSTMT_EXEC;;7240\n");
int tmp___8;


  {
    {
      printf("\nSTMT_EXEC;;7245\n");
progname = basename(*(argv + 0));

    }

    {
      {
        ;
























































































        {
          printf("\nSTMT_EXEC;;7341\n");
printf("\nFUNC_CALL;getopt_long(int,char *const *,const char *,const struct option *,int *);\n");
optc = getopt_long(argc, (char *const *)argv, "ab:cdfhH?lLmMnNqrS:tvVZ123456789", (struct option const *)(longopts), (int *)0);printf("\nFUNC_RETURN;;\n");

        }

        {















          printf("\nSTMT_EXEC;;7360\n");
if (optc == 100)
          {
            printf("\nSTMT_EXEC;;7362\n");
goto case_100;
          }




          printf("\nSTMT_EXEC;;7368\n");
if (optc == 104)
          {
            printf("\nSTMT_EXEC;;7370\n");
goto case_104;
          }




          printf("\nSTMT_EXEC;;7376\n");
if (optc == 63)
          {
            printf("\nSTMT_EXEC;;7378\n");
goto case_104;
          }




          printf("\nSTMT_EXEC;;7384\n");
if (optc == 76)
          {
            printf("\nSTMT_EXEC;;7386\n");
goto case_76;
          }




































          printf("\nSTMT_EXEC;;7424\n");
if (optc == 86)
          {
            printf("\nSTMT_EXEC;;7426\n");
goto case_86;
          }



















































          printf("\nSTMT_EXEC;;7479\n");
goto switch_break;
        case_100: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7481\n");
decompress = 1;
}

          printf("\nSTMT_EXEC;;7482\n");
goto switch_break;



        case_104: /* CIL Label */


        {
          printf("\nSTMT_EXEC;;7490\n");
help();
          printf("\nSTMT_EXEC;;7491\n");
do_exit(0);
        }






        case_76: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7501\n");
license();
          printf("\nSTMT_EXEC;;7502\n");
do_exit(0);
        }





































        case_86: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7543\n");
version();

        }



























        switch_break: /* CIL Label */;
        }
      };

    }








    printf("\nSTMT_EXEC;;7586\n");
file_count = argc - optind;












































    printf("\nSTMT_EXEC;;7631\n");
if (file_count != 0)
    {

      {
        ;









































        {
          printf("\nSTMT_EXEC;;7678\n");
tmp___8 = optind;

          printf("\nSTMT_EXEC;;7680\n");
treat_file(*(argv + tmp___8));
        }
      };


    }
    else
    {

      printf("\nSTMT_EXEC;;7689\n");
treat_stdin();
    }
















    printf("\nSTMT_EXEC;;7707\n");
printf("\nFUNC_RETURN;;\n");
return (exit_code);
  }
printf("\nFUNC_RETURN;;\n");
}
static void treat_stdin(void)
{
  printf("\nFUNC_CALL;treat_stdin();\n");
printf("\nSTMT_EXEC;;7712\n");
char const *tmp;
  printf("\nSTMT_EXEC;;7713\n");
char const *tmp___0;
  printf("\nSTMT_EXEC;;7714\n");
struct _IO_FILE *tmp___1;
  printf("\nSTMT_EXEC;;7715\n");
int tmp___2;
  printf("\nSTMT_EXEC;;7716\n");
int tmp___3;


  printf("\nSTMT_EXEC;;7719\n");
int tmp___6;
  printf("\nSTMT_EXEC;;7720\n");
int tmp___7;
  printf("\nSTMT_EXEC;;7721\n");
int tmp___8;
  printf("\nSTMT_EXEC;;7722\n");
int tmp___9;
  printf("\nSTMT_EXEC;;7723\n");
int tmp___10;







  {

    {







      {
        printf("\nSTMT_EXEC;;7742\n");
tmp___1 = stdout;
      }
      {
        printf("\nSTMT_EXEC;;7745\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___2 = fileno(tmp___1);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7746\n");
printf("\nFUNC_CALL;isatty(int);\n");
tmp___3 = isatty(tmp___2);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7748\n");
if (tmp___3)
      {





        {
          printf("\nSTMT_EXEC;;7756\n");
tmp = "";
        }





        {
          printf("\nSTMT_EXEC;;7764\n");
tmp___0 = "written to";
        }
        {
          printf("\nSTMT_EXEC;;7767\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: compressed data not "
                                                   "%s a terminal. Use -f to "
                                                   "force %scompression.\n",
                  progname, tmp___0, tmp);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7772\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "For help, type: %s -h\n", progname);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7773\n");
do_exit(1);
        }
      }
    }


    {
























































      {
        printf("\nSTMT_EXEC;;7837\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___6 = fileno(stdin);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7838\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___7 = fstat(tmp___6, &istat);printf("\nFUNC_RETURN;;\n");

      }






      printf("\nSTMT_EXEC;;7846\n");
time_stamp = istat.st_mtim.tv_sec;
    }







    printf("\nSTMT_EXEC;;7855\n");
if (decompress)
    {

      printf("\nSTMT_EXEC;;7858\n");
method = get_method(ifd);
    }

    {
      {
        ;














        {
          printf("\nSTMT_EXEC;;7879\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___8 = fileno(stdout);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7880\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___9 = fileno(stdin);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7881\n");
tmp___10 = (*work)(tmp___9, tmp___8);
        }



















      };
    }
































  }
printf("\nFUNC_RETURN;;\n");
}
static void treat_file(char *iname)
{


  printf("\nFUNC_CALL;treat_file(char *);\n");
printf("\nSTMT_EXEC;;7942\n");
int tmp___0;



  printf("\nSTMT_EXEC;;7946\n");
int tmp___3;





  printf("\nSTMT_EXEC;;7952\n");
int tmp___11;






  {












    {
      printf("\nSTMT_EXEC;;7973\n");
tmp___0 = get_istat(iname, &istat);
    }

    {






























































































































      printf("\nSTMT_EXEC;;8103\n");
tmp___3 = 0;
    }









    {
      printf("\nSTMT_EXEC;;8115\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
ifd = open((char const *)(ifname), tmp___3, 384);printf("\nFUNC_RETURN;;\n");

    }














    {
      {
        printf("\nSTMT_EXEC;;8133\n");
method = get_method(ifd);
      }
      printf("\nSTMT_EXEC;;8135\n");
if (method < 0)
      {



        printf("\nSTMT_EXEC;;8140\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }

    {
      {
        ;







































































        {
          printf("\nSTMT_EXEC;;8219\n");
tmp___11 = (*work)(ifd, ofd);
        }




















      };
    }
  }


printf("\nFUNC_RETURN;;\n");
}











































































































































































































































































static int get_istat(char *iname, struct stat *sbuf)
{







  printf("\nFUNC_CALL;get_istat(char *,struct stat *);\n");
{


    printf("\nSTMT_EXEC;;8526\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(ifname), (char const * /* __restrict  */)iname);printf("\nFUNC_RETURN;;\n");


  }

  {
    printf("\nSTMT_EXEC;;8531\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }





printf("\nFUNC_RETURN;;\n");
}




































































































































































































static int get_method(int in)
{










  printf("\nFUNC_CALL;get_method(int);\n");
printf("\nSTMT_EXEC;;8747\n");
int tmp___6;




  printf("\nSTMT_EXEC;;8752\n");
unsigned int tmp___11;

  printf("\nSTMT_EXEC;;8754\n");
int tmp___13;
























































  {

    {

        {














































            printf("\nSTMT_EXEC;;8862\n");
tmp___6 = fill_inbuf(0);

  }



  {

    printf("\nSTMT_EXEC;;8870\n");
inptr++;







  }
}


{



















  {
    printf("\nSTMT_EXEC;;8903\n");
tmp___11 = inptr;
    printf("\nSTMT_EXEC;;8904\n");
inptr++;
    printf("\nSTMT_EXEC;;8905\n");
tmp___13 = (int)inbuf[tmp___11];
  }







  printf("\nSTMT_EXEC;;8914\n");
method = tmp___13;
  printf("\nSTMT_EXEC;;8915\n");
if (method != 8)
  {
    {




      printf("\nSTMT_EXEC;;8922\n");
exit_code = 1;
    }
    printf("\nSTMT_EXEC;;8924\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
  }
  printf("\nSTMT_EXEC;;8926\n");
work = &unzip;

  {

    printf("\nSTMT_EXEC;;8930\n");
inptr++;

  }

  {
















































    printf("\nSTMT_EXEC;;8983\n");
inptr++;

  }

  {









    printf("\nSTMT_EXEC;;8997\n");
inptr++;

  }

  {









    printf("\nSTMT_EXEC;;9011\n");
inptr++;

  }

  {









    printf("\nSTMT_EXEC;;9025\n");
inptr++;

  }

  {
















    printf("\nSTMT_EXEC;;9046\n");
inptr++;
  }

  {







    printf("\nSTMT_EXEC;;9057\n");
inptr++;
  }








































}
}
printf("\nFUNC_RETURN;;\n");
}

















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































static void do_exit(int exitcode)
{




  printf("\nFUNC_CALL;do_exit(int);\n");
printf("\nSTMT_EXEC;;10149\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitcode);printf("\nFUNC_RETURN;;\n");

printf("\nFUNC_RETURN;;\n");
}




































