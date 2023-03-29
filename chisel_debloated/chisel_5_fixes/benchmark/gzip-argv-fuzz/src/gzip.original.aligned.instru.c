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
int test;
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
static uch pt_len[19];
static unsigned int blocksize;
static ush pt_table[256];
static ush bitbuf;
static unsigned int subbitbuf;
static int bitcount;
static void fillbuf(int n)
{
  printf("\nFUNC_CALL;fillbuf(int);\n");
printf("\nSTMT_EXEC;;201\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;202\n");
int tmp___0;
  printf("\nSTMT_EXEC;;203\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;205\n");
bitbuf = (ush)((int)bitbuf << n);
    {
      printf("\nSTMT_EXEC;;207\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;210\n");
if (!(n > bitcount))
        {
          printf("\nSTMT_EXEC;;212\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;214\n");
n -= bitcount;
        printf("\nSTMT_EXEC;;215\n");
bitbuf = (ush)((unsigned int)bitbuf | (subbitbuf << n));
        printf("\nSTMT_EXEC;;216\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;218\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;219\n");
inptr++;
          printf("\nSTMT_EXEC;;220\n");
tmp___1 = (int)inbuf[tmp];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;225\n");
tmp___0 = fill_inbuf(1);
            printf("\nSTMT_EXEC;;226\n");
tmp___1 = tmp___0;
          }
        }
        printf("\nSTMT_EXEC;;229\n");
subbitbuf = (unsigned int)tmp___1;
        printf("\nSTMT_EXEC;;230\n");
if ((int)subbitbuf == -1)
        {
          printf("\nSTMT_EXEC;;232\n");
subbitbuf = 0U;
        }
        printf("\nSTMT_EXEC;;234\n");
bitcount = 8;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;238\n");
bitcount -= n;
    printf("\nSTMT_EXEC;;239\n");
bitbuf = (ush)((unsigned int)bitbuf | (subbitbuf >> bitcount));
    printf("\nSTMT_EXEC;;240\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static unsigned int getbits(int n)
{
  printf("\nFUNC_CALL;getbits(int);\n");
printf("\nSTMT_EXEC;;245\n");
unsigned int x;
  {
    {
      printf("\nSTMT_EXEC;;248\n");
x = (unsigned int)((int)bitbuf >> (16UL * sizeof(char) - (unsigned long)n));
      printf("\nSTMT_EXEC;;249\n");
fillbuf(n);
    }
    printf("\nSTMT_EXEC;;251\n");
printf("\nFUNC_RETURN;;\n");
return (x);
  }
printf("\nFUNC_RETURN;;\n");
}
static void init_getbits(void)
{
  printf("\nFUNC_CALL;init_getbits();\n");
{
    {
      printf("\nSTMT_EXEC;;258\n");
bitbuf = (ush)0;
      printf("\nSTMT_EXEC;;259\n");
subbitbuf = 0U;
      printf("\nSTMT_EXEC;;260\n");
bitcount = 0;
      printf("\nSTMT_EXEC;;261\n");
fillbuf((int)(16UL * sizeof(char)));
    }
    printf("\nSTMT_EXEC;;263\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void make_table(int nchar, uch *bitlen, int tablebits, ush *table)
{
  printf("\nFUNC_CALL;make_table(int,uch *,int,ush *);\n");
printf("\nSTMT_EXEC;;268\n");
ush count[17];
  printf("\nSTMT_EXEC;;269\n");
ush weight[17];
  printf("\nSTMT_EXEC;;270\n");
ush start[18];
  printf("\nSTMT_EXEC;;271\n");
ush *p;
  printf("\nSTMT_EXEC;;272\n");
unsigned int i___0;
  printf("\nSTMT_EXEC;;273\n");
unsigned int k;
  printf("\nSTMT_EXEC;;274\n");
unsigned int len;
  printf("\nSTMT_EXEC;;275\n");
unsigned int ch;
  printf("\nSTMT_EXEC;;276\n");
unsigned int jutbits;
  printf("\nSTMT_EXEC;;277\n");
unsigned int avail;
  printf("\nSTMT_EXEC;;278\n");
unsigned int nextcode;
  printf("\nSTMT_EXEC;;279\n");
unsigned int mask;
  printf("\nSTMT_EXEC;;280\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;281\n");
ush tmp___0;
  printf("\nSTMT_EXEC;;282\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;283\n");
void *__cil_tmp20;
  printf("\nSTMT_EXEC;;284\n");
void *__cil_tmp21;
  printf("\nSTMT_EXEC;;285\n");
void *__cil_tmp22;
  printf("\nSTMT_EXEC;;286\n");
char *__cil_tmp23;
  {
    printf("\nSTMT_EXEC;;288\n");
i___0 = 1U;
    {
      printf("\nSTMT_EXEC;;290\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;293\n");
if (!(i___0 <= 16U))
        {
          printf("\nSTMT_EXEC;;295\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;297\n");
count[i___0] = (ush)0;
        printf("\nSTMT_EXEC;;298\n");
i___0++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;302\n");
i___0 = 0U;
    {
      printf("\nSTMT_EXEC;;304\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;307\n");
if (!(i___0 < (unsigned int)nchar))
        {
          printf("\nSTMT_EXEC;;309\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;311\n");
count[*(bitlen + i___0)] = (ush)((int)count[*(bitlen + i___0)] + 1);
        printf("\nSTMT_EXEC;;312\n");
i___0++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;316\n");
start[1] = (ush)0;
    printf("\nSTMT_EXEC;;317\n");
i___0 = 1U;
    {
      printf("\nSTMT_EXEC;;319\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;322\n");
if (!(i___0 <= 16U))
        {
          printf("\nSTMT_EXEC;;324\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;326\n");
start[i___0 + 1U] = (ush)((int)start[i___0] + ((int)count[i___0] << (16U - i___0)));
        printf("\nSTMT_EXEC;;327\n");
i___0++;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;331\n");
if (((int)start[17] & 65535) != 0)
    {
      {
        printf("\nSTMT_EXEC;;334\n");
error((char *)"Bad table\n");
      }
    }
    printf("\nSTMT_EXEC;;337\n");
jutbits = (unsigned int)(16 - tablebits);
    printf("\nSTMT_EXEC;;338\n");
i___0 = 1U;
    {
      printf("\nSTMT_EXEC;;340\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;343\n");
if (!(i___0 <= (unsigned int)tablebits))
        {
          printf("\nSTMT_EXEC;;345\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;347\n");
start[i___0] = (ush)((int)start[i___0] >> jutbits);
        printf("\nSTMT_EXEC;;348\n");
weight[i___0] = (ush)(1U << ((unsigned int)tablebits - i___0));
        printf("\nSTMT_EXEC;;349\n");
i___0++;
      }
    while_break___2: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;354\n");
while (1)
      {
      while_continue___3: /* CIL Label */;
        printf("\nSTMT_EXEC;;357\n");
if (!(i___0 <= 16U))
        {
          printf("\nSTMT_EXEC;;359\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;361\n");
weight[i___0] = (ush)(1U << (16U - i___0));
        printf("\nSTMT_EXEC;;362\n");
i___0++;
      }
    while_break___3: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;366\n");
i___0 = (unsigned int)((int)start[tablebits + 1] >> jutbits);
    printf("\nSTMT_EXEC;;367\n");
if (i___0 != 0U)
    {
      printf("\nSTMT_EXEC;;369\n");
k = (unsigned int)(1 << tablebits);
      {
        printf("\nSTMT_EXEC;;371\n");
while (1)
        {
        while_continue___4: /* CIL Label */;
          printf("\nSTMT_EXEC;;374\n");
if (!(i___0 != k))
          {
            printf("\nSTMT_EXEC;;376\n");
goto while_break___4;
          }
          printf("\nSTMT_EXEC;;378\n");
tmp = i___0;
          printf("\nSTMT_EXEC;;379\n");
i___0++;
          printf("\nSTMT_EXEC;;380\n");
*(table + tmp) = (ush)0;
        }
      while_break___4: /* CIL Label */;
      }
    }
    printf("\nSTMT_EXEC;;385\n");
avail = (unsigned int)nchar;
    printf("\nSTMT_EXEC;;386\n");
mask = 1U << (15 - tablebits);
    printf("\nSTMT_EXEC;;387\n");
ch = 0U;
    {
      printf("\nSTMT_EXEC;;389\n");
while (1)
      {
      while_continue___5: /* CIL Label */;
        printf("\nSTMT_EXEC;;392\n");
if (!(ch < (unsigned int)nchar))
        {
          printf("\nSTMT_EXEC;;394\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;396\n");
len = (unsigned int)*(bitlen + ch);
        printf("\nSTMT_EXEC;;397\n");
if (len == 0U)
        {
          printf("\nSTMT_EXEC;;399\n");
goto __Cont;
        }
        printf("\nSTMT_EXEC;;401\n");
nextcode = (unsigned int)((int)start[len] + (int)weight[len]);
        printf("\nSTMT_EXEC;;402\n");
if (len <= (unsigned int)tablebits)
        {
          printf("\nSTMT_EXEC;;404\n");
i___0 = (unsigned int)start[len];
          {
            printf("\nSTMT_EXEC;;406\n");
while (1)
            {
            while_continue___6: /* CIL Label */;
              printf("\nSTMT_EXEC;;409\n");
if (!(i___0 < nextcode))
              {
                printf("\nSTMT_EXEC;;411\n");
goto while_break___6;
              }
              printf("\nSTMT_EXEC;;413\n");
*(table + i___0) = (ush)ch;
              printf("\nSTMT_EXEC;;414\n");
i___0++;
            }
          while_break___6: /* CIL Label */;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;421\n");
k = (unsigned int)start[len];
          printf("\nSTMT_EXEC;;422\n");
p = table + (k >> jutbits);
          printf("\nSTMT_EXEC;;423\n");
i___0 = len - (unsigned int)tablebits;
          {
            printf("\nSTMT_EXEC;;425\n");
while (1)
            {
            while_continue___7: /* CIL Label */;
              printf("\nSTMT_EXEC;;428\n");
if (!(i___0 != 0U))
              {
                printf("\nSTMT_EXEC;;430\n");
goto while_break___7;
              }
              printf("\nSTMT_EXEC;;432\n");
if ((int)*p == 0)
              {
                printf("\nSTMT_EXEC;;434\n");
tmp___0 = (ush)0;
                printf("\nSTMT_EXEC;;435\n");
prev[avail] = tmp___0;
                printf("\nSTMT_EXEC;;436\n");
*((prev + 32768) + avail) = tmp___0;
                printf("\nSTMT_EXEC;;437\n");
tmp___1 = avail;
                printf("\nSTMT_EXEC;;438\n");
avail++;
                printf("\nSTMT_EXEC;;439\n");
*p = (ush)tmp___1;
              }
              printf("\nSTMT_EXEC;;441\n");
if (k & mask)
              {
                printf("\nSTMT_EXEC;;443\n");
p = (prev + 32768) + (int)*p;
              }
              else
              {
                printf("\nSTMT_EXEC;;447\n");
p = &prev[*p];
              }
              printf("\nSTMT_EXEC;;449\n");
k <<= 1;
              printf("\nSTMT_EXEC;;450\n");
i___0--;
            }
          while_break___7: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;454\n");
*p = (ush)ch;
        }
        printf("\nSTMT_EXEC;;456\n");
start[len] = (ush)nextcode;
      __Cont:
        {
printf("\nSTMT_EXEC;;458\n");
ch++;
}

      }
    while_break___5: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;462\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void read_pt_len(int nn, int nbit, int i_special)
{
  printf("\nFUNC_CALL;read_pt_len(int,int,int);\n");
printf("\nSTMT_EXEC;;467\n");
int i___0;
  printf("\nSTMT_EXEC;;468\n");
int c;
  printf("\nSTMT_EXEC;;469\n");
int n;
  printf("\nSTMT_EXEC;;470\n");
unsigned int mask;
  printf("\nSTMT_EXEC;;471\n");
int tmp;
  printf("\nSTMT_EXEC;;472\n");
int tmp___0;
  printf("\nSTMT_EXEC;;473\n");
int tmp___1;
  printf("\nSTMT_EXEC;;474\n");
int tmp___2;
  {
    {
      printf("\nSTMT_EXEC;;477\n");
n = (int)getbits(nbit);
    }
    printf("\nSTMT_EXEC;;479\n");
if (n == 0)
    {
      {
        printf("\nSTMT_EXEC;;482\n");
c = (int)getbits(nbit);
        printf("\nSTMT_EXEC;;483\n");
i___0 = 0;
      }
      {
        printf("\nSTMT_EXEC;;486\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;489\n");
if (!(i___0 < nn))
          {
            printf("\nSTMT_EXEC;;491\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;493\n");
pt_len[i___0] = (uch)0;
          printf("\nSTMT_EXEC;;494\n");
i___0++;
        }
      while_break: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;498\n");
i___0 = 0;
      {
        printf("\nSTMT_EXEC;;500\n");
while (1)
        {
        while_continue___0: /* CIL Label */;
          printf("\nSTMT_EXEC;;503\n");
if (!(i___0 < 256))
          {
            printf("\nSTMT_EXEC;;505\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;507\n");
pt_table[i___0] = (ush)c;
          printf("\nSTMT_EXEC;;508\n");
i___0++;
        }
      while_break___0: /* CIL Label */;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;515\n");
i___0 = 0;
      {
        printf("\nSTMT_EXEC;;517\n");
while (1)
        {
        while_continue___1: /* CIL Label */;
          printf("\nSTMT_EXEC;;520\n");
if (!(i___0 < n))
          {
            printf("\nSTMT_EXEC;;522\n");
goto while_break___1;
          }
          printf("\nSTMT_EXEC;;524\n");
c = (int)bitbuf >> (16UL * sizeof(char) - 3UL);
          printf("\nSTMT_EXEC;;525\n");
if (c == 7)
          {
            printf("\nSTMT_EXEC;;527\n");
mask = 1U << ((16UL * sizeof(char) - 1UL) - 3UL);
            {
              printf("\nSTMT_EXEC;;529\n");
while (1)
              {
              while_continue___2: /* CIL Label */;
                printf("\nSTMT_EXEC;;532\n");
if (!(mask & (unsigned int)bitbuf))
                {
                  printf("\nSTMT_EXEC;;534\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;536\n");
mask >>= 1;
                printf("\nSTMT_EXEC;;537\n");
c++;
              }
            while_break___2: /* CIL Label */;
            }
          }
          printf("\nSTMT_EXEC;;542\n");
if (c < 7)
          {
            printf("\nSTMT_EXEC;;544\n");
tmp = 3;
          }
          else
          {
            printf("\nSTMT_EXEC;;548\n");
tmp = c - 3;
          }
          {
            printf("\nSTMT_EXEC;;551\n");
fillbuf(tmp);
            printf("\nSTMT_EXEC;;552\n");
tmp___0 = i___0;
            printf("\nSTMT_EXEC;;553\n");
i___0++;
            printf("\nSTMT_EXEC;;554\n");
pt_len[tmp___0] = (uch)c;
          }
          printf("\nSTMT_EXEC;;556\n");
if (i___0 == i_special)
          {
            {
              printf("\nSTMT_EXEC;;559\n");
c = (int)getbits(2);
            }
            {
              printf("\nSTMT_EXEC;;562\n");
while (1)
              {
              while_continue___3: /* CIL Label */;
                printf("\nSTMT_EXEC;;565\n");
c--;
                printf("\nSTMT_EXEC;;566\n");
if (!(c >= 0))
                {
                  printf("\nSTMT_EXEC;;568\n");
goto while_break___3;
                }
                printf("\nSTMT_EXEC;;570\n");
tmp___1 = i___0;
                printf("\nSTMT_EXEC;;571\n");
i___0++;
                printf("\nSTMT_EXEC;;572\n");
pt_len[tmp___1] = (uch)0;
              }
            while_break___3: /* CIL Label */;
            }
          }
        }
      while_break___1: /* CIL Label */;
      }
      {
        printf("\nSTMT_EXEC;;581\n");
while (1)
        {
        while_continue___4: /* CIL Label */;
          printf("\nSTMT_EXEC;;584\n");
if (!(i___0 < nn))
          {
            printf("\nSTMT_EXEC;;586\n");
goto while_break___4;
          }
          printf("\nSTMT_EXEC;;588\n");
tmp___2 = i___0;
          printf("\nSTMT_EXEC;;589\n");
i___0++;
          printf("\nSTMT_EXEC;;590\n");
pt_len[tmp___2] = (uch)0;
        }
      while_break___4: /* CIL Label */;
      }
      {
        printf("\nSTMT_EXEC;;595\n");
make_table(nn, pt_len, 8, pt_table);
      }
    }
    printf("\nSTMT_EXEC;;598\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void read_c_len(void)
{
  printf("\nFUNC_CALL;read_c_len();\n");
printf("\nSTMT_EXEC;;603\n");
int i___0;
  printf("\nSTMT_EXEC;;604\n");
int c;
  printf("\nSTMT_EXEC;;605\n");
int n;
  printf("\nSTMT_EXEC;;606\n");
unsigned int mask;
  printf("\nSTMT_EXEC;;607\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;608\n");
unsigned int tmp___0;
  printf("\nSTMT_EXEC;;609\n");
int tmp___1;
  printf("\nSTMT_EXEC;;610\n");
int tmp___2;
  printf("\nSTMT_EXEC;;611\n");
int tmp___3;
  {
    {
      printf("\nSTMT_EXEC;;614\n");
n = (int)getbits(9);
    }
    printf("\nSTMT_EXEC;;616\n");
if (n == 0)
    {
      {
        printf("\nSTMT_EXEC;;619\n");
c = (int)getbits(9);
        printf("\nSTMT_EXEC;;620\n");
i___0 = 0;
      }
      {
        printf("\nSTMT_EXEC;;623\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;626\n");
if (!(i___0 < 510))
          {
            printf("\nSTMT_EXEC;;628\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;630\n");
outbuf[i___0] = (uch)0;
          printf("\nSTMT_EXEC;;631\n");
i___0++;
        }
      while_break: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;635\n");
i___0 = 0;
      {
        printf("\nSTMT_EXEC;;637\n");
while (1)
        {
        while_continue___0: /* CIL Label */;
          printf("\nSTMT_EXEC;;640\n");
if (!(i___0 < 4096))
          {
            printf("\nSTMT_EXEC;;642\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;644\n");
d_buf[i___0] = (ush)c;
          printf("\nSTMT_EXEC;;645\n");
i___0++;
        }
      while_break___0: /* CIL Label */;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;652\n");
i___0 = 0;
      {
        printf("\nSTMT_EXEC;;654\n");
while (1)
        {
        while_continue___1: /* CIL Label */;
          printf("\nSTMT_EXEC;;657\n");
if (!(i___0 < n))
          {
            printf("\nSTMT_EXEC;;659\n");
goto while_break___1;
          }
          printf("\nSTMT_EXEC;;661\n");
c = (int)pt_table[(int)bitbuf >> (16UL * sizeof(char) - 8UL)];
          printf("\nSTMT_EXEC;;662\n");
if (c >= 19)
          {
            printf("\nSTMT_EXEC;;664\n");
mask = 1U << ((16UL * sizeof(char) - 1UL) - 8UL);
            {
              printf("\nSTMT_EXEC;;666\n");
while (1)
              {
              while_continue___2: /* CIL Label */;
                printf("\nSTMT_EXEC;;669\n");
if ((unsigned int)bitbuf & mask)
                {
                  printf("\nSTMT_EXEC;;671\n");
c = (int)*((prev + 32768) + c);
                }
                else
                {
                  printf("\nSTMT_EXEC;;675\n");
c = (int)prev[c];
                }
                printf("\nSTMT_EXEC;;677\n");
mask >>= 1;
                printf("\nSTMT_EXEC;;678\n");
if (!(c >= 19))
                {
                  printf("\nSTMT_EXEC;;680\n");
goto while_break___2;
                }
              }
            while_break___2: /* CIL Label */;
            }
          }
          {
            printf("\nSTMT_EXEC;;687\n");
fillbuf((int)pt_len[c]);
          }
          printf("\nSTMT_EXEC;;689\n");
if (c <= 2)
          {
            printf("\nSTMT_EXEC;;691\n");
if (c == 0)
            {
              printf("\nSTMT_EXEC;;693\n");
c = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;697\n");
if (c == 1)
              {
                {
                  printf("\nSTMT_EXEC;;700\n");
tmp = getbits(4);
                  printf("\nSTMT_EXEC;;701\n");
c = (int)(tmp + 3U);
                }
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;707\n");
tmp___0 = getbits(9);
                  printf("\nSTMT_EXEC;;708\n");
c = (int)(tmp___0 + 20U);
                }
              }
            }
            {
              printf("\nSTMT_EXEC;;713\n");
while (1)
              {
              while_continue___3: /* CIL Label */;
                printf("\nSTMT_EXEC;;716\n");
c--;
                printf("\nSTMT_EXEC;;717\n");
if (!(c >= 0))
                {
                  printf("\nSTMT_EXEC;;719\n");
goto while_break___3;
                }
                printf("\nSTMT_EXEC;;721\n");
tmp___1 = i___0;
                printf("\nSTMT_EXEC;;722\n");
i___0++;
                printf("\nSTMT_EXEC;;723\n");
outbuf[tmp___1] = (uch)0;
              }
            while_break___3: /* CIL Label */;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;730\n");
tmp___2 = i___0;
            printf("\nSTMT_EXEC;;731\n");
i___0++;
            printf("\nSTMT_EXEC;;732\n");
outbuf[tmp___2] = (uch)(c - 2);
          }
        }
      while_break___1: /* CIL Label */;
      }
      {
        printf("\nSTMT_EXEC;;738\n");
while (1)
        {
        while_continue___4: /* CIL Label */;
          printf("\nSTMT_EXEC;;741\n");
if (!(i___0 < 510))
          {
            printf("\nSTMT_EXEC;;743\n");
goto while_break___4;
          }
          printf("\nSTMT_EXEC;;745\n");
tmp___3 = i___0;
          printf("\nSTMT_EXEC;;746\n");
i___0++;
          printf("\nSTMT_EXEC;;747\n");
outbuf[tmp___3] = (uch)0;
        }
      while_break___4: /* CIL Label */;
      }
      {
        printf("\nSTMT_EXEC;;752\n");
make_table(510, outbuf, 12, d_buf);
      }
    }
    printf("\nSTMT_EXEC;;755\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static unsigned int decode_c(void)
{
  printf("\nFUNC_CALL;decode_c();\n");
printf("\nSTMT_EXEC;;760\n");
unsigned int j___0;
  printf("\nSTMT_EXEC;;761\n");
unsigned int mask;
  {
    printf("\nSTMT_EXEC;;763\n");
if (blocksize == 0U)
    {
      {
        printf("\nSTMT_EXEC;;766\n");
blocksize = getbits(16);
      }
      printf("\nSTMT_EXEC;;768\n");
if (blocksize == 0U)
      {
        printf("\nSTMT_EXEC;;770\n");
printf("\nFUNC_RETURN;;\n");
return (510U);
      }
      {
        printf("\nSTMT_EXEC;;773\n");
read_pt_len(19, 5, 3);
        printf("\nSTMT_EXEC;;774\n");
read_c_len();
        printf("\nSTMT_EXEC;;775\n");
read_pt_len(14, 4, -1);
      }
    }
    printf("\nSTMT_EXEC;;778\n");
blocksize--;
    printf("\nSTMT_EXEC;;779\n");
j___0 = (unsigned int)d_buf[(int)bitbuf >> (16UL * sizeof(char) - 12UL)];
    printf("\nSTMT_EXEC;;780\n");
if (j___0 >= 510U)
    {
      printf("\nSTMT_EXEC;;782\n");
mask = 1U << ((16UL * sizeof(char) - 1UL) - 12UL);
      {
        printf("\nSTMT_EXEC;;784\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;787\n");
if ((unsigned int)bitbuf & mask)
          {
            printf("\nSTMT_EXEC;;789\n");
j___0 = (unsigned int)*((prev + 32768) + j___0);
          }
          else
          {
            printf("\nSTMT_EXEC;;793\n");
j___0 = (unsigned int)prev[j___0];
          }
          printf("\nSTMT_EXEC;;795\n");
mask >>= 1;
          printf("\nSTMT_EXEC;;796\n");
if (!(j___0 >= 510U))
          {
            printf("\nSTMT_EXEC;;798\n");
goto while_break;
          }
        }
      while_break: /* CIL Label */;
      }
    }
    {
      printf("\nSTMT_EXEC;;805\n");
fillbuf((int)outbuf[j___0]);
    }
    printf("\nSTMT_EXEC;;807\n");
printf("\nFUNC_RETURN;;\n");
return (j___0);
  }
printf("\nFUNC_RETURN;;\n");
}
static unsigned int decode_p(void)
{
  printf("\nFUNC_CALL;decode_p();\n");
printf("\nSTMT_EXEC;;812\n");
unsigned int j___0;
  printf("\nSTMT_EXEC;;813\n");
unsigned int mask;
  printf("\nSTMT_EXEC;;814\n");
unsigned int tmp;
  {
    printf("\nSTMT_EXEC;;816\n");
j___0 = (unsigned int)pt_table[(int)bitbuf >> (16UL * sizeof(char) - 8UL)];
    printf("\nSTMT_EXEC;;817\n");
if (j___0 >= 14U)
    {
      printf("\nSTMT_EXEC;;819\n");
mask = 1U << ((16UL * sizeof(char) - 1UL) - 8UL);
      {
        printf("\nSTMT_EXEC;;821\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;824\n");
if ((unsigned int)bitbuf & mask)
          {
            printf("\nSTMT_EXEC;;826\n");
j___0 = (unsigned int)*((prev + 32768) + j___0);
          }
          else
          {
            printf("\nSTMT_EXEC;;830\n");
j___0 = (unsigned int)prev[j___0];
          }
          printf("\nSTMT_EXEC;;832\n");
mask >>= 1;
          printf("\nSTMT_EXEC;;833\n");
if (!(j___0 >= 14U))
          {
            printf("\nSTMT_EXEC;;835\n");
goto while_break;
          }
        }
      while_break: /* CIL Label */;
      }
    }
    {
      printf("\nSTMT_EXEC;;842\n");
fillbuf((int)pt_len[j___0]);
    }
    printf("\nSTMT_EXEC;;844\n");
if (j___0 != 0U)
    {
      {
        printf("\nSTMT_EXEC;;847\n");
tmp = getbits((int)(j___0 - 1U));
        printf("\nSTMT_EXEC;;848\n");
j___0 = (1U << (j___0 - 1U)) + tmp;
      }
    }
    printf("\nSTMT_EXEC;;851\n");
printf("\nFUNC_RETURN;;\n");
return (j___0);
  }
printf("\nFUNC_RETURN;;\n");
}
static void huf_decode_start(void)
{
  printf("\nFUNC_CALL;huf_decode_start();\n");
{
    {
      printf("\nSTMT_EXEC;;858\n");
init_getbits();
      printf("\nSTMT_EXEC;;859\n");
blocksize = 0U;
    }
    printf("\nSTMT_EXEC;;861\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static int j;
static int done;
static void decode_start(void)
{
  printf("\nFUNC_CALL;decode_start();\n");
{
    {
      printf("\nSTMT_EXEC;;870\n");
huf_decode_start();
      printf("\nSTMT_EXEC;;871\n");
j = 0;
      printf("\nSTMT_EXEC;;872\n");
done = 0;
    }
    printf("\nSTMT_EXEC;;874\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static unsigned int i;
static unsigned int decode(unsigned int count, uch *buffer)
{
  printf("\nFUNC_CALL;decode(unsigned int,uch *);\n");
printf("\nSTMT_EXEC;;880\n");
unsigned int r;
  printf("\nSTMT_EXEC;;881\n");
unsigned int c;
  printf("\nSTMT_EXEC;;882\n");
unsigned int tmp;
  {
    printf("\nSTMT_EXEC;;884\n");
r = 0U;
    {
      printf("\nSTMT_EXEC;;886\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;889\n");
j--;
        printf("\nSTMT_EXEC;;890\n");
if (!(j >= 0))
        {
          printf("\nSTMT_EXEC;;892\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;894\n");
*(buffer + r) = *(buffer + i);
        printf("\nSTMT_EXEC;;895\n");
i = (i + 1U) & ((1U << 13) - 1U);
        printf("\nSTMT_EXEC;;896\n");
r++;
        printf("\nSTMT_EXEC;;897\n");
if (r == count)
        {
          printf("\nSTMT_EXEC;;899\n");
printf("\nFUNC_RETURN;;\n");
return (r);
        }
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;905\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;909\n");
c = decode_c();
        }
        printf("\nSTMT_EXEC;;911\n");
if (c == 510U)
        {
          printf("\nSTMT_EXEC;;913\n");
done = 1;
          printf("\nSTMT_EXEC;;914\n");
printf("\nFUNC_RETURN;;\n");
return (r);
        }
        printf("\nSTMT_EXEC;;916\n");
if (c <= 255U)
        {
          printf("\nSTMT_EXEC;;918\n");
*(buffer + r) = (uch)c;
          printf("\nSTMT_EXEC;;919\n");
r++;
          printf("\nSTMT_EXEC;;920\n");
if (r == count)
          {
            printf("\nSTMT_EXEC;;922\n");
printf("\nFUNC_RETURN;;\n");
return (r);
          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;928\n");
j = (int)(c - 253U);
            printf("\nSTMT_EXEC;;929\n");
tmp = decode_p();
            printf("\nSTMT_EXEC;;930\n");
i = ((r - tmp) - 1U) & ((1U << 13) - 1U);
          }
          {
            printf("\nSTMT_EXEC;;933\n");
while (1)
            {
            while_continue___1: /* CIL Label */;
              printf("\nSTMT_EXEC;;936\n");
j--;
              printf("\nSTMT_EXEC;;937\n");
if (!(j >= 0))
              {
                printf("\nSTMT_EXEC;;939\n");
goto while_break___1;
              }
              printf("\nSTMT_EXEC;;941\n");
*(buffer + r) = *(buffer + i);
              printf("\nSTMT_EXEC;;942\n");
i = (i + 1U) & ((1U << 13) - 1U);
              printf("\nSTMT_EXEC;;943\n");
r++;
              printf("\nSTMT_EXEC;;944\n");
if (r == count)
              {
                printf("\nSTMT_EXEC;;946\n");
printf("\nFUNC_RETURN;;\n");
return (r);
              }
            }
          while_break___1: /* CIL Label */;
          }
        }
      }
    while_break___0: /* CIL Label */;
    }
  }
printf("\nFUNC_RETURN;;\n");
}
int unlzh(int in, int out)
{
  printf("\nFUNC_CALL;unlzh(int,int);\n");
printf("\nSTMT_EXEC;;959\n");
unsigned int n;
  {
    {
      printf("\nSTMT_EXEC;;962\n");
ifd = in;
      printf("\nSTMT_EXEC;;963\n");
ofd = out;
      printf("\nSTMT_EXEC;;964\n");
decode_start();
    }
    {
      printf("\nSTMT_EXEC;;967\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;970\n");
if (!(!done))
        {
          printf("\nSTMT_EXEC;;972\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;975\n");
n = decode(1U << 13, window);
        }
        printf("\nSTMT_EXEC;;977\n");
if (!test)
        {
          printf("\nSTMT_EXEC;;979\n");
if (n > 0U)
          {
            {
              printf("\nSTMT_EXEC;;982\n");
write_buf(out, (voidp)((char *)(window)), n);
            }
          }
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;989\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
unsigned int outcnt;
long bytes_out;
int unpack(int in, int out);
void flush_window(void);
static ulg orig_len;
static int max_len;
static uch literal[256];
static int lit_base[26];
static int leaves[26];
static int parents[26];
static int peek_bits;
static ulg bitbuf___0;
static int valid;
static void read_tree(void);
static void build_tree(void);
static void read_tree(void)
{
  printf("\nFUNC_CALL;read_tree();\n");
printf("\nSTMT_EXEC;;1009\n");
int len;
  printf("\nSTMT_EXEC;;1010\n");
int base;
  printf("\nSTMT_EXEC;;1011\n");
int n;
  printf("\nSTMT_EXEC;;1012\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;1013\n");
int tmp___0;
  printf("\nSTMT_EXEC;;1014\n");
int tmp___1;
  printf("\nSTMT_EXEC;;1015\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;1016\n");
int tmp___3;
  printf("\nSTMT_EXEC;;1017\n");
int tmp___4;
  printf("\nSTMT_EXEC;;1018\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;1019\n");
int tmp___6;
  printf("\nSTMT_EXEC;;1020\n");
int tmp___7;
  printf("\nSTMT_EXEC;;1021\n");
int tmp___8;
  printf("\nSTMT_EXEC;;1022\n");
unsigned int tmp___9;
  printf("\nSTMT_EXEC;;1023\n");
int tmp___10;
  printf("\nSTMT_EXEC;;1024\n");
int tmp___11;
  printf("\nSTMT_EXEC;;1025\n");
char *__cil_tmp17;
  printf("\nSTMT_EXEC;;1026\n");
char *__cil_tmp18;
  {
    printf("\nSTMT_EXEC;;1028\n");
orig_len = (ulg)0;
    printf("\nSTMT_EXEC;;1029\n");
n = 1;
    {
      printf("\nSTMT_EXEC;;1031\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;1034\n");
if (!(n <= 4))
        {
          printf("\nSTMT_EXEC;;1036\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;1038\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;1040\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;1041\n");
inptr++;
          printf("\nSTMT_EXEC;;1042\n");
tmp___1 = (int)inbuf[tmp];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;1047\n");
tmp___0 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;1048\n");
tmp___1 = tmp___0;
          }
        }
        printf("\nSTMT_EXEC;;1051\n");
orig_len = (orig_len << 8) | (ulg)tmp___1;
        printf("\nSTMT_EXEC;;1052\n");
n++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1056\n");
if (inptr < insize)
    {
      printf("\nSTMT_EXEC;;1058\n");
tmp___2 = inptr;
      printf("\nSTMT_EXEC;;1059\n");
inptr++;
      printf("\nSTMT_EXEC;;1060\n");
tmp___4 = (int)inbuf[tmp___2];
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;1065\n");
tmp___3 = fill_inbuf(0);
        printf("\nSTMT_EXEC;;1066\n");
tmp___4 = tmp___3;
      }
    }
    printf("\nSTMT_EXEC;;1069\n");
max_len = tmp___4;
    printf("\nSTMT_EXEC;;1070\n");
if (max_len > 25)
    {
      {
        printf("\nSTMT_EXEC;;1073\n");
error((char *)"invalid compressed data -- Huffman code > 32 bits");
      }
    }
    printf("\nSTMT_EXEC;;1076\n");
n = 0;
    printf("\nSTMT_EXEC;;1077\n");
len = 1;
    {
      printf("\nSTMT_EXEC;;1079\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;1082\n");
if (!(len <= max_len))
        {
          printf("\nSTMT_EXEC;;1084\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;1086\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;1088\n");
tmp___5 = inptr;
          printf("\nSTMT_EXEC;;1089\n");
inptr++;
          printf("\nSTMT_EXEC;;1090\n");
tmp___7 = (int)inbuf[tmp___5];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;1095\n");
tmp___6 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;1096\n");
tmp___7 = tmp___6;
          }
        }
        printf("\nSTMT_EXEC;;1099\n");
leaves[len] = tmp___7;
        printf("\nSTMT_EXEC;;1100\n");
n += leaves[len];
        printf("\nSTMT_EXEC;;1101\n");
len++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1105\n");
if (n > 256)
    {
      {
        printf("\nSTMT_EXEC;;1108\n");
error((char *)"too many leaves in Huffman tree");
      }
    }
    printf("\nSTMT_EXEC;;1111\n");
(leaves[max_len])++;
    printf("\nSTMT_EXEC;;1112\n");
base = 0;
    printf("\nSTMT_EXEC;;1113\n");
len = 1;
    {
      printf("\nSTMT_EXEC;;1115\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;1118\n");
if (!(len <= max_len))
        {
          printf("\nSTMT_EXEC;;1120\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;1122\n");
lit_base[len] = base;
        printf("\nSTMT_EXEC;;1123\n");
n = leaves[len];
        {
          printf("\nSTMT_EXEC;;1125\n");
while (1)
          {
          while_continue___2: /* CIL Label */;
            printf("\nSTMT_EXEC;;1128\n");
if (!(n > 0))
            {
              printf("\nSTMT_EXEC;;1130\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;1132\n");
tmp___8 = base;
            printf("\nSTMT_EXEC;;1133\n");
base++;
            printf("\nSTMT_EXEC;;1134\n");
if (inptr < insize)
            {
              printf("\nSTMT_EXEC;;1136\n");
tmp___9 = inptr;
              printf("\nSTMT_EXEC;;1137\n");
inptr++;
              printf("\nSTMT_EXEC;;1138\n");
tmp___11 = (int)inbuf[tmp___9];
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;1143\n");
tmp___10 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;1144\n");
tmp___11 = tmp___10;
              }
            }
            printf("\nSTMT_EXEC;;1147\n");
literal[tmp___8] = (uch)tmp___11;
            printf("\nSTMT_EXEC;;1148\n");
n--;
          }
        while_break___2: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;1152\n");
len++;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1156\n");
(leaves[max_len])++;
    printf("\nSTMT_EXEC;;1157\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void build_tree(void)
{
  printf("\nFUNC_CALL;build_tree();\n");
printf("\nSTMT_EXEC;;1162\n");
int nodes;
  printf("\nSTMT_EXEC;;1163\n");
int len;
  printf("\nSTMT_EXEC;;1164\n");
uch *prefixp;
  printf("\nSTMT_EXEC;;1165\n");
int prefixes;
  printf("\nSTMT_EXEC;;1166\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;1168\n");
nodes = 0;
    printf("\nSTMT_EXEC;;1169\n");
len = max_len;
    {
      printf("\nSTMT_EXEC;;1171\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;1174\n");
if (!(len >= 1))
        {
          printf("\nSTMT_EXEC;;1176\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;1178\n");
nodes >>= 1;
        printf("\nSTMT_EXEC;;1179\n");
parents[len] = nodes;
        printf("\nSTMT_EXEC;;1180\n");
lit_base[len] -= nodes;
        printf("\nSTMT_EXEC;;1181\n");
nodes += leaves[len];
        printf("\nSTMT_EXEC;;1182\n");
len--;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1186\n");
if (max_len <= 12)
    {
      printf("\nSTMT_EXEC;;1188\n");
peek_bits = max_len;
    }
    else
    {
      printf("\nSTMT_EXEC;;1192\n");
peek_bits = 12;
    }
    printf("\nSTMT_EXEC;;1194\n");
prefixp = &outbuf[1 << peek_bits];
    printf("\nSTMT_EXEC;;1195\n");
len = 1;
    {
      printf("\nSTMT_EXEC;;1197\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;1200\n");
if (!(len <= peek_bits))
        {
          printf("\nSTMT_EXEC;;1202\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;1204\n");
prefixes = leaves[len] << (peek_bits - len);
        {
          printf("\nSTMT_EXEC;;1206\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;1209\n");
tmp = prefixes;
            printf("\nSTMT_EXEC;;1210\n");
prefixes--;
            printf("\nSTMT_EXEC;;1211\n");
if (!tmp)
            {
              printf("\nSTMT_EXEC;;1213\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;1215\n");
prefixp--;
            printf("\nSTMT_EXEC;;1216\n");
*prefixp = (uch)len;
          }
        while_break___1: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;1220\n");
len++;
      }
    while_break___0: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;1225\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;1228\n");
if (!((unsigned long)prefixp > (unsigned long)(outbuf)))
        {
          printf("\nSTMT_EXEC;;1230\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;1232\n");
prefixp--;
        printf("\nSTMT_EXEC;;1233\n");
*prefixp = (uch)0;
      }
    while_break___2: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1237\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int unpack(int in, int out)
{
  printf("\nFUNC_CALL;unpack(int,int);\n");
printf("\nSTMT_EXEC;;1242\n");
int len;
  printf("\nSTMT_EXEC;;1243\n");
unsigned int eob;
  printf("\nSTMT_EXEC;;1244\n");
register unsigned int peek;
  printf("\nSTMT_EXEC;;1245\n");
unsigned int peek_mask;
  printf("\nSTMT_EXEC;;1246\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;1247\n");
int tmp___0;
  printf("\nSTMT_EXEC;;1248\n");
int tmp___1;
  printf("\nSTMT_EXEC;;1249\n");
ulg mask;
  printf("\nSTMT_EXEC;;1250\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;1251\n");
int tmp___3;
  printf("\nSTMT_EXEC;;1252\n");
int tmp___4;
  printf("\nSTMT_EXEC;;1253\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;1254\n");
char *__cil_tmp15;
  {
    {
      printf("\nSTMT_EXEC;;1257\n");
ifd = in;
      printf("\nSTMT_EXEC;;1258\n");
ofd = out;
      printf("\nSTMT_EXEC;;1259\n");
read_tree();
      printf("\nSTMT_EXEC;;1260\n");
build_tree();
      printf("\nSTMT_EXEC;;1261\n");
valid = 0;
      printf("\nSTMT_EXEC;;1262\n");
bitbuf___0 = (ulg)0;
      printf("\nSTMT_EXEC;;1263\n");
peek_mask = (unsigned int)((1 << peek_bits) - 1);
      printf("\nSTMT_EXEC;;1264\n");
eob = (unsigned int)(leaves[max_len] - 1);
    }
    {
      printf("\nSTMT_EXEC;;1267\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;1271\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;1274\n");
if (!(valid < peek_bits))
            {
              printf("\nSTMT_EXEC;;1276\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;1278\n");
if (inptr < insize)
            {
              printf("\nSTMT_EXEC;;1280\n");
tmp = inptr;
              printf("\nSTMT_EXEC;;1281\n");
inptr++;
              printf("\nSTMT_EXEC;;1282\n");
tmp___1 = (int)inbuf[tmp];
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;1287\n");
tmp___0 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;1288\n");
tmp___1 = tmp___0;
              }
            }
            printf("\nSTMT_EXEC;;1291\n");
bitbuf___0 = (bitbuf___0 << 8) | (ulg)tmp___1;
            printf("\nSTMT_EXEC;;1292\n");
valid += 8;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;1296\n");
peek = (unsigned int)((bitbuf___0 >> (valid - peek_bits)) & (unsigned long)peek_mask);
        printf("\nSTMT_EXEC;;1297\n");
len = (int)outbuf[peek];
        printf("\nSTMT_EXEC;;1298\n");
if (len > 0)
        {
          printf("\nSTMT_EXEC;;1300\n");
peek >>= peek_bits - len;
        }
        else
        {
          printf("\nSTMT_EXEC;;1304\n");
mask = (ulg)peek_mask;
          printf("\nSTMT_EXEC;;1305\n");
len = peek_bits;
          {
            printf("\nSTMT_EXEC;;1307\n");
while (1)
            {
            while_continue___1: /* CIL Label */;
              printf("\nSTMT_EXEC;;1310\n");
len++;
              printf("\nSTMT_EXEC;;1311\n");
mask = (mask << 1) + 1UL;
              {
                printf("\nSTMT_EXEC;;1313\n");
while (1)
                {
                while_continue___2: /* CIL Label */;
                  printf("\nSTMT_EXEC;;1316\n");
if (!(valid < len))
                  {
                    printf("\nSTMT_EXEC;;1318\n");
goto while_break___2;
                  }
                  printf("\nSTMT_EXEC;;1320\n");
if (inptr < insize)
                  {
                    printf("\nSTMT_EXEC;;1322\n");
tmp___2 = inptr;
                    printf("\nSTMT_EXEC;;1323\n");
inptr++;
                    printf("\nSTMT_EXEC;;1324\n");
tmp___4 = (int)inbuf[tmp___2];
                  }
                  else
                  {
                    {
                      printf("\nSTMT_EXEC;;1329\n");
tmp___3 = fill_inbuf(0);
                      printf("\nSTMT_EXEC;;1330\n");
tmp___4 = tmp___3;
                    }
                  }
                  printf("\nSTMT_EXEC;;1333\n");
bitbuf___0 = (bitbuf___0 << 8) | (ulg)tmp___4;
                  printf("\nSTMT_EXEC;;1334\n");
valid += 8;
                }
              while_break___2: /* CIL Label */;
              }
              printf("\nSTMT_EXEC;;1338\n");
peek = (unsigned int)((bitbuf___0 >> (valid - len)) & mask);
              printf("\nSTMT_EXEC;;1339\n");
if (!(peek < (unsigned int)parents[len]))
              {
                printf("\nSTMT_EXEC;;1341\n");
goto while_break___1;
              }
            }
          while_break___1: /* CIL Label */;
          }
        }
        printf("\nSTMT_EXEC;;1347\n");
if (peek == eob)
        {
          printf("\nSTMT_EXEC;;1349\n");
if (len == max_len)
          {
            printf("\nSTMT_EXEC;;1351\n");
goto while_break;
          }
        }
        printf("\nSTMT_EXEC;;1354\n");
tmp___5 = outcnt;
        printf("\nSTMT_EXEC;;1355\n");
outcnt++;
        printf("\nSTMT_EXEC;;1356\n");
window[tmp___5] = literal[peek + (unsigned int)lit_base[len]];
        printf("\nSTMT_EXEC;;1357\n");
if (outcnt == 32768U)
        {
          {
            printf("\nSTMT_EXEC;;1360\n");
flush_window();
          }
        }
        printf("\nSTMT_EXEC;;1363\n");
valid -= len;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;1368\n");
flush_window();
    }
    printf("\nSTMT_EXEC;;1370\n");
if (orig_len != (ulg)bytes_out)
    {
      {
        printf("\nSTMT_EXEC;;1373\n");
error((char *)"invalid compressed data--length error");
      }
    }
    printf("\nSTMT_EXEC;;1376\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2), __leaf__)) memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1), __leaf__)) memset)(void *__s, int __c, size_t __n);
long bytes_in;
char ifname[1024];
char *progname;
int exit_code;
int quiet;
int to_stdout;
void read_error(void);
int maxbits;
int block_mode;
int unlzw(int in, int out);
int block_mode = 128;
int unlzw(int in, int out)
{
  printf("\nFUNC_CALL;unlzw(int,int);\n");
printf("\nSTMT_EXEC;;1397\n");
register char_type *stackp;
  printf("\nSTMT_EXEC;;1398\n");
code_int code;
  printf("\nSTMT_EXEC;;1399\n");
int finchar;
  printf("\nSTMT_EXEC;;1400\n");
code_int oldcode;
  printf("\nSTMT_EXEC;;1401\n");
code_int incode;
  printf("\nSTMT_EXEC;;1402\n");
long inbits;
  printf("\nSTMT_EXEC;;1403\n");
long posbits;
  printf("\nSTMT_EXEC;;1404\n");
int outpos;
  printf("\nSTMT_EXEC;;1405\n");
unsigned int bitmask;
  printf("\nSTMT_EXEC;;1406\n");
code_int free_ent;
  printf("\nSTMT_EXEC;;1407\n");
code_int maxcode;
  printf("\nSTMT_EXEC;;1408\n");
code_int maxmaxcode;
  printf("\nSTMT_EXEC;;1409\n");
int n_bits;
  printf("\nSTMT_EXEC;;1410\n");
int rsize;
  printf("\nSTMT_EXEC;;1411\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;1412\n");
int tmp___0;
  printf("\nSTMT_EXEC;;1413\n");
register int i___0;
  printf("\nSTMT_EXEC;;1414\n");
int e;
  printf("\nSTMT_EXEC;;1415\n");
int o;
  printf("\nSTMT_EXEC;;1416\n");
register char_type *p;
  printf("\nSTMT_EXEC;;1417\n");
int tmp___1;
  printf("\nSTMT_EXEC;;1418\n");
char const *tmp___2;
  printf("\nSTMT_EXEC;;1419\n");
register int i___1;
  printf("\nSTMT_EXEC;;1420\n");
char *__cil_tmp27;
  printf("\nSTMT_EXEC;;1421\n");
char *__cil_tmp28;
  printf("\nSTMT_EXEC;;1422\n");
char *__cil_tmp29;
  {
    printf("\nSTMT_EXEC;;1424\n");
if (inptr < insize)
    {
      printf("\nSTMT_EXEC;;1426\n");
tmp = inptr;
      printf("\nSTMT_EXEC;;1427\n");
inptr++;
      printf("\nSTMT_EXEC;;1428\n");
maxbits = (int)inbuf[tmp];
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;1433\n");
tmp___0 = fill_inbuf(0);
        printf("\nSTMT_EXEC;;1434\n");
maxbits = tmp___0;
      }
    }
    printf("\nSTMT_EXEC;;1437\n");
block_mode = maxbits & 128;
    printf("\nSTMT_EXEC;;1438\n");
if ((maxbits & 96) != 0)
    {
      printf("\nSTMT_EXEC;;1440\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;1443\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "\n%s: %s: warning, unknown "
                                                   "flags 0x%x\n",
                  progname, ifname, maxbits & 96);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;1449\n");
if (exit_code == 0)
      {
        printf("\nSTMT_EXEC;;1451\n");
exit_code = 2;
      }
    }
    printf("\nSTMT_EXEC;;1454\n");
maxbits &= 31;
    printf("\nSTMT_EXEC;;1455\n");
maxmaxcode = 1L << maxbits;
    printf("\nSTMT_EXEC;;1456\n");
if (maxbits > 16)
    {
      {
        printf("\nSTMT_EXEC;;1459\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "\n%s: %s: compressed with %d "
                                                 "bits, can only handle %d bits\n",
                progname, ifname, maxbits, 16);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;1463\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;1465\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;1467\n");
rsize = (int)insize;
    printf("\nSTMT_EXEC;;1468\n");
n_bits = 9;
    printf("\nSTMT_EXEC;;1469\n");
maxcode = (1L << n_bits) - 1L;
    printf("\nSTMT_EXEC;;1470\n");
bitmask = (unsigned int)((1 << n_bits) - 1);
    printf("\nSTMT_EXEC;;1471\n");
oldcode = (code_int)-1;
    printf("\nSTMT_EXEC;;1472\n");
finchar = 0;
    printf("\nSTMT_EXEC;;1473\n");
outpos = 0;
    printf("\nSTMT_EXEC;;1474\n");
posbits = (long)(inptr << 3);
    printf("\nSTMT_EXEC;;1475\n");
if (block_mode)
    {
      printf("\nSTMT_EXEC;;1477\n");
free_ent = (code_int)257;
    }
    else
    {
      printf("\nSTMT_EXEC;;1481\n");
free_ent = (code_int)256;
    }
    {
      printf("\nSTMT_EXEC;;1484\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((voidp)(prev), 0, (size_t)256);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1485\n");
code = (code_int)255;
    }
    {
      printf("\nSTMT_EXEC;;1488\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;1491\n");
if (!(code >= 0L))
        {
          printf("\nSTMT_EXEC;;1493\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;1495\n");
window[code] = (char_type)code;
        printf("\nSTMT_EXEC;;1496\n");
code--;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;1501\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
      resetbuf:
        {
printf("\nSTMT_EXEC;;1505\n");
o = (int)(posbits >> 3);
}

        printf("\nSTMT_EXEC;;1506\n");
e = (int)(insize - (unsigned int)o);
        printf("\nSTMT_EXEC;;1507\n");
i___0 = 0;
        {
          printf("\nSTMT_EXEC;;1509\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;1512\n");
if (!(i___0 < e))
            {
              printf("\nSTMT_EXEC;;1514\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;1516\n");
inbuf[i___0] = inbuf[i___0 + o];
            printf("\nSTMT_EXEC;;1517\n");
i___0++;
          }
        while_break___1: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;1521\n");
insize = (unsigned int)e;
        printf("\nSTMT_EXEC;;1522\n");
posbits = 0L;
        printf("\nSTMT_EXEC;;1523\n");
if (insize < 64U)
        {
          {
            printf("\nSTMT_EXEC;;1526\n");
rsize = (int)read(in, (void *)((char *)(inbuf) + insize), (size_t)32768);
          }
          printf("\nSTMT_EXEC;;1528\n");
if (rsize == -1)
          {
            {
              printf("\nSTMT_EXEC;;1531\n");
read_error();
            }
          }
          printf("\nSTMT_EXEC;;1534\n");
insize += (unsigned int)rsize;
          printf("\nSTMT_EXEC;;1535\n");
bytes_in = (long)((ulg)bytes_in + (ulg)rsize);
        }
        printf("\nSTMT_EXEC;;1537\n");
if (rsize != 0)
        {
          printf("\nSTMT_EXEC;;1539\n");
inbits = ((long)insize - (long)(insize % (unsigned int)n_bits)) << 3;
        }
        else
        {
          printf("\nSTMT_EXEC;;1543\n");
inbits = ((long)insize << 3) - (long)(n_bits - 1);
        }
        {
          printf("\nSTMT_EXEC;;1546\n");
while (1)
          {
          while_continue___2: /* CIL Label */;
            printf("\nSTMT_EXEC;;1549\n");
if (!(inbits > posbits))
            {
              printf("\nSTMT_EXEC;;1551\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;1553\n");
if (free_ent > maxcode)
            {
              printf("\nSTMT_EXEC;;1555\n");
posbits = (posbits - 1L) + ((long)(n_bits << 3) - ((posbits - 1L) + (long)(n_bits << 3)) % (long)(n_bits << 3));
              printf("\nSTMT_EXEC;;1556\n");
n_bits++;
              printf("\nSTMT_EXEC;;1557\n");
if (n_bits == maxbits)
              {
                printf("\nSTMT_EXEC;;1559\n");
maxcode = maxmaxcode;
              }
              else
              {
                printf("\nSTMT_EXEC;;1563\n");
maxcode = (1L << n_bits) - 1L;
              }
              printf("\nSTMT_EXEC;;1565\n");
bitmask = (unsigned int)((1 << n_bits) - 1);
              printf("\nSTMT_EXEC;;1566\n");
goto resetbuf;
            }
            printf("\nSTMT_EXEC;;1568\n");
p = &inbuf[posbits >> 3];
            printf("\nSTMT_EXEC;;1569\n");
code = ((((long)*(p + 0) | ((long)*(p + 1) << 8)) | ((long)*(p + 2) << 16)) >> (posbits & 7L)) & (long)bitmask;
            printf("\nSTMT_EXEC;;1570\n");
posbits += (long)n_bits;
            printf("\nSTMT_EXEC;;1571\n");
if (oldcode == -1L)
            {
              printf("\nSTMT_EXEC;;1573\n");
if (code >= 256L)
              {
                {
                  printf("\nSTMT_EXEC;;1576\n");
error((char *)"corrupt input.");
                }
              }
              printf("\nSTMT_EXEC;;1579\n");
tmp___1 = outpos;
              printf("\nSTMT_EXEC;;1580\n");
outpos++;
              printf("\nSTMT_EXEC;;1581\n");
oldcode = code;
              printf("\nSTMT_EXEC;;1582\n");
finchar = (int)oldcode;
              printf("\nSTMT_EXEC;;1583\n");
outbuf[tmp___1] = (char_type)finchar;
              printf("\nSTMT_EXEC;;1584\n");
goto while_continue___2;
            }
            printf("\nSTMT_EXEC;;1586\n");
if (code == 256L)
            {
              printf("\nSTMT_EXEC;;1588\n");
if (block_mode)
              {
                {
                  printf("\nSTMT_EXEC;;1591\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((voidp)(prev), 0, (size_t)256);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;1592\n");
free_ent = (code_int)256;
                  printf("\nSTMT_EXEC;;1593\n");
posbits = (posbits - 1L) + ((long)(n_bits << 3) - ((posbits - 1L) + (long)(n_bits << 3)) % (long)(n_bits << 3));
                  printf("\nSTMT_EXEC;;1594\n");
n_bits = 9;
                  printf("\nSTMT_EXEC;;1595\n");
maxcode = (1L << n_bits) - 1L;
                  printf("\nSTMT_EXEC;;1596\n");
bitmask = (unsigned int)((1 << n_bits) - 1);
                }
                printf("\nSTMT_EXEC;;1598\n");
goto resetbuf;
              }
            }
            printf("\nSTMT_EXEC;;1601\n");
incode = code;
            printf("\nSTMT_EXEC;;1602\n");
stackp = (char_type *)(&d_buf[32767]);
            printf("\nSTMT_EXEC;;1603\n");
if (code >= free_ent)
            {
              printf("\nSTMT_EXEC;;1605\n");
if (code > free_ent)
              {
                printf("\nSTMT_EXEC;;1607\n");
if (!test)
                {
                  printf("\nSTMT_EXEC;;1609\n");
if (outpos > 0)
                  {
                    {
                      printf("\nSTMT_EXEC;;1612\n");
write_buf(out, (voidp)((char *)(outbuf)), (unsigned int)outpos);
                      printf("\nSTMT_EXEC;;1613\n");
bytes_out = (long)((ulg)bytes_out + (ulg)outpos);
                    }
                  }
                }
                printf("\nSTMT_EXEC;;1617\n");
if (to_stdout)
                {
                  printf("\nSTMT_EXEC;;1619\n");
tmp___2 = "corrupt input.";
                }
                else
                {
                  printf("\nSTMT_EXEC;;1623\n");
tmp___2 = "corrupt input. Use zcat to recover some data.";
                }
                {
                  printf("\nSTMT_EXEC;;1626\n");
error((char *)tmp___2);
                }
              }
              printf("\nSTMT_EXEC;;1629\n");
stackp--;
              printf("\nSTMT_EXEC;;1630\n");
*stackp = (char_type)finchar;
              printf("\nSTMT_EXEC;;1631\n");
code = oldcode;
            }
            {
              printf("\nSTMT_EXEC;;1634\n");
while (1)
              {
              while_continue___3: /* CIL Label */;
                printf("\nSTMT_EXEC;;1637\n");
if (!((cmp_code_int)code >= 256UL))
                {
                  printf("\nSTMT_EXEC;;1639\n");
goto while_break___3;
                }
                printf("\nSTMT_EXEC;;1641\n");
stackp--;
                printf("\nSTMT_EXEC;;1642\n");
*stackp = window[code];
                printf("\nSTMT_EXEC;;1643\n");
code = (code_int)prev[code];
              }
            while_break___3: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;1647\n");
stackp--;
            printf("\nSTMT_EXEC;;1648\n");
finchar = (int)window[code];
            printf("\nSTMT_EXEC;;1649\n");
*stackp = (char_type)finchar;
            printf("\nSTMT_EXEC;;1650\n");
i___1 = (int)((char_type *)(&d_buf[32767]) - stackp);
            printf("\nSTMT_EXEC;;1651\n");
if (outpos + i___1 >= 16384)
            {
              {
                printf("\nSTMT_EXEC;;1654\n");
while (1)
                {
                while_continue___4: /* CIL Label */;
                  printf("\nSTMT_EXEC;;1657\n");
if (i___1 > 16384 - outpos)
                  {
                    printf("\nSTMT_EXEC;;1659\n");
i___1 = 16384 - outpos;
                  }
                  printf("\nSTMT_EXEC;;1661\n");
if (i___1 > 0)
                  {
                    {
                      printf("\nSTMT_EXEC;;1664\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void * /* __restrict  */)(outbuf + outpos), (void const * /* __restrict  */)stackp, (size_t)i___1);printf("\nFUNC_RETURN;;\n");

                      printf("\nSTMT_EXEC;;1665\n");
outpos += i___1;
                    }
                  }
                  printf("\nSTMT_EXEC;;1668\n");
if (outpos >= 16384)
                  {
                    printf("\nSTMT_EXEC;;1670\n");
if (!test)
                    {
                      {
                        printf("\nSTMT_EXEC;;1673\n");
write_buf(out, (voidp)((char *)(outbuf)), (unsigned int)outpos);
                        printf("\nSTMT_EXEC;;1674\n");
bytes_out = (long)((ulg)bytes_out + (ulg)outpos);
                      }
                    }
                    printf("\nSTMT_EXEC;;1677\n");
outpos = 0;
                  }
                  printf("\nSTMT_EXEC;;1679\n");
stackp += i___1;
                  printf("\nSTMT_EXEC;;1680\n");
i___1 = (int)((char_type *)(&d_buf[32767]) - stackp);
                  printf("\nSTMT_EXEC;;1681\n");
if (!(i___1 > 0))
                  {
                    printf("\nSTMT_EXEC;;1683\n");
goto while_break___4;
                  }
                }
              while_break___4: /* CIL Label */;
              }
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;1692\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void * /* __restrict  */)(outbuf + outpos), (void const * /* __restrict  */)stackp, (size_t)i___1);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;1693\n");
outpos += i___1;
              }
            }
            printf("\nSTMT_EXEC;;1696\n");
code = free_ent;
            printf("\nSTMT_EXEC;;1697\n");
if (code < maxmaxcode)
            {
              printf("\nSTMT_EXEC;;1699\n");
prev[code] = (unsigned short)oldcode;
              printf("\nSTMT_EXEC;;1700\n");
window[code] = (char_type)finchar;
              printf("\nSTMT_EXEC;;1701\n");
free_ent = code + 1L;
            }
            printf("\nSTMT_EXEC;;1703\n");
oldcode = incode;
          }
        while_break___2: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;1707\n");
if (!(rsize != 0))
        {
          printf("\nSTMT_EXEC;;1709\n");
goto while_break___0;
        }
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1714\n");
if (!test)
    {
      printf("\nSTMT_EXEC;;1716\n");
if (outpos > 0)
      {
        {
          printf("\nSTMT_EXEC;;1719\n");
write_buf(out, (voidp)((char *)(outbuf)), (unsigned int)outpos);
          printf("\nSTMT_EXEC;;1720\n");
bytes_out = (long)((ulg)bytes_out + (ulg)outpos);
        }
      }
    }
    printf("\nSTMT_EXEC;;1724\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int lzw(int in, int out);
static int msg_done = 0;
int lzw(int in, int out)
{
  printf("\nFUNC_CALL;lzw(int,int);\n");
{
    printf("\nSTMT_EXEC;;1732\n");
if (msg_done)
    {
      printf("\nSTMT_EXEC;;1734\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    {
      printf("\nSTMT_EXEC;;1737\n");
msg_done = 1;
      printf("\nSTMT_EXEC;;1738\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "output in compress .Z format "
                                                                                  "not supported\n");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;1741\n");
if (in != out)
    {
      printf("\nSTMT_EXEC;;1743\n");
exit_code = 1;
    }
    printf("\nSTMT_EXEC;;1745\n");
printf("\nFUNC_RETURN;;\n");
return (1);
  }
printf("\nFUNC_RETURN;;\n");
}
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
int copy(int in, int out)
{
  printf("\nFUNC_CALL;copy(int,int);\n");
printf("\nSTMT_EXEC;;1777\n");
int *tmp;
  printf("\nSTMT_EXEC;;1778\n");
int *tmp___0;
  {
    {
      printf("\nSTMT_EXEC;;1781\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1782\n");
*tmp = 0;
    }
    {
      printf("\nSTMT_EXEC;;1785\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;1788\n");
if (insize != 0U)
        {
          printf("\nSTMT_EXEC;;1790\n");
if (!((int)insize != -1))
          {
            printf("\nSTMT_EXEC;;1792\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;1797\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;1800\n");
write_buf(out, (voidp)((char *)(inbuf)), insize);
          printf("\nSTMT_EXEC;;1801\n");
bytes_out += (long)insize;
          printf("\nSTMT_EXEC;;1802\n");
insize = (unsigned int)read(in, (void *)((char *)(inbuf)), (size_t)32768);
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1807\n");
if ((int)insize == -1)
    {
      {
        printf("\nSTMT_EXEC;;1810\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;1812\n");
if (*tmp___0 != 0)
      {
        {
          printf("\nSTMT_EXEC;;1815\n");
read_error();
        }
      }
    }
    printf("\nSTMT_EXEC;;1819\n");
bytes_in = bytes_out;
    printf("\nSTMT_EXEC;;1820\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static ulg crc = (ulg)4294967295L;
ulg updcrc(uch *s, unsigned int n)
{
  printf("\nFUNC_CALL;updcrc(uch *,unsigned int);\n");
printf("\nSTMT_EXEC;;1826\n");
register ulg c;
  printf("\nSTMT_EXEC;;1827\n");
uch *tmp;
  {
    printf("\nSTMT_EXEC;;1829\n");
if ((unsigned long)s == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;1831\n");
c = (ulg)4294967295L;
    }
    else
    {
      printf("\nSTMT_EXEC;;1835\n");
c = crc;
      printf("\nSTMT_EXEC;;1836\n");
if (n)
      {
        {
          printf("\nSTMT_EXEC;;1839\n");
while (1)
          {
          while_continue: /* CIL Label */;
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
    }
    printf("\nSTMT_EXEC;;1855\n");
crc = c;
    printf("\nSTMT_EXEC;;1856\n");
printf("\nFUNC_RETURN;;\n");
return (c ^ 4294967295UL);
  }
printf("\nFUNC_RETURN;;\n");
}
void clear_bufs(void)
{
  printf("\nFUNC_CALL;clear_bufs();\n");
{
    printf("\nSTMT_EXEC;;1862\n");
outcnt = 0U;
    printf("\nSTMT_EXEC;;1863\n");
inptr = 0U;
    printf("\nSTMT_EXEC;;1864\n");
insize = inptr;
    printf("\nSTMT_EXEC;;1865\n");
bytes_out = 0L;
    printf("\nSTMT_EXEC;;1866\n");
bytes_in = bytes_out;
    printf("\nSTMT_EXEC;;1867\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
int fill_inbuf(int eof_ok)
{
  printf("\nFUNC_CALL;fill_inbuf(int);\n");
printf("\nSTMT_EXEC;;1872\n");
int len;
  printf("\nSTMT_EXEC;;1873\n");
int *tmp;
  {
    {
      printf("\nSTMT_EXEC;;1876\n");
insize = 0U;
      printf("\nSTMT_EXEC;;1877\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;1878\n");
*tmp = 0;
    }
    {
      printf("\nSTMT_EXEC;;1881\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;1885\n");
len = (int)read(ifd, (void *)((char *)(inbuf) + insize), (size_t)(32768U - insize));
        }
        printf("\nSTMT_EXEC;;1887\n");
if (len == 0)
        {
          printf("\nSTMT_EXEC;;1889\n");
goto while_break;
        }
        else
        {
          printf("\nSTMT_EXEC;;1893\n");
if (len == -1)
          {
            printf("\nSTMT_EXEC;;1895\n");
goto while_break;
          }
        }
        printf("\nSTMT_EXEC;;1898\n");
insize += (unsigned int)len;
        printf("\nSTMT_EXEC;;1899\n");
if (!(insize < 32768U))
        {
          printf("\nSTMT_EXEC;;1901\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1906\n");
if (insize == 0U)
    {
      printf("\nSTMT_EXEC;;1908\n");
if (eof_ok)
      {
        printf("\nSTMT_EXEC;;1910\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
      }
      {
        printf("\nSTMT_EXEC;;1913\n");
read_error();
      }
    }
    printf("\nSTMT_EXEC;;1916\n");
bytes_in = (long)((ulg)bytes_in + (ulg)insize);
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
{
    printf("\nSTMT_EXEC;;1924\n");
if (outcnt == 0U)
    {
      printf("\nSTMT_EXEC;;1926\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;1929\n");
write_buf(ofd, (voidp)((char *)(outbuf)), outcnt);
      printf("\nSTMT_EXEC;;1930\n");
bytes_out = (long)((ulg)bytes_out + (ulg)outcnt);
      printf("\nSTMT_EXEC;;1931\n");
outcnt = 0U;
    }
    printf("\nSTMT_EXEC;;1933\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void flush_window(void)
{
  printf("\nFUNC_CALL;flush_window();\n");
{
    printf("\nSTMT_EXEC;;1939\n");
if (outcnt == 0U)
    {
      printf("\nSTMT_EXEC;;1941\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;1944\n");
updcrc(window, outcnt);
    }
    printf("\nSTMT_EXEC;;1946\n");
if (!test)
    {
      {
        printf("\nSTMT_EXEC;;1949\n");
write_buf(ofd, (voidp)((char *)(window)), outcnt);
      }
    }
    printf("\nSTMT_EXEC;;1952\n");
bytes_out = (long)((ulg)bytes_out + (ulg)outcnt);
    printf("\nSTMT_EXEC;;1953\n");
outcnt = 0U;
    printf("\nSTMT_EXEC;;1954\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void write_buf(int fd, voidp buf, unsigned int cnt)
{
  printf("\nFUNC_CALL;write_buf(int,voidp,unsigned int);\n");
printf("\nSTMT_EXEC;;1959\n");
unsigned int n;
  {
    {
      printf("\nSTMT_EXEC;;1962\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;1966\n");
printf("\nFUNC_CALL;write(int,const void *,size_t);\n");
n = (unsigned int)write(fd, (void const *)buf, (size_t)cnt);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;1968\n");
if (!(n != cnt))
        {
          printf("\nSTMT_EXEC;;1970\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;1972\n");
if (n == 4294967295U)
        {
          {
            printf("\nSTMT_EXEC;;1975\n");
write_error();
          }
        }
        printf("\nSTMT_EXEC;;1978\n");
cnt -= n;
        printf("\nSTMT_EXEC;;1979\n");
buf = (voidp)((char *)buf + n);
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;1983\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
char *strlwr(char *s)
{
  printf("\nFUNC_CALL;strlwr(char *);\n");
printf("\nSTMT_EXEC;;1988\n");
char *t;
  printf("\nSTMT_EXEC;;1989\n");
unsigned short const **tmp___0;
  {
    printf("\nSTMT_EXEC;;1991\n");
t = s;
    {
      printf("\nSTMT_EXEC;;1993\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;1996\n");
if (!*t)
        {
          printf("\nSTMT_EXEC;;1998\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;2001\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___0 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;2003\n");
if ((int const) * (*tmp___0 + (int)*t) & 256)
        {
          printf("\nSTMT_EXEC;;2005\n");
*t = (char)(((int)*t - 65) + 97);
        }
        else
        {
          printf("\nSTMT_EXEC;;2009\n");
*t = *t;
        }
        printf("\nSTMT_EXEC;;2011\n");
t++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2015\n");
printf("\nFUNC_RETURN;;\n");
return (s);
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
    printf("\nSTMT_EXEC;;2025\n");
if ((unsigned long)p != (unsigned long)((void *)0))
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
char *add_envopt(int *argcp, char ***argvp, char *env___0)
{
  printf("\nFUNC_CALL;add_envopt(int *,char ***,char *);\n");
printf("\nSTMT_EXEC;;2034\n");
char *p;
  printf("\nSTMT_EXEC;;2035\n");
char **oargv;
  printf("\nSTMT_EXEC;;2036\n");
char **nargv;
  printf("\nSTMT_EXEC;;2037\n");
int oargc;
  printf("\nSTMT_EXEC;;2038\n");
int nargc;
  printf("\nSTMT_EXEC;;2039\n");
char *tmp;
  printf("\nSTMT_EXEC;;2040\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;2041\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;2042\n");
size_t tmp___3;
  printf("\nSTMT_EXEC;;2043\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;2044\n");
int tmp___6;
  printf("\nSTMT_EXEC;;2045\n");
char **tmp___7;
  printf("\nSTMT_EXEC;;2046\n");
char **tmp___8;
  printf("\nSTMT_EXEC;;2047\n");
size_t tmp___9;
  printf("\nSTMT_EXEC;;2048\n");
char **tmp___10;
  printf("\nSTMT_EXEC;;2049\n");
char *tmp___11;
  printf("\nSTMT_EXEC;;2050\n");
char **tmp___12;
  printf("\nSTMT_EXEC;;2051\n");
char **tmp___13;
  printf("\nSTMT_EXEC;;2052\n");
int tmp___14;
  printf("\nSTMT_EXEC;;2053\n");
char *__cil_tmp25;
  printf("\nSTMT_EXEC;;2054\n");
char *__cil_tmp26;
  {
    {
      printf("\nSTMT_EXEC;;2057\n");
oargc = *argcp;
      printf("\nSTMT_EXEC;;2058\n");
nargc = 0;
      printf("\nSTMT_EXEC;;2059\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
tmp = getenv((char const *)env___0);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2060\n");
env___0 = tmp;
    }
    printf("\nSTMT_EXEC;;2062\n");
if ((unsigned long)env___0 == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;2064\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)((void *)0));
    }
    {
      printf("\nSTMT_EXEC;;2067\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen((char const *)env___0);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2068\n");
p = (char *)xmalloc((unsigned int)(tmp___0 + 1UL));
      printf("\nSTMT_EXEC;;2069\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
env___0 = strcpy((char * /* __restrict  */)p, (char const * /* __restrict  */)env___0);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2070\n");
p = env___0;
    }
    {
      printf("\nSTMT_EXEC;;2073\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;2076\n");
if (!*p)
        {
          printf("\nSTMT_EXEC;;2078\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;2081\n");
printf("\nFUNC_CALL;strspn(const char *,const char *);\n");
tmp___2 = strspn((char const *)p, " \t");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;2082\n");
p += tmp___2;
        }
        printf("\nSTMT_EXEC;;2084\n");
if ((int)*p == 0)
        {
          printf("\nSTMT_EXEC;;2086\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;2089\n");
printf("\nFUNC_CALL;strcspn(const char *,const char *);\n");
tmp___3 = strcspn((char const *)p, " \t");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;2090\n");
p += tmp___3;
        }
        printf("\nSTMT_EXEC;;2092\n");
if (*p)
        {
          printf("\nSTMT_EXEC;;2094\n");
tmp___4 = p;
          printf("\nSTMT_EXEC;;2095\n");
p++;
          printf("\nSTMT_EXEC;;2096\n");
*tmp___4 = (char)'\000';
        }
        printf("\nSTMT_EXEC;;2098\n");
nargc++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2102\n");
if (nargc == 0)
    {
      {
        printf("\nSTMT_EXEC;;2105\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)env___0);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;2107\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)((void *)0));
    }
    {
      printf("\nSTMT_EXEC;;2110\n");
*argcp += nargc;
      printf("\nSTMT_EXEC;;2111\n");
printf("\nFUNC_CALL;calloc(size_t,size_t);\n");
nargv = (char **)calloc((size_t)(*argcp + 1), sizeof(char *));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;2113\n");
if ((unsigned long)nargv == (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;2116\n");
error((char *)"out of memory");
      }
    }
    printf("\nSTMT_EXEC;;2119\n");
oargv = *argvp;
    printf("\nSTMT_EXEC;;2120\n");
*argvp = nargv;
    printf("\nSTMT_EXEC;;2121\n");
tmp___6 = oargc;
    printf("\nSTMT_EXEC;;2122\n");
oargc--;
    printf("\nSTMT_EXEC;;2123\n");
if (tmp___6 < 0)
    {
      {
        printf("\nSTMT_EXEC;;2126\n");
error((char *)"argc<=0");
      }
    }
    printf("\nSTMT_EXEC;;2129\n");
tmp___7 = nargv;
    printf("\nSTMT_EXEC;;2130\n");
nargv++;
    printf("\nSTMT_EXEC;;2131\n");
tmp___8 = oargv;
    printf("\nSTMT_EXEC;;2132\n");
oargv++;
    printf("\nSTMT_EXEC;;2133\n");
*tmp___7 = *tmp___8;
    printf("\nSTMT_EXEC;;2134\n");
p = env___0;
    {
      printf("\nSTMT_EXEC;;2136\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;2139\n");
if (!(nargc > 0))
        {
          printf("\nSTMT_EXEC;;2141\n");
goto while_break___0;
        }
        {
          printf("\nSTMT_EXEC;;2144\n");
printf("\nFUNC_CALL;strspn(const char *,const char *);\n");
tmp___9 = strspn((char const *)p, " \t");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;2145\n");
p += tmp___9;
          printf("\nSTMT_EXEC;;2146\n");
tmp___10 = nargv;
          printf("\nSTMT_EXEC;;2147\n");
nargv++;
          printf("\nSTMT_EXEC;;2148\n");
*tmp___10 = p;
        }
        {
          printf("\nSTMT_EXEC;;2151\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;2154\n");
tmp___11 = p;
            printf("\nSTMT_EXEC;;2155\n");
p++;
            printf("\nSTMT_EXEC;;2156\n");
if (!*tmp___11)
            {
              printf("\nSTMT_EXEC;;2158\n");
goto while_break___1;
            }
          }
        while_break___1: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2163\n");
nargc--;
      }
    while_break___0: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;2168\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;2171\n");
tmp___14 = oargc;
        printf("\nSTMT_EXEC;;2172\n");
oargc--;
        printf("\nSTMT_EXEC;;2173\n");
if (!tmp___14)
        {
          printf("\nSTMT_EXEC;;2175\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;2177\n");
tmp___12 = nargv;
        printf("\nSTMT_EXEC;;2178\n");
nargv++;
        printf("\nSTMT_EXEC;;2179\n");
tmp___13 = oargv;
        printf("\nSTMT_EXEC;;2180\n");
oargv++;
        printf("\nSTMT_EXEC;;2181\n");
*tmp___12 = *tmp___13;
      }
    while_break___2: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2185\n");
*nargv = (char *)((void *)0);
    printf("\nSTMT_EXEC;;2186\n");
printf("\nFUNC_RETURN;;\n");
return (env___0);
  }
printf("\nFUNC_RETURN;;\n");
}
void error(char *m)
{
  printf("\nFUNC_CALL;error(char *);\n");
{
    {
      printf("\nSTMT_EXEC;;2193\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: %s: %s\n", progname, ifname, m);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2194\n");
abort_gzip();
    }
    printf("\nSTMT_EXEC;;2196\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void read_error(void)
{
  printf("\nFUNC_CALL;read_error();\n");
printf("\nSTMT_EXEC;;2201\n");
int *tmp;
  {
    {
      printf("\nSTMT_EXEC;;2204\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: ", progname);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2205\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;2207\n");
if (*tmp != 0)
    {
      {
        printf("\nSTMT_EXEC;;2210\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;2216\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: unexpected end of file\n", ifname);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;2220\n");
abort_gzip();
    }
    printf("\nSTMT_EXEC;;2222\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void write_error(void)
{
  printf("\nFUNC_CALL;write_error();\n");
{
    {
      printf("\nSTMT_EXEC;;2229\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: ", progname);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2230\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2231\n");
abort_gzip();
    }
    printf("\nSTMT_EXEC;;2233\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void display_ratio(long num, long den, FILE *file)
{
  printf("\nFUNC_CALL;display_ratio(long,long,FILE *);\n");
printf("\nSTMT_EXEC;;2238\n");
long ratio;
  {
    printf("\nSTMT_EXEC;;2240\n");
if (den == 0L)
    {
      printf("\nSTMT_EXEC;;2242\n");
ratio = 0L;
    }
    else
    {
      printf("\nSTMT_EXEC;;2246\n");
if (den < 2147483L)
      {
        printf("\nSTMT_EXEC;;2248\n");
ratio = (1000L * num) / den;
      }
      else
      {
        printf("\nSTMT_EXEC;;2252\n");
ratio = num / (den / 1000L);
      }
    }
    printf("\nSTMT_EXEC;;2255\n");
if (ratio < 0L)
    {
      {
        printf("\nSTMT_EXEC;;2258\n");
printf("\nFUNC_CALL;_IO_putc(int,_IO_FILE *);\n");
_IO_putc('-', file);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;2259\n");
ratio = -ratio;
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;2265\n");
printf("\nFUNC_CALL;_IO_putc(int,_IO_FILE *);\n");
_IO_putc(' ', file);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;2269\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) file, (char const * /* __restrict  */) "%2ld.%1ld%%", ratio / 10L, ratio % 10L);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;2271\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
voidp xmalloc(unsigned int size)
{
  printf("\nFUNC_CALL;xmalloc(unsigned int);\n");
printf("\nSTMT_EXEC;;2276\n");
voidp cp;
  printf("\nSTMT_EXEC;;2277\n");
voidp tmp;
  printf("\nSTMT_EXEC;;2278\n");
char *__cil_tmp4;
  {
    {
      printf("\nSTMT_EXEC;;2281\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
tmp = malloc((size_t)size);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;2282\n");
cp = tmp;
    }
    printf("\nSTMT_EXEC;;2284\n");
if ((unsigned long)cp == (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;2287\n");
error((char *)"out of memory");
      }
    }
    printf("\nSTMT_EXEC;;2290\n");
printf("\nFUNC_RETURN;;\n");
return (cp);
  }
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
int lbits = 9;
int dbits = 6;
unsigned int hufts;
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
  printf("\nSTMT_EXEC;;2332\n");
int y;
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
  printf("\nSTMT_EXEC;;2342\n");
void *__cil_tmp36;
  printf("\nSTMT_EXEC;;2343\n");
void *__cil_tmp37;
  printf("\nSTMT_EXEC;;2344\n");
void *__cil_tmp38;
  printf("\nSTMT_EXEC;;2345\n");
void *__cil_tmp39;
  printf("\nSTMT_EXEC;;2346\n");
int __cil_tmp40;
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
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;2367\n");
if (c[0] == n)
    {
      printf("\nSTMT_EXEC;;2369\n");
*t = (struct huft *)((void *)0);
      printf("\nSTMT_EXEC;;2370\n");
*m = 0;
      printf("\nSTMT_EXEC;;2371\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;2373\n");
l = *m;
    printf("\nSTMT_EXEC;;2374\n");
j___0 = 1U;
    {
      printf("\nSTMT_EXEC;;2376\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;2379\n");
if (!(j___0 <= 16U))
        {
          printf("\nSTMT_EXEC;;2381\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;2383\n");
if (c[j___0])
        {
          printf("\nSTMT_EXEC;;2385\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;2387\n");
j___0++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2391\n");
k = (int)j___0;
    printf("\nSTMT_EXEC;;2392\n");
if ((unsigned int)l < j___0)
    {
      printf("\nSTMT_EXEC;;2394\n");
l = (int)j___0;
    }
    printf("\nSTMT_EXEC;;2396\n");
i___0 = 16U;
    {
      printf("\nSTMT_EXEC;;2398\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;2401\n");
if (!i___0)
        {
          printf("\nSTMT_EXEC;;2403\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;2405\n");
if (c[i___0])
        {
          printf("\nSTMT_EXEC;;2407\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;2409\n");
i___0--;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2413\n");
g = (int)i___0;
    printf("\nSTMT_EXEC;;2414\n");
if ((unsigned int)l > i___0)
    {
      printf("\nSTMT_EXEC;;2416\n");
l = (int)i___0;
    }
    printf("\nSTMT_EXEC;;2418\n");
*m = l;
    printf("\nSTMT_EXEC;;2419\n");
y = 1 << j___0;
    {
      printf("\nSTMT_EXEC;;2421\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;2424\n");
if (!(j___0 < i___0))
        {
          printf("\nSTMT_EXEC;;2426\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;2428\n");
y = (int)((unsigned int)y - c[j___0]);
        printf("\nSTMT_EXEC;;2429\n");
if (y < 0)
        {
          printf("\nSTMT_EXEC;;2431\n");
printf("\nFUNC_RETURN;;\n");
return (2);
        }
        printf("\nSTMT_EXEC;;2433\n");
j___0++;
        printf("\nSTMT_EXEC;;2434\n");
y <<= 1;
      }
    while_break___2: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2438\n");
y = (int)((unsigned int)y - c[i___0]);
    printf("\nSTMT_EXEC;;2439\n");
if (y < 0)
    {
      printf("\nSTMT_EXEC;;2441\n");
printf("\nFUNC_RETURN;;\n");
return (2);
    }
    printf("\nSTMT_EXEC;;2443\n");
c[i___0] += (unsigned int)y;
    printf("\nSTMT_EXEC;;2444\n");
j___0 = 0U;
    printf("\nSTMT_EXEC;;2445\n");
x[1] = j___0;
    printf("\nSTMT_EXEC;;2446\n");
p = c + 1;
    printf("\nSTMT_EXEC;;2447\n");
xp = x + 2;
    {
      printf("\nSTMT_EXEC;;2449\n");
while (1)
      {
      while_continue___3: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;2467\n");
i___0 = 0U;
    {
      printf("\nSTMT_EXEC;;2469\n");
while (1)
      {
      while_continue___4: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;2494\n");
u[0] = (struct huft *)((void *)0);
    printf("\nSTMT_EXEC;;2495\n");
q = (struct huft *)((void *)0);
    printf("\nSTMT_EXEC;;2496\n");
z = 0U;
    {
      printf("\nSTMT_EXEC;;2498\n");
while (1)
      {
      while_continue___5: /* CIL Label */;
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
          while_continue___6: /* CIL Label */;
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
              printf("\nSTMT_EXEC;;2517\n");
while (1)
              {
              while_continue___7: /* CIL Label */;
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
                printf("\nSTMT_EXEC;;2526\n");
z = (unsigned int)(g - w);
                printf("\nSTMT_EXEC;;2527\n");
if (z > (unsigned int)l)
                {
                  printf("\nSTMT_EXEC;;2529\n");
z = (unsigned int)l;
                }
                else
                {
                  printf("\nSTMT_EXEC;;2533\n");
z = z;
                }
                printf("\nSTMT_EXEC;;2535\n");
j___0 = (unsigned int)(k - w);
                printf("\nSTMT_EXEC;;2536\n");
f = (unsigned int)(1 << j___0);
                printf("\nSTMT_EXEC;;2537\n");
if (f > a + 1U)
                {
                  printf("\nSTMT_EXEC;;2539\n");
f -= a + 1U;
                  printf("\nSTMT_EXEC;;2540\n");
xp = c + k;
                  {
                    printf("\nSTMT_EXEC;;2542\n");
while (1)
                    {
                    while_continue___8: /* CIL Label */;
                      printf("\nSTMT_EXEC;;2545\n");
j___0++;
                      printf("\nSTMT_EXEC;;2546\n");
if (!(j___0 < z))
                      {
                        printf("\nSTMT_EXEC;;2548\n");
goto while_break___8;
                      }
                      printf("\nSTMT_EXEC;;2550\n");
f <<= 1;
                      printf("\nSTMT_EXEC;;2551\n");
xp++;
                      printf("\nSTMT_EXEC;;2552\n");
if (f <= *xp)
                      {
                        printf("\nSTMT_EXEC;;2554\n");
goto while_break___8;
                      }
                      printf("\nSTMT_EXEC;;2556\n");
f -= *xp;
                    }
                  while_break___8: /* CIL Label */;
                  }
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
                  printf("\nSTMT_EXEC;;2567\n");
if (h)
                  {
                    {
                      printf("\nSTMT_EXEC;;2570\n");
huft_free(u[0]);
                    }
                  }
                  printf("\nSTMT_EXEC;;2573\n");
printf("\nFUNC_RETURN;;\n");
return (3);
                }
                printf("\nSTMT_EXEC;;2575\n");
hufts += z + 1U;
                printf("\nSTMT_EXEC;;2576\n");
*t = q + 1;
                printf("\nSTMT_EXEC;;2577\n");
t = &q->v.t;
                printf("\nSTMT_EXEC;;2578\n");
*t = (struct huft *)((void *)0);
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
            printf("\nSTMT_EXEC;;2594\n");
if ((unsigned long)p >= (unsigned long)(v + n))
            {
              printf("\nSTMT_EXEC;;2596\n");
r.e = (uch)99;
            }
            else
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
              while_continue___9: /* CIL Label */;
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
              while_continue___10: /* CIL Label */;
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
              printf("\nSTMT_EXEC;;2653\n");
while (1)
              {
              while_continue___11: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;2672\n");
if (y != 0)
    {
      printf("\nSTMT_EXEC;;2674\n");
if (g != 1)
      {
        printf("\nSTMT_EXEC;;2676\n");
tmp___7 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;2680\n");
tmp___7 = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;2685\n");
tmp___7 = 0;
    }
    printf("\nSTMT_EXEC;;2687\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___7);
  }
printf("\nFUNC_RETURN;;\n");
}
int huft_free(struct huft *t)
{
  printf("\nFUNC_CALL;huft_free(struct huft *);\n");
printf("\nSTMT_EXEC;;2692\n");
register struct huft *p;
  printf("\nSTMT_EXEC;;2693\n");
register struct huft *q;
  {
    printf("\nSTMT_EXEC;;2695\n");
p = t;
    {
      printf("\nSTMT_EXEC;;2697\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;2700\n");
if (!((unsigned long)p != (unsigned long)((struct huft *)((void *)0))))
        {
          printf("\nSTMT_EXEC;;2702\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;2705\n");
p--;
          printf("\nSTMT_EXEC;;2706\n");
q = p->v.t;
          printf("\nSTMT_EXEC;;2707\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)((char *)p));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;2708\n");
p = q;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2713\n");
printf("\nFUNC_RETURN;;\n");
return (0);
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
  printf("\nSTMT_EXEC;;2728\n");
int tmp___0;
  printf("\nSTMT_EXEC;;2729\n");
int tmp___1;
  printf("\nSTMT_EXEC;;2730\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;2731\n");
int tmp___3;
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
  printf("\nSTMT_EXEC;;2738\n");
int tmp___10;
  printf("\nSTMT_EXEC;;2739\n");
int tmp___11;
  printf("\nSTMT_EXEC;;2740\n");
unsigned int tmp___12;
  printf("\nSTMT_EXEC;;2741\n");
int tmp___13;
  printf("\nSTMT_EXEC;;2742\n");
int tmp___14;
  printf("\nSTMT_EXEC;;2743\n");
unsigned int tmp___15;
  printf("\nSTMT_EXEC;;2744\n");
int tmp___16;
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
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;2760\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;2763\n");
if (!(k < (unsigned int)bl))
            {
              printf("\nSTMT_EXEC;;2765\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;2767\n");
if (inptr < insize)
            {
              printf("\nSTMT_EXEC;;2769\n");
tmp = inptr;
              printf("\nSTMT_EXEC;;2770\n");
inptr++;
              printf("\nSTMT_EXEC;;2771\n");
tmp___1 = (int)inbuf[tmp];
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;2776\n");
tmp___0 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;2777\n");
tmp___1 = tmp___0;
              }
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
            printf("\nSTMT_EXEC;;2790\n");
while (1)
            {
            while_continue___1: /* CIL Label */;
              printf("\nSTMT_EXEC;;2793\n");
if (e == 99U)
              {
                printf("\nSTMT_EXEC;;2795\n");
printf("\nFUNC_RETURN;;\n");
return (1);
              }
              printf("\nSTMT_EXEC;;2797\n");
b >>= (int)t->b;
              printf("\nSTMT_EXEC;;2798\n");
k -= (unsigned int)t->b;
              printf("\nSTMT_EXEC;;2799\n");
e -= 16U;
              {
                printf("\nSTMT_EXEC;;2801\n");
while (1)
                {
                while_continue___2: /* CIL Label */;
                  printf("\nSTMT_EXEC;;2804\n");
if (!(k < e))
                  {
                    printf("\nSTMT_EXEC;;2806\n");
goto while_break___2;
                  }
                  printf("\nSTMT_EXEC;;2808\n");
if (inptr < insize)
                  {
                    printf("\nSTMT_EXEC;;2810\n");
tmp___2 = inptr;
                    printf("\nSTMT_EXEC;;2811\n");
inptr++;
                    printf("\nSTMT_EXEC;;2812\n");
tmp___4 = (int)inbuf[tmp___2];
                  }
                  else
                  {
                    {
                      printf("\nSTMT_EXEC;;2817\n");
tmp___3 = fill_inbuf(0);
                      printf("\nSTMT_EXEC;;2818\n");
tmp___4 = tmp___3;
                    }
                  }
                  printf("\nSTMT_EXEC;;2821\n");
b |= (ulg)((uch)tmp___4) << k;
                  printf("\nSTMT_EXEC;;2822\n");
k += 8U;
                }
              while_break___2: /* CIL Label */;
              }
              printf("\nSTMT_EXEC;;2826\n");
t = t->v.t + ((unsigned int)b & (unsigned int)mask_bits[e]);
              printf("\nSTMT_EXEC;;2827\n");
e = (unsigned int)t->e;
              printf("\nSTMT_EXEC;;2828\n");
if (!(e > 16U))
              {
                printf("\nSTMT_EXEC;;2830\n");
goto while_break___1;
              }
            }
          while_break___1: /* CIL Label */;
          }
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
            {
              printf("\nSTMT_EXEC;;2846\n");
outcnt = w;
              printf("\nSTMT_EXEC;;2847\n");
flush_window();
              printf("\nSTMT_EXEC;;2848\n");
w = 0U;
            }
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
            printf("\nSTMT_EXEC;;2859\n");
while (1)
            {
            while_continue___3: /* CIL Label */;
              printf("\nSTMT_EXEC;;2862\n");
if (!(k < e))
              {
                printf("\nSTMT_EXEC;;2864\n");
goto while_break___3;
              }
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
                {
                  printf("\nSTMT_EXEC;;2875\n");
tmp___7 = fill_inbuf(0);
                  printf("\nSTMT_EXEC;;2876\n");
tmp___8 = tmp___7;
                }
              }
              printf("\nSTMT_EXEC;;2879\n");
b |= (ulg)((uch)tmp___8) << k;
              printf("\nSTMT_EXEC;;2880\n");
k += 8U;
            }
          while_break___3: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;2884\n");
n = (unsigned int)t->v.n + ((unsigned int)b & (unsigned int)mask_bits[e]);
          printf("\nSTMT_EXEC;;2885\n");
b >>= e;
          printf("\nSTMT_EXEC;;2886\n");
k -= e;
          {
            printf("\nSTMT_EXEC;;2888\n");
while (1)
            {
            while_continue___4: /* CIL Label */;
              printf("\nSTMT_EXEC;;2891\n");
if (!(k < (unsigned int)bd))
              {
                printf("\nSTMT_EXEC;;2893\n");
goto while_break___4;
              }
              printf("\nSTMT_EXEC;;2895\n");
if (inptr < insize)
              {
                printf("\nSTMT_EXEC;;2897\n");
tmp___9 = inptr;
                printf("\nSTMT_EXEC;;2898\n");
inptr++;
                printf("\nSTMT_EXEC;;2899\n");
tmp___11 = (int)inbuf[tmp___9];
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;2904\n");
tmp___10 = fill_inbuf(0);
                  printf("\nSTMT_EXEC;;2905\n");
tmp___11 = tmp___10;
                }
              }
              printf("\nSTMT_EXEC;;2908\n");
b |= (ulg)((uch)tmp___11) << k;
              printf("\nSTMT_EXEC;;2909\n");
k += 8U;
            }
          while_break___4: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;2913\n");
t = td + ((unsigned int)b & md);
          printf("\nSTMT_EXEC;;2914\n");
e = (unsigned int)t->e;
          printf("\nSTMT_EXEC;;2915\n");
if (e > 16U)
          {
            {
              printf("\nSTMT_EXEC;;2918\n");
while (1)
              {
              while_continue___5: /* CIL Label */;
                printf("\nSTMT_EXEC;;2921\n");
if (e == 99U)
                {
                  printf("\nSTMT_EXEC;;2923\n");
printf("\nFUNC_RETURN;;\n");
return (1);
                }
                printf("\nSTMT_EXEC;;2925\n");
b >>= (int)t->b;
                printf("\nSTMT_EXEC;;2926\n");
k -= (unsigned int)t->b;
                printf("\nSTMT_EXEC;;2927\n");
e -= 16U;
                {
                  printf("\nSTMT_EXEC;;2929\n");
while (1)
                  {
                  while_continue___6: /* CIL Label */;
                    printf("\nSTMT_EXEC;;2932\n");
if (!(k < e))
                    {
                      printf("\nSTMT_EXEC;;2934\n");
goto while_break___6;
                    }
                    printf("\nSTMT_EXEC;;2936\n");
if (inptr < insize)
                    {
                      printf("\nSTMT_EXEC;;2938\n");
tmp___12 = inptr;
                      printf("\nSTMT_EXEC;;2939\n");
inptr++;
                      printf("\nSTMT_EXEC;;2940\n");
tmp___14 = (int)inbuf[tmp___12];
                    }
                    else
                    {
                      {
                        printf("\nSTMT_EXEC;;2945\n");
tmp___13 = fill_inbuf(0);
                        printf("\nSTMT_EXEC;;2946\n");
tmp___14 = tmp___13;
                      }
                    }
                    printf("\nSTMT_EXEC;;2949\n");
b |= (ulg)((uch)tmp___14) << k;
                    printf("\nSTMT_EXEC;;2950\n");
k += 8U;
                  }
                while_break___6: /* CIL Label */;
                }
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
          }
          printf("\nSTMT_EXEC;;2964\n");
b >>= (int)t->b;
          printf("\nSTMT_EXEC;;2965\n");
k -= (unsigned int)t->b;
          {
            printf("\nSTMT_EXEC;;2967\n");
while (1)
            {
            while_continue___7: /* CIL Label */;
              printf("\nSTMT_EXEC;;2970\n");
if (!(k < e))
              {
                printf("\nSTMT_EXEC;;2972\n");
goto while_break___7;
              }
              printf("\nSTMT_EXEC;;2974\n");
if (inptr < insize)
              {
                printf("\nSTMT_EXEC;;2976\n");
tmp___15 = inptr;
                printf("\nSTMT_EXEC;;2977\n");
inptr++;
                printf("\nSTMT_EXEC;;2978\n");
tmp___17 = (int)inbuf[tmp___15];
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;2983\n");
tmp___16 = fill_inbuf(0);
                  printf("\nSTMT_EXEC;;2984\n");
tmp___17 = tmp___16;
                }
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
            while_continue___8: /* CIL Label */;
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
                printf("\nSTMT_EXEC;;3015\n");
e = e;
              }
              printf("\nSTMT_EXEC;;3017\n");
n -= e;
              printf("\nSTMT_EXEC;;3018\n");
if (w - d >= e)
              {
                {
                  printf("\nSTMT_EXEC;;3021\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void * /* __restrict  */)(window + w), (void const * /* __restrict  */)(window + d), (size_t)e);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;3022\n");
w += e;
                  printf("\nSTMT_EXEC;;3023\n");
d += e;
                }
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;3029\n");
while (1)
                  {
                  while_continue___9: /* CIL Label */;
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
              }
              printf("\nSTMT_EXEC;;3046\n");
if (w == 32768U)
              {
                {
                  printf("\nSTMT_EXEC;;3049\n");
outcnt = w;
                  printf("\nSTMT_EXEC;;3050\n");
flush_window();
                  printf("\nSTMT_EXEC;;3051\n");
w = 0U;
                }
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
int inflate_stored(void)
{
  printf("\nFUNC_CALL;inflate_stored();\n");
printf("\nSTMT_EXEC;;3073\n");
unsigned int n;
  printf("\nSTMT_EXEC;;3074\n");
unsigned int w;
  printf("\nSTMT_EXEC;;3075\n");
register ulg b;
  printf("\nSTMT_EXEC;;3076\n");
register unsigned int k;
  printf("\nSTMT_EXEC;;3077\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;3078\n");
int tmp___0;
  printf("\nSTMT_EXEC;;3079\n");
int tmp___1;
  printf("\nSTMT_EXEC;;3080\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;3081\n");
int tmp___3;
  printf("\nSTMT_EXEC;;3082\n");
int tmp___4;
  printf("\nSTMT_EXEC;;3083\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;3084\n");
int tmp___6;
  printf("\nSTMT_EXEC;;3085\n");
int tmp___7;
  printf("\nSTMT_EXEC;;3086\n");
unsigned int tmp___8;
  printf("\nSTMT_EXEC;;3087\n");
unsigned int tmp___9;
  {
    printf("\nSTMT_EXEC;;3089\n");
b = bb;
    printf("\nSTMT_EXEC;;3090\n");
k = bk;
    printf("\nSTMT_EXEC;;3091\n");
w = outcnt;
    printf("\nSTMT_EXEC;;3092\n");
n = k & 7U;
    printf("\nSTMT_EXEC;;3093\n");
b >>= n;
    printf("\nSTMT_EXEC;;3094\n");
k -= n;
    {
      printf("\nSTMT_EXEC;;3096\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;3099\n");
if (!(k < 16U))
        {
          printf("\nSTMT_EXEC;;3101\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;3103\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;3105\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;3106\n");
inptr++;
          printf("\nSTMT_EXEC;;3107\n");
tmp___1 = (int)inbuf[tmp];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;3112\n");
tmp___0 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;3113\n");
tmp___1 = tmp___0;
          }
        }
        printf("\nSTMT_EXEC;;3116\n");
b |= (ulg)((uch)tmp___1) << k;
        printf("\nSTMT_EXEC;;3117\n");
k += 8U;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3121\n");
n = (unsigned int)b & 65535U;
    printf("\nSTMT_EXEC;;3122\n");
b >>= 16;
    printf("\nSTMT_EXEC;;3123\n");
k -= 16U;
    {
      printf("\nSTMT_EXEC;;3125\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;3128\n");
if (!(k < 16U))
        {
          printf("\nSTMT_EXEC;;3130\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;3132\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;3134\n");
tmp___2 = inptr;
          printf("\nSTMT_EXEC;;3135\n");
inptr++;
          printf("\nSTMT_EXEC;;3136\n");
tmp___4 = (int)inbuf[tmp___2];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;3141\n");
tmp___3 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;3142\n");
tmp___4 = tmp___3;
          }
        }
        printf("\nSTMT_EXEC;;3145\n");
b |= (ulg)((uch)tmp___4) << k;
        printf("\nSTMT_EXEC;;3146\n");
k += 8U;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3150\n");
if (n != (unsigned int)(~b & 65535UL))
    {
      printf("\nSTMT_EXEC;;3152\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;3154\n");
b >>= 16;
    printf("\nSTMT_EXEC;;3155\n");
k -= 16U;
    {
      printf("\nSTMT_EXEC;;3157\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;3160\n");
tmp___9 = n;
        printf("\nSTMT_EXEC;;3161\n");
n--;
        printf("\nSTMT_EXEC;;3162\n");
if (!tmp___9)
        {
          printf("\nSTMT_EXEC;;3164\n");
goto while_break___1;
        }
        {
          printf("\nSTMT_EXEC;;3167\n");
while (1)
          {
          while_continue___2: /* CIL Label */;
            printf("\nSTMT_EXEC;;3170\n");
if (!(k < 8U))
            {
              printf("\nSTMT_EXEC;;3172\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;3174\n");
if (inptr < insize)
            {
              printf("\nSTMT_EXEC;;3176\n");
tmp___5 = inptr;
              printf("\nSTMT_EXEC;;3177\n");
inptr++;
              printf("\nSTMT_EXEC;;3178\n");
tmp___7 = (int)inbuf[tmp___5];
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;3183\n");
tmp___6 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;3184\n");
tmp___7 = tmp___6;
              }
            }
            printf("\nSTMT_EXEC;;3187\n");
b |= (ulg)((uch)tmp___7) << k;
            printf("\nSTMT_EXEC;;3188\n");
k += 8U;
          }
        while_break___2: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;3192\n");
tmp___8 = w;
        printf("\nSTMT_EXEC;;3193\n");
w++;
        printf("\nSTMT_EXEC;;3194\n");
window[tmp___8] = (uch)b;
        printf("\nSTMT_EXEC;;3195\n");
if (w == 32768U)
        {
          {
            printf("\nSTMT_EXEC;;3198\n");
outcnt = w;
            printf("\nSTMT_EXEC;;3199\n");
flush_window();
            printf("\nSTMT_EXEC;;3200\n");
w = 0U;
          }
        }
        printf("\nSTMT_EXEC;;3203\n");
b >>= 8;
        printf("\nSTMT_EXEC;;3204\n");
k -= 8U;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3208\n");
outcnt = w;
    printf("\nSTMT_EXEC;;3209\n");
bb = b;
    printf("\nSTMT_EXEC;;3210\n");
bk = k;
    printf("\nSTMT_EXEC;;3211\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int inflate_fixed(void)
{
  printf("\nFUNC_CALL;inflate_fixed();\n");
printf("\nSTMT_EXEC;;3216\n");
int i___0;
  printf("\nSTMT_EXEC;;3217\n");
struct huft *tl;
  printf("\nSTMT_EXEC;;3218\n");
struct huft *td;
  printf("\nSTMT_EXEC;;3219\n");
int bl;
  printf("\nSTMT_EXEC;;3220\n");
int bd;
  printf("\nSTMT_EXEC;;3221\n");
unsigned int l[288];
  printf("\nSTMT_EXEC;;3222\n");
int tmp;
  printf("\nSTMT_EXEC;;3223\n");
void *__cil_tmp8;
  {
    printf("\nSTMT_EXEC;;3225\n");
i___0 = 0;
    {
      printf("\nSTMT_EXEC;;3227\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;3230\n");
if (!(i___0 < 144))
        {
          printf("\nSTMT_EXEC;;3232\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;3234\n");
l[i___0] = 8U;
        printf("\nSTMT_EXEC;;3235\n");
i___0++;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3240\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;3243\n");
if (!(i___0 < 256))
        {
          printf("\nSTMT_EXEC;;3245\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;3247\n");
l[i___0] = 9U;
        printf("\nSTMT_EXEC;;3248\n");
i___0++;
      }
    while_break___0: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3253\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;3256\n");
if (!(i___0 < 280))
        {
          printf("\nSTMT_EXEC;;3258\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;3260\n");
l[i___0] = 7U;
        printf("\nSTMT_EXEC;;3261\n");
i___0++;
      }
    while_break___1: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3266\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;3269\n");
if (!(i___0 < 288))
        {
          printf("\nSTMT_EXEC;;3271\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;3273\n");
l[i___0] = 8U;
        printf("\nSTMT_EXEC;;3274\n");
i___0++;
      }
    while_break___2: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3279\n");
bl = 7;
      printf("\nSTMT_EXEC;;3280\n");
i___0 = huft_build(l, 288U, 257U, cplens, cplext, &tl, &bl);
    }
    printf("\nSTMT_EXEC;;3282\n");
if (i___0 != 0)
    {
      printf("\nSTMT_EXEC;;3284\n");
printf("\nFUNC_RETURN;;\n");
return (i___0);
    }
    printf("\nSTMT_EXEC;;3286\n");
i___0 = 0;
    {
      printf("\nSTMT_EXEC;;3288\n");
while (1)
      {
      while_continue___3: /* CIL Label */;
        printf("\nSTMT_EXEC;;3291\n");
if (!(i___0 < 30))
        {
          printf("\nSTMT_EXEC;;3293\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;3295\n");
l[i___0] = 5U;
        printf("\nSTMT_EXEC;;3296\n");
i___0++;
      }
    while_break___3: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3301\n");
bd = 5;
      printf("\nSTMT_EXEC;;3302\n");
i___0 = huft_build(l, 30U, 0U, cpdist, cpdext, &td, &bd);
    }
    printf("\nSTMT_EXEC;;3304\n");
if (i___0 > 1)
    {
      {
        printf("\nSTMT_EXEC;;3307\n");
huft_free(tl);
      }
      printf("\nSTMT_EXEC;;3309\n");
printf("\nFUNC_RETURN;;\n");
return (i___0);
    }
    {
      printf("\nSTMT_EXEC;;3312\n");
tmp = inflate_codes(tl, td, bl, bd);
    }
    printf("\nSTMT_EXEC;;3314\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;3316\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    {
      printf("\nSTMT_EXEC;;3319\n");
huft_free(tl);
      printf("\nSTMT_EXEC;;3320\n");
huft_free(td);
    }
    printf("\nSTMT_EXEC;;3322\n");
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
  printf("\nSTMT_EXEC;;3343\n");
int tmp___0;
  printf("\nSTMT_EXEC;;3344\n");
int tmp___1;
  printf("\nSTMT_EXEC;;3345\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;3346\n");
int tmp___3;
  printf("\nSTMT_EXEC;;3347\n");
int tmp___4;
  printf("\nSTMT_EXEC;;3348\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;3349\n");
int tmp___6;
  printf("\nSTMT_EXEC;;3350\n");
int tmp___7;
  printf("\nSTMT_EXEC;;3351\n");
unsigned int tmp___8;
  printf("\nSTMT_EXEC;;3352\n");
int tmp___9;
  printf("\nSTMT_EXEC;;3353\n");
int tmp___10;
  printf("\nSTMT_EXEC;;3354\n");
unsigned int tmp___11;
  printf("\nSTMT_EXEC;;3355\n");
int tmp___12;
  printf("\nSTMT_EXEC;;3356\n");
int tmp___13;
  printf("\nSTMT_EXEC;;3357\n");
int tmp___14;
  printf("\nSTMT_EXEC;;3358\n");
unsigned int tmp___15;
  printf("\nSTMT_EXEC;;3359\n");
int tmp___16;
  printf("\nSTMT_EXEC;;3360\n");
int tmp___17;
  printf("\nSTMT_EXEC;;3361\n");
int tmp___18;
  printf("\nSTMT_EXEC;;3362\n");
unsigned int tmp___19;
  printf("\nSTMT_EXEC;;3363\n");
unsigned int tmp___20;
  printf("\nSTMT_EXEC;;3364\n");
int tmp___21;
  printf("\nSTMT_EXEC;;3365\n");
int tmp___22;
  printf("\nSTMT_EXEC;;3366\n");
int tmp___23;
  printf("\nSTMT_EXEC;;3367\n");
unsigned int tmp___24;
  printf("\nSTMT_EXEC;;3368\n");
unsigned int tmp___25;
  printf("\nSTMT_EXEC;;3369\n");
int tmp___26;
  printf("\nSTMT_EXEC;;3370\n");
int tmp___27;
  printf("\nSTMT_EXEC;;3371\n");
int tmp___28;
  printf("\nSTMT_EXEC;;3372\n");
unsigned int tmp___29;
  printf("\nSTMT_EXEC;;3373\n");
int tmp___30;
  printf("\nSTMT_EXEC;;3374\n");
void *__cil_tmp48;
  {
    printf("\nSTMT_EXEC;;3376\n");
b = bb;
    printf("\nSTMT_EXEC;;3377\n");
k = bk;
    {
      printf("\nSTMT_EXEC;;3379\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;3382\n");
if (!(k < 5U))
        {
          printf("\nSTMT_EXEC;;3384\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;3386\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;3388\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;3389\n");
inptr++;
          printf("\nSTMT_EXEC;;3390\n");
tmp___1 = (int)inbuf[tmp];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;3395\n");
tmp___0 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;3396\n");
tmp___1 = tmp___0;
          }
        }
        printf("\nSTMT_EXEC;;3399\n");
b |= (ulg)((uch)tmp___1) << k;
        printf("\nSTMT_EXEC;;3400\n");
k += 8U;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3404\n");
nl = 257U + ((unsigned int)b & 31U);
    printf("\nSTMT_EXEC;;3405\n");
b >>= 5;
    printf("\nSTMT_EXEC;;3406\n");
k -= 5U;
    {
      printf("\nSTMT_EXEC;;3408\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;3411\n");
if (!(k < 5U))
        {
          printf("\nSTMT_EXEC;;3413\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;3415\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;3417\n");
tmp___2 = inptr;
          printf("\nSTMT_EXEC;;3418\n");
inptr++;
          printf("\nSTMT_EXEC;;3419\n");
tmp___4 = (int)inbuf[tmp___2];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;3424\n");
tmp___3 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;3425\n");
tmp___4 = tmp___3;
          }
        }
        printf("\nSTMT_EXEC;;3428\n");
b |= (ulg)((uch)tmp___4) << k;
        printf("\nSTMT_EXEC;;3429\n");
k += 8U;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3433\n");
nd = 1U + ((unsigned int)b & 31U);
    printf("\nSTMT_EXEC;;3434\n");
b >>= 5;
    printf("\nSTMT_EXEC;;3435\n");
k -= 5U;
    {
      printf("\nSTMT_EXEC;;3437\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;3440\n");
if (!(k < 4U))
        {
          printf("\nSTMT_EXEC;;3442\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;3444\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;3446\n");
tmp___5 = inptr;
          printf("\nSTMT_EXEC;;3447\n");
inptr++;
          printf("\nSTMT_EXEC;;3448\n");
tmp___7 = (int)inbuf[tmp___5];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;3453\n");
tmp___6 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;3454\n");
tmp___7 = tmp___6;
          }
        }
        printf("\nSTMT_EXEC;;3457\n");
b |= (ulg)((uch)tmp___7) << k;
        printf("\nSTMT_EXEC;;3458\n");
k += 8U;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3462\n");
nb = 4U + ((unsigned int)b & 15U);
    printf("\nSTMT_EXEC;;3463\n");
b >>= 4;
    printf("\nSTMT_EXEC;;3464\n");
k -= 4U;
    printf("\nSTMT_EXEC;;3465\n");
if (nl > 286U)
    {
      printf("\nSTMT_EXEC;;3467\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    else
    {
      printf("\nSTMT_EXEC;;3471\n");
if (nd > 30U)
      {
        printf("\nSTMT_EXEC;;3473\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    printf("\nSTMT_EXEC;;3476\n");
j___0 = 0U;
    {
      printf("\nSTMT_EXEC;;3478\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;3481\n");
if (!(j___0 < nb))
        {
          printf("\nSTMT_EXEC;;3483\n");
goto while_break___2;
        }
        {
          printf("\nSTMT_EXEC;;3486\n");
while (1)
          {
          while_continue___3: /* CIL Label */;
            printf("\nSTMT_EXEC;;3489\n");
if (!(k < 3U))
            {
              printf("\nSTMT_EXEC;;3491\n");
goto while_break___3;
            }
            printf("\nSTMT_EXEC;;3493\n");
if (inptr < insize)
            {
              printf("\nSTMT_EXEC;;3495\n");
tmp___8 = inptr;
              printf("\nSTMT_EXEC;;3496\n");
inptr++;
              printf("\nSTMT_EXEC;;3497\n");
tmp___10 = (int)inbuf[tmp___8];
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;3502\n");
tmp___9 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;3503\n");
tmp___10 = tmp___9;
              }
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
      while_continue___4: /* CIL Label */;
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
      printf("\nSTMT_EXEC;;3537\n");
if (i___0 == 1)
      {
        {
          printf("\nSTMT_EXEC;;3540\n");
huft_free(tl);
        }
      }
      printf("\nSTMT_EXEC;;3543\n");
printf("\nFUNC_RETURN;;\n");
return (i___0);
    }
    printf("\nSTMT_EXEC;;3545\n");
n = nl + nd;
    printf("\nSTMT_EXEC;;3546\n");
m = (unsigned int)mask_bits[bl];
    printf("\nSTMT_EXEC;;3547\n");
l = 0U;
    printf("\nSTMT_EXEC;;3548\n");
i___0 = (int)l;
    {
      printf("\nSTMT_EXEC;;3550\n");
while (1)
      {
      while_continue___5: /* CIL Label */;
        printf("\nSTMT_EXEC;;3553\n");
if (!((unsigned int)i___0 < n))
        {
          printf("\nSTMT_EXEC;;3555\n");
goto while_break___5;
        }
        {
          printf("\nSTMT_EXEC;;3558\n");
while (1)
          {
          while_continue___6: /* CIL Label */;
            printf("\nSTMT_EXEC;;3561\n");
if (!(k < (unsigned int)bl))
            {
              printf("\nSTMT_EXEC;;3563\n");
goto while_break___6;
            }
            printf("\nSTMT_EXEC;;3565\n");
if (inptr < insize)
            {
              printf("\nSTMT_EXEC;;3567\n");
tmp___11 = inptr;
              printf("\nSTMT_EXEC;;3568\n");
inptr++;
              printf("\nSTMT_EXEC;;3569\n");
tmp___13 = (int)inbuf[tmp___11];
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;3574\n");
tmp___12 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;3575\n");
tmp___13 = tmp___12;
              }
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
          printf("\nSTMT_EXEC;;3597\n");
if (j___0 == 16U)
          {
            {
              printf("\nSTMT_EXEC;;3600\n");
while (1)
              {
              while_continue___7: /* CIL Label */;
                printf("\nSTMT_EXEC;;3603\n");
if (!(k < 2U))
                {
                  printf("\nSTMT_EXEC;;3605\n");
goto while_break___7;
                }
                printf("\nSTMT_EXEC;;3607\n");
if (inptr < insize)
                {
                  printf("\nSTMT_EXEC;;3609\n");
tmp___15 = inptr;
                  printf("\nSTMT_EXEC;;3610\n");
inptr++;
                  printf("\nSTMT_EXEC;;3611\n");
tmp___17 = (int)inbuf[tmp___15];
                }
                else
                {
                  {
                    printf("\nSTMT_EXEC;;3616\n");
tmp___16 = fill_inbuf(0);
                    printf("\nSTMT_EXEC;;3617\n");
tmp___17 = tmp___16;
                  }
                }
                printf("\nSTMT_EXEC;;3620\n");
b |= (ulg)((uch)tmp___17) << k;
                printf("\nSTMT_EXEC;;3621\n");
k += 8U;
              }
            while_break___7: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;3625\n");
j___0 = 3U + ((unsigned int)b & 3U);
            printf("\nSTMT_EXEC;;3626\n");
b >>= 2;
            printf("\nSTMT_EXEC;;3627\n");
k -= 2U;
            printf("\nSTMT_EXEC;;3628\n");
if ((unsigned int)i___0 + j___0 > n)
            {
              printf("\nSTMT_EXEC;;3630\n");
printf("\nFUNC_RETURN;;\n");
return (1);
            }
            {
              printf("\nSTMT_EXEC;;3633\n");
while (1)
              {
              while_continue___8: /* CIL Label */;
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
          else
          {
            printf("\nSTMT_EXEC;;3651\n");
if (j___0 == 17U)
            {
              {
                printf("\nSTMT_EXEC;;3654\n");
while (1)
                {
                while_continue___9: /* CIL Label */;
                  printf("\nSTMT_EXEC;;3657\n");
if (!(k < 3U))
                  {
                    printf("\nSTMT_EXEC;;3659\n");
goto while_break___9;
                  }
                  printf("\nSTMT_EXEC;;3661\n");
if (inptr < insize)
                  {
                    printf("\nSTMT_EXEC;;3663\n");
tmp___20 = inptr;
                    printf("\nSTMT_EXEC;;3664\n");
inptr++;
                    printf("\nSTMT_EXEC;;3665\n");
tmp___22 = (int)inbuf[tmp___20];
                  }
                  else
                  {
                    {
                      printf("\nSTMT_EXEC;;3670\n");
tmp___21 = fill_inbuf(0);
                      printf("\nSTMT_EXEC;;3671\n");
tmp___22 = tmp___21;
                    }
                  }
                  printf("\nSTMT_EXEC;;3674\n");
b |= (ulg)((uch)tmp___22) << k;
                  printf("\nSTMT_EXEC;;3675\n");
k += 8U;
                }
              while_break___9: /* CIL Label */;
              }
              printf("\nSTMT_EXEC;;3679\n");
j___0 = 3U + ((unsigned int)b & 7U);
              printf("\nSTMT_EXEC;;3680\n");
b >>= 3;
              printf("\nSTMT_EXEC;;3681\n");
k -= 3U;
              printf("\nSTMT_EXEC;;3682\n");
if ((unsigned int)i___0 + j___0 > n)
              {
                printf("\nSTMT_EXEC;;3684\n");
printf("\nFUNC_RETURN;;\n");
return (1);
              }
              {
                printf("\nSTMT_EXEC;;3687\n");
while (1)
                {
                while_continue___10: /* CIL Label */;
                  printf("\nSTMT_EXEC;;3690\n");
tmp___24 = j___0;
                  printf("\nSTMT_EXEC;;3691\n");
j___0--;
                  printf("\nSTMT_EXEC;;3692\n");
if (!tmp___24)
                  {
                    printf("\nSTMT_EXEC;;3694\n");
goto while_break___10;
                  }
                  printf("\nSTMT_EXEC;;3696\n");
tmp___23 = i___0;
                  printf("\nSTMT_EXEC;;3697\n");
i___0++;
                  printf("\nSTMT_EXEC;;3698\n");
ll[tmp___23] = 0U;
                }
              while_break___10: /* CIL Label */;
              }
              printf("\nSTMT_EXEC;;3702\n");
l = 0U;
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;3707\n");
while (1)
                {
                while_continue___11: /* CIL Label */;
                  printf("\nSTMT_EXEC;;3710\n");
if (!(k < 7U))
                  {
                    printf("\nSTMT_EXEC;;3712\n");
goto while_break___11;
                  }
                  printf("\nSTMT_EXEC;;3714\n");
if (inptr < insize)
                  {
                    printf("\nSTMT_EXEC;;3716\n");
tmp___25 = inptr;
                    printf("\nSTMT_EXEC;;3717\n");
inptr++;
                    printf("\nSTMT_EXEC;;3718\n");
tmp___27 = (int)inbuf[tmp___25];
                  }
                  else
                  {
                    {
                      printf("\nSTMT_EXEC;;3723\n");
tmp___26 = fill_inbuf(0);
                      printf("\nSTMT_EXEC;;3724\n");
tmp___27 = tmp___26;
                    }
                  }
                  printf("\nSTMT_EXEC;;3727\n");
b |= (ulg)((uch)tmp___27) << k;
                  printf("\nSTMT_EXEC;;3728\n");
k += 8U;
                }
              while_break___11: /* CIL Label */;
              }
              printf("\nSTMT_EXEC;;3732\n");
j___0 = 11U + ((unsigned int)b & 127U);
              printf("\nSTMT_EXEC;;3733\n");
b >>= 7;
              printf("\nSTMT_EXEC;;3734\n");
k -= 7U;
              printf("\nSTMT_EXEC;;3735\n");
if ((unsigned int)i___0 + j___0 > n)
              {
                printf("\nSTMT_EXEC;;3737\n");
printf("\nFUNC_RETURN;;\n");
return (1);
              }
              {
                printf("\nSTMT_EXEC;;3740\n");
while (1)
                {
                while_continue___12: /* CIL Label */;
                  printf("\nSTMT_EXEC;;3743\n");
tmp___29 = j___0;
                  printf("\nSTMT_EXEC;;3744\n");
j___0--;
                  printf("\nSTMT_EXEC;;3745\n");
if (!tmp___29)
                  {
                    printf("\nSTMT_EXEC;;3747\n");
goto while_break___12;
                  }
                  printf("\nSTMT_EXEC;;3749\n");
tmp___28 = i___0;
                  printf("\nSTMT_EXEC;;3750\n");
i___0++;
                  printf("\nSTMT_EXEC;;3751\n");
ll[tmp___28] = 0U;
                }
              while_break___12: /* CIL Label */;
              }
              printf("\nSTMT_EXEC;;3755\n");
l = 0U;
            }
          }
        }
      }
    while_break___5: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3763\n");
huft_free(tl);
      printf("\nSTMT_EXEC;;3764\n");
bb = b;
      printf("\nSTMT_EXEC;;3765\n");
bk = k;
      printf("\nSTMT_EXEC;;3766\n");
bl = lbits;
      printf("\nSTMT_EXEC;;3767\n");
i___0 = huft_build(ll, nl, 257U, cplens, cplext, &tl, &bl);
    }
    printf("\nSTMT_EXEC;;3769\n");
if (i___0 != 0)
    {
      printf("\nSTMT_EXEC;;3771\n");
if (i___0 == 1)
      {
        {
          printf("\nSTMT_EXEC;;3774\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " incomplete literal tree\n");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;3775\n");
huft_free(tl);
        }
      }
      printf("\nSTMT_EXEC;;3778\n");
printf("\nFUNC_RETURN;;\n");
return (i___0);
    }
    {
      printf("\nSTMT_EXEC;;3781\n");
bd = dbits;
      printf("\nSTMT_EXEC;;3782\n");
i___0 = huft_build(ll + nl, nd, 0U, cpdist, cpdext, &td, &bd);
    }
    printf("\nSTMT_EXEC;;3784\n");
if (i___0 != 0)
    {
      printf("\nSTMT_EXEC;;3786\n");
if (i___0 == 1)
      {
        {
          printf("\nSTMT_EXEC;;3789\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " incomplete distance tree\n");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;3790\n");
huft_free(td);
        }
      }
      {
        printf("\nSTMT_EXEC;;3794\n");
huft_free(tl);
      }
      printf("\nSTMT_EXEC;;3796\n");
printf("\nFUNC_RETURN;;\n");
return (i___0);
    }
    {
      printf("\nSTMT_EXEC;;3799\n");
tmp___30 = inflate_codes(tl, td, bl, bd);
    }
    printf("\nSTMT_EXEC;;3801\n");
if (tmp___30)
    {
      printf("\nSTMT_EXEC;;3803\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    {
      printf("\nSTMT_EXEC;;3806\n");
huft_free(tl);
      printf("\nSTMT_EXEC;;3807\n");
huft_free(td);
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
printf("\nSTMT_EXEC;;3814\n");
unsigned int t;
  printf("\nSTMT_EXEC;;3815\n");
register ulg b;
  printf("\nSTMT_EXEC;;3816\n");
register unsigned int k;
  printf("\nSTMT_EXEC;;3817\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;3818\n");
int tmp___0;
  printf("\nSTMT_EXEC;;3819\n");
int tmp___1;
  printf("\nSTMT_EXEC;;3820\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;3821\n");
int tmp___3;
  printf("\nSTMT_EXEC;;3822\n");
int tmp___4;
  printf("\nSTMT_EXEC;;3823\n");
int tmp___5;
  printf("\nSTMT_EXEC;;3824\n");
int tmp___6;
  printf("\nSTMT_EXEC;;3825\n");
int tmp___7;
  {
    printf("\nSTMT_EXEC;;3827\n");
b = bb;
    printf("\nSTMT_EXEC;;3828\n");
k = bk;
    {
      printf("\nSTMT_EXEC;;3830\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;3833\n");
if (!(k < 1U))
        {
          printf("\nSTMT_EXEC;;3835\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;3837\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;3839\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;3840\n");
inptr++;
          printf("\nSTMT_EXEC;;3841\n");
tmp___1 = (int)inbuf[tmp];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;3846\n");
tmp___0 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;3847\n");
tmp___1 = tmp___0;
          }
        }
        printf("\nSTMT_EXEC;;3850\n");
b |= (ulg)((uch)tmp___1) << k;
        printf("\nSTMT_EXEC;;3851\n");
k += 8U;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3855\n");
*e = (int)b & 1;
    printf("\nSTMT_EXEC;;3856\n");
b >>= 1;
    printf("\nSTMT_EXEC;;3857\n");
k--;
    {
      printf("\nSTMT_EXEC;;3859\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;3862\n");
if (!(k < 2U))
        {
          printf("\nSTMT_EXEC;;3864\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;3866\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;3868\n");
tmp___2 = inptr;
          printf("\nSTMT_EXEC;;3869\n");
inptr++;
          printf("\nSTMT_EXEC;;3870\n");
tmp___4 = (int)inbuf[tmp___2];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;3875\n");
tmp___3 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;3876\n");
tmp___4 = tmp___3;
          }
        }
        printf("\nSTMT_EXEC;;3879\n");
b |= (ulg)((uch)tmp___4) << k;
        printf("\nSTMT_EXEC;;3880\n");
k += 8U;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3884\n");
t = (unsigned int)b & 3U;
    printf("\nSTMT_EXEC;;3885\n");
b >>= 2;
    printf("\nSTMT_EXEC;;3886\n");
k -= 2U;
    printf("\nSTMT_EXEC;;3887\n");
bb = b;
    printf("\nSTMT_EXEC;;3888\n");
bk = k;
    printf("\nSTMT_EXEC;;3889\n");
if (t == 2U)
    {
      {
        printf("\nSTMT_EXEC;;3892\n");
tmp___5 = inflate_dynamic();
      }
      printf("\nSTMT_EXEC;;3894\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___5);
    }
    printf("\nSTMT_EXEC;;3896\n");
if (t == 0U)
    {
      {
        printf("\nSTMT_EXEC;;3899\n");
tmp___6 = inflate_stored();
      }
      printf("\nSTMT_EXEC;;3901\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___6);
    }
    printf("\nSTMT_EXEC;;3903\n");
if (t == 1U)
    {
      {
        printf("\nSTMT_EXEC;;3906\n");
tmp___7 = inflate_fixed();
      }
      printf("\nSTMT_EXEC;;3908\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___7);
    }
    printf("\nSTMT_EXEC;;3910\n");
printf("\nFUNC_RETURN;;\n");
return (2);
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
  printf("\nSTMT_EXEC;;3917\n");
unsigned int h;
  {
    printf("\nSTMT_EXEC;;3919\n");
outcnt = 0U;
    printf("\nSTMT_EXEC;;3920\n");
bk = 0U;
    printf("\nSTMT_EXEC;;3921\n");
bb = (ulg)0;
    printf("\nSTMT_EXEC;;3922\n");
h = 0U;
    {
      printf("\nSTMT_EXEC;;3924\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;3928\n");
hufts = 0U;
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
        printf("\nSTMT_EXEC;;3935\n");
if (hufts > h)
        {
          printf("\nSTMT_EXEC;;3937\n");
h = hufts;
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
      printf("\nSTMT_EXEC;;3947\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;3950\n");
if (!(bk >= 8U))
        {
          printf("\nSTMT_EXEC;;3952\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;3954\n");
bk -= 8U;
        printf("\nSTMT_EXEC;;3955\n");
inptr--;
      }
    while_break___0: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3960\n");
outcnt = outcnt;
      printf("\nSTMT_EXEC;;3961\n");
flush_window();
    }
    printf("\nSTMT_EXEC;;3963\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int method;
int decrypt;
int unzip(int in, int out);
int check_zipfile(int in);
char *key;
int pkzip = 0;
int ext_header = 0;
int check_zipfile(int in)
{
  printf("\nFUNC_CALL;check_zipfile(int);\n");
printf("\nSTMT_EXEC;;3975\n");
uch *h;
  {
    printf("\nSTMT_EXEC;;3977\n");
h = inbuf + inptr;
    printf("\nSTMT_EXEC;;3978\n");
ifd = in;
    printf("\nSTMT_EXEC;;3979\n");
inptr += (unsigned int)((30 + ((int)((ush) * ((h + 26) + 0)) | ((int)((ush) * ((h + 26) + 1)) << 8))) + ((int)((ush) * ((h + 28) + 0)) | ((int)((ush) * ((h + 28) + 1)) << 8)));
    printf("\nSTMT_EXEC;;3980\n");
if (inptr > insize)
    {
      {
        printf("\nSTMT_EXEC;;3983\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: %s: not a valid zip file\n", progname, ifname);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;3984\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;3986\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    else
    {
      printf("\nSTMT_EXEC;;3990\n");
if (((ulg)((int)((ush) * (h + 0)) | ((int)((ush) * (h + 1)) << 8)) | ((ulg)((int)((ush) * ((h + 2) + 0)) | ((int)((ush) * ((h + 2) + 1)) << 8)) << 16)) != 67324752UL)
      {
        {
          printf("\nSTMT_EXEC;;3993\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: %s: not a valid zip file\n", progname, ifname);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;3994\n");
exit_code = 1;
        }
        printf("\nSTMT_EXEC;;3996\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    printf("\nSTMT_EXEC;;3999\n");
method = (int)*(h + 8);
    printf("\nSTMT_EXEC;;4000\n");
if (method != 0)
    {
      printf("\nSTMT_EXEC;;4002\n");
if (method != 8)
      {
        {
          printf("\nSTMT_EXEC;;4005\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "\n%s: %s: first entry not "
                                                   "deflated or stored -- use unzip\n",
                  progname, ifname);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;4009\n");
exit_code = 1;
        }
        printf("\nSTMT_EXEC;;4011\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    printf("\nSTMT_EXEC;;4014\n");
decrypt = (int)*(h + 6) & 1;
    printf("\nSTMT_EXEC;;4015\n");
if (decrypt != 0)
    {
      {
        printf("\nSTMT_EXEC;;4018\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: %s: encrypted file -- use unzip\n", progname, ifname);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;4019\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;4021\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;4023\n");
ext_header = ((int)*(h + 6) & 8) != 0;
    printf("\nSTMT_EXEC;;4024\n");
pkzip = 1;
    printf("\nSTMT_EXEC;;4025\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int unzip(int in, int out)
{
  printf("\nFUNC_CALL;unzip(int,int);\n");
printf("\nSTMT_EXEC;;4030\n");
ulg orig_crc;
  printf("\nSTMT_EXEC;;4031\n");
ulg orig_len___0;
  printf("\nSTMT_EXEC;;4032\n");
int n;
  printf("\nSTMT_EXEC;;4033\n");
uch buf[16];
  printf("\nSTMT_EXEC;;4034\n");
int res;
  printf("\nSTMT_EXEC;;4035\n");
int tmp;
  printf("\nSTMT_EXEC;;4036\n");
register ulg n___0;
  printf("\nSTMT_EXEC;;4037\n");
int tmp___0;
  printf("\nSTMT_EXEC;;4038\n");
uch c;
  printf("\nSTMT_EXEC;;4039\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;4040\n");
int tmp___2;
  printf("\nSTMT_EXEC;;4041\n");
int tmp___3;
  printf("\nSTMT_EXEC;;4042\n");
unsigned int tmp___4;
  printf("\nSTMT_EXEC;;4043\n");
ulg tmp___5;
  printf("\nSTMT_EXEC;;4044\n");
unsigned int tmp___6;
  printf("\nSTMT_EXEC;;4045\n");
int tmp___7;
  printf("\nSTMT_EXEC;;4046\n");
int tmp___8;
  printf("\nSTMT_EXEC;;4047\n");
unsigned int tmp___9;
  printf("\nSTMT_EXEC;;4048\n");
int tmp___10;
  printf("\nSTMT_EXEC;;4049\n");
int tmp___11;
  printf("\nSTMT_EXEC;;4050\n");
ulg tmp___12;
  printf("\nSTMT_EXEC;;4051\n");
void *__cil_tmp24;
  printf("\nSTMT_EXEC;;4052\n");
char *__cil_tmp25;
  printf("\nSTMT_EXEC;;4053\n");
char *__cil_tmp26;
  printf("\nSTMT_EXEC;;4054\n");
char *__cil_tmp27;
  printf("\nSTMT_EXEC;;4055\n");
char *__cil_tmp28;
  printf("\nSTMT_EXEC;;4056\n");
char *__cil_tmp29;
  printf("\nSTMT_EXEC;;4057\n");
char *__cil_tmp30;
  printf("\nSTMT_EXEC;;4058\n");
char *__cil_tmp31;
  {
    {
      printf("\nSTMT_EXEC;;4061\n");
orig_crc = (ulg)0;
      printf("\nSTMT_EXEC;;4062\n");
orig_len___0 = (ulg)0;
      printf("\nSTMT_EXEC;;4063\n");
ifd = in;
      printf("\nSTMT_EXEC;;4064\n");
ofd = out;
      printf("\nSTMT_EXEC;;4065\n");
updcrc((uch *)((void *)0), 0U);
    }
    printf("\nSTMT_EXEC;;4067\n");
if (pkzip)
    {
      printf("\nSTMT_EXEC;;4069\n");
if (!ext_header)
      {
        printf("\nSTMT_EXEC;;4071\n");
orig_crc = (ulg)((int)((ush) * ((inbuf + 14) + 0)) | ((int)((ush) * ((inbuf + 14) + 1)) << 8)) | ((ulg)((int)((ush) * (((inbuf + 14) + 2) + 0)) | ((int)((ush) * (((inbuf + 14) + 2) + 1)) << 8)) << 16);
        printf("\nSTMT_EXEC;;4072\n");
orig_len___0 = (ulg)((int)((ush) * ((inbuf + 22) + 0)) | ((int)((ush) * ((inbuf + 22) + 1)) << 8)) | ((ulg)((int)((ush) * (((inbuf + 22) + 2) + 0)) | ((int)((ush) * (((inbuf + 22) + 2) + 1)) << 8)) << 16);
      }
    }
    printf("\nSTMT_EXEC;;4075\n");
if (method == 8)
    {
      {
        printf("\nSTMT_EXEC;;4078\n");
tmp = inflate();
        printf("\nSTMT_EXEC;;4079\n");
res = tmp;
      }
      printf("\nSTMT_EXEC;;4081\n");
if (res == 3)
      {
        {
          printf("\nSTMT_EXEC;;4084\n");
error((char *)"out of memory");
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;4089\n");
if (res != 0)
        {
          {
            printf("\nSTMT_EXEC;;4092\n");
error((char *)"invalid compressed data--format violated");
          }
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;4099\n");
if (pkzip)
      {
        printf("\nSTMT_EXEC;;4101\n");
if (method == 0)
        {
          printf("\nSTMT_EXEC;;4103\n");
n___0 = (ulg)((int)((ush) * ((inbuf + 22) + 0)) | ((int)((ush) * ((inbuf + 22) + 1)) << 8)) | ((ulg)((int)((ush) * (((inbuf + 22) + 2) + 0)) | ((int)((ush) * (((inbuf + 22) + 2) + 1)) << 8)) << 16);
          printf("\nSTMT_EXEC;;4104\n");
if (decrypt)
          {
            printf("\nSTMT_EXEC;;4106\n");
tmp___0 = 12;
          }
          else
          {
            printf("\nSTMT_EXEC;;4110\n");
tmp___0 = 0;
          }
          printf("\nSTMT_EXEC;;4112\n");
if (n___0 != ((ulg)((int)((ush) * ((inbuf + 18) + 0)) | ((int)((ush) * ((inbuf + 18) + 1)) << 8)) | ((ulg)((int)((ush) * (((inbuf + 18) + 2) + 0)) | ((int)((ush) * (((inbuf + 18) + 2) + 1)) << 8)) << 16)) - (unsigned long)tmp___0)
          {
            {
              printf("\nSTMT_EXEC;;4115\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "len %ld, siz %ld\n", n___0, (ulg)((int)((ush) * ((inbuf + 18) + 0)) | ((int)((ush) * ((inbuf + 18) + 1)) << 8)) | ((ulg)((int)((ush) * (((inbuf + 18) + 2) + 0)) | ((int)((ush) * (((inbuf + 18) + 2) + 1)) << 8)) << 16));printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;4116\n");
error((char *)"invalid compressed data--length mismatch");
            }
          }
          {
            printf("\nSTMT_EXEC;;4120\n");
while (1)
            {
            while_continue: /* CIL Label */;
              printf("\nSTMT_EXEC;;4123\n");
tmp___5 = n___0;
              printf("\nSTMT_EXEC;;4124\n");
n___0--;
              printf("\nSTMT_EXEC;;4125\n");
if (!tmp___5)
              {
                printf("\nSTMT_EXEC;;4127\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;4129\n");
if (inptr < insize)
              {
                printf("\nSTMT_EXEC;;4131\n");
tmp___1 = inptr;
                printf("\nSTMT_EXEC;;4132\n");
inptr++;
                printf("\nSTMT_EXEC;;4133\n");
tmp___3 = (int)inbuf[tmp___1];
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;4138\n");
tmp___2 = fill_inbuf(0);
                  printf("\nSTMT_EXEC;;4139\n");
tmp___3 = tmp___2;
                }
              }
              printf("\nSTMT_EXEC;;4142\n");
c = (uch)tmp___3;
              printf("\nSTMT_EXEC;;4143\n");
tmp___4 = outcnt;
              printf("\nSTMT_EXEC;;4144\n");
outcnt++;
              printf("\nSTMT_EXEC;;4145\n");
window[tmp___4] = c;
              printf("\nSTMT_EXEC;;4146\n");
if (outcnt == 32768U)
              {
                {
                  printf("\nSTMT_EXEC;;4149\n");
flush_window();
                }
              }
            }
          while_break: /* CIL Label */;
          }
          {
            printf("\nSTMT_EXEC;;4156\n");
flush_window();
          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;4162\n");
error((char *)"internal error, invalid method");
          }
        }
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;4169\n");
error((char *)"internal error, invalid method");
        }
      }
    }
    printf("\nSTMT_EXEC;;4173\n");
if (!pkzip)
    {
      printf("\nSTMT_EXEC;;4175\n");
n = 0;
      {
        printf("\nSTMT_EXEC;;4177\n");
while (1)
        {
        while_continue___0: /* CIL Label */;
          printf("\nSTMT_EXEC;;4180\n");
if (!(n < 8))
          {
            printf("\nSTMT_EXEC;;4182\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;4184\n");
if (inptr < insize)
          {
            printf("\nSTMT_EXEC;;4186\n");
tmp___6 = inptr;
            printf("\nSTMT_EXEC;;4187\n");
inptr++;
            printf("\nSTMT_EXEC;;4188\n");
tmp___8 = (int)inbuf[tmp___6];
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;4193\n");
tmp___7 = fill_inbuf(0);
              printf("\nSTMT_EXEC;;4194\n");
tmp___8 = tmp___7;
            }
          }
          printf("\nSTMT_EXEC;;4197\n");
buf[n] = (uch)tmp___8;
          printf("\nSTMT_EXEC;;4198\n");
n++;
        }
      while_break___0: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;4202\n");
orig_crc = (ulg)((int)((ush)buf[0]) | ((int)((ush)buf[1]) << 8)) | ((ulg)((int)((ush) * ((buf + 2) + 0)) | ((int)((ush) * ((buf + 2) + 1)) << 8)) << 16);
      printf("\nSTMT_EXEC;;4203\n");
orig_len___0 = (ulg)((int)((ush) * ((buf + 4) + 0)) | ((int)((ush) * ((buf + 4) + 1)) << 8)) | ((ulg)((int)((ush) * (((buf + 4) + 2) + 0)) | ((int)((ush) * (((buf + 4) + 2) + 1)) << 8)) << 16);
    }
    else
    {
      printf("\nSTMT_EXEC;;4207\n");
if (ext_header)
      {
        printf("\nSTMT_EXEC;;4209\n");
n = 0;
        {
          printf("\nSTMT_EXEC;;4211\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;4214\n");
if (!(n < 16))
            {
              printf("\nSTMT_EXEC;;4216\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;4218\n");
if (inptr < insize)
            {
              printf("\nSTMT_EXEC;;4220\n");
tmp___9 = inptr;
              printf("\nSTMT_EXEC;;4221\n");
inptr++;
              printf("\nSTMT_EXEC;;4222\n");
tmp___11 = (int)inbuf[tmp___9];
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;4227\n");
tmp___10 = fill_inbuf(0);
                printf("\nSTMT_EXEC;;4228\n");
tmp___11 = tmp___10;
              }
            }
            printf("\nSTMT_EXEC;;4231\n");
buf[n] = (uch)tmp___11;
            printf("\nSTMT_EXEC;;4232\n");
n++;
          }
        while_break___1: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4236\n");
orig_crc = (ulg)((int)((ush) * ((buf + 4) + 0)) | ((int)((ush) * ((buf + 4) + 1)) << 8)) | ((ulg)((int)((ush) * (((buf + 4) + 2) + 0)) | ((int)((ush) * (((buf + 4) + 2) + 1)) << 8)) << 16);
        printf("\nSTMT_EXEC;;4237\n");
orig_len___0 = (ulg)((int)((ush) * ((buf + 12) + 0)) | ((int)((ush) * ((buf + 12) + 1)) << 8)) | ((ulg)((int)((ush) * (((buf + 12) + 2) + 0)) | ((int)((ush) * (((buf + 12) + 2) + 1)) << 8)) << 16);
      }
    }
    {
      printf("\nSTMT_EXEC;;4241\n");
tmp___12 = updcrc(outbuf, 0U);
    }
    printf("\nSTMT_EXEC;;4243\n");
if (orig_crc != tmp___12)
    {
      {
        printf("\nSTMT_EXEC;;4246\n");
error((char *)"invalid compressed data--crc error");
      }
    }
    printf("\nSTMT_EXEC;;4249\n");
if (orig_len___0 != (ulg)bytes_out)
    {
      {
        printf("\nSTMT_EXEC;;4252\n");
error((char *)"invalid compressed data--length error");
      }
    }
    printf("\nSTMT_EXEC;;4255\n");
if (pkzip)
    {
      printf("\nSTMT_EXEC;;4257\n");
if (inptr + 4U < insize)
      {
        printf("\nSTMT_EXEC;;4259\n");
if (((ulg)((int)((ush) * ((inbuf + inptr) + 0)) | ((int)((ush) * ((inbuf + inptr) + 1)) << 8)) | ((ulg)((int)((ush) * (((inbuf + inptr) + 2) + 0)) | ((int)((ush) * (((inbuf + inptr) + 2) + 1)) << 8)) << 16)) == 67324752UL)
        {
          printf("\nSTMT_EXEC;;4261\n");
if (to_stdout)
          {
            printf("\nSTMT_EXEC;;4263\n");
if (!quiet)
            {
              {
                printf("\nSTMT_EXEC;;4266\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                        (char const * /* __restrict  */) "%s: %s has more than one "
                                                         "entry--rest ignored\n",
                        progname, ifname);printf("\nFUNC_RETURN;;\n");

              }
            }
            printf("\nSTMT_EXEC;;4272\n");
if (exit_code == 0)
            {
              printf("\nSTMT_EXEC;;4274\n");
exit_code = 2;
            }
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;4280\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s: %s has more than one "
                                                       "entry -- unchanged\n",
                      progname, ifname);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;4284\n");
exit_code = 1;
              printf("\nSTMT_EXEC;;4285\n");
pkzip = 0;
              printf("\nSTMT_EXEC;;4286\n");
ext_header = pkzip;
            }
            printf("\nSTMT_EXEC;;4288\n");
printf("\nFUNC_RETURN;;\n");
return (1);
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;4293\n");
pkzip = 0;
    printf("\nSTMT_EXEC;;4294\n");
ext_header = pkzip;
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
static file_t zfile;
static unsigned short bi_buf;
static int bi_valid;
void bi_init(file_t zipfile)
{
  printf("\nFUNC_CALL;bi_init(file_t);\n");
{
    printf("\nSTMT_EXEC;;4311\n");
zfile = zipfile;
    printf("\nSTMT_EXEC;;4312\n");
bi_buf = (unsigned short)0;
    printf("\nSTMT_EXEC;;4313\n");
bi_valid = 0;
    printf("\nSTMT_EXEC;;4314\n");
if (zfile != -1)
    {
      printf("\nSTMT_EXEC;;4316\n");
read_buf = &file_read;
    }
    printf("\nSTMT_EXEC;;4318\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void send_bits(int value, int length)
{
  printf("\nFUNC_CALL;send_bits(int,int);\n");
printf("\nSTMT_EXEC;;4323\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;4324\n");
unsigned int tmp___0;
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
      printf("\nSTMT_EXEC;;4331\n");
if (outcnt < 16382U)
      {
        printf("\nSTMT_EXEC;;4333\n");
tmp = outcnt;
        printf("\nSTMT_EXEC;;4334\n");
outcnt++;
        printf("\nSTMT_EXEC;;4335\n");
outbuf[tmp] = (uch)((int)bi_buf & 255);
        printf("\nSTMT_EXEC;;4336\n");
tmp___0 = outcnt;
        printf("\nSTMT_EXEC;;4337\n");
outcnt++;
        printf("\nSTMT_EXEC;;4338\n");
outbuf[tmp___0] = (uch)((int)bi_buf >> 8);
      }
      else
      {
        printf("\nSTMT_EXEC;;4342\n");
tmp___1 = outcnt;
        printf("\nSTMT_EXEC;;4343\n");
outcnt++;
        printf("\nSTMT_EXEC;;4344\n");
outbuf[tmp___1] = (uch)((int)bi_buf & 255);
        printf("\nSTMT_EXEC;;4345\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4348\n");
flush_outbuf();
          }
        }
        printf("\nSTMT_EXEC;;4351\n");
tmp___2 = outcnt;
        printf("\nSTMT_EXEC;;4352\n");
outcnt++;
        printf("\nSTMT_EXEC;;4353\n");
outbuf[tmp___2] = (uch)((int)bi_buf >> 8);
        printf("\nSTMT_EXEC;;4354\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4357\n");
flush_outbuf();
          }
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
    printf("\nSTMT_EXEC;;4369\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      while_continue: /* CIL Label */;
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
printf("\nSTMT_EXEC;;4397\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;4398\n");
unsigned int tmp___0;
  printf("\nSTMT_EXEC;;4399\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;4400\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;4401\n");
unsigned int tmp___3;
  {
    printf("\nSTMT_EXEC;;4403\n");
if (bi_valid > 8)
    {
      printf("\nSTMT_EXEC;;4405\n");
if (outcnt < 16382U)
      {
        printf("\nSTMT_EXEC;;4407\n");
tmp = outcnt;
        printf("\nSTMT_EXEC;;4408\n");
outcnt++;
        printf("\nSTMT_EXEC;;4409\n");
outbuf[tmp] = (uch)((int)bi_buf & 255);
        printf("\nSTMT_EXEC;;4410\n");
tmp___0 = outcnt;
        printf("\nSTMT_EXEC;;4411\n");
outcnt++;
        printf("\nSTMT_EXEC;;4412\n");
outbuf[tmp___0] = (uch)((int)bi_buf >> 8);
      }
      else
      {
        printf("\nSTMT_EXEC;;4416\n");
tmp___1 = outcnt;
        printf("\nSTMT_EXEC;;4417\n");
outcnt++;
        printf("\nSTMT_EXEC;;4418\n");
outbuf[tmp___1] = (uch)((int)bi_buf & 255);
        printf("\nSTMT_EXEC;;4419\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4422\n");
flush_outbuf();
          }
        }
        printf("\nSTMT_EXEC;;4425\n");
tmp___2 = outcnt;
        printf("\nSTMT_EXEC;;4426\n");
outcnt++;
        printf("\nSTMT_EXEC;;4427\n");
outbuf[tmp___2] = (uch)((int)bi_buf >> 8);
        printf("\nSTMT_EXEC;;4428\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4431\n");
flush_outbuf();
          }
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;4438\n");
if (bi_valid > 0)
      {
        printf("\nSTMT_EXEC;;4440\n");
tmp___3 = outcnt;
        printf("\nSTMT_EXEC;;4441\n");
outcnt++;
        printf("\nSTMT_EXEC;;4442\n");
outbuf[tmp___3] = (uch)bi_buf;
        printf("\nSTMT_EXEC;;4443\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4446\n");
flush_outbuf();
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;4451\n");
bi_buf = (unsigned short)0;
    printf("\nSTMT_EXEC;;4452\n");
bi_valid = 0;
    printf("\nSTMT_EXEC;;4453\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void copy_block(char *buf, unsigned int len, int header)
{
  printf("\nFUNC_CALL;copy_block(char *,unsigned int,int);\n");
printf("\nSTMT_EXEC;;4458\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;4459\n");
unsigned int tmp___0;
  printf("\nSTMT_EXEC;;4460\n");
unsigned int tmp___1;
  printf("\nSTMT_EXEC;;4461\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;4462\n");
unsigned int tmp___3;
  printf("\nSTMT_EXEC;;4463\n");
unsigned int tmp___4;
  printf("\nSTMT_EXEC;;4464\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;4465\n");
unsigned int tmp___6;
  printf("\nSTMT_EXEC;;4466\n");
unsigned int tmp___7;
  printf("\nSTMT_EXEC;;4467\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;4468\n");
unsigned int tmp___9;
  {
    {
      printf("\nSTMT_EXEC;;4471\n");
bi_windup();
    }
    printf("\nSTMT_EXEC;;4473\n");
if (header)
    {
      printf("\nSTMT_EXEC;;4475\n");
if (outcnt < 16382U)
      {
        printf("\nSTMT_EXEC;;4477\n");
tmp = outcnt;
        printf("\nSTMT_EXEC;;4478\n");
outcnt++;
        printf("\nSTMT_EXEC;;4479\n");
outbuf[tmp] = (uch)((int)((ush)len) & 255);
        printf("\nSTMT_EXEC;;4480\n");
tmp___0 = outcnt;
        printf("\nSTMT_EXEC;;4481\n");
outcnt++;
        printf("\nSTMT_EXEC;;4482\n");
outbuf[tmp___0] = (uch)((int)((ush)len) >> 8);
      }
      else
      {
        printf("\nSTMT_EXEC;;4486\n");
tmp___1 = outcnt;
        printf("\nSTMT_EXEC;;4487\n");
outcnt++;
        printf("\nSTMT_EXEC;;4488\n");
outbuf[tmp___1] = (uch)((int)((ush)len) & 255);
        printf("\nSTMT_EXEC;;4489\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4492\n");
flush_outbuf();
          }
        }
        printf("\nSTMT_EXEC;;4495\n");
tmp___2 = outcnt;
        printf("\nSTMT_EXEC;;4496\n");
outcnt++;
        printf("\nSTMT_EXEC;;4497\n");
outbuf[tmp___2] = (uch)((int)((ush)len) >> 8);
        printf("\nSTMT_EXEC;;4498\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4501\n");
flush_outbuf();
          }
        }
      }
      printf("\nSTMT_EXEC;;4505\n");
if (outcnt < 16382U)
      {
        printf("\nSTMT_EXEC;;4507\n");
tmp___3 = outcnt;
        printf("\nSTMT_EXEC;;4508\n");
outcnt++;
        printf("\nSTMT_EXEC;;4509\n");
outbuf[tmp___3] = (uch)((int)((ush)(~len)) & 255);
        printf("\nSTMT_EXEC;;4510\n");
tmp___4 = outcnt;
        printf("\nSTMT_EXEC;;4511\n");
outcnt++;
        printf("\nSTMT_EXEC;;4512\n");
outbuf[tmp___4] = (uch)((int)((ush)(~len)) >> 8);
      }
      else
      {
        printf("\nSTMT_EXEC;;4516\n");
tmp___5 = outcnt;
        printf("\nSTMT_EXEC;;4517\n");
outcnt++;
        printf("\nSTMT_EXEC;;4518\n");
outbuf[tmp___5] = (uch)((int)((ush)(~len)) & 255);
        printf("\nSTMT_EXEC;;4519\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4522\n");
flush_outbuf();
          }
        }
        printf("\nSTMT_EXEC;;4525\n");
tmp___6 = outcnt;
        printf("\nSTMT_EXEC;;4526\n");
outcnt++;
        printf("\nSTMT_EXEC;;4527\n");
outbuf[tmp___6] = (uch)((int)((ush)(~len)) >> 8);
        printf("\nSTMT_EXEC;;4528\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4531\n");
flush_outbuf();
          }
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;4537\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;4540\n");
tmp___9 = len;
        printf("\nSTMT_EXEC;;4541\n");
len--;
        printf("\nSTMT_EXEC;;4542\n");
if (!tmp___9)
        {
          printf("\nSTMT_EXEC;;4544\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;4546\n");
tmp___7 = outcnt;
        printf("\nSTMT_EXEC;;4547\n");
outcnt++;
        printf("\nSTMT_EXEC;;4548\n");
tmp___8 = buf;
        printf("\nSTMT_EXEC;;4549\n");
buf++;
        printf("\nSTMT_EXEC;;4550\n");
outbuf[tmp___7] = (uch)*tmp___8;
        printf("\nSTMT_EXEC;;4551\n");
if (outcnt == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;4554\n");
flush_outbuf();
          }
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4560\n");
printf("\nFUNC_RETURN;;\n");
return;
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
static ulg opt_len;
static ulg static_len;
static ulg compressed_len;
static ulg input_len;
ush *file_type;
int *file_method;
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
  printf("\nSTMT_EXEC;;4616\n");
int bits;
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
  printf("\nSTMT_EXEC;;4623\n");
int tmp___2;
  printf("\nSTMT_EXEC;;4624\n");
int tmp___3;
  printf("\nSTMT_EXEC;;4625\n");
int tmp___4;
  printf("\nSTMT_EXEC;;4626\n");
int tmp___5;
  {
    printf("\nSTMT_EXEC;;4628\n");
file_type = attr;
    printf("\nSTMT_EXEC;;4629\n");
file_method = methodp;
    printf("\nSTMT_EXEC;;4630\n");
input_len = (ulg)0L;
    printf("\nSTMT_EXEC;;4631\n");
compressed_len = input_len;
    printf("\nSTMT_EXEC;;4632\n");
if ((int)static_dtree[0].dl.len != 0)
    {
      printf("\nSTMT_EXEC;;4634\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;4636\n");
length = 0;
    printf("\nSTMT_EXEC;;4637\n");
code = 0;
    {
      printf("\nSTMT_EXEC;;4639\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
          while_continue___0: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4667\n");
length_code[length - 1] = (uch)code;
    printf("\nSTMT_EXEC;;4668\n");
dist = 0;
    printf("\nSTMT_EXEC;;4669\n");
code = 0;
    {
      printf("\nSTMT_EXEC;;4671\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
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
          while_continue___2: /* CIL Label */;
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
      while_continue___3: /* CIL Label */;
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
          while_continue___4: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4729\n");
bits = 0;
    {
      printf("\nSTMT_EXEC;;4731\n");
while (1)
      {
      while_continue___5: /* CIL Label */;
        printf("\nSTMT_EXEC;;4734\n");
if (!(bits <= 15))
        {
          printf("\nSTMT_EXEC;;4736\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;4738\n");
bl_count[bits] = (ush)0;
        printf("\nSTMT_EXEC;;4739\n");
bits++;
      }
    while_break___5: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4743\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;4745\n");
while (1)
      {
      while_continue___6: /* CIL Label */;
        printf("\nSTMT_EXEC;;4748\n");
if (!(n <= 143))
        {
          printf("\nSTMT_EXEC;;4750\n");
goto while_break___6;
        }
        printf("\nSTMT_EXEC;;4752\n");
tmp___2 = n;
        printf("\nSTMT_EXEC;;4753\n");
n++;
        printf("\nSTMT_EXEC;;4754\n");
static_ltree[tmp___2].dl.len = (ush)8;
        printf("\nSTMT_EXEC;;4755\n");
bl_count[8] = (ush)((int)bl_count[8] + 1);
      }
    while_break___6: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;4760\n");
while (1)
      {
      while_continue___7: /* CIL Label */;
        printf("\nSTMT_EXEC;;4763\n");
if (!(n <= 255))
        {
          printf("\nSTMT_EXEC;;4765\n");
goto while_break___7;
        }
        printf("\nSTMT_EXEC;;4767\n");
tmp___3 = n;
        printf("\nSTMT_EXEC;;4768\n");
n++;
        printf("\nSTMT_EXEC;;4769\n");
static_ltree[tmp___3].dl.len = (ush)9;
        printf("\nSTMT_EXEC;;4770\n");
bl_count[9] = (ush)((int)bl_count[9] + 1);
      }
    while_break___7: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;4775\n");
while (1)
      {
      while_continue___8: /* CIL Label */;
        printf("\nSTMT_EXEC;;4778\n");
if (!(n <= 279))
        {
          printf("\nSTMT_EXEC;;4780\n");
goto while_break___8;
        }
        printf("\nSTMT_EXEC;;4782\n");
tmp___4 = n;
        printf("\nSTMT_EXEC;;4783\n");
n++;
        printf("\nSTMT_EXEC;;4784\n");
static_ltree[tmp___4].dl.len = (ush)7;
        printf("\nSTMT_EXEC;;4785\n");
bl_count[7] = (ush)((int)bl_count[7] + 1);
      }
    while_break___8: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;4790\n");
while (1)
      {
      while_continue___9: /* CIL Label */;
        printf("\nSTMT_EXEC;;4793\n");
if (!(n <= 287))
        {
          printf("\nSTMT_EXEC;;4795\n");
goto while_break___9;
        }
        printf("\nSTMT_EXEC;;4797\n");
tmp___5 = n;
        printf("\nSTMT_EXEC;;4798\n");
n++;
        printf("\nSTMT_EXEC;;4799\n");
static_ltree[tmp___5].dl.len = (ush)8;
        printf("\nSTMT_EXEC;;4800\n");
bl_count[8] = (ush)((int)bl_count[8] + 1);
      }
    while_break___9: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;4805\n");
gen_codes(static_ltree, 287);
      printf("\nSTMT_EXEC;;4806\n");
n = 0;
    }
    {
      printf("\nSTMT_EXEC;;4809\n");
while (1)
      {
      while_continue___10: /* CIL Label */;
        printf("\nSTMT_EXEC;;4812\n");
if (!(n < 30))
        {
          printf("\nSTMT_EXEC;;4814\n");
goto while_break___10;
        }
        {
          printf("\nSTMT_EXEC;;4817\n");
static_dtree[n].dl.len = (ush)5;
          printf("\nSTMT_EXEC;;4818\n");
static_dtree[n].fc.code = (ush)bi_reverse((unsigned int)n, 5);
          printf("\nSTMT_EXEC;;4819\n");
n++;
        }
      }
    while_break___10: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;4825\n");
init_block();
    }
    printf("\nSTMT_EXEC;;4827\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      while_continue: /* CIL Label */;
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
      while_continue___0: /* CIL Label */;
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
      while_continue___1: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4877\n");
static_len = (ulg)0L;
    printf("\nSTMT_EXEC;;4878\n");
opt_len = static_len;
    printf("\nSTMT_EXEC;;4879\n");
last_flags = 0U;
    printf("\nSTMT_EXEC;;4880\n");
last_dist = last_flags;
    printf("\nSTMT_EXEC;;4881\n");
last_lit = last_dist;
    printf("\nSTMT_EXEC;;4882\n");
flags = (uch)0;
    printf("\nSTMT_EXEC;;4883\n");
flag_bit = (uch)1;
    printf("\nSTMT_EXEC;;4884\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4940\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void gen_bitlen(tree_desc *desc)
{
  printf("\nFUNC_CALL;gen_bitlen(tree_desc *);\n");
printf("\nSTMT_EXEC;;4945\n");
ct_data *tree;
  printf("\nSTMT_EXEC;;4946\n");
int *extra;
  printf("\nSTMT_EXEC;;4947\n");
int base;
  printf("\nSTMT_EXEC;;4948\n");
int max_code;
  printf("\nSTMT_EXEC;;4949\n");
int max_length;
  printf("\nSTMT_EXEC;;4950\n");
ct_data *stree;
  printf("\nSTMT_EXEC;;4951\n");
int h;
  printf("\nSTMT_EXEC;;4952\n");
int n;
  printf("\nSTMT_EXEC;;4953\n");
int m;
  printf("\nSTMT_EXEC;;4954\n");
int bits;
  printf("\nSTMT_EXEC;;4955\n");
int xbits;
  printf("\nSTMT_EXEC;;4956\n");
ush f;
  printf("\nSTMT_EXEC;;4957\n");
int overflow;
  {
    printf("\nSTMT_EXEC;;4959\n");
tree = desc->dyn_tree;
    printf("\nSTMT_EXEC;;4960\n");
extra = desc->extra_bits;
    printf("\nSTMT_EXEC;;4961\n");
base = desc->extra_base;
    printf("\nSTMT_EXEC;;4962\n");
max_code = desc->max_code;
    printf("\nSTMT_EXEC;;4963\n");
max_length = desc->max_length;
    printf("\nSTMT_EXEC;;4964\n");
stree = desc->static_tree;
    printf("\nSTMT_EXEC;;4965\n");
overflow = 0;
    printf("\nSTMT_EXEC;;4966\n");
bits = 0;
    {
      printf("\nSTMT_EXEC;;4968\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4980\n");
(tree + heap[heap_max])->dl.len = (ush)0;
    printf("\nSTMT_EXEC;;4981\n");
h = heap_max + 1;
    {
      printf("\nSTMT_EXEC;;4983\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;4992\n");
if (bits > max_length)
        {
          printf("\nSTMT_EXEC;;4994\n");
bits = max_length;
          printf("\nSTMT_EXEC;;4995\n");
overflow++;
        }
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
        printf("\nSTMT_EXEC;;5003\n");
xbits = 0;
        printf("\nSTMT_EXEC;;5004\n");
if (n >= base)
        {
          printf("\nSTMT_EXEC;;5006\n");
xbits = *(extra + (n - base));
        }
        printf("\nSTMT_EXEC;;5008\n");
f = (tree + n)->fc.freq;
        printf("\nSTMT_EXEC;;5009\n");
opt_len += (ulg)f * (ulg)(bits + xbits);
        printf("\nSTMT_EXEC;;5010\n");
if (stree)
        {
          printf("\nSTMT_EXEC;;5012\n");
static_len += (ulg)f * (ulg)((int)(stree + n)->dl.len + xbits);
        }
      __Cont:
        {
printf("\nSTMT_EXEC;;5015\n");
h++;
}

      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5019\n");
if (overflow == 0)
    {
      printf("\nSTMT_EXEC;;5021\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;5024\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;5027\n");
bits = max_length - 1;
        {
          printf("\nSTMT_EXEC;;5029\n");
while (1)
          {
          while_continue___2: /* CIL Label */;
            printf("\nSTMT_EXEC;;5032\n");
if (!((int)bl_count[bits] == 0))
            {
              printf("\nSTMT_EXEC;;5034\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;5036\n");
bits--;
          }
        while_break___2: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;5040\n");
bl_count[bits] = (ush)((int)bl_count[bits] - 1);
        printf("\nSTMT_EXEC;;5041\n");
bl_count[bits + 1] = (ush)((int)bl_count[bits + 1] + 2);
        printf("\nSTMT_EXEC;;5042\n");
bl_count[max_length] = (ush)((int)bl_count[max_length] - 1);
        printf("\nSTMT_EXEC;;5043\n");
overflow -= 2;
        printf("\nSTMT_EXEC;;5044\n");
if (!(overflow > 0))
        {
          printf("\nSTMT_EXEC;;5046\n");
goto while_break___1;
        }
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5051\n");
bits = max_length;
    {
      printf("\nSTMT_EXEC;;5053\n");
while (1)
      {
      while_continue___3: /* CIL Label */;
        printf("\nSTMT_EXEC;;5056\n");
if (!(bits != 0))
        {
          printf("\nSTMT_EXEC;;5058\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;5060\n");
n = (int)bl_count[bits];
        {
          printf("\nSTMT_EXEC;;5062\n");
while (1)
          {
          while_continue___4: /* CIL Label */;
            printf("\nSTMT_EXEC;;5065\n");
if (!(n != 0))
            {
              printf("\nSTMT_EXEC;;5067\n");
goto while_break___4;
            }
            printf("\nSTMT_EXEC;;5069\n");
h--;
            printf("\nSTMT_EXEC;;5070\n");
m = heap[h];
            printf("\nSTMT_EXEC;;5071\n");
if (m > max_code)
            {
              printf("\nSTMT_EXEC;;5073\n");
goto while_continue___4;
            }
            printf("\nSTMT_EXEC;;5075\n");
if ((unsigned int)(tree + m)->dl.len != (unsigned int)bits)
            {
              printf("\nSTMT_EXEC;;5077\n");
opt_len += (ulg)(((long)bits - (long)(tree + m)->dl.len) * (long)(tree + m)->fc.freq);
              printf("\nSTMT_EXEC;;5078\n");
(tree + m)->dl.len = (ush)bits;
            }
            printf("\nSTMT_EXEC;;5080\n");
n--;
          }
        while_break___4: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;5084\n");
bits--;
      }
    while_break___3: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5088\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;5099\n");
void *__cil_tmp10;
  {
    printf("\nSTMT_EXEC;;5101\n");
code = (ush)0;
    printf("\nSTMT_EXEC;;5102\n");
bits = 1;
    {
      printf("\nSTMT_EXEC;;5104\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;5122\n");
if (!(n <= max_code))
        {
          printf("\nSTMT_EXEC;;5124\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;5126\n");
len = (int)(tree + n)->dl.len;
        printf("\nSTMT_EXEC;;5127\n");
if (len == 0)
        {
          printf("\nSTMT_EXEC;;5129\n");
goto __Cont;
        }
        {
          printf("\nSTMT_EXEC;;5132\n");
tmp = next_code[len];
          printf("\nSTMT_EXEC;;5133\n");
next_code[len] = (ush)((int)next_code[len] + 1);
          printf("\nSTMT_EXEC;;5134\n");
(tree + n)->fc.code = (ush)bi_reverse((unsigned int)tmp, len);
        }
      __Cont:
        {
printf("\nSTMT_EXEC;;5137\n");
n++;
}

      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5141\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void build_tree___0(tree_desc *desc)
{
  printf("\nFUNC_CALL;build_tree___0(tree_desc *);\n");
printf("\nSTMT_EXEC;;5146\n");
ct_data *tree;
  printf("\nSTMT_EXEC;;5147\n");
ct_data *stree;
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
  printf("\nSTMT_EXEC;;5153\n");
int new;
  printf("\nSTMT_EXEC;;5154\n");
int tmp;
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
    printf("\nSTMT_EXEC;;5161\n");
stree = desc->static_tree;
    printf("\nSTMT_EXEC;;5162\n");
elems = desc->elems;
    printf("\nSTMT_EXEC;;5163\n");
max_code = -1;
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
      while_continue: /* CIL Label */;
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
          printf("\nSTMT_EXEC;;5181\n");
depth[n] = (uch)0;
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
    {
      printf("\nSTMT_EXEC;;5192\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;5195\n");
if (!(heap_len < 2))
        {
          printf("\nSTMT_EXEC;;5197\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;5199\n");
heap_len++;
        printf("\nSTMT_EXEC;;5200\n");
if (max_code < 2)
        {
          printf("\nSTMT_EXEC;;5202\n");
max_code++;
          printf("\nSTMT_EXEC;;5203\n");
tmp = max_code;
        }
        else
        {
          printf("\nSTMT_EXEC;;5207\n");
tmp = 0;
        }
        printf("\nSTMT_EXEC;;5209\n");
heap[heap_len] = tmp;
        printf("\nSTMT_EXEC;;5210\n");
new = tmp;
        printf("\nSTMT_EXEC;;5211\n");
(tree + new)->fc.freq = (ush)1;
        printf("\nSTMT_EXEC;;5212\n");
depth[new] = (uch)0;
        printf("\nSTMT_EXEC;;5213\n");
opt_len--;
        printf("\nSTMT_EXEC;;5214\n");
if (stree)
        {
          printf("\nSTMT_EXEC;;5216\n");
static_len -= (ulg)(stree + new)->dl.len;
        }
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5221\n");
desc->max_code = max_code;
    printf("\nSTMT_EXEC;;5222\n");
n = heap_len / 2;
    {
      printf("\nSTMT_EXEC;;5224\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
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
      while_continue___2: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;5255\n");
if ((int)depth[n] >= (int)depth[m])
        {
          printf("\nSTMT_EXEC;;5257\n");
tmp___1 = (int)depth[n];
        }
        else
        {
          printf("\nSTMT_EXEC;;5261\n");
tmp___1 = (int)depth[m];
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
      printf("\nSTMT_EXEC;;5282\n");
heap[heap_max] = heap[1];
      printf("\nSTMT_EXEC;;5283\n");
gen_bitlen(desc);
      printf("\nSTMT_EXEC;;5284\n");
gen_codes(tree, max_code);
    }
    printf("\nSTMT_EXEC;;5286\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void scan_tree(ct_data *tree, int max_code)
{
  printf("\nFUNC_CALL;scan_tree(ct_data *,int);\n");
printf("\nSTMT_EXEC;;5291\n");
int n;
  printf("\nSTMT_EXEC;;5292\n");
int prevlen;
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
    printf("\nSTMT_EXEC;;5299\n");
prevlen = -1;
    printf("\nSTMT_EXEC;;5300\n");
nextlen = (int)(tree + 0)->dl.len;
    printf("\nSTMT_EXEC;;5301\n");
count = 0;
    printf("\nSTMT_EXEC;;5302\n");
max_count = 7;
    printf("\nSTMT_EXEC;;5303\n");
min_count = 4;
    printf("\nSTMT_EXEC;;5304\n");
if (nextlen == 0)
    {
      printf("\nSTMT_EXEC;;5306\n");
max_count = 138;
      printf("\nSTMT_EXEC;;5307\n");
min_count = 3;
    }
    printf("\nSTMT_EXEC;;5309\n");
(tree + (max_code + 1))->dl.len = (ush)65535;
    printf("\nSTMT_EXEC;;5310\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;5312\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
            printf("\nSTMT_EXEC;;5342\n");
if (curlen != 0)
            {
              printf("\nSTMT_EXEC;;5344\n");
if (curlen != prevlen)
              {
                printf("\nSTMT_EXEC;;5346\n");
bl_tree[curlen].fc.freq = (ush)((int)bl_tree[curlen].fc.freq + 1);
              }
              printf("\nSTMT_EXEC;;5348\n");
bl_tree[16].fc.freq = (ush)((int)bl_tree[16].fc.freq + 1);
            }
            else
            {
              printf("\nSTMT_EXEC;;5352\n");
if (count <= 10)
              {
                printf("\nSTMT_EXEC;;5354\n");
bl_tree[17].fc.freq = (ush)((int)bl_tree[17].fc.freq + 1);
              }
              else
              {
                printf("\nSTMT_EXEC;;5358\n");
bl_tree[18].fc.freq = (ush)((int)bl_tree[18].fc.freq + 1);
              }
            }
          }
}

        }
        printf("\nSTMT_EXEC;;5363\n");
count = 0;
        printf("\nSTMT_EXEC;;5364\n");
prevlen = curlen;
        printf("\nSTMT_EXEC;;5365\n");
if (nextlen == 0)
        {
          printf("\nSTMT_EXEC;;5367\n");
max_count = 138;
          printf("\nSTMT_EXEC;;5368\n");
min_count = 3;
        }
        else
        {
          printf("\nSTMT_EXEC;;5372\n");
if (curlen == nextlen)
          {
            printf("\nSTMT_EXEC;;5374\n");
max_count = 6;
            printf("\nSTMT_EXEC;;5375\n");
min_count = 3;
          }
          else
          {
            printf("\nSTMT_EXEC;;5379\n");
max_count = 7;
            printf("\nSTMT_EXEC;;5380\n");
min_count = 4;
          }
        }
      __Cont:
        {
printf("\nSTMT_EXEC;;5384\n");
n++;
}

      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5388\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void send_tree(ct_data *tree, int max_code)
{
  printf("\nFUNC_CALL;send_tree(ct_data *,int);\n");
printf("\nSTMT_EXEC;;5393\n");
int n;
  printf("\nSTMT_EXEC;;5394\n");
int prevlen;
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
    printf("\nSTMT_EXEC;;5401\n");
prevlen = -1;
    printf("\nSTMT_EXEC;;5402\n");
nextlen = (int)(tree + 0)->dl.len;
    printf("\nSTMT_EXEC;;5403\n");
count = 0;
    printf("\nSTMT_EXEC;;5404\n");
max_count = 7;
    printf("\nSTMT_EXEC;;5405\n");
min_count = 4;
    printf("\nSTMT_EXEC;;5406\n");
if (nextlen == 0)
    {
      printf("\nSTMT_EXEC;;5408\n");
max_count = 138;
      printf("\nSTMT_EXEC;;5409\n");
min_count = 3;
    }
    printf("\nSTMT_EXEC;;5411\n");
n = 0;
    {
      printf("\nSTMT_EXEC;;5413\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
            {
              printf("\nSTMT_EXEC;;5440\n");
while (1)
              {
              while_continue___0: /* CIL Label */;
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
          }
          else
          {
            printf("\nSTMT_EXEC;;5457\n");
if (curlen != 0)
            {
              printf("\nSTMT_EXEC;;5459\n");
if (curlen != prevlen)
              {
                {
                  printf("\nSTMT_EXEC;;5462\n");
send_bits((int)bl_tree[curlen].fc.code, (int)bl_tree[curlen].dl.len);
                  printf("\nSTMT_EXEC;;5463\n");
count--;
                }
              }
              {
                printf("\nSTMT_EXEC;;5467\n");
send_bits((int)bl_tree[16].fc.code, (int)bl_tree[16].dl.len);
                printf("\nSTMT_EXEC;;5468\n");
send_bits(count - 3, 2);
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;5473\n");
if (count <= 10)
              {
                {
                  printf("\nSTMT_EXEC;;5476\n");
send_bits((int)bl_tree[17].fc.code, (int)bl_tree[17].dl.len);
                  printf("\nSTMT_EXEC;;5477\n");
send_bits(count - 3, 3);
                }
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;5483\n");
send_bits((int)bl_tree[18].fc.code, (int)bl_tree[18].dl.len);
                  printf("\nSTMT_EXEC;;5484\n");
send_bits(count - 11, 7);
                }
              }
            }
          }
}

        }
        printf("\nSTMT_EXEC;;5490\n");
count = 0;
        printf("\nSTMT_EXEC;;5491\n");
prevlen = curlen;
        printf("\nSTMT_EXEC;;5492\n");
if (nextlen == 0)
        {
          printf("\nSTMT_EXEC;;5494\n");
max_count = 138;
          printf("\nSTMT_EXEC;;5495\n");
min_count = 3;
        }
        else
        {
          printf("\nSTMT_EXEC;;5499\n");
if (curlen == nextlen)
          {
            printf("\nSTMT_EXEC;;5501\n");
max_count = 6;
            printf("\nSTMT_EXEC;;5502\n");
min_count = 3;
          }
          else
          {
            printf("\nSTMT_EXEC;;5506\n");
max_count = 7;
            printf("\nSTMT_EXEC;;5507\n");
min_count = 4;
          }
        }
      __Cont:
        {
printf("\nSTMT_EXEC;;5511\n");
n++;
}

      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5515\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;5532\n");
if (!(max_blindex >= 3))
        {
          printf("\nSTMT_EXEC;;5534\n");
goto while_break;
        }
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
    printf("\nSTMT_EXEC;;5544\n");
opt_len += (ulg)(((3 * (max_blindex + 1) + 5) + 5) + 4);
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
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;5577\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
ulg flush_block(char *buf, ulg stored_len, int eof)
{
  printf("\nFUNC_CALL;flush_block(char *,ulg,int);\n");
printf("\nSTMT_EXEC;;5582\n");
ulg opt_lenb;
  printf("\nSTMT_EXEC;;5583\n");
ulg static_lenb;
  printf("\nSTMT_EXEC;;5584\n");
int max_blindex;
  {
    printf("\nSTMT_EXEC;;5586\n");
flag_buf[last_flags] = flags;
    printf("\nSTMT_EXEC;;5587\n");
if ((int)*file_type == 65535)
    {
      {
        printf("\nSTMT_EXEC;;5590\n");
set_file_type();
      }
    }
    {
      printf("\nSTMT_EXEC;;5594\n");
build_tree___0(&l_desc);
      printf("\nSTMT_EXEC;;5595\n");
build_tree___0(&d_desc);
      printf("\nSTMT_EXEC;;5596\n");
max_blindex = build_bl_tree();
      printf("\nSTMT_EXEC;;5597\n");
opt_lenb = ((opt_len + 3UL) + 7UL) >> 3;
      printf("\nSTMT_EXEC;;5598\n");
static_lenb = ((static_len + 3UL) + 7UL) >> 3;
      printf("\nSTMT_EXEC;;5599\n");
input_len += stored_len;
    }
    printf("\nSTMT_EXEC;;5601\n");
if (static_lenb <= opt_lenb)
    {
      printf("\nSTMT_EXEC;;5603\n");
opt_lenb = static_lenb;
    }
    printf("\nSTMT_EXEC;;5605\n");
if (stored_len <= opt_lenb)
    {
      printf("\nSTMT_EXEC;;5607\n");
if (eof)
      {
        printf("\nSTMT_EXEC;;5609\n");
if (compressed_len == 0UL)
        {
          printf("\nSTMT_EXEC;;5611\n");
goto _L___2;
        }
        else
        {
          printf("\nSTMT_EXEC;;5615\n");
goto _L___2;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;5620\n");
goto _L___2;
      }
    }
    else
    {
    _L___2:
      {
printf("\nSTMT_EXEC;;5626\n");
if (stored_len + 4UL <= opt_lenb)
      {
        printf("\nSTMT_EXEC;;5628\n");
if ((unsigned long)buf != (unsigned long)((char *)0))
        {
          {
            printf("\nSTMT_EXEC;;5631\n");
send_bits(eof, 3);
            printf("\nSTMT_EXEC;;5632\n");
compressed_len = ((compressed_len + 3UL) + 7UL) & 0xfffffffffffffff8UL;
            printf("\nSTMT_EXEC;;5633\n");
compressed_len += (stored_len + 4UL) << 3;
            printf("\nSTMT_EXEC;;5634\n");
copy_block(buf, (unsigned int)stored_len, 1);
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;5639\n");
goto _L;
        }
      }
      else
      {
      _L:
        {
printf("\nSTMT_EXEC;;5645\n");
if (static_lenb == opt_lenb)
        {
          {
            printf("\nSTMT_EXEC;;5648\n");
send_bits((1 << 1) + eof, 3);
            printf("\nSTMT_EXEC;;5649\n");
compress_block(static_ltree, static_dtree);
            printf("\nSTMT_EXEC;;5650\n");
compressed_len += 3UL + static_len;
          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;5656\n");
send_bits((2 << 1) + eof, 3);
            printf("\nSTMT_EXEC;;5657\n");
send_all_trees(l_desc.max_code + 1, d_desc.max_code + 1, max_blindex + 1);
            printf("\nSTMT_EXEC;;5658\n");
compress_block(dyn_ltree, dyn_dtree);
            printf("\nSTMT_EXEC;;5659\n");
compressed_len += 3UL + opt_len;
          }
        }
}

      }
}

    }
    {
      printf("\nSTMT_EXEC;;5665\n");
init_block();
    }
    printf("\nSTMT_EXEC;;5667\n");
if (eof)
    {
      {
        printf("\nSTMT_EXEC;;5670\n");
bi_windup();
        printf("\nSTMT_EXEC;;5671\n");
compressed_len += 7UL;
      }
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
    printf("\nSTMT_EXEC;;5722\n");
if (level > 2)
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
          while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;5752\n");
if (last_lit == 32767U)
    {
      printf("\nSTMT_EXEC;;5754\n");
tmp___3 = 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;5758\n");
if (last_dist == 32768U)
      {
        printf("\nSTMT_EXEC;;5760\n");
tmp___3 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;5764\n");
tmp___3 = 0;
      }
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
    printf("\nSTMT_EXEC;;5787\n");
flag = (uch)0;
    printf("\nSTMT_EXEC;;5788\n");
if (last_lit != 0U)
    {
      {
        printf("\nSTMT_EXEC;;5791\n");
while (1)
        {
        while_continue: /* CIL Label */;
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
            {
              printf("\nSTMT_EXEC;;5806\n");
send_bits((int)(ltree + lc)->fc.code, (int)(ltree + lc)->dl.len);
            }
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
            printf("\nSTMT_EXEC;;5816\n");
if (extra != 0)
            {
              {
                printf("\nSTMT_EXEC;;5819\n");
lc -= base_length[code];
                printf("\nSTMT_EXEC;;5820\n");
send_bits(lc, extra);
              }
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
            printf("\nSTMT_EXEC;;5838\n");
if (extra != 0)
            {
              {
                printf("\nSTMT_EXEC;;5841\n");
dist -= (unsigned int)base_dist[code];
                printf("\nSTMT_EXEC;;5842\n");
send_bits((int)dist, extra);
              }
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
    }
    {
      printf("\nSTMT_EXEC;;5856\n");
send_bits((int)(ltree + 256)->fc.code, (int)(ltree + 256)->dl.len);
    }
    printf("\nSTMT_EXEC;;5858\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void set_file_type(void)
{
  printf("\nFUNC_CALL;set_file_type();\n");
printf("\nSTMT_EXEC;;5863\n");
int n;
  printf("\nSTMT_EXEC;;5864\n");
unsigned int ascii_freq;
  printf("\nSTMT_EXEC;;5865\n");
unsigned int bin_freq;
  printf("\nSTMT_EXEC;;5866\n");
int tmp;
  printf("\nSTMT_EXEC;;5867\n");
int tmp___0;
  printf("\nSTMT_EXEC;;5868\n");
int tmp___1;
  {
    printf("\nSTMT_EXEC;;5870\n");
n = 0;
    printf("\nSTMT_EXEC;;5871\n");
ascii_freq = 0U;
    printf("\nSTMT_EXEC;;5872\n");
bin_freq = 0U;
    {
      printf("\nSTMT_EXEC;;5874\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;5877\n");
if (!(n < 7))
        {
          printf("\nSTMT_EXEC;;5879\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5881\n");
tmp = n;
        printf("\nSTMT_EXEC;;5882\n");
n++;
        printf("\nSTMT_EXEC;;5883\n");
bin_freq += (unsigned int)dyn_ltree[tmp].fc.freq;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;5888\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;5891\n");
if (!(n < 128))
        {
          printf("\nSTMT_EXEC;;5893\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;5895\n");
tmp___0 = n;
        printf("\nSTMT_EXEC;;5896\n");
n++;
        printf("\nSTMT_EXEC;;5897\n");
ascii_freq += (unsigned int)dyn_ltree[tmp___0].fc.freq;
      }
    while_break___0: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;5902\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;5905\n");
if (!(n < 256))
        {
          printf("\nSTMT_EXEC;;5907\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;5909\n");
tmp___1 = n;
        printf("\nSTMT_EXEC;;5910\n");
n++;
        printf("\nSTMT_EXEC;;5911\n");
bin_freq += (unsigned int)dyn_ltree[tmp___1].fc.freq;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5915\n");
if (bin_freq > ascii_freq >> 2)
    {
      printf("\nSTMT_EXEC;;5917\n");
*file_type = (ush)0;
    }
    else
    {
      printf("\nSTMT_EXEC;;5921\n");
*file_type = (ush)1;
    }
    printf("\nSTMT_EXEC;;5923\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void lm_init(int pack_level, ush *flags___0);
ulg deflate(void);
ulg window_size = 65536UL;
static unsigned int ins_h;
unsigned int prev_length;
unsigned int match_start;
static int eofile;
static unsigned int lookahead;
unsigned int max_chain_length;
static unsigned int max_lazy_match;
static int compr_level;
unsigned int good_match;
int nice_match;
static config configuration_table[10] = {{(ush)0, (ush)0, (ush)0, (ush)0}, {(ush)4, (ush)4, (ush)8, (ush)4}, {(ush)4, (ush)5, (ush)16, (ush)8}, {(ush)4, (ush)6, (ush)32, (ush)32}, {(ush)4, (ush)4, (ush)16, (ush)16}, {(ush)8, (ush)16, (ush)32, (ush)32}, {(ush)8, (ush)16, (ush)128, (ush)128}, {(ush)8, (ush)32, (ush)128, (ush)256}, {(ush)32, (ush)128, (ush)258, (ush)1024}, {(ush)32, (ush)258, (ush)258, (ush)4096}};
static void fill_window(void);
static ulg deflate_fast(void);
int longest_match(IPos cur_match);
void lm_init(int pack_level, ush *flags___0)
{
  printf("\nFUNC_CALL;lm_init(int,ush *);\n");
printf("\nSTMT_EXEC;;5945\n");
register unsigned int j___0;
  printf("\nSTMT_EXEC;;5946\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;5947\n");
char *__cil_tmp6;
  printf("\nSTMT_EXEC;;5948\n");
char *__cil_tmp7;
  {
    printf("\nSTMT_EXEC;;5950\n");
if (pack_level < 1)
    {
      {
        printf("\nSTMT_EXEC;;5953\n");
error((char *)"bad pack level");
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;5958\n");
if (pack_level > 9)
      {
        {
          printf("\nSTMT_EXEC;;5961\n");
error((char *)"bad pack level");
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;5966\n");
compr_level = pack_level;
      printf("\nSTMT_EXEC;;5967\n");
printf("\nFUNC_CALL;memset(void *,int,size_t);\n");
memset((voidp)((char *)(prev + 32768)), 0, (unsigned long)((unsigned int)(1 << 15)) * sizeof(*(prev + 32768)));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5968\n");
max_lazy_match = (unsigned int)configuration_table[pack_level].max_lazy;
      printf("\nSTMT_EXEC;;5969\n");
good_match = (unsigned int)configuration_table[pack_level].good_length;
      printf("\nSTMT_EXEC;;5970\n");
nice_match = (int)configuration_table[pack_level].nice_length;
      printf("\nSTMT_EXEC;;5971\n");
max_chain_length = (unsigned int)configuration_table[pack_level].max_chain;
    }
    printf("\nSTMT_EXEC;;5973\n");
if (pack_level == 1)
    {
      printf("\nSTMT_EXEC;;5975\n");
*flags___0 = (ush)((int)*flags___0 | 4);
    }
    else
    {
      printf("\nSTMT_EXEC;;5979\n");
if (pack_level == 9)
      {
        printf("\nSTMT_EXEC;;5981\n");
*flags___0 = (ush)((int)*flags___0 | 2);
      }
    }
    printf("\nSTMT_EXEC;;5984\n");
strstart = 0U;
    printf("\nSTMT_EXEC;;5985\n");
block_start = 0L;
    printf("\nSTMT_EXEC;;5986\n");
if (sizeof(int) <= 2UL)
    {
      printf("\nSTMT_EXEC;;5988\n");
tmp = 32768U;
    }
    else
    {
      printf("\nSTMT_EXEC;;5992\n");
tmp = 65536U;
    }
    {
      printf("\nSTMT_EXEC;;5995\n");
lookahead = (unsigned int)(*read_buf)((char *)(window), tmp);
    }
    printf("\nSTMT_EXEC;;5997\n");
if (lookahead == 0U)
    {
      printf("\nSTMT_EXEC;;5999\n");
eofile = 1;
      printf("\nSTMT_EXEC;;6000\n");
lookahead = 0U;
      printf("\nSTMT_EXEC;;6001\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    else
    {
      printf("\nSTMT_EXEC;;6005\n");
if (lookahead == 4294967295U)
      {
        printf("\nSTMT_EXEC;;6007\n");
eofile = 1;
        printf("\nSTMT_EXEC;;6008\n");
lookahead = 0U;
        printf("\nSTMT_EXEC;;6009\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;6012\n");
eofile = 0;
    {
      printf("\nSTMT_EXEC;;6014\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;6017\n");
if (lookahead < 262U)
        {
          printf("\nSTMT_EXEC;;6019\n");
if (!(!eofile))
          {
            printf("\nSTMT_EXEC;;6021\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;6026\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;6029\n");
fill_window();
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;6034\n");
ins_h = 0U;
    printf("\nSTMT_EXEC;;6035\n");
j___0 = 0U;
    {
      printf("\nSTMT_EXEC;;6037\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;6040\n");
if (!(j___0 < 2U))
        {
          printf("\nSTMT_EXEC;;6042\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;6044\n");
ins_h = ((ins_h << 5) ^ (unsigned int)window[j___0]) & ((unsigned int)(1 << 15) - 1U);
        printf("\nSTMT_EXEC;;6045\n");
j___0++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;6049\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;6062\n");
register uch scan_end1;
  printf("\nSTMT_EXEC;;6063\n");
register uch scan_end;
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
    printf("\nSTMT_EXEC;;6078\n");
scan_end1 = *(scan + (best_len - 1));
    printf("\nSTMT_EXEC;;6079\n");
scan_end = *(scan + best_len);
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
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;6088\n");
match = window + cur_match;
        printf("\nSTMT_EXEC;;6089\n");
if ((int)*(match + best_len) != (int)scan_end)
        {
          printf("\nSTMT_EXEC;;6091\n");
goto __Cont;
        }
        else
        {
          printf("\nSTMT_EXEC;;6095\n");
if ((int)*(match + (best_len - 1)) != (int)scan_end1)
          {
            printf("\nSTMT_EXEC;;6097\n");
goto __Cont;
          }
          else
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
              printf("\nSTMT_EXEC;;6108\n");
if ((int)*match != (int)*(scan + 1))
              {
                printf("\nSTMT_EXEC;;6110\n");
goto __Cont;
              }
            }
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
          while_continue___0: /* CIL Label */;



            printf("\nSTMT_EXEC;;6124\n");
scan++;
            printf("\nSTMT_EXEC;;6125\n");
match++;
            printf("\nSTMT_EXEC;;6126\n");
if ((int)*scan == (int)*match)
            {
              printf("\nSTMT_EXEC;;6128\n");
scan++;
              printf("\nSTMT_EXEC;;6129\n");
match++;
              printf("\nSTMT_EXEC;;6130\n");
if ((int)*scan == (int)*match)
              {
                printf("\nSTMT_EXEC;;6132\n");
scan++;
                printf("\nSTMT_EXEC;;6133\n");
match++;
                printf("\nSTMT_EXEC;;6134\n");
if ((int)*scan == (int)*match)
                {
                  printf("\nSTMT_EXEC;;6136\n");
scan++;
                  printf("\nSTMT_EXEC;;6137\n");
match++;
                  printf("\nSTMT_EXEC;;6138\n");
if ((int)*scan == (int)*match)
                  {
                    printf("\nSTMT_EXEC;;6140\n");
scan++;
                    printf("\nSTMT_EXEC;;6141\n");
match++;
                    printf("\nSTMT_EXEC;;6142\n");
if ((int)*scan == (int)*match)
                    {
                      printf("\nSTMT_EXEC;;6144\n");
scan++;
                      printf("\nSTMT_EXEC;;6145\n");
match++;
                      printf("\nSTMT_EXEC;;6146\n");
if ((int)*scan == (int)*match)
                      {
                        printf("\nSTMT_EXEC;;6148\n");
scan++;
                        printf("\nSTMT_EXEC;;6149\n");
match++;
                        printf("\nSTMT_EXEC;;6150\n");
if ((int)*scan == (int)*match)
                        {
                          printf("\nSTMT_EXEC;;6152\n");
scan++;
                          printf("\nSTMT_EXEC;;6153\n");
match++;
                          printf("\nSTMT_EXEC;;6154\n");
if ((int)*scan == (int)*match)
                          {
                            printf("\nSTMT_EXEC;;6156\n");
if (!((unsigned long)scan < (unsigned long)strend))
                            {
                              printf("\nSTMT_EXEC;;6158\n");
goto while_break___0;
                            }
                          }
                          else
                          {
                            printf("\nSTMT_EXEC;;6163\n");
goto while_break___0;
                          }
                        }
                        else
                        {
                          printf("\nSTMT_EXEC;;6168\n");
goto while_break___0;
                        }
                      }
                      else
                      {
                        printf("\nSTMT_EXEC;;6173\n");
goto while_break___0;
                      }
                    }
                    else
                    {
                      printf("\nSTMT_EXEC;;6178\n");
goto while_break___0;
                    }
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;6183\n");
goto while_break___0;
                  }
                }
                else
                {
                  printf("\nSTMT_EXEC;;6188\n");
goto while_break___0;
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;6193\n");
goto while_break___0;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;6198\n");
goto while_break___0;
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
          printf("\nSTMT_EXEC;;6209\n");
if (len >= nice_match)
          {
            printf("\nSTMT_EXEC;;6211\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;6213\n");
scan_end1 = *(scan + (best_len - 1));
          printf("\nSTMT_EXEC;;6214\n");
scan_end = *(scan + best_len);
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
    printf("\nSTMT_EXEC;;6245\n");
if (more == 4294967295U)
    {
      printf("\nSTMT_EXEC;;6247\n");
more--;
    }
    else
    {
      printf("\nSTMT_EXEC;;6251\n");
if (strstart >= 65274U)
      {
        {
          printf("\nSTMT_EXEC;;6254\n");
printf("\nFUNC_CALL;memcpy(void *__restrict,const void *__restrict,size_t);\n");
memcpy((void * /* __restrict  */)((char *)(window)), (void const * /* __restrict  */)((char *)(window) + 32768), (size_t)32768U);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;6255\n");
match_start -= 32768U;
          printf("\nSTMT_EXEC;;6256\n");
strstart -= 32768U;
          printf("\nSTMT_EXEC;;6257\n");
block_start -= 32768L;
          printf("\nSTMT_EXEC;;6258\n");
n = 0U;
        }
        {
          printf("\nSTMT_EXEC;;6261\n");
while (1)
          {
          while_continue: /* CIL Label */;
            printf("\nSTMT_EXEC;;6264\n");
if (!(n < (unsigned int)(1 << 15)))
            {
              printf("\nSTMT_EXEC;;6266\n");
goto while_break;
            }
            printf("\nSTMT_EXEC;;6268\n");
m = (unsigned int)*((prev + 32768) + n);
            printf("\nSTMT_EXEC;;6269\n");
if (m >= 32768U)
            {
              printf("\nSTMT_EXEC;;6271\n");
tmp = m - 32768U;
            }
            else
            {
              printf("\nSTMT_EXEC;;6275\n");
tmp = 0U;
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
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;6287\n");
if (!(n < 32768U))
            {
              printf("\nSTMT_EXEC;;6289\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;6291\n");
m = (unsigned int)prev[n];
            printf("\nSTMT_EXEC;;6292\n");
if (m >= 32768U)
            {
              printf("\nSTMT_EXEC;;6294\n");
tmp___0 = m - 32768U;
            }
            else
            {
              printf("\nSTMT_EXEC;;6298\n");
tmp___0 = 0U;
            }
            printf("\nSTMT_EXEC;;6300\n");
prev[n] = (Pos)tmp___0;
            printf("\nSTMT_EXEC;;6301\n");
n++;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;6305\n");
more += 32768U;
      }
    }
    printf("\nSTMT_EXEC;;6308\n");
if (!eofile)
    {
      {
        printf("\nSTMT_EXEC;;6311\n");
n = (unsigned int)(*read_buf)(((char *)(window) + strstart) + lookahead, more);
      }
      printf("\nSTMT_EXEC;;6313\n");
if (n == 0U)
      {
        printf("\nSTMT_EXEC;;6315\n");
eofile = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;6319\n");
if (n == 4294967295U)
        {
          printf("\nSTMT_EXEC;;6321\n");
eofile = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;6325\n");
lookahead += n;
        }
      }
    }
    printf("\nSTMT_EXEC;;6329\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static ulg deflate_fast(void)
{
  printf("\nFUNC_CALL;deflate_fast();\n");
printf("\nSTMT_EXEC;;6334\n");
IPos hash_head;
  printf("\nSTMT_EXEC;;6335\n");
int flush;
  printf("\nSTMT_EXEC;;6336\n");
unsigned int match_length;
  printf("\nSTMT_EXEC;;6337\n");
char *tmp;
  printf("\nSTMT_EXEC;;6338\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;6339\n");
ulg tmp___1;
  {
    printf("\nSTMT_EXEC;;6341\n");
match_length = 0U;
    printf("\nSTMT_EXEC;;6342\n");
prev_length = 2U;
    {
      printf("\nSTMT_EXEC;;6344\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;6347\n");
if (!(lookahead != 0U))
        {
          printf("\nSTMT_EXEC;;6349\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;6351\n");
ins_h = ((ins_h << 5) ^ (unsigned int)window[(strstart + 3U) - 1U]) & ((unsigned int)(1 << 15) - 1U);
        printf("\nSTMT_EXEC;;6352\n");
hash_head = (IPos) * ((prev + 32768) + ins_h);
        printf("\nSTMT_EXEC;;6353\n");
prev[strstart & 32767U] = (ush)hash_head;
        printf("\nSTMT_EXEC;;6354\n");
*((prev + 32768) + ins_h) = (ush)strstart;
        printf("\nSTMT_EXEC;;6355\n");
if (hash_head != 0U)
        {
          printf("\nSTMT_EXEC;;6357\n");
if (strstart - hash_head <= 32506U)
          {
            {
              printf("\nSTMT_EXEC;;6360\n");
match_length = (unsigned int)longest_match(hash_head);
            }
            printf("\nSTMT_EXEC;;6362\n");
if (match_length > lookahead)
            {
              printf("\nSTMT_EXEC;;6364\n");
match_length = lookahead;
            }
          }
        }
        printf("\nSTMT_EXEC;;6368\n");
if (match_length >= 3U)
        {
          {
            printf("\nSTMT_EXEC;;6371\n");
flush = ct_tally((int)(strstart - match_start), (int)(match_length - 3U));
            printf("\nSTMT_EXEC;;6372\n");
lookahead -= match_length;
          }
          printf("\nSTMT_EXEC;;6374\n");
if (match_length <= max_lazy_match)
          {
            printf("\nSTMT_EXEC;;6376\n");
match_length--;
            {
              printf("\nSTMT_EXEC;;6378\n");
while (1)
              {
              while_continue___0: /* CIL Label */;
                printf("\nSTMT_EXEC;;6381\n");
strstart++;
                printf("\nSTMT_EXEC;;6382\n");
ins_h = ((ins_h << 5) ^ (unsigned int)window[(strstart + 3U) - 1U]) & ((unsigned int)(1 << 15) - 1U);
                printf("\nSTMT_EXEC;;6383\n");
hash_head = (IPos) * ((prev + 32768) + ins_h);
                printf("\nSTMT_EXEC;;6384\n");
prev[strstart & 32767U] = (ush)hash_head;
                printf("\nSTMT_EXEC;;6385\n");
*((prev + 32768) + ins_h) = (ush)strstart;
                printf("\nSTMT_EXEC;;6386\n");
match_length--;
                printf("\nSTMT_EXEC;;6387\n");
if (!(match_length != 0U))
                {
                  printf("\nSTMT_EXEC;;6389\n");
goto while_break___0;
                }
              }
            while_break___0: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;6394\n");
strstart++;
          }
          else
          {
            printf("\nSTMT_EXEC;;6398\n");
strstart += match_length;
            printf("\nSTMT_EXEC;;6399\n");
match_length = 0U;
            printf("\nSTMT_EXEC;;6400\n");
ins_h = (unsigned int)window[strstart];
            printf("\nSTMT_EXEC;;6401\n");
ins_h = ((ins_h << 5) ^ (unsigned int)window[strstart + 1U]) & ((unsigned int)(1 << 15) - 1U);
          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;6407\n");
flush = ct_tally(0, (int)window[strstart]);
            printf("\nSTMT_EXEC;;6408\n");
lookahead--;
            printf("\nSTMT_EXEC;;6409\n");
strstart++;
          }
        }
        printf("\nSTMT_EXEC;;6412\n");
if (flush)
        {
          printf("\nSTMT_EXEC;;6414\n");
if (block_start >= 0L)
          {
            printf("\nSTMT_EXEC;;6416\n");
tmp = (char *)(&window[(unsigned int)block_start]);
          }
          else
          {
            printf("\nSTMT_EXEC;;6420\n");
tmp = (char *)((void *)0);
          }
          {
            printf("\nSTMT_EXEC;;6423\n");
flush_block(tmp, (ulg)((long)strstart - block_start), 0);
            printf("\nSTMT_EXEC;;6424\n");
block_start = (long)strstart;
          }
        }
        {
          printf("\nSTMT_EXEC;;6428\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;6431\n");
if (lookahead < 262U)
            {
              printf("\nSTMT_EXEC;;6433\n");
if (!(!eofile))
              {
                printf("\nSTMT_EXEC;;6435\n");
goto while_break___1;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;6440\n");
goto while_break___1;
            }
            {
              printf("\nSTMT_EXEC;;6443\n");
fill_window();
            }
          }
        while_break___1: /* CIL Label */;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;6451\n");
if (block_start >= 0L)
    {
      printf("\nSTMT_EXEC;;6453\n");
tmp___0 = (char *)(&window[(unsigned int)block_start]);
    }
    else
    {
      printf("\nSTMT_EXEC;;6457\n");
tmp___0 = (char *)((void *)0);
    }
    {
      printf("\nSTMT_EXEC;;6460\n");
tmp___1 = flush_block(tmp___0, (ulg)((long)strstart - block_start), 1);
    }
    printf("\nSTMT_EXEC;;6462\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
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
  printf("\nSTMT_EXEC;;6472\n");
ulg tmp;
  printf("\nSTMT_EXEC;;6473\n");
char *tmp___0;
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
    printf("\nSTMT_EXEC;;6481\n");
if (compr_level <= 3)
    {
      {
        printf("\nSTMT_EXEC;;6484\n");
tmp = deflate_fast();
      }
      printf("\nSTMT_EXEC;;6486\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    }
    {
      printf("\nSTMT_EXEC;;6489\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;6502\n");
match_length = 2U;
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
              printf("\nSTMT_EXEC;;6512\n");
if (match_length > lookahead)
              {
                printf("\nSTMT_EXEC;;6514\n");
match_length = lookahead;
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
              while_continue___0: /* CIL Label */;
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
            printf("\nSTMT_EXEC;;6555\n");
if (flush)
            {
              printf("\nSTMT_EXEC;;6557\n");
if (block_start >= 0L)
              {
                printf("\nSTMT_EXEC;;6559\n");
tmp___0 = (char *)(&window[(unsigned int)block_start]);
              }
              else
              {
                printf("\nSTMT_EXEC;;6563\n");
tmp___0 = (char *)((void *)0);
              }
              {
                printf("\nSTMT_EXEC;;6566\n");
flush_block(tmp___0, (ulg)((long)strstart - block_start), 0);
                printf("\nSTMT_EXEC;;6567\n");
block_start = (long)strstart;
              }
            }
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
              printf("\nSTMT_EXEC;;6586\n");
if (block_start >= 0L)
              {
                printf("\nSTMT_EXEC;;6588\n");
tmp___1 = (char *)(&window[(unsigned int)block_start]);
              }
              else
              {
                printf("\nSTMT_EXEC;;6592\n");
tmp___1 = (char *)((void *)0);
              }
              {
                printf("\nSTMT_EXEC;;6595\n");
flush_block(tmp___1, (ulg)((long)strstart - block_start), 0);
                printf("\nSTMT_EXEC;;6596\n");
block_start = (long)strstart;
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
          printf("\nSTMT_EXEC;;6610\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;6613\n");
if (lookahead < 262U)
            {
              printf("\nSTMT_EXEC;;6615\n");
if (!(!eofile))
              {
                printf("\nSTMT_EXEC;;6617\n");
goto while_break___1;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;6622\n");
goto while_break___1;
            }
            {
              printf("\nSTMT_EXEC;;6625\n");
fill_window();
            }
          }
        while_break___1: /* CIL Label */;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;6633\n");
if (match_available)
    {
      {
        printf("\nSTMT_EXEC;;6636\n");
ct_tally(0, (int)window[strstart - 1U]);
      }
    }
    printf("\nSTMT_EXEC;;6639\n");
if (block_start >= 0L)
    {
      printf("\nSTMT_EXEC;;6641\n");
tmp___3 = (char *)(&window[(unsigned int)block_start]);
    }
    else
    {
      printf("\nSTMT_EXEC;;6645\n");
tmp___3 = (char *)((void *)0);
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
long header_bytes;
long time_stamp;
int save_orig_name;
int zip(int in, int out);
static ulg crc___0;
int zip(int in, int out)
{
  printf("\nFUNC_CALL;zip(int,int);\n");
printf("\nSTMT_EXEC;;6660\n");
uch flags___0;
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
  printf("\nSTMT_EXEC;;6666\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;6667\n");
unsigned int tmp___3;
  printf("\nSTMT_EXEC;;6668\n");
unsigned int tmp___4;
  printf("\nSTMT_EXEC;;6669\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;6670\n");
unsigned int tmp___6;
  printf("\nSTMT_EXEC;;6671\n");
unsigned int tmp___7;
  printf("\nSTMT_EXEC;;6672\n");
unsigned int tmp___8;
  printf("\nSTMT_EXEC;;6673\n");
unsigned int tmp___9;
  printf("\nSTMT_EXEC;;6674\n");
unsigned int tmp___10;
  printf("\nSTMT_EXEC;;6675\n");
unsigned int tmp___11;
  printf("\nSTMT_EXEC;;6676\n");
unsigned int tmp___12;
  printf("\nSTMT_EXEC;;6677\n");
char *p;
  printf("\nSTMT_EXEC;;6678\n");
char *tmp___13;
  printf("\nSTMT_EXEC;;6679\n");
unsigned int tmp___14;
  printf("\nSTMT_EXEC;;6680\n");
char *tmp___15;
  printf("\nSTMT_EXEC;;6681\n");
unsigned int tmp___16;
  printf("\nSTMT_EXEC;;6682\n");
unsigned int tmp___17;
  printf("\nSTMT_EXEC;;6683\n");
unsigned int tmp___18;
  printf("\nSTMT_EXEC;;6684\n");
unsigned int tmp___19;
  printf("\nSTMT_EXEC;;6685\n");
unsigned int tmp___20;
  printf("\nSTMT_EXEC;;6686\n");
unsigned int tmp___21;
  printf("\nSTMT_EXEC;;6687\n");
unsigned int tmp___22;
  printf("\nSTMT_EXEC;;6688\n");
unsigned int tmp___23;
  printf("\nSTMT_EXEC;;6689\n");
unsigned int tmp___24;
  printf("\nSTMT_EXEC;;6690\n");
unsigned int tmp___25;
  printf("\nSTMT_EXEC;;6691\n");
unsigned int tmp___26;
  printf("\nSTMT_EXEC;;6692\n");
unsigned int tmp___27;
  printf("\nSTMT_EXEC;;6693\n");
unsigned int tmp___28;
  printf("\nSTMT_EXEC;;6694\n");
unsigned int tmp___29;
  printf("\nSTMT_EXEC;;6695\n");
unsigned int tmp___30;
  printf("\nSTMT_EXEC;;6696\n");
unsigned int tmp___31;
  printf("\nSTMT_EXEC;;6697\n");
char *__cil_tmp40;
  printf("\nSTMT_EXEC;;6698\n");
char *__cil_tmp41;
  {
    printf("\nSTMT_EXEC;;6700\n");
flags___0 = (uch)0;
    printf("\nSTMT_EXEC;;6701\n");
attr = (ush)0;
    printf("\nSTMT_EXEC;;6702\n");
deflate_flags = (ush)0;
    printf("\nSTMT_EXEC;;6703\n");
ifd = in;
    printf("\nSTMT_EXEC;;6704\n");
ofd = out;
    printf("\nSTMT_EXEC;;6705\n");
outcnt = 0U;
    printf("\nSTMT_EXEC;;6706\n");
method = 8;
    printf("\nSTMT_EXEC;;6707\n");
tmp = outcnt;
    printf("\nSTMT_EXEC;;6708\n");
outcnt++;
    printf("\nSTMT_EXEC;;6709\n");
outbuf[tmp] = (uch) * ("\037\213" + 0);
    printf("\nSTMT_EXEC;;6710\n");
if (outcnt == 16384U)
    {
      {
        printf("\nSTMT_EXEC;;6713\n");
flush_outbuf();
      }
    }
    printf("\nSTMT_EXEC;;6716\n");
tmp___0 = outcnt;
    printf("\nSTMT_EXEC;;6717\n");
outcnt++;
    printf("\nSTMT_EXEC;;6718\n");
outbuf[tmp___0] = (uch) * ("\037\213" + 1);
    printf("\nSTMT_EXEC;;6719\n");
if (outcnt == 16384U)
    {
      {
        printf("\nSTMT_EXEC;;6722\n");
flush_outbuf();
      }
    }
    printf("\nSTMT_EXEC;;6725\n");
tmp___1 = outcnt;
    printf("\nSTMT_EXEC;;6726\n");
outcnt++;
    printf("\nSTMT_EXEC;;6727\n");
outbuf[tmp___1] = (uch)8;
    printf("\nSTMT_EXEC;;6728\n");
if (outcnt == 16384U)
    {
      {
        printf("\nSTMT_EXEC;;6731\n");
flush_outbuf();
      }
    }
    printf("\nSTMT_EXEC;;6734\n");
if (save_orig_name)
    {
      printf("\nSTMT_EXEC;;6736\n");
flags___0 = (uch)((int)flags___0 | 8);
    }
    printf("\nSTMT_EXEC;;6738\n");
tmp___2 = outcnt;
    printf("\nSTMT_EXEC;;6739\n");
outcnt++;
    printf("\nSTMT_EXEC;;6740\n");
outbuf[tmp___2] = flags___0;
    printf("\nSTMT_EXEC;;6741\n");
if (outcnt == 16384U)
    {
      {
        printf("\nSTMT_EXEC;;6744\n");
flush_outbuf();
      }
    }
    printf("\nSTMT_EXEC;;6747\n");
if (outcnt < 16382U)
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
    else
    {
      printf("\nSTMT_EXEC;;6758\n");
tmp___5 = outcnt;
      printf("\nSTMT_EXEC;;6759\n");
outcnt++;
      printf("\nSTMT_EXEC;;6760\n");
outbuf[tmp___5] = (uch)((time_stamp & 65535L) & 255L);
      printf("\nSTMT_EXEC;;6761\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6764\n");
flush_outbuf();
        }
      }
      printf("\nSTMT_EXEC;;6767\n");
tmp___6 = outcnt;
      printf("\nSTMT_EXEC;;6768\n");
outcnt++;
      printf("\nSTMT_EXEC;;6769\n");
outbuf[tmp___6] = (uch)((int)((ush)(time_stamp & 65535L)) >> 8);
      printf("\nSTMT_EXEC;;6770\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6773\n");
flush_outbuf();
        }
      }
    }
    printf("\nSTMT_EXEC;;6777\n");
if (outcnt < 16382U)
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
    else
    {
      printf("\nSTMT_EXEC;;6788\n");
tmp___9 = outcnt;
      printf("\nSTMT_EXEC;;6789\n");
outcnt++;
      printf("\nSTMT_EXEC;;6790\n");
outbuf[tmp___9] = (uch)(((ulg)time_stamp >> 16) & 255UL);
      printf("\nSTMT_EXEC;;6791\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6794\n");
flush_outbuf();
        }
      }
      printf("\nSTMT_EXEC;;6797\n");
tmp___10 = outcnt;
      printf("\nSTMT_EXEC;;6798\n");
outcnt++;
      printf("\nSTMT_EXEC;;6799\n");
outbuf[tmp___10] = (uch)((int)((ush)((ulg)time_stamp >> 16)) >> 8);
      printf("\nSTMT_EXEC;;6800\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6803\n");
flush_outbuf();
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;6808\n");
crc___0 = updcrc((uch *)0, 0U);
      printf("\nSTMT_EXEC;;6809\n");
bi_init(out);
      printf("\nSTMT_EXEC;;6810\n");
ct_init(&attr, &method);
      printf("\nSTMT_EXEC;;6811\n");
lm_init(level, &deflate_flags);
      printf("\nSTMT_EXEC;;6812\n");
tmp___11 = outcnt;
      printf("\nSTMT_EXEC;;6813\n");
outcnt++;
      printf("\nSTMT_EXEC;;6814\n");
outbuf[tmp___11] = (uch)deflate_flags;
    }
    printf("\nSTMT_EXEC;;6816\n");
if (outcnt == 16384U)
    {
      {
        printf("\nSTMT_EXEC;;6819\n");
flush_outbuf();
      }
    }
    printf("\nSTMT_EXEC;;6822\n");
tmp___12 = outcnt;
    printf("\nSTMT_EXEC;;6823\n");
outcnt++;
    printf("\nSTMT_EXEC;;6824\n");
outbuf[tmp___12] = (uch)3;
    printf("\nSTMT_EXEC;;6825\n");
if (outcnt == 16384U)
    {
      {
        printf("\nSTMT_EXEC;;6828\n");
flush_outbuf();
      }
    }
    printf("\nSTMT_EXEC;;6831\n");
if (save_orig_name)
    {
      {
        printf("\nSTMT_EXEC;;6834\n");
tmp___13 = basename(ifname);
        printf("\nSTMT_EXEC;;6835\n");
p = tmp___13;
      }
      {
        printf("\nSTMT_EXEC;;6838\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;6841\n");
tmp___14 = outcnt;
          printf("\nSTMT_EXEC;;6842\n");
outcnt++;
          printf("\nSTMT_EXEC;;6843\n");
outbuf[tmp___14] = (uch)*p;
          printf("\nSTMT_EXEC;;6844\n");
if (outcnt == 16384U)
          {
            {
              printf("\nSTMT_EXEC;;6847\n");
flush_outbuf();
            }
          }
          printf("\nSTMT_EXEC;;6850\n");
tmp___15 = p;
          printf("\nSTMT_EXEC;;6851\n");
p++;
          printf("\nSTMT_EXEC;;6852\n");
if (!*tmp___15)
          {
            printf("\nSTMT_EXEC;;6854\n");
goto while_break;
          }
        }
      while_break: /* CIL Label */;
      }
    }
    {
      printf("\nSTMT_EXEC;;6861\n");
header_bytes = (long)outcnt;
      printf("\nSTMT_EXEC;;6862\n");
deflate();
    }
    printf("\nSTMT_EXEC;;6864\n");
if (outcnt < 16382U)
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
    else
    {
      printf("\nSTMT_EXEC;;6875\n");
tmp___18 = outcnt;
      printf("\nSTMT_EXEC;;6876\n");
outcnt++;
      printf("\nSTMT_EXEC;;6877\n");
outbuf[tmp___18] = (uch)((crc___0 & 65535UL) & 255UL);
      printf("\nSTMT_EXEC;;6878\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6881\n");
flush_outbuf();
        }
      }
      printf("\nSTMT_EXEC;;6884\n");
tmp___19 = outcnt;
      printf("\nSTMT_EXEC;;6885\n");
outcnt++;
      printf("\nSTMT_EXEC;;6886\n");
outbuf[tmp___19] = (uch)((int)((ush)(crc___0 & 65535UL)) >> 8);
      printf("\nSTMT_EXEC;;6887\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6890\n");
flush_outbuf();
        }
      }
    }
    printf("\nSTMT_EXEC;;6894\n");
if (outcnt < 16382U)
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
    else
    {
      printf("\nSTMT_EXEC;;6905\n");
tmp___22 = outcnt;
      printf("\nSTMT_EXEC;;6906\n");
outcnt++;
      printf("\nSTMT_EXEC;;6907\n");
outbuf[tmp___22] = (uch)((crc___0 >> 16) & 255UL);
      printf("\nSTMT_EXEC;;6908\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6911\n");
flush_outbuf();
        }
      }
      printf("\nSTMT_EXEC;;6914\n");
tmp___23 = outcnt;
      printf("\nSTMT_EXEC;;6915\n");
outcnt++;
      printf("\nSTMT_EXEC;;6916\n");
outbuf[tmp___23] = (uch)((int)((ush)(crc___0 >> 16)) >> 8);
      printf("\nSTMT_EXEC;;6917\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6920\n");
flush_outbuf();
        }
      }
    }
    printf("\nSTMT_EXEC;;6924\n");
if (outcnt < 16382U)
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
    else
    {
      printf("\nSTMT_EXEC;;6935\n");
tmp___26 = outcnt;
      printf("\nSTMT_EXEC;;6936\n");
outcnt++;
      printf("\nSTMT_EXEC;;6937\n");
outbuf[tmp___26] = (uch)((bytes_in & 65535L) & 255L);
      printf("\nSTMT_EXEC;;6938\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6941\n");
flush_outbuf();
        }
      }
      printf("\nSTMT_EXEC;;6944\n");
tmp___27 = outcnt;
      printf("\nSTMT_EXEC;;6945\n");
outcnt++;
      printf("\nSTMT_EXEC;;6946\n");
outbuf[tmp___27] = (uch)((int)((ush)(bytes_in & 65535L)) >> 8);
      printf("\nSTMT_EXEC;;6947\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6950\n");
flush_outbuf();
        }
      }
    }
    printf("\nSTMT_EXEC;;6954\n");
if (outcnt < 16382U)
    {
      printf("\nSTMT_EXEC;;6956\n");
tmp___28 = outcnt;
      printf("\nSTMT_EXEC;;6957\n");
outcnt++;
      printf("\nSTMT_EXEC;;6958\n");
outbuf[tmp___28] = (uch)(((ulg)bytes_in >> 16) & 255UL);
      printf("\nSTMT_EXEC;;6959\n");
tmp___29 = outcnt;
      printf("\nSTMT_EXEC;;6960\n");
outcnt++;
      printf("\nSTMT_EXEC;;6961\n");
outbuf[tmp___29] = (uch)((int)((ush)((ulg)bytes_in >> 16)) >> 8);
    }
    else
    {
      printf("\nSTMT_EXEC;;6965\n");
tmp___30 = outcnt;
      printf("\nSTMT_EXEC;;6966\n");
outcnt++;
      printf("\nSTMT_EXEC;;6967\n");
outbuf[tmp___30] = (uch)(((ulg)bytes_in >> 16) & 255UL);
      printf("\nSTMT_EXEC;;6968\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6971\n");
flush_outbuf();
        }
      }
      printf("\nSTMT_EXEC;;6974\n");
tmp___31 = outcnt;
      printf("\nSTMT_EXEC;;6975\n");
outcnt++;
      printf("\nSTMT_EXEC;;6976\n");
outbuf[tmp___31] = (uch)((int)((ush)((ulg)bytes_in >> 16)) >> 8);
      printf("\nSTMT_EXEC;;6977\n");
if (outcnt == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;6980\n");
flush_outbuf();
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;6985\n");
header_bytes = (long)((unsigned long)header_bytes + 2UL * sizeof(long));
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
    printf("\nSTMT_EXEC;;6998\n");
if (len == 4294967295U)
    {
      printf("\nSTMT_EXEC;;7000\n");
printf("\nFUNC_RETURN;;\n");
return ((int)len);
    }
    else
    {
      printf("\nSTMT_EXEC;;7004\n");
if (len == 0U)
      {
        printf("\nSTMT_EXEC;;7006\n");
printf("\nFUNC_RETURN;;\n");
return ((int)len);
      }
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
long ifile_size;
int verbose;
extern char *optarg;
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
int ascii = 0;
int to_stdout = 0;
int decompress = 0;
int force = 0;
int no_name = -1;
int no_time = -1;
int recursive = 0;
int list = 0;
int verbose = 0;
int quiet = 0;
int do_lzw = 0;
int test = 0;
int foreground;
int maxbits = 16;
int method = 8;
int level = 6;
int exit_code = 0;
int last_member;
int part_nb;
char *env;
char **args = (char **)((void *)0);
char z_suffix[31];
int z_len;
long total_in = 0L;
long total_out = 0L;
int remove_ofname = 0;
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
static void usage(void)
{
  printf("\nFUNC_CALL;usage();\n");
{
    {
      printf("\nSTMT_EXEC;;7124\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "usage: %s [-%scdfhlLnN%stvV19] "
                                               "[-S suffix] [file ...]\n",
              progname, "", "r");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7129\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
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
      printf("\nSTMT_EXEC;;7161\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s %s (%s)\n", progname, "1.2.4", "18 Aug 93");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7162\n");
usage();
    }
    {
      printf("\nSTMT_EXEC;;7165\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;7180\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      printf("\nSTMT_EXEC;;7190\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s %s (%s)\n", progname, "1.2.4", "18 Aug 93");printf("\nFUNC_RETURN;;\n");

    }
    {
      printf("\nSTMT_EXEC;;7193\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;7208\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void version(void)
{
  printf("\nFUNC_CALL;version();\n");
{
    {
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

    }
    printf("\nSTMT_EXEC;;7221\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
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
  printf("\nSTMT_EXEC;;7229\n");
int proglen;
  printf("\nSTMT_EXEC;;7230\n");
int optc;
  printf("\nSTMT_EXEC;;7231\n");
int tmp;
  printf("\nSTMT_EXEC;;7232\n");
void (*tmp___0)(int);
  printf("\nSTMT_EXEC;;7233\n");
void (*tmp___1)(int);
  printf("\nSTMT_EXEC;;7234\n");
void (*tmp___2)(int);
  printf("\nSTMT_EXEC;;7235\n");
int tmp___3;
  printf("\nSTMT_EXEC;;7236\n");
int tmp___4;
  printf("\nSTMT_EXEC;;7237\n");
int tmp___5;
  printf("\nSTMT_EXEC;;7238\n");
int tmp___6;
  printf("\nSTMT_EXEC;;7239\n");
int tmp___7;
  printf("\nSTMT_EXEC;;7240\n");
int tmp___8;
  printf("\nSTMT_EXEC;;7241\n");
char *__cil_tmp19;
  printf("\nSTMT_EXEC;;7242\n");
char *__cil_tmp20;
  {
    {
      printf("\nSTMT_EXEC;;7245\n");
progname = basename(*(argv + 0));
      printf("\nSTMT_EXEC;;7246\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
proglen = (int)strlen((char const *)progname);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7248\n");
if (proglen > 4)
    {
      {
        printf("\nSTMT_EXEC;;7251\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)((progname + proglen) - 4), ".exe");printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7253\n");
if (tmp == 0)
      {
        printf("\nSTMT_EXEC;;7255\n");
*(progname + (proglen - 4)) = (char)'\000';
      }
    }
    {
      printf("\nSTMT_EXEC;;7259\n");
env = add_envopt(&argc, &argv, (char *)"GZIP");
    }
    printf("\nSTMT_EXEC;;7261\n");
if ((unsigned long)env != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7263\n");
args = argv;
    }
    {
      printf("\nSTMT_EXEC;;7266\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
tmp___0 = signal(2, (void (*)(int))1);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7267\n");
foreground = (unsigned long)tmp___0 != (unsigned long)((void (*)(int))1);
    }
    printf("\nSTMT_EXEC;;7269\n");
if (foreground)
    {
      {
        printf("\nSTMT_EXEC;;7272\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(2, (void (*)(int))(&abort_gzip));printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;7276\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
tmp___1 = signal(15, (void (*)(int))1);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7278\n");
if ((unsigned long)tmp___1 != (unsigned long)((void (*)(int))1))
    {
      {
        printf("\nSTMT_EXEC;;7281\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(15, (void (*)(int))(&abort_gzip));printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;7285\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
tmp___2 = signal(1, (void (*)(int))1);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7287\n");
if ((unsigned long)tmp___2 != (unsigned long)((void (*)(int))1))
    {
      {
        printf("\nSTMT_EXEC;;7290\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(1, (void (*)(int))(&abort_gzip));printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;7294\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___5 = strncmp((char const *)progname, "un", (size_t)2);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7296\n");
if (tmp___5 == 0)
    {
      printf("\nSTMT_EXEC;;7298\n");
decompress = 1;
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;7303\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___6 = strncmp((char const *)progname, "gun", (size_t)3);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7305\n");
if (tmp___6 == 0)
      {
        printf("\nSTMT_EXEC;;7307\n");
decompress = 1;
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;7312\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___3 = strcmp((char const *)(progname + 1), "cat");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;7314\n");
if (tmp___3 == 0)
        {
          printf("\nSTMT_EXEC;;7316\n");
to_stdout = 1;
          printf("\nSTMT_EXEC;;7317\n");
decompress = to_stdout;
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;7322\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___4 = strcmp((char const *)progname, "gzcat");printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;7324\n");
if (tmp___4 == 0)
          {
            printf("\nSTMT_EXEC;;7326\n");
to_stdout = 1;
            printf("\nSTMT_EXEC;;7327\n");
decompress = to_stdout;
          }
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;7333\n");
printf("\nFUNC_CALL;strncpy(char *__restrict,const char *__restrict,size_t);\n");
strncpy((char * /* __restrict  */)(z_suffix), (char const * /* __restrict  */) ".gz", sizeof(z_suffix) - 1UL);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7334\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
z_len = (int)strlen((char const *)(z_suffix));printf("\nFUNC_RETURN;;\n");

    }
    {
      printf("\nSTMT_EXEC;;7337\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;7341\n");
printf("\nFUNC_CALL;getopt_long(int,char *const *,const char *,const struct option *,int *);\n");
optc = getopt_long(argc, (char *const *)argv, "ab:cdfhH?lLmMnNqrS:tvVZ123456789", (struct option const *)(longopts), (int *)0);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;7343\n");
if (!(optc != -1))
        {
          printf("\nSTMT_EXEC;;7345\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;7348\n");
if (optc == 97)
          {
            printf("\nSTMT_EXEC;;7350\n");
goto case_97;
          }
          printf("\nSTMT_EXEC;;7352\n");
if (optc == 98)
          {
            printf("\nSTMT_EXEC;;7354\n");
goto case_98;
          }
          printf("\nSTMT_EXEC;;7356\n");
if (optc == 99)
          {
            printf("\nSTMT_EXEC;;7358\n");
goto case_99;
          }
          printf("\nSTMT_EXEC;;7360\n");
if (optc == 100)
          {
            printf("\nSTMT_EXEC;;7362\n");
goto case_100;
          }
          printf("\nSTMT_EXEC;;7364\n");
if (optc == 102)
          {
            printf("\nSTMT_EXEC;;7366\n");
goto case_102;
          }
          printf("\nSTMT_EXEC;;7368\n");
if (optc == 104)
          {
            printf("\nSTMT_EXEC;;7370\n");
goto case_104;
          }
          printf("\nSTMT_EXEC;;7372\n");
if (optc == 72)
          {
            printf("\nSTMT_EXEC;;7374\n");
goto case_104;
          }
          printf("\nSTMT_EXEC;;7376\n");
if (optc == 63)
          {
            printf("\nSTMT_EXEC;;7378\n");
goto case_104;
          }
          printf("\nSTMT_EXEC;;7380\n");
if (optc == 108)
          {
            printf("\nSTMT_EXEC;;7382\n");
goto case_108;
          }
          printf("\nSTMT_EXEC;;7384\n");
if (optc == 76)
          {
            printf("\nSTMT_EXEC;;7386\n");
goto case_76;
          }
          printf("\nSTMT_EXEC;;7388\n");
if (optc == 109)
          {
            printf("\nSTMT_EXEC;;7390\n");
goto case_109;
          }
          printf("\nSTMT_EXEC;;7392\n");
if (optc == 77)
          {
            printf("\nSTMT_EXEC;;7394\n");
goto case_77;
          }
          printf("\nSTMT_EXEC;;7396\n");
if (optc == 110)
          {
            printf("\nSTMT_EXEC;;7398\n");
goto case_110;
          }
          printf("\nSTMT_EXEC;;7400\n");
if (optc == 78)
          {
            printf("\nSTMT_EXEC;;7402\n");
goto case_78;
          }
          printf("\nSTMT_EXEC;;7404\n");
if (optc == 113)
          {
            printf("\nSTMT_EXEC;;7406\n");
goto case_113;
          }
          printf("\nSTMT_EXEC;;7408\n");
if (optc == 114)
          {
            printf("\nSTMT_EXEC;;7410\n");
goto case_114;
          }
          printf("\nSTMT_EXEC;;7412\n");
if (optc == 83)
          {
            printf("\nSTMT_EXEC;;7414\n");
goto case_83;
          }
          printf("\nSTMT_EXEC;;7416\n");
if (optc == 116)
          {
            printf("\nSTMT_EXEC;;7418\n");
goto case_116;
          }
          printf("\nSTMT_EXEC;;7420\n");
if (optc == 118)
          {
            printf("\nSTMT_EXEC;;7422\n");
goto case_118;
          }
          printf("\nSTMT_EXEC;;7424\n");
if (optc == 86)
          {
            printf("\nSTMT_EXEC;;7426\n");
goto case_86;
          }
          printf("\nSTMT_EXEC;;7428\n");
if (optc == 90)
          {
            printf("\nSTMT_EXEC;;7430\n");
goto case_90;
          }
          printf("\nSTMT_EXEC;;7432\n");
if (optc == 49)
          {
            printf("\nSTMT_EXEC;;7434\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7436\n");
if (optc == 50)
          {
            printf("\nSTMT_EXEC;;7438\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7440\n");
if (optc == 51)
          {
            printf("\nSTMT_EXEC;;7442\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7444\n");
if (optc == 52)
          {
            printf("\nSTMT_EXEC;;7446\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7448\n");
if (optc == 53)
          {
            printf("\nSTMT_EXEC;;7450\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7452\n");
if (optc == 54)
          {
            printf("\nSTMT_EXEC;;7454\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7456\n");
if (optc == 55)
          {
            printf("\nSTMT_EXEC;;7458\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7460\n");
if (optc == 56)
          {
            printf("\nSTMT_EXEC;;7462\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7464\n");
if (optc == 57)
          {
            printf("\nSTMT_EXEC;;7466\n");
goto case_49;
          }
          printf("\nSTMT_EXEC;;7468\n");
goto switch_default;
        case_97: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7470\n");
ascii = 1;
}

          printf("\nSTMT_EXEC;;7471\n");
goto switch_break;
        case_98: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7474\n");
printf("\nFUNC_CALL;atoi(const char *);\n");
maxbits = atoi((char const *)optarg);printf("\nFUNC_RETURN;;\n");

        }
          printf("\nSTMT_EXEC;;7476\n");
goto switch_break;
        case_99: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7478\n");
to_stdout = 1;
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
        case_102: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7484\n");
force++;
}

          printf("\nSTMT_EXEC;;7485\n");
goto switch_break;
        case_104: /* CIL Label */
        case_72:  /* CIL Label */
        case_63:  /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7490\n");
help();
          printf("\nSTMT_EXEC;;7491\n");
do_exit(0);
        }
          printf("\nSTMT_EXEC;;7493\n");
goto switch_break;
        case_108: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7495\n");
to_stdout = 1;
}

          printf("\nSTMT_EXEC;;7496\n");
decompress = to_stdout;
          printf("\nSTMT_EXEC;;7497\n");
list = decompress;
          printf("\nSTMT_EXEC;;7498\n");
goto switch_break;
        case_76: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7501\n");
license();
          printf("\nSTMT_EXEC;;7502\n");
do_exit(0);
        }
          printf("\nSTMT_EXEC;;7504\n");
goto switch_break;
        case_109: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7506\n");
no_time = 1;
}

          printf("\nSTMT_EXEC;;7507\n");
goto switch_break;
        case_77: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7509\n");
no_time = 0;
}

          printf("\nSTMT_EXEC;;7510\n");
goto switch_break;
        case_110: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7512\n");
no_time = 1;
}

          printf("\nSTMT_EXEC;;7513\n");
no_name = no_time;
          printf("\nSTMT_EXEC;;7514\n");
goto switch_break;
        case_78: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7516\n");
no_time = 0;
}

          printf("\nSTMT_EXEC;;7517\n");
no_name = no_time;
          printf("\nSTMT_EXEC;;7518\n");
goto switch_break;
        case_113: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7520\n");
quiet = 1;
}

          printf("\nSTMT_EXEC;;7521\n");
verbose = 0;
          printf("\nSTMT_EXEC;;7522\n");
goto switch_break;
        case_114: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7524\n");
recursive = 1;
}

          printf("\nSTMT_EXEC;;7525\n");
goto switch_break;
        case_83: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7528\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
z_len = (int)strlen((char const *)optarg);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7529\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(z_suffix), (char const * /* __restrict  */)optarg);printf("\nFUNC_RETURN;;\n");

        }
          printf("\nSTMT_EXEC;;7531\n");
goto switch_break;
        case_116: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7533\n");
to_stdout = 1;
}

          printf("\nSTMT_EXEC;;7534\n");
decompress = to_stdout;
          printf("\nSTMT_EXEC;;7535\n");
test = decompress;
          printf("\nSTMT_EXEC;;7536\n");
goto switch_break;
        case_118: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7538\n");
verbose++;
}

          printf("\nSTMT_EXEC;;7539\n");
quiet = 0;
          printf("\nSTMT_EXEC;;7540\n");
goto switch_break;
        case_86: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7543\n");
version();
          printf("\nSTMT_EXEC;;7544\n");
do_exit(0);
        }
          printf("\nSTMT_EXEC;;7546\n");
goto switch_break;
        case_90: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7549\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: -Z not supported in "
                                                   "this version\n",
                  progname);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7553\n");
usage();
          printf("\nSTMT_EXEC;;7554\n");
do_exit(1);
        }
          printf("\nSTMT_EXEC;;7556\n");
goto switch_break;
        case_49: /* CIL Label */
        case_50: /* CIL Label */
        case_51: /* CIL Label */
        case_52: /* CIL Label */
        case_53: /* CIL Label */
        case_54: /* CIL Label */
        case_55: /* CIL Label */
        case_56: /* CIL Label */
        case_57: /* CIL Label */
          {
printf("\nSTMT_EXEC;;7566\n");
level = optc - 48;
}

          printf("\nSTMT_EXEC;;7567\n");
goto switch_break;
        switch_default: /* CIL Label */
        {
          printf("\nSTMT_EXEC;;7570\n");
usage();
          printf("\nSTMT_EXEC;;7571\n");
do_exit(1);
        }
        switch_break: /* CIL Label */;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;7578\n");
if (no_time < 0)
    {
      printf("\nSTMT_EXEC;;7580\n");
no_time = decompress;
    }
    printf("\nSTMT_EXEC;;7582\n");
if (no_name < 0)
    {
      printf("\nSTMT_EXEC;;7584\n");
no_name = decompress;
    }
    printf("\nSTMT_EXEC;;7586\n");
file_count = argc - optind;
    printf("\nSTMT_EXEC;;7587\n");
if (ascii)
    {
      printf("\nSTMT_EXEC;;7589\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;7592\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: option --ascii ignored "
                                                   "on this system\n",
                  progname);printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;7599\n");
if (z_len == 0)
    {
      printf("\nSTMT_EXEC;;7601\n");
if (!decompress)
      {
        {
          printf("\nSTMT_EXEC;;7604\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: incorrect suffix \'%s\'\n", progname, optarg);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7605\n");
do_exit(1);
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7610\n");
goto _L;
      }
    }
    else
    {
    _L:
      {
printf("\nSTMT_EXEC;;7616\n");
if (z_len > 30)
      {
        {
          printf("\nSTMT_EXEC;;7619\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: incorrect suffix \'%s\'\n", progname, optarg);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7620\n");
do_exit(1);
        }
      }
}

    }
    printf("\nSTMT_EXEC;;7624\n");
if (do_lzw)
    {
      printf("\nSTMT_EXEC;;7626\n");
if (!decompress)
      {
        printf("\nSTMT_EXEC;;7628\n");
work = &lzw;
      }
    }
    printf("\nSTMT_EXEC;;7631\n");
if (file_count != 0)
    {
      printf("\nSTMT_EXEC;;7633\n");
if (to_stdout)
      {
        printf("\nSTMT_EXEC;;7635\n");
if (!test)
        {
          printf("\nSTMT_EXEC;;7637\n");
if (!list)
          {
            printf("\nSTMT_EXEC;;7639\n");
if (!decompress)
            {
              printf("\nSTMT_EXEC;;7641\n");
tmp___7 = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;7645\n");
if (!ascii)
              {
                printf("\nSTMT_EXEC;;7647\n");
tmp___7 = 1;
              }
              else
              {
                printf("\nSTMT_EXEC;;7651\n");
tmp___7 = 0;
              }
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;7657\n");
tmp___7 = 0;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;7662\n");
tmp___7 = 0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7667\n");
tmp___7 = 0;
      }
      {
        printf("\nSTMT_EXEC;;7670\n");
while (1)
        {
        while_continue___0: /* CIL Label */;
          printf("\nSTMT_EXEC;;7673\n");
if (!(optind < argc))
          {
            printf("\nSTMT_EXEC;;7675\n");
goto while_break___0;
          }
          {
            printf("\nSTMT_EXEC;;7678\n");
tmp___8 = optind;
            printf("\nSTMT_EXEC;;7679\n");
optind++;
            printf("\nSTMT_EXEC;;7680\n");
treat_file(*(argv + tmp___8));
          }
        }
      while_break___0: /* CIL Label */;
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;7689\n");
treat_stdin();
      }
    }
    printf("\nSTMT_EXEC;;7692\n");
if (list)
    {
      printf("\nSTMT_EXEC;;7694\n");
if (!quiet)
      {
        printf("\nSTMT_EXEC;;7696\n");
if (file_count > 1)
        {
          {
            printf("\nSTMT_EXEC;;7699\n");
do_list(-1, -1);
          }
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;7705\n");
do_exit(exit_code);
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
  printf("\nSTMT_EXEC;;7717\n");
int tmp___4;
  printf("\nSTMT_EXEC;;7718\n");
int tmp___5;
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
  printf("\nSTMT_EXEC;;7724\n");
char *__cil_tmp13;
  printf("\nSTMT_EXEC;;7725\n");
char *__cil_tmp14;
  printf("\nSTMT_EXEC;;7726\n");
char *__cil_tmp15;
  printf("\nSTMT_EXEC;;7727\n");
char *__cil_tmp16;
  printf("\nSTMT_EXEC;;7728\n");
char *__cil_tmp17;
  printf("\nSTMT_EXEC;;7729\n");
char *__cil_tmp18;
  printf("\nSTMT_EXEC;;7730\n");
char *__cil_tmp19;
  {
    printf("\nSTMT_EXEC;;7732\n");
if (!force)
    {
      printf("\nSTMT_EXEC;;7734\n");
if (!list)
      {
        printf("\nSTMT_EXEC;;7736\n");
if (decompress)
        {
          printf("\nSTMT_EXEC;;7738\n");
tmp___1 = stdin;
        }
        else
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
          printf("\nSTMT_EXEC;;7750\n");
if (decompress)
          {
            printf("\nSTMT_EXEC;;7752\n");
tmp = "de";
          }
          else
          {
            printf("\nSTMT_EXEC;;7756\n");
tmp = "";
          }
          printf("\nSTMT_EXEC;;7758\n");
if (decompress)
          {
            printf("\nSTMT_EXEC;;7760\n");
tmp___0 = "read from";
          }
          else
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
    }
    printf("\nSTMT_EXEC;;7778\n");
if (decompress)
    {
      printf("\nSTMT_EXEC;;7780\n");
tmp___4 = 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;7784\n");
if (!ascii)
      {
        printf("\nSTMT_EXEC;;7786\n");
tmp___4 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;7790\n");
tmp___4 = 0;
      }
    }
    printf("\nSTMT_EXEC;;7793\n");
if (!test)
    {
      printf("\nSTMT_EXEC;;7795\n");
if (!list)
      {
        printf("\nSTMT_EXEC;;7797\n");
if (!decompress)
        {
          printf("\nSTMT_EXEC;;7799\n");
tmp___5 = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;7803\n");
if (!ascii)
          {
            printf("\nSTMT_EXEC;;7805\n");
tmp___5 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;7809\n");
tmp___5 = 0;
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7815\n");
tmp___5 = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;7820\n");
tmp___5 = 0;
    }
    {
      printf("\nSTMT_EXEC;;7823\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(ifname), (char const * /* __restrict  */) "stdin");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7824\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(ofname), (char const * /* __restrict  */) "stdout");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;7825\n");
time_stamp = 0L;
    }
    printf("\nSTMT_EXEC;;7827\n");
if (list)
    {
      printf("\nSTMT_EXEC;;7829\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;7833\n");
if (!no_time)
      {
      _L:
      {
        printf("\nSTMT_EXEC;;7837\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___6 = fileno(stdin);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;7838\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___7 = fstat(tmp___6, &istat);printf("\nFUNC_RETURN;;\n");

      }
        printf("\nSTMT_EXEC;;7840\n");
if (tmp___7 != 0)
        {
          {
            printf("\nSTMT_EXEC;;7843\n");
error((char *)"fstat(stdin)");
          }
        }
        printf("\nSTMT_EXEC;;7846\n");
time_stamp = istat.st_mtim.tv_sec;
      }
    }
    {
      printf("\nSTMT_EXEC;;7850\n");
ifile_size = -1L;
      printf("\nSTMT_EXEC;;7851\n");
clear_bufs();
      printf("\nSTMT_EXEC;;7852\n");
to_stdout = 1;
      printf("\nSTMT_EXEC;;7853\n");
part_nb = 0;
    }
    printf("\nSTMT_EXEC;;7855\n");
if (decompress)
    {
      {
        printf("\nSTMT_EXEC;;7858\n");
method = get_method(ifd);
      }
      printf("\nSTMT_EXEC;;7860\n");
if (method < 0)
      {
        {
          printf("\nSTMT_EXEC;;7863\n");
do_exit(exit_code);
        }
      }
    }
    printf("\nSTMT_EXEC;;7867\n");
if (list)
    {
      {
        printf("\nSTMT_EXEC;;7870\n");
do_list(ifd, method);
      }
      printf("\nSTMT_EXEC;;7872\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;7875\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;7883\n");
if (tmp___10 != 0)
        {
          printf("\nSTMT_EXEC;;7885\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
        printf("\nSTMT_EXEC;;7887\n");
if (!decompress)
        {
          printf("\nSTMT_EXEC;;7889\n");
goto while_break;
        }
        else
        {
          printf("\nSTMT_EXEC;;7893\n");
if (last_member)
          {
            printf("\nSTMT_EXEC;;7895\n");
goto while_break;
          }
          else
          {
            printf("\nSTMT_EXEC;;7899\n");
if (inptr == insize)
            {
              printf("\nSTMT_EXEC;;7901\n");
goto while_break;
            }
          }
        }
        {
          printf("\nSTMT_EXEC;;7906\n");
method = get_method(ifd);
        }
        printf("\nSTMT_EXEC;;7908\n");
if (method < 0)
        {
          printf("\nSTMT_EXEC;;7910\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
        printf("\nSTMT_EXEC;;7912\n");
bytes_out = 0L;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;7916\n");
if (verbose)
    {
      printf("\nSTMT_EXEC;;7918\n");
if (test)
      {
        {
          printf("\nSTMT_EXEC;;7921\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " OK\n");printf("\nFUNC_RETURN;;\n");

        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7926\n");
if (!decompress)
        {
          {
            printf("\nSTMT_EXEC;;7929\n");
display_ratio(bytes_in - (bytes_out - header_bytes), bytes_in, stderr);
            printf("\nSTMT_EXEC;;7930\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n");printf("\nFUNC_RETURN;;\n");

          }
        }
      }
    }
    printf("\nSTMT_EXEC;;7935\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void treat_file(char *iname)
{
  printf("\nFUNC_CALL;treat_file(char *);\n");
printf("\nSTMT_EXEC;;7940\n");
int cflag;
  printf("\nSTMT_EXEC;;7941\n");
int tmp;
  printf("\nSTMT_EXEC;;7942\n");
int tmp___0;
  printf("\nSTMT_EXEC;;7943\n");
struct stat st;
  printf("\nSTMT_EXEC;;7944\n");
int tmp___1;
  printf("\nSTMT_EXEC;;7945\n");
int tmp___2;
  printf("\nSTMT_EXEC;;7946\n");
int tmp___3;
  printf("\nSTMT_EXEC;;7947\n");
int tmp___4;
  printf("\nSTMT_EXEC;;7948\n");
char const *tmp___7;
  printf("\nSTMT_EXEC;;7949\n");
size_t tmp___8;
  printf("\nSTMT_EXEC;;7950\n");
char const *tmp___9;
  printf("\nSTMT_EXEC;;7951\n");
size_t tmp___10;
  printf("\nSTMT_EXEC;;7952\n");
int tmp___11;
  printf("\nSTMT_EXEC;;7953\n");
int tmp___12;
  printf("\nSTMT_EXEC;;7954\n");
void *__cil_tmp16;
  printf("\nSTMT_EXEC;;7955\n");
char *__cil_tmp17;
  printf("\nSTMT_EXEC;;7956\n");
char *__cil_tmp18;
  printf("\nSTMT_EXEC;;7957\n");
char *__cil_tmp19;
  printf("\nSTMT_EXEC;;7958\n");
char *__cil_tmp20;
  {
    {
      printf("\nSTMT_EXEC;;7961\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)iname, "-");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7963\n");
if (tmp == 0)
    {
      {
        printf("\nSTMT_EXEC;;7966\n");
cflag = to_stdout;
        printf("\nSTMT_EXEC;;7967\n");
treat_stdin();
        printf("\nSTMT_EXEC;;7968\n");
to_stdout = cflag;
      }
      printf("\nSTMT_EXEC;;7970\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;7973\n");
tmp___0 = get_istat(iname, &istat);
    }
    printf("\nSTMT_EXEC;;7975\n");
if (tmp___0 != 0)
    {
      printf("\nSTMT_EXEC;;7977\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7979\n");
if ((istat.st_mode & 61440U) == 16384U)
    {
      printf("\nSTMT_EXEC;;7981\n");
if (recursive)
      {
        {
          printf("\nSTMT_EXEC;;7984\n");
st = istat;
          printf("\nSTMT_EXEC;;7985\n");
treat_dir(iname);
          printf("\nSTMT_EXEC;;7986\n");
reset_times(iname, &st);
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;7991\n");
if (!quiet)
        {
          {
            printf("\nSTMT_EXEC;;7994\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s is a directory -- ignored\n", progname, ifname);printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;7997\n");
if (exit_code == 0)
        {
          printf("\nSTMT_EXEC;;7999\n");
exit_code = 2;
        }
      }
      printf("\nSTMT_EXEC;;8002\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;8004\n");
if (!((istat.st_mode & 61440U) == 32768U))
    {
      printf("\nSTMT_EXEC;;8006\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;8009\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: %s is not a directory or a "
                                                   "regular file - ignored\n",
                  progname, ifname);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;8015\n");
if (exit_code == 0)
      {
        printf("\nSTMT_EXEC;;8017\n");
exit_code = 2;
      }
      printf("\nSTMT_EXEC;;8019\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;8021\n");
if (istat.st_nlink > 1UL)
    {
      printf("\nSTMT_EXEC;;8023\n");
if (!to_stdout)
      {
        printf("\nSTMT_EXEC;;8025\n");
if (!force)
        {
          printf("\nSTMT_EXEC;;8027\n");
if (!quiet)
          {
            printf("\nSTMT_EXEC;;8029\n");
if (istat.st_nlink > 2UL)
            {
              printf("\nSTMT_EXEC;;8031\n");
tmp___1 = 's';
            }
            else
            {
              printf("\nSTMT_EXEC;;8035\n");
tmp___1 = ' ';
            }
            {
              printf("\nSTMT_EXEC;;8038\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s: %s has %d other "
                                                       "link%c -- unchanged\n",
                      progname, ifname, (int)istat.st_nlink - 1, tmp___1);printf("\nFUNC_RETURN;;\n");

            }
          }
          printf("\nSTMT_EXEC;;8044\n");
if (exit_code == 0)
          {
            printf("\nSTMT_EXEC;;8046\n");
exit_code = 2;
          }
          printf("\nSTMT_EXEC;;8048\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;8052\n");
ifile_size = istat.st_size;
    printf("\nSTMT_EXEC;;8053\n");
if (no_time)
    {
      printf("\nSTMT_EXEC;;8055\n");
if (!list)
      {
        printf("\nSTMT_EXEC;;8057\n");
time_stamp = 0L;
      }
      else
      {
        printf("\nSTMT_EXEC;;8061\n");
time_stamp = istat.st_mtim.tv_sec;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;8066\n");
time_stamp = istat.st_mtim.tv_sec;
    }
    printf("\nSTMT_EXEC;;8068\n");
if (to_stdout)
    {
      printf("\nSTMT_EXEC;;8070\n");
if (!list)
      {
        printf("\nSTMT_EXEC;;8072\n");
if (!test)
        {
          {
            printf("\nSTMT_EXEC;;8075\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(ofname), (char const * /* __restrict  */) "stdout");printf("\nFUNC_RETURN;;\n");

          }
        }
        else
        {
          printf("\nSTMT_EXEC;;8080\n");
goto _L___0;
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8085\n");
goto _L___0;
      }
    }
    else
    {
    _L___0:
    {
      printf("\nSTMT_EXEC;;8092\n");
tmp___2 = make_ofname();
    }
      printf("\nSTMT_EXEC;;8094\n");
if (tmp___2 != 0)
      {
        printf("\nSTMT_EXEC;;8096\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;8099\n");
if (ascii)
    {
      printf("\nSTMT_EXEC;;8101\n");
if (!decompress)
      {
        printf("\nSTMT_EXEC;;8103\n");
tmp___3 = 0;
      }
      else
      {
        printf("\nSTMT_EXEC;;8107\n");
tmp___3 = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;8112\n");
tmp___3 = 0;
    }
    {
      printf("\nSTMT_EXEC;;8115\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
ifd = open((char const *)(ifname), tmp___3, 384);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8117\n");
if (ifd == -1)
    {
      {
        printf("\nSTMT_EXEC;;8120\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: ", progname);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8121\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8122\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;8124\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;8127\n");
clear_bufs();
      printf("\nSTMT_EXEC;;8128\n");
part_nb = 0;
    }
    printf("\nSTMT_EXEC;;8130\n");
if (decompress)
    {
      {
        printf("\nSTMT_EXEC;;8133\n");
method = get_method(ifd);
      }
      printf("\nSTMT_EXEC;;8135\n");
if (method < 0)
      {
        {
          printf("\nSTMT_EXEC;;8138\n");
printf("\nFUNC_CALL;close(int);\n");
close(ifd);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8140\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;8143\n");
if (list)
    {
      {
        printf("\nSTMT_EXEC;;8146\n");
do_list(ifd, method);
        printf("\nSTMT_EXEC;;8147\n");
printf("\nFUNC_CALL;close(int);\n");
close(ifd);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;8149\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;8151\n");
if (to_stdout)
    {
      {
        printf("\nSTMT_EXEC;;8154\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
ofd = fileno(stdout);printf("\nFUNC_RETURN;;\n");

      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;8160\n");
tmp___4 = create_outfile();
      }
      printf("\nSTMT_EXEC;;8162\n");
if (tmp___4 != 0)
      {
        printf("\nSTMT_EXEC;;8164\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;8166\n");
if (!decompress)
      {
        printf("\nSTMT_EXEC;;8168\n");
if (save_orig_name)
        {
          printf("\nSTMT_EXEC;;8170\n");
if (!verbose)
          {
            printf("\nSTMT_EXEC;;8172\n");
if (!quiet)
            {
              {
                printf("\nSTMT_EXEC;;8175\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s compressed to %s\n", progname, ifname, ofname);printf("\nFUNC_RETURN;;\n");

              }
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;8182\n");
if (!save_orig_name)
    {
      printf("\nSTMT_EXEC;;8184\n");
save_orig_name = !no_name;
    }
    printf("\nSTMT_EXEC;;8186\n");
if (verbose)
    {
      {
        printf("\nSTMT_EXEC;;8189\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___10 = strlen((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;8191\n");
if ((int)tmp___10 >= 15)
      {
        printf("\nSTMT_EXEC;;8193\n");
tmp___9 = "";
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;8198\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___8 = strlen((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8200\n");
if ((int)tmp___8 >= 7)
        {
          printf("\nSTMT_EXEC;;8202\n");
tmp___7 = "\t";
        }
        else
        {
          printf("\nSTMT_EXEC;;8206\n");
tmp___7 = "\t\t";
        }
        printf("\nSTMT_EXEC;;8208\n");
tmp___9 = tmp___7;
      }
      {
        printf("\nSTMT_EXEC;;8211\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s:\t%s", ifname, tmp___9);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;8215\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;8219\n");
tmp___11 = (*work)(ifd, ofd);
        }
        printf("\nSTMT_EXEC;;8221\n");
if (tmp___11 != 0)
        {
          printf("\nSTMT_EXEC;;8223\n");
method = -1;
          printf("\nSTMT_EXEC;;8224\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;8226\n");
if (!decompress)
        {
          printf("\nSTMT_EXEC;;8228\n");
goto while_break;
        }
        else
        {
          printf("\nSTMT_EXEC;;8232\n");
if (last_member)
          {
            printf("\nSTMT_EXEC;;8234\n");
goto while_break;
          }
          else
          {
            printf("\nSTMT_EXEC;;8238\n");
if (inptr == insize)
            {
              printf("\nSTMT_EXEC;;8240\n");
goto while_break;
            }
          }
        }
        {
          printf("\nSTMT_EXEC;;8245\n");
method = get_method(ifd);
        }
        printf("\nSTMT_EXEC;;8247\n");
if (method < 0)
        {
          printf("\nSTMT_EXEC;;8249\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;8251\n");
bytes_out = 0L;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8256\n");
printf("\nFUNC_CALL;close(int);\n");
close(ifd);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8258\n");
if (!to_stdout)
    {
      {
        printf("\nSTMT_EXEC;;8261\n");
printf("\nFUNC_CALL;close(int);\n");
tmp___12 = close(ofd);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;8263\n");
if (tmp___12)
      {
        {
          printf("\nSTMT_EXEC;;8266\n");
write_error();
        }
      }
    }
    printf("\nSTMT_EXEC;;8270\n");
if (method == -1)
    {
      printf("\nSTMT_EXEC;;8272\n");
if (!to_stdout)
      {
        {
          printf("\nSTMT_EXEC;;8275\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
unlink((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;8278\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;8280\n");
if (verbose)
    {
      printf("\nSTMT_EXEC;;8282\n");
if (test)
      {
        {
          printf("\nSTMT_EXEC;;8285\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " OK");printf("\nFUNC_RETURN;;\n");

        }
      }
      else
      {
        printf("\nSTMT_EXEC;;8290\n");
if (decompress)
        {
          {
            printf("\nSTMT_EXEC;;8293\n");
display_ratio(bytes_out - (bytes_in - header_bytes), bytes_out, stderr);
          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;8299\n");
display_ratio(bytes_in - (bytes_out - header_bytes), bytes_in, stderr);
          }
        }
      }
      printf("\nSTMT_EXEC;;8303\n");
if (!test)
      {
        printf("\nSTMT_EXEC;;8305\n");
if (!to_stdout)
        {
          {
            printf("\nSTMT_EXEC;;8308\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " -- replaced with %s", ofname);printf("\nFUNC_RETURN;;\n");

          }
        }
      }
      {
        printf("\nSTMT_EXEC;;8313\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;8316\n");
if (!to_stdout)
    {
      {
        printf("\nSTMT_EXEC;;8319\n");
copy_stat(&istat);
      }
    }
    printf("\nSTMT_EXEC;;8322\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static int create_outfile(void)
{
  printf("\nFUNC_CALL;create_outfile();\n");
printf("\nSTMT_EXEC;;8327\n");
struct stat ostat;
  printf("\nSTMT_EXEC;;8328\n");
int flags___0;
  printf("\nSTMT_EXEC;;8329\n");
int tmp;
  printf("\nSTMT_EXEC;;8330\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8331\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8332\n");
void *__cil_tmp6;
  {
    printf("\nSTMT_EXEC;;8334\n");
flags___0 = 193;
    printf("\nSTMT_EXEC;;8335\n");
if (ascii)
    {
      printf("\nSTMT_EXEC;;8337\n");
if (decompress)
      {
        printf("\nSTMT_EXEC;;8339\n");
flags___0 &= -1;
      }
    }
    {
      printf("\nSTMT_EXEC;;8343\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;8347\n");
tmp = check_ofname();
        }
        printf("\nSTMT_EXEC;;8349\n");
if (tmp != 0)
        {
          {
            printf("\nSTMT_EXEC;;8352\n");
printf("\nFUNC_CALL;close(int);\n");
close(ifd);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;8354\n");
printf("\nFUNC_RETURN;;\n");
return (1);
        }
        {
          printf("\nSTMT_EXEC;;8357\n");
remove_ofname = 1;
          printf("\nSTMT_EXEC;;8358\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
ofd = open((char const *)(ofname), flags___0, 384);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8360\n");
if (ofd == -1)
        {
          {
            printf("\nSTMT_EXEC;;8363\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8364\n");
printf("\nFUNC_CALL;close(int);\n");
close(ifd);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8365\n");
exit_code = 1;
          }
          printf("\nSTMT_EXEC;;8367\n");
printf("\nFUNC_RETURN;;\n");
return (1);
        }
        {
          printf("\nSTMT_EXEC;;8370\n");
printf("\nFUNC_CALL;fstat(int,struct stat *);\n");
tmp___0 = fstat(ofd, &ostat);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8372\n");
if (tmp___0 != 0)
        {
          {
            printf("\nSTMT_EXEC;;8375\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: ", progname);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8376\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8377\n");
printf("\nFUNC_CALL;close(int);\n");
close(ifd);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8378\n");
printf("\nFUNC_CALL;close(int);\n");
close(ofd);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8379\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
unlink((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8380\n");
exit_code = 1;
          }
          printf("\nSTMT_EXEC;;8382\n");
printf("\nFUNC_RETURN;;\n");
return (1);
        }
        {
          printf("\nSTMT_EXEC;;8385\n");
tmp___1 = name_too_long(ofname, &ostat);
        }
        printf("\nSTMT_EXEC;;8387\n");
if (!tmp___1)
        {
          printf("\nSTMT_EXEC;;8389\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
        printf("\nSTMT_EXEC;;8391\n");
if (decompress)
        {
          printf("\nSTMT_EXEC;;8393\n");
if (!quiet)
          {
            {
              printf("\nSTMT_EXEC;;8396\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s: warning, name truncated\n", progname, ofname);printf("\nFUNC_RETURN;;\n");

            }
          }
          printf("\nSTMT_EXEC;;8399\n");
if (exit_code == 0)
          {
            printf("\nSTMT_EXEC;;8401\n");
exit_code = 2;
          }
          printf("\nSTMT_EXEC;;8403\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
        {
          printf("\nSTMT_EXEC;;8406\n");
printf("\nFUNC_CALL;close(int);\n");
close(ofd);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8407\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
unlink((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8408\n");
shorten_name(ofname);
        }
      }
    while_break: /* CIL Label */;
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static int do_stat(char *name, struct stat *sbuf)
{
  printf("\nFUNC_CALL;do_stat(char *,struct stat *);\n");
printf("\nSTMT_EXEC;;8417\n");
int *tmp;
  printf("\nSTMT_EXEC;;8418\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8419\n");
int tmp___1;
  {
    {
      printf("\nSTMT_EXEC;;8422\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8423\n");
*tmp = 0;
    }
    printf("\nSTMT_EXEC;;8425\n");
if (!to_stdout)
    {
      printf("\nSTMT_EXEC;;8427\n");
if (!force)
      {
        {
          printf("\nSTMT_EXEC;;8430\n");
printf("\nFUNC_CALL;lstat(const char *__restrict,struct stat *__restrict);\n");
tmp___0 = lstat((char const * /* __restrict  */)name, (struct stat * /* __restrict  */) sbuf);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8432\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___0);
      }
    }
    {
      printf("\nSTMT_EXEC;;8436\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___1 = stat((char const * /* __restrict  */)name, (struct stat * /* __restrict  */) sbuf);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8438\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
static char *known_suffixes[9] = {z_suffix, (char *)".gz", (char *)".z", (char *)".taz", (char *)".tgz", (char *)"-gz", (char *)"-z", (char *)"_z", (char *)((void *)0)};
static char *get_suffix(char *name)
{
  printf("\nFUNC_CALL;get_suffix(char *);\n");
printf("\nSTMT_EXEC;;8444\n");
int nlen;
  printf("\nSTMT_EXEC;;8445\n");
int slen;
  printf("\nSTMT_EXEC;;8446\n");
char suffix[33];
  printf("\nSTMT_EXEC;;8447\n");
char **suf;
  printf("\nSTMT_EXEC;;8448\n");
int tmp;
  printf("\nSTMT_EXEC;;8449\n");
int s;
  printf("\nSTMT_EXEC;;8450\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8451\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8452\n");
void *__cil_tmp13;
  {
    {
      printf("\nSTMT_EXEC;;8455\n");
suf = known_suffixes;
      printf("\nSTMT_EXEC;;8456\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)(z_suffix), "z");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8458\n");
if (tmp == 0)
    {
      printf("\nSTMT_EXEC;;8460\n");
suf++;
    }
    {
      printf("\nSTMT_EXEC;;8463\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
nlen = (int)strlen((char const *)name);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8465\n");
if (nlen <= 32)
    {
      {
        printf("\nSTMT_EXEC;;8468\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(suffix), (char const * /* __restrict  */)name);printf("\nFUNC_RETURN;;\n");

      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;8474\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(suffix), (char const * /* __restrict  */)(((name + nlen) - 30) - 2));printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;8478\n");
strlwr(suffix);
      printf("\nSTMT_EXEC;;8479\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
slen = (int)strlen((char const *)(suffix));printf("\nFUNC_RETURN;;\n");

    }
    {
      printf("\nSTMT_EXEC;;8482\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;8486\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = (int)strlen((char const *)*suf);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8487\n");
s = tmp___0;
        }
        printf("\nSTMT_EXEC;;8489\n");
if (slen > s)
        {
          printf("\nSTMT_EXEC;;8491\n");
if ((int)suffix[(slen - s) - 1] != 47)
          {
            {
              printf("\nSTMT_EXEC;;8494\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp((char const *)((suffix + slen) - s), (char const *)*suf);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;8496\n");
if (tmp___1 == 0)
            {
              printf("\nSTMT_EXEC;;8498\n");
printf("\nFUNC_RETURN;;\n");
return ((name + nlen) - s);
            }
          }
        }
        printf("\nSTMT_EXEC;;8502\n");
suf++;
        printf("\nSTMT_EXEC;;8503\n");
if (!((unsigned long)*suf != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;8505\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;8510\n");
printf("\nFUNC_RETURN;;\n");
return ((char *)((void *)0));
  }
printf("\nFUNC_RETURN;;\n");
}
static char *suffixes[6] = {z_suffix, (char *)".gz", (char *)".z", (char *)"-z", (char *)".Z", (char *)((void *)0)};
static int get_istat(char *iname, struct stat *sbuf)
{
  printf("\nFUNC_CALL;get_istat(char *,struct stat *);\n");
printf("\nSTMT_EXEC;;8516\n");
int ilen;
  printf("\nSTMT_EXEC;;8517\n");
char **suf;
  printf("\nSTMT_EXEC;;8518\n");
char *s;
  printf("\nSTMT_EXEC;;8519\n");
int tmp;
  printf("\nSTMT_EXEC;;8520\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;8521\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8522\n");
int tmp___2;
  {
    {
      printf("\nSTMT_EXEC;;8525\n");
suf = suffixes;
      printf("\nSTMT_EXEC;;8526\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(ifname), (char const * /* __restrict  */)iname);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8527\n");
tmp = do_stat(ifname, sbuf);
    }
    printf("\nSTMT_EXEC;;8529\n");
if (tmp == 0)
    {
      printf("\nSTMT_EXEC;;8531\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;8533\n");
if (!decompress)
    {
      {
        printf("\nSTMT_EXEC;;8536\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8537\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;8539\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;8544\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;8546\n");
if (*tmp___0 != 2)
      {
        {
          printf("\nSTMT_EXEC;;8549\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8550\n");
exit_code = 1;
        }
        printf("\nSTMT_EXEC;;8552\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    {
      printf("\nSTMT_EXEC;;8556\n");
s = get_suffix(ifname);
    }
    printf("\nSTMT_EXEC;;8558\n");
if ((unsigned long)s != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;8561\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8562\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;8564\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    {
      printf("\nSTMT_EXEC;;8567\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
ilen = (int)strlen((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8568\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp((char const *)(z_suffix), ".gz");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8570\n");
if (tmp___1 == 0)
    {
      printf("\nSTMT_EXEC;;8572\n");
suf++;
    }
    {
      printf("\nSTMT_EXEC;;8575\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;8579\n");
s = *suf;
          printf("\nSTMT_EXEC;;8580\n");
printf("\nFUNC_CALL;strcat(char *__restrict,const char *__restrict);\n");
strcat((char * /* __restrict  */)(ifname), (char const * /* __restrict  */)s);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8581\n");
tmp___2 = do_stat(ifname, sbuf);
        }
        printf("\nSTMT_EXEC;;8583\n");
if (tmp___2 == 0)
        {
          printf("\nSTMT_EXEC;;8585\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
        printf("\nSTMT_EXEC;;8587\n");
ifname[ilen] = (char)'\000';
        printf("\nSTMT_EXEC;;8588\n");
suf++;
        printf("\nSTMT_EXEC;;8589\n");
if (!((unsigned long)*suf != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;8591\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8597\n");
printf("\nFUNC_CALL;strcat(char *__restrict,const char *__restrict);\n");
strcat((char * /* __restrict  */)(ifname), (char const * /* __restrict  */)(z_suffix));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8598\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8599\n");
exit_code = 1;
    }
    printf("\nSTMT_EXEC;;8601\n");
printf("\nFUNC_RETURN;;\n");
return (1);
  }
printf("\nFUNC_RETURN;;\n");
}
static int make_ofname(void)
{
  printf("\nFUNC_CALL;make_ofname();\n");
printf("\nSTMT_EXEC;;8606\n");
char *suff;
  printf("\nSTMT_EXEC;;8607\n");
int tmp;
  printf("\nSTMT_EXEC;;8608\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8609\n");
char *__cil_tmp4;
  printf("\nSTMT_EXEC;;8610\n");
char *__cil_tmp5;
  {
    {
      printf("\nSTMT_EXEC;;8613\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(ofname), (char const * /* __restrict  */)(ifname));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8614\n");
suff = get_suffix(ofname);
    }
    printf("\nSTMT_EXEC;;8616\n");
if (decompress)
    {
      printf("\nSTMT_EXEC;;8618\n");
if ((unsigned long)suff == (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;8620\n");
if (!recursive)
        {
          printf("\nSTMT_EXEC;;8622\n");
if (list)
          {
            printf("\nSTMT_EXEC;;8624\n");
printf("\nFUNC_RETURN;;\n");
return (0);
          }
          else
          {
            printf("\nSTMT_EXEC;;8628\n");
if (test)
            {
              printf("\nSTMT_EXEC;;8630\n");
printf("\nFUNC_RETURN;;\n");
return (0);
            }
          }
        }
        printf("\nSTMT_EXEC;;8634\n");
if (verbose)
        {
          printf("\nSTMT_EXEC;;8636\n");
goto _L;
        }
        else
        {
          printf("\nSTMT_EXEC;;8640\n");
if (!recursive)
          {
            printf("\nSTMT_EXEC;;8642\n");
if (!quiet)
            {
            _L:
              {
printf("\nSTMT_EXEC;;8645\n");
if (!quiet)
              {
                {
                  printf("\nSTMT_EXEC;;8648\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                          (char const * /* __restrict  */) "%s: %s: unknown suffix "
                                                           "-- ignored\n",
                          progname, ifname);printf("\nFUNC_RETURN;;\n");

                }
              }
}

              printf("\nSTMT_EXEC;;8654\n");
if (exit_code == 0)
              {
                printf("\nSTMT_EXEC;;8656\n");
exit_code = 2;
              }
            }
          }
        }
        printf("\nSTMT_EXEC;;8661\n");
printf("\nFUNC_RETURN;;\n");
return (2);
      }
      {
        printf("\nSTMT_EXEC;;8664\n");
strlwr(suff);
        printf("\nSTMT_EXEC;;8665\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)suff, ".tgz");printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;8667\n");
if (tmp == 0)
      {
        {
          printf("\nSTMT_EXEC;;8670\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)suff, (char const * /* __restrict  */) ".tar");printf("\nFUNC_RETURN;;\n");

        }
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;8676\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___0 = strcmp((char const *)suff, ".taz");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8678\n");
if (tmp___0 == 0)
        {
          {
            printf("\nSTMT_EXEC;;8681\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)suff, (char const * /* __restrict  */) ".tar");printf("\nFUNC_RETURN;;\n");

          }
        }
        else
        {
          printf("\nSTMT_EXEC;;8686\n");
*suff = (char)'\000';
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;8692\n");
if ((unsigned long)suff != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;8694\n");
if (verbose)
        {
          {
            printf("\nSTMT_EXEC;;8697\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: %s already has %s "
                                                     "suffix -- unchanged\n",
                    progname, ifname, suff);printf("\nFUNC_RETURN;;\n");

          }
        }
        else
        {
          printf("\nSTMT_EXEC;;8705\n");
if (!recursive)
          {
            printf("\nSTMT_EXEC;;8707\n");
if (!quiet)
            {
              {
                printf("\nSTMT_EXEC;;8710\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                        (char const * /* __restrict  */) "%s: %s already has %s "
                                                         "suffix -- unchanged\n",
                        progname, ifname, suff);printf("\nFUNC_RETURN;;\n");

              }
            }
          }
        }
        printf("\nSTMT_EXEC;;8718\n");
if (exit_code == 0)
        {
          printf("\nSTMT_EXEC;;8720\n");
exit_code = 2;
        }
        printf("\nSTMT_EXEC;;8722\n");
printf("\nFUNC_RETURN;;\n");
return (2);
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;8727\n");
save_orig_name = 0;
          printf("\nSTMT_EXEC;;8728\n");
printf("\nFUNC_CALL;strcat(char *__restrict,const char *__restrict);\n");
strcat((char * /* __restrict  */)(ofname), (char const * /* __restrict  */)(z_suffix));printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;8732\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static int get_method(int in)
{
  printf("\nFUNC_CALL;get_method(int);\n");
printf("\nSTMT_EXEC;;8737\n");
uch flags___0;
  printf("\nSTMT_EXEC;;8738\n");
char magic[2];
  printf("\nSTMT_EXEC;;8739\n");
ulg stamp;
  printf("\nSTMT_EXEC;;8740\n");
unsigned int tmp;
  printf("\nSTMT_EXEC;;8741\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8742\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8743\n");
unsigned int tmp___2;
  printf("\nSTMT_EXEC;;8744\n");
int tmp___3;
  printf("\nSTMT_EXEC;;8745\n");
int tmp___4;
  printf("\nSTMT_EXEC;;8746\n");
unsigned int tmp___5;
  printf("\nSTMT_EXEC;;8747\n");
int tmp___6;
  printf("\nSTMT_EXEC;;8748\n");
int tmp___7;
  printf("\nSTMT_EXEC;;8749\n");
unsigned int tmp___8;
  printf("\nSTMT_EXEC;;8750\n");
int tmp___9;
  printf("\nSTMT_EXEC;;8751\n");
int tmp___10;
  printf("\nSTMT_EXEC;;8752\n");
unsigned int tmp___11;
  printf("\nSTMT_EXEC;;8753\n");
int tmp___12;
  printf("\nSTMT_EXEC;;8754\n");
int tmp___13;
  printf("\nSTMT_EXEC;;8755\n");
unsigned int tmp___14;
  printf("\nSTMT_EXEC;;8756\n");
int tmp___15;
  printf("\nSTMT_EXEC;;8757\n");
int tmp___16;
  printf("\nSTMT_EXEC;;8758\n");
unsigned int tmp___17;
  printf("\nSTMT_EXEC;;8759\n");
int tmp___18;
  printf("\nSTMT_EXEC;;8760\n");
int tmp___19;
  printf("\nSTMT_EXEC;;8761\n");
unsigned int tmp___20;
  printf("\nSTMT_EXEC;;8762\n");
int tmp___21;
  printf("\nSTMT_EXEC;;8763\n");
int tmp___22;
  printf("\nSTMT_EXEC;;8764\n");
unsigned int tmp___23;
  printf("\nSTMT_EXEC;;8765\n");
int tmp___24;
  printf("\nSTMT_EXEC;;8766\n");
int tmp___25;
  printf("\nSTMT_EXEC;;8767\n");
unsigned int tmp___26;
  printf("\nSTMT_EXEC;;8768\n");
int tmp___27;
  printf("\nSTMT_EXEC;;8769\n");
int tmp___28;
  printf("\nSTMT_EXEC;;8770\n");
unsigned int tmp___29;
  printf("\nSTMT_EXEC;;8771\n");
unsigned int tmp___30;
  printf("\nSTMT_EXEC;;8772\n");
unsigned int part;
  printf("\nSTMT_EXEC;;8773\n");
unsigned int tmp___31;
  printf("\nSTMT_EXEC;;8774\n");
int tmp___32;
  printf("\nSTMT_EXEC;;8775\n");
int tmp___33;
  printf("\nSTMT_EXEC;;8776\n");
unsigned int tmp___34;
  printf("\nSTMT_EXEC;;8777\n");
int tmp___35;
  printf("\nSTMT_EXEC;;8778\n");
int tmp___36;
  printf("\nSTMT_EXEC;;8779\n");
unsigned int len;
  printf("\nSTMT_EXEC;;8780\n");
unsigned int tmp___37;
  printf("\nSTMT_EXEC;;8781\n");
int tmp___38;
  printf("\nSTMT_EXEC;;8782\n");
int tmp___39;
  printf("\nSTMT_EXEC;;8783\n");
unsigned int tmp___40;
  printf("\nSTMT_EXEC;;8784\n");
int tmp___41;
  printf("\nSTMT_EXEC;;8785\n");
int tmp___42;
  printf("\nSTMT_EXEC;;8786\n");
unsigned int tmp___43;
  printf("\nSTMT_EXEC;;8787\n");
unsigned int tmp___44;
  printf("\nSTMT_EXEC;;8788\n");
char c;
  printf("\nSTMT_EXEC;;8789\n");
unsigned int tmp___45;
  printf("\nSTMT_EXEC;;8790\n");
int tmp___46;
  printf("\nSTMT_EXEC;;8791\n");
char *p;
  printf("\nSTMT_EXEC;;8792\n");
char *tmp___47;
  printf("\nSTMT_EXEC;;8793\n");
char *base;
  printf("\nSTMT_EXEC;;8794\n");
unsigned int tmp___48;
  printf("\nSTMT_EXEC;;8795\n");
int tmp___49;
  printf("\nSTMT_EXEC;;8796\n");
int tmp___50;
  printf("\nSTMT_EXEC;;8797\n");
char *tmp___51;
  printf("\nSTMT_EXEC;;8798\n");
unsigned int tmp___52;
  printf("\nSTMT_EXEC;;8799\n");
int tmp___53;
  printf("\nSTMT_EXEC;;8800\n");
int tmp___54;
  printf("\nSTMT_EXEC;;8801\n");
int tmp___55;
  printf("\nSTMT_EXEC;;8802\n");
int tmp___56;
  printf("\nSTMT_EXEC;;8803\n");
int tmp___57;
  printf("\nSTMT_EXEC;;8804\n");
int tmp___58;
  printf("\nSTMT_EXEC;;8805\n");
int tmp___59;
  printf("\nSTMT_EXEC;;8806\n");
int tmp___60;
  printf("\nSTMT_EXEC;;8807\n");
int tmp___61;
  printf("\nSTMT_EXEC;;8808\n");
int tmp___62;
  printf("\nSTMT_EXEC;;8809\n");
void *__cil_tmp74;
  printf("\nSTMT_EXEC;;8810\n");
char *__cil_tmp75;
  {
    printf("\nSTMT_EXEC;;8812\n");
if (force)
    {
      printf("\nSTMT_EXEC;;8814\n");
if (to_stdout)
      {
        printf("\nSTMT_EXEC;;8816\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;8818\n");
tmp = inptr;
          printf("\nSTMT_EXEC;;8819\n");
inptr++;
          printf("\nSTMT_EXEC;;8820\n");
tmp___1 = (int)inbuf[tmp];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;8825\n");
tmp___0 = fill_inbuf(1);
            printf("\nSTMT_EXEC;;8826\n");
tmp___1 = tmp___0;
          }
        }
        printf("\nSTMT_EXEC;;8829\n");
magic[0] = (char)tmp___1;
        printf("\nSTMT_EXEC;;8830\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;8832\n");
tmp___2 = inptr;
          printf("\nSTMT_EXEC;;8833\n");
inptr++;
          printf("\nSTMT_EXEC;;8834\n");
tmp___4 = (int)inbuf[tmp___2];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;8839\n");
tmp___3 = fill_inbuf(1);
            printf("\nSTMT_EXEC;;8840\n");
tmp___4 = tmp___3;
          }
        }
        printf("\nSTMT_EXEC;;8843\n");
magic[1] = (char)tmp___4;
      }
      else
      {
        printf("\nSTMT_EXEC;;8847\n");
goto _L;
      }
    }
    else
    {
    _L:
      {
printf("\nSTMT_EXEC;;8853\n");
if (inptr < insize)
      {
        printf("\nSTMT_EXEC;;8855\n");
tmp___5 = inptr;
        printf("\nSTMT_EXEC;;8856\n");
inptr++;
        printf("\nSTMT_EXEC;;8857\n");
tmp___7 = (int)inbuf[tmp___5];
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;8862\n");
tmp___6 = fill_inbuf(0);
          printf("\nSTMT_EXEC;;8863\n");
tmp___7 = tmp___6;
        }
      }
}

      printf("\nSTMT_EXEC;;8866\n");
magic[0] = (char)tmp___7;
      printf("\nSTMT_EXEC;;8867\n");
if (inptr < insize)
      {
        printf("\nSTMT_EXEC;;8869\n");
tmp___8 = inptr;
        printf("\nSTMT_EXEC;;8870\n");
inptr++;
        printf("\nSTMT_EXEC;;8871\n");
tmp___10 = (int)inbuf[tmp___8];
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;8876\n");
tmp___9 = fill_inbuf(0);
          printf("\nSTMT_EXEC;;8877\n");
tmp___10 = tmp___9;
        }
      }
      printf("\nSTMT_EXEC;;8880\n");
magic[1] = (char)tmp___10;
    }
    {
      printf("\nSTMT_EXEC;;8883\n");
method = -1;
      printf("\nSTMT_EXEC;;8884\n");
part_nb++;
      printf("\nSTMT_EXEC;;8885\n");
header_bytes = 0L;
      printf("\nSTMT_EXEC;;8886\n");
last_member = 0;
      printf("\nSTMT_EXEC;;8887\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___61 = memcmp((void const *)(magic), (void const *)"\037\213", (size_t)2);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8889\n");
if (tmp___61 == 0)
    {
      printf("\nSTMT_EXEC;;8891\n");
goto _L___4;
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;8896\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___62 = memcmp((void const *)(magic), (void const *)"\037\236", (size_t)2);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;8898\n");
if (tmp___62 == 0)
      {
      _L___4:
        {
printf("\nSTMT_EXEC;;8901\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;8903\n");
tmp___11 = inptr;
          printf("\nSTMT_EXEC;;8904\n");
inptr++;
          printf("\nSTMT_EXEC;;8905\n");
tmp___13 = (int)inbuf[tmp___11];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;8910\n");
tmp___12 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;8911\n");
tmp___13 = tmp___12;
          }
        }
}

        printf("\nSTMT_EXEC;;8914\n");
method = tmp___13;
        printf("\nSTMT_EXEC;;8915\n");
if (method != 8)
        {
          {
            printf("\nSTMT_EXEC;;8918\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: %s: unknown method %d -- "
                                                     "get newer version of gzip\n",
                    progname, ifname, method);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8922\n");
exit_code = 1;
          }
          printf("\nSTMT_EXEC;;8924\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
        printf("\nSTMT_EXEC;;8926\n");
work = &unzip;
        printf("\nSTMT_EXEC;;8927\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;8929\n");
tmp___14 = inptr;
          printf("\nSTMT_EXEC;;8930\n");
inptr++;
          printf("\nSTMT_EXEC;;8931\n");
tmp___16 = (int)inbuf[tmp___14];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;8936\n");
tmp___15 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;8937\n");
tmp___16 = tmp___15;
          }
        }
        printf("\nSTMT_EXEC;;8940\n");
flags___0 = (uch)tmp___16;
        printf("\nSTMT_EXEC;;8941\n");
if (((int)flags___0 & 32) != 0)
        {
          {
            printf("\nSTMT_EXEC;;8944\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: %s is encrypted -- get "
                                                     "newer version of gzip\n",
                    progname, ifname);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8948\n");
exit_code = 1;
          }
          printf("\nSTMT_EXEC;;8950\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
        printf("\nSTMT_EXEC;;8952\n");
if (((int)flags___0 & 2) != 0)
        {
          {
            printf("\nSTMT_EXEC;;8955\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: %s is a a multi-part gzip file "
                                                     "-- get newer version of gzip\n",
                    progname, ifname);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8959\n");
exit_code = 1;
          }
          printf("\nSTMT_EXEC;;8961\n");
if (force <= 1)
          {
            printf("\nSTMT_EXEC;;8963\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
          }
        }
        printf("\nSTMT_EXEC;;8966\n");
if (((int)flags___0 & 192) != 0)
        {
          {
            printf("\nSTMT_EXEC;;8969\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: %s has flags 0x%x -- get "
                                                     "newer version of gzip\n",
                    progname, ifname, (int)flags___0);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8973\n");
exit_code = 1;
          }
          printf("\nSTMT_EXEC;;8975\n");
if (force <= 1)
          {
            printf("\nSTMT_EXEC;;8977\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
          }
        }
        printf("\nSTMT_EXEC;;8980\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;8982\n");
tmp___17 = inptr;
          printf("\nSTMT_EXEC;;8983\n");
inptr++;
          printf("\nSTMT_EXEC;;8984\n");
tmp___19 = (int)inbuf[tmp___17];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;8989\n");
tmp___18 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;8990\n");
tmp___19 = tmp___18;
          }
        }
        printf("\nSTMT_EXEC;;8993\n");
stamp = (ulg)tmp___19;
        printf("\nSTMT_EXEC;;8994\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;8996\n");
tmp___20 = inptr;
          printf("\nSTMT_EXEC;;8997\n");
inptr++;
          printf("\nSTMT_EXEC;;8998\n");
tmp___22 = (int)inbuf[tmp___20];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;9003\n");
tmp___21 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;9004\n");
tmp___22 = tmp___21;
          }
        }
        printf("\nSTMT_EXEC;;9007\n");
stamp |= (ulg)tmp___22 << 8;
        printf("\nSTMT_EXEC;;9008\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;9010\n");
tmp___23 = inptr;
          printf("\nSTMT_EXEC;;9011\n");
inptr++;
          printf("\nSTMT_EXEC;;9012\n");
tmp___25 = (int)inbuf[tmp___23];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;9017\n");
tmp___24 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;9018\n");
tmp___25 = tmp___24;
          }
        }
        printf("\nSTMT_EXEC;;9021\n");
stamp |= (ulg)tmp___25 << 16;
        printf("\nSTMT_EXEC;;9022\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;9024\n");
tmp___26 = inptr;
          printf("\nSTMT_EXEC;;9025\n");
inptr++;
          printf("\nSTMT_EXEC;;9026\n");
tmp___28 = (int)inbuf[tmp___26];
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;9031\n");
tmp___27 = fill_inbuf(0);
            printf("\nSTMT_EXEC;;9032\n");
tmp___28 = tmp___27;
          }
        }
        printf("\nSTMT_EXEC;;9035\n");
stamp |= (ulg)tmp___28 << 24;
        printf("\nSTMT_EXEC;;9036\n");
if (stamp != 0UL)
        {
          printf("\nSTMT_EXEC;;9038\n");
if (!no_time)
          {
            printf("\nSTMT_EXEC;;9040\n");
time_stamp = (long)stamp;
          }
        }
        printf("\nSTMT_EXEC;;9043\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;9045\n");
tmp___29 = inptr;
          printf("\nSTMT_EXEC;;9046\n");
inptr++;
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;9051\n");
fill_inbuf(0);
          }
        }
        printf("\nSTMT_EXEC;;9054\n");
if (inptr < insize)
        {
          printf("\nSTMT_EXEC;;9056\n");
tmp___30 = inptr;
          printf("\nSTMT_EXEC;;9057\n");
inptr++;
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;9062\n");
fill_inbuf(0);
          }
        }
        printf("\nSTMT_EXEC;;9065\n");
if (((int)flags___0 & 2) != 0)
        {
          printf("\nSTMT_EXEC;;9067\n");
if (inptr < insize)
          {
            printf("\nSTMT_EXEC;;9069\n");
tmp___31 = inptr;
            printf("\nSTMT_EXEC;;9070\n");
inptr++;
            printf("\nSTMT_EXEC;;9071\n");
tmp___33 = (int)inbuf[tmp___31];
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;9076\n");
tmp___32 = fill_inbuf(0);
              printf("\nSTMT_EXEC;;9077\n");
tmp___33 = tmp___32;
            }
          }
          printf("\nSTMT_EXEC;;9080\n");
part = (unsigned int)tmp___33;
          printf("\nSTMT_EXEC;;9081\n");
if (inptr < insize)
          {
            printf("\nSTMT_EXEC;;9083\n");
tmp___34 = inptr;
            printf("\nSTMT_EXEC;;9084\n");
inptr++;
            printf("\nSTMT_EXEC;;9085\n");
tmp___36 = (int)inbuf[tmp___34];
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;9090\n");
tmp___35 = fill_inbuf(0);
              printf("\nSTMT_EXEC;;9091\n");
tmp___36 = tmp___35;
            }
          }
          printf("\nSTMT_EXEC;;9094\n");
part |= (unsigned int)tmp___36 << 8;
          printf("\nSTMT_EXEC;;9095\n");
if (verbose)
          {
            {
              printf("\nSTMT_EXEC;;9098\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s: part number %u\n", progname, ifname, part);printf("\nFUNC_RETURN;;\n");

            }
          }
        }
        printf("\nSTMT_EXEC;;9102\n");
if (((int)flags___0 & 4) != 0)
        {
          printf("\nSTMT_EXEC;;9104\n");
if (inptr < insize)
          {
            printf("\nSTMT_EXEC;;9106\n");
tmp___37 = inptr;
            printf("\nSTMT_EXEC;;9107\n");
inptr++;
            printf("\nSTMT_EXEC;;9108\n");
tmp___39 = (int)inbuf[tmp___37];
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;9113\n");
tmp___38 = fill_inbuf(0);
              printf("\nSTMT_EXEC;;9114\n");
tmp___39 = tmp___38;
            }
          }
          printf("\nSTMT_EXEC;;9117\n");
len = (unsigned int)tmp___39;
          printf("\nSTMT_EXEC;;9118\n");
if (inptr < insize)
          {
            printf("\nSTMT_EXEC;;9120\n");
tmp___40 = inptr;
            printf("\nSTMT_EXEC;;9121\n");
inptr++;
            printf("\nSTMT_EXEC;;9122\n");
tmp___42 = (int)inbuf[tmp___40];
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;9127\n");
tmp___41 = fill_inbuf(0);
              printf("\nSTMT_EXEC;;9128\n");
tmp___42 = tmp___41;
            }
          }
          printf("\nSTMT_EXEC;;9131\n");
len |= (unsigned int)tmp___42 << 8;
          printf("\nSTMT_EXEC;;9132\n");
if (verbose)
          {
            {
              printf("\nSTMT_EXEC;;9135\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s: %s: extra field of "
                                                       "%u bytes ignored\n",
                      progname, ifname, len);printf("\nFUNC_RETURN;;\n");

            }
          }
          {
            printf("\nSTMT_EXEC;;9142\n");
while (1)
            {
            while_continue: /* CIL Label */;
              printf("\nSTMT_EXEC;;9145\n");
tmp___44 = len;
              printf("\nSTMT_EXEC;;9146\n");
len--;
              printf("\nSTMT_EXEC;;9147\n");
if (!tmp___44)
              {
                printf("\nSTMT_EXEC;;9149\n");
goto while_break;
              }
              printf("\nSTMT_EXEC;;9151\n");
if (inptr < insize)
              {
                printf("\nSTMT_EXEC;;9153\n");
tmp___43 = inptr;
                printf("\nSTMT_EXEC;;9154\n");
inptr++;
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;9159\n");
fill_inbuf(0);
                }
              }
            }
          while_break: /* CIL Label */;
          }
        }
        printf("\nSTMT_EXEC;;9166\n");
if (((int)flags___0 & 8) != 0)
        {
          printf("\nSTMT_EXEC;;9168\n");
if (no_name)
          {
            printf("\nSTMT_EXEC;;9170\n");
goto _L___0;
          }
          else
          {
            printf("\nSTMT_EXEC;;9174\n");
if (to_stdout)
            {
              printf("\nSTMT_EXEC;;9176\n");
if (!list)
              {
                printf("\nSTMT_EXEC;;9178\n");
goto _L___0;
              }
              else
              {
                printf("\nSTMT_EXEC;;9182\n");
goto _L___1;
              }
            }
            else
            {
            _L___1:
              {
printf("\nSTMT_EXEC;;9188\n");
if (part_nb > 1)
              {
              _L___0:
              {
                printf("\nSTMT_EXEC;;9192\n");
while (1)
                {
                while_continue___0: /* CIL Label */;
                  printf("\nSTMT_EXEC;;9195\n");
if (inptr < insize)
                  {
                    printf("\nSTMT_EXEC;;9197\n");
tmp___45 = inptr;
                    printf("\nSTMT_EXEC;;9198\n");
inptr++;
                    printf("\nSTMT_EXEC;;9199\n");
c = (char)inbuf[tmp___45];
                  }
                  else
                  {
                    {
                      printf("\nSTMT_EXEC;;9204\n");
tmp___46 = fill_inbuf(0);
                      printf("\nSTMT_EXEC;;9205\n");
c = (char)tmp___46;
                    }
                  }
                  printf("\nSTMT_EXEC;;9208\n");
if (!((int)c != 0))
                  {
                    printf("\nSTMT_EXEC;;9210\n");
goto while_break___0;
                  }
                }
              while_break___0: /* CIL Label */;
              }
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;9219\n");
tmp___47 = basename(ofname);
                  printf("\nSTMT_EXEC;;9220\n");
p = tmp___47;
                  printf("\nSTMT_EXEC;;9221\n");
base = p;
                }
                {
                  printf("\nSTMT_EXEC;;9224\n");
while (1)
                  {
                  while_continue___1: /* CIL Label */;
                    printf("\nSTMT_EXEC;;9227\n");
if (inptr < insize)
                    {
                      printf("\nSTMT_EXEC;;9229\n");
tmp___48 = inptr;
                      printf("\nSTMT_EXEC;;9230\n");
inptr++;
                      printf("\nSTMT_EXEC;;9231\n");
tmp___50 = (int)inbuf[tmp___48];
                    }
                    else
                    {
                      {
                        printf("\nSTMT_EXEC;;9236\n");
tmp___49 = fill_inbuf(0);
                        printf("\nSTMT_EXEC;;9237\n");
tmp___50 = tmp___49;
                      }
                    }
                    printf("\nSTMT_EXEC;;9240\n");
*p = (char)tmp___50;
                    printf("\nSTMT_EXEC;;9241\n");
tmp___51 = p;
                    printf("\nSTMT_EXEC;;9242\n");
p++;
                    printf("\nSTMT_EXEC;;9243\n");
if ((int)*tmp___51 == 0)
                    {
                      printf("\nSTMT_EXEC;;9245\n");
goto while_break___1;
                    }
                    printf("\nSTMT_EXEC;;9247\n");
if ((unsigned long)p >= (unsigned long)(ofname + sizeof(ofname)))
                    {
                      {
                        printf("\nSTMT_EXEC;;9250\n");
error((char *)"corrupted input -- file name too large");
                      }
                    }
                  }
                while_break___1: /* CIL Label */;
                }
                printf("\nSTMT_EXEC;;9256\n");
if (!list)
                {
                  printf("\nSTMT_EXEC;;9258\n");
if (base)
                  {
                    printf("\nSTMT_EXEC;;9260\n");
list = 0;
                  }
                }
              }
}

            }
          }
        }
        printf("\nSTMT_EXEC;;9267\n");
if (((int)flags___0 & 16) != 0)
        {
          {
            printf("\nSTMT_EXEC;;9270\n");
while (1)
            {
            while_continue___2: /* CIL Label */;
              printf("\nSTMT_EXEC;;9273\n");
if (inptr < insize)
              {
                printf("\nSTMT_EXEC;;9275\n");
tmp___52 = inptr;
                printf("\nSTMT_EXEC;;9276\n");
inptr++;
                printf("\nSTMT_EXEC;;9277\n");
tmp___54 = (int)inbuf[tmp___52];
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;9282\n");
tmp___53 = fill_inbuf(0);
                  printf("\nSTMT_EXEC;;9283\n");
tmp___54 = tmp___53;
                }
              }
              printf("\nSTMT_EXEC;;9286\n");
if (!(tmp___54 != 0))
              {
                printf("\nSTMT_EXEC;;9288\n");
goto while_break___2;
              }
            }
          while_break___2: /* CIL Label */;
          }
        }
        printf("\nSTMT_EXEC;;9294\n");
if (part_nb == 1)
        {
          printf("\nSTMT_EXEC;;9296\n");
header_bytes = (long)((unsigned long)inptr + 2UL * sizeof(long));
        }
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;9302\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___59 = memcmp((void const *)(magic), (void const *)"PK\003\004", (size_t)2);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9304\n");
if (tmp___59 == 0)
        {
          printf("\nSTMT_EXEC;;9306\n");
if (inptr == 2U)
          {
            {
              printf("\nSTMT_EXEC;;9309\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___60 = memcmp((void const *)((char *)(inbuf)), (void const *)"PK\003\004", (size_t)4);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;9311\n");
if (tmp___60 == 0)
            {
              {
                printf("\nSTMT_EXEC;;9314\n");
inptr = 0U;
                printf("\nSTMT_EXEC;;9315\n");
work = &unzip;
                printf("\nSTMT_EXEC;;9316\n");
tmp___55 = check_zipfile(in);
              }
              printf("\nSTMT_EXEC;;9318\n");
if (tmp___55 != 0)
              {
                printf("\nSTMT_EXEC;;9320\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
              }
              printf("\nSTMT_EXEC;;9322\n");
last_member = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;9326\n");
goto _L___3;
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;9331\n");
goto _L___3;
          }
        }
        else
        {
        _L___3:
        {
          printf("\nSTMT_EXEC;;9338\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___58 = memcmp((void const *)(magic), (void const *)"\037\036", (size_t)2);printf("\nFUNC_RETURN;;\n");

        }
          printf("\nSTMT_EXEC;;9340\n");
if (tmp___58 == 0)
          {
            printf("\nSTMT_EXEC;;9342\n");
work = &unpack;
            printf("\nSTMT_EXEC;;9343\n");
method = 2;
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;9348\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___57 = memcmp((void const *)(magic), (void const *)"\037\235", (size_t)2);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;9350\n");
if (tmp___57 == 0)
            {
              printf("\nSTMT_EXEC;;9352\n");
work = &unlzw;
              printf("\nSTMT_EXEC;;9353\n");
method = 1;
              printf("\nSTMT_EXEC;;9354\n");
last_member = 1;
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;9359\n");
printf("\nFUNC_CALL;memcmp(const void *,const void *,size_t);\n");
tmp___56 = memcmp((void const *)(magic), (void const *)"\037\240", (size_t)2);printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;9361\n");
if (tmp___56 == 0)
              {
                printf("\nSTMT_EXEC;;9363\n");
work = &unlzh;
                printf("\nSTMT_EXEC;;9364\n");
method = 3;
                printf("\nSTMT_EXEC;;9365\n");
last_member = 1;
              }
              else
              {
                printf("\nSTMT_EXEC;;9369\n");
if (force)
                {
                  printf("\nSTMT_EXEC;;9371\n");
if (to_stdout)
                  {
                    printf("\nSTMT_EXEC;;9373\n");
if (!list)
                    {
                      printf("\nSTMT_EXEC;;9375\n");
method = 0;
                      printf("\nSTMT_EXEC;;9376\n");
work = &copy;
                      printf("\nSTMT_EXEC;;9377\n");
inptr = 0U;
                      printf("\nSTMT_EXEC;;9378\n");
last_member = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;9388\n");
if (method >= 0)
    {
      printf("\nSTMT_EXEC;;9390\n");
printf("\nFUNC_RETURN;;\n");
return (method);
    }
    printf("\nSTMT_EXEC;;9392\n");
if (part_nb == 1)
    {
      {
        printf("\nSTMT_EXEC;;9395\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: %s: not in gzip format\n", progname, ifname);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9396\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;9398\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    else
    {
      printf("\nSTMT_EXEC;;9402\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;9405\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "\n%s: %s: decompression OK, "
                                                   "trailing garbage ignored\n",
                  progname, ifname);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;9411\n");
if (exit_code == 0)
      {
        printf("\nSTMT_EXEC;;9413\n");
exit_code = 2;
      }
      printf("\nSTMT_EXEC;;9415\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static int first_time = 1;
static char *methods[9] = {(char *)"store", (char *)"compr", (char *)"pack ", (char *)"lzh  ", (char *)"", (char *)"", (char *)"", (char *)"", (char *)"defla"};
static void do_list(int ifd___0, int method___0)
{
  printf("\nFUNC_CALL;do_list(int,int);\n");
printf("\nSTMT_EXEC;;9423\n");
ulg crc___1;
  printf("\nSTMT_EXEC;;9424\n");
char *date;
  printf("\nSTMT_EXEC;;9425\n");
__off_t tmp;
  printf("\nSTMT_EXEC;;9426\n");
uch buf[8];
  printf("\nSTMT_EXEC;;9427\n");
ssize_t tmp___0;
  printf("\nSTMT_EXEC;;9428\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;9429\n");
void *__cil_tmp9;
  {
    printf("\nSTMT_EXEC;;9431\n");
if (first_time)
    {
      printf("\nSTMT_EXEC;;9433\n");
if (method___0 >= 0)
      {
        printf("\nSTMT_EXEC;;9435\n");
first_time = 0;
        printf("\nSTMT_EXEC;;9436\n");
if (verbose)
        {
          {
            printf("\nSTMT_EXEC;;9439\n");
printf((char const * /* __restrict  */) "method  crc     date  time  ");
          }
        }
        printf("\nSTMT_EXEC;;9442\n");
if (!quiet)
        {
          {
            printf("\nSTMT_EXEC;;9445\n");
printf((char const * /* __restrict  */) "compressed  uncompr. ratio "
                                                    "uncompressed_name\n");
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;9452\n");
goto _L;
      }
    }
    else
    {
    _L:
      {
printf("\nSTMT_EXEC;;9458\n");
if (method___0 < 0)
      {
        printf("\nSTMT_EXEC;;9460\n");
if (total_in <= 0L)
        {
          printf("\nSTMT_EXEC;;9462\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
        else
        {
          printf("\nSTMT_EXEC;;9466\n");
if (total_out <= 0L)
          {
            printf("\nSTMT_EXEC;;9468\n");
printf("\nFUNC_RETURN;;\n");
return;
          }
        }
        printf("\nSTMT_EXEC;;9471\n");
if (verbose)
        {
          {
            printf("\nSTMT_EXEC;;9474\n");
printf((char const * /* __restrict  */) "                          "
                                                    "  %9lu %9lu ",
                   total_in, total_out);
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;9481\n");
if (!quiet)
          {
            {
              printf("\nSTMT_EXEC;;9484\n");
printf((char const * /* __restrict  */) "%9ld %9ld ", total_in, total_out);
            }
          }
        }
        {
          printf("\nSTMT_EXEC;;9489\n");
display_ratio(total_out - (total_in - header_bytes), total_out, stdout);
          printf("\nSTMT_EXEC;;9490\n");
printf((char const * /* __restrict  */) " (totals)\n");
        }
        printf("\nSTMT_EXEC;;9492\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
}

    }
    printf("\nSTMT_EXEC;;9495\n");
crc___1 = (ulg)(~0);
    printf("\nSTMT_EXEC;;9496\n");
bytes_out = -1L;
    printf("\nSTMT_EXEC;;9497\n");
bytes_in = ifile_size;
    printf("\nSTMT_EXEC;;9498\n");
if (method___0 == 8)
    {
      printf("\nSTMT_EXEC;;9500\n");
if (!last_member)
      {
        {
          printf("\nSTMT_EXEC;;9503\n");
printf("\nFUNC_CALL;lseek(int,__off_t,int);\n");
tmp = lseek(ifd___0, (off_t)-8, 2);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9504\n");
bytes_in = tmp;
        }
        printf("\nSTMT_EXEC;;9506\n");
if (bytes_in != -1L)
        {
          {
            printf("\nSTMT_EXEC;;9509\n");
bytes_in += 8L;
            printf("\nSTMT_EXEC;;9510\n");
tmp___0 = read(ifd___0, (void *)((char *)(buf)), sizeof(buf));
          }
          printf("\nSTMT_EXEC;;9512\n");
if ((unsigned long)tmp___0 != sizeof(buf))
          {
            {
              printf("\nSTMT_EXEC;;9515\n");
read_error();
            }
          }
          printf("\nSTMT_EXEC;;9518\n");
crc___1 = (ulg)((int)((ush)buf[0]) | ((int)((ush)buf[1]) << 8)) | ((ulg)((int)((ush) * ((buf + 2) + 0)) | ((int)((ush) * ((buf + 2) + 1)) << 8)) << 16);
          printf("\nSTMT_EXEC;;9519\n");
bytes_out = (long)((ulg)((int)((ush) * ((buf + 4) + 0)) | ((int)((ush) * ((buf + 4) + 1)) << 8)) | ((ulg)((int)((ush) * (((buf + 4) + 2) + 0)) | ((int)((ush) * (((buf + 4) + 2) + 1)) << 8)) << 16));
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;9524\n");
printf("\nFUNC_CALL;ctime(const time_t *);\n");
tmp___1 = ctime((time_t const *)(&time_stamp));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9525\n");
date = tmp___1 + 4;
      printf("\nSTMT_EXEC;;9526\n");
*(date + 12) = (char)'\000';
    }
    printf("\nSTMT_EXEC;;9528\n");
if (verbose)
    {
      {
        printf("\nSTMT_EXEC;;9531\n");
printf((char const * /* __restrict  */) "%5s %08lx %11s ", methods[method___0], crc___1, date);
      }
    }
    {
      printf("\nSTMT_EXEC;;9535\n");
printf((char const * /* __restrict  */) "%9ld %9ld ", bytes_in, bytes_out);
    }
    printf("\nSTMT_EXEC;;9537\n");
if (bytes_in == -1L)
    {
      printf("\nSTMT_EXEC;;9539\n");
total_in = -1L;
      printf("\nSTMT_EXEC;;9540\n");
header_bytes = 0L;
      printf("\nSTMT_EXEC;;9541\n");
bytes_out = header_bytes;
      printf("\nSTMT_EXEC;;9542\n");
bytes_in = bytes_out;
    }
    else
    {
      printf("\nSTMT_EXEC;;9546\n");
if (total_in >= 0L)
      {
        printf("\nSTMT_EXEC;;9548\n");
total_in += bytes_in;
      }
    }
    printf("\nSTMT_EXEC;;9551\n");
if (bytes_out == -1L)
    {
      printf("\nSTMT_EXEC;;9553\n");
total_out = -1L;
      printf("\nSTMT_EXEC;;9554\n");
header_bytes = 0L;
      printf("\nSTMT_EXEC;;9555\n");
bytes_out = header_bytes;
      printf("\nSTMT_EXEC;;9556\n");
bytes_in = bytes_out;
    }
    else
    {
      printf("\nSTMT_EXEC;;9560\n");
if (total_out >= 0L)
      {
        printf("\nSTMT_EXEC;;9562\n");
total_out += bytes_out;
      }
    }
    {
      printf("\nSTMT_EXEC;;9566\n");
display_ratio(bytes_out - (bytes_in - header_bytes), bytes_out, stdout);
      printf("\nSTMT_EXEC;;9567\n");
printf((char const * /* __restrict  */) " %s\n", ofname);
    }
    printf("\nSTMT_EXEC;;9569\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static int same_file(struct stat *stat1, struct stat *stat2)
{
  printf("\nFUNC_CALL;same_file(struct stat *,struct stat *);\n");
printf("\nSTMT_EXEC;;9574\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;9576\n");
if (stat1->st_ino == stat2->st_ino)
    {
      printf("\nSTMT_EXEC;;9578\n");
if (stat1->st_dev == stat2->st_dev)
      {
        printf("\nSTMT_EXEC;;9580\n");
tmp = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;9584\n");
tmp = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;9589\n");
tmp = 0;
    }
    printf("\nSTMT_EXEC;;9591\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
static int name_too_long(char *name, struct stat *statb)
{
  printf("\nFUNC_CALL;name_too_long(char *,struct stat *);\n");
printf("\nSTMT_EXEC;;9596\n");
int s;
  printf("\nSTMT_EXEC;;9597\n");
int tmp;
  printf("\nSTMT_EXEC;;9598\n");
char c;
  printf("\nSTMT_EXEC;;9599\n");
struct stat tstat;
  printf("\nSTMT_EXEC;;9600\n");
int res;
  printf("\nSTMT_EXEC;;9601\n");
int tmp___0;
  printf("\nSTMT_EXEC;;9602\n");
int tmp___1;
  printf("\nSTMT_EXEC;;9603\n");
int tmp___2;
  printf("\nSTMT_EXEC;;9604\n");
void *__cil_tmp12;
  {
    {
      printf("\nSTMT_EXEC;;9607\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = (int)strlen((char const *)name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9608\n");
s = tmp;
      printf("\nSTMT_EXEC;;9609\n");
c = *(name + (s - 1));
      printf("\nSTMT_EXEC;;9610\n");
tstat = *statb;
      printf("\nSTMT_EXEC;;9611\n");
*(name + (s - 1)) = (char)'\000';
      printf("\nSTMT_EXEC;;9612\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___0 = stat((char const * /* __restrict  */)name, (struct stat * /* __restrict  */)(&tstat));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9614\n");
if (tmp___0 == 0)
    {
      {
        printf("\nSTMT_EXEC;;9617\n");
tmp___1 = same_file(statb, &tstat);
      }
      printf("\nSTMT_EXEC;;9619\n");
if (tmp___1)
      {
        printf("\nSTMT_EXEC;;9621\n");
tmp___2 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;9625\n");
tmp___2 = 0;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;9630\n");
tmp___2 = 0;
    }
    printf("\nSTMT_EXEC;;9632\n");
res = tmp___2;
    printf("\nSTMT_EXEC;;9633\n");
*(name + (s - 1)) = c;
    printf("\nSTMT_EXEC;;9634\n");
printf("\nFUNC_RETURN;;\n");
return (res);
  }
printf("\nFUNC_RETURN;;\n");
}
static void shorten_name(char *name)
{
  printf("\nFUNC_CALL;shorten_name(char *);\n");
printf("\nSTMT_EXEC;;9639\n");
int len;
  printf("\nSTMT_EXEC;;9640\n");
char *trunc;
  printf("\nSTMT_EXEC;;9641\n");
int plen;
  printf("\nSTMT_EXEC;;9642\n");
int min_part;
  printf("\nSTMT_EXEC;;9643\n");
char *p;
  printf("\nSTMT_EXEC;;9644\n");
int tmp;
  printf("\nSTMT_EXEC;;9645\n");
char *tmp___0;
  printf("\nSTMT_EXEC;;9646\n");
char *__cil_tmp11;
  printf("\nSTMT_EXEC;;9647\n");
char *__cil_tmp12;
  printf("\nSTMT_EXEC;;9648\n");
char *__cil_tmp13;
  printf("\nSTMT_EXEC;;9649\n");
char *__cil_tmp14;
  printf("\nSTMT_EXEC;;9650\n");
char *__cil_tmp15;
  {
    {
      printf("\nSTMT_EXEC;;9653\n");
trunc = (char *)((void *)0);
      printf("\nSTMT_EXEC;;9654\n");
min_part = 3;
      printf("\nSTMT_EXEC;;9655\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
len = (int)strlen((char const *)name);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9657\n");
if (decompress)
    {
      printf("\nSTMT_EXEC;;9659\n");
if (len <= 1)
      {
        {
          printf("\nSTMT_EXEC;;9662\n");
error((char *)"name too short");
        }
      }
      printf("\nSTMT_EXEC;;9665\n");
*(name + (len - 1)) = (char)'\000';
      printf("\nSTMT_EXEC;;9666\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;9669\n");
p = get_suffix(name);
    }
    printf("\nSTMT_EXEC;;9671\n");
if ((unsigned long)p == (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;9674\n");
error((char *)"can\'t recover suffix\n");
      }
    }
    printf("\nSTMT_EXEC;;9677\n");
*p = (char)'\000';
    printf("\nSTMT_EXEC;;9678\n");
save_orig_name = 1;
    printf("\nSTMT_EXEC;;9679\n");
if (len > 4)
    {
      {
        printf("\nSTMT_EXEC;;9682\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)(p - 4), ".tar");printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;9684\n");
if (tmp == 0)
      {
        {
          printf("\nSTMT_EXEC;;9687\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(p - 4), (char const * /* __restrict  */) ".tgz");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9689\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    {
      printf("\nSTMT_EXEC;;9693\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;9697\n");
printf("\nFUNC_CALL;strrchr(const char *,int);\n");
p = strrchr((char const *)name, '/');printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9699\n");
if (p)
        {
          printf("\nSTMT_EXEC;;9701\n");
p++;
        }
        else
        {
          printf("\nSTMT_EXEC;;9705\n");
p = name;
        }
        {
          printf("\nSTMT_EXEC;;9708\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;9711\n");
if (!*p)
            {
              printf("\nSTMT_EXEC;;9713\n");
goto while_break___0;
            }
            {
              printf("\nSTMT_EXEC;;9716\n");
printf("\nFUNC_CALL;strcspn(const char *,const char *);\n");
plen = (int)strcspn((char const *)p, ".");printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;9717\n");
p += plen;
            }
            printf("\nSTMT_EXEC;;9719\n");
if (plen > min_part)
            {
              printf("\nSTMT_EXEC;;9721\n");
trunc = p - 1;
            }
            printf("\nSTMT_EXEC;;9723\n");
if (*p)
            {
              printf("\nSTMT_EXEC;;9725\n");
p++;
            }
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;9730\n");
if ((unsigned long)trunc == (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;9732\n");
min_part--;
          printf("\nSTMT_EXEC;;9733\n");
if (!(min_part != 0))
          {
            printf("\nSTMT_EXEC;;9735\n");
goto while_break;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;9740\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;9745\n");
if ((unsigned long)trunc != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;9748\n");
while (1)
        {
        while_continue___1: /* CIL Label */;
          printf("\nSTMT_EXEC;;9751\n");
*(trunc + 0) = *(trunc + 1);
          printf("\nSTMT_EXEC;;9752\n");
tmp___0 = trunc;
          printf("\nSTMT_EXEC;;9753\n");
trunc++;
          printf("\nSTMT_EXEC;;9754\n");
if (!*tmp___0)
          {
            printf("\nSTMT_EXEC;;9756\n");
goto while_break___1;
          }
        }
      while_break___1: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;9761\n");
trunc--;
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;9766\n");
printf("\nFUNC_CALL;strrchr(const char *,int);\n");
trunc = strrchr((char const *)name, (int)*("." + 0));printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;9768\n");
if ((unsigned long)trunc == (unsigned long)((void *)0))
      {
        {
          printf("\nSTMT_EXEC;;9771\n");
error((char *)"internal error in shorten_name");
        }
      }
      printf("\nSTMT_EXEC;;9774\n");
if ((int)*(trunc + 1) == 0)
      {
        printf("\nSTMT_EXEC;;9776\n");
trunc--;
      }
    }
    {
      printf("\nSTMT_EXEC;;9780\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)trunc, (char const * /* __restrict  */)(z_suffix));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9782\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static int check_ofname(void)
{
  printf("\nFUNC_CALL;check_ofname();\n");
printf("\nSTMT_EXEC;;9787\n");
struct stat ostat;
  printf("\nSTMT_EXEC;;9788\n");
int *tmp;
  printf("\nSTMT_EXEC;;9789\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;9790\n");
int tmp___1;
  printf("\nSTMT_EXEC;;9791\n");
int tmp___2;
  printf("\nSTMT_EXEC;;9792\n");
int tmp___3;
  printf("\nSTMT_EXEC;;9793\n");
char const *tmp___4;
  printf("\nSTMT_EXEC;;9794\n");
int tmp___5;
  printf("\nSTMT_EXEC;;9795\n");
int tmp___6;
  printf("\nSTMT_EXEC;;9796\n");
char response[80];
  printf("\nSTMT_EXEC;;9797\n");
int tmp___7;
  printf("\nSTMT_EXEC;;9798\n");
int tmp___8;
  printf("\nSTMT_EXEC;;9799\n");
int tmp___10;
  printf("\nSTMT_EXEC;;9800\n");
unsigned short const **tmp___11;
  printf("\nSTMT_EXEC;;9801\n");
int tmp___12;
  printf("\nSTMT_EXEC;;9802\n");
void *__cil_tmp16;
  printf("\nSTMT_EXEC;;9803\n");
void *__cil_tmp17;
  printf("\nSTMT_EXEC;;9804\n");
char *__cil_tmp18;
  printf("\nSTMT_EXEC;;9805\n");
char *__cil_tmp19;
  printf("\nSTMT_EXEC;;9806\n");
char *__cil_tmp20;
  {
    {
      printf("\nSTMT_EXEC;;9809\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9810\n");
*tmp = 0;
    }
    {
      printf("\nSTMT_EXEC;;9813\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;9817\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___1 = stat((char const * /* __restrict  */)(ofname), (struct stat * /* __restrict  */)(&ostat));printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9819\n");
if (!(tmp___1 != 0))
        {
          printf("\nSTMT_EXEC;;9821\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;9824\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9826\n");
if (*tmp___0 != 36)
        {
          printf("\nSTMT_EXEC;;9828\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
        {
          printf("\nSTMT_EXEC;;9831\n");
shorten_name(ofname);
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;9836\n");
if (!decompress)
    {
      {
        printf("\nSTMT_EXEC;;9839\n");
tmp___3 = name_too_long(ofname, &ostat);
      }
      printf("\nSTMT_EXEC;;9841\n");
if (tmp___3)
      {
        {
          printf("\nSTMT_EXEC;;9844\n");
shorten_name(ofname);
          printf("\nSTMT_EXEC;;9845\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
tmp___2 = stat((char const * /* __restrict  */)(ofname), (struct stat * /* __restrict  */)(&ostat));printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9847\n");
if (tmp___2 != 0)
        {
          printf("\nSTMT_EXEC;;9849\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;9854\n");
tmp___6 = same_file(&istat, &ostat);
    }
    printf("\nSTMT_EXEC;;9856\n");
if (tmp___6)
    {
      {
        printf("\nSTMT_EXEC;;9859\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___5 = strcmp((char const *)(ifname), (char const *)(ofname));printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;9861\n");
if (tmp___5 == 0)
      {
        printf("\nSTMT_EXEC;;9863\n");
if (decompress)
        {
          printf("\nSTMT_EXEC;;9865\n");
tmp___4 = "de";
        }
        else
        {
          printf("\nSTMT_EXEC;;9869\n");
tmp___4 = "";
        }
        {
          printf("\nSTMT_EXEC;;9872\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: %s: cannot %scompress "
                                                   "onto itself\n",
                  progname, ifname, tmp___4);printf("\nFUNC_RETURN;;\n");

        }
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;9881\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s and %s are the same file\n", progname, ifname, ofname);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;9884\n");
exit_code = 1;
      printf("\nSTMT_EXEC;;9885\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;9887\n");
if (!force)
    {
      {
        printf("\nSTMT_EXEC;;9890\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(response), (char const * /* __restrict  */) "n");printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9891\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s already exists;", progname, ofname);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;9893\n");
if (foreground)
      {
        {
          printf("\nSTMT_EXEC;;9896\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___7 = fileno(stdin);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9897\n");
printf("\nFUNC_CALL;isatty(int);\n");
tmp___8 = isatty(tmp___7);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9899\n");
if (tmp___8)
        {
          {
            printf("\nSTMT_EXEC;;9902\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " do you wish to "
                                                                                        "overwrite (y or n)? ");printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9904\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
fflush(stderr);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9905\n");
printf("\nFUNC_CALL;fgets(char *__restrict,int,FILE *__restrict);\n");
fgets((char * /* __restrict  */)(response), (int)(sizeof(response) - 1UL), (FILE * /* __restrict  */) stdin);printf("\nFUNC_RETURN;;\n");

          }
        }
      }
      {
        printf("\nSTMT_EXEC;;9910\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___11 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;9912\n");
if ((int const) * (*tmp___11 + (int)response[0]) & 256)
      {
        printf("\nSTMT_EXEC;;9914\n");
tmp___10 = ((int)response[0] - 65) + 97;
      }
      else
      {
        printf("\nSTMT_EXEC;;9918\n");
tmp___10 = (int)response[0];
      }
      printf("\nSTMT_EXEC;;9920\n");
if (tmp___10 != 121)
      {
        {
          printf("\nSTMT_EXEC;;9923\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\tnot overwritten\n");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9925\n");
if (exit_code == 0)
        {
          printf("\nSTMT_EXEC;;9927\n");
exit_code = 2;
        }
        printf("\nSTMT_EXEC;;9929\n");
printf("\nFUNC_RETURN;;\n");
return (1);
      }
    }
    {
      printf("\nSTMT_EXEC;;9933\n");
printf("\nFUNC_CALL;chmod(const char *,__mode_t);\n");
chmod((char const *)(ofname), (__mode_t)511);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9934\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
tmp___12 = unlink((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9936\n");
if (tmp___12)
    {
      {
        printf("\nSTMT_EXEC;;9939\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: ", progname);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9940\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9941\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;9943\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    printf("\nSTMT_EXEC;;9945\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static void reset_times(char *name, struct stat *statb)
{
  printf("\nFUNC_CALL;reset_times(char *,struct stat *);\n");
printf("\nSTMT_EXEC;;9950\n");
struct utimbuf timep;
  printf("\nSTMT_EXEC;;9951\n");
int tmp;
  {
    {
      printf("\nSTMT_EXEC;;9954\n");
timep.actime = statb->st_atim.tv_sec;
      printf("\nSTMT_EXEC;;9955\n");
timep.modtime = statb->st_mtim.tv_sec;
      printf("\nSTMT_EXEC;;9956\n");
printf("\nFUNC_CALL;utime(const char *,const struct utimbuf *);\n");
tmp = utime((char const *)name, (struct utimbuf const *)(&timep));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9958\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;9960\n");
if (!((statb->st_mode & 61440U) == 16384U))
      {
        printf("\nSTMT_EXEC;;9962\n");
if (!quiet)
        {
          {
            printf("\nSTMT_EXEC;;9965\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: ", progname);printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;9968\n");
if (exit_code == 0)
        {
          printf("\nSTMT_EXEC;;9970\n");
exit_code = 2;
        }
        printf("\nSTMT_EXEC;;9972\n");
if (!quiet)
        {
          {
            printf("\nSTMT_EXEC;;9975\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

          }
        }
      }
    }
    printf("\nSTMT_EXEC;;9980\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void copy_stat(struct stat *ifstat)
{
  printf("\nFUNC_CALL;copy_stat(struct stat *);\n");
printf("\nSTMT_EXEC;;9985\n");
int tmp;
  printf("\nSTMT_EXEC;;9986\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;9988\n");
if (decompress)
    {
      printf("\nSTMT_EXEC;;9990\n");
if (time_stamp != 0L)
      {
        printf("\nSTMT_EXEC;;9992\n");
if (ifstat->st_mtim.tv_sec != time_stamp)
        {
          printf("\nSTMT_EXEC;;9994\n");
ifstat->st_mtim.tv_sec = time_stamp;
          printf("\nSTMT_EXEC;;9995\n");
if (verbose > 1)
          {
            {
              printf("\nSTMT_EXEC;;9998\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: time stamp restored\n", ofname);printf("\nFUNC_RETURN;;\n");

            }
          }
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;10005\n");
reset_times(ofname, ifstat);
      printf("\nSTMT_EXEC;;10006\n");
printf("\nFUNC_CALL;chmod(const char *,__mode_t);\n");
tmp = chmod((char const *)(ofname), ifstat->st_mode & 4095U);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10008\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;10010\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;10013\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: ", progname);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;10016\n");
if (exit_code == 0)
      {
        printf("\nSTMT_EXEC;;10018\n");
exit_code = 2;
      }
      printf("\nSTMT_EXEC;;10020\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;10023\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    {
      printf("\nSTMT_EXEC;;10028\n");
printf("\nFUNC_CALL;chown(const char *,__uid_t,__gid_t);\n");
chown((char const *)(ofname), ifstat->st_uid, ifstat->st_gid);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10029\n");
remove_ofname = 0;
      printf("\nSTMT_EXEC;;10030\n");
printf("\nFUNC_CALL;chmod(const char *,__mode_t);\n");
chmod((char const *)(ifname), (__mode_t)511);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10031\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
tmp___0 = unlink((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10033\n");
if (tmp___0)
    {
      printf("\nSTMT_EXEC;;10035\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;10038\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: ", progname);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;10041\n");
if (exit_code == 0)
      {
        printf("\nSTMT_EXEC;;10043\n");
exit_code = 2;
      }
      printf("\nSTMT_EXEC;;10045\n");
if (!quiet)
      {
        {
          printf("\nSTMT_EXEC;;10048\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)(ifname));printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;10052\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void treat_dir(char *dir)
{
  printf("\nFUNC_CALL;treat_dir(char *);\n");
printf("\nSTMT_EXEC;;10057\n");
dir_type *dp;
  printf("\nSTMT_EXEC;;10058\n");
DIR *dirp;
  printf("\nSTMT_EXEC;;10059\n");
char nbuf[1024];
  printf("\nSTMT_EXEC;;10060\n");
int len;
  printf("\nSTMT_EXEC;;10061\n");
int tmp;
  printf("\nSTMT_EXEC;;10062\n");
int tmp___0;
  printf("\nSTMT_EXEC;;10063\n");
int tmp___1;
  printf("\nSTMT_EXEC;;10064\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;10065\n");
void *__cil_tmp11;
  {
    {
      printf("\nSTMT_EXEC;;10068\n");
printf("\nFUNC_CALL;opendir(const char *);\n");
dirp = opendir((char const *)dir);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10070\n");
if ((unsigned long)dirp == (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;10073\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s unreadable\n", progname, dir);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10074\n");
exit_code = 1;
      }
      printf("\nSTMT_EXEC;;10076\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;10079\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;10083\n");
printf("\nFUNC_CALL;readdir(DIR *);\n");
dp = readdir(dirp);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;10085\n");
if (!((unsigned long)dp != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;10087\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;10090\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp = strcmp((char const *)(dp->d_name), ".");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;10092\n");
if (tmp == 0)
        {
          printf("\nSTMT_EXEC;;10094\n");
goto while_continue;
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;10099\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___0 = strcmp((char const *)(dp->d_name), "..");printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;10101\n");
if (tmp___0 == 0)
          {
            printf("\nSTMT_EXEC;;10103\n");
goto while_continue;
          }
        }
        {
          printf("\nSTMT_EXEC;;10107\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
len = (int)strlen((char const *)dir);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10108\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___2 = strlen((char const *)(dp->d_name));printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;10110\n");
if ((len + (int)tmp___2) + 1 < 1023)
        {
          {
            printf("\nSTMT_EXEC;;10113\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(nbuf), (char const * /* __restrict  */)dir);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;10115\n");
if (len != 0)
          {
            printf("\nSTMT_EXEC;;10117\n");
tmp___1 = len;
            printf("\nSTMT_EXEC;;10118\n");
len++;
            printf("\nSTMT_EXEC;;10119\n");
nbuf[tmp___1] = (char)'/';
          }
          {
            printf("\nSTMT_EXEC;;10122\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)(nbuf + len), (char const * /* __restrict  */)(dp->d_name));printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10123\n");
treat_file(nbuf);
          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;10129\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s/%s: pathname too long\n", progname, dir, dp->d_name);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10130\n");
exit_code = 1;
          }
        }
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;10137\n");
printf("\nFUNC_CALL;closedir(DIR *);\n");
closedir(dirp);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10139\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static int in_exit = 0;
static void do_exit(int exitcode)
{
  printf("\nFUNC_CALL;do_exit(int);\n");
{
    printf("\nSTMT_EXEC;;10146\n");
if (in_exit)
    {
      {
        printf("\nSTMT_EXEC;;10149\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitcode);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;10152\n");
in_exit = 1;
    printf("\nSTMT_EXEC;;10153\n");
if ((unsigned long)env != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;10156\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)env);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10157\n");
env = (char *)((void *)0);
      }
    }
    printf("\nSTMT_EXEC;;10160\n");
if ((unsigned long)args != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;10163\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)((char *)args));printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10164\n");
args = (char **)((void *)0);
      }
    }
    {
      printf("\nSTMT_EXEC;;10168\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitcode);printf("\nFUNC_RETURN;;\n");

    }
  }
printf("\nFUNC_RETURN;;\n");
}
void abort_gzip(void)
{
  printf("\nFUNC_CALL;abort_gzip();\n");
{
    printf("\nSTMT_EXEC;;10175\n");
if (remove_ofname)
    {
      {
        printf("\nSTMT_EXEC;;10178\n");
printf("\nFUNC_CALL;close(int);\n");
close(ofd);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10179\n");
printf("\nFUNC_CALL;unlink(const char *);\n");
unlink((char const *)(ofname));printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;10183\n");
do_exit(1);
    }
    printf("\nSTMT_EXEC;;10185\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}