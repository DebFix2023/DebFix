#include "argv-fuzz-inl.h"
typedef int Int32;
typedef unsigned char Bool;
typedef unsigned char UChar;
typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
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
struct __anonstruct_bz_stream_26
{
  char *next_in;
  unsigned int avail_in;
  unsigned int total_in_lo32;
  unsigned int total_in_hi32;
  char *next_out;
  unsigned int avail_out;
  unsigned int total_out_lo32;
  unsigned int total_out_hi32;
  void *state;
  void *(*bzalloc)(void *, int, int);
  void (*bzfree)(void *, void *);
  void *opaque;
};
typedef struct __anonstruct_bz_stream_26 bz_stream;
typedef unsigned int UInt32;
typedef unsigned short UInt16;
struct __anonstruct_DState_28
{
  bz_stream *strm;
  Int32 state;
  UChar state_out_ch;
  Int32 state_out_len;
  Bool blockRandomised;
  Int32 rNToGo;
  Int32 rTPos;
  UInt32 bsBuff;
  Int32 bsLive;
  Int32 blockSize100k;
  Bool smallDecompress;
  Int32 currBlockNo;
  Int32 verbosity;
  Int32 origPtr;
  UInt32 tPos;
  Int32 k0;
  Int32 unzftab[256];
  Int32 nblock_used;
  Int32 cftab[257];
  Int32 cftabCopy[257];
  UInt32 *tt;
  UInt16 *ll16;
  UChar *ll4;
  UInt32 storedBlockCRC;
  UInt32 storedCombinedCRC;
  UInt32 calculatedBlockCRC;
  UInt32 calculatedCombinedCRC;
  Int32 nInUse;
  Bool inUse[256];
  Bool inUse16[16];
  UChar seqToUnseq[256];
  UChar mtfa[4096];
  Int32 mtfbase[16];
  UChar selector[18002];
  UChar selectorMtf[18002];
  UChar len[6][258];
  Int32 limit[6][258];
  Int32 base[6][258];
  Int32 perm[6][258];
  Int32 minLens[6];
  Int32 save_i;
  Int32 save_j;
  Int32 save_t;
  Int32 save_alphaSize;
  Int32 save_nGroups;
  Int32 save_nSelectors;
  Int32 save_EOB;
  Int32 save_groupNo;
  Int32 save_groupPos;
  Int32 save_nextSym;
  Int32 save_nblockMAX;
  Int32 save_nblock;
  Int32 save_es;
  Int32 save_N;
  Int32 save_curr;
  Int32 save_zt;
  Int32 save_zn;
  Int32 save_zvec;
  Int32 save_zj;
  Int32 save_gSel;
  Int32 save_gMinlen;
  Int32 *save_gLimit;
  Int32 *save_gBase;
  Int32 *save_gPerm;
};
typedef struct __anonstruct_DState_28 DState;
struct __anonstruct_EState_27
{
  bz_stream *strm;
  Int32 mode;
  Int32 state;
  UInt32 avail_in_expect;
  UInt32 *arr1;
  UInt32 *arr2;
  UInt32 *ftab;
  Int32 origPtr;
  UInt32 *ptr;
  UChar *block;
  UInt16 *mtfv;
  UChar *zbits;
  Int32 workFactor;
  UInt32 state_in_ch;
  Int32 state_in_len;
  Int32 rNToGo;
  Int32 rTPos;
  Int32 nblock;
  Int32 nblockMAX;
  Int32 numZ;
  Int32 state_out_pos;
  Int32 nInUse;
  Bool inUse[256];
  UChar unseqToSeq[256];
  UInt32 bsBuff;
  Int32 bsLive;
  UInt32 blockCRC;
  UInt32 combinedCRC;
  Int32 verbosity;
  Int32 blockNo;
  Int32 blockSize100k;
  Int32 nMTF;
  Int32 mtfFreq[258];
  UChar selector[18002];
  UChar selectorMtf[18002];
  UChar len[6][258];
  Int32 code[6][258];
  Int32 rfreq[6][258];
  UInt32 len_pack[258][4];
};
typedef struct __anonstruct_EState_27 EState;
typedef void BZFILE;
typedef char Char;
struct __anonstruct_bzFile_29
{
  FILE *handle;
  Char buf[5000];
  Int32 bufN;
  Bool writing;
  bz_stream strm;
  Int32 lastErr;
  Bool initialisedOk;
};
typedef struct __anonstruct_bzFile_29 bzFile;
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
struct utimbuf
{
  __time_t actime;
  __time_t modtime;
};
typedef short Int16;
typedef int IntNative;
struct __anonstruct_UInt64_56
{
  UChar b[8];
};
typedef struct __anonstruct_UInt64_56 UInt64;
struct zzzz
{
  Char *name;
  struct zzzz *link;
};
typedef struct zzzz Cell;


void BZ2_bz__AssertH__fail(int errcode);
void BZ2_hbAssignCodes(Int32 *code, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize);
void BZ2_hbMakeCodeLengths(UChar *len, Int32 *freq, Int32 alphaSize, Int32 maxLen);
void BZ2_hbCreateDecodeTables(Int32 *limit, Int32 *base, Int32 *perm, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize);
void BZ2_hbMakeCodeLengths(UChar *len, Int32 *freq, Int32 alphaSize, Int32 maxLen)
{
  printf("\nFUNC_CALL;BZ2_hbMakeCodeLengths(UChar *,Int32 *,Int32,Int32);\n");
printf("\nSTMT_EXEC;;252\n");
Int32 nNodes;
  printf("\nSTMT_EXEC;;253\n");
Int32 nHeap;
  printf("\nSTMT_EXEC;;254\n");
Int32 n1;
  printf("\nSTMT_EXEC;;255\n");
Int32 n2;
  printf("\nSTMT_EXEC;;256\n");
Int32 i;
  printf("\nSTMT_EXEC;;257\n");
Int32 j;
  printf("\nSTMT_EXEC;;258\n");
Int32 k;

  printf("\nSTMT_EXEC;;260\n");
Int32 heap[260];
  printf("\nSTMT_EXEC;;261\n");
Int32 weight[516];
  printf("\nSTMT_EXEC;;262\n");
Int32 parent[516];
  printf("\nSTMT_EXEC;;263\n");
int tmp;
  printf("\nSTMT_EXEC;;264\n");
Int32 zz;
  printf("\nSTMT_EXEC;;265\n");
Int32 tmp___0;
  printf("\nSTMT_EXEC;;266\n");
Int32 zz___0;
  printf("\nSTMT_EXEC;;267\n");
Int32 yy;
  printf("\nSTMT_EXEC;;268\n");
Int32 tmp___1;
  printf("\nSTMT_EXEC;;269\n");
Int32 zz___1;
  printf("\nSTMT_EXEC;;270\n");
Int32 yy___0;
  printf("\nSTMT_EXEC;;271\n");
Int32 tmp___2;
  printf("\nSTMT_EXEC;;272\n");
Int32 tmp___3;
  printf("\nSTMT_EXEC;;273\n");
int tmp___4;
  printf("\nSTMT_EXEC;;274\n");
Int32 zz___2;
  printf("\nSTMT_EXEC;;275\n");
Int32 tmp___5;



  {
    printf("\nSTMT_EXEC;;280\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;282\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;285\n");
if (!(i < alphaSize))
        {
          printf("\nSTMT_EXEC;;287\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;289\n");
if (*(freq + i) == 0)
        {
          printf("\nSTMT_EXEC;;291\n");
tmp = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;295\n");
tmp = *(freq + i);
        }
        printf("\nSTMT_EXEC;;297\n");
weight[i + 1] = tmp << 8;
        printf("\nSTMT_EXEC;;298\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    {

      {
        ;
        printf("\nSTMT_EXEC;;306\n");
nNodes = alphaSize;
        printf("\nSTMT_EXEC;;307\n");
nHeap = 0;
        printf("\nSTMT_EXEC;;308\n");
heap[0] = 0;
        printf("\nSTMT_EXEC;;309\n");
weight[0] = 0;

        printf("\nSTMT_EXEC;;311\n");
i = 1;
        {
          printf("\nSTMT_EXEC;;313\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;316\n");
if (!(i <= alphaSize))
            {
              printf("\nSTMT_EXEC;;318\n");
goto while_break___1;
            }

            printf("\nSTMT_EXEC;;321\n");
nHeap++;
            printf("\nSTMT_EXEC;;322\n");
heap[nHeap] = i;
            printf("\nSTMT_EXEC;;323\n");
zz = nHeap;
            printf("\nSTMT_EXEC;;324\n");
tmp___0 = heap[zz];
            {
              printf("\nSTMT_EXEC;;326\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;329\n");
if (!(weight[tmp___0] < weight[heap[zz >> 1]]))
                {
                  printf("\nSTMT_EXEC;;331\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;333\n");
heap[zz] = heap[zz >> 1];
                printf("\nSTMT_EXEC;;334\n");
zz >>= 1;
              }
            while_break___2: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;338\n");
heap[zz] = tmp___0;
            printf("\nSTMT_EXEC;;339\n");
i++;
          }
        while_break___1: /* CIL Label */;
        }






        {
          printf("\nSTMT_EXEC;;350\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;353\n");
if (!(nHeap > 1))
            {
              printf("\nSTMT_EXEC;;355\n");
goto while_break___3;
            }
            printf("\nSTMT_EXEC;;357\n");
n1 = heap[1];
            printf("\nSTMT_EXEC;;358\n");
heap[1] = heap[nHeap];
            printf("\nSTMT_EXEC;;359\n");
nHeap--;
            printf("\nSTMT_EXEC;;360\n");
zz___0 = 1;
            printf("\nSTMT_EXEC;;361\n");
tmp___1 = heap[zz___0];
            {
              printf("\nSTMT_EXEC;;363\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;366\n");
yy = zz___0 << 1;
                printf("\nSTMT_EXEC;;367\n");
if (yy > nHeap)
                {
                  printf("\nSTMT_EXEC;;369\n");
goto while_break___4;
                }

                {
                  printf("\nSTMT_EXEC;;373\n");
if (weight[heap[yy + 1]] < weight[heap[yy]])
                  {
                    printf("\nSTMT_EXEC;;375\n");
yy++;
                  }
                }
                printf("\nSTMT_EXEC;;378\n");
if (weight[tmp___1] < weight[heap[yy]])
                {
                  printf("\nSTMT_EXEC;;380\n");
goto while_break___4;
                }
                printf("\nSTMT_EXEC;;382\n");
heap[zz___0] = heap[yy];
                printf("\nSTMT_EXEC;;383\n");
zz___0 = yy;
              }
            while_break___4: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;387\n");
heap[zz___0] = tmp___1;
            printf("\nSTMT_EXEC;;388\n");
n2 = heap[1];
            printf("\nSTMT_EXEC;;389\n");
heap[1] = heap[nHeap];
            printf("\nSTMT_EXEC;;390\n");
nHeap--;
            printf("\nSTMT_EXEC;;391\n");
zz___1 = 1;
            printf("\nSTMT_EXEC;;392\n");
tmp___2 = heap[zz___1];
            {
              printf("\nSTMT_EXEC;;394\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;397\n");
yy___0 = zz___1 << 1;
                printf("\nSTMT_EXEC;;398\n");
if (yy___0 > nHeap)
                {
                  printf("\nSTMT_EXEC;;400\n");
goto while_break___5;
                }

                {
                  printf("\nSTMT_EXEC;;404\n");
if (weight[heap[yy___0 + 1]] < weight[heap[yy___0]])
                  {
                    printf("\nSTMT_EXEC;;406\n");
yy___0++;
                  }
                }
                printf("\nSTMT_EXEC;;409\n");
if (weight[tmp___2] < weight[heap[yy___0]])
                {
                  printf("\nSTMT_EXEC;;411\n");
goto while_break___5;
                }
                printf("\nSTMT_EXEC;;413\n");
heap[zz___1] = heap[yy___0];
                printf("\nSTMT_EXEC;;414\n");
zz___1 = yy___0;
              }
            while_break___5: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;418\n");
heap[zz___1] = tmp___2;
            printf("\nSTMT_EXEC;;419\n");
nNodes++;
            printf("\nSTMT_EXEC;;420\n");
tmp___3 = nNodes;
            printf("\nSTMT_EXEC;;421\n");
parent[n2] = tmp___3;
            printf("\nSTMT_EXEC;;422\n");
parent[n1] = tmp___3;





            {
              printf("\nSTMT_EXEC;;429\n");
tmp___4 = weight[n2] & 255;
            }
            printf("\nSTMT_EXEC;;431\n");
weight[nNodes] = (Int32)((((unsigned int)weight[n1] & 4294967040U) + ((unsigned int)weight[n2] & 4294967040U)) | (unsigned int)(1 + tmp___4));
            printf("\nSTMT_EXEC;;432\n");
parent[nNodes] = -1;
            printf("\nSTMT_EXEC;;433\n");
nHeap++;
            printf("\nSTMT_EXEC;;434\n");
heap[nHeap] = nNodes;
            printf("\nSTMT_EXEC;;435\n");
zz___2 = nHeap;
            printf("\nSTMT_EXEC;;436\n");
tmp___5 = heap[zz___2];
            {
              printf("\nSTMT_EXEC;;438\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;441\n");
if (!(weight[tmp___5] < weight[heap[zz___2 >> 1]]))
                {
                  printf("\nSTMT_EXEC;;443\n");
goto while_break___6;
                }
                printf("\nSTMT_EXEC;;445\n");
heap[zz___2] = heap[zz___2 >> 1];
                printf("\nSTMT_EXEC;;446\n");
zz___2 >>= 1;
              }
            while_break___6: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;450\n");
heap[zz___2] = tmp___5;
          }
        while_break___3: /* CIL Label */;
        }







        printf("\nSTMT_EXEC;;461\n");
i = 1;
        {
          printf("\nSTMT_EXEC;;463\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;466\n");
if (!(i <= alphaSize))
            {
              printf("\nSTMT_EXEC;;468\n");
goto while_break___7;
            }
            printf("\nSTMT_EXEC;;470\n");
j = 0;
            printf("\nSTMT_EXEC;;471\n");
k = i;
            {
              printf("\nSTMT_EXEC;;473\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;476\n");
if (!(parent[k] >= 0))
                {
                  printf("\nSTMT_EXEC;;478\n");
goto while_break___8;
                }
                printf("\nSTMT_EXEC;;480\n");
k = parent[k];
                printf("\nSTMT_EXEC;;481\n");
j++;
              }
            while_break___8: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;485\n");
*(len + (i - 1)) = (UChar)j;




            printf("\nSTMT_EXEC;;490\n");
i++;
          }
        while_break___7: /* CIL Label */;
        }



















      };
    }



  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_hbAssignCodes(Int32 *code, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize)
{
  printf("\nFUNC_CALL;BZ2_hbAssignCodes(Int32 *,UChar *,Int32,Int32,Int32);\n");
printf("\nSTMT_EXEC;;522\n");
Int32 n;
  printf("\nSTMT_EXEC;;523\n");
Int32 vec;
  printf("\nSTMT_EXEC;;524\n");
Int32 i;
  {
    printf("\nSTMT_EXEC;;526\n");
vec = 0;
    printf("\nSTMT_EXEC;;527\n");
n = minLen;
    {
      printf("\nSTMT_EXEC;;529\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;532\n");
if (!(n <= maxLen))
        {
          printf("\nSTMT_EXEC;;534\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;536\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;538\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;541\n");
if (!(i < alphaSize))
            {
              printf("\nSTMT_EXEC;;543\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;545\n");
if ((int)*(length + i) == n)
            {
              printf("\nSTMT_EXEC;;547\n");
*(code + i) = vec;
              printf("\nSTMT_EXEC;;548\n");
vec++;
            }
            printf("\nSTMT_EXEC;;550\n");
i++;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;554\n");
vec <<= 1;
        printf("\nSTMT_EXEC;;555\n");
n++;
      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_hbCreateDecodeTables(Int32 *limit, Int32 *base, Int32 *perm, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize)
{
  printf("\nFUNC_CALL;BZ2_hbCreateDecodeTables(Int32 *,Int32 *,Int32 *,UChar *,Int32,Int32,Int32);\n");
printf("\nSTMT_EXEC;;564\n");
Int32 pp;
  printf("\nSTMT_EXEC;;565\n");
Int32 i;
  printf("\nSTMT_EXEC;;566\n");
Int32 j;
  printf("\nSTMT_EXEC;;567\n");
Int32 vec;
  {
    printf("\nSTMT_EXEC;;569\n");
pp = 0;
    printf("\nSTMT_EXEC;;570\n");
i = minLen;
    {
      printf("\nSTMT_EXEC;;572\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;575\n");
if (!(i <= maxLen))
        {
          printf("\nSTMT_EXEC;;577\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;579\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;581\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;584\n");
if (!(j < alphaSize))
            {
              printf("\nSTMT_EXEC;;586\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;588\n");
if ((int)*(length + j) == i)
            {
              printf("\nSTMT_EXEC;;590\n");
*(perm + pp) = j;
              printf("\nSTMT_EXEC;;591\n");
pp++;
            }
            printf("\nSTMT_EXEC;;593\n");
j++;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;597\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;601\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;603\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;606\n");
if (!(i < 23))
        {
          printf("\nSTMT_EXEC;;608\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;610\n");
*(base + i) = 0;
        printf("\nSTMT_EXEC;;611\n");
i++;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;615\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;617\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;620\n");
if (!(i < alphaSize))
        {
          printf("\nSTMT_EXEC;;622\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;624\n");
(*(base + ((int)*(length + i) + 1)))++;
        printf("\nSTMT_EXEC;;625\n");
i++;
      }
    while_break___2: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;629\n");
i = 1;
    {
      printf("\nSTMT_EXEC;;631\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;634\n");
if (!(i < 23))
        {
          printf("\nSTMT_EXEC;;636\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;638\n");
*(base + i) += *(base + (i - 1));
        printf("\nSTMT_EXEC;;639\n");
i++;
      }
    while_break___3: /* CIL Label */;
    }














    printf("\nSTMT_EXEC;;657\n");
vec = 0;
    printf("\nSTMT_EXEC;;658\n");
i = minLen;
    {
      printf("\nSTMT_EXEC;;660\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;663\n");
if (!(i <= maxLen))
        {
          printf("\nSTMT_EXEC;;665\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;667\n");
vec += *(base + (i + 1)) - *(base + i);
        printf("\nSTMT_EXEC;;668\n");
*(limit + i) = vec - 1;
        printf("\nSTMT_EXEC;;669\n");
vec <<= 1;
        printf("\nSTMT_EXEC;;670\n");
i++;
      }
    while_break___5: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;674\n");
i = minLen + 1;
    {
      printf("\nSTMT_EXEC;;676\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;679\n");
if (!(i <= maxLen))
        {
          printf("\nSTMT_EXEC;;681\n");
goto while_break___6;
        }
        printf("\nSTMT_EXEC;;683\n");
*(base + i) = ((*(limit + (i - 1)) + 1) << 1) - *(base + i);
        printf("\nSTMT_EXEC;;684\n");
i++;
      }
    while_break___6: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
Int32 BZ2_indexIntoF(Int32 indx, Int32 *cftab);
Int32 BZ2_decompress(DState *s);
static void makeMaps_d(DState *s)
{
  printf("\nFUNC_CALL;makeMaps_d(DState *);\n");
printf("\nSTMT_EXEC;;697\n");
Int32 i;
  {
    printf("\nSTMT_EXEC;;699\n");
s->nInUse = 0;
    printf("\nSTMT_EXEC;;700\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;702\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;705\n");
if (!(i < 256))
        {
          printf("\nSTMT_EXEC;;707\n");
goto while_break;
        }

        {
          printf("\nSTMT_EXEC;;711\n");
s->seqToUnseq[s->nInUse] = (UChar)i;
          printf("\nSTMT_EXEC;;712\n");
(s->nInUse)++;
        }
        printf("\nSTMT_EXEC;;714\n");
i++;
      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
Int32 BZ2_decompress(DState *s)
{
  printf("\nFUNC_CALL;BZ2_decompress(DState *);\n");
printf("\nSTMT_EXEC;;723\n");
UChar uc;
  printf("\nSTMT_EXEC;;724\n");
Int32 retVal;
  printf("\nSTMT_EXEC;;725\n");
Int32 minLen;
  printf("\nSTMT_EXEC;;726\n");
Int32 maxLen;
  printf("\nSTMT_EXEC;;727\n");
bz_stream *strm;
  printf("\nSTMT_EXEC;;728\n");
Int32 i;
  printf("\nSTMT_EXEC;;729\n");
Int32 j;
  printf("\nSTMT_EXEC;;730\n");
Int32 t;
  printf("\nSTMT_EXEC;;731\n");
Int32 alphaSize;
  printf("\nSTMT_EXEC;;732\n");
Int32 nGroups;
  printf("\nSTMT_EXEC;;733\n");
Int32 nSelectors;
  printf("\nSTMT_EXEC;;734\n");
Int32 EOB;
  printf("\nSTMT_EXEC;;735\n");
Int32 groupNo;
  printf("\nSTMT_EXEC;;736\n");
Int32 groupPos;
  printf("\nSTMT_EXEC;;737\n");
Int32 nextSym;
  printf("\nSTMT_EXEC;;738\n");
Int32 nblockMAX;
  printf("\nSTMT_EXEC;;739\n");
Int32 nblock;
  printf("\nSTMT_EXEC;;740\n");
Int32 es;
  printf("\nSTMT_EXEC;;741\n");
Int32 N;
  printf("\nSTMT_EXEC;;742\n");
Int32 curr;

  printf("\nSTMT_EXEC;;744\n");
Int32 zn;
  printf("\nSTMT_EXEC;;745\n");
Int32 zvec;
  printf("\nSTMT_EXEC;;746\n");
Int32 zj;
  printf("\nSTMT_EXEC;;747\n");
Int32 gSel;
  printf("\nSTMT_EXEC;;748\n");
Int32 gMinlen;
  printf("\nSTMT_EXEC;;749\n");
Int32 *gLimit;
  printf("\nSTMT_EXEC;;750\n");
Int32 *gBase;
  printf("\nSTMT_EXEC;;751\n");
Int32 *gPerm;



  printf("\nSTMT_EXEC;;755\n");
UInt32 v___2;
  printf("\nSTMT_EXEC;;756\n");
UInt32 v___3;





  printf("\nSTMT_EXEC;;762\n");
UInt32 v___9;
  printf("\nSTMT_EXEC;;763\n");
UInt32 v___10;
  printf("\nSTMT_EXEC;;764\n");
UInt32 v___11;
  printf("\nSTMT_EXEC;;765\n");
UInt32 v___12;
  printf("\nSTMT_EXEC;;766\n");
UInt32 v___13;
  printf("\nSTMT_EXEC;;767\n");
UInt32 v___14;
  printf("\nSTMT_EXEC;;768\n");
UInt32 v___15;
  printf("\nSTMT_EXEC;;769\n");
UInt32 v___16;


  printf("\nSTMT_EXEC;;772\n");
UInt32 v___19;
  printf("\nSTMT_EXEC;;773\n");
UInt32 v___20;
  printf("\nSTMT_EXEC;;774\n");
UInt32 v___21;
  printf("\nSTMT_EXEC;;775\n");
UChar pos[6];
  printf("\nSTMT_EXEC;;776\n");
UChar tmp;
  printf("\nSTMT_EXEC;;777\n");
UChar v___22;
  printf("\nSTMT_EXEC;;778\n");
UInt32 v___23;
  printf("\nSTMT_EXEC;;779\n");
UInt32 v___24;
  printf("\nSTMT_EXEC;;780\n");
UInt32 v___25;
  printf("\nSTMT_EXEC;;781\n");
Int32 ii;
  printf("\nSTMT_EXEC;;782\n");
Int32 jj;
  printf("\nSTMT_EXEC;;783\n");
Int32 kk;
  printf("\nSTMT_EXEC;;784\n");
UInt32 v___26;
  printf("\nSTMT_EXEC;;785\n");
UInt32 v___27;
  printf("\nSTMT_EXEC;;786\n");
UInt32 v___28;
  printf("\nSTMT_EXEC;;787\n");
UInt32 v___29;



  printf("\nSTMT_EXEC;;791\n");
Int32 pp;


  printf("\nSTMT_EXEC;;794\n");
UInt32 nn;

  printf("\nSTMT_EXEC;;796\n");
UInt32 v___30;
  printf("\nSTMT_EXEC;;797\n");
UInt32 v___31;








  printf("\nSTMT_EXEC;;806\n");
UInt32 v___37;
  printf("\nSTMT_EXEC;;807\n");
UInt32 v___38;
  printf("\nSTMT_EXEC;;808\n");
UInt32 v___39;
  printf("\nSTMT_EXEC;;809\n");
UInt32 v___40;

  {
    printf("\nSTMT_EXEC;;812\n");
strm = s->strm;

































    printf("\nSTMT_EXEC;;846\n");
EOB = s->save_EOB;
    printf("\nSTMT_EXEC;;847\n");
groupNo = s->save_groupNo;
    printf("\nSTMT_EXEC;;848\n");
groupPos = s->save_groupPos;


    printf("\nSTMT_EXEC;;851\n");
nblock = s->save_nblock;
    printf("\nSTMT_EXEC;;852\n");
es = s->save_es;
    printf("\nSTMT_EXEC;;853\n");
N = s->save_N;


    printf("\nSTMT_EXEC;;856\n");
zn = s->save_zn;
    printf("\nSTMT_EXEC;;857\n");
zvec = s->save_zvec;


    printf("\nSTMT_EXEC;;860\n");
gMinlen = s->save_gMinlen;
    printf("\nSTMT_EXEC;;861\n");
gLimit = s->save_gLimit;
    printf("\nSTMT_EXEC;;862\n");
gBase = s->save_gBase;
    printf("\nSTMT_EXEC;;863\n");
gPerm = s->save_gPerm;

    {
















      printf("\nSTMT_EXEC;;882\n");
if (s->state == 14)
      {
        printf("\nSTMT_EXEC;;884\n");
goto case_14;
      }




























































































      printf("\nSTMT_EXEC;;978\n");
if (s->state == 38)
      {
        printf("\nSTMT_EXEC;;980\n");
goto case_38;
      }
      printf("\nSTMT_EXEC;;982\n");
if (s->state == 39)
      {
        printf("\nSTMT_EXEC;;984\n");
goto case_39;
      }
      printf("\nSTMT_EXEC;;986\n");
if (s->state == 40)
      {
        printf("\nSTMT_EXEC;;988\n");
goto case_40;
      }
      printf("\nSTMT_EXEC;;990\n");
if (s->state == 41)
      {
        printf("\nSTMT_EXEC;;992\n");
goto case_41;
      }

      {{;























































      printf("\nSTMT_EXEC;;1051\n");
((s->strm)->next_in)++;
      printf("\nSTMT_EXEC;;1052\n");
((s->strm)->avail_in)--;




    }
  }



  {

    ;





















    printf("\nSTMT_EXEC;;1086\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1087\n");
((s->strm)->avail_in)--;




  }




  {

    ;





















    printf("\nSTMT_EXEC;;1121\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1122\n");
((s->strm)->avail_in)--;




  }










  {
    printf("\nSTMT_EXEC;;1139\n");
while (1)
    {
      ;
      printf("\nSTMT_EXEC;;1142\n");
if (s->bsLive >= 8)
      {
        printf("\nSTMT_EXEC;;1144\n");
v___2 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
        printf("\nSTMT_EXEC;;1145\n");
s->bsLive -= 8;
        printf("\nSTMT_EXEC;;1146\n");
s->blockSize100k = (Int32)v___2;
        printf("\nSTMT_EXEC;;1147\n");
goto while_break___2;
      }





      printf("\nSTMT_EXEC;;1154\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
      printf("\nSTMT_EXEC;;1155\n");
s->bsLive += 8;
      printf("\nSTMT_EXEC;;1156\n");
((s->strm)->next_in)++;
      printf("\nSTMT_EXEC;;1157\n");
((s->strm)->avail_in)--;





    }
  while_break___2: /* CIL Label */;
  }

  {



































    printf("\nSTMT_EXEC;;1203\n");
s->tt = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)(s->blockSize100k * 100000) * sizeof(Int32)), 1);






  }
case_14: /* CIL Label */
  {
printf("\nSTMT_EXEC;;1212\n");
s->state = 14;
}

  {
    printf("\nSTMT_EXEC;;1214\n");
while (1)
    {
      ;
      printf("\nSTMT_EXEC;;1217\n");
if (s->bsLive >= 8)
      {
        printf("\nSTMT_EXEC;;1219\n");
v___3 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
        printf("\nSTMT_EXEC;;1220\n");
s->bsLive -= 8;
        printf("\nSTMT_EXEC;;1221\n");
uc = (UChar)v___3;
        printf("\nSTMT_EXEC;;1222\n");
goto while_break___3;
      }





      printf("\nSTMT_EXEC;;1229\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
      printf("\nSTMT_EXEC;;1230\n");
s->bsLive += 8;
      printf("\nSTMT_EXEC;;1231\n");
((s->strm)->next_in)++;
      printf("\nSTMT_EXEC;;1232\n");
((s->strm)->avail_in)--;





    }
  while_break___3: /* CIL Label */;
  }
  printf("\nSTMT_EXEC;;1241\n");
if ((int)uc == 23)
  {
    printf("\nSTMT_EXEC;;1243\n");
goto endhdr_2;
  }

  {

    ;
    printf("\nSTMT_EXEC;;1249\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1250\n");
((s->strm)->avail_in)--;
  }


  {

    ;
    printf("\nSTMT_EXEC;;1257\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1258\n");
((s->strm)->avail_in)--;
  }
  {

    ;
    printf("\nSTMT_EXEC;;1263\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1264\n");
((s->strm)->avail_in)--;
  }
  {

    ;
    printf("\nSTMT_EXEC;;1269\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1270\n");
((s->strm)->avail_in)--;
  }
  {
    ;
    printf("\nSTMT_EXEC;;1274\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1275\n");
((s->strm)->avail_in)--;
  }
  {{;
  printf("\nSTMT_EXEC;;1278\n");
((s->strm)->next_in)++;
  printf("\nSTMT_EXEC;;1279\n");
((s->strm)->avail_in)--;
}
}
{
  ;
  {
    printf("\nSTMT_EXEC;;1285\n");
s->bsLive -= 8;


  }




}
{
  ;
  {
    printf("\nSTMT_EXEC;;1297\n");
s->bsLive -= 8;
  }
}
{
  ;
  {
    printf("\nSTMT_EXEC;;1303\n");
s->bsLive -= 8;
  }
}
{
  printf("\nSTMT_EXEC;;1307\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;1310\n");
if (s->bsLive >= 1)
    {
      printf("\nSTMT_EXEC;;1312\n");
(s->bsLive)--;
      printf("\nSTMT_EXEC;;1313\n");
goto while_break___13;
    }
    printf("\nSTMT_EXEC;;1315\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    printf("\nSTMT_EXEC;;1316\n");
s->bsLive += 8;
    printf("\nSTMT_EXEC;;1317\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1318\n");
((s->strm)->avail_in)--;
























































































































































































































































































































  }
while_break___13: /* CIL Label */;
}
printf("\nSTMT_EXEC;;1634\n");
s->origPtr = 0;


{

  ;


  {
    printf("\nSTMT_EXEC;;1643\n");
v___14 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
    printf("\nSTMT_EXEC;;1644\n");
s->bsLive -= 8;
    printf("\nSTMT_EXEC;;1645\n");
uc = (UChar)v___14;

  }
















}
printf("\nSTMT_EXEC;;1665\n");
s->origPtr = (s->origPtr << 8) | (Int32)uc;


{
  printf("\nSTMT_EXEC;;1669\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;1672\n");
if (s->bsLive >= 8)
    {
      printf("\nSTMT_EXEC;;1674\n");
v___15 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
      printf("\nSTMT_EXEC;;1675\n");
s->bsLive -= 8;
      printf("\nSTMT_EXEC;;1676\n");
uc = (UChar)v___15;
      printf("\nSTMT_EXEC;;1677\n");
goto while_break___15;
    }





    printf("\nSTMT_EXEC;;1684\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    printf("\nSTMT_EXEC;;1685\n");
s->bsLive += 8;
    printf("\nSTMT_EXEC;;1686\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1687\n");
((s->strm)->avail_in)--;





  }
while_break___15: /* CIL Label */;
}
printf("\nSTMT_EXEC;;1696\n");
s->origPtr = (s->origPtr << 8) | (Int32)uc;


{
  printf("\nSTMT_EXEC;;1700\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;1703\n");
if (s->bsLive >= 8)
    {
      printf("\nSTMT_EXEC;;1705\n");
v___16 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
      printf("\nSTMT_EXEC;;1706\n");
s->bsLive -= 8;
      printf("\nSTMT_EXEC;;1707\n");
uc = (UChar)v___16;
      printf("\nSTMT_EXEC;;1708\n");
goto while_break___16;
    }





    printf("\nSTMT_EXEC;;1715\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    printf("\nSTMT_EXEC;;1716\n");
s->bsLive += 8;
    printf("\nSTMT_EXEC;;1717\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1718\n");
((s->strm)->avail_in)--;





  }
while_break___16: /* CIL Label */;
}
printf("\nSTMT_EXEC;;1727\n");
s->origPtr = (s->origPtr << 8) | (Int32)uc;










printf("\nSTMT_EXEC;;1738\n");
i = 0;
{
  printf("\nSTMT_EXEC;;1740\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;1743\n");
if (!(i < 16))
    {
      printf("\nSTMT_EXEC;;1745\n");
goto while_break___17;
    }


    {

      ;
      {




        printf("\nSTMT_EXEC;;1757\n");
(s->bsLive)--;


      }




    }
    printf("\nSTMT_EXEC;;1766\n");
i++;
  }
while_break___17: /* CIL Label */;
}
printf("\nSTMT_EXEC;;1770\n");
i = 0;
{
  printf("\nSTMT_EXEC;;1772\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;1775\n");
if (!(i < 16))
    {
      printf("\nSTMT_EXEC;;1777\n");
goto while_break___20;
    }
    {
      printf("\nSTMT_EXEC;;1780\n");
j = 0;
      {
        printf("\nSTMT_EXEC;;1782\n");
while (1)
        {
          ;
          printf("\nSTMT_EXEC;;1785\n");
if (!(j < 16))
          {
            printf("\nSTMT_EXEC;;1787\n");
goto while_break___21;
          }
          {
            printf("\nSTMT_EXEC;;1790\n");
while (1)
            {
              ;
              printf("\nSTMT_EXEC;;1793\n");
if (s->bsLive >= 1)
              {
                printf("\nSTMT_EXEC;;1795\n");
(s->bsLive)--;
                printf("\nSTMT_EXEC;;1796\n");
goto while_break___22;
              }
              printf("\nSTMT_EXEC;;1798\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
              printf("\nSTMT_EXEC;;1799\n");
s->bsLive += 8;
              printf("\nSTMT_EXEC;;1800\n");
((s->strm)->next_in)++;
              printf("\nSTMT_EXEC;;1801\n");
((s->strm)->avail_in)--;

















































































            }
          while_break___22: /* CIL Label */;
          }




          printf("\nSTMT_EXEC;;1890\n");
j++;
        }
      while_break___21: /* CIL Label */;
      }
    }
    printf("\nSTMT_EXEC;;1895\n");
i++;
  }
while_break___20: /* CIL Label */;
}
{
  printf("\nSTMT_EXEC;;1900\n");
makeMaps_d(s);
}





printf("\nSTMT_EXEC;;1907\n");
alphaSize = s->nInUse + 2;


{

  {
    ;

    {
      printf("\nSTMT_EXEC;;1916\n");
v___19 = (s->bsBuff >> (s->bsLive - 3)) & (unsigned int)((1 << 3) - 1);
      printf("\nSTMT_EXEC;;1917\n");
s->bsLive -= 3;
      printf("\nSTMT_EXEC;;1918\n");
nGroups = (Int32)v___19;















    }
  };

}















{
  printf("\nSTMT_EXEC;;1954\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;1957\n");
if (s->bsLive >= 15)
    {
      printf("\nSTMT_EXEC;;1959\n");
v___20 = (s->bsBuff >> (s->bsLive - 15)) & (unsigned int)((1 << 15) - 1);
      printf("\nSTMT_EXEC;;1960\n");
s->bsLive -= 15;
      printf("\nSTMT_EXEC;;1961\n");
nSelectors = (Int32)v___20;
      printf("\nSTMT_EXEC;;1962\n");
goto while_break___24;
    }





    printf("\nSTMT_EXEC;;1969\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    printf("\nSTMT_EXEC;;1970\n");
s->bsLive += 8;
    printf("\nSTMT_EXEC;;1971\n");
((s->strm)->next_in)++;
    printf("\nSTMT_EXEC;;1972\n");
((s->strm)->avail_in)--;





  }
while_break___24: /* CIL Label */;
}





printf("\nSTMT_EXEC;;1986\n");
i = 0;
{
  printf("\nSTMT_EXEC;;1988\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;1991\n");
if (!(i < nSelectors))
    {
      printf("\nSTMT_EXEC;;1993\n");
goto while_break___25;
    }
    printf("\nSTMT_EXEC;;1995\n");
j = 0;
    {
      printf("\nSTMT_EXEC;;1997\n");
while (1)
      {
        ;


        {
          printf("\nSTMT_EXEC;;2003\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;2006\n");
if (s->bsLive >= 1)
            {
              printf("\nSTMT_EXEC;;2008\n");
v___21 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
              printf("\nSTMT_EXEC;;2009\n");
(s->bsLive)--;
              printf("\nSTMT_EXEC;;2010\n");
uc = (UChar)v___21;
              printf("\nSTMT_EXEC;;2011\n");
goto while_break___27;
            }





            printf("\nSTMT_EXEC;;2018\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
            printf("\nSTMT_EXEC;;2019\n");
s->bsLive += 8;
            printf("\nSTMT_EXEC;;2020\n");
((s->strm)->next_in)++;
            printf("\nSTMT_EXEC;;2021\n");
((s->strm)->avail_in)--;





          }
        while_break___27: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2030\n");
if ((int)uc == 0)
        {
          printf("\nSTMT_EXEC;;2032\n");
goto while_break___26;
        }
        printf("\nSTMT_EXEC;;2034\n");
j++;





      }
    while_break___26: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2043\n");
s->selectorMtf[i] = (UChar)j;
    printf("\nSTMT_EXEC;;2044\n");
i++;
  }
while_break___25: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2048\n");
v___22 = (UChar)0;
{
  printf("\nSTMT_EXEC;;2050\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2053\n");
if (!((int)v___22 < nGroups))
    {
      printf("\nSTMT_EXEC;;2055\n");
goto while_break___28;
    }
    printf("\nSTMT_EXEC;;2057\n");
pos[v___22] = v___22;
    printf("\nSTMT_EXEC;;2058\n");
v___22 = (UChar)((int)v___22 + 1);
  }
while_break___28: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2062\n");
i = 0;
{
  printf("\nSTMT_EXEC;;2064\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2067\n");
if (!(i < nSelectors))
    {
      printf("\nSTMT_EXEC;;2069\n");
goto while_break___29;
    }
    printf("\nSTMT_EXEC;;2071\n");
v___22 = s->selectorMtf[i];
    printf("\nSTMT_EXEC;;2072\n");
tmp = pos[v___22];
    {
      printf("\nSTMT_EXEC;;2074\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2077\n");
if (!((int)v___22 > 0))
        {
          printf("\nSTMT_EXEC;;2079\n");
goto while_break___30;
        }
        printf("\nSTMT_EXEC;;2081\n");
pos[v___22] = pos[(int)v___22 - 1];
        printf("\nSTMT_EXEC;;2082\n");
v___22 = (UChar)((int)v___22 - 1);
      }
    while_break___30: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2086\n");
pos[0] = tmp;
    printf("\nSTMT_EXEC;;2087\n");
s->selector[i] = tmp;
    printf("\nSTMT_EXEC;;2088\n");
i++;
  }
while_break___29: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2092\n");
t = 0;
{
  printf("\nSTMT_EXEC;;2094\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2097\n");
if (!(t < nGroups))
    {
      printf("\nSTMT_EXEC;;2099\n");
goto while_break___31;
    }


    {
      printf("\nSTMT_EXEC;;2104\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2107\n");
if (s->bsLive >= 5)
        {
          printf("\nSTMT_EXEC;;2109\n");
v___23 = (s->bsBuff >> (s->bsLive - 5)) & (unsigned int)((1 << 5) - 1);
          printf("\nSTMT_EXEC;;2110\n");
s->bsLive -= 5;
          printf("\nSTMT_EXEC;;2111\n");
curr = (Int32)v___23;
          printf("\nSTMT_EXEC;;2112\n");
goto while_break___32;
        }





        printf("\nSTMT_EXEC;;2119\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
        printf("\nSTMT_EXEC;;2120\n");
s->bsLive += 8;
        printf("\nSTMT_EXEC;;2121\n");
((s->strm)->next_in)++;
        printf("\nSTMT_EXEC;;2122\n");
((s->strm)->avail_in)--;





      }
    while_break___32: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2131\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;2133\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2136\n");
if (!(i < alphaSize))
        {
          printf("\nSTMT_EXEC;;2138\n");
goto while_break___33;
        }
        {
          printf("\nSTMT_EXEC;;2141\n");
while (1)
          {
            ;















            {
              printf("\nSTMT_EXEC;;2160\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;2163\n");
if (s->bsLive >= 1)
                {
                  printf("\nSTMT_EXEC;;2165\n");
v___24 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
                  printf("\nSTMT_EXEC;;2166\n");
(s->bsLive)--;
                  printf("\nSTMT_EXEC;;2167\n");
uc = (UChar)v___24;
                  printf("\nSTMT_EXEC;;2168\n");
goto while_break___35;
                }





                printf("\nSTMT_EXEC;;2175\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                printf("\nSTMT_EXEC;;2176\n");
s->bsLive += 8;
                printf("\nSTMT_EXEC;;2177\n");
((s->strm)->next_in)++;
                printf("\nSTMT_EXEC;;2178\n");
((s->strm)->avail_in)--;





              }
            while_break___35: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;2187\n");
if ((int)uc == 0)
            {
              printf("\nSTMT_EXEC;;2189\n");
goto while_break___34;
            }


            {
              printf("\nSTMT_EXEC;;2194\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;2197\n");
if (s->bsLive >= 1)
                {
                  printf("\nSTMT_EXEC;;2199\n");
v___25 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
                  printf("\nSTMT_EXEC;;2200\n");
(s->bsLive)--;
                  printf("\nSTMT_EXEC;;2201\n");
uc = (UChar)v___25;
                  printf("\nSTMT_EXEC;;2202\n");
goto while_break___36;
                }





                printf("\nSTMT_EXEC;;2209\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                printf("\nSTMT_EXEC;;2210\n");
s->bsLive += 8;
                printf("\nSTMT_EXEC;;2211\n");
((s->strm)->next_in)++;
                printf("\nSTMT_EXEC;;2212\n");
((s->strm)->avail_in)--;





              }
            while_break___36: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;2221\n");
if ((int)uc == 0)
            {
              printf("\nSTMT_EXEC;;2223\n");
curr++;
            }
            else
            {
              printf("\nSTMT_EXEC;;2227\n");
curr--;
            }
          }
        while_break___34: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2232\n");
s->len[t][i] = (UChar)curr;
        printf("\nSTMT_EXEC;;2233\n");
i++;
      }
    while_break___33: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2237\n");
t++;
  }
while_break___31: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2241\n");
t = 0;
{
  printf("\nSTMT_EXEC;;2243\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2246\n");
if (!(t < nGroups))
    {
      printf("\nSTMT_EXEC;;2248\n");
goto while_break___37;
    }
    printf("\nSTMT_EXEC;;2250\n");
minLen = 32;

    printf("\nSTMT_EXEC;;2252\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;2254\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2257\n");
if (!(i < alphaSize))
        {
          printf("\nSTMT_EXEC;;2259\n");
goto while_break___38;
        }

        {
          printf("\nSTMT_EXEC;;2263\n");
maxLen = (Int32)s->len[t][i];
        }
        printf("\nSTMT_EXEC;;2265\n");
if ((int)s->len[t][i] < minLen)
        {
          printf("\nSTMT_EXEC;;2267\n");
minLen = (Int32)s->len[t][i];
        }
        printf("\nSTMT_EXEC;;2269\n");
i++;
      }
    while_break___38: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;2274\n");
BZ2_hbCreateDecodeTables(&s->limit[t][0], &s->base[t][0], &s->perm[t][0], &s->len[t][0], minLen, maxLen, alphaSize);
      printf("\nSTMT_EXEC;;2275\n");
s->minLens[t] = minLen;
      printf("\nSTMT_EXEC;;2276\n");
t++;
    }
  }
while_break___37: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2281\n");
EOB = s->nInUse + 1;

printf("\nSTMT_EXEC;;2283\n");
groupNo = -1;

printf("\nSTMT_EXEC;;2285\n");
i = 0;
{
  printf("\nSTMT_EXEC;;2287\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2290\n");
if (!(i <= 255))
    {
      printf("\nSTMT_EXEC;;2292\n");
goto while_break___39;
    }
    printf("\nSTMT_EXEC;;2294\n");
s->unzftab[i] = 0;
    printf("\nSTMT_EXEC;;2295\n");
i++;
  }
while_break___39: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2299\n");
kk = 4095;
printf("\nSTMT_EXEC;;2300\n");
ii = 15;
{
  printf("\nSTMT_EXEC;;2302\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2305\n");
if (!(ii >= 0))
    {
      printf("\nSTMT_EXEC;;2307\n");
goto while_break___40;
    }
    printf("\nSTMT_EXEC;;2309\n");
jj = 15;
    {
      printf("\nSTMT_EXEC;;2311\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2314\n");
if (!(jj >= 0))
        {
          printf("\nSTMT_EXEC;;2316\n");
goto while_break___41;
        }
        printf("\nSTMT_EXEC;;2318\n");
s->mtfa[kk] = (UChar)(ii * 16 + jj);
        printf("\nSTMT_EXEC;;2319\n");
kk--;
        printf("\nSTMT_EXEC;;2320\n");
jj--;
      }
    while_break___41: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2324\n");
s->mtfbase[ii] = kk + 1;
    printf("\nSTMT_EXEC;;2325\n");
ii--;
  }
while_break___40: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2329\n");
nblock = 0;

{
  printf("\nSTMT_EXEC;;2332\n");
groupNo++;





  printf("\nSTMT_EXEC;;2338\n");
groupPos = 50;
  printf("\nSTMT_EXEC;;2339\n");
gSel = (Int32)s->selector[groupNo];
  printf("\nSTMT_EXEC;;2340\n");
gMinlen = s->minLens[gSel];
  printf("\nSTMT_EXEC;;2341\n");
gLimit = &s->limit[gSel][0];
  printf("\nSTMT_EXEC;;2342\n");
gPerm = &s->perm[gSel][0];
  printf("\nSTMT_EXEC;;2343\n");
gBase = &s->base[gSel][0];
}
printf("\nSTMT_EXEC;;2345\n");
groupPos--;
printf("\nSTMT_EXEC;;2346\n");
zn = gMinlen;


{

  {
    ;

    {
      printf("\nSTMT_EXEC;;2355\n");
v___26 = (s->bsBuff >> (s->bsLive - zn)) & (unsigned int)((1 << zn) - 1);
      printf("\nSTMT_EXEC;;2356\n");
s->bsLive -= zn;
      printf("\nSTMT_EXEC;;2357\n");
zvec = (Int32)v___26;















    }
  };

}
{
  printf("\nSTMT_EXEC;;2378\n");
while (1)
  {
    ;





    printf("\nSTMT_EXEC;;2386\n");
if (zvec <= *(gLimit + zn))
    {
      printf("\nSTMT_EXEC;;2388\n");
goto while_break___43;
    }
    printf("\nSTMT_EXEC;;2390\n");
zn++;


    {
      printf("\nSTMT_EXEC;;2394\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;2397\n");
if (s->bsLive >= 1)
        {
          printf("\nSTMT_EXEC;;2399\n");
v___27 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
          printf("\nSTMT_EXEC;;2400\n");
(s->bsLive)--;
          printf("\nSTMT_EXEC;;2401\n");
zj = (Int32)v___27;
          printf("\nSTMT_EXEC;;2402\n");
goto while_break___44;
        }





        printf("\nSTMT_EXEC;;2409\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
        printf("\nSTMT_EXEC;;2410\n");
s->bsLive += 8;
        printf("\nSTMT_EXEC;;2411\n");
((s->strm)->next_in)++;
        printf("\nSTMT_EXEC;;2412\n");
((s->strm)->avail_in)--;





      }
    while_break___44: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;2421\n");
zvec = (zvec << 1) | zj;
  }
while_break___43: /* CIL Label */;
}













printf("\nSTMT_EXEC;;2438\n");
nextSym = *(gPerm + (zvec - *(gBase + zn)));
{

  {
  while_continue___45: /* CIL Label */;
    printf("\nSTMT_EXEC;;2443\n");
if (!(!(nextSym == EOB)))
    {
      printf("\nSTMT_EXEC;;2445\n");
goto while_break___45;
    }
    printf("\nSTMT_EXEC;;2447\n");
if (nextSym == 0)
    {
      printf("\nSTMT_EXEC;;2449\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;2453\n");
if (nextSym == 1)
      {
      _L:
        {
printf("\nSTMT_EXEC;;2456\n");
es = -1;
}

        printf("\nSTMT_EXEC;;2457\n");
N = 1;
        {
          printf("\nSTMT_EXEC;;2459\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;2462\n");
if (nextSym == 0)
            {
              printf("\nSTMT_EXEC;;2464\n");
es += N;
            }
            else
            {


              printf("\nSTMT_EXEC;;2470\n");
es += 2 * N;

            }
            printf("\nSTMT_EXEC;;2473\n");
N *= 2;
            printf("\nSTMT_EXEC;;2474\n");
if (groupPos == 0)
            {
              printf("\nSTMT_EXEC;;2476\n");
groupNo++;





              printf("\nSTMT_EXEC;;2482\n");
groupPos = 50;
              printf("\nSTMT_EXEC;;2483\n");
gSel = (Int32)s->selector[groupNo];
              printf("\nSTMT_EXEC;;2484\n");
gMinlen = s->minLens[gSel];
              printf("\nSTMT_EXEC;;2485\n");
gLimit = &s->limit[gSel][0];
              printf("\nSTMT_EXEC;;2486\n");
gPerm = &s->perm[gSel][0];
              printf("\nSTMT_EXEC;;2487\n");
gBase = &s->base[gSel][0];
            }
            printf("\nSTMT_EXEC;;2489\n");
groupPos--;
            printf("\nSTMT_EXEC;;2490\n");
zn = gMinlen;
          case_38: /* CIL Label */
            {
printf("\nSTMT_EXEC;;2492\n");
s->state = 38;
}

            {
              printf("\nSTMT_EXEC;;2494\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;2497\n");
if (s->bsLive >= zn)
                {
                  printf("\nSTMT_EXEC;;2499\n");
v___28 = (s->bsBuff >> (s->bsLive - zn)) & (unsigned int)((1 << zn) - 1);
                  printf("\nSTMT_EXEC;;2500\n");
s->bsLive -= zn;
                  printf("\nSTMT_EXEC;;2501\n");
zvec = (Int32)v___28;
                  printf("\nSTMT_EXEC;;2502\n");
goto while_break___47;
                }
                printf("\nSTMT_EXEC;;2504\n");
if ((s->strm)->avail_in == 0U)
                {
                  printf("\nSTMT_EXEC;;2506\n");
retVal = 0;
                  printf("\nSTMT_EXEC;;2507\n");
goto save_state_and_return;
                }
                printf("\nSTMT_EXEC;;2509\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                printf("\nSTMT_EXEC;;2510\n");
s->bsLive += 8;
                printf("\nSTMT_EXEC;;2511\n");
((s->strm)->next_in)++;
                printf("\nSTMT_EXEC;;2512\n");
((s->strm)->avail_in)--;





              }
            while_break___47: /* CIL Label */;
            }
            {
              printf("\nSTMT_EXEC;;2522\n");
while (1)
              {
                ;





                printf("\nSTMT_EXEC;;2530\n");
if (zvec <= *(gLimit + zn))
                {
                  printf("\nSTMT_EXEC;;2532\n");
goto while_break___48;
                }
                printf("\nSTMT_EXEC;;2534\n");
zn++;
              case_39: /* CIL Label */
                {
printf("\nSTMT_EXEC;;2536\n");
s->state = 39;
}

                {
                  printf("\nSTMT_EXEC;;2538\n");
while (1)
                  {
                    ;
                    printf("\nSTMT_EXEC;;2541\n");
if (s->bsLive >= 1)
                    {
                      printf("\nSTMT_EXEC;;2543\n");
v___29 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
                      printf("\nSTMT_EXEC;;2544\n");
(s->bsLive)--;
                      printf("\nSTMT_EXEC;;2545\n");
zj = (Int32)v___29;
                      printf("\nSTMT_EXEC;;2546\n");
goto while_break___49;
                    }
                    printf("\nSTMT_EXEC;;2548\n");
if ((s->strm)->avail_in == 0U)
                    {
                      printf("\nSTMT_EXEC;;2550\n");
retVal = 0;
                      printf("\nSTMT_EXEC;;2551\n");
goto save_state_and_return;
                    }
                    printf("\nSTMT_EXEC;;2553\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                    printf("\nSTMT_EXEC;;2554\n");
s->bsLive += 8;
                    printf("\nSTMT_EXEC;;2555\n");
((s->strm)->next_in)++;
                    printf("\nSTMT_EXEC;;2556\n");
((s->strm)->avail_in)--;





                  }
                while_break___49: /* CIL Label */;
                }
                printf("\nSTMT_EXEC;;2565\n");
zvec = (zvec << 1) | zj;
              }
            while_break___48: /* CIL Label */;
            }













            printf("\nSTMT_EXEC;;2582\n");
nextSym = *(gPerm + (zvec - *(gBase + zn)));
            printf("\nSTMT_EXEC;;2583\n");
if (!(nextSym == 0))
            {
              printf("\nSTMT_EXEC;;2585\n");
if (!(nextSym == 1))
              {
                printf("\nSTMT_EXEC;;2587\n");
goto while_break___46;
              }
            }
          }
        while_break___46: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2593\n");
es++;
        printf("\nSTMT_EXEC;;2594\n");
uc = s->seqToUnseq[s->mtfa[s->mtfbase[0]]];
        printf("\nSTMT_EXEC;;2595\n");
s->unzftab[uc] += es;

        {

          printf("\nSTMT_EXEC;;2599\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;2602\n");
if (!(es > 0))
            {






















              printf("\nSTMT_EXEC;;2626\n");
goto while_break___51;
            }





            printf("\nSTMT_EXEC;;2633\n");
*(s->tt + nblock) = (UInt32)uc;
            printf("\nSTMT_EXEC;;2634\n");
nblock++;
            printf("\nSTMT_EXEC;;2635\n");
es--;
          }
        while_break___51: /* CIL Label */;
        }

        printf("\nSTMT_EXEC;;2640\n");
goto while_continue___45;
      }
      else
      {





        printf("\nSTMT_EXEC;;2649\n");
nn = (UInt32)(nextSym - 1);

        {
          printf("\nSTMT_EXEC;;2652\n");
pp = s->mtfbase[0];
          printf("\nSTMT_EXEC;;2653\n");
uc = s->mtfa[(UInt32)pp + nn];
          {
            printf("\nSTMT_EXEC;;2655\n");
while (1)
            {
              ;

















              printf("\nSTMT_EXEC;;2675\n");
if (!(nn > 0U))
              {
                printf("\nSTMT_EXEC;;2677\n");
goto while_break___53;
              }
              printf("\nSTMT_EXEC;;2679\n");
s->mtfa[(UInt32)pp + nn] = s->mtfa[((UInt32)pp + nn) - 1U];
              printf("\nSTMT_EXEC;;2680\n");
nn--;
            }
          while_break___53: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;2684\n");
s->mtfa[pp] = uc;
        }






































































        printf("\nSTMT_EXEC;;2756\n");
(s->unzftab[s->seqToUnseq[uc]])++;





        {
          printf("\nSTMT_EXEC;;2763\n");
*(s->tt + nblock) = (UInt32)s->seqToUnseq[uc];
        }
        printf("\nSTMT_EXEC;;2765\n");
nblock++;
        printf("\nSTMT_EXEC;;2766\n");
if (groupPos == 0)
        {
          printf("\nSTMT_EXEC;;2768\n");
groupNo++;





          printf("\nSTMT_EXEC;;2774\n");
groupPos = 50;
          printf("\nSTMT_EXEC;;2775\n");
gSel = (Int32)s->selector[groupNo];
          printf("\nSTMT_EXEC;;2776\n");
gMinlen = s->minLens[gSel];
          printf("\nSTMT_EXEC;;2777\n");
gLimit = &s->limit[gSel][0];
          printf("\nSTMT_EXEC;;2778\n");
gPerm = &s->perm[gSel][0];
          printf("\nSTMT_EXEC;;2779\n");
gBase = &s->base[gSel][0];
        }
        printf("\nSTMT_EXEC;;2781\n");
groupPos--;
        printf("\nSTMT_EXEC;;2782\n");
zn = gMinlen;
      case_40: /* CIL Label */
        {
printf("\nSTMT_EXEC;;2784\n");
s->state = 40;
}

        {
          printf("\nSTMT_EXEC;;2786\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;2789\n");
if (s->bsLive >= zn)
            {
              printf("\nSTMT_EXEC;;2791\n");
v___30 = (s->bsBuff >> (s->bsLive - zn)) & (unsigned int)((1 << zn) - 1);
              printf("\nSTMT_EXEC;;2792\n");
s->bsLive -= zn;
              printf("\nSTMT_EXEC;;2793\n");
zvec = (Int32)v___30;
              printf("\nSTMT_EXEC;;2794\n");
goto while_break___58;
            }
            printf("\nSTMT_EXEC;;2796\n");
if ((s->strm)->avail_in == 0U)
            {
              printf("\nSTMT_EXEC;;2798\n");
retVal = 0;
              printf("\nSTMT_EXEC;;2799\n");
goto save_state_and_return;
            }
            printf("\nSTMT_EXEC;;2801\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
            printf("\nSTMT_EXEC;;2802\n");
s->bsLive += 8;
            printf("\nSTMT_EXEC;;2803\n");
((s->strm)->next_in)++;
            printf("\nSTMT_EXEC;;2804\n");
((s->strm)->avail_in)--;





          }
        while_break___58: /* CIL Label */;
        }
        {
          printf("\nSTMT_EXEC;;2814\n");
while (1)
          {
            ;





            printf("\nSTMT_EXEC;;2822\n");
if (zvec <= *(gLimit + zn))
            {
              printf("\nSTMT_EXEC;;2824\n");
goto while_break___59;
            }
            printf("\nSTMT_EXEC;;2826\n");
zn++;
          case_41: /* CIL Label */
            {
printf("\nSTMT_EXEC;;2828\n");
s->state = 41;
}

            {
              printf("\nSTMT_EXEC;;2830\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;2833\n");
if (s->bsLive >= 1)
                {
                  printf("\nSTMT_EXEC;;2835\n");
v___31 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
                  printf("\nSTMT_EXEC;;2836\n");
(s->bsLive)--;
                  printf("\nSTMT_EXEC;;2837\n");
zj = (Int32)v___31;
                  printf("\nSTMT_EXEC;;2838\n");
goto while_break___60;
                }
                printf("\nSTMT_EXEC;;2840\n");
if ((s->strm)->avail_in == 0U)
                {
                  printf("\nSTMT_EXEC;;2842\n");
retVal = 0;
                  printf("\nSTMT_EXEC;;2843\n");
goto save_state_and_return;
                }
                printf("\nSTMT_EXEC;;2845\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                printf("\nSTMT_EXEC;;2846\n");
s->bsLive += 8;
                printf("\nSTMT_EXEC;;2847\n");
((s->strm)->next_in)++;
                printf("\nSTMT_EXEC;;2848\n");
((s->strm)->avail_in)--;





              }
            while_break___60: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;2857\n");
zvec = (zvec << 1) | zj;
          }
        while_break___59: /* CIL Label */;
        }













        printf("\nSTMT_EXEC;;2874\n");
nextSym = *(gPerm + (zvec - *(gBase + zn)));
        printf("\nSTMT_EXEC;;2875\n");
goto while_continue___45;
      }
    }
  }
while_break___45: /* CIL Label */;
}













printf("\nSTMT_EXEC;;2894\n");
s->cftab[0] = 0;
printf("\nSTMT_EXEC;;2895\n");
i = 1;
{
  printf("\nSTMT_EXEC;;2897\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2900\n");
if (!(i <= 256))
    {
      printf("\nSTMT_EXEC;;2902\n");
goto while_break___61;
    }
    printf("\nSTMT_EXEC;;2904\n");
s->cftab[i] = s->unzftab[i - 1];
    printf("\nSTMT_EXEC;;2905\n");
i++;
  }
while_break___61: /* CIL Label */;
}
printf("\nSTMT_EXEC;;2909\n");
i = 1;
{
  printf("\nSTMT_EXEC;;2911\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;2914\n");
if (!(i <= 256))
    {
      printf("\nSTMT_EXEC;;2916\n");
goto while_break___62;
    }
    printf("\nSTMT_EXEC;;2918\n");
s->cftab[i] += s->cftab[i - 1];
    printf("\nSTMT_EXEC;;2919\n");
i++;
  }
while_break___62: /* CIL Label */;
}


























printf("\nSTMT_EXEC;;2949\n");
s->state_out_len = 0;


printf("\nSTMT_EXEC;;2952\n");
s->state = 2;







{
  printf("\nSTMT_EXEC;;2961\n");
i = 0;
  {
    printf("\nSTMT_EXEC;;2963\n");
while (1)
    {
      ;














      printf("\nSTMT_EXEC;;2980\n");
if (!(i < nblock))
      {



































































































        printf("\nSTMT_EXEC;;3081\n");
goto while_break___67;
      }
      printf("\nSTMT_EXEC;;3083\n");
uc = (UChar)(*(s->tt + i) & 255U);
      printf("\nSTMT_EXEC;;3084\n");
*(s->tt + s->cftab[uc]) |= (unsigned int)(i << 8);
      printf("\nSTMT_EXEC;;3085\n");
(s->cftab[uc])++;
      printf("\nSTMT_EXEC;;3086\n");
i++;
    }
  while_break___67: /* CIL Label */;
  }
  printf("\nSTMT_EXEC;;3090\n");
s->tPos = *(s->tt + s->origPtr) >> 8;
  printf("\nSTMT_EXEC;;3091\n");
s->nblock_used = 0;

  {






    printf("\nSTMT_EXEC;;3100\n");
s->tPos = *(s->tt + s->tPos);
    printf("\nSTMT_EXEC;;3101\n");
s->k0 = (Int32)((UChar)(s->tPos & 255U));
    printf("\nSTMT_EXEC;;3102\n");
s->tPos >>= 8;
    printf("\nSTMT_EXEC;;3103\n");
(s->nblock_used)++;






























  }
}
printf("\nSTMT_EXEC;;3136\n");
retVal = 0;
printf("\nSTMT_EXEC;;3137\n");
goto save_state_and_return;
endhdr_2 :

    {
printf("\nSTMT_EXEC;;3140\n");
s->state = 42;
}












































































































































































































































































































printf("\nSTMT_EXEC;;3440\n");
retVal = 4;

;


}

save_state_and_return : {
printf("\nSTMT_EXEC;;3447\n");
s->save_i = i;
}











printf("\nSTMT_EXEC;;3458\n");
s->save_EOB = EOB;
printf("\nSTMT_EXEC;;3459\n");
s->save_groupNo = groupNo;
printf("\nSTMT_EXEC;;3460\n");
s->save_groupPos = groupPos;


printf("\nSTMT_EXEC;;3463\n");
s->save_nblock = nblock;
printf("\nSTMT_EXEC;;3464\n");
s->save_es = es;
printf("\nSTMT_EXEC;;3465\n");
s->save_N = N;


printf("\nSTMT_EXEC;;3468\n");
s->save_zn = zn;
printf("\nSTMT_EXEC;;3469\n");
s->save_zvec = zvec;


printf("\nSTMT_EXEC;;3472\n");
s->save_gMinlen = gMinlen;
printf("\nSTMT_EXEC;;3473\n");
s->save_gLimit = gLimit;
printf("\nSTMT_EXEC;;3474\n");
s->save_gBase = gBase;
printf("\nSTMT_EXEC;;3475\n");
s->save_gPerm = gPerm;
printf("\nSTMT_EXEC;;3476\n");
printf("\nFUNC_RETURN;;\n");
return (retVal);
}
printf("\nFUNC_RETURN;;\n");
}

UInt32 BZ2_crc32Table[256] = {(UInt32)0L, (UInt32)79764919L, (UInt32)159529838L, (UInt32)222504665L, (UInt32)319059676L, (UInt32)398814059L, (UInt32)445009330L, (UInt32)507990021L, (UInt32)638119352L, (UInt32)583659535L, (UInt32)797628118L, (UInt32)726387553L, (UInt32)890018660L, (UInt32)835552979L, (UInt32)1015980042L, (UInt32)944750013L, (UInt32)1276238704L, (UInt32)1221641927L, (UInt32)1167319070L, (UInt32)1095957929L, (UInt32)1595256236L, (UInt32)1540665371L, (UInt32)1452775106L, (UInt32)1381403509L, (UInt32)1780037320L, (UInt32)1859660671L, (UInt32)1671105958L, (UInt32)1733955601L, (UInt32)2031960084L, (UInt32)2111593891L, (UInt32)1889500026L, (UInt32)1952343757L, (UInt32)2552477408L, (UInt32)2632100695L, (UInt32)2443283854L, (UInt32)2506133561L, (UInt32)2334638140L, (UInt32)2414271883L, (UInt32)2191915858L, (UInt32)2254759653L, (UInt32)3190512472L, (UInt32)3135915759L, (UInt32)3081330742L, (UInt32)3009969537L, (UInt32)2905550212L, (UInt32)2850959411L, (UInt32)2762807018L, (UInt32)2691435357L, (UInt32)3560074640L, (UInt32)3505614887L, (UInt32)3719321342L, (UInt32)3648080713L, (UInt32)3342211916L, (UInt32)3287746299L, (UInt32)3467911202L, (UInt32)3396681109L, (UInt32)4063920168L, (UInt32)4143685023L, (UInt32)4223187782L, (UInt32)4286162673L, (UInt32)3779000052L, (UInt32)3858754371L, (UInt32)3904687514L, (UInt32)3967668269L, (UInt32)881225847L, (UInt32)809987520L, (UInt32)1023691545L, (UInt32)969234094L, (UInt32)662832811L, (UInt32)591600412L, (UInt32)771767749L, (UInt32)717299826L, (UInt32)311336399L, (UInt32)374308984L, (UInt32)453813921L, (UInt32)533576470L, (UInt32)25881363L, (UInt32)88864420L, (UInt32)134795389L, (UInt32)214552010L, (UInt32)2023205639L, (UInt32)2086057648L, (UInt32)1897238633L, (UInt32)1976864222L, (UInt32)1804852699L, (UInt32)1867694188L, (UInt32)1645340341L, (UInt32)1724971778L, (UInt32)1587496639L, (UInt32)1516133128L, (UInt32)1461550545L, (UInt32)1406951526L, (UInt32)1302016099L, (UInt32)1230646740L, (UInt32)1142491917L, (UInt32)1087903418L, (UInt32)2896545431L, (UInt32)2825181984L, (UInt32)2770861561L, (UInt32)2716262478L, (UInt32)3215044683L, (UInt32)3143675388L, (UInt32)3055782693L, (UInt32)3001194130L, (UInt32)2326604591L, (UInt32)2389456536L, (UInt32)2200899649L, (UInt32)2280525302L, (UInt32)2578013683L, (UInt32)2640855108L, (UInt32)2418763421L, (UInt32)2498394922L, (UInt32)3769900519L, (UInt32)3832873040L, (UInt32)3912640137L, (UInt32)3992402750L, (UInt32)4088425275L, (UInt32)4151408268L, (UInt32)4197601365L, (UInt32)4277358050L, (UInt32)3334271071L, (UInt32)3263032808L, (UInt32)3476998961L, (UInt32)3422541446L, (UInt32)3585640067L, (UInt32)3514407732L, (UInt32)3694837229L, (UInt32)3640369242L, (UInt32)1762451694L, (UInt32)1842216281L, (UInt32)1619975040L, (UInt32)1682949687L, (UInt32)2047383090L, (UInt32)2127137669L, (UInt32)1938468188L, (UInt32)2001449195L, (UInt32)1325665622L, (UInt32)1271206113L, (UInt32)1183200824L, (UInt32)1111960463L, (UInt32)1543535498L, (UInt32)1489069629L, (UInt32)1434599652L, (UInt32)1363369299L, (UInt32)622672798L, (UInt32)568075817L, (UInt32)748617968L, (UInt32)677256519L, (UInt32)907627842L, (UInt32)853037301L, (UInt32)1067152940L, (UInt32)995781531L, (UInt32)51762726L, (UInt32)131386257L, (UInt32)177728840L, (UInt32)240578815L, (UInt32)269590778L, (UInt32)349224269L, (UInt32)429104020L, (UInt32)491947555L, (UInt32)4046411278L, (UInt32)4126034873L, (UInt32)4172115296L, (UInt32)4234965207L, (UInt32)3794477266L, (UInt32)3874110821L, (UInt32)3953728444L, (UInt32)4016571915L, (UInt32)3609705398L, (UInt32)3555108353L, (UInt32)3735388376L, (UInt32)3664026991L, (UInt32)3290680682L, (UInt32)3236090077L, (UInt32)3449943556L, (UInt32)3378572211L, (UInt32)3174993278L, (UInt32)3120533705L, (UInt32)3032266256L, (UInt32)2961025959L, (UInt32)2923101090L, (UInt32)2868635157L, (UInt32)2813903052L, (UInt32)2742672763L, (UInt32)2604032198L, (UInt32)2683796849L, (UInt32)2461293480L, (UInt32)2524268063L, (UInt32)2284983834L, (UInt32)2364738477L, (UInt32)2175806836L, (UInt32)2238787779L, (UInt32)1569362073L, (UInt32)1498123566L, (UInt32)1409854455L, (UInt32)1355396672L, (UInt32)1317987909L, (UInt32)1246755826L, (UInt32)1192025387L, (UInt32)1137557660L, (UInt32)2072149281L, (UInt32)2135122070L, (UInt32)1912620623L, (UInt32)1992383480L, (UInt32)1753615357L, (UInt32)1816598090L, (UInt32)1627664531L, (UInt32)1707420964L, (UInt32)295390185L, (UInt32)358241886L, (UInt32)404320391L, (UInt32)483945776L, (UInt32)43990325L, (UInt32)106832002L, (UInt32)186451547L, (UInt32)266083308L, (UInt32)932423249L, (UInt32)861060070L, (UInt32)1041341759L, (UInt32)986742920L, (UInt32)613929101L, (UInt32)542559546L, (UInt32)756411363L, (UInt32)701822548L, (UInt32)3316196985L, (UInt32)3244833742L, (UInt32)3425377559L, (UInt32)3370778784L, (UInt32)3601682597L, (UInt32)3530312978L, (UInt32)3744426955L, (UInt32)3689838204L, (UInt32)3819031489L, (UInt32)3881883254L, (UInt32)3928223919L, (UInt32)4007849240L, (UInt32)4037393693L, (UInt32)4100235434L, (UInt32)4180117107L, (UInt32)4259748804L, (UInt32)2310601993L, (UInt32)2373574846L, (UInt32)2151335527L, (UInt32)2231098320L, (UInt32)2596047829L, (UInt32)2659030626L, (UInt32)2470359227L, (UInt32)2550115596L, (UInt32)2947551409L, (UInt32)2876312838L, (UInt32)2788305887L, (UInt32)2733848168L, (UInt32)3165939309L, (UInt32)3094707162L, (UInt32)3040238851L, (UInt32)2985771188L};
void BZ2_blockSort(EState *s);
void BZ2_compressBlock(EState *s, Bool is_last_block);
void BZ2_bsInitWrite(EState *s);
void BZ2_bsInitWrite(EState *s)
{

  printf("\nFUNC_CALL;BZ2_bsInitWrite(EState *);\n");
printf("\nSTMT_EXEC;;3487\n");
s->bsLive = 0;
  printf("\nSTMT_EXEC;;3488\n");
s->bsBuff = (UInt32)0;


printf("\nFUNC_RETURN;;\n");
}
static void bsFinishWrite(EState *s)
{


  printf("\nFUNC_CALL;bsFinishWrite(EState *);\n");
printf("\nSTMT_EXEC;;3496\n");
while (1)
  {
    ;
    printf("\nSTMT_EXEC;;3499\n");
if (!(s->bsLive > 0))
    {
      printf("\nSTMT_EXEC;;3501\n");
goto while_break;
    }
    printf("\nSTMT_EXEC;;3503\n");
*(s->zbits + s->numZ) = (UChar)(s->bsBuff >> 24);
    printf("\nSTMT_EXEC;;3504\n");
(s->numZ)++;
    printf("\nSTMT_EXEC;;3505\n");
s->bsBuff <<= 8;
    printf("\nSTMT_EXEC;;3506\n");
s->bsLive -= 8;
  }
while_break: /* CIL Label */;



printf("\nFUNC_RETURN;;\n");
}
__inline static void bsW(EState *s, Int32 n, UInt32 v)
{

  printf("\nFUNC_CALL;bsW(EState *,Int32,UInt32);\n");
{
    printf("\nSTMT_EXEC;;3517\n");
while (1)
    {
      ;
      printf("\nSTMT_EXEC;;3520\n");
if (!(s->bsLive >= 8))
      {
        printf("\nSTMT_EXEC;;3522\n");
goto while_break;
      }
      printf("\nSTMT_EXEC;;3524\n");
*(s->zbits + s->numZ) = (UChar)(s->bsBuff >> 24);
      printf("\nSTMT_EXEC;;3525\n");
(s->numZ)++;
      printf("\nSTMT_EXEC;;3526\n");
s->bsBuff <<= 8;
      printf("\nSTMT_EXEC;;3527\n");
s->bsLive -= 8;
    }
  while_break: /* CIL Label */;
  }
  printf("\nSTMT_EXEC;;3531\n");
s->bsBuff |= v << ((32 - s->bsLive) - n);
  printf("\nSTMT_EXEC;;3532\n");
s->bsLive += n;


printf("\nFUNC_RETURN;;\n");
}
static void bsPutUInt32(EState *s, UInt32 u)
{


  printf("\nFUNC_CALL;bsPutUInt32(EState *,UInt32);\n");
printf("\nSTMT_EXEC;;3540\n");
bsW(s, 8, (UInt32)((long)(u >> 24) & 255L));
  printf("\nSTMT_EXEC;;3541\n");
bsW(s, 8, (UInt32)((long)(u >> 16) & 255L));
  printf("\nSTMT_EXEC;;3542\n");
bsW(s, 8, (UInt32)((long)(u >> 8) & 255L));
  printf("\nSTMT_EXEC;;3543\n");
bsW(s, 8, (UInt32)((long)u & 255L));



printf("\nFUNC_RETURN;;\n");
}
static void bsPutUChar(EState *s, UChar c)
{


  printf("\nFUNC_CALL;bsPutUChar(EState *,UChar);\n");
printf("\nSTMT_EXEC;;3552\n");
bsW(s, 8, (UInt32)c);



printf("\nFUNC_RETURN;;\n");
}
static void makeMaps_e(EState *s)
{
  printf("\nFUNC_CALL;makeMaps_e(EState *);\n");
printf("\nSTMT_EXEC;;3559\n");
Int32 i;
  {
    printf("\nSTMT_EXEC;;3561\n");
s->nInUse = 0;
    printf("\nSTMT_EXEC;;3562\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;3564\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3567\n");
if (!(i < 256))
        {
          printf("\nSTMT_EXEC;;3569\n");
goto while_break;
        }

        {
          printf("\nSTMT_EXEC;;3573\n");
s->unseqToSeq[i] = (UChar)s->nInUse;
          printf("\nSTMT_EXEC;;3574\n");
(s->nInUse)++;
        }
        printf("\nSTMT_EXEC;;3576\n");
i++;
      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void generateMTFValues(EState *s)
{
  printf("\nFUNC_CALL;generateMTFValues(EState *);\n");
printf("\nSTMT_EXEC;;3585\n");
UChar yy[256];
  printf("\nSTMT_EXEC;;3586\n");
Int32 i;
  printf("\nSTMT_EXEC;;3587\n");
Int32 j;
  printf("\nSTMT_EXEC;;3588\n");
Int32 zPend;
  printf("\nSTMT_EXEC;;3589\n");
Int32 wr;
  printf("\nSTMT_EXEC;;3590\n");
Int32 EOB;
  printf("\nSTMT_EXEC;;3591\n");
UInt32 *ptr;
  printf("\nSTMT_EXEC;;3592\n");
UChar *block;
  printf("\nSTMT_EXEC;;3593\n");
UInt16 *mtfv;
  printf("\nSTMT_EXEC;;3594\n");
UChar ll_i;
  printf("\nSTMT_EXEC;;3595\n");
register UChar rtmp;
  printf("\nSTMT_EXEC;;3596\n");
register UChar *ryy_j;
  printf("\nSTMT_EXEC;;3597\n");
register UChar rll_i;
  printf("\nSTMT_EXEC;;3598\n");
register UChar rtmp2;

  {
    {
      printf("\nSTMT_EXEC;;3602\n");
ptr = s->ptr;
      printf("\nSTMT_EXEC;;3603\n");
block = s->block;
      printf("\nSTMT_EXEC;;3604\n");
mtfv = s->mtfv;
      printf("\nSTMT_EXEC;;3605\n");
makeMaps_e(s);
      printf("\nSTMT_EXEC;;3606\n");
EOB = s->nInUse + 1;
      printf("\nSTMT_EXEC;;3607\n");
i = 0;
    }
    {
      printf("\nSTMT_EXEC;;3610\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3613\n");
if (!(i <= EOB))
        {
          printf("\nSTMT_EXEC;;3615\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;3617\n");
s->mtfFreq[i] = 0;
        printf("\nSTMT_EXEC;;3618\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3622\n");
wr = 0;
    printf("\nSTMT_EXEC;;3623\n");
zPend = 0;
    printf("\nSTMT_EXEC;;3624\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;3626\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3629\n");
if (!(i < s->nInUse))
        {
          printf("\nSTMT_EXEC;;3631\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;3633\n");
yy[i] = (UChar)i;
        printf("\nSTMT_EXEC;;3634\n");
i++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3638\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;3640\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3643\n");
if (!(i < s->nblock))
        {
          printf("\nSTMT_EXEC;;3645\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;3647\n");
j = (Int32)(*(ptr + i) - 1U);
        printf("\nSTMT_EXEC;;3648\n");
if (j < 0)
        {
          printf("\nSTMT_EXEC;;3650\n");
j += s->nblock;
        }
        printf("\nSTMT_EXEC;;3652\n");
ll_i = s->unseqToSeq[*(block + j)];
        printf("\nSTMT_EXEC;;3653\n");
if ((int)yy[0] == (int)ll_i)
        {
          printf("\nSTMT_EXEC;;3655\n");
zPend++;
        }
        else
        {
          printf("\nSTMT_EXEC;;3659\n");
if (zPend > 0)
          {
            printf("\nSTMT_EXEC;;3661\n");
zPend--;
            {
              printf("\nSTMT_EXEC;;3663\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;3666\n");
if (zPend & 1)
                {
                  printf("\nSTMT_EXEC;;3668\n");
*(mtfv + wr) = (UInt16)1;
                  printf("\nSTMT_EXEC;;3669\n");
wr++;
                  printf("\nSTMT_EXEC;;3670\n");
(s->mtfFreq[1])++;
                }
                else
                {
                  printf("\nSTMT_EXEC;;3674\n");
*(mtfv + wr) = (UInt16)0;
                  printf("\nSTMT_EXEC;;3675\n");
wr++;
                  printf("\nSTMT_EXEC;;3676\n");
(s->mtfFreq[0])++;
                }
                printf("\nSTMT_EXEC;;3678\n");
if (zPend < 2)
                {
                  printf("\nSTMT_EXEC;;3680\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;3682\n");
zPend = (zPend - 2) / 2;
              }
            while_break___2: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;3686\n");
zPend = 0;
          }
          printf("\nSTMT_EXEC;;3688\n");
rtmp = yy[1];
          printf("\nSTMT_EXEC;;3689\n");
yy[1] = yy[0];
          printf("\nSTMT_EXEC;;3690\n");
ryy_j = &yy[1];
          printf("\nSTMT_EXEC;;3691\n");
rll_i = ll_i;
          {
            printf("\nSTMT_EXEC;;3693\n");
while (1)
            {
              ;
              printf("\nSTMT_EXEC;;3696\n");
if (!((int)rll_i != (int)rtmp))
              {
                printf("\nSTMT_EXEC;;3698\n");
goto while_break___3;
              }
              printf("\nSTMT_EXEC;;3700\n");
ryy_j++;
              printf("\nSTMT_EXEC;;3701\n");
rtmp2 = rtmp;
              printf("\nSTMT_EXEC;;3702\n");
rtmp = *ryy_j;
              printf("\nSTMT_EXEC;;3703\n");
*ryy_j = rtmp2;
            }
          while_break___3: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;3707\n");
yy[0] = rtmp;
          printf("\nSTMT_EXEC;;3708\n");
j = (Int32)(ryy_j - &yy[0]);
          printf("\nSTMT_EXEC;;3709\n");
*(mtfv + wr) = (UInt16)(j + 1);
          printf("\nSTMT_EXEC;;3710\n");
wr++;
          printf("\nSTMT_EXEC;;3711\n");
(s->mtfFreq[j + 1])++;
        }
        printf("\nSTMT_EXEC;;3713\n");
i++;
      }
    while_break___1: /* CIL Label */;
    }





























    printf("\nSTMT_EXEC;;3746\n");
*(mtfv + wr) = (UInt16)EOB;
    printf("\nSTMT_EXEC;;3747\n");
wr++;

    printf("\nSTMT_EXEC;;3749\n");
s->nMTF = wr;

  }
printf("\nFUNC_RETURN;;\n");
}
static void sendMTFValues(EState *s)
{
  printf("\nFUNC_CALL;sendMTFValues(EState *);\n");
printf("\nSTMT_EXEC;;3755\n");
Int32 v;
  printf("\nSTMT_EXEC;;3756\n");
Int32 t;
  printf("\nSTMT_EXEC;;3757\n");
Int32 i;
  printf("\nSTMT_EXEC;;3758\n");
Int32 j;
  printf("\nSTMT_EXEC;;3759\n");
Int32 gs;
  printf("\nSTMT_EXEC;;3760\n");
Int32 ge;

  printf("\nSTMT_EXEC;;3762\n");
Int32 bt;
  printf("\nSTMT_EXEC;;3763\n");
Int32 bc;
  printf("\nSTMT_EXEC;;3764\n");
Int32 iter;
  printf("\nSTMT_EXEC;;3765\n");
Int32 nSelectors;
  printf("\nSTMT_EXEC;;3766\n");
Int32 alphaSize;
  printf("\nSTMT_EXEC;;3767\n");
Int32 minLen;
  printf("\nSTMT_EXEC;;3768\n");
Int32 maxLen;
  printf("\nSTMT_EXEC;;3769\n");
Int32 selCtr;
  printf("\nSTMT_EXEC;;3770\n");
Int32 nGroups;

  printf("\nSTMT_EXEC;;3772\n");
UInt16 cost[6];

  printf("\nSTMT_EXEC;;3774\n");
UInt16 *mtfv;
  printf("\nSTMT_EXEC;;3775\n");
Int32 nPart;
  printf("\nSTMT_EXEC;;3776\n");
Int32 remF;
  printf("\nSTMT_EXEC;;3777\n");
Int32 tFreq;
  printf("\nSTMT_EXEC;;3778\n");
Int32 aFreq;




  printf("\nSTMT_EXEC;;3783\n");
UInt16 icv___0;
  printf("\nSTMT_EXEC;;3784\n");
UChar pos[6];
  printf("\nSTMT_EXEC;;3785\n");
UChar ll_i;
  printf("\nSTMT_EXEC;;3786\n");
UChar tmp2;
  printf("\nSTMT_EXEC;;3787\n");
UChar tmp;
  printf("\nSTMT_EXEC;;3788\n");
Bool inUse16[16];
  printf("\nSTMT_EXEC;;3789\n");
Int32 curr;







  {
    printf("\nSTMT_EXEC;;3798\n");
mtfv = s->mtfv;









    printf("\nSTMT_EXEC;;3808\n");
alphaSize = s->nInUse + 2;

    {























































      printf("\nSTMT_EXEC;;3866\n");
nGroups = 6;



    }
    printf("\nSTMT_EXEC;;3871\n");
nPart = nGroups;
    printf("\nSTMT_EXEC;;3872\n");
remF = s->nMTF;
    printf("\nSTMT_EXEC;;3873\n");
gs = 0;
    {
      printf("\nSTMT_EXEC;;3875\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3878\n");
if (!(nPart > 0))
        {
          printf("\nSTMT_EXEC;;3880\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;3882\n");
tFreq = remF / nPart;
        printf("\nSTMT_EXEC;;3883\n");
ge = gs - 1;
        printf("\nSTMT_EXEC;;3884\n");
aFreq = 0;
        {
          printf("\nSTMT_EXEC;;3886\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;3889\n");
if (aFreq < tFreq)
            {
              printf("\nSTMT_EXEC;;3891\n");
if (!(ge < alphaSize - 1))
              {
                printf("\nSTMT_EXEC;;3893\n");
goto while_break___2;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;3898\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;3900\n");
ge++;
            printf("\nSTMT_EXEC;;3901\n");
aFreq += s->mtfFreq[ge];
          }
        while_break___2: /* CIL Label */;
        }

        {




          printf("\nSTMT_EXEC;;3911\n");
if ((nGroups - nPart) % 2 == 1)
          {
            printf("\nSTMT_EXEC;;3913\n");
aFreq -= s->mtfFreq[ge];
            printf("\nSTMT_EXEC;;3914\n");
ge--;
          }
        }











        printf("\nSTMT_EXEC;;3928\n");
v = 0;
        {
          printf("\nSTMT_EXEC;;3930\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;3933\n");
if (!(v < alphaSize))
            {
              printf("\nSTMT_EXEC;;3935\n");
goto while_break___3;
            }
            printf("\nSTMT_EXEC;;3937\n");
if (v >= gs)
            {
              printf("\nSTMT_EXEC;;3939\n");
if (v <= ge)
              {
                printf("\nSTMT_EXEC;;3941\n");
s->len[nPart - 1][v] = (UChar)0;
              }
              else
              {
                printf("\nSTMT_EXEC;;3945\n");
s->len[nPart - 1][v] = (UChar)15;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;3950\n");
s->len[nPart - 1][v] = (UChar)15;
            }
            printf("\nSTMT_EXEC;;3952\n");
v++;
          }
        while_break___3: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;3956\n");
nPart--;
        printf("\nSTMT_EXEC;;3957\n");
gs = ge + 1;
        printf("\nSTMT_EXEC;;3958\n");
remF -= aFreq;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3962\n");
iter = 0;
    {
      printf("\nSTMT_EXEC;;3964\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;3967\n");
if (!(iter < 4))
        {
          printf("\nSTMT_EXEC;;3969\n");
goto while_break___4;
        }
        printf("\nSTMT_EXEC;;3971\n");
t = 0;
        {
          printf("\nSTMT_EXEC;;3973\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;3976\n");
if (!(t < nGroups))
            {














              printf("\nSTMT_EXEC;;3992\n");
goto while_break___6;
            }
            printf("\nSTMT_EXEC;;3994\n");
v = 0;
            {
              printf("\nSTMT_EXEC;;3996\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;3999\n");
if (!(v < alphaSize))
                {
                  printf("\nSTMT_EXEC;;4001\n");
goto while_break___7;
                }
                printf("\nSTMT_EXEC;;4003\n");
s->rfreq[t][v] = 0;
                printf("\nSTMT_EXEC;;4004\n");
v++;
              }
            while_break___7: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;4008\n");
t++;
          }
        while_break___6: /* CIL Label */;
        }



















        printf("\nSTMT_EXEC;;4031\n");
nSelectors = 0;

        printf("\nSTMT_EXEC;;4033\n");
gs = 0;
        {
          printf("\nSTMT_EXEC;;4035\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4038\n");
if (!(!(gs >= s->nMTF)))
            {
              printf("\nSTMT_EXEC;;4040\n");
goto while_break___9;
            }
            printf("\nSTMT_EXEC;;4042\n");
ge = (gs + 50) - 1;
            printf("\nSTMT_EXEC;;4043\n");
if (ge >= s->nMTF)
            {
              printf("\nSTMT_EXEC;;4045\n");
ge = s->nMTF - 1;
            }
            printf("\nSTMT_EXEC;;4047\n");
t = 0;
            {
              printf("\nSTMT_EXEC;;4049\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;4052\n");
if (!(t < nGroups))
                {
                  printf("\nSTMT_EXEC;;4054\n");
goto while_break___10;
                }
                printf("\nSTMT_EXEC;;4056\n");
cost[t] = (UInt16)0;
                printf("\nSTMT_EXEC;;4057\n");
t++;
              }
            while_break___10: /* CIL Label */;
            }

            {




























































































































































































































              printf("\nSTMT_EXEC;;4283\n");
i = gs;
              {
                printf("\nSTMT_EXEC;;4285\n");
while (1)
                {
                  ;
                  printf("\nSTMT_EXEC;;4288\n");
if (!(i <= ge))
                  {
                    printf("\nSTMT_EXEC;;4290\n");
goto while_break___11;
                  }
                  printf("\nSTMT_EXEC;;4292\n");
icv___0 = *(mtfv + i);
                  printf("\nSTMT_EXEC;;4293\n");
t = 0;
                  {
                    printf("\nSTMT_EXEC;;4295\n");
while (1)
                    {
                      ;
                      printf("\nSTMT_EXEC;;4298\n");
if (!(t < nGroups))
                      {
                        printf("\nSTMT_EXEC;;4300\n");
goto while_break___12;
                      }
                      printf("\nSTMT_EXEC;;4302\n");
cost[t] = (UInt16)((int)cost[t] + (int)s->len[t][icv___0]);
                      printf("\nSTMT_EXEC;;4303\n");
t++;
                    }
                  while_break___12: /* CIL Label */;
                  }
                  printf("\nSTMT_EXEC;;4307\n");
i++;
                }
              while_break___11: /* CIL Label */;
              }
            }
            printf("\nSTMT_EXEC;;4312\n");
bc = 999999999;

            printf("\nSTMT_EXEC;;4314\n");
t = 0;
            {
              printf("\nSTMT_EXEC;;4316\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;4319\n");
if (!(t < nGroups))
                {
                  printf("\nSTMT_EXEC;;4321\n");
goto while_break___13;
                }
                printf("\nSTMT_EXEC;;4323\n");
if ((int)cost[t] < bc)
                {
                  printf("\nSTMT_EXEC;;4325\n");
bc = (Int32)cost[t];
                  printf("\nSTMT_EXEC;;4326\n");
bt = t;
                }
                printf("\nSTMT_EXEC;;4328\n");
t++;
              }
            while_break___13: /* CIL Label */;
            }


            printf("\nSTMT_EXEC;;4334\n");
s->selector[nSelectors] = (UChar)bt;
            printf("\nSTMT_EXEC;;4335\n");
nSelectors++;

            {





























































              printf("\nSTMT_EXEC;;4399\n");
i = gs;
              {
                printf("\nSTMT_EXEC;;4401\n");
while (1)
                {
                  ;
                  printf("\nSTMT_EXEC;;4404\n");
if (!(i <= ge))
                  {
                    printf("\nSTMT_EXEC;;4406\n");
goto while_break___14;
                  }
                  printf("\nSTMT_EXEC;;4408\n");
(s->rfreq[bt][*(mtfv + i)])++;
                  printf("\nSTMT_EXEC;;4409\n");
i++;
                }
              while_break___14: /* CIL Label */;
              }
            }
            printf("\nSTMT_EXEC;;4414\n");
gs = ge + 1;
          }
        while_break___9: /* CIL Label */;
        }







        printf("\nSTMT_EXEC;;4425\n");
t = 0;

        {
          printf("\nSTMT_EXEC;;4428\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4431\n");
if (!(t < nGroups))
            {




















              printf("\nSTMT_EXEC;;4453\n");
goto while_break___16;
            }
            {
              printf("\nSTMT_EXEC;;4456\n");
BZ2_hbMakeCodeLengths(&s->len[t][0], &s->rfreq[t][0], alphaSize, 17);
              printf("\nSTMT_EXEC;;4457\n");
t++;
            }
          }
        while_break___16: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4462\n");
iter++;
      }
    while_break___4: /* CIL Label */;
    }





















    printf("\nSTMT_EXEC;;4487\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;4489\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4492\n");
if (!(i < nGroups))
        {
          printf("\nSTMT_EXEC;;4494\n");
goto while_break___17;
        }
        printf("\nSTMT_EXEC;;4496\n");
pos[i] = (UChar)i;
        printf("\nSTMT_EXEC;;4497\n");
i++;
      }
    while_break___17: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4501\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;4503\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4506\n");
if (!(i < nSelectors))
        {
          printf("\nSTMT_EXEC;;4508\n");
goto while_break___18;
        }
        printf("\nSTMT_EXEC;;4510\n");
ll_i = s->selector[i];
        printf("\nSTMT_EXEC;;4511\n");
j = 0;
        printf("\nSTMT_EXEC;;4512\n");
tmp = pos[j];
        {
          printf("\nSTMT_EXEC;;4514\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4517\n");
if (!((int)ll_i != (int)tmp))
            {
              printf("\nSTMT_EXEC;;4519\n");
goto while_break___19;
            }
            printf("\nSTMT_EXEC;;4521\n");
j++;
            printf("\nSTMT_EXEC;;4522\n");
tmp2 = tmp;
            printf("\nSTMT_EXEC;;4523\n");
tmp = pos[j];
            printf("\nSTMT_EXEC;;4524\n");
pos[j] = tmp2;
          }
        while_break___19: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4528\n");
pos[0] = tmp;
        printf("\nSTMT_EXEC;;4529\n");
s->selectorMtf[i] = (UChar)j;
        printf("\nSTMT_EXEC;;4530\n");
i++;
      }
    while_break___18: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4534\n");
t = 0;
    {
      printf("\nSTMT_EXEC;;4536\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4539\n");
if (!(t < nGroups))
        {
          printf("\nSTMT_EXEC;;4541\n");
goto while_break___20;
        }
        printf("\nSTMT_EXEC;;4543\n");
minLen = 32;

        printf("\nSTMT_EXEC;;4545\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;4547\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4550\n");
if (!(i < alphaSize))
            {
              printf("\nSTMT_EXEC;;4552\n");
goto while_break___21;
            }

            {
              printf("\nSTMT_EXEC;;4556\n");
maxLen = (Int32)s->len[t][i];
            }
            printf("\nSTMT_EXEC;;4558\n");
if ((int)s->len[t][i] < minLen)
            {
              printf("\nSTMT_EXEC;;4560\n");
minLen = (Int32)s->len[t][i];
            }
            printf("\nSTMT_EXEC;;4562\n");
i++;
          }
        while_break___21: /* CIL Label */;
        }












        {
          printf("\nSTMT_EXEC;;4579\n");
BZ2_hbAssignCodes(&s->code[t][0], &s->len[t][0], minLen, maxLen, alphaSize);
          printf("\nSTMT_EXEC;;4580\n");
t++;
        }
      }
    while_break___20: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4585\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;4587\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4590\n");
if (!(i < 16))
        {
































          printf("\nSTMT_EXEC;;4624\n");
goto while_break___24;
        }

        {

          printf("\nSTMT_EXEC;;4629\n");
bsW(s, 1, (UInt32)1);
        }







        printf("\nSTMT_EXEC;;4638\n");
i++;
      }
    while_break___24: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4642\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;4644\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4647\n");
if (!(i < 16))
        {
          printf("\nSTMT_EXEC;;4649\n");
goto while_break___25;
        }

        {
          printf("\nSTMT_EXEC;;4653\n");
j = 0;
          {
            printf("\nSTMT_EXEC;;4655\n");
while (1)
            {
              ;
              printf("\nSTMT_EXEC;;4658\n");
if (!(j < 16))
              {
                printf("\nSTMT_EXEC;;4660\n");
goto while_break___26;
              }

              {

                printf("\nSTMT_EXEC;;4665\n");
bsW(s, 1, (UInt32)1);
              }







              printf("\nSTMT_EXEC;;4674\n");
j++;
            }
          while_break___26: /* CIL Label */;
          }
        }
        printf("\nSTMT_EXEC;;4679\n");
i++;
      }
    while_break___25: /* CIL Label */;
    }

    {






      printf("\nSTMT_EXEC;;4691\n");
bsW(s, 3, (UInt32)nGroups);
      printf("\nSTMT_EXEC;;4692\n");
bsW(s, 15, (UInt32)nSelectors);
      printf("\nSTMT_EXEC;;4693\n");
i = 0;
    }
    {
      printf("\nSTMT_EXEC;;4696\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4699\n");
if (!(i < nSelectors))
        {
          printf("\nSTMT_EXEC;;4701\n");
goto while_break___27;
        }
        printf("\nSTMT_EXEC;;4703\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;4705\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4708\n");
if (!(j < (Int32)s->selectorMtf[i]))
            {
              printf("\nSTMT_EXEC;;4710\n");
goto while_break___28;
            }
            {
              printf("\nSTMT_EXEC;;4713\n");
bsW(s, 1, (UInt32)1);
              printf("\nSTMT_EXEC;;4714\n");
j++;
            }
          }
        while_break___28: /* CIL Label */;
        }
        {
          printf("\nSTMT_EXEC;;4720\n");
bsW(s, 1, (UInt32)0);
          printf("\nSTMT_EXEC;;4721\n");
i++;
        }
      }
    while_break___27: /* CIL Label */;
    }







    printf("\nSTMT_EXEC;;4733\n");
t = 0;
    {
      printf("\nSTMT_EXEC;;4735\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4738\n");
if (!(t < nGroups))
        {
          printf("\nSTMT_EXEC;;4740\n");
goto while_break___29;
        }
        {
          printf("\nSTMT_EXEC;;4743\n");
curr = (Int32)s->len[t][0];
          printf("\nSTMT_EXEC;;4744\n");
bsW(s, 5, (UInt32)curr);
          printf("\nSTMT_EXEC;;4745\n");
i = 0;
        }
        {
          printf("\nSTMT_EXEC;;4748\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;4751\n");
if (!(i < alphaSize))
            {
              printf("\nSTMT_EXEC;;4753\n");
goto while_break___30;
            }
            {
              printf("\nSTMT_EXEC;;4756\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;4759\n");
if (!(curr < (Int32)s->len[t][i]))
                {
                  printf("\nSTMT_EXEC;;4761\n");
goto while_break___31;
                }
                {
                  printf("\nSTMT_EXEC;;4764\n");
bsW(s, 2, (UInt32)2);
                  printf("\nSTMT_EXEC;;4765\n");
curr++;
                }
              }
            while_break___31: /* CIL Label */;
            }
            {
              printf("\nSTMT_EXEC;;4771\n");
while (1)
              {
                ;
                printf("\nSTMT_EXEC;;4774\n");
if (!(curr > (Int32)s->len[t][i]))
                {
                  printf("\nSTMT_EXEC;;4776\n");
goto while_break___32;
                }
                {
                  printf("\nSTMT_EXEC;;4779\n");
bsW(s, 2, (UInt32)3);
                  printf("\nSTMT_EXEC;;4780\n");
curr--;
                }
              }
            while_break___32: /* CIL Label */;
            }
            {
              printf("\nSTMT_EXEC;;4786\n");
bsW(s, 1, (UInt32)0);
              printf("\nSTMT_EXEC;;4787\n");
i++;
            }
          }
        while_break___30: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4792\n");
t++;
      }
    while_break___29: /* CIL Label */;
    }







    printf("\nSTMT_EXEC;;4803\n");
selCtr = 0;
    printf("\nSTMT_EXEC;;4804\n");
gs = 0;
    {
      printf("\nSTMT_EXEC;;4806\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;4809\n");
if (!(!(gs >= s->nMTF)))
        {
          printf("\nSTMT_EXEC;;4811\n");
goto while_break___33;
        }
        printf("\nSTMT_EXEC;;4813\n");
ge = (gs + 50) - 1;
        printf("\nSTMT_EXEC;;4814\n");
if (ge >= s->nMTF)
        {
          printf("\nSTMT_EXEC;;4816\n");
ge = s->nMTF - 1;
        }

        {

























































































































          printf("\nSTMT_EXEC;;4941\n");
i = gs;
          {
            printf("\nSTMT_EXEC;;4943\n");
while (1)
            {
              ;
              printf("\nSTMT_EXEC;;4946\n");
if (!(i <= ge))
              {
                printf("\nSTMT_EXEC;;4948\n");
goto while_break___34;
              }
              {
                printf("\nSTMT_EXEC;;4951\n");
bsW(s, (Int32)s->len[s->selector[selCtr]][*(mtfv + i)], (UInt32)s->code[s->selector[selCtr]][*(mtfv + i)]);
                printf("\nSTMT_EXEC;;4952\n");
i++;
              }
            }
          while_break___34: /* CIL Label */;
          }
        }
        printf("\nSTMT_EXEC;;4958\n");
gs = ge + 1;
        printf("\nSTMT_EXEC;;4959\n");
selCtr++;
      }
    while_break___33: /* CIL Label */;
    }













  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_compressBlock(EState *s, Bool is_last_block)
{


  printf("\nFUNC_CALL;BZ2_compressBlock(EState *,Bool);\n");
{
    printf("\nSTMT_EXEC;;4983\n");
s->blockCRC = ~s->blockCRC;

    printf("\nSTMT_EXEC;;4985\n");
s->combinedCRC ^= s->blockCRC;













    {
      printf("\nSTMT_EXEC;;5000\n");
BZ2_blockSort(s);
    }
  }
  printf("\nSTMT_EXEC;;5003\n");
s->zbits = (UChar *)s->arr2 + s->nblock;

  {

    printf("\nSTMT_EXEC;;5007\n");
BZ2_bsInitWrite(s);
    printf("\nSTMT_EXEC;;5008\n");
bsPutUChar(s, (UChar)66);
    printf("\nSTMT_EXEC;;5009\n");
bsPutUChar(s, (UChar)90);
    printf("\nSTMT_EXEC;;5010\n");
bsPutUChar(s, (UChar)104);
    printf("\nSTMT_EXEC;;5011\n");
bsPutUChar(s, (UChar)(48 + s->blockSize100k));
  }


  {

    printf("\nSTMT_EXEC;;5017\n");
bsPutUChar(s, (UChar)49);
    printf("\nSTMT_EXEC;;5018\n");
bsPutUChar(s, (UChar)65);
    printf("\nSTMT_EXEC;;5019\n");
bsPutUChar(s, (UChar)89);
    printf("\nSTMT_EXEC;;5020\n");
bsPutUChar(s, (UChar)38);
    printf("\nSTMT_EXEC;;5021\n");
bsPutUChar(s, (UChar)83);
    printf("\nSTMT_EXEC;;5022\n");
bsPutUChar(s, (UChar)89);
    printf("\nSTMT_EXEC;;5023\n");
bsPutUInt32(s, s->blockCRC);
    printf("\nSTMT_EXEC;;5024\n");
bsW(s, 1, (UInt32)0);
    printf("\nSTMT_EXEC;;5025\n");
bsW(s, 24, (UInt32)s->origPtr);
    printf("\nSTMT_EXEC;;5026\n");
generateMTFValues(s);
    printf("\nSTMT_EXEC;;5027\n");
sendMTFValues(s);
  }


  {
    {
      printf("\nSTMT_EXEC;;5033\n");
bsPutUChar(s, (UChar)23);
      printf("\nSTMT_EXEC;;5034\n");
bsPutUChar(s, (UChar)114);
      printf("\nSTMT_EXEC;;5035\n");
bsPutUChar(s, (UChar)69);
      printf("\nSTMT_EXEC;;5036\n");
bsPutUChar(s, (UChar)56);
      printf("\nSTMT_EXEC;;5037\n");
bsPutUChar(s, (UChar)80);
      printf("\nSTMT_EXEC;;5038\n");
bsPutUChar(s, (UChar)144);
      printf("\nSTMT_EXEC;;5039\n");
bsPutUInt32(s, s->combinedCRC);
    }






    {
      printf("\nSTMT_EXEC;;5048\n");
bsFinishWrite(s);
    }


  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) free)(void *__ptr);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__)) exit)(int __status);
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern int fclose(FILE *__stream);
extern int fflush(FILE *__stream);
extern __attribute__((__nothrow__)) FILE *(__attribute__((__leaf__)) fdopen)(int __fd, char const *__modes);
extern int fgetc(FILE *__stream);
extern int ungetc(int __c, FILE *__stream);
extern size_t fread(void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream);
extern size_t fwrite(void const *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __s);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) ferror)(FILE *__stream);
extern __attribute__((__nothrow__)) unsigned short const **(__attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strcat)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
int BZ2_bzCompressInit(bz_stream *strm, int blockSize100k___0, int verbosity___0, int workFactor___0);
int BZ2_bzCompress(bz_stream *strm, int action);
int BZ2_bzCompressEnd(bz_stream *strm);
int BZ2_bzDecompressInit(bz_stream *strm, int verbosity___0, int small);
int BZ2_bzDecompress(bz_stream *strm);
int BZ2_bzDecompressEnd(bz_stream *strm);
BZFILE *BZ2_bzReadOpen(int *bzerror, FILE *f, int verbosity___0, int small, void *unused, int nUnused);
void BZ2_bzReadClose(int *bzerror, BZFILE *b);
void BZ2_bzReadGetUnused(int *bzerror, BZFILE *b, void **unused, int *nUnused);
int BZ2_bzRead(int *bzerror, BZFILE *b, void *buf, int len);
BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE *f, int blockSize100k___0, int verbosity___0, int workFactor___0);
void BZ2_bzWrite(int *bzerror, BZFILE *b, void *buf, int len);
void BZ2_bzWriteClose64(int *bzerror, BZFILE *b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32);
char const *BZ2_bzlibVersion(void);















































































static void *default_bzalloc(void *opaque, Int32 items, Int32 size)
{
  printf("\nFUNC_CALL;default_bzalloc(void *,Int32,Int32);\n");
printf("\nSTMT_EXEC;;5165\n");
void *v;
  printf("\nSTMT_EXEC;;5166\n");
void *tmp;
  {
    {
      printf("\nSTMT_EXEC;;5169\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
tmp = malloc((size_t)(items * size));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;5170\n");
v = tmp;
    }
    printf("\nSTMT_EXEC;;5172\n");
printf("\nFUNC_RETURN;;\n");
return (v);
  }
printf("\nFUNC_RETURN;;\n");
}
static void default_bzfree(void *opaque, void *addr)
{




  printf("\nFUNC_CALL;default_bzfree(void *,void *);\n");
printf("\nSTMT_EXEC;;5181\n");
printf("\nFUNC_CALL;free(void *);\n");
free(addr);printf("\nFUNC_RETURN;;\n");





printf("\nFUNC_RETURN;;\n");
}
static void prepare_new_block(EState *s)
{


  printf("\nFUNC_CALL;prepare_new_block(EState *);\n");
printf("\nSTMT_EXEC;;5191\n");
s->nblock = 0;
  printf("\nSTMT_EXEC;;5192\n");
s->numZ = 0;
  printf("\nSTMT_EXEC;;5193\n");
s->state_out_pos = 0;
  printf("\nSTMT_EXEC;;5194\n");
s->blockCRC = (UInt32)4294967295L;

















printf("\nFUNC_RETURN;;\n");
}
static void init_RL(EState *s)
{

  printf("\nFUNC_CALL;init_RL(EState *);\n");
printf("\nSTMT_EXEC;;5216\n");
s->state_in_ch = (UInt32)256;
  printf("\nSTMT_EXEC;;5217\n");
s->state_in_len = 0;

printf("\nFUNC_RETURN;;\n");
}





















int BZ2_bzCompressInit(bz_stream *strm, int blockSize100k___0, int verbosity___0, int workFactor___0)
{
  printf("\nFUNC_CALL;BZ2_bzCompressInit(bz_stream *,int,int,int);\n");
printf("\nSTMT_EXEC;;5243\n");
Int32 n;
  printf("\nSTMT_EXEC;;5244\n");
EState *s;

  {












































    {
      printf("\nSTMT_EXEC;;5292\n");
strm->bzalloc = &default_bzalloc;
    }

    {
      printf("\nSTMT_EXEC;;5296\n");
strm->bzfree = &default_bzfree;
    }
    {
      printf("\nSTMT_EXEC;;5299\n");
s = (EState *)(*(strm->bzalloc))(strm->opaque, (int)sizeof(EState), 1);
    }




    {
      printf("\nSTMT_EXEC;;5306\n");
s->strm = strm;



      printf("\nSTMT_EXEC;;5310\n");
n = 100000 * blockSize100k___0;
      printf("\nSTMT_EXEC;;5311\n");
s->arr1 = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)n * sizeof(UInt32)), 1);
      printf("\nSTMT_EXEC;;5312\n");
s->arr2 = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)(n + 34) * sizeof(UInt32)), 1);
      printf("\nSTMT_EXEC;;5313\n");
s->ftab = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)(65537UL * sizeof(UInt32)), 1);
    }

    {











































      printf("\nSTMT_EXEC;;5360\n");
s->state = 2;
      printf("\nSTMT_EXEC;;5361\n");
s->mode = 2;
      printf("\nSTMT_EXEC;;5362\n");
s->combinedCRC = (UInt32)0;
      printf("\nSTMT_EXEC;;5363\n");
s->blockSize100k = blockSize100k___0;



      printf("\nSTMT_EXEC;;5367\n");
s->block = (UChar *)s->arr2;
      printf("\nSTMT_EXEC;;5368\n");
s->mtfv = (UInt16 *)s->arr1;

      printf("\nSTMT_EXEC;;5370\n");
s->ptr = s->arr1;
      printf("\nSTMT_EXEC;;5371\n");
strm->state = (void *)s;




      printf("\nSTMT_EXEC;;5376\n");
init_RL(s);
      printf("\nSTMT_EXEC;;5377\n");
prepare_new_block(s);
    }
    printf("\nSTMT_EXEC;;5379\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static void add_pair_to_block(EState *s)
{
  printf("\nFUNC_CALL;add_pair_to_block(EState *);\n");
printf("\nSTMT_EXEC;;5384\n");
Int32 i;
  printf("\nSTMT_EXEC;;5385\n");
UChar ch;
  {
    printf("\nSTMT_EXEC;;5387\n");
ch = (UChar)s->state_in_ch;
    printf("\nSTMT_EXEC;;5388\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;5390\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;5393\n");
if (!(i < s->state_in_len))
        {
          printf("\nSTMT_EXEC;;5395\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5397\n");
s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ (unsigned int)ch];
        printf("\nSTMT_EXEC;;5398\n");
i++;
      }
    while_break: /* CIL Label */;
    }

    {




      printf("\nSTMT_EXEC;;5408\n");
if (s->state_in_len == 2)
      {
        printf("\nSTMT_EXEC;;5410\n");
goto case_2;
      }
      printf("\nSTMT_EXEC;;5412\n");
if (s->state_in_len == 3)
      {
        printf("\nSTMT_EXEC;;5414\n");
goto case_3;
      }
      printf("\nSTMT_EXEC;;5416\n");
goto switch_default;




    case_2: /* CIL Label */
      {
printf("\nSTMT_EXEC;;5422\n");
*(s->block + s->nblock) = ch;
}

      printf("\nSTMT_EXEC;;5423\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5424\n");
*(s->block + s->nblock) = ch;
      printf("\nSTMT_EXEC;;5425\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5426\n");
goto switch_break;
    case_3: /* CIL Label */
      {
printf("\nSTMT_EXEC;;5428\n");
*(s->block + s->nblock) = ch;
}

      printf("\nSTMT_EXEC;;5429\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5430\n");
*(s->block + s->nblock) = ch;
      printf("\nSTMT_EXEC;;5431\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5432\n");
*(s->block + s->nblock) = ch;
      printf("\nSTMT_EXEC;;5433\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5434\n");
goto switch_break;
    switch_default: /* CIL Label */
      {
printf("\nSTMT_EXEC;;5436\n");
s->inUse[s->state_in_len - 4] = (Bool)1;
}

      printf("\nSTMT_EXEC;;5437\n");
*(s->block + s->nblock) = ch;
      printf("\nSTMT_EXEC;;5438\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5439\n");
*(s->block + s->nblock) = ch;
      printf("\nSTMT_EXEC;;5440\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5441\n");
*(s->block + s->nblock) = ch;
      printf("\nSTMT_EXEC;;5442\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5443\n");
*(s->block + s->nblock) = ch;
      printf("\nSTMT_EXEC;;5444\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5445\n");
*(s->block + s->nblock) = (UChar)(s->state_in_len - 4);
      printf("\nSTMT_EXEC;;5446\n");
(s->nblock)++;

    switch_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void flush_RL(EState *s)
{




  printf("\nFUNC_CALL;flush_RL(EState *);\n");
printf("\nSTMT_EXEC;;5459\n");
add_pair_to_block(s);







printf("\nFUNC_RETURN;;\n");
}
static Bool copy_input_until_stop(EState *s)
{
  printf("\nFUNC_CALL;copy_input_until_stop(EState *);\n");
printf("\nSTMT_EXEC;;5470\n");
Bool progress_in;
  printf("\nSTMT_EXEC;;5471\n");
UInt32 zchh;
  printf("\nSTMT_EXEC;;5472\n");
UChar ch;


  {


    {
      {
        ;






        printf("\nSTMT_EXEC;;5487\n");
if ((s->strm)->avail_in == 0U)
        {
          printf("\nSTMT_EXEC;;5489\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5491\n");
progress_in = (Bool)1;
        printf("\nSTMT_EXEC;;5492\n");
zchh = (UInt32) * ((UChar *)(s->strm)->next_in);
        printf("\nSTMT_EXEC;;5493\n");
if (zchh != s->state_in_ch)
        {
          printf("\nSTMT_EXEC;;5495\n");
if (s->state_in_len == 1)
          {
            printf("\nSTMT_EXEC;;5497\n");
ch = (UChar)s->state_in_ch;
            printf("\nSTMT_EXEC;;5498\n");
s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ (unsigned int)ch];

            printf("\nSTMT_EXEC;;5500\n");
*(s->block + s->nblock) = ch;
            printf("\nSTMT_EXEC;;5501\n");
(s->nblock)++;
            printf("\nSTMT_EXEC;;5502\n");
s->state_in_ch = zchh;
          }
          else
          {
            printf("\nSTMT_EXEC;;5506\n");
goto _L___0;
          }
        }
        else
        {
        _L___0:
          {
printf("\nSTMT_EXEC;;5512\n");
if (zchh != s->state_in_ch)
          {
            printf("\nSTMT_EXEC;;5514\n");
goto _L;
          }
          else
          {
            printf("\nSTMT_EXEC;;5518\n");
if (s->state_in_len == 255)
            {
            _L:
              {
printf("\nSTMT_EXEC;;5521\n");
if (s->state_in_ch < 256U)
              {

                printf("\nSTMT_EXEC;;5524\n");
add_pair_to_block(s);

              }
}

              printf("\nSTMT_EXEC;;5527\n");
s->state_in_ch = zchh;
              printf("\nSTMT_EXEC;;5528\n");
s->state_in_len = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;5532\n");
(s->state_in_len)++;
            }
          }
}

        }
        printf("\nSTMT_EXEC;;5536\n");
((s->strm)->next_in)++;
        printf("\nSTMT_EXEC;;5537\n");
((s->strm)->avail_in)--;





      }
    while_break: /* CIL Label */;
    }












































































    printf("\nSTMT_EXEC;;5622\n");
printf("\nFUNC_RETURN;;\n");
return (progress_in);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool copy_output_until_stop(EState *s)
{
  printf("\nFUNC_CALL;copy_output_until_stop(EState *);\n");
printf("\nSTMT_EXEC;;5627\n");
Bool progress_out;
  {

    {

      {
        ;








        printf("\nSTMT_EXEC;;5642\n");
progress_out = (Bool)1;
        printf("\nSTMT_EXEC;;5643\n");
*((s->strm)->next_out) = (char)*(s->zbits + s->state_out_pos);
        printf("\nSTMT_EXEC;;5644\n");
(s->state_out_pos)++;
        printf("\nSTMT_EXEC;;5645\n");
((s->strm)->avail_out)--;





      };


    }
    printf("\nSTMT_EXEC;;5655\n");
printf("\nFUNC_RETURN;;\n");
return (progress_out);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool handle_compress(bz_stream *strm)
{
  printf("\nFUNC_CALL;handle_compress(bz_stream *);\n");
printf("\nSTMT_EXEC;;5660\n");
Bool progress_in;

  printf("\nSTMT_EXEC;;5662\n");
EState *s;
  printf("\nSTMT_EXEC;;5663\n");
Bool tmp;
  printf("\nSTMT_EXEC;;5664\n");
Bool tmp___0;

  printf("\nSTMT_EXEC;;5666\n");
Bool tmp___2;
  printf("\nSTMT_EXEC;;5667\n");
int tmp___3;
  {


    printf("\nSTMT_EXEC;;5671\n");
s = (EState *)strm->state;
    {

      {
        ;
        printf("\nSTMT_EXEC;;5676\n");
if (s->state == 1)
        {
          {
            printf("\nSTMT_EXEC;;5679\n");
tmp = copy_output_until_stop(s);

          }

          {
            printf("\nSTMT_EXEC;;5684\n");
goto while_break;
          }






        }

























        {
          {
            printf("\nSTMT_EXEC;;5720\n");
tmp___2 = copy_input_until_stop(s);

          }
          printf("\nSTMT_EXEC;;5723\n");
if (s->mode != 2)
          {



            printf("\nSTMT_EXEC;;5728\n");
flush_RL(s);
            printf("\nSTMT_EXEC;;5729\n");
BZ2_compressBlock(s, (Bool)(s->mode == 4));
            printf("\nSTMT_EXEC;;5730\n");
s->state = 1;
          }

          else
          {




















          }
        }
      }
    while_break: /* CIL Label */;
    }

    {
      printf("\nSTMT_EXEC;;5762\n");
tmp___3 = 1;
    }











    printf("\nSTMT_EXEC;;5775\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)tmp___3);
  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzCompress(bz_stream *strm, int action)
{
  printf("\nFUNC_CALL;BZ2_bzCompress(bz_stream *,int);\n");
printf("\nSTMT_EXEC;;5780\n");
Bool progress;
  printf("\nSTMT_EXEC;;5781\n");
EState *s;
  printf("\nSTMT_EXEC;;5782\n");
int tmp;

  printf("\nSTMT_EXEC;;5784\n");
Bool tmp___1;
  {




    printf("\nSTMT_EXEC;;5790\n");
s = (EState *)strm->state;

    {




























      printf("\nSTMT_EXEC;;5821\n");
if (action == 0)
      {






      }
      else
      {

















        printf("\nSTMT_EXEC;;5849\n");
s->mode = 4;

      }















      {
        printf("\nSTMT_EXEC;;5868\n");
progress = handle_compress(strm);
      }

      {









        printf("\nSTMT_EXEC;;5881\n");
if (s->state_out_pos < s->numZ)
        {




























          printf("\nSTMT_EXEC;;5911\n");
printf("\nFUNC_RETURN;;\n");
return (3);
        }




      }













      printf("\nSTMT_EXEC;;5931\n");
printf("\nFUNC_RETURN;;\n");
return (4);

    }

  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzCompressEnd(bz_stream *strm)
{
  printf("\nFUNC_CALL;BZ2_bzCompressEnd(bz_stream *);\n");
printf("\nSTMT_EXEC;;5939\n");
EState *s;
  {




    printf("\nSTMT_EXEC;;5945\n");
s = (EState *)strm->state;

    {









      printf("\nSTMT_EXEC;;5957\n");
(*(strm->bzfree))(strm->opaque, (void *)s->arr1);
    }


    {

      printf("\nSTMT_EXEC;;5963\n");
(*(strm->bzfree))(strm->opaque, (void *)s->arr2);
    }


    {

      printf("\nSTMT_EXEC;;5969\n");
(*(strm->bzfree))(strm->opaque, (void *)s->ftab);
    }

    {
      printf("\nSTMT_EXEC;;5973\n");
(*(strm->bzfree))(strm->opaque, strm->state);

    }
    printf("\nSTMT_EXEC;;5976\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzDecompressInit(bz_stream *strm, int verbosity___0, int small)
{
  printf("\nFUNC_CALL;BZ2_bzDecompressInit(bz_stream *,int,int);\n");
printf("\nSTMT_EXEC;;5981\n");
DState *s;

  {






























    {
      printf("\nSTMT_EXEC;;6015\n");
strm->bzalloc = &default_bzalloc;
    }

    {
      printf("\nSTMT_EXEC;;6019\n");
strm->bzfree = &default_bzfree;
    }
    {
      printf("\nSTMT_EXEC;;6022\n");
s = (DState *)(*(strm->bzalloc))(strm->opaque, (int)sizeof(DState), 1);
    }




    printf("\nSTMT_EXEC;;6028\n");
s->strm = strm;
    printf("\nSTMT_EXEC;;6029\n");
strm->state = (void *)s;
    printf("\nSTMT_EXEC;;6030\n");
s->state = 10;
    printf("\nSTMT_EXEC;;6031\n");
s->bsLive = 0;












    printf("\nSTMT_EXEC;;6044\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool unRLE_obuf_to_output_FAST(DState *s)
{
  printf("\nFUNC_CALL;unRLE_obuf_to_output_FAST(DState *);\n");
printf("\nSTMT_EXEC;;6049\n");
UChar k1;





  printf("\nSTMT_EXEC;;6055\n");
UInt32 c_calculatedBlockCRC;
  printf("\nSTMT_EXEC;;6056\n");
UChar c_state_out_ch;
  printf("\nSTMT_EXEC;;6057\n");
Int32 c_state_out_len;
  printf("\nSTMT_EXEC;;6058\n");
Int32 c_nblock_used;
  printf("\nSTMT_EXEC;;6059\n");
Int32 c_k0;
  printf("\nSTMT_EXEC;;6060\n");
UInt32 *c_tt;
  printf("\nSTMT_EXEC;;6061\n");
UInt32 c_tPos;
  printf("\nSTMT_EXEC;;6062\n");
char *cs_next_out;
  printf("\nSTMT_EXEC;;6063\n");
unsigned int cs_avail_out;
  printf("\nSTMT_EXEC;;6064\n");
Int32 ro_blockSize100k;

  printf("\nSTMT_EXEC;;6066\n");
Int32 s_save_nblockPP;
  printf("\nSTMT_EXEC;;6067\n");
unsigned int total_out_lo32_old;
  {





















































































































































































































    printf("\nSTMT_EXEC;;6282\n");
c_state_out_ch = s->state_out_ch;
    printf("\nSTMT_EXEC;;6283\n");
c_state_out_len = s->state_out_len;
    printf("\nSTMT_EXEC;;6284\n");
c_nblock_used = s->nblock_used;
    printf("\nSTMT_EXEC;;6285\n");
c_k0 = s->k0;
    printf("\nSTMT_EXEC;;6286\n");
c_tt = s->tt;
    printf("\nSTMT_EXEC;;6287\n");
c_tPos = s->tPos;
    printf("\nSTMT_EXEC;;6288\n");
cs_next_out = (s->strm)->next_out;
    printf("\nSTMT_EXEC;;6289\n");
cs_avail_out = (s->strm)->avail_out;


    printf("\nSTMT_EXEC;;6292\n");
s_save_nblockPP = s->save_nblock + 1;
    {
      printf("\nSTMT_EXEC;;6294\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;6297\n");
if (c_state_out_len > 0)
        {
          {
            printf("\nSTMT_EXEC;;6300\n");
while (1)
            {
              ;
              printf("\nSTMT_EXEC;;6303\n");
if (cs_avail_out == 0U)
              {
                printf("\nSTMT_EXEC;;6305\n");
goto return_notr;
              }
              printf("\nSTMT_EXEC;;6307\n");
if (c_state_out_len == 1)
              {
                printf("\nSTMT_EXEC;;6309\n");
goto while_break___2;
              }
              printf("\nSTMT_EXEC;;6311\n");
*((UChar *)cs_next_out) = c_state_out_ch;

              printf("\nSTMT_EXEC;;6313\n");
c_state_out_len--;
              printf("\nSTMT_EXEC;;6314\n");
cs_next_out++;
              printf("\nSTMT_EXEC;;6315\n");
cs_avail_out--;
            }
          while_break___2: /* CIL Label */;
          }
        s_state_out_len_eq_one:
          {
printf("\nSTMT_EXEC;;6320\n");
if (cs_avail_out == 0U)
          {

            printf("\nSTMT_EXEC;;6323\n");
goto return_notr;
          }
}

          printf("\nSTMT_EXEC;;6325\n");
*((UChar *)cs_next_out) = c_state_out_ch;

          printf("\nSTMT_EXEC;;6327\n");
cs_next_out++;
          printf("\nSTMT_EXEC;;6328\n");
cs_avail_out--;
        }
        printf("\nSTMT_EXEC;;6330\n");
if (c_nblock_used > s_save_nblockPP)
        {
          printf("\nSTMT_EXEC;;6332\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
        }
        printf("\nSTMT_EXEC;;6334\n");
if (c_nblock_used == s_save_nblockPP)
        {
          printf("\nSTMT_EXEC;;6336\n");
c_state_out_len = 0;
          printf("\nSTMT_EXEC;;6337\n");
goto return_notr;
        }
        printf("\nSTMT_EXEC;;6339\n");
c_state_out_ch = (UChar)c_k0;




        printf("\nSTMT_EXEC;;6344\n");
c_tPos = *(c_tt + c_tPos);
        printf("\nSTMT_EXEC;;6345\n");
k1 = (UChar)(c_tPos & 255U);
        printf("\nSTMT_EXEC;;6346\n");
c_tPos >>= 8;
        printf("\nSTMT_EXEC;;6347\n");
c_nblock_used++;
        printf("\nSTMT_EXEC;;6348\n");
if ((int)k1 != c_k0)
        {
          printf("\nSTMT_EXEC;;6350\n");
c_k0 = (Int32)k1;
          printf("\nSTMT_EXEC;;6351\n");
goto s_state_out_len_eq_one;
        }




        printf("\nSTMT_EXEC;;6357\n");
c_state_out_len = 2;




        printf("\nSTMT_EXEC;;6362\n");
c_tPos = *(c_tt + c_tPos);
        printf("\nSTMT_EXEC;;6363\n");
k1 = (UChar)(c_tPos & 255U);
        printf("\nSTMT_EXEC;;6364\n");
c_tPos >>= 8;
        printf("\nSTMT_EXEC;;6365\n");
c_nblock_used++;




        printf("\nSTMT_EXEC;;6370\n");
if ((int)k1 != c_k0)
        {
          printf("\nSTMT_EXEC;;6372\n");
c_k0 = (Int32)k1;
          printf("\nSTMT_EXEC;;6373\n");
goto while_continue___1;
        }
        printf("\nSTMT_EXEC;;6375\n");
c_state_out_len = 3;




        printf("\nSTMT_EXEC;;6380\n");
c_tPos = *(c_tt + c_tPos);
        printf("\nSTMT_EXEC;;6381\n");
k1 = (UChar)(c_tPos & 255U);
        printf("\nSTMT_EXEC;;6382\n");
c_tPos >>= 8;
        printf("\nSTMT_EXEC;;6383\n");
c_nblock_used++;




        printf("\nSTMT_EXEC;;6388\n");
if ((int)k1 != c_k0)
        {
          printf("\nSTMT_EXEC;;6390\n");
c_k0 = (Int32)k1;
          printf("\nSTMT_EXEC;;6391\n");
goto while_continue___1;
        }




        printf("\nSTMT_EXEC;;6397\n");
c_tPos = *(c_tt + c_tPos);
        printf("\nSTMT_EXEC;;6398\n");
k1 = (UChar)(c_tPos & 255U);
        printf("\nSTMT_EXEC;;6399\n");
c_tPos >>= 8;
        printf("\nSTMT_EXEC;;6400\n");
c_nblock_used++;
        printf("\nSTMT_EXEC;;6401\n");
c_state_out_len = (Int32)k1 + 4;




        printf("\nSTMT_EXEC;;6406\n");
c_tPos = *(c_tt + c_tPos);
        printf("\nSTMT_EXEC;;6407\n");
c_k0 = (Int32)((UChar)(c_tPos & 255U));
        printf("\nSTMT_EXEC;;6408\n");
c_tPos >>= 8;
        printf("\nSTMT_EXEC;;6409\n");
c_nblock_used++;
      };

    }
  return_notr:
    {
printf("\nSTMT_EXEC;;6414\n");
total_out_lo32_old = (s->strm)->total_out_lo32;
}







    printf("\nSTMT_EXEC;;6421\n");
s->state_out_ch = c_state_out_ch;
    printf("\nSTMT_EXEC;;6422\n");
s->state_out_len = c_state_out_len;
    printf("\nSTMT_EXEC;;6423\n");
s->nblock_used = c_nblock_used;
    printf("\nSTMT_EXEC;;6424\n");
s->k0 = c_k0;

    printf("\nSTMT_EXEC;;6426\n");
s->tPos = c_tPos;

    printf("\nSTMT_EXEC;;6428\n");
(s->strm)->avail_out = cs_avail_out;
  }

printf("\nFUNC_RETURN;;\n");
}


























































































































































































































































































































































































int BZ2_bzDecompress(bz_stream *strm)
{
  printf("\nFUNC_CALL;BZ2_bzDecompress(bz_stream *);\n");
printf("\nSTMT_EXEC;;6812\n");
Bool corrupt;
  printf("\nSTMT_EXEC;;6813\n");
DState *s;
  printf("\nSTMT_EXEC;;6814\n");
Int32 r;
  printf("\nSTMT_EXEC;;6815\n");
Int32 tmp;
  {




    printf("\nSTMT_EXEC;;6821\n");
s = (DState *)strm->state;

    {



      {
        ;









        printf("\nSTMT_EXEC;;6838\n");
if (s->state == 2)
        {








          {
            printf("\nSTMT_EXEC;;6849\n");
corrupt = unRLE_obuf_to_output_FAST(s);
          }






          {
            printf("\nSTMT_EXEC;;6858\n");
if (s->state_out_len == 0)
            {



















              printf("\nSTMT_EXEC;;6879\n");
s->state = 14;
            }
            else
            {
              printf("\nSTMT_EXEC;;6883\n");
printf("\nFUNC_RETURN;;\n");
return (0);
            }
          }



        }


        {
          {
            printf("\nSTMT_EXEC;;6894\n");
tmp = BZ2_decompress(s);
            printf("\nSTMT_EXEC;;6895\n");
r = tmp;
          }

          {













            printf("\nSTMT_EXEC;;6912\n");
printf("\nFUNC_RETURN;;\n");
return (r);
          }



        }
      };
    }






  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzDecompressEnd(bz_stream *strm)
{
  printf("\nFUNC_CALL;BZ2_bzDecompressEnd(bz_stream *);\n");
printf("\nSTMT_EXEC;;6930\n");
DState *s;
  {




    printf("\nSTMT_EXEC;;6936\n");
s = (DState *)strm->state;

    {









      printf("\nSTMT_EXEC;;6948\n");
(*(strm->bzfree))(strm->opaque, (void *)s->tt);
    }













    {
      printf("\nSTMT_EXEC;;6964\n");
(*(strm->bzfree))(strm->opaque, strm->state);

    }
    printf("\nSTMT_EXEC;;6967\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}



















BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE *f, int blockSize100k___0, int verbosity___0, int workFactor___0)
{
  printf("\nFUNC_CALL;BZ2_bzWriteOpen(int *,FILE *,int,int,int);\n");
printf("\nSTMT_EXEC;;6991\n");
Int32 ret;
  printf("\nSTMT_EXEC;;6992\n");
bzFile *bzf;


  {















































































    {
      printf("\nSTMT_EXEC;;7076\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
bzf = (bzFile *)malloc(sizeof(bzFile));printf("\nFUNC_RETURN;;\n");

    }






















    printf("\nSTMT_EXEC;;7100\n");
bzf->handle = f;








    {
      printf("\nSTMT_EXEC;;7110\n");
ret = BZ2_bzCompressInit(&bzf->strm, blockSize100k___0, verbosity___0, workFactor___0);
    }

















    printf("\nSTMT_EXEC;;7129\n");
printf("\nFUNC_RETURN;;\n");
return ((BZFILE *)bzf);
  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_bzWrite(int *bzerror, BZFILE *b, void *buf, int len)
{


  printf("\nFUNC_CALL;BZ2_bzWrite(int *,BZFILE *,void *,int);\n");
printf("\nSTMT_EXEC;;7136\n");
Int32 ret;
  printf("\nSTMT_EXEC;;7137\n");
bzFile *bzf;


  {
    printf("\nSTMT_EXEC;;7141\n");
bzf = (bzFile *)b;










































































    printf("\nSTMT_EXEC;;7216\n");
bzf->strm.avail_in = (unsigned int)len;
    printf("\nSTMT_EXEC;;7217\n");
bzf->strm.next_in = (char *)buf;
    {
      printf("\nSTMT_EXEC;;7219\n");
while (1)
      {
        ;
        {


          printf("\nSTMT_EXEC;;7225\n");
ret = BZ2_bzCompress(&bzf->strm, 0);
        }










































        printf("\nSTMT_EXEC;;7269\n");
if (bzf->strm.avail_in == 0U)
        {








          printf("\nSTMT_EXEC;;7279\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      };

    }
  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_bzWriteClose64(int *bzerror, BZFILE *b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32)
{
  printf("\nFUNC_CALL;BZ2_bzWriteClose64(int *,BZFILE *,int,unsigned int *,unsigned int *,unsigned int *,unsigned int *);\n");
printf("\nSTMT_EXEC;;7288\n");
Int32 n;
  printf("\nSTMT_EXEC;;7289\n");
Int32 n2;
  printf("\nSTMT_EXEC;;7290\n");
Int32 ret;
  printf("\nSTMT_EXEC;;7291\n");
bzFile *bzf;




  {
    printf("\nSTMT_EXEC;;7297\n");
bzf = (bzFile *)b;

    {


























































      printf("\nSTMT_EXEC;;7358\n");
while (1)
      {
        ;
        {
          printf("\nSTMT_EXEC;;7362\n");
bzf->strm.avail_out = 5000U;
          printf("\nSTMT_EXEC;;7363\n");
bzf->strm.next_out = bzf->buf;
          printf("\nSTMT_EXEC;;7364\n");
ret = BZ2_bzCompress(&bzf->strm, 2);
        }

        {
















          printf("\nSTMT_EXEC;;7384\n");
n = (Int32)(5000U - bzf->strm.avail_out);
          printf("\nSTMT_EXEC;;7385\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
n2 = (Int32)fwrite((void const * /* __restrict  */)((void *)(bzf->buf)), sizeof(UChar), (size_t)n, (FILE * /* __restrict  */) bzf->handle);printf("\nFUNC_RETURN;;\n");

        }
























        printf("\nSTMT_EXEC;;7411\n");
if (ret == 4)
        {
          printf("\nSTMT_EXEC;;7413\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }



















































    {
      printf("\nSTMT_EXEC;;7470\n");
BZ2_bzCompressEnd(&bzf->strm);
      printf("\nSTMT_EXEC;;7471\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)bzf);printf("\nFUNC_RETURN;;\n");

    }

  }
printf("\nFUNC_RETURN;;\n");
}
BZFILE *BZ2_bzReadOpen(int *bzerror, FILE *f, int verbosity___0, int small, void *unused, int nUnused)
{
  printf("\nFUNC_CALL;BZ2_bzReadOpen(int *,FILE *,int,int,void *,int);\n");
printf("\nSTMT_EXEC;;7478\n");
bzFile *bzf;
  printf("\nSTMT_EXEC;;7479\n");
int ret;


  {


































































































    {
      printf("\nSTMT_EXEC;;7582\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
bzf = (bzFile *)malloc(sizeof(bzFile));printf("\nFUNC_RETURN;;\n");

    }













    {
      printf("\nSTMT_EXEC;;7598\n");
*bzerror = 0;
    }





    printf("\nSTMT_EXEC;;7605\n");
bzf->handle = f;
    printf("\nSTMT_EXEC;;7606\n");
bzf->bufN = 0;



















    {
      printf("\nSTMT_EXEC;;7627\n");
ret = BZ2_bzDecompressInit(&bzf->strm, verbosity___0, small);
    }















    printf("\nSTMT_EXEC;;7644\n");
bzf->strm.avail_in = (unsigned int)bzf->bufN;


    printf("\nSTMT_EXEC;;7647\n");
printf("\nFUNC_RETURN;;\n");
return ((BZFILE *)bzf);
  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_bzReadClose(int *bzerror, BZFILE *b)
{
  printf("\nFUNC_CALL;BZ2_bzReadClose(int *,BZFILE *);\n");
printf("\nSTMT_EXEC;;7652\n");
bzFile *bzf;
  {
    printf("\nSTMT_EXEC;;7654\n");
bzf = (bzFile *)b;

    {

































      printf("\nSTMT_EXEC;;7690\n");
BZ2_bzDecompressEnd(&bzf->strm);
    }

    {
      printf("\nSTMT_EXEC;;7694\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)bzf);printf("\nFUNC_RETURN;;\n");

    }

  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzRead(int *bzerror, BZFILE *b, void *buf, int len)
{
  printf("\nFUNC_CALL;BZ2_bzRead(int *,BZFILE *,void *,int);\n");
printf("\nSTMT_EXEC;;7701\n");
Int32 n;
  printf("\nSTMT_EXEC;;7702\n");
Int32 ret;
  printf("\nSTMT_EXEC;;7703\n");
bzFile *bzf;


  printf("\nSTMT_EXEC;;7706\n");
Bool tmp___1;

  {
    printf("\nSTMT_EXEC;;7709\n");
bzf = (bzFile *)b;



























































    printf("\nSTMT_EXEC;;7769\n");
bzf->strm.avail_out = (unsigned int)len;
    printf("\nSTMT_EXEC;;7770\n");
bzf->strm.next_out = (char *)buf;
    {
      printf("\nSTMT_EXEC;;7772\n");
while (1)
      {
        ;















        printf("\nSTMT_EXEC;;7790\n");
if (bzf->strm.avail_in == 0U)
        {





          {
            printf("\nSTMT_EXEC;;7798\n");
printf("\nFUNC_CALL;fread(void *__restrict,size_t,size_t,FILE *__restrict);\n");
n = (Int32)fread((void * /* __restrict  */)(bzf->buf), sizeof(UChar), (size_t)5000, (FILE * /* __restrict  */) bzf->handle);printf("\nFUNC_RETURN;;\n");


          }












          printf("\nSTMT_EXEC;;7813\n");
bzf->bufN = n;
          printf("\nSTMT_EXEC;;7814\n");
bzf->strm.avail_in = (unsigned int)bzf->bufN;
          printf("\nSTMT_EXEC;;7815\n");
bzf->strm.next_in = bzf->buf;
        }

        {
          printf("\nSTMT_EXEC;;7819\n");
ret = BZ2_bzDecompress(&bzf->strm);
        }







































        printf("\nSTMT_EXEC;;7860\n");
if (ret == 4)
        {

          {
            printf("\nSTMT_EXEC;;7864\n");
*bzerror = 4;
          }




          printf("\nSTMT_EXEC;;7870\n");
printf("\nFUNC_RETURN;;\n");
return ((int)((unsigned int)len - bzf->strm.avail_out));
        }
        printf("\nSTMT_EXEC;;7872\n");
if (bzf->strm.avail_out == 0U)
        {








          printf("\nSTMT_EXEC;;7882\n");
printf("\nFUNC_RETURN;;\n");
return (len);
        }
      };



    }
  }










printf("\nFUNC_RETURN;;\n");
}



















































char const *BZ2_bzlibVersion(void)
{


  printf("\nFUNC_CALL;BZ2_bzlibVersion();\n");
printf("\nSTMT_EXEC;;7956\n");
printf("\nFUNC_RETURN;;\n");
return ("1.0.5, 10-Dec-2007");
printf("\nFUNC_RETURN;;\n");
}


extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) remove)(char const *__filename);
extern void rewind(FILE *__stream);
extern void perror(char const *__s);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) fileno)(FILE *__stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1), __leaf__)) getenv)(char const *__name);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strncpy)(char *__restrict __dest, char const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) strncmp)(char const *__s1, char const *__s2, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2), __leaf__)) strstr)(char const *__haystack, char const *__needle) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__)) strerror)(int __errnum);
extern __attribute__((__nothrow__)) __sighandler_t(__attribute__((__leaf__)) signal)(int __sig, void (*__handler)(int));
extern __attribute__((__nothrow__)) int *(__attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...) __asm__("open64");
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__)) utime)(char const *__file, struct utimbuf const *__file_times);
extern int close(int __fd);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) fchown)(int __fd, __uid_t __owner, __gid_t __group);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) isatty)(int __fd);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) stat)(char const *__restrict __file, struct stat *__restrict __buf) __asm__("stat64");
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2), __leaf__)) lstat)(char const *__restrict __file, struct stat *__restrict __buf) __asm__("lstat64");
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) fchmod)(int __fd, __mode_t __mode);
Int32 verbosity;

Bool smallMode;





Int32 numFileNames;

Int32 blockSize100k;
Int32 exitValue;
Int32 opMode;
Int32 srcMode;

Char inName[1034];
Char outName[1034];

Char *progName;
Char progNameReally[1034];

Int32 workFactor;
static __attribute__((__noreturn__)) void panic(Char const *s);
static __attribute__((__noreturn__)) void ioError(void);
static __attribute__((__noreturn__)) void outOfMemory(void);
static __attribute__((__noreturn__)) void configError(void);
static __attribute__((__noreturn__)) void crcError(void);
static __attribute__((__noreturn__)) void cleanUpAndFail(Int32 ec);
static __attribute__((__noreturn__)) void compressedStreamEOF(void);
static void copyFileName(Char *to, Char *from);
static void *myMalloc(Int32 n);
static void applySavedFileAttrToOutputFile(IntNative fd);










































































































































static Bool myfeof___0(FILE *f)
{
  printf("\nFUNC_CALL;myfeof___0(FILE *);\n");
printf("\nSTMT_EXEC;;8153\n");
Int32 c;
  printf("\nSTMT_EXEC;;8154\n");
Int32 tmp;
  {
    {
      printf("\nSTMT_EXEC;;8157\n");
printf("\nFUNC_CALL;fgetc(FILE *);\n");
tmp = fgetc(f);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;8158\n");
c = tmp;
    }
    printf("\nSTMT_EXEC;;8160\n");
if (c == -1)
    {
      printf("\nSTMT_EXEC;;8162\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
    }
    {
      printf("\nSTMT_EXEC;;8165\n");
printf("\nFUNC_CALL;ungetc(int,FILE *);\n");
ungetc(c, f);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8167\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static void compressStream(FILE *stream, FILE *zStream)
{
  printf("\nFUNC_CALL;compressStream(FILE *,FILE *);\n");
printf("\nSTMT_EXEC;;8172\n");
BZFILE *bzf;
  printf("\nSTMT_EXEC;;8173\n");
UChar ibuf[5000];
  printf("\nSTMT_EXEC;;8174\n");
Int32 nIbuf;
  printf("\nSTMT_EXEC;;8175\n");
UInt32 nbytes_in_lo32;
  printf("\nSTMT_EXEC;;8176\n");
UInt32 nbytes_in_hi32;
  printf("\nSTMT_EXEC;;8177\n");
UInt32 nbytes_out_lo32;
  printf("\nSTMT_EXEC;;8178\n");
UInt32 nbytes_out_hi32;
  printf("\nSTMT_EXEC;;8179\n");
Int32 bzerr;




  printf("\nSTMT_EXEC;;8184\n");
Bool tmp___1;
  printf("\nSTMT_EXEC;;8185\n");
int tmp___2;

















  {















    {
      printf("\nSTMT_EXEC;;8220\n");
bzf = BZ2_bzWriteOpen(&bzerr, zStream, blockSize100k, verbosity, workFactor);
    }










    {
      printf("\nSTMT_EXEC;;8233\n");
while (1)
      {
        ;
        {
          printf("\nSTMT_EXEC;;8237\n");
tmp___1 = myfeof___0(stream);
        }
        printf("\nSTMT_EXEC;;8239\n");
if (tmp___1)
        {
          printf("\nSTMT_EXEC;;8241\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;8244\n");
printf("\nFUNC_CALL;fread(void *__restrict,size_t,size_t,FILE *__restrict);\n");
nIbuf = (Int32)fread((void * /* __restrict  */)(ibuf), sizeof(UChar), (size_t)5000, (FILE * /* __restrict  */) stream);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;8245\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___2 = ferror(stream);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8247\n");
if (tmp___2)
        {
          printf("\nSTMT_EXEC;;8249\n");
goto errhandler_io;
        }

        {

          printf("\nSTMT_EXEC;;8254\n");
BZ2_bzWrite(&bzerr, bzf, (void *)(ibuf), nIbuf);
        }
      }





    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8265\n");
BZ2_bzWriteClose64(&bzerr, bzf, 0, &nbytes_in_lo32, &nbytes_in_hi32, &nbytes_out_lo32, &nbytes_out_hi32);
    }





















































































    printf("\nSTMT_EXEC;;8352\n");
printf("\nFUNC_RETURN;;\n");
return;

    {


























    errhandler_io:

    {
      printf("\nSTMT_EXEC;;8384\n");
ioError();
    }









    }
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool uncompressStream(FILE *zStream, FILE *stream)
{
  printf("\nFUNC_CALL;uncompressStream(FILE *,FILE *);\n");
printf("\nSTMT_EXEC;;8400\n");
BZFILE *bzf;
  printf("\nSTMT_EXEC;;8401\n");
Int32 bzerr;


  printf("\nSTMT_EXEC;;8404\n");
Int32 nread;


  printf("\nSTMT_EXEC;;8407\n");
UChar obuf[5000];
  printf("\nSTMT_EXEC;;8408\n");
UChar unused[5000];
  printf("\nSTMT_EXEC;;8409\n");
Int32 nUnused;




  printf("\nSTMT_EXEC;;8414\n");
int tmp___1;














  {
    {

      printf("\nSTMT_EXEC;;8432\n");
nUnused = 0;


    }

    {


      {
        ;









        {
          printf("\nSTMT_EXEC;;8452\n");
bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int)smallMode, (void *)(unused), nUnused);
        }












        {
          printf("\nSTMT_EXEC;;8467\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;8470\n");
if (!(bzerr == 0))
            {
              printf("\nSTMT_EXEC;;8472\n");
goto while_break___0;
            }
            {
              printf("\nSTMT_EXEC;;8475\n");
nread = BZ2_bzRead(&bzerr, bzf, (void *)(obuf), 5000);
            }

            {

              _L : {












                  printf("\nSTMT_EXEC;;8493\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
fwrite((void const * /* __restrict  */)(obuf), sizeof(UChar), (size_t)nread, (FILE * /* __restrict  */) stream);printf("\nFUNC_RETURN;;\n");

          }
        }


        {
          printf("\nSTMT_EXEC;;8499\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___1 = ferror(stream);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8501\n");
if (tmp___1)
        {
          printf("\nSTMT_EXEC;;8503\n");
goto errhandler_io;
        }
      }
    while_break___0: /* CIL Label */;
    }




























    {
      printf("\nSTMT_EXEC;;8537\n");
BZ2_bzReadClose(&bzerr, bzf);
    }




  };
}










































































printf("\nSTMT_EXEC;;8619\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);


{











































































errhandler_io:

{
  printf("\nSTMT_EXEC;;8701\n");
ioError();
}


















}
}


































printf("\nFUNC_RETURN;;\n");
}
static Bool testStream(FILE *zStream)
{
  printf("\nFUNC_CALL;testStream(FILE *);\n");
printf("\nSTMT_EXEC;;8760\n");
BZFILE *bzf;
  printf("\nSTMT_EXEC;;8761\n");
Int32 bzerr;


  printf("\nSTMT_EXEC;;8764\n");
Int32 nread;


  printf("\nSTMT_EXEC;;8767\n");
UChar obuf[5000];
  printf("\nSTMT_EXEC;;8768\n");
UChar unused[5000];
  printf("\nSTMT_EXEC;;8769\n");
Int32 nUnused;











  {
    {

      printf("\nSTMT_EXEC;;8784\n");
nUnused = 0;


    }

    {


      {
        ;


        {
          printf("\nSTMT_EXEC;;8797\n");
bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int)smallMode, (void *)(unused), nUnused);
        }

        {



          {
            ;













            {
              printf("\nSTMT_EXEC;;8820\n");
nread = BZ2_bzRead(&bzerr, bzf, (void *)(obuf), 5000);
            }



          };
        }






























        {
          printf("\nSTMT_EXEC;;8858\n");
BZ2_bzReadClose(&bzerr, bzf);
        }




      };
    }

































    printf("\nSTMT_EXEC;;8899\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);








  }
printf("\nFUNC_RETURN;;\n");
}

































































































































static __attribute__((__noreturn__)) void cleanUpAndFail(Int32 ec);


























































































static __attribute__((__noreturn__)) void panic(Char const *s);














static __attribute__((__noreturn__)) void crcError(void);














static __attribute__((__noreturn__)) void compressedStreamEOF(void);






















static __attribute__((__noreturn__)) void ioError(void);
static void ioError(void)
{






  printf("\nFUNC_CALL;ioError();\n");
printf("\nSTMT_EXEC;;9192\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)progName);printf("\nFUNC_RETURN;;\n");



printf("\nFUNC_RETURN;;\n");
}





































































































static __attribute__((__noreturn__)) void outOfMemory(void);
static void outOfMemory(void)
{


  printf("\nFUNC_CALL;outOfMemory();\n");
printf("\nSTMT_EXEC;;9302\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: couldn\'t allocate enough memory\n", progName);printf("\nFUNC_RETURN;;\n");





printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void configError(void);



















































static void copyFileName(Char *to, Char *from)
{



















  printf("\nFUNC_CALL;copyFileName(Char *,Char *);\n");
printf("\nSTMT_EXEC;;9381\n");
printf("\nFUNC_CALL;strncpy(char *__restrict,const char *__restrict,size_t);\n");
strncpy((char * /* __restrict  */)to, (char const * /* __restrict  */)from, (size_t)1024);printf("\nFUNC_RETURN;;\n");


printf("\nFUNC_RETURN;;\n");
}























static FILE *fopen_output_safely(Char *name, char const *mode)
{
  printf("\nFUNC_CALL;fopen_output_safely(Char *,const char *);\n");
printf("\nSTMT_EXEC;;9409\n");
FILE *fp;
  printf("\nSTMT_EXEC;;9410\n");
IntNative fh;
  {
    {
      printf("\nSTMT_EXEC;;9413\n");
printf("\nFUNC_CALL;open(const char *,int);\n");
fh = open((char const *)name, 193, 384);printf("\nFUNC_RETURN;;\n");

    }




    {
      printf("\nSTMT_EXEC;;9420\n");
printf("\nFUNC_CALL;fdopen(int,const char *);\n");
fp = fdopen(fh, mode);printf("\nFUNC_RETURN;;\n");

    }






    printf("\nSTMT_EXEC;;9428\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
  }
printf("\nFUNC_RETURN;;\n");
}





















































































































































static void compress(Char *name)
{
  printf("\nFUNC_CALL;compress(Char *);\n");
printf("\nSTMT_EXEC;;9582\n");
FILE *inStr;
  printf("\nSTMT_EXEC;;9583\n");
FILE *outStr;











  printf("\nSTMT_EXEC;;9595\n");
int tmp___7;
  printf("\nSTMT_EXEC;;9596\n");
int tmp___8;






  printf("\nSTMT_EXEC;;9603\n");
int *tmp___15;
  printf("\nSTMT_EXEC;;9604\n");
char *tmp___16;












  {


    {

      case_3 : /* CIL Label */
          {printf("\nSTMT_EXEC;;9623\n");
copyFileName(inName, name);



























    printf("\nSTMT_EXEC;;9651\n");
copyFileName(outName, name);
    printf("\nSTMT_EXEC;;9652\n");
printf("\nFUNC_CALL;strcat(char *__restrict,const char *__restrict);\n");
strcat((char * /* __restrict  */)(outName), (char const * /* __restrict  */) ".bz2");printf("\nFUNC_RETURN;;\n");

  }





}




{




































































  printf("\nSTMT_EXEC;;9733\n");
if (srcMode == 3)
  {




















































































































    printf("\nSTMT_EXEC;;9851\n");
goto case_3___0;
  }


  {
    printf("\nSTMT_EXEC;;9856\n");
inStr = stdin;
    printf("\nSTMT_EXEC;;9857\n");
outStr = stdout;
    printf("\nSTMT_EXEC;;9858\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___7 = fileno(stdout);printf("\nFUNC_RETURN;;\n");

    printf("\nSTMT_EXEC;;9859\n");
printf("\nFUNC_CALL;isatty(int);\n");
tmp___8 = isatty(tmp___7);printf("\nFUNC_RETURN;;\n");

  }
  printf("\nSTMT_EXEC;;9861\n");
if (tmp___8)
  {
    {
      printf("\nSTMT_EXEC;;9864\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "%s: I won\'t write compressed "
                                               "data to a terminal.\n",
              progName);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9868\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: For help, type: `%s --help\'.\n", progName, progName);printf("\nFUNC_RETURN;;\n");


    }
    printf("\nSTMT_EXEC;;9871\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
  printf("\nSTMT_EXEC;;9873\n");
goto switch_break___0;






































case_3___0: /* CIL Label */
{
  printf("\nSTMT_EXEC;;9914\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

  printf("\nSTMT_EXEC;;9915\n");
outStr = fopen_output_safely(outName, "wb");
}






















  {
    {
      printf("\nSTMT_EXEC;;9941\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___15 = __errno_location();printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9942\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___16 = strerror(*tmp___15);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9943\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input file %s: %s.\n", progName, inName, tmp___16);printf("\nFUNC_RETURN;;\n");

    }









    printf("\nSTMT_EXEC;;9954\n");
printf("\nFUNC_RETURN;;\n");
return;
  }






switch_break___0: /* CIL Label */;
}

{









  printf("\nSTMT_EXEC;;9975\n");
compressStream(inStr, outStr);


















}
}





printf("\nFUNC_RETURN;;\n");
}
static void uncompress(Char *name)
{
  printf("\nFUNC_CALL;uncompress(Char *);\n");
printf("\nSTMT_EXEC;;10004\n");
FILE *inStr;
  printf("\nSTMT_EXEC;;10005\n");
FILE *outStr;


  printf("\nSTMT_EXEC;;10008\n");
Bool magicNumberOK;










  printf("\nSTMT_EXEC;;10019\n");
int tmp___7;
  printf("\nSTMT_EXEC;;10020\n");
int tmp___8;




















  {


    {
















































































































































































































































      printf("\nSTMT_EXEC;;10285\n");
inStr = stdin;
      printf("\nSTMT_EXEC;;10286\n");
outStr = stdout;
      printf("\nSTMT_EXEC;;10287\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___7 = fileno(stdin);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10288\n");
printf("\nFUNC_CALL;isatty(int);\n");
tmp___8 = isatty(tmp___7);printf("\nFUNC_RETURN;;\n");

    }

    {


































































































      printf("\nSTMT_EXEC;;10390\n");
magicNumberOK = uncompressStream(inStr, outStr);

    }






































































  }
printf("\nFUNC_RETURN;;\n");
}
static void testf(Char *name)
{
  printf("\nFUNC_CALL;testf(Char *);\n");
printf("\nSTMT_EXEC;;10467\n");
FILE *inStr;
  printf("\nSTMT_EXEC;;10468\n");
Bool allOK;














  {


    {































      printf("\nSTMT_EXEC;;10518\n");
copyFileName(inName, name);
    }


    {





























































































      printf("\nSTMT_EXEC;;10616\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

    }

    {


























      printf("\nSTMT_EXEC;;10646\n");
allOK = testStream(inStr);
    }














  }
printf("\nFUNC_RETURN;;\n");
}
static void license(void)
{
  printf("\nFUNC_CALL;license();\n");
printf("\nSTMT_EXEC;;10666\n");
char const *tmp;
  {

    printf("\nSTMT_EXEC;;10669\n");
tmp = BZ2_bzlibVersion();
    printf("\nSTMT_EXEC;;10670\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
            (char const * /* __restrict  */) "bzip2, a block-sorting file compressor.  "
                                             "Version %s.\n   \n   Copyright (C) "
                                             "1996-2007 by Julian Seward.\n   \n   This "
                                             "program is free software; you can "
                                             "redistribute it and/or modify\n   it "
                                             "under the terms set out in the LICENSE "
                                             "file, which is included\n   in the "
                                             "bzip2-1.0.5 source distribution.\n   \n   "
                                             "This program is distributed in the hope "
                                             "that it will be useful,\n   but WITHOUT "
                                             "ANY WARRANTY; without even the implied "
                                             "warranty of\n   MERCHANTABILITY or "
                                             "FITNESS FOR A PARTICULAR PURPOSE.  See "
                                             "the\n   LICENSE file for more details.\n  "
                                             " \n",
            tmp);printf("\nFUNC_RETURN;;\n");



  }
printf("\nFUNC_RETURN;;\n");
}
static void usage(Char *fullProgName)
{
  printf("\nFUNC_CALL;usage(Char *);\n");
printf("\nSTMT_EXEC;;10693\n");
char const *tmp;
  {

    printf("\nSTMT_EXEC;;10696\n");
tmp = BZ2_bzlibVersion();
    printf("\nSTMT_EXEC;;10697\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
            (char const * /* __restrict  */) "bzip2, a block-sorting file compressor.  "
                                             "Version %s.\n\n   usage: %s [flags and "
                                             "input files in any order]\n\n   -h --help "
                                             "          print this message\n   -d "
                                             "--decompress     force decompression\n   "
                                             "-z --compress       force compression\n   "
                                             "-k --keep           keep (don\'t delete) "
                                             "input files\n   -f --force          "
                                             "overwrite existing output files\n   -t "
                                             "--test           test compressed file "
                                             "integrity\n   -c --stdout         output "
                                             "to standard out\n   -q --quiet          "
                                             "suppress noncritical error messages\n   "
                                             "-v --verbose        be verbose (a 2nd -v "
                                             "gives more)\n   -L --license        "
                                             "display software version & license\n   -V "
                                             "--version        display software version "
                                             "& license\n   -s --small          use "
                                             "less memory (at most 2500k)\n   -1 .. -9  "
                                             "          set block size to 100k .. "
                                             "900k\n   --fast              alias for "
                                             "-1\n   --best              alias for "
                                             "-9\n\n   If invoked as `bzip2\', default "
                                             "action is to compress.\n              as "
                                             "`bunzip2\',  default action is to "
                                             "decompress.\n              as `bzcat\', "
                                             "default action is to decompress to "
                                             "stdout.\n\n   If no file names are given, "
                                             "bzip2 compresses or decompresses\n   from "
                                             "standard input to standard output.  You "
                                             "can combine\n   short flags, so `-v -4\' "
                                             "means the same as -v4 or -4v, &c.\n\n",
            tmp, fullProgName);printf("\nFUNC_RETURN;;\n");

  }

printf("\nFUNC_RETURN;;\n");
}













static void *myMalloc(Int32 n)
{
  printf("\nFUNC_CALL;myMalloc(Int32);\n");
printf("\nSTMT_EXEC;;10749\n");
void *p;
  {
    {
      printf("\nSTMT_EXEC;;10752\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
p = malloc((size_t)n);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10754\n");
if ((unsigned long)p == (unsigned long)((void *)0))
    {

      printf("\nSTMT_EXEC;;10757\n");
outOfMemory();

    }
    printf("\nSTMT_EXEC;;10760\n");
printf("\nFUNC_RETURN;;\n");
return (p);
  }
printf("\nFUNC_RETURN;;\n");
}
static Cell *mkCell(void)
{
  printf("\nFUNC_CALL;mkCell();\n");
printf("\nSTMT_EXEC;;10765\n");
Cell *c;
  {
    {
      printf("\nSTMT_EXEC;;10768\n");
c = (Cell *)myMalloc((Int32)sizeof(Cell));

      printf("\nSTMT_EXEC;;10770\n");
c->link = (struct zzzz *)((void *)0);
    }
    printf("\nSTMT_EXEC;;10772\n");
printf("\nFUNC_RETURN;;\n");
return (c);
  }
printf("\nFUNC_RETURN;;\n");
}
static Cell *snocString(Cell *root, Char *name)
{
  printf("\nFUNC_CALL;snocString(Cell *,Char *);\n");
printf("\nSTMT_EXEC;;10777\n");
Cell *tmp;
  printf("\nSTMT_EXEC;;10778\n");
Cell *tmp___0;
  printf("\nSTMT_EXEC;;10779\n");
size_t tmp___1;
  printf("\nSTMT_EXEC;;10780\n");
Cell *tmp___3;
  {
    printf("\nSTMT_EXEC;;10782\n");
if ((unsigned long)root == (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;10785\n");
tmp___0 = mkCell();
        printf("\nSTMT_EXEC;;10786\n");
tmp = tmp___0;
        printf("\nSTMT_EXEC;;10787\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___1 = strlen((char const *)name);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10788\n");
tmp->name = (Char *)myMalloc((Int32)(5UL + tmp___1));
        printf("\nSTMT_EXEC;;10789\n");
printf("\nFUNC_CALL;strcpy(char *__restrict,const char *__restrict);\n");
strcpy((char * /* __restrict  */)tmp->name, (char const * /* __restrict  */)name);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;10791\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    }
    else
    {
      printf("\nSTMT_EXEC;;10795\n");
tmp___3 = root;












      {
        printf("\nSTMT_EXEC;;10809\n");
tmp___3->link = snocString(tmp___3->link, name);
      }
      printf("\nSTMT_EXEC;;10811\n");
printf("\nFUNC_RETURN;;\n");
return (root);
    }
  }
printf("\nFUNC_RETURN;;\n");
}

































































































IntNative main(IntNative argc, Char **argv)
{
  printf("\nFUNC_CALL;main(IntNative,Char **);\n");
printf("\nSTMT_EXEC;;39\n");
AFL_INIT_SET0("bzip2");
  printf("\nSTMT_EXEC;;10915\n");
Int32 i;
  printf("\nSTMT_EXEC;;10916\n");
Int32 j;
  printf("\nSTMT_EXEC;;10917\n");
Char *tmp;
  printf("\nSTMT_EXEC;;10918\n");
Cell *argList;
  printf("\nSTMT_EXEC;;10919\n");
Cell *aa;
  printf("\nSTMT_EXEC;;10920\n");
Bool decode;































  printf("\nSTMT_EXEC;;10952\n");
Cell *aa2;




  {

    {
























































      printf("\nSTMT_EXEC;;11016\n");
blockSize100k = 9;













      printf("\nSTMT_EXEC;;11030\n");
copyFileName(progNameReally, *(argv + 0));

      printf("\nSTMT_EXEC;;11032\n");
tmp = &progNameReally[0];
    }
    {
      printf("\nSTMT_EXEC;;11035\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;11038\n");
if (!((int)*tmp != 0))
        {
          printf("\nSTMT_EXEC;;11040\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;11042\n");
if ((int)*tmp == 47)
        {
          printf("\nSTMT_EXEC;;11044\n");
progName = tmp + 1;
        }
        printf("\nSTMT_EXEC;;11046\n");
tmp++;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;11051\n");
argList = (Cell *)((void *)0);


      printf("\nSTMT_EXEC;;11054\n");
i = 1;
    }
    {
      printf("\nSTMT_EXEC;;11057\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;11060\n");
if (!(i <= argc - 1))
        {
          printf("\nSTMT_EXEC;;11062\n");
goto while_break___0;
        }
        {
          printf("\nSTMT_EXEC;;11065\n");
argList = snocString(argList, *(argv + i));
          printf("\nSTMT_EXEC;;11066\n");
i++;
        }
      }
    while_break___0: /* CIL Label */;
    }



    printf("\nSTMT_EXEC;;11074\n");
aa = argList;
    {
      printf("\nSTMT_EXEC;;11076\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;11079\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11081\n");
goto while_break___1;
        }








        printf("\nSTMT_EXEC;;11091\n");
if ((int)*(aa->name + 0) == 45)
        {


          printf("\nSTMT_EXEC;;11095\n");
goto __Cont;
        }

        {
          printf("\nSTMT_EXEC;;11099\n");
numFileNames++;

        }






      __Cont:
        {
printf("\nSTMT_EXEC;;11109\n");
aa = aa->link;
}

      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;11113\n");
if (numFileNames == 0)
    {

    }
    else
    {
      printf("\nSTMT_EXEC;;11119\n");
srcMode = 3;
    }
    {
      printf("\nSTMT_EXEC;;11122\n");
opMode = 1;

    }




























































    printf("\nSTMT_EXEC;;11185\n");
aa = argList;
    {

      {
        ;
        printf("\nSTMT_EXEC;;11190\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11192\n");
goto while_break___2;
        }







        printf("\nSTMT_EXEC;;11201\n");
if ((int)*(aa->name + 0) == 45)
        {


          printf("\nSTMT_EXEC;;11205\n");
j = 1;
          {

            {
              ;

              {







                printf("\nSTMT_EXEC;;11219\n");
if ((int)*(aa->name + j) == 100)
                {
                  printf("\nSTMT_EXEC;;11221\n");
goto case_100;
                }








                printf("\nSTMT_EXEC;;11231\n");
if ((int)*(aa->name + j) == 116)
                {
                  printf("\nSTMT_EXEC;;11233\n");
goto case_116;
                }
















































                printf("\nSTMT_EXEC;;11283\n");
if ((int)*(aa->name + j) == 86)
                {
                  printf("\nSTMT_EXEC;;11285\n");
goto case_86;
                }
                printf("\nSTMT_EXEC;;11287\n");
if ((int)*(aa->name + j) == 76)
                {
                  printf("\nSTMT_EXEC;;11289\n");
goto case_86;
                }




                printf("\nSTMT_EXEC;;11295\n");
if ((int)*(aa->name + j) == 104)
                {
                  printf("\nSTMT_EXEC;;11297\n");
goto case_104;
                }



                printf("\nSTMT_EXEC;;11302\n");
goto switch_break;
              case_100: /* CIL Label */
                {
printf("\nSTMT_EXEC;;11304\n");
opMode = 2;
}

                printf("\nSTMT_EXEC;;11305\n");
goto switch_break;






              case_116: /* CIL Label */
                {
printf("\nSTMT_EXEC;;11313\n");
opMode = 3;
}






































              case_86: /* CIL Label */

              {
                printf("\nSTMT_EXEC;;11354\n");
license();
              }



                printf("\nSTMT_EXEC;;11359\n");
goto switch_break;
              case_104: /* CIL Label */
              {
                printf("\nSTMT_EXEC;;11362\n");
usage(progName);
                printf("\nSTMT_EXEC;;11363\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(0);printf("\nFUNC_RETURN;;\n");

              }








              switch_break: /* CIL Label */;
              }



            };
          }
        }

      }
    while_break___2: /* CIL Label */;
    }



































































































































































































































    printf("\nSTMT_EXEC;;11612\n");
if (opMode == 1)
    {





















































      printf("\nSTMT_EXEC;;11667\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;11670\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11672\n");
goto while_break___5;
        }
        {
















          printf("\nSTMT_EXEC;;11691\n");
compress(aa->name);
        }

        printf("\nSTMT_EXEC;;11694\n");
aa = aa->link;
      }
    while_break___5: /* CIL Label */;
    }


    else
    {
      printf("\nSTMT_EXEC;;11702\n");
if (opMode == 2)
      {




        printf("\nSTMT_EXEC;;11708\n");
uncompress((Char *)((void *)0));
      }

      else
      {



        printf("\nSTMT_EXEC;;11716\n");
while (1)
        {
          ;
          printf("\nSTMT_EXEC;;11719\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
          {






















































            printf("\nSTMT_EXEC;;11775\n");
goto while_break___7;
          }








          printf("\nSTMT_EXEC;;11785\n");
if ((int)*(aa->name + 0) == 45)
          {


            printf("\nSTMT_EXEC;;11789\n");
goto __Cont___2;
          }

          {

            printf("\nSTMT_EXEC;;11794\n");
testf(aa->name);
          }
        __Cont___2:
          {
printf("\nSTMT_EXEC;;11797\n");
aa = aa->link;
}

        }
      while_break___7: /* CIL Label */;
      }
    }
















    printf("\nSTMT_EXEC;;11818\n");
aa = argList;
    {

      {
        ;
        printf("\nSTMT_EXEC;;11823\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11825\n");
goto while_break___8;
        }
        printf("\nSTMT_EXEC;;11827\n");
aa2 = aa->link;

        {

          printf("\nSTMT_EXEC;;11831\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)aa->name);printf("\nFUNC_RETURN;;\n");

        }

        {
          printf("\nSTMT_EXEC;;11835\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)aa);printf("\nFUNC_RETURN;;\n");


        }
      }
    while_break___8: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;11841\n");
printf("\nFUNC_RETURN;;\n");
return (exitValue);
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static void fallbackSimpleSort(UInt32 *fmap, UInt32 *eclass, Int32 lo, Int32 hi)
{
  printf("\nFUNC_CALL;fallbackSimpleSort(UInt32 *,UInt32 *,Int32,Int32);\n");
printf("\nSTMT_EXEC;;11846\n");
Int32 i;
  printf("\nSTMT_EXEC;;11847\n");
Int32 j;
  printf("\nSTMT_EXEC;;11848\n");
Int32 tmp;
  printf("\nSTMT_EXEC;;11849\n");
UInt32 ec_tmp;
  {












































    printf("\nSTMT_EXEC;;11895\n");
i = hi - 1;
    {
      printf("\nSTMT_EXEC;;11897\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;11900\n");
if (!(i >= lo))
        {
          printf("\nSTMT_EXEC;;11902\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;11904\n");
tmp = (Int32) * (fmap + i);
        printf("\nSTMT_EXEC;;11905\n");
ec_tmp = *(eclass + tmp);
        printf("\nSTMT_EXEC;;11906\n");
j = i + 1;
        {
          printf("\nSTMT_EXEC;;11908\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;11911\n");
if (j <= hi)
            {
              printf("\nSTMT_EXEC;;11913\n");
if (!(ec_tmp > *(eclass + *(fmap + j))))
              {
                printf("\nSTMT_EXEC;;11915\n");
goto while_break___2;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;11920\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;11922\n");
*(fmap + (j - 1)) = *(fmap + j);
            printf("\nSTMT_EXEC;;11923\n");
j++;
          }
        while_break___2: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;11927\n");
*(fmap + (j - 1)) = (UInt32)tmp;
        printf("\nSTMT_EXEC;;11928\n");
i--;
      }
    while_break___1: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void fallbackQSort3(UInt32 *fmap, UInt32 *eclass, Int32 loSt, Int32 hiSt)
{
  printf("\nFUNC_CALL;fallbackQSort3(UInt32 *,UInt32 *,Int32,Int32);\n");
printf("\nSTMT_EXEC;;11937\n");
Int32 unLo;
  printf("\nSTMT_EXEC;;11938\n");
Int32 unHi;
  printf("\nSTMT_EXEC;;11939\n");
Int32 ltLo;
  printf("\nSTMT_EXEC;;11940\n");
Int32 gtHi;
  printf("\nSTMT_EXEC;;11941\n");
Int32 n;
  printf("\nSTMT_EXEC;;11942\n");
Int32 m;
  printf("\nSTMT_EXEC;;11943\n");
Int32 sp;
  printf("\nSTMT_EXEC;;11944\n");
Int32 lo;
  printf("\nSTMT_EXEC;;11945\n");
Int32 hi;
  printf("\nSTMT_EXEC;;11946\n");
UInt32 med;
  printf("\nSTMT_EXEC;;11947\n");
UInt32 r;
  printf("\nSTMT_EXEC;;11948\n");
UInt32 r3;
  printf("\nSTMT_EXEC;;11949\n");
Int32 stackLo[100];
  printf("\nSTMT_EXEC;;11950\n");
Int32 stackHi[100];
  printf("\nSTMT_EXEC;;11951\n");
Int32 zztmp;

  printf("\nSTMT_EXEC;;11953\n");
Int32 zztmp___1;
  printf("\nSTMT_EXEC;;11954\n");
Int32 yyp1;
  printf("\nSTMT_EXEC;;11955\n");
Int32 yyp2;
  printf("\nSTMT_EXEC;;11956\n");
Int32 yyn;
  printf("\nSTMT_EXEC;;11957\n");
Int32 zztmp___2;
  printf("\nSTMT_EXEC;;11958\n");
Int32 yyp1___0;
  printf("\nSTMT_EXEC;;11959\n");
Int32 yyp2___0;
  printf("\nSTMT_EXEC;;11960\n");
Int32 yyn___0;
  printf("\nSTMT_EXEC;;11961\n");
Int32 zztmp___3;


  {

    printf("\nSTMT_EXEC;;11966\n");
sp = 0;
    printf("\nSTMT_EXEC;;11967\n");
stackLo[sp] = loSt;
    printf("\nSTMT_EXEC;;11968\n");
stackHi[sp] = hiSt;
    printf("\nSTMT_EXEC;;11969\n");
sp++;
    {
      printf("\nSTMT_EXEC;;11971\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;11974\n");
if (!(sp > 0))
        {
          printf("\nSTMT_EXEC;;11976\n");
goto while_break;
        }






        printf("\nSTMT_EXEC;;11984\n");
sp--;
        printf("\nSTMT_EXEC;;11985\n");
lo = stackLo[sp];
        printf("\nSTMT_EXEC;;11986\n");
hi = stackHi[sp];
        printf("\nSTMT_EXEC;;11987\n");
if (hi - lo < 10)
        {
          {
            printf("\nSTMT_EXEC;;11990\n");
fallbackSimpleSort(fmap, eclass, lo, hi);
          }
          printf("\nSTMT_EXEC;;11992\n");
goto while_continue;
        }



        {
          printf("\nSTMT_EXEC;;11998\n");
med = *(eclass + *(fmap + lo));
        }











        printf("\nSTMT_EXEC;;12011\n");
ltLo = lo;
        printf("\nSTMT_EXEC;;12012\n");
unLo = ltLo;
        printf("\nSTMT_EXEC;;12013\n");
gtHi = hi;
        printf("\nSTMT_EXEC;;12014\n");
unHi = gtHi;
        {
          printf("\nSTMT_EXEC;;12016\n");
while (1)
          {
            ;
            {

              {
                ;




                printf("\nSTMT_EXEC;;12027\n");
n = (Int32) * (eclass + *(fmap + unLo)) - (Int32)med;
                printf("\nSTMT_EXEC;;12028\n");
if (n == 0)
                {
                  printf("\nSTMT_EXEC;;12030\n");
zztmp = (Int32) * (fmap + unLo);
                  printf("\nSTMT_EXEC;;12031\n");
*(fmap + unLo) = *(fmap + ltLo);
                  printf("\nSTMT_EXEC;;12032\n");
*(fmap + ltLo) = (UInt32)zztmp;
                  printf("\nSTMT_EXEC;;12033\n");
ltLo++;


                }
                printf("\nSTMT_EXEC;;12037\n");
if (n > 0)
                {
                  printf("\nSTMT_EXEC;;12039\n");
goto while_break___1;
                }
                printf("\nSTMT_EXEC;;12041\n");
unLo++;
              }
            while_break___1: /* CIL Label */;
            }
            {

              {





                printf("\nSTMT_EXEC;;12053\n");
n = (Int32) * (eclass + *(fmap + unHi)) - (Int32)med;









                printf("\nSTMT_EXEC;;12063\n");
if (n < 0)
                {
                  printf("\nSTMT_EXEC;;12065\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;12067\n");
unHi--;
              }
            while_break___2: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;12071\n");
if (unLo > unHi)
            {
              printf("\nSTMT_EXEC;;12073\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;12075\n");
zztmp___1 = (Int32) * (fmap + unLo);
            printf("\nSTMT_EXEC;;12076\n");
*(fmap + unLo) = *(fmap + unHi);
            printf("\nSTMT_EXEC;;12077\n");
*(fmap + unHi) = (UInt32)zztmp___1;


          }
        while_break___0: /* CIL Label */;
        }









        {
          printf("\nSTMT_EXEC;;12093\n");
n = unLo - ltLo;
        }
        printf("\nSTMT_EXEC;;12095\n");
yyp1 = lo;
        printf("\nSTMT_EXEC;;12096\n");
yyp2 = unLo - n;
        printf("\nSTMT_EXEC;;12097\n");
yyn = n;
        {
          printf("\nSTMT_EXEC;;12099\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;12102\n");
if (!(yyn > 0))
            {
              printf("\nSTMT_EXEC;;12104\n");
goto while_break___3;
            }
            printf("\nSTMT_EXEC;;12106\n");
zztmp___2 = (Int32) * (fmap + yyp1);
            printf("\nSTMT_EXEC;;12107\n");
*(fmap + yyp1) = *(fmap + yyp2);
            printf("\nSTMT_EXEC;;12108\n");
*(fmap + yyp2) = (UInt32)zztmp___2;
            printf("\nSTMT_EXEC;;12109\n");
yyp1++;
            printf("\nSTMT_EXEC;;12110\n");
yyp2++;
            printf("\nSTMT_EXEC;;12111\n");
yyn--;
          }
        while_break___3: /* CIL Label */;
        }




























        printf("\nSTMT_EXEC;;12143\n");
n = ((lo + unLo) - ltLo) - 1;
        printf("\nSTMT_EXEC;;12144\n");
m = (hi - (gtHi - unHi)) + 1;

        {

          printf("\nSTMT_EXEC;;12148\n");
stackHi[sp] = n;
          printf("\nSTMT_EXEC;;12149\n");
sp++;
          printf("\nSTMT_EXEC;;12150\n");
stackLo[sp] = m;
          printf("\nSTMT_EXEC;;12151\n");
stackHi[sp] = hi;
          printf("\nSTMT_EXEC;;12152\n");
sp++;
        }









      }
    while_break: /* CIL Label */;
    }

  }
printf("\nFUNC_RETURN;;\n");
}
static void fallbackSort(UInt32 *fmap, UInt32 *eclass, UInt32 *bhtab, Int32 nblock, Int32 verb)
{
  printf("\nFUNC_CALL;fallbackSort(UInt32 *,UInt32 *,UInt32 *,Int32,Int32);\n");
printf("\nSTMT_EXEC;;12171\n");
Int32 ftab[257];
  printf("\nSTMT_EXEC;;12172\n");
Int32 ftabCopy[256];
  printf("\nSTMT_EXEC;;12173\n");
Int32 H;
  printf("\nSTMT_EXEC;;12174\n");
Int32 i;
  printf("\nSTMT_EXEC;;12175\n");
Int32 j;
  printf("\nSTMT_EXEC;;12176\n");
Int32 k;
  printf("\nSTMT_EXEC;;12177\n");
Int32 l;
  printf("\nSTMT_EXEC;;12178\n");
Int32 r;
  printf("\nSTMT_EXEC;;12179\n");
Int32 cc;
  printf("\nSTMT_EXEC;;12180\n");
Int32 cc1;
  printf("\nSTMT_EXEC;;12181\n");
Int32 nNotDone;
  printf("\nSTMT_EXEC;;12182\n");
Int32 nBhtab;
  printf("\nSTMT_EXEC;;12183\n");
UChar *eclass8;


  {
    printf("\nSTMT_EXEC;;12187\n");
eclass8 = (UChar *)eclass;






    printf("\nSTMT_EXEC;;12194\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12196\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12199\n");
if (!(i < 257))
        {
          printf("\nSTMT_EXEC;;12201\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;12203\n");
ftab[i] = 0;
        printf("\nSTMT_EXEC;;12204\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12208\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12210\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12213\n");
if (!(i < nblock))
        {
          printf("\nSTMT_EXEC;;12215\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;12217\n");
(ftab[*(eclass8 + i)])++;
        printf("\nSTMT_EXEC;;12218\n");
i++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12222\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12224\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12227\n");
if (!(i < 256))
        {
          printf("\nSTMT_EXEC;;12229\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;12231\n");
ftabCopy[i] = ftab[i];
        printf("\nSTMT_EXEC;;12232\n");
i++;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12236\n");
i = 1;
    {
      printf("\nSTMT_EXEC;;12238\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12241\n");
if (!(i < 257))
        {
          printf("\nSTMT_EXEC;;12243\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;12245\n");
ftab[i] += ftab[i - 1];
        printf("\nSTMT_EXEC;;12246\n");
i++;
      }
    while_break___2: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12250\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12252\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12255\n");
if (!(i < nblock))
        {
          printf("\nSTMT_EXEC;;12257\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;12259\n");
j = (Int32) * (eclass8 + i);
        printf("\nSTMT_EXEC;;12260\n");
k = ftab[j] - 1;
        printf("\nSTMT_EXEC;;12261\n");
ftab[j] = k;
        printf("\nSTMT_EXEC;;12262\n");
*(fmap + k) = (UInt32)i;
        printf("\nSTMT_EXEC;;12263\n");
i++;
      }
    while_break___3: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12267\n");
nBhtab = 2 + nblock / 32;
    printf("\nSTMT_EXEC;;12268\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12270\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12273\n");
if (!(i < nBhtab))
        {
          printf("\nSTMT_EXEC;;12275\n");
goto while_break___4;
        }
        printf("\nSTMT_EXEC;;12277\n");
*(bhtab + i) = (UInt32)0;
        printf("\nSTMT_EXEC;;12278\n");
i++;
      }
    while_break___4: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12282\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12284\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12287\n");
if (!(i < 256))
        {
          printf("\nSTMT_EXEC;;12289\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;12291\n");
*(bhtab + (ftab[i] >> 5)) |= (unsigned int)(1 << (ftab[i] & 31));
        printf("\nSTMT_EXEC;;12292\n");
i++;
      }
    while_break___5: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12296\n");
i = 0;
    {

      {
        ;




        printf("\nSTMT_EXEC;;12305\n");
*(bhtab + ((nblock + 2 * i) >> 5)) |= (unsigned int)(1 << ((nblock + 2 * i) & 31));


      };

    }
    printf("\nSTMT_EXEC;;12311\n");
H = 1;
    {
      printf("\nSTMT_EXEC;;12313\n");
while (1)
      {
        ;







        printf("\nSTMT_EXEC;;12323\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;12325\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;12328\n");
if (!(i < nblock))
            {
              printf("\nSTMT_EXEC;;12330\n");
goto while_break___8;
            }
            printf("\nSTMT_EXEC;;12332\n");
if (*(bhtab + (i >> 5)) & (unsigned int)(1 << (i & 31)))
            {
              printf("\nSTMT_EXEC;;12334\n");
j = i;
            }
            printf("\nSTMT_EXEC;;12336\n");
k = (Int32)(*(fmap + i) - (UInt32)H);
            printf("\nSTMT_EXEC;;12337\n");
if (k < 0)
            {
              printf("\nSTMT_EXEC;;12339\n");
k += nblock;
            }
            printf("\nSTMT_EXEC;;12341\n");
*(eclass + k) = (UInt32)j;
            printf("\nSTMT_EXEC;;12342\n");
i++;
          }
        while_break___8: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;12346\n");
nNotDone = 0;
        printf("\nSTMT_EXEC;;12347\n");
r = -1;
        {
          printf("\nSTMT_EXEC;;12349\n");
while (1)
          {
            ;
            printf("\nSTMT_EXEC;;12352\n");
k = r + 1;
            {
              printf("\nSTMT_EXEC;;12354\n");
while (1)
              {
                ;

































                printf("\nSTMT_EXEC;;12390\n");
if (!(*(bhtab + (k >> 5)) & (unsigned int)(1 << (k & 31))))
                {
                  printf("\nSTMT_EXEC;;12392\n");
goto while_break___12;
                }
                printf("\nSTMT_EXEC;;12394\n");
k++;
              }
            while_break___12: /* CIL Label */;

            }
            printf("\nSTMT_EXEC;;12399\n");
l = k - 1;
            printf("\nSTMT_EXEC;;12400\n");
if (l >= nblock)
            {
              printf("\nSTMT_EXEC;;12402\n");
goto while_break___9;
            }
            {
              printf("\nSTMT_EXEC;;12405\n");
while (1)
              {
                ;

































                printf("\nSTMT_EXEC;;12441\n");
if (!(!(*(bhtab + (k >> 5)) & (unsigned int)(1 << (k & 31)))))
                {
                  printf("\nSTMT_EXEC;;12443\n");
goto while_break___15;
                }
                printf("\nSTMT_EXEC;;12445\n");
k++;
              }
            while_break___15: /* CIL Label */;
            }

            printf("\nSTMT_EXEC;;12450\n");
r = k - 1;





            {
              {
                printf("\nSTMT_EXEC;;12458\n");
nNotDone += (r - l) + 1;
                printf("\nSTMT_EXEC;;12459\n");
fallbackQSort3(fmap, eclass, l, r);
                printf("\nSTMT_EXEC;;12460\n");
cc = -1;
                printf("\nSTMT_EXEC;;12461\n");
i = l;
              }
              {
                printf("\nSTMT_EXEC;;12464\n");
while (1)
                {
                  ;
                  printf("\nSTMT_EXEC;;12467\n");
if (!(i <= r))
                  {
                    printf("\nSTMT_EXEC;;12469\n");
goto while_break___16;
                  }
                  printf("\nSTMT_EXEC;;12471\n");
cc1 = (Int32) * (eclass + *(fmap + i));
                  printf("\nSTMT_EXEC;;12472\n");
if (cc != cc1)
                  {
                    printf("\nSTMT_EXEC;;12474\n");
*(bhtab + (i >> 5)) |= (unsigned int)(1 << (i & 31));
                    printf("\nSTMT_EXEC;;12475\n");
cc = cc1;
                  }
                  printf("\nSTMT_EXEC;;12477\n");
i++;
                }
              while_break___16: /* CIL Label */;
              }
            }
          }
        while_break___9: /* CIL Label */;
        }












        {
          printf("\nSTMT_EXEC;;12498\n");
if (nNotDone == 0)
          {
            printf("\nSTMT_EXEC;;12500\n");
goto while_break___7;
          }
        }
      }
    while_break___7: /* CIL Label */;
    }






    printf("\nSTMT_EXEC;;12512\n");
j = 0;
    printf("\nSTMT_EXEC;;12513\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12515\n");
while (1)
      {
        ;
        printf("\nSTMT_EXEC;;12518\n");
if (!(i < nblock))
        {
          printf("\nSTMT_EXEC;;12520\n");
goto while_break___17;
        }
        {

          {
            ;
            printf("\nSTMT_EXEC;;12526\n");
if (!(ftabCopy[j] == 0))
            {
              printf("\nSTMT_EXEC;;12528\n");
goto while_break___18;
            }
            printf("\nSTMT_EXEC;;12530\n");
j++;
          }
        while_break___18: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;12534\n");
(ftabCopy[j])--;
        printf("\nSTMT_EXEC;;12535\n");
*(eclass8 + *(fmap + i)) = (UChar)j;
        printf("\nSTMT_EXEC;;12536\n");
i++;
      }
    while_break___17: /* CIL Label */;
    }




  }
printf("\nFUNC_RETURN;;\n");
}








































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































void BZ2_blockSort(EState *s)
{
  printf("\nFUNC_CALL;BZ2_blockSort(EState *);\n");
printf("\nSTMT_EXEC;;13708\n");
UInt32 *ptr;
  printf("\nSTMT_EXEC;;13709\n");
UChar *block;
  printf("\nSTMT_EXEC;;13710\n");
UInt32 *ftab;
  printf("\nSTMT_EXEC;;13711\n");
Int32 nblock;
  printf("\nSTMT_EXEC;;13712\n");
Int32 verb;
  printf("\nSTMT_EXEC;;13713\n");
Int32 wfact;



  printf("\nSTMT_EXEC;;13717\n");
Int32 i;

  {
    printf("\nSTMT_EXEC;;13720\n");
ptr = s->ptr;

    printf("\nSTMT_EXEC;;13722\n");
ftab = s->ftab;
    printf("\nSTMT_EXEC;;13723\n");
nblock = s->nblock;
    printf("\nSTMT_EXEC;;13724\n");
verb = s->verbosity;


    {

      printf("\nSTMT_EXEC;;13729\n");
fallbackSort(s->arr1, s->arr2, ftab, nblock, verb);
    }






















































    printf("\nSTMT_EXEC;;13785\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;13787\n");
while (1)
      {
        ;




        printf("\nSTMT_EXEC;;13794\n");
if (*(ptr + i) == 0U)
        {
          printf("\nSTMT_EXEC;;13796\n");
s->origPtr = i;
          printf("\nSTMT_EXEC;;13797\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;13799\n");
i++;
      }
    while_break: /* CIL Label */;
    }




  }
printf("\nFUNC_RETURN;;\n");
}


