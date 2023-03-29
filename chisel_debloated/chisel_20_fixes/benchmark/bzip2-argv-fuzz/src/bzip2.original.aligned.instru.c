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
Int32 BZ2_rNums[512];
Int32 BZ2_rNums[512] = {619, 720, 127, 481, 931, 816, 813, 233, 566, 247, 985, 724, 205, 454, 863, 491, 741, 242, 949, 214, 733, 859, 335, 708, 621, 574, 73, 654, 730, 472, 419, 436, 278, 496, 867, 210, 399, 680, 480, 51, 878, 465, 811, 169, 869, 675, 611, 697, 867, 561, 862, 687, 507, 283, 482, 129, 807, 591, 733, 623, 150, 238, 59, 379, 684, 877, 625, 169, 643, 105, 170, 607, 520, 932, 727, 476, 693, 425, 174, 647, 73, 122, 335, 530, 442, 853, 695, 249, 445, 515, 909, 545, 703, 919, 874, 474, 882, 500, 594, 612, 641, 801, 220, 162, 819, 984, 589, 513, 495, 799, 161, 604, 958, 533, 221, 400, 386, 867, 600, 782, 382, 596, 414, 171, 516, 375, 682, 485, 911, 276, 98, 553, 163, 354, 666, 933, 424, 341, 533, 870, 227, 730, 475, 186, 263, 647, 537, 686, 600, 224, 469, 68, 770, 919, 190, 373, 294, 822, 808, 206, 184, 943, 795, 384, 383, 461, 404, 758, 839, 887, 715, 67, 618, 276, 204, 918, 873, 777, 604, 560, 951, 160, 578, 722, 79, 804, 96, 409, 713, 940, 652, 934, 970, 447, 318, 353, 859, 672, 112, 785, 645, 863, 803, 350, 139, 93, 354, 99, 820, 908, 609, 772, 154, 274, 580, 184, 79, 626, 630, 742, 653, 282, 762, 623, 680, 81, 927, 626, 789, 125, 411, 521, 938, 300, 821, 78, 343, 175, 128, 250, 170, 774, 972, 275, 999, 639, 495, 78, 352, 126, 857, 956, 358, 619, 580, 124, 737, 594, 701, 612, 669, 112, 134, 694, 363, 992, 809, 743, 168, 974, 944, 375, 748, 52, 600, 747, 642, 182, 862, 81, 344, 805, 988, 739, 511, 655, 814, 334, 249, 515, 897, 955, 664, 981, 649, 113, 974, 459, 893, 228, 433, 837, 553, 268, 926, 240, 102, 654, 459, 51, 686, 754, 806, 760, 493, 403, 415, 394, 687, 700, 946, 670, 656, 610, 738, 392, 760, 799, 887, 653, 978, 321, 576, 617, 626, 502, 894, 679, 243, 440, 680, 879, 194, 572, 640, 724, 926, 56, 204, 700, 707, 151, 457, 449, 797, 195, 791, 558, 945, 679, 297, 59, 87, 824, 713, 663, 412, 693, 342, 606, 134, 108, 571, 364, 631, 212, 174, 643, 304, 329, 343, 97, 430, 751, 497, 314, 983, 374, 822, 928, 140, 206, 73, 263, 980, 736, 876, 478, 430, 305, 170, 514, 364, 692, 829, 82, 855, 953, 676, 246, 369, 970, 294, 750, 807, 827, 150, 790, 288, 923, 804, 378, 215, 828, 592, 281, 565, 555, 710, 82, 896, 831, 547, 261, 524, 462, 293, 465, 502, 56, 661, 821, 976, 991, 658, 869, 905, 758, 745, 193, 768, 550, 608, 933, 378, 286, 215, 979, 792, 961, 61, 688, 793, 644, 986, 403, 106, 366, 905, 644, 372, 567, 466, 434, 645, 210, 389, 550, 919, 135, 780, 773, 635, 389, 707, 100, 626, 958, 165, 504, 920, 176, 193, 713, 857, 265, 203, 50, 668, 108, 645, 990, 626, 197, 510, 357, 358, 850, 858, 364, 936, 638};
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
  printf("\nSTMT_EXEC;;259\n");
Bool tooLong;
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
  printf("\nSTMT_EXEC;;276\n");
void *__cil_tmp29;
  printf("\nSTMT_EXEC;;277\n");
void *__cil_tmp30;
  printf("\nSTMT_EXEC;;278\n");
void *__cil_tmp31;
  {
    printf("\nSTMT_EXEC;;280\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;282\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
      printf("\nSTMT_EXEC;;303\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;306\n");
nNodes = alphaSize;
        printf("\nSTMT_EXEC;;307\n");
nHeap = 0;
        printf("\nSTMT_EXEC;;308\n");
heap[0] = 0;
        printf("\nSTMT_EXEC;;309\n");
weight[0] = 0;
        printf("\nSTMT_EXEC;;310\n");
parent[0] = -2;
        printf("\nSTMT_EXEC;;311\n");
i = 1;
        {
          printf("\nSTMT_EXEC;;313\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;316\n");
if (!(i <= alphaSize))
            {
              printf("\nSTMT_EXEC;;318\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;320\n");
parent[i] = -1;
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
              while_continue___2: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;343\n");
if (!(nHeap < 260))
        {
          {
            printf("\nSTMT_EXEC;;346\n");
BZ2_bz__AssertH__fail(2001);
          }
        }
        {
          printf("\nSTMT_EXEC;;350\n");
while (1)
          {
          while_continue___3: /* CIL Label */;
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
              while_continue___4: /* CIL Label */;
                printf("\nSTMT_EXEC;;366\n");
yy = zz___0 << 1;
                printf("\nSTMT_EXEC;;367\n");
if (yy > nHeap)
                {
                  printf("\nSTMT_EXEC;;369\n");
goto while_break___4;
                }
                printf("\nSTMT_EXEC;;371\n");
if (yy < nHeap)
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
              while_continue___5: /* CIL Label */;
                printf("\nSTMT_EXEC;;397\n");
yy___0 = zz___1 << 1;
                printf("\nSTMT_EXEC;;398\n");
if (yy___0 > nHeap)
                {
                  printf("\nSTMT_EXEC;;400\n");
goto while_break___5;
                }
                printf("\nSTMT_EXEC;;402\n");
if (yy___0 < nHeap)
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
            printf("\nSTMT_EXEC;;423\n");
if ((weight[n1] & 255) > (weight[n2] & 255))
            {
              printf("\nSTMT_EXEC;;425\n");
tmp___4 = weight[n1] & 255;
            }
            else
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
              while_continue___6: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;454\n");
if (!(nNodes < 516))
        {
          {
            printf("\nSTMT_EXEC;;457\n");
BZ2_bz__AssertH__fail(2002);
          }
        }
        printf("\nSTMT_EXEC;;460\n");
tooLong = (Bool)0;
        printf("\nSTMT_EXEC;;461\n");
i = 1;
        {
          printf("\nSTMT_EXEC;;463\n");
while (1)
          {
          while_continue___7: /* CIL Label */;
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
              while_continue___8: /* CIL Label */;
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
            printf("\nSTMT_EXEC;;486\n");
if (j > maxLen)
            {
              printf("\nSTMT_EXEC;;488\n");
tooLong = (Bool)1;
            }
            printf("\nSTMT_EXEC;;490\n");
i++;
          }
        while_break___7: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;494\n");
if (!tooLong)
        {
          printf("\nSTMT_EXEC;;496\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;498\n");
i = 1;
        {
          printf("\nSTMT_EXEC;;500\n");
while (1)
          {
          while_continue___9: /* CIL Label */;
            printf("\nSTMT_EXEC;;503\n");
if (!(i <= alphaSize))
            {
              printf("\nSTMT_EXEC;;505\n");
goto while_break___9;
            }
            printf("\nSTMT_EXEC;;507\n");
j = weight[i] >> 8;
            printf("\nSTMT_EXEC;;508\n");
j = 1 + j / 2;
            printf("\nSTMT_EXEC;;509\n");
weight[i] = j << 8;
            printf("\nSTMT_EXEC;;510\n");
i++;
          }
        while_break___9: /* CIL Label */;
        }
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;517\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      while_continue: /* CIL Label */;
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
          while_continue___0: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;559\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      while_continue: /* CIL Label */;
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
          while_continue___0: /* CIL Label */;
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
      while_continue___1: /* CIL Label */;
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
      while_continue___2: /* CIL Label */;
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
      while_continue___3: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;643\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;645\n");
while (1)
      {
      while_continue___4: /* CIL Label */;
        printf("\nSTMT_EXEC;;648\n");
if (!(i < 23))
        {
          printf("\nSTMT_EXEC;;650\n");
goto while_break___4;
        }
        printf("\nSTMT_EXEC;;652\n");
*(limit + i) = 0;
        printf("\nSTMT_EXEC;;653\n");
i++;
      }
    while_break___4: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;657\n");
vec = 0;
    printf("\nSTMT_EXEC;;658\n");
i = minLen;
    {
      printf("\nSTMT_EXEC;;660\n");
while (1)
      {
      while_continue___5: /* CIL Label */;
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
      while_continue___6: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;688\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;705\n");
if (!(i < 256))
        {
          printf("\nSTMT_EXEC;;707\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;709\n");
if (s->inUse[i])
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
    printf("\nSTMT_EXEC;;718\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;743\n");
Int32 zt;
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
  printf("\nSTMT_EXEC;;752\n");
UInt32 v;
  printf("\nSTMT_EXEC;;753\n");
UInt32 v___0;
  printf("\nSTMT_EXEC;;754\n");
UInt32 v___1;
  printf("\nSTMT_EXEC;;755\n");
UInt32 v___2;
  printf("\nSTMT_EXEC;;756\n");
UInt32 v___3;
  printf("\nSTMT_EXEC;;757\n");
UInt32 v___4;
  printf("\nSTMT_EXEC;;758\n");
UInt32 v___5;
  printf("\nSTMT_EXEC;;759\n");
UInt32 v___6;
  printf("\nSTMT_EXEC;;760\n");
UInt32 v___7;
  printf("\nSTMT_EXEC;;761\n");
UInt32 v___8;
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
  printf("\nSTMT_EXEC;;770\n");
UInt32 v___17;
  printf("\nSTMT_EXEC;;771\n");
UInt32 v___18;
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
  printf("\nSTMT_EXEC;;788\n");
Int32 ii___0;
  printf("\nSTMT_EXEC;;789\n");
Int32 jj___0;
  printf("\nSTMT_EXEC;;790\n");
Int32 kk___0;
  printf("\nSTMT_EXEC;;791\n");
Int32 pp;
  printf("\nSTMT_EXEC;;792\n");
Int32 lno;
  printf("\nSTMT_EXEC;;793\n");
Int32 off;
  printf("\nSTMT_EXEC;;794\n");
UInt32 nn;
  printf("\nSTMT_EXEC;;795\n");
Int32 z;
  printf("\nSTMT_EXEC;;796\n");
UInt32 v___30;
  printf("\nSTMT_EXEC;;797\n");
UInt32 v___31;
  printf("\nSTMT_EXEC;;798\n");
Int32 tmp___0;
  printf("\nSTMT_EXEC;;799\n");
int tmp___1;
  printf("\nSTMT_EXEC;;800\n");
int tmp___2;
  printf("\nSTMT_EXEC;;801\n");
UInt32 v___32;
  printf("\nSTMT_EXEC;;802\n");
UInt32 v___33;
  printf("\nSTMT_EXEC;;803\n");
UInt32 v___34;
  printf("\nSTMT_EXEC;;804\n");
UInt32 v___35;
  printf("\nSTMT_EXEC;;805\n");
UInt32 v___36;
  printf("\nSTMT_EXEC;;806\n");
UInt32 v___37;
  printf("\nSTMT_EXEC;;807\n");
UInt32 v___38;
  printf("\nSTMT_EXEC;;808\n");
UInt32 v___39;
  printf("\nSTMT_EXEC;;809\n");
UInt32 v___40;
  printf("\nSTMT_EXEC;;810\n");
void *__cil_tmp92;
  {
    printf("\nSTMT_EXEC;;812\n");
strm = s->strm;
    printf("\nSTMT_EXEC;;813\n");
if (s->state == 10)
    {
      printf("\nSTMT_EXEC;;815\n");
s->save_i = 0;
      printf("\nSTMT_EXEC;;816\n");
s->save_j = 0;
      printf("\nSTMT_EXEC;;817\n");
s->save_t = 0;
      printf("\nSTMT_EXEC;;818\n");
s->save_alphaSize = 0;
      printf("\nSTMT_EXEC;;819\n");
s->save_nGroups = 0;
      printf("\nSTMT_EXEC;;820\n");
s->save_nSelectors = 0;
      printf("\nSTMT_EXEC;;821\n");
s->save_EOB = 0;
      printf("\nSTMT_EXEC;;822\n");
s->save_groupNo = 0;
      printf("\nSTMT_EXEC;;823\n");
s->save_groupPos = 0;
      printf("\nSTMT_EXEC;;824\n");
s->save_nextSym = 0;
      printf("\nSTMT_EXEC;;825\n");
s->save_nblockMAX = 0;
      printf("\nSTMT_EXEC;;826\n");
s->save_nblock = 0;
      printf("\nSTMT_EXEC;;827\n");
s->save_es = 0;
      printf("\nSTMT_EXEC;;828\n");
s->save_N = 0;
      printf("\nSTMT_EXEC;;829\n");
s->save_curr = 0;
      printf("\nSTMT_EXEC;;830\n");
s->save_zt = 0;
      printf("\nSTMT_EXEC;;831\n");
s->save_zn = 0;
      printf("\nSTMT_EXEC;;832\n");
s->save_zvec = 0;
      printf("\nSTMT_EXEC;;833\n");
s->save_zj = 0;
      printf("\nSTMT_EXEC;;834\n");
s->save_gSel = 0;
      printf("\nSTMT_EXEC;;835\n");
s->save_gMinlen = 0;
      printf("\nSTMT_EXEC;;836\n");
s->save_gLimit = (Int32 *)((void *)0);
      printf("\nSTMT_EXEC;;837\n");
s->save_gBase = (Int32 *)((void *)0);
      printf("\nSTMT_EXEC;;838\n");
s->save_gPerm = (Int32 *)((void *)0);
    }
    printf("\nSTMT_EXEC;;840\n");
i = s->save_i;
    printf("\nSTMT_EXEC;;841\n");
j = s->save_j;
    printf("\nSTMT_EXEC;;842\n");
t = s->save_t;
    printf("\nSTMT_EXEC;;843\n");
alphaSize = s->save_alphaSize;
    printf("\nSTMT_EXEC;;844\n");
nGroups = s->save_nGroups;
    printf("\nSTMT_EXEC;;845\n");
nSelectors = s->save_nSelectors;
    printf("\nSTMT_EXEC;;846\n");
EOB = s->save_EOB;
    printf("\nSTMT_EXEC;;847\n");
groupNo = s->save_groupNo;
    printf("\nSTMT_EXEC;;848\n");
groupPos = s->save_groupPos;
    printf("\nSTMT_EXEC;;849\n");
nextSym = s->save_nextSym;
    printf("\nSTMT_EXEC;;850\n");
nblockMAX = s->save_nblockMAX;
    printf("\nSTMT_EXEC;;851\n");
nblock = s->save_nblock;
    printf("\nSTMT_EXEC;;852\n");
es = s->save_es;
    printf("\nSTMT_EXEC;;853\n");
N = s->save_N;
    printf("\nSTMT_EXEC;;854\n");
curr = s->save_curr;
    printf("\nSTMT_EXEC;;855\n");
zt = s->save_zt;
    printf("\nSTMT_EXEC;;856\n");
zn = s->save_zn;
    printf("\nSTMT_EXEC;;857\n");
zvec = s->save_zvec;
    printf("\nSTMT_EXEC;;858\n");
zj = s->save_zj;
    printf("\nSTMT_EXEC;;859\n");
gSel = s->save_gSel;
    printf("\nSTMT_EXEC;;860\n");
gMinlen = s->save_gMinlen;
    printf("\nSTMT_EXEC;;861\n");
gLimit = s->save_gLimit;
    printf("\nSTMT_EXEC;;862\n");
gBase = s->save_gBase;
    printf("\nSTMT_EXEC;;863\n");
gPerm = s->save_gPerm;
    printf("\nSTMT_EXEC;;864\n");
retVal = 0;
    {
      printf("\nSTMT_EXEC;;866\n");
if (s->state == 10)
      {
        printf("\nSTMT_EXEC;;868\n");
goto case_10;
      }
      printf("\nSTMT_EXEC;;870\n");
if (s->state == 11)
      {
        printf("\nSTMT_EXEC;;872\n");
goto case_11;
      }
      printf("\nSTMT_EXEC;;874\n");
if (s->state == 12)
      {
        printf("\nSTMT_EXEC;;876\n");
goto case_12;
      }
      printf("\nSTMT_EXEC;;878\n");
if (s->state == 13)
      {
        printf("\nSTMT_EXEC;;880\n");
goto case_13;
      }
      printf("\nSTMT_EXEC;;882\n");
if (s->state == 14)
      {
        printf("\nSTMT_EXEC;;884\n");
goto case_14;
      }
      printf("\nSTMT_EXEC;;886\n");
if (s->state == 15)
      {
        printf("\nSTMT_EXEC;;888\n");
goto case_15;
      }
      printf("\nSTMT_EXEC;;890\n");
if (s->state == 16)
      {
        printf("\nSTMT_EXEC;;892\n");
goto case_16;
      }
      printf("\nSTMT_EXEC;;894\n");
if (s->state == 17)
      {
        printf("\nSTMT_EXEC;;896\n");
goto case_17;
      }
      printf("\nSTMT_EXEC;;898\n");
if (s->state == 18)
      {
        printf("\nSTMT_EXEC;;900\n");
goto case_18;
      }
      printf("\nSTMT_EXEC;;902\n");
if (s->state == 19)
      {
        printf("\nSTMT_EXEC;;904\n");
goto case_19;
      }
      printf("\nSTMT_EXEC;;906\n");
if (s->state == 20)
      {
        printf("\nSTMT_EXEC;;908\n");
goto case_20;
      }
      printf("\nSTMT_EXEC;;910\n");
if (s->state == 21)
      {
        printf("\nSTMT_EXEC;;912\n");
goto case_21;
      }
      printf("\nSTMT_EXEC;;914\n");
if (s->state == 22)
      {
        printf("\nSTMT_EXEC;;916\n");
goto case_22;
      }
      printf("\nSTMT_EXEC;;918\n");
if (s->state == 23)
      {
        printf("\nSTMT_EXEC;;920\n");
goto case_23;
      }
      printf("\nSTMT_EXEC;;922\n");
if (s->state == 24)
      {
        printf("\nSTMT_EXEC;;924\n");
goto case_24;
      }
      printf("\nSTMT_EXEC;;926\n");
if (s->state == 25)
      {
        printf("\nSTMT_EXEC;;928\n");
goto case_25;
      }
      printf("\nSTMT_EXEC;;930\n");
if (s->state == 26)
      {
        printf("\nSTMT_EXEC;;932\n");
goto case_26;
      }
      printf("\nSTMT_EXEC;;934\n");
if (s->state == 27)
      {
        printf("\nSTMT_EXEC;;936\n");
goto case_27;
      }
      printf("\nSTMT_EXEC;;938\n");
if (s->state == 28)
      {
        printf("\nSTMT_EXEC;;940\n");
goto case_28;
      }
      printf("\nSTMT_EXEC;;942\n");
if (s->state == 29)
      {
        printf("\nSTMT_EXEC;;944\n");
goto case_29;
      }
      printf("\nSTMT_EXEC;;946\n");
if (s->state == 30)
      {
        printf("\nSTMT_EXEC;;948\n");
goto case_30;
      }
      printf("\nSTMT_EXEC;;950\n");
if (s->state == 31)
      {
        printf("\nSTMT_EXEC;;952\n");
goto case_31;
      }
      printf("\nSTMT_EXEC;;954\n");
if (s->state == 32)
      {
        printf("\nSTMT_EXEC;;956\n");
goto case_32;
      }
      printf("\nSTMT_EXEC;;958\n");
if (s->state == 33)
      {
        printf("\nSTMT_EXEC;;960\n");
goto case_33;
      }
      printf("\nSTMT_EXEC;;962\n");
if (s->state == 34)
      {
        printf("\nSTMT_EXEC;;964\n");
goto case_34;
      }
      printf("\nSTMT_EXEC;;966\n");
if (s->state == 35)
      {
        printf("\nSTMT_EXEC;;968\n");
goto case_35;
      }
      printf("\nSTMT_EXEC;;970\n");
if (s->state == 36)
      {
        printf("\nSTMT_EXEC;;972\n");
goto case_36;
      }
      printf("\nSTMT_EXEC;;974\n");
if (s->state == 37)
      {
        printf("\nSTMT_EXEC;;976\n");
goto case_37;
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
      printf("\nSTMT_EXEC;;994\n");
if (s->state == 42)
      {
        printf("\nSTMT_EXEC;;996\n");
goto endhdr_2;
      }
      printf("\nSTMT_EXEC;;998\n");
if (s->state == 43)
      {
        printf("\nSTMT_EXEC;;1000\n");
goto case_43;
      }
      printf("\nSTMT_EXEC;;1002\n");
if (s->state == 44)
      {
        printf("\nSTMT_EXEC;;1004\n");
goto case_44;
      }
      printf("\nSTMT_EXEC;;1006\n");
if (s->state == 45)
      {
        printf("\nSTMT_EXEC;;1008\n");
goto case_45;
      }
      printf("\nSTMT_EXEC;;1010\n");
if (s->state == 46)
      {
        printf("\nSTMT_EXEC;;1012\n");
goto case_46;
      }
      printf("\nSTMT_EXEC;;1014\n");
if (s->state == 47)
      {
        printf("\nSTMT_EXEC;;1016\n");
goto case_47;
      }
      printf("\nSTMT_EXEC;;1018\n");
if (s->state == 48)
      {
        printf("\nSTMT_EXEC;;1020\n");
goto case_48;
      }
      printf("\nSTMT_EXEC;;1022\n");
if (s->state == 49)
      {
        printf("\nSTMT_EXEC;;1024\n");
goto case_49;
      }
      printf("\nSTMT_EXEC;;1026\n");
if (s->state == 50)
      {
        printf("\nSTMT_EXEC;;1028\n");
goto case_50;
      }
      printf("\nSTMT_EXEC;;1030\n");
goto switch_default;
    case_10: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1032\n");
s->state = 10;
}

      {
        printf("\nSTMT_EXEC;;1034\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;1037\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1039\n");
v = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1040\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1041\n");
uc = (UChar)v;
            printf("\nSTMT_EXEC;;1042\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;1044\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1046\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1047\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1049\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1050\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1051\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1052\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1053\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1054\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1056\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1061\n");
if ((int)uc != 66)
      {
        printf("\nSTMT_EXEC;;1063\n");
retVal = -5;
        printf("\nSTMT_EXEC;;1064\n");
goto save_state_and_return;
      }
    case_11: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1067\n");
s->state = 11;
}

      {
        printf("\nSTMT_EXEC;;1069\n");
while (1)
        {
        while_continue___0: /* CIL Label */;
          printf("\nSTMT_EXEC;;1072\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1074\n");
v___0 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1075\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1076\n");
uc = (UChar)v___0;
            printf("\nSTMT_EXEC;;1077\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;1079\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1081\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1082\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1084\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1085\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1086\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1087\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1088\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1089\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1091\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___0: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1096\n");
if ((int)uc != 90)
      {
        printf("\nSTMT_EXEC;;1098\n");
retVal = -5;
        printf("\nSTMT_EXEC;;1099\n");
goto save_state_and_return;
      }
    case_12: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1102\n");
s->state = 12;
}

      {
        printf("\nSTMT_EXEC;;1104\n");
while (1)
        {
        while_continue___1: /* CIL Label */;
          printf("\nSTMT_EXEC;;1107\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1109\n");
v___1 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1110\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1111\n");
uc = (UChar)v___1;
            printf("\nSTMT_EXEC;;1112\n");
goto while_break___1;
          }
          printf("\nSTMT_EXEC;;1114\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1116\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1117\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1119\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1120\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1121\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1122\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1123\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1124\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1126\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___1: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1131\n");
if ((int)uc != 104)
      {
        printf("\nSTMT_EXEC;;1133\n");
retVal = -5;
        printf("\nSTMT_EXEC;;1134\n");
goto save_state_and_return;
      }
    case_13: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1137\n");
s->state = 13;
}

      {
        printf("\nSTMT_EXEC;;1139\n");
while (1)
        {
        while_continue___2: /* CIL Label */;
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
          printf("\nSTMT_EXEC;;1149\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1151\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1152\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1154\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1155\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1156\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1157\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1158\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1159\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1161\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___2: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1166\n");
if (s->blockSize100k < 49)
      {
        printf("\nSTMT_EXEC;;1168\n");
retVal = -5;
        printf("\nSTMT_EXEC;;1169\n");
goto save_state_and_return;
      }
      else
      {
        printf("\nSTMT_EXEC;;1173\n");
if (s->blockSize100k > 57)
        {
          printf("\nSTMT_EXEC;;1175\n");
retVal = -5;
          printf("\nSTMT_EXEC;;1176\n");
goto save_state_and_return;
        }
      }
      printf("\nSTMT_EXEC;;1179\n");
s->blockSize100k -= 48;
      printf("\nSTMT_EXEC;;1180\n");
if (s->smallDecompress)
      {
        {
          printf("\nSTMT_EXEC;;1183\n");
s->ll16 = (UInt16 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)(s->blockSize100k * 100000) * sizeof(UInt16)), 1);
          printf("\nSTMT_EXEC;;1184\n");
s->ll4 = (UChar *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)((1 + s->blockSize100k * 100000) >> 1) * sizeof(UChar)), 1);
        }
        printf("\nSTMT_EXEC;;1186\n");
if ((unsigned long)s->ll16 == (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;1188\n");
retVal = -3;
          printf("\nSTMT_EXEC;;1189\n");
goto save_state_and_return;
        }
        else
        {
          printf("\nSTMT_EXEC;;1193\n");
if ((unsigned long)s->ll4 == (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;1195\n");
retVal = -3;
            printf("\nSTMT_EXEC;;1196\n");
goto save_state_and_return;
          }
        }
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;1203\n");
s->tt = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)(s->blockSize100k * 100000) * sizeof(Int32)), 1);
        }
        printf("\nSTMT_EXEC;;1205\n");
if ((unsigned long)s->tt == (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;1207\n");
retVal = -3;
          printf("\nSTMT_EXEC;;1208\n");
goto save_state_and_return;
        }
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
        while_continue___3: /* CIL Label */;
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
          printf("\nSTMT_EXEC;;1224\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1226\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1227\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1229\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1230\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1231\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1232\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1233\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1234\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1236\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___3: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1241\n");
if ((int)uc == 23)
      {
        printf("\nSTMT_EXEC;;1243\n");
goto endhdr_2;
      }
      printf("\nSTMT_EXEC;;1245\n");
if ((int)uc != 49)
      {
        printf("\nSTMT_EXEC;;1247\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1248\n");
goto save_state_and_return;


      }
    case_15: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1253\n");
s->state = 15;
}

      {
        printf("\nSTMT_EXEC;;1255\n");
while (1)




        {
        while_continue___4: /* CIL Label */;
          printf("\nSTMT_EXEC;;1262\n");
if (s->bsLive >= 8)



          {
            printf("\nSTMT_EXEC;;1267\n");
v___4 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);

















            printf("\nSTMT_EXEC;;1285\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1286\n");
uc = (UChar)v___4;
            printf("\nSTMT_EXEC;;1287\n");
goto while_break___4;
          }
          printf("\nSTMT_EXEC;;1289\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1291\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1292\n");
goto save_state_and_return;
          }





















          printf("\nSTMT_EXEC;;1315\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1316\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1317\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1318\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1319\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1320\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1322\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___4: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1327\n");
if ((int)uc != 65)
      {
        printf("\nSTMT_EXEC;;1329\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1330\n");
goto save_state_and_return;
      }
    case_16: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1333\n");
s->state = 16;
}

      {
        printf("\nSTMT_EXEC;;1335\n");
while (1)
        {
        while_continue___5: /* CIL Label */;
          printf("\nSTMT_EXEC;;1338\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1340\n");
v___5 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1341\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1342\n");
uc = (UChar)v___5;
            printf("\nSTMT_EXEC;;1343\n");
goto while_break___5;
          }
          printf("\nSTMT_EXEC;;1345\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1347\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1348\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1350\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1351\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1352\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1353\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1354\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1355\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1357\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___5: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1362\n");
if ((int)uc != 89)
      {
        printf("\nSTMT_EXEC;;1364\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1365\n");
goto save_state_and_return;
      }
    case_17: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1368\n");
s->state = 17;
}

      {
        printf("\nSTMT_EXEC;;1370\n");
while (1)
        {
        while_continue___6: /* CIL Label */;
          printf("\nSTMT_EXEC;;1373\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1375\n");
v___6 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1376\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1377\n");
uc = (UChar)v___6;
            printf("\nSTMT_EXEC;;1378\n");
goto while_break___6;
          }
          printf("\nSTMT_EXEC;;1380\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1382\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1383\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1385\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1386\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1387\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1388\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1389\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1390\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1392\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___6: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1397\n");
if ((int)uc != 38)
      {
        printf("\nSTMT_EXEC;;1399\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1400\n");
goto save_state_and_return;
      }
    case_18: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1403\n");
s->state = 18;
}

      {
        printf("\nSTMT_EXEC;;1405\n");
while (1)
        {
        while_continue___7: /* CIL Label */;
          printf("\nSTMT_EXEC;;1408\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1410\n");
v___7 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1411\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1412\n");
uc = (UChar)v___7;
            printf("\nSTMT_EXEC;;1413\n");
goto while_break___7;
          }
          printf("\nSTMT_EXEC;;1415\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1417\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1418\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1420\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1421\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1422\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1423\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1424\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1425\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1427\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___7: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1432\n");
if ((int)uc != 83)
      {
        printf("\nSTMT_EXEC;;1434\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1435\n");
goto save_state_and_return;
      }
    case_19: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1438\n");
s->state = 19;
}

      {
        printf("\nSTMT_EXEC;;1440\n");
while (1)
        {
        while_continue___8: /* CIL Label */;
          printf("\nSTMT_EXEC;;1443\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1445\n");
v___8 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1446\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1447\n");
uc = (UChar)v___8;
            printf("\nSTMT_EXEC;;1448\n");
goto while_break___8;
          }
          printf("\nSTMT_EXEC;;1450\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1452\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1453\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1455\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1456\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1457\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1458\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1459\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1460\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1462\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___8: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1467\n");
if ((int)uc != 89)
      {
        printf("\nSTMT_EXEC;;1469\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1470\n");
goto save_state_and_return;
      }
      printf("\nSTMT_EXEC;;1472\n");
(s->currBlockNo)++;
      printf("\nSTMT_EXEC;;1473\n");
if (s->verbosity >= 2)
      {
        {
          printf("\nSTMT_EXEC;;1476\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n    [%d: huff+mtf ", s->currBlockNo);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;1479\n");
s->storedBlockCRC = (UInt32)0;
    case_20: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1481\n");
s->state = 20;
}

      {
        printf("\nSTMT_EXEC;;1483\n");
while (1)
        {
        while_continue___9: /* CIL Label */;
          printf("\nSTMT_EXEC;;1486\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1488\n");
v___9 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1489\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1490\n");
uc = (UChar)v___9;
            printf("\nSTMT_EXEC;;1491\n");
goto while_break___9;
          }
          printf("\nSTMT_EXEC;;1493\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1495\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1496\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1498\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1499\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1500\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1501\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1502\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1503\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1505\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___9: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1510\n");
s->storedBlockCRC = (s->storedBlockCRC << 8) | (UInt32)uc;
    case_21: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1512\n");
s->state = 21;
}

      {
        printf("\nSTMT_EXEC;;1514\n");
while (1)
        {
        while_continue___10: /* CIL Label */;
          printf("\nSTMT_EXEC;;1517\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1519\n");
v___10 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1520\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1521\n");
uc = (UChar)v___10;
            printf("\nSTMT_EXEC;;1522\n");
goto while_break___10;
          }
          printf("\nSTMT_EXEC;;1524\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1526\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1527\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1529\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1530\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1531\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1532\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1533\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1534\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1536\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___10: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1541\n");
s->storedBlockCRC = (s->storedBlockCRC << 8) | (UInt32)uc;
    case_22: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1543\n");
s->state = 22;
}

      {
        printf("\nSTMT_EXEC;;1545\n");
while (1)
        {
        while_continue___11: /* CIL Label */;
          printf("\nSTMT_EXEC;;1548\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1550\n");
v___11 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1551\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1552\n");
uc = (UChar)v___11;
            printf("\nSTMT_EXEC;;1553\n");
goto while_break___11;
          }
          printf("\nSTMT_EXEC;;1555\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1557\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1558\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1560\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1561\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1562\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1563\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1564\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1565\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1567\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___11: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1572\n");
s->storedBlockCRC = (s->storedBlockCRC << 8) | (UInt32)uc;
    case_23: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1574\n");
s->state = 23;
}

      {
        printf("\nSTMT_EXEC;;1576\n");
while (1)
        {
        while_continue___12: /* CIL Label */;
          printf("\nSTMT_EXEC;;1579\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1581\n");
v___12 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1582\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1583\n");
uc = (UChar)v___12;
            printf("\nSTMT_EXEC;;1584\n");
goto while_break___12;
          }
          printf("\nSTMT_EXEC;;1586\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1588\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1589\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1591\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1592\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1593\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1594\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1595\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1596\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1598\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___12: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1603\n");
s->storedBlockCRC = (s->storedBlockCRC << 8) | (UInt32)uc;
    case_24: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1605\n");
s->state = 24;
}

      {
        printf("\nSTMT_EXEC;;1607\n");
while (1)
        {
        while_continue___13: /* CIL Label */;
          printf("\nSTMT_EXEC;;1610\n");
if (s->bsLive >= 1)
          {
            printf("\nSTMT_EXEC;;1612\n");
v___13 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
            printf("\nSTMT_EXEC;;1613\n");
(s->bsLive)--;
            printf("\nSTMT_EXEC;;1614\n");
s->blockRandomised = (Bool)v___13;
            printf("\nSTMT_EXEC;;1615\n");
goto while_break___13;
          }
          printf("\nSTMT_EXEC;;1617\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1619\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1620\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1622\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1623\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1624\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1625\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1626\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1627\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1629\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___13: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1634\n");
s->origPtr = 0;
    case_25: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1636\n");
s->state = 25;
}

      {
        printf("\nSTMT_EXEC;;1638\n");
while (1)
        {
        while_continue___14: /* CIL Label */;
          printf("\nSTMT_EXEC;;1641\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;1643\n");
v___14 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;1644\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;1645\n");
uc = (UChar)v___14;
            printf("\nSTMT_EXEC;;1646\n");
goto while_break___14;
          }
          printf("\nSTMT_EXEC;;1648\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1650\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1651\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1653\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1654\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1655\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1656\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1657\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1658\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1660\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___14: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1665\n");
s->origPtr = (s->origPtr << 8) | (Int32)uc;
    case_26: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1667\n");
s->state = 26;
}

      {
        printf("\nSTMT_EXEC;;1669\n");
while (1)
        {
        while_continue___15: /* CIL Label */;
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
          printf("\nSTMT_EXEC;;1679\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1681\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1682\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1684\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1685\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1686\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1687\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1688\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1689\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1691\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___15: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1696\n");
s->origPtr = (s->origPtr << 8) | (Int32)uc;
    case_27: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1698\n");
s->state = 27;
}

      {
        printf("\nSTMT_EXEC;;1700\n");
while (1)
        {
        while_continue___16: /* CIL Label */;
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
          printf("\nSTMT_EXEC;;1710\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1712\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1713\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1715\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1716\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1717\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1718\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1719\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1720\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1722\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___16: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1727\n");
s->origPtr = (s->origPtr << 8) | (Int32)uc;
      printf("\nSTMT_EXEC;;1728\n");
if (s->origPtr < 0)
      {
        printf("\nSTMT_EXEC;;1730\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1731\n");
goto save_state_and_return;
      }
      printf("\nSTMT_EXEC;;1733\n");
if (s->origPtr > 10 + 100000 * s->blockSize100k)
      {
        printf("\nSTMT_EXEC;;1735\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1736\n");
goto save_state_and_return;
      }
      printf("\nSTMT_EXEC;;1738\n");
i = 0;
      {
        printf("\nSTMT_EXEC;;1740\n");
while (1)
        {
        while_continue___17: /* CIL Label */;
          printf("\nSTMT_EXEC;;1743\n");
if (!(i < 16))
          {
            printf("\nSTMT_EXEC;;1745\n");
goto while_break___17;
          }
        case_28: /* CIL Label */
          {
printf("\nSTMT_EXEC;;1748\n");
s->state = 28;
}

          {
            printf("\nSTMT_EXEC;;1750\n");
while (1)

            {
            while_continue___18: /* CIL Label */;
              printf("\nSTMT_EXEC;;1754\n");
if (s->bsLive >= 1)
              {
                printf("\nSTMT_EXEC;;1756\n");
v___17 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
                printf("\nSTMT_EXEC;;1757\n");
(s->bsLive)--;
                printf("\nSTMT_EXEC;;1758\n");
uc = (UChar)v___17;
                printf("\nSTMT_EXEC;;1759\n");
goto while_break___18;
              }
              printf("\nSTMT_EXEC;;1761\n");
if ((s->strm)->avail_in == 0U)
              {
                printf("\nSTMT_EXEC;;1763\n");
retVal = 0;
                printf("\nSTMT_EXEC;;1764\n");
goto save_state_and_return;
              }
































              printf("\nSTMT_EXEC;;1798\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
              printf("\nSTMT_EXEC;;1799\n");
s->bsLive += 8;
              printf("\nSTMT_EXEC;;1800\n");
((s->strm)->next_in)++;
              printf("\nSTMT_EXEC;;1801\n");
((s->strm)->avail_in)--;
              printf("\nSTMT_EXEC;;1802\n");
((s->strm)->total_in_lo32)++;
              printf("\nSTMT_EXEC;;1803\n");
if ((s->strm)->total_in_lo32 == 0U)
              {
                printf("\nSTMT_EXEC;;1805\n");
((s->strm)->total_in_hi32)++;
              }
            }
          while_break___18: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;1810\n");
if ((int)uc == 1)
          {
            printf("\nSTMT_EXEC;;1812\n");
s->inUse16[i] = (Bool)1;
          }
          else
          {
            printf("\nSTMT_EXEC;;1816\n");
s->inUse16[i] = (Bool)0;
          }
          printf("\nSTMT_EXEC;;1818\n");
i++;
        }
      while_break___17: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1822\n");
i = 0;
      {
        printf("\nSTMT_EXEC;;1824\n");
while (1)
        {
        while_continue___19: /* CIL Label */;
          printf("\nSTMT_EXEC;;1827\n");
if (!(i < 256))
          {
            printf("\nSTMT_EXEC;;1829\n");
goto while_break___19;
          }
          printf("\nSTMT_EXEC;;1831\n");
s->inUse[i] = (Bool)0;
          printf("\nSTMT_EXEC;;1832\n");
i++;
        }
      while_break___19: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1836\n");
i = 0;
      {
        printf("\nSTMT_EXEC;;1838\n");
while (1)
        {
        while_continue___20: /* CIL Label */;
          printf("\nSTMT_EXEC;;1841\n");
if (!(i < 16))
          {
            printf("\nSTMT_EXEC;;1843\n");
goto while_break___20;
          }
          printf("\nSTMT_EXEC;;1845\n");
if (s->inUse16[i])
          {
            printf("\nSTMT_EXEC;;1847\n");
j = 0;
            {
              printf("\nSTMT_EXEC;;1849\n");
while (1)
              {
              while_continue___21: /* CIL Label */;
                printf("\nSTMT_EXEC;;1852\n");
if (!(j < 16))
                {
                  printf("\nSTMT_EXEC;;1854\n");
goto while_break___21;
                }
              case_29: /* CIL Label */
                {
printf("\nSTMT_EXEC;;1857\n");
s->state = 29;
}

                {
                  printf("\nSTMT_EXEC;;1859\n");
while (1)
                  {
                  while_continue___22: /* CIL Label */;
                    printf("\nSTMT_EXEC;;1862\n");
if (s->bsLive >= 1)
                    {
                      printf("\nSTMT_EXEC;;1864\n");
v___18 = (s->bsBuff >> (s->bsLive - 1)) & (unsigned int)((1 << 1) - 1);
                      printf("\nSTMT_EXEC;;1865\n");
(s->bsLive)--;
                      printf("\nSTMT_EXEC;;1866\n");
uc = (UChar)v___18;
                      printf("\nSTMT_EXEC;;1867\n");
goto while_break___22;
                    }
                    printf("\nSTMT_EXEC;;1869\n");
if ((s->strm)->avail_in == 0U)
                    {
                      printf("\nSTMT_EXEC;;1871\n");
retVal = 0;
                      printf("\nSTMT_EXEC;;1872\n");
goto save_state_and_return;
                    }
                    printf("\nSTMT_EXEC;;1874\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                    printf("\nSTMT_EXEC;;1875\n");
s->bsLive += 8;
                    printf("\nSTMT_EXEC;;1876\n");
((s->strm)->next_in)++;
                    printf("\nSTMT_EXEC;;1877\n");
((s->strm)->avail_in)--;
                    printf("\nSTMT_EXEC;;1878\n");
((s->strm)->total_in_lo32)++;
                    printf("\nSTMT_EXEC;;1879\n");
if ((s->strm)->total_in_lo32 == 0U)
                    {
                      printf("\nSTMT_EXEC;;1881\n");
((s->strm)->total_in_hi32)++;
                    }
                  }
                while_break___22: /* CIL Label */;
                }
                printf("\nSTMT_EXEC;;1886\n");
if ((int)uc == 1)
                {
                  printf("\nSTMT_EXEC;;1888\n");
s->inUse[i * 16 + j] = (Bool)1;
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
      printf("\nSTMT_EXEC;;1902\n");
if (s->nInUse == 0)
      {
        printf("\nSTMT_EXEC;;1904\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1905\n");
goto save_state_and_return;
      }
      printf("\nSTMT_EXEC;;1907\n");
alphaSize = s->nInUse + 2;
    case_30: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1909\n");
s->state = 30;
}

      {
        printf("\nSTMT_EXEC;;1911\n");
while (1)
        {
        while_continue___23: /* CIL Label */;
          printf("\nSTMT_EXEC;;1914\n");
if (s->bsLive >= 3)
          {
            printf("\nSTMT_EXEC;;1916\n");
v___19 = (s->bsBuff >> (s->bsLive - 3)) & (unsigned int)((1 << 3) - 1);
            printf("\nSTMT_EXEC;;1917\n");
s->bsLive -= 3;
            printf("\nSTMT_EXEC;;1918\n");
nGroups = (Int32)v___19;
            printf("\nSTMT_EXEC;;1919\n");
goto while_break___23;
          }
          printf("\nSTMT_EXEC;;1921\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1923\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1924\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1926\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1927\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1928\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1929\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1930\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1931\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1933\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___23: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1938\n");
if (nGroups < 2)
      {
        printf("\nSTMT_EXEC;;1940\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1941\n");
goto save_state_and_return;
      }
      else
      {
        printf("\nSTMT_EXEC;;1945\n");
if (nGroups > 6)
        {
          printf("\nSTMT_EXEC;;1947\n");
retVal = -4;
          printf("\nSTMT_EXEC;;1948\n");
goto save_state_and_return;
        }
      }
    case_31: /* CIL Label */
      {
printf("\nSTMT_EXEC;;1952\n");
s->state = 31;
}

      {
        printf("\nSTMT_EXEC;;1954\n");
while (1)
        {
        while_continue___24: /* CIL Label */;
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
          printf("\nSTMT_EXEC;;1964\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;1966\n");
retVal = 0;
            printf("\nSTMT_EXEC;;1967\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;1969\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;1970\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;1971\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;1972\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;1973\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;1974\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;1976\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___24: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;1981\n");
if (nSelectors < 1)
      {
        printf("\nSTMT_EXEC;;1983\n");
retVal = -4;
        printf("\nSTMT_EXEC;;1984\n");
goto save_state_and_return;
      }
      printf("\nSTMT_EXEC;;1986\n");
i = 0;
      {
        printf("\nSTMT_EXEC;;1988\n");
while (1)
        {
        while_continue___25: /* CIL Label */;
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
            while_continue___26: /* CIL Label */;
            case_32: /* CIL Label */
              {
printf("\nSTMT_EXEC;;2001\n");
s->state = 32;
}

              {
                printf("\nSTMT_EXEC;;2003\n");
while (1)
                {
                while_continue___27: /* CIL Label */;
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
                  printf("\nSTMT_EXEC;;2013\n");
if ((s->strm)->avail_in == 0U)
                  {
                    printf("\nSTMT_EXEC;;2015\n");
retVal = 0;
                    printf("\nSTMT_EXEC;;2016\n");
goto save_state_and_return;
                  }
                  printf("\nSTMT_EXEC;;2018\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                  printf("\nSTMT_EXEC;;2019\n");
s->bsLive += 8;
                  printf("\nSTMT_EXEC;;2020\n");
((s->strm)->next_in)++;
                  printf("\nSTMT_EXEC;;2021\n");
((s->strm)->avail_in)--;
                  printf("\nSTMT_EXEC;;2022\n");
((s->strm)->total_in_lo32)++;
                  printf("\nSTMT_EXEC;;2023\n");
if ((s->strm)->total_in_lo32 == 0U)
                  {
                    printf("\nSTMT_EXEC;;2025\n");
((s->strm)->total_in_hi32)++;
                  }
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
              printf("\nSTMT_EXEC;;2035\n");
if (j >= nGroups)
              {
                printf("\nSTMT_EXEC;;2037\n");
retVal = -4;
                printf("\nSTMT_EXEC;;2038\n");
goto save_state_and_return;
              }
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
        while_continue___28: /* CIL Label */;
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
        while_continue___29: /* CIL Label */;
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
            while_continue___30: /* CIL Label */;
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
        while_continue___31: /* CIL Label */;
          printf("\nSTMT_EXEC;;2097\n");
if (!(t < nGroups))
          {
            printf("\nSTMT_EXEC;;2099\n");
goto while_break___31;
          }
        case_33: /* CIL Label */
          {
printf("\nSTMT_EXEC;;2102\n");
s->state = 33;
}

          {
            printf("\nSTMT_EXEC;;2104\n");
while (1)
            {
            while_continue___32: /* CIL Label */;
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
              printf("\nSTMT_EXEC;;2114\n");
if ((s->strm)->avail_in == 0U)
              {
                printf("\nSTMT_EXEC;;2116\n");
retVal = 0;
                printf("\nSTMT_EXEC;;2117\n");
goto save_state_and_return;
              }
              printf("\nSTMT_EXEC;;2119\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
              printf("\nSTMT_EXEC;;2120\n");
s->bsLive += 8;
              printf("\nSTMT_EXEC;;2121\n");
((s->strm)->next_in)++;
              printf("\nSTMT_EXEC;;2122\n");
((s->strm)->avail_in)--;
              printf("\nSTMT_EXEC;;2123\n");
((s->strm)->total_in_lo32)++;
              printf("\nSTMT_EXEC;;2124\n");
if ((s->strm)->total_in_lo32 == 0U)
              {
                printf("\nSTMT_EXEC;;2126\n");
((s->strm)->total_in_hi32)++;
              }
            }
          while_break___32: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;2131\n");
i = 0;
          {
            printf("\nSTMT_EXEC;;2133\n");
while (1)
            {
            while_continue___33: /* CIL Label */;
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
                while_continue___34: /* CIL Label */;
                  printf("\nSTMT_EXEC;;2144\n");
if (curr < 1)
                  {
                    printf("\nSTMT_EXEC;;2146\n");
retVal = -4;
                    printf("\nSTMT_EXEC;;2147\n");
goto save_state_and_return;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;2151\n");
if (curr > 20)
                    {
                      printf("\nSTMT_EXEC;;2153\n");
retVal = -4;
                      printf("\nSTMT_EXEC;;2154\n");
goto save_state_and_return;
                    }
                  }
                case_34: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;2158\n");
s->state = 34;
}

                  {
                    printf("\nSTMT_EXEC;;2160\n");
while (1)
                    {
                    while_continue___35: /* CIL Label */;
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
                      printf("\nSTMT_EXEC;;2170\n");
if ((s->strm)->avail_in == 0U)
                      {
                        printf("\nSTMT_EXEC;;2172\n");
retVal = 0;
                        printf("\nSTMT_EXEC;;2173\n");
goto save_state_and_return;
                      }
                      printf("\nSTMT_EXEC;;2175\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                      printf("\nSTMT_EXEC;;2176\n");
s->bsLive += 8;
                      printf("\nSTMT_EXEC;;2177\n");
((s->strm)->next_in)++;
                      printf("\nSTMT_EXEC;;2178\n");
((s->strm)->avail_in)--;
                      printf("\nSTMT_EXEC;;2179\n");
((s->strm)->total_in_lo32)++;
                      printf("\nSTMT_EXEC;;2180\n");
if ((s->strm)->total_in_lo32 == 0U)
                      {
                        printf("\nSTMT_EXEC;;2182\n");
((s->strm)->total_in_hi32)++;
                      }
                    }
                  while_break___35: /* CIL Label */;
                  }
                  printf("\nSTMT_EXEC;;2187\n");
if ((int)uc == 0)
                  {
                    printf("\nSTMT_EXEC;;2189\n");
goto while_break___34;
                  }
                case_35: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;2192\n");
s->state = 35;
}

                  {
                    printf("\nSTMT_EXEC;;2194\n");
while (1)
                    {
                    while_continue___36: /* CIL Label */;
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
                      printf("\nSTMT_EXEC;;2204\n");
if ((s->strm)->avail_in == 0U)
                      {
                        printf("\nSTMT_EXEC;;2206\n");
retVal = 0;
                        printf("\nSTMT_EXEC;;2207\n");
goto save_state_and_return;
                      }
                      printf("\nSTMT_EXEC;;2209\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
                      printf("\nSTMT_EXEC;;2210\n");
s->bsLive += 8;
                      printf("\nSTMT_EXEC;;2211\n");
((s->strm)->next_in)++;
                      printf("\nSTMT_EXEC;;2212\n");
((s->strm)->avail_in)--;
                      printf("\nSTMT_EXEC;;2213\n");
((s->strm)->total_in_lo32)++;
                      printf("\nSTMT_EXEC;;2214\n");
if ((s->strm)->total_in_lo32 == 0U)
                      {
                        printf("\nSTMT_EXEC;;2216\n");
((s->strm)->total_in_hi32)++;
                      }
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
        while_continue___37: /* CIL Label */;
          printf("\nSTMT_EXEC;;2246\n");
if (!(t < nGroups))
          {
            printf("\nSTMT_EXEC;;2248\n");
goto while_break___37;
          }
          printf("\nSTMT_EXEC;;2250\n");
minLen = 32;
          printf("\nSTMT_EXEC;;2251\n");
maxLen = 0;
          printf("\nSTMT_EXEC;;2252\n");
i = 0;
          {
            printf("\nSTMT_EXEC;;2254\n");
while (1)
            {
            while_continue___38: /* CIL Label */;
              printf("\nSTMT_EXEC;;2257\n");
if (!(i < alphaSize))
              {
                printf("\nSTMT_EXEC;;2259\n");
goto while_break___38;
              }
              printf("\nSTMT_EXEC;;2261\n");
if ((int)s->len[t][i] > maxLen)
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
      printf("\nSTMT_EXEC;;2282\n");
nblockMAX = 100000 * s->blockSize100k;
      printf("\nSTMT_EXEC;;2283\n");
groupNo = -1;
      printf("\nSTMT_EXEC;;2284\n");
groupPos = 0;
      printf("\nSTMT_EXEC;;2285\n");
i = 0;
      {
        printf("\nSTMT_EXEC;;2287\n");
while (1)
        {
        while_continue___39: /* CIL Label */;
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
        while_continue___40: /* CIL Label */;
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
            while_continue___41: /* CIL Label */;
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
      printf("\nSTMT_EXEC;;2330\n");
if (groupPos == 0)
      {
        printf("\nSTMT_EXEC;;2332\n");
groupNo++;
        printf("\nSTMT_EXEC;;2333\n");
if (groupNo >= nSelectors)
        {
          printf("\nSTMT_EXEC;;2335\n");
retVal = -4;
          printf("\nSTMT_EXEC;;2336\n");
goto save_state_and_return;
        }
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
    case_36: /* CIL Label */
      {
printf("\nSTMT_EXEC;;2348\n");
s->state = 36;
}

      {
        printf("\nSTMT_EXEC;;2350\n");
while (1)
        {
        while_continue___42: /* CIL Label */;
          printf("\nSTMT_EXEC;;2353\n");
if (s->bsLive >= zn)
          {
            printf("\nSTMT_EXEC;;2355\n");
v___26 = (s->bsBuff >> (s->bsLive - zn)) & (unsigned int)((1 << zn) - 1);
            printf("\nSTMT_EXEC;;2356\n");
s->bsLive -= zn;
            printf("\nSTMT_EXEC;;2357\n");
zvec = (Int32)v___26;
            printf("\nSTMT_EXEC;;2358\n");
goto while_break___42;
          }
          printf("\nSTMT_EXEC;;2360\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;2362\n");
retVal = 0;
            printf("\nSTMT_EXEC;;2363\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;2365\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;2366\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;2367\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;2368\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;2369\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;2370\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;2372\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___42: /* CIL Label */;
      }
      {
        printf("\nSTMT_EXEC;;2378\n");
while (1)
        {
        while_continue___43: /* CIL Label */;
          printf("\nSTMT_EXEC;;2381\n");
if (zn > 20)
          {
            printf("\nSTMT_EXEC;;2383\n");
retVal = -4;
            printf("\nSTMT_EXEC;;2384\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;2386\n");
if (zvec <= *(gLimit + zn))
          {
            printf("\nSTMT_EXEC;;2388\n");
goto while_break___43;
          }
          printf("\nSTMT_EXEC;;2390\n");
zn++;
        case_37: /* CIL Label */
          {
printf("\nSTMT_EXEC;;2392\n");
s->state = 37;
}

          {
            printf("\nSTMT_EXEC;;2394\n");
while (1)
            {
            while_continue___44: /* CIL Label */;
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
              printf("\nSTMT_EXEC;;2404\n");
if ((s->strm)->avail_in == 0U)
              {
                printf("\nSTMT_EXEC;;2406\n");
retVal = 0;
                printf("\nSTMT_EXEC;;2407\n");
goto save_state_and_return;
              }
              printf("\nSTMT_EXEC;;2409\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
              printf("\nSTMT_EXEC;;2410\n");
s->bsLive += 8;
              printf("\nSTMT_EXEC;;2411\n");
((s->strm)->next_in)++;
              printf("\nSTMT_EXEC;;2412\n");
((s->strm)->avail_in)--;
              printf("\nSTMT_EXEC;;2413\n");
((s->strm)->total_in_lo32)++;
              printf("\nSTMT_EXEC;;2414\n");
if ((s->strm)->total_in_lo32 == 0U)
              {
                printf("\nSTMT_EXEC;;2416\n");
((s->strm)->total_in_hi32)++;
              }
            }
          while_break___44: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;2421\n");
zvec = (zvec << 1) | zj;
        }
      while_break___43: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;2425\n");
if (zvec - *(gBase + zn) < 0)
      {
        printf("\nSTMT_EXEC;;2427\n");
retVal = -4;
        printf("\nSTMT_EXEC;;2428\n");
goto save_state_and_return;
      }
      else
      {
        printf("\nSTMT_EXEC;;2432\n");
if (zvec - *(gBase + zn) >= 258)
        {
          printf("\nSTMT_EXEC;;2434\n");
retVal = -4;
          printf("\nSTMT_EXEC;;2435\n");
goto save_state_and_return;
        }
      }
      printf("\nSTMT_EXEC;;2438\n");
nextSym = *(gPerm + (zvec - *(gBase + zn)));
      {
        printf("\nSTMT_EXEC;;2440\n");
while (1)
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
                while_continue___46: /* CIL Label */;
                  printf("\nSTMT_EXEC;;2462\n");
if (nextSym == 0)
                  {
                    printf("\nSTMT_EXEC;;2464\n");
es += N;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;2468\n");
if (nextSym == 1)
                    {
                      printf("\nSTMT_EXEC;;2470\n");
es += 2 * N;
                    }
                  }
                  printf("\nSTMT_EXEC;;2473\n");
N *= 2;
                  printf("\nSTMT_EXEC;;2474\n");
if (groupPos == 0)
                  {
                    printf("\nSTMT_EXEC;;2476\n");
groupNo++;
                    printf("\nSTMT_EXEC;;2477\n");
if (groupNo >= nSelectors)
                    {
                      printf("\nSTMT_EXEC;;2479\n");
retVal = -4;
                      printf("\nSTMT_EXEC;;2480\n");
goto save_state_and_return;
                    }
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
                    while_continue___47: /* CIL Label */;
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
                      printf("\nSTMT_EXEC;;2513\n");
((s->strm)->total_in_lo32)++;
                      printf("\nSTMT_EXEC;;2514\n");
if ((s->strm)->total_in_lo32 == 0U)
                      {
                        printf("\nSTMT_EXEC;;2516\n");
((s->strm)->total_in_hi32)++;
                      }
                    }
                  while_break___47: /* CIL Label */;
                  }
                  {
                    printf("\nSTMT_EXEC;;2522\n");
while (1)
                    {
                    while_continue___48: /* CIL Label */;
                      printf("\nSTMT_EXEC;;2525\n");
if (zn > 20)
                      {
                        printf("\nSTMT_EXEC;;2527\n");
retVal = -4;
                        printf("\nSTMT_EXEC;;2528\n");
goto save_state_and_return;
                      }
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
                        while_continue___49: /* CIL Label */;
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
                          printf("\nSTMT_EXEC;;2557\n");
((s->strm)->total_in_lo32)++;
                          printf("\nSTMT_EXEC;;2558\n");
if ((s->strm)->total_in_lo32 == 0U)
                          {
                            printf("\nSTMT_EXEC;;2560\n");
((s->strm)->total_in_hi32)++;
                          }
                        }
                      while_break___49: /* CIL Label */;
                      }
                      printf("\nSTMT_EXEC;;2565\n");
zvec = (zvec << 1) | zj;
                    }
                  while_break___48: /* CIL Label */;
                  }
                  printf("\nSTMT_EXEC;;2569\n");
if (zvec - *(gBase + zn) < 0)
                  {
                    printf("\nSTMT_EXEC;;2571\n");
retVal = -4;
                    printf("\nSTMT_EXEC;;2572\n");
goto save_state_and_return;
                  }
                  else
                  {
                    printf("\nSTMT_EXEC;;2576\n");
if (zvec - *(gBase + zn) >= 258)
                    {
                      printf("\nSTMT_EXEC;;2578\n");
retVal = -4;
                      printf("\nSTMT_EXEC;;2579\n");
goto save_state_and_return;
                    }
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
              printf("\nSTMT_EXEC;;2596\n");
if (s->smallDecompress)
              {
                {
                  printf("\nSTMT_EXEC;;2599\n");
while (1)
                  {
                  while_continue___50: /* CIL Label */;
                    printf("\nSTMT_EXEC;;2602\n");
if (!(es > 0))
                    {
                      printf("\nSTMT_EXEC;;2604\n");
goto while_break___50;
                    }
                    printf("\nSTMT_EXEC;;2606\n");
if (nblock >= nblockMAX)
                    {
                      printf("\nSTMT_EXEC;;2608\n");
retVal = -4;
                      printf("\nSTMT_EXEC;;2609\n");
goto save_state_and_return;
                    }
                    printf("\nSTMT_EXEC;;2611\n");
*(s->ll16 + nblock) = (UInt16)uc;
                    printf("\nSTMT_EXEC;;2612\n");
nblock++;
                    printf("\nSTMT_EXEC;;2613\n");
es--;
                  }
                while_break___50: /* CIL Label */;
                }
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;2621\n");
while (1)
                  {
                  while_continue___51: /* CIL Label */;
                    printf("\nSTMT_EXEC;;2624\n");
if (!(es > 0))
                    {
                      printf("\nSTMT_EXEC;;2626\n");
goto while_break___51;
                    }
                    printf("\nSTMT_EXEC;;2628\n");
if (nblock >= nblockMAX)
                    {
                      printf("\nSTMT_EXEC;;2630\n");
retVal = -4;
                      printf("\nSTMT_EXEC;;2631\n");
goto save_state_and_return;
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
              }
              printf("\nSTMT_EXEC;;2640\n");
goto while_continue___45;
            }
            else
            {
              printf("\nSTMT_EXEC;;2644\n");
if (nblock >= nblockMAX)
              {
                printf("\nSTMT_EXEC;;2646\n");
retVal = -4;
                printf("\nSTMT_EXEC;;2647\n");
goto save_state_and_return;
              }
              printf("\nSTMT_EXEC;;2649\n");
nn = (UInt32)(nextSym - 1);
              printf("\nSTMT_EXEC;;2650\n");
if (nn < 16U)
              {
                printf("\nSTMT_EXEC;;2652\n");
pp = s->mtfbase[0];
                printf("\nSTMT_EXEC;;2653\n");
uc = s->mtfa[(UInt32)pp + nn];
                {
                  printf("\nSTMT_EXEC;;2655\n");
while (1)
                  {
                  while_continue___52: /* CIL Label */;
                    printf("\nSTMT_EXEC;;2658\n");
if (!(nn > 3U))
                    {
                      printf("\nSTMT_EXEC;;2660\n");
goto while_break___52;
                    }
                    printf("\nSTMT_EXEC;;2662\n");
z = (Int32)((UInt32)pp + nn);
                    printf("\nSTMT_EXEC;;2663\n");
s->mtfa[z] = s->mtfa[z - 1];
                    printf("\nSTMT_EXEC;;2664\n");
s->mtfa[z - 1] = s->mtfa[z - 2];
                    printf("\nSTMT_EXEC;;2665\n");
s->mtfa[z - 2] = s->mtfa[z - 3];
                    printf("\nSTMT_EXEC;;2666\n");
s->mtfa[z - 3] = s->mtfa[z - 4];
                    printf("\nSTMT_EXEC;;2667\n");
nn -= 4U;
                  }
                while_break___52: /* CIL Label */;
                }
                {
                  printf("\nSTMT_EXEC;;2672\n");
while (1)
                  {
                  while_continue___53: /* CIL Label */;
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
              else
              {
                printf("\nSTMT_EXEC;;2688\n");
lno = (Int32)(nn / 16U);
                printf("\nSTMT_EXEC;;2689\n");
off = (Int32)(nn % 16U);
                printf("\nSTMT_EXEC;;2690\n");
pp = s->mtfbase[lno] + off;
                printf("\nSTMT_EXEC;;2691\n");
uc = s->mtfa[pp];
                {
                  printf("\nSTMT_EXEC;;2693\n");
while (1)
                  {
                  while_continue___54: /* CIL Label */;
                    printf("\nSTMT_EXEC;;2696\n");
if (!(pp > s->mtfbase[lno]))
                    {
                      printf("\nSTMT_EXEC;;2698\n");
goto while_break___54;
                    }
                    printf("\nSTMT_EXEC;;2700\n");
s->mtfa[pp] = s->mtfa[pp - 1];
                    printf("\nSTMT_EXEC;;2701\n");
pp--;
                  }
                while_break___54: /* CIL Label */;
                }
                printf("\nSTMT_EXEC;;2705\n");
(s->mtfbase[lno])++;
                {
                  printf("\nSTMT_EXEC;;2707\n");
while (1)
                  {
                  while_continue___55: /* CIL Label */;
                    printf("\nSTMT_EXEC;;2710\n");
if (!(lno > 0))
                    {
                      printf("\nSTMT_EXEC;;2712\n");
goto while_break___55;
                    }
                    printf("\nSTMT_EXEC;;2714\n");
(s->mtfbase[lno])--;
                    printf("\nSTMT_EXEC;;2715\n");
s->mtfa[s->mtfbase[lno]] = s->mtfa[(s->mtfbase[lno - 1] + 16) - 1];
                    printf("\nSTMT_EXEC;;2716\n");
lno--;
                  }
                while_break___55: /* CIL Label */;
                }
                printf("\nSTMT_EXEC;;2720\n");
(s->mtfbase[0])--;
                printf("\nSTMT_EXEC;;2721\n");
s->mtfa[s->mtfbase[0]] = uc;
                printf("\nSTMT_EXEC;;2722\n");
if (s->mtfbase[0] == 0)
                {
                  printf("\nSTMT_EXEC;;2724\n");
kk___0 = 4095;
                  printf("\nSTMT_EXEC;;2725\n");
ii___0 = 15;
                  {
                    printf("\nSTMT_EXEC;;2727\n");
while (1)
                    {
                    while_continue___56: /* CIL Label */;
                      printf("\nSTMT_EXEC;;2730\n");
if (!(ii___0 >= 0))
                      {
                        printf("\nSTMT_EXEC;;2732\n");
goto while_break___56;
                      }
                      printf("\nSTMT_EXEC;;2734\n");
jj___0 = 15;
                      {
                        printf("\nSTMT_EXEC;;2736\n");
while (1)
                        {
                        while_continue___57: /* CIL Label */;
                          printf("\nSTMT_EXEC;;2739\n");
if (!(jj___0 >= 0))
                          {
                            printf("\nSTMT_EXEC;;2741\n");
goto while_break___57;
                          }
                          printf("\nSTMT_EXEC;;2743\n");
s->mtfa[kk___0] = s->mtfa[s->mtfbase[ii___0] + jj___0];
                          printf("\nSTMT_EXEC;;2744\n");
kk___0--;
                          printf("\nSTMT_EXEC;;2745\n");
jj___0--;
                        }
                      while_break___57: /* CIL Label */;
                      }
                      printf("\nSTMT_EXEC;;2749\n");
s->mtfbase[ii___0] = kk___0 + 1;
                      printf("\nSTMT_EXEC;;2750\n");
ii___0--;
                    }
                  while_break___56: /* CIL Label */;
                  }
                }
              }
              printf("\nSTMT_EXEC;;2756\n");
(s->unzftab[s->seqToUnseq[uc]])++;
              printf("\nSTMT_EXEC;;2757\n");
if (s->smallDecompress)
              {
                printf("\nSTMT_EXEC;;2759\n");
*(s->ll16 + nblock) = (UInt16)s->seqToUnseq[uc];
              }
              else
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
                printf("\nSTMT_EXEC;;2769\n");
if (groupNo >= nSelectors)
                {
                  printf("\nSTMT_EXEC;;2771\n");
retVal = -4;
                  printf("\nSTMT_EXEC;;2772\n");
goto save_state_and_return;
                }
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
                while_continue___58: /* CIL Label */;
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
                  printf("\nSTMT_EXEC;;2805\n");
((s->strm)->total_in_lo32)++;
                  printf("\nSTMT_EXEC;;2806\n");
if ((s->strm)->total_in_lo32 == 0U)
                  {
                    printf("\nSTMT_EXEC;;2808\n");
((s->strm)->total_in_hi32)++;
                  }
                }
              while_break___58: /* CIL Label */;
              }
              {
                printf("\nSTMT_EXEC;;2814\n");
while (1)
                {
                while_continue___59: /* CIL Label */;
                  printf("\nSTMT_EXEC;;2817\n");
if (zn > 20)
                  {
                    printf("\nSTMT_EXEC;;2819\n");
retVal = -4;
                    printf("\nSTMT_EXEC;;2820\n");
goto save_state_and_return;
                  }
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
                    while_continue___60: /* CIL Label */;
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
                      printf("\nSTMT_EXEC;;2849\n");
((s->strm)->total_in_lo32)++;
                      printf("\nSTMT_EXEC;;2850\n");
if ((s->strm)->total_in_lo32 == 0U)
                      {
                        printf("\nSTMT_EXEC;;2852\n");
((s->strm)->total_in_hi32)++;
                      }
                    }
                  while_break___60: /* CIL Label */;
                  }
                  printf("\nSTMT_EXEC;;2857\n");
zvec = (zvec << 1) | zj;
                }
              while_break___59: /* CIL Label */;
              }
              printf("\nSTMT_EXEC;;2861\n");
if (zvec - *(gBase + zn) < 0)
              {
                printf("\nSTMT_EXEC;;2863\n");
retVal = -4;
                printf("\nSTMT_EXEC;;2864\n");
goto save_state_and_return;
              }
              else
              {
                printf("\nSTMT_EXEC;;2868\n");
if (zvec - *(gBase + zn) >= 258)
                {
                  printf("\nSTMT_EXEC;;2870\n");
retVal = -4;
                  printf("\nSTMT_EXEC;;2871\n");
goto save_state_and_return;
                }
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
      printf("\nSTMT_EXEC;;2881\n");
if (s->origPtr < 0)
      {
        printf("\nSTMT_EXEC;;2883\n");
retVal = -4;
        printf("\nSTMT_EXEC;;2884\n");
goto save_state_and_return;
      }
      else
      {
        printf("\nSTMT_EXEC;;2888\n");
if (s->origPtr >= nblock)
        {
          printf("\nSTMT_EXEC;;2890\n");
retVal = -4;
          printf("\nSTMT_EXEC;;2891\n");
goto save_state_and_return;
        }
      }
      printf("\nSTMT_EXEC;;2894\n");
s->cftab[0] = 0;
      printf("\nSTMT_EXEC;;2895\n");
i = 1;
      {
        printf("\nSTMT_EXEC;;2897\n");
while (1)
        {
        while_continue___61: /* CIL Label */;
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
        while_continue___62: /* CIL Label */;
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
      printf("\nSTMT_EXEC;;2923\n");
i = 0;
      {
        printf("\nSTMT_EXEC;;2925\n");
while (1)
        {
        while_continue___63: /* CIL Label */;
          printf("\nSTMT_EXEC;;2928\n");
if (!(i <= 256))
          {
            printf("\nSTMT_EXEC;;2930\n");
goto while_break___63;
          }
          printf("\nSTMT_EXEC;;2932\n");
if (s->cftab[i] < 0)
          {
            printf("\nSTMT_EXEC;;2934\n");
retVal = -4;
            printf("\nSTMT_EXEC;;2935\n");
goto save_state_and_return;
          }
          else
          {
            printf("\nSTMT_EXEC;;2939\n");
if (s->cftab[i] > nblock)
            {
              printf("\nSTMT_EXEC;;2941\n");
retVal = -4;
              printf("\nSTMT_EXEC;;2942\n");
goto save_state_and_return;
            }
          }
          printf("\nSTMT_EXEC;;2945\n");
i++;
        }
      while_break___63: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;2949\n");
s->state_out_len = 0;
      printf("\nSTMT_EXEC;;2950\n");
s->state_out_ch = (UChar)0;
      printf("\nSTMT_EXEC;;2951\n");
s->calculatedBlockCRC = (UInt32)4294967295L;
      printf("\nSTMT_EXEC;;2952\n");
s->state = 2;
      printf("\nSTMT_EXEC;;2953\n");
if (s->verbosity >= 2)
      {
        {
          printf("\nSTMT_EXEC;;2956\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "rt+rld");printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;2959\n");
if (s->smallDecompress)
      {
        printf("\nSTMT_EXEC;;2961\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;2963\n");
while (1)
          {
          while_continue___64: /* CIL Label */;
            printf("\nSTMT_EXEC;;2966\n");
if (!(i <= 256))
            {
              printf("\nSTMT_EXEC;;2968\n");
goto while_break___64;
            }
            printf("\nSTMT_EXEC;;2970\n");
s->cftabCopy[i] = s->cftab[i];
            printf("\nSTMT_EXEC;;2971\n");
i++;
          }
        while_break___64: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2975\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;2977\n");
while (1)
          {
          while_continue___65: /* CIL Label */;
            printf("\nSTMT_EXEC;;2980\n");
if (!(i < nblock))
            {
              printf("\nSTMT_EXEC;;2982\n");
goto while_break___65;
            }
            printf("\nSTMT_EXEC;;2984\n");
uc = (UChar) * (s->ll16 + i);
            printf("\nSTMT_EXEC;;2985\n");
*(s->ll16 + i) = (UInt16)(s->cftabCopy[uc] & 65535);
            printf("\nSTMT_EXEC;;2986\n");
if ((i & 1) == 0)
            {
              printf("\nSTMT_EXEC;;2988\n");
*(s->ll4 + (i >> 1)) = (UChar)(((int)*(s->ll4 + (i >> 1)) & 240) | (s->cftabCopy[uc] >> 16));
            }
            else
            {
              printf("\nSTMT_EXEC;;2992\n");
*(s->ll4 + (i >> 1)) = (UChar)(((int)*(s->ll4 + (i >> 1)) & 15) | ((s->cftabCopy[uc] >> 16) << 4));
            }
            printf("\nSTMT_EXEC;;2994\n");
(s->cftabCopy[uc])++;
            printf("\nSTMT_EXEC;;2995\n");
i++;
          }
        while_break___65: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;2999\n");
i = s->origPtr;
        printf("\nSTMT_EXEC;;3000\n");
j = (Int32)((UInt32) * (s->ll16 + i) | ((((UInt32) * (s->ll4 + (i >> 1)) >> ((i << 2) & 4)) & 15U) << 16));
        {
          printf("\nSTMT_EXEC;;3002\n");
while (1)
          {
          while_continue___66: /* CIL Label */;
            printf("\nSTMT_EXEC;;3005\n");
tmp___0 = (Int32)((UInt32) * (s->ll16 + j) | ((((UInt32) * (s->ll4 + (j >> 1)) >> ((j << 2) & 4)) & 15U) << 16));
            printf("\nSTMT_EXEC;;3006\n");
*(s->ll16 + j) = (UInt16)(i & 65535);
            printf("\nSTMT_EXEC;;3007\n");
if ((j & 1) == 0)
            {
              printf("\nSTMT_EXEC;;3009\n");
*(s->ll4 + (j >> 1)) = (UChar)(((int)*(s->ll4 + (j >> 1)) & 240) | (i >> 16));
            }
            else
            {
              printf("\nSTMT_EXEC;;3013\n");
*(s->ll4 + (j >> 1)) = (UChar)(((int)*(s->ll4 + (j >> 1)) & 15) | ((i >> 16) << 4));
            }
            printf("\nSTMT_EXEC;;3015\n");
i = j;
            printf("\nSTMT_EXEC;;3016\n");
j = tmp___0;
            printf("\nSTMT_EXEC;;3017\n");
if (!(i != s->origPtr))
            {
              printf("\nSTMT_EXEC;;3019\n");
goto while_break___66;
            }
          }
        while_break___66: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;3024\n");
s->tPos = (UInt32)s->origPtr;
        printf("\nSTMT_EXEC;;3025\n");
s->nblock_used = 0;
        printf("\nSTMT_EXEC;;3026\n");
if (s->blockRandomised)
        {
          printf("\nSTMT_EXEC;;3028\n");
s->rNToGo = 0;
          printf("\nSTMT_EXEC;;3029\n");
s->rTPos = 0;
          printf("\nSTMT_EXEC;;3030\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;3032\n");
printf("\nFUNC_RETURN;;\n");
return ((Int32)((Bool)1));
          }
          {
            printf("\nSTMT_EXEC;;3035\n");
s->k0 = BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;3036\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
            printf("\nSTMT_EXEC;;3037\n");
(s->nblock_used)++;
          }
          printf("\nSTMT_EXEC;;3039\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;3041\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;3042\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;3043\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;3045\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;3048\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;3049\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;3051\n");
tmp___1 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;3055\n");
tmp___1 = 0;
          }
          printf("\nSTMT_EXEC;;3057\n");
s->k0 ^= tmp___1;
        }
        else
        {
          printf("\nSTMT_EXEC;;3061\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;3063\n");
printf("\nFUNC_RETURN;;\n");
return ((Int32)((Bool)1));
          }
          {
            printf("\nSTMT_EXEC;;3066\n");
s->k0 = BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;3067\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
            printf("\nSTMT_EXEC;;3068\n");
(s->nblock_used)++;
          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;3074\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;3076\n");
while (1)
          {
          while_continue___67: /* CIL Label */;
            printf("\nSTMT_EXEC;;3079\n");
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
        printf("\nSTMT_EXEC;;3092\n");
if (s->blockRandomised)
        {
          printf("\nSTMT_EXEC;;3094\n");
s->rNToGo = 0;
          printf("\nSTMT_EXEC;;3095\n");
s->rTPos = 0;
          printf("\nSTMT_EXEC;;3096\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;3098\n");
printf("\nFUNC_RETURN;;\n");
return ((Int32)((Bool)1));
          }
          printf("\nSTMT_EXEC;;3100\n");
s->tPos = *(s->tt + s->tPos);
          printf("\nSTMT_EXEC;;3101\n");
s->k0 = (Int32)((UChar)(s->tPos & 255U));
          printf("\nSTMT_EXEC;;3102\n");
s->tPos >>= 8;
          printf("\nSTMT_EXEC;;3103\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;3104\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;3106\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;3107\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;3108\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;3110\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;3113\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;3114\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;3116\n");
tmp___2 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;3120\n");
tmp___2 = 0;
          }
          printf("\nSTMT_EXEC;;3122\n");
s->k0 ^= tmp___2;
        }
        else
        {
          printf("\nSTMT_EXEC;;3126\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;3128\n");
printf("\nFUNC_RETURN;;\n");
return ((Int32)((Bool)1));
          }
          printf("\nSTMT_EXEC;;3130\n");
s->tPos = *(s->tt + s->tPos);
          printf("\nSTMT_EXEC;;3131\n");
s->k0 = (Int32)((UChar)(s->tPos & 255U));
          printf("\nSTMT_EXEC;;3132\n");
s->tPos >>= 8;
          printf("\nSTMT_EXEC;;3133\n");
(s->nblock_used)++;
        }
      }
      printf("\nSTMT_EXEC;;3136\n");
retVal = 0;
      printf("\nSTMT_EXEC;;3137\n");
goto save_state_and_return;
    endhdr_2:
    case_42: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3140\n");
s->state = 42;
}

      {
        printf("\nSTMT_EXEC;;3142\n");
while (1)
        {
        while_continue___68: /* CIL Label */;
          printf("\nSTMT_EXEC;;3145\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3147\n");
v___32 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3148\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3149\n");
uc = (UChar)v___32;
            printf("\nSTMT_EXEC;;3150\n");
goto while_break___68;
          }
          printf("\nSTMT_EXEC;;3152\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3154\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3155\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3157\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3158\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3159\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3160\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3161\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3162\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3164\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___68: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3169\n");
if ((int)uc != 114)
      {
        printf("\nSTMT_EXEC;;3171\n");
retVal = -4;
        printf("\nSTMT_EXEC;;3172\n");
goto save_state_and_return;
      }
    case_43: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3175\n");
s->state = 43;
}

      {
        printf("\nSTMT_EXEC;;3177\n");
while (1)
        {
        while_continue___69: /* CIL Label */;
          printf("\nSTMT_EXEC;;3180\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3182\n");
v___33 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3183\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3184\n");
uc = (UChar)v___33;
            printf("\nSTMT_EXEC;;3185\n");
goto while_break___69;
          }
          printf("\nSTMT_EXEC;;3187\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3189\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3190\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3192\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3193\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3194\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3195\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3196\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3197\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3199\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___69: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3204\n");
if ((int)uc != 69)
      {
        printf("\nSTMT_EXEC;;3206\n");
retVal = -4;
        printf("\nSTMT_EXEC;;3207\n");
goto save_state_and_return;
      }
    case_44: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3210\n");
s->state = 44;
}

      {
        printf("\nSTMT_EXEC;;3212\n");
while (1)
        {
        while_continue___70: /* CIL Label */;
          printf("\nSTMT_EXEC;;3215\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3217\n");
v___34 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3218\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3219\n");
uc = (UChar)v___34;
            printf("\nSTMT_EXEC;;3220\n");
goto while_break___70;
          }
          printf("\nSTMT_EXEC;;3222\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3224\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3225\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3227\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3228\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3229\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3230\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3231\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3232\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3234\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___70: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3239\n");
if ((int)uc != 56)
      {
        printf("\nSTMT_EXEC;;3241\n");
retVal = -4;
        printf("\nSTMT_EXEC;;3242\n");
goto save_state_and_return;
      }
    case_45: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3245\n");
s->state = 45;
}

      {
        printf("\nSTMT_EXEC;;3247\n");
while (1)
        {
        while_continue___71: /* CIL Label */;
          printf("\nSTMT_EXEC;;3250\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3252\n");
v___35 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3253\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3254\n");
uc = (UChar)v___35;
            printf("\nSTMT_EXEC;;3255\n");
goto while_break___71;
          }
          printf("\nSTMT_EXEC;;3257\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3259\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3260\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3262\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3263\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3264\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3265\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3266\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3267\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3269\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___71: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3274\n");
if ((int)uc != 80)
      {
        printf("\nSTMT_EXEC;;3276\n");
retVal = -4;
        printf("\nSTMT_EXEC;;3277\n");
goto save_state_and_return;
      }
    case_46: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3280\n");
s->state = 46;
}

      {
        printf("\nSTMT_EXEC;;3282\n");
while (1)
        {
        while_continue___72: /* CIL Label */;
          printf("\nSTMT_EXEC;;3285\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3287\n");
v___36 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3288\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3289\n");
uc = (UChar)v___36;
            printf("\nSTMT_EXEC;;3290\n");
goto while_break___72;
          }
          printf("\nSTMT_EXEC;;3292\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3294\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3295\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3297\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3298\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3299\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3300\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3301\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3302\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3304\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___72: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3309\n");
if ((int)uc != 144)
      {
        printf("\nSTMT_EXEC;;3311\n");
retVal = -4;
        printf("\nSTMT_EXEC;;3312\n");
goto save_state_and_return;
      }
      printf("\nSTMT_EXEC;;3314\n");
s->storedCombinedCRC = (UInt32)0;
    case_47: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3316\n");
s->state = 47;
}

      {
        printf("\nSTMT_EXEC;;3318\n");
while (1)
        {
        while_continue___73: /* CIL Label */;
          printf("\nSTMT_EXEC;;3321\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3323\n");
v___37 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3324\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3325\n");
uc = (UChar)v___37;
            printf("\nSTMT_EXEC;;3326\n");
goto while_break___73;
          }
          printf("\nSTMT_EXEC;;3328\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3330\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3331\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3333\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3334\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3335\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3336\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3337\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3338\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3340\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___73: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3345\n");
s->storedCombinedCRC = (s->storedCombinedCRC << 8) | (UInt32)uc;
    case_48: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3347\n");
s->state = 48;
}

      {
        printf("\nSTMT_EXEC;;3349\n");
while (1)
        {
        while_continue___74: /* CIL Label */;
          printf("\nSTMT_EXEC;;3352\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3354\n");
v___38 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3355\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3356\n");
uc = (UChar)v___38;
            printf("\nSTMT_EXEC;;3357\n");
goto while_break___74;
          }
          printf("\nSTMT_EXEC;;3359\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3361\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3362\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3364\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3365\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3366\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3367\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3368\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3369\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3371\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___74: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3376\n");
s->storedCombinedCRC = (s->storedCombinedCRC << 8) | (UInt32)uc;
    case_49: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3378\n");
s->state = 49;
}

      {
        printf("\nSTMT_EXEC;;3380\n");
while (1)
        {
        while_continue___75: /* CIL Label */;
          printf("\nSTMT_EXEC;;3383\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3385\n");
v___39 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3386\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3387\n");
uc = (UChar)v___39;
            printf("\nSTMT_EXEC;;3388\n");
goto while_break___75;
          }
          printf("\nSTMT_EXEC;;3390\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3392\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3393\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3395\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3396\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3397\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3398\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3399\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3400\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3402\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___75: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3407\n");
s->storedCombinedCRC = (s->storedCombinedCRC << 8) | (UInt32)uc;
    case_50: /* CIL Label */
      {
printf("\nSTMT_EXEC;;3409\n");
s->state = 50;
}

      {
        printf("\nSTMT_EXEC;;3411\n");
while (1)
        {
        while_continue___76: /* CIL Label */;
          printf("\nSTMT_EXEC;;3414\n");
if (s->bsLive >= 8)
          {
            printf("\nSTMT_EXEC;;3416\n");
v___40 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
            printf("\nSTMT_EXEC;;3417\n");
s->bsLive -= 8;
            printf("\nSTMT_EXEC;;3418\n");
uc = (UChar)v___40;
            printf("\nSTMT_EXEC;;3419\n");
goto while_break___76;
          }
          printf("\nSTMT_EXEC;;3421\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;3423\n");
retVal = 0;
            printf("\nSTMT_EXEC;;3424\n");
goto save_state_and_return;
          }
          printf("\nSTMT_EXEC;;3426\n");
s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;3427\n");
s->bsLive += 8;
          printf("\nSTMT_EXEC;;3428\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;3429\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;3430\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;3431\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;3433\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break___76: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3438\n");
s->storedCombinedCRC = (s->storedCombinedCRC << 8) | (UInt32)uc;
      printf("\nSTMT_EXEC;;3439\n");
s->state = 1;
      printf("\nSTMT_EXEC;;3440\n");
retVal = 4;
      printf("\nSTMT_EXEC;;3441\n");
goto save_state_and_return;
    switch_default: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;3444\n");
BZ2_bz__AssertH__fail(4001);
    }
    switch_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;3449\n");
BZ2_bz__AssertH__fail(4002);
    }
  save_state_and_return:
    {
printf("\nSTMT_EXEC;;3452\n");
s->save_i = i;
}

    printf("\nSTMT_EXEC;;3453\n");
s->save_j = j;
    printf("\nSTMT_EXEC;;3454\n");
s->save_t = t;
    printf("\nSTMT_EXEC;;3455\n");
s->save_alphaSize = alphaSize;
    printf("\nSTMT_EXEC;;3456\n");
s->save_nGroups = nGroups;
    printf("\nSTMT_EXEC;;3457\n");
s->save_nSelectors = nSelectors;
    printf("\nSTMT_EXEC;;3458\n");
s->save_EOB = EOB;
    printf("\nSTMT_EXEC;;3459\n");
s->save_groupNo = groupNo;
    printf("\nSTMT_EXEC;;3460\n");
s->save_groupPos = groupPos;
    printf("\nSTMT_EXEC;;3461\n");
s->save_nextSym = nextSym;
    printf("\nSTMT_EXEC;;3462\n");
s->save_nblockMAX = nblockMAX;
    printf("\nSTMT_EXEC;;3463\n");
s->save_nblock = nblock;
    printf("\nSTMT_EXEC;;3464\n");
s->save_es = es;
    printf("\nSTMT_EXEC;;3465\n");
s->save_N = N;
    printf("\nSTMT_EXEC;;3466\n");
s->save_curr = curr;
    printf("\nSTMT_EXEC;;3467\n");
s->save_zt = zt;
    printf("\nSTMT_EXEC;;3468\n");
s->save_zn = zn;
    printf("\nSTMT_EXEC;;3469\n");
s->save_zvec = zvec;
    printf("\nSTMT_EXEC;;3470\n");
s->save_zj = zj;
    printf("\nSTMT_EXEC;;3471\n");
s->save_gSel = gSel;
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
UInt32 BZ2_crc32Table[256];
UInt32 BZ2_crc32Table[256] = {(UInt32)0L, (UInt32)79764919L, (UInt32)159529838L, (UInt32)222504665L, (UInt32)319059676L, (UInt32)398814059L, (UInt32)445009330L, (UInt32)507990021L, (UInt32)638119352L, (UInt32)583659535L, (UInt32)797628118L, (UInt32)726387553L, (UInt32)890018660L, (UInt32)835552979L, (UInt32)1015980042L, (UInt32)944750013L, (UInt32)1276238704L, (UInt32)1221641927L, (UInt32)1167319070L, (UInt32)1095957929L, (UInt32)1595256236L, (UInt32)1540665371L, (UInt32)1452775106L, (UInt32)1381403509L, (UInt32)1780037320L, (UInt32)1859660671L, (UInt32)1671105958L, (UInt32)1733955601L, (UInt32)2031960084L, (UInt32)2111593891L, (UInt32)1889500026L, (UInt32)1952343757L, (UInt32)2552477408L, (UInt32)2632100695L, (UInt32)2443283854L, (UInt32)2506133561L, (UInt32)2334638140L, (UInt32)2414271883L, (UInt32)2191915858L, (UInt32)2254759653L, (UInt32)3190512472L, (UInt32)3135915759L, (UInt32)3081330742L, (UInt32)3009969537L, (UInt32)2905550212L, (UInt32)2850959411L, (UInt32)2762807018L, (UInt32)2691435357L, (UInt32)3560074640L, (UInt32)3505614887L, (UInt32)3719321342L, (UInt32)3648080713L, (UInt32)3342211916L, (UInt32)3287746299L, (UInt32)3467911202L, (UInt32)3396681109L, (UInt32)4063920168L, (UInt32)4143685023L, (UInt32)4223187782L, (UInt32)4286162673L, (UInt32)3779000052L, (UInt32)3858754371L, (UInt32)3904687514L, (UInt32)3967668269L, (UInt32)881225847L, (UInt32)809987520L, (UInt32)1023691545L, (UInt32)969234094L, (UInt32)662832811L, (UInt32)591600412L, (UInt32)771767749L, (UInt32)717299826L, (UInt32)311336399L, (UInt32)374308984L, (UInt32)453813921L, (UInt32)533576470L, (UInt32)25881363L, (UInt32)88864420L, (UInt32)134795389L, (UInt32)214552010L, (UInt32)2023205639L, (UInt32)2086057648L, (UInt32)1897238633L, (UInt32)1976864222L, (UInt32)1804852699L, (UInt32)1867694188L, (UInt32)1645340341L, (UInt32)1724971778L, (UInt32)1587496639L, (UInt32)1516133128L, (UInt32)1461550545L, (UInt32)1406951526L, (UInt32)1302016099L, (UInt32)1230646740L, (UInt32)1142491917L, (UInt32)1087903418L, (UInt32)2896545431L, (UInt32)2825181984L, (UInt32)2770861561L, (UInt32)2716262478L, (UInt32)3215044683L, (UInt32)3143675388L, (UInt32)3055782693L, (UInt32)3001194130L, (UInt32)2326604591L, (UInt32)2389456536L, (UInt32)2200899649L, (UInt32)2280525302L, (UInt32)2578013683L, (UInt32)2640855108L, (UInt32)2418763421L, (UInt32)2498394922L, (UInt32)3769900519L, (UInt32)3832873040L, (UInt32)3912640137L, (UInt32)3992402750L, (UInt32)4088425275L, (UInt32)4151408268L, (UInt32)4197601365L, (UInt32)4277358050L, (UInt32)3334271071L, (UInt32)3263032808L, (UInt32)3476998961L, (UInt32)3422541446L, (UInt32)3585640067L, (UInt32)3514407732L, (UInt32)3694837229L, (UInt32)3640369242L, (UInt32)1762451694L, (UInt32)1842216281L, (UInt32)1619975040L, (UInt32)1682949687L, (UInt32)2047383090L, (UInt32)2127137669L, (UInt32)1938468188L, (UInt32)2001449195L, (UInt32)1325665622L, (UInt32)1271206113L, (UInt32)1183200824L, (UInt32)1111960463L, (UInt32)1543535498L, (UInt32)1489069629L, (UInt32)1434599652L, (UInt32)1363369299L, (UInt32)622672798L, (UInt32)568075817L, (UInt32)748617968L, (UInt32)677256519L, (UInt32)907627842L, (UInt32)853037301L, (UInt32)1067152940L, (UInt32)995781531L, (UInt32)51762726L, (UInt32)131386257L, (UInt32)177728840L, (UInt32)240578815L, (UInt32)269590778L, (UInt32)349224269L, (UInt32)429104020L, (UInt32)491947555L, (UInt32)4046411278L, (UInt32)4126034873L, (UInt32)4172115296L, (UInt32)4234965207L, (UInt32)3794477266L, (UInt32)3874110821L, (UInt32)3953728444L, (UInt32)4016571915L, (UInt32)3609705398L, (UInt32)3555108353L, (UInt32)3735388376L, (UInt32)3664026991L, (UInt32)3290680682L, (UInt32)3236090077L, (UInt32)3449943556L, (UInt32)3378572211L, (UInt32)3174993278L, (UInt32)3120533705L, (UInt32)3032266256L, (UInt32)2961025959L, (UInt32)2923101090L, (UInt32)2868635157L, (UInt32)2813903052L, (UInt32)2742672763L, (UInt32)2604032198L, (UInt32)2683796849L, (UInt32)2461293480L, (UInt32)2524268063L, (UInt32)2284983834L, (UInt32)2364738477L, (UInt32)2175806836L, (UInt32)2238787779L, (UInt32)1569362073L, (UInt32)1498123566L, (UInt32)1409854455L, (UInt32)1355396672L, (UInt32)1317987909L, (UInt32)1246755826L, (UInt32)1192025387L, (UInt32)1137557660L, (UInt32)2072149281L, (UInt32)2135122070L, (UInt32)1912620623L, (UInt32)1992383480L, (UInt32)1753615357L, (UInt32)1816598090L, (UInt32)1627664531L, (UInt32)1707420964L, (UInt32)295390185L, (UInt32)358241886L, (UInt32)404320391L, (UInt32)483945776L, (UInt32)43990325L, (UInt32)106832002L, (UInt32)186451547L, (UInt32)266083308L, (UInt32)932423249L, (UInt32)861060070L, (UInt32)1041341759L, (UInt32)986742920L, (UInt32)613929101L, (UInt32)542559546L, (UInt32)756411363L, (UInt32)701822548L, (UInt32)3316196985L, (UInt32)3244833742L, (UInt32)3425377559L, (UInt32)3370778784L, (UInt32)3601682597L, (UInt32)3530312978L, (UInt32)3744426955L, (UInt32)3689838204L, (UInt32)3819031489L, (UInt32)3881883254L, (UInt32)3928223919L, (UInt32)4007849240L, (UInt32)4037393693L, (UInt32)4100235434L, (UInt32)4180117107L, (UInt32)4259748804L, (UInt32)2310601993L, (UInt32)2373574846L, (UInt32)2151335527L, (UInt32)2231098320L, (UInt32)2596047829L, (UInt32)2659030626L, (UInt32)2470359227L, (UInt32)2550115596L, (UInt32)2947551409L, (UInt32)2876312838L, (UInt32)2788305887L, (UInt32)2733848168L, (UInt32)3165939309L, (UInt32)3094707162L, (UInt32)3040238851L, (UInt32)2985771188L};
void BZ2_blockSort(EState *s);
void BZ2_compressBlock(EState *s, Bool is_last_block);
void BZ2_bsInitWrite(EState *s);
void BZ2_bsInitWrite(EState *s)
{
  printf("\nFUNC_CALL;BZ2_bsInitWrite(EState *);\n");
{
    printf("\nSTMT_EXEC;;3487\n");
s->bsLive = 0;
    printf("\nSTMT_EXEC;;3488\n");
s->bsBuff = (UInt32)0;
    printf("\nSTMT_EXEC;;3489\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void bsFinishWrite(EState *s)
{
  printf("\nFUNC_CALL;bsFinishWrite(EState *);\n");
{
    {
      printf("\nSTMT_EXEC;;3496\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
    }
    printf("\nSTMT_EXEC;;3510\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static void bsW(EState *s, Int32 n, UInt32 v)
{
  printf("\nFUNC_CALL;bsW(EState *,Int32,UInt32);\n");
{
    {
      printf("\nSTMT_EXEC;;3517\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;3533\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void bsPutUInt32(EState *s, UInt32 u)
{
  printf("\nFUNC_CALL;bsPutUInt32(EState *,UInt32);\n");
{
    {
      printf("\nSTMT_EXEC;;3540\n");
bsW(s, 8, (UInt32)((long)(u >> 24) & 255L));
      printf("\nSTMT_EXEC;;3541\n");
bsW(s, 8, (UInt32)((long)(u >> 16) & 255L));
      printf("\nSTMT_EXEC;;3542\n");
bsW(s, 8, (UInt32)((long)(u >> 8) & 255L));
      printf("\nSTMT_EXEC;;3543\n");
bsW(s, 8, (UInt32)((long)u & 255L));
    }
    printf("\nSTMT_EXEC;;3545\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void bsPutUChar(EState *s, UChar c)
{
  printf("\nFUNC_CALL;bsPutUChar(EState *,UChar);\n");
{
    {
      printf("\nSTMT_EXEC;;3552\n");
bsW(s, 8, (UInt32)c);
    }
    printf("\nSTMT_EXEC;;3554\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
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
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;3567\n");
if (!(i < 256))
        {
          printf("\nSTMT_EXEC;;3569\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;3571\n");
if (s->inUse[i])
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
    printf("\nSTMT_EXEC;;3580\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;3599\n");
void *__cil_tmp16;
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
      while_continue: /* CIL Label */;
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
      while_continue___0: /* CIL Label */;
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
      while_continue___1: /* CIL Label */;
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
              while_continue___2: /* CIL Label */;
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
            while_continue___3: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;3717\n");
if (zPend > 0)
    {
      printf("\nSTMT_EXEC;;3719\n");
zPend--;
      {
        printf("\nSTMT_EXEC;;3721\n");
while (1)
        {
        while_continue___4: /* CIL Label */;
          printf("\nSTMT_EXEC;;3724\n");
if (zPend & 1)
          {
            printf("\nSTMT_EXEC;;3726\n");
*(mtfv + wr) = (UInt16)1;
            printf("\nSTMT_EXEC;;3727\n");
wr++;
            printf("\nSTMT_EXEC;;3728\n");
(s->mtfFreq[1])++;
          }
          else
          {
            printf("\nSTMT_EXEC;;3732\n");
*(mtfv + wr) = (UInt16)0;
            printf("\nSTMT_EXEC;;3733\n");
wr++;
            printf("\nSTMT_EXEC;;3734\n");
(s->mtfFreq[0])++;
          }
          printf("\nSTMT_EXEC;;3736\n");
if (zPend < 2)
          {
            printf("\nSTMT_EXEC;;3738\n");
goto while_break___4;
          }
          printf("\nSTMT_EXEC;;3740\n");
zPend = (zPend - 2) / 2;
        }
      while_break___4: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;3744\n");
zPend = 0;
    }
    printf("\nSTMT_EXEC;;3746\n");
*(mtfv + wr) = (UInt16)EOB;
    printf("\nSTMT_EXEC;;3747\n");
wr++;
    printf("\nSTMT_EXEC;;3748\n");
(s->mtfFreq[EOB])++;
    printf("\nSTMT_EXEC;;3749\n");
s->nMTF = wr;
    printf("\nSTMT_EXEC;;3750\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;3761\n");
Int32 totc;
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
  printf("\nSTMT_EXEC;;3771\n");
Int32 nBytes;
  printf("\nSTMT_EXEC;;3772\n");
UInt16 cost[6];
  printf("\nSTMT_EXEC;;3773\n");
Int32 fave[6];
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
  printf("\nSTMT_EXEC;;3779\n");
register UInt32 cost01;
  printf("\nSTMT_EXEC;;3780\n");
register UInt32 cost23;
  printf("\nSTMT_EXEC;;3781\n");
register UInt32 cost45;
  printf("\nSTMT_EXEC;;3782\n");
register UInt16 icv;
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
  printf("\nSTMT_EXEC;;3790\n");
UInt16 mtfv_i;
  printf("\nSTMT_EXEC;;3791\n");
UChar *s_len_sel_selCtr;
  printf("\nSTMT_EXEC;;3792\n");
Int32 *s_code_sel_selCtr;
  printf("\nSTMT_EXEC;;3793\n");
void *__cil_tmp40;
  printf("\nSTMT_EXEC;;3794\n");
void *__cil_tmp41;
  printf("\nSTMT_EXEC;;3795\n");
void *__cil_tmp42;
  printf("\nSTMT_EXEC;;3796\n");
void *__cil_tmp43;
  {
    printf("\nSTMT_EXEC;;3798\n");
mtfv = s->mtfv;
    printf("\nSTMT_EXEC;;3799\n");
if (s->verbosity >= 3)
    {
      {
        printf("\nSTMT_EXEC;;3802\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "      %d in block, %d after MTF "
                                                 "& 1-2 coding, %d+2 syms in use\n",
                s->nblock, s->nMTF, s->nInUse);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;3808\n");
alphaSize = s->nInUse + 2;
    printf("\nSTMT_EXEC;;3809\n");
t = 0;
    {
      printf("\nSTMT_EXEC;;3811\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;3814\n");
if (!(t < 6))
        {
          printf("\nSTMT_EXEC;;3816\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;3818\n");
v = 0;
        {
          printf("\nSTMT_EXEC;;3820\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;3823\n");
if (!(v < alphaSize))
            {
              printf("\nSTMT_EXEC;;3825\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;3827\n");
s->len[t][v] = (UChar)15;
            printf("\nSTMT_EXEC;;3828\n");
v++;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;3832\n");
t++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;3836\n");
if (!(s->nMTF > 0))
    {
      {
        printf("\nSTMT_EXEC;;3839\n");
BZ2_bz__AssertH__fail(3001);
      }
    }
    printf("\nSTMT_EXEC;;3842\n");
if (s->nMTF < 200)
    {
      printf("\nSTMT_EXEC;;3844\n");
nGroups = 2;
    }
    else
    {
      printf("\nSTMT_EXEC;;3848\n");
if (s->nMTF < 600)
      {
        printf("\nSTMT_EXEC;;3850\n");
nGroups = 3;
      }
      else
      {
        printf("\nSTMT_EXEC;;3854\n");
if (s->nMTF < 1200)
        {
          printf("\nSTMT_EXEC;;3856\n");
nGroups = 4;
        }
        else
        {
          printf("\nSTMT_EXEC;;3860\n");
if (s->nMTF < 2400)
          {
            printf("\nSTMT_EXEC;;3862\n");
nGroups = 5;
          }
          else
          {
            printf("\nSTMT_EXEC;;3866\n");
nGroups = 6;
          }
        }
      }
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
      while_continue___1: /* CIL Label */;
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
          while_continue___2: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;3905\n");
if (ge > gs)
        {
          printf("\nSTMT_EXEC;;3907\n");
if (nPart != nGroups)
          {
            printf("\nSTMT_EXEC;;3909\n");
if (nPart != 1)
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
          }
        }
        printf("\nSTMT_EXEC;;3919\n");
if (s->verbosity >= 3)
        {
          {
            printf("\nSTMT_EXEC;;3922\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "      initial group %d, [%d .. "
                                                     "%d], has %d syms (%4.1f%%)\n",
                    nPart, gs, ge, aFreq, (100.0 * (double)((float)aFreq)) / (double)((float)s->nMTF));printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;3928\n");
v = 0;
        {
          printf("\nSTMT_EXEC;;3930\n");
while (1)
          {
          while_continue___3: /* CIL Label */;
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
      while_continue___4: /* CIL Label */;
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
          while_continue___5: /* CIL Label */;
            printf("\nSTMT_EXEC;;3976\n");
if (!(t < nGroups))
            {
              printf("\nSTMT_EXEC;;3978\n");
goto while_break___5;
            }
            printf("\nSTMT_EXEC;;3980\n");
fave[t] = 0;
            printf("\nSTMT_EXEC;;3981\n");
t++;
          }
        while_break___5: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;3985\n");
t = 0;
        {
          printf("\nSTMT_EXEC;;3987\n");
while (1)
          {
          while_continue___6: /* CIL Label */;
            printf("\nSTMT_EXEC;;3990\n");
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
              while_continue___7: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;4012\n");
if (nGroups == 6)
        {
          printf("\nSTMT_EXEC;;4014\n");
v = 0;
          {
            printf("\nSTMT_EXEC;;4016\n");
while (1)
            {
            while_continue___8: /* CIL Label */;
              printf("\nSTMT_EXEC;;4019\n");
if (!(v < alphaSize))
              {
                printf("\nSTMT_EXEC;;4021\n");
goto while_break___8;
              }
              printf("\nSTMT_EXEC;;4023\n");
s->len_pack[v][0] = (UInt32)(((int)s->len[1][v] << 16) | (int)s->len[0][v]);
              printf("\nSTMT_EXEC;;4024\n");
s->len_pack[v][1] = (UInt32)(((int)s->len[3][v] << 16) | (int)s->len[2][v]);
              printf("\nSTMT_EXEC;;4025\n");
s->len_pack[v][2] = (UInt32)(((int)s->len[5][v] << 16) | (int)s->len[4][v]);
              printf("\nSTMT_EXEC;;4026\n");
v++;
            }
          while_break___8: /* CIL Label */;
          }
        }
        printf("\nSTMT_EXEC;;4031\n");
nSelectors = 0;
        printf("\nSTMT_EXEC;;4032\n");
totc = 0;
        printf("\nSTMT_EXEC;;4033\n");
gs = 0;
        {
          printf("\nSTMT_EXEC;;4035\n");
while (1)
          {
          while_continue___9: /* CIL Label */;
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
              while_continue___10: /* CIL Label */;
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
            printf("\nSTMT_EXEC;;4061\n");
if (nGroups == 6)
            {
              printf("\nSTMT_EXEC;;4063\n");
if (50 == (ge - gs) + 1)
              {
                printf("\nSTMT_EXEC;;4065\n");
cost45 = (UInt32)0;
                printf("\nSTMT_EXEC;;4066\n");
cost23 = cost45;
                printf("\nSTMT_EXEC;;4067\n");
cost01 = cost23;
                printf("\nSTMT_EXEC;;4068\n");
icv = *(mtfv + gs);
                printf("\nSTMT_EXEC;;4069\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4070\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4071\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4072\n");
icv = *(mtfv + (gs + 1));
                printf("\nSTMT_EXEC;;4073\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4074\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4075\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4076\n");
icv = *(mtfv + (gs + 2));
                printf("\nSTMT_EXEC;;4077\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4078\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4079\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4080\n");
icv = *(mtfv + (gs + 3));
                printf("\nSTMT_EXEC;;4081\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4082\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4083\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4084\n");
icv = *(mtfv + (gs + 4));
                printf("\nSTMT_EXEC;;4085\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4086\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4087\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4088\n");
icv = *(mtfv + (gs + 5));
                printf("\nSTMT_EXEC;;4089\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4090\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4091\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4092\n");
icv = *(mtfv + (gs + 6));
                printf("\nSTMT_EXEC;;4093\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4094\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4095\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4096\n");
icv = *(mtfv + (gs + 7));
                printf("\nSTMT_EXEC;;4097\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4098\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4099\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4100\n");
icv = *(mtfv + (gs + 8));
                printf("\nSTMT_EXEC;;4101\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4102\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4103\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4104\n");
icv = *(mtfv + (gs + 9));
                printf("\nSTMT_EXEC;;4105\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4106\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4107\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4108\n");
icv = *(mtfv + (gs + 10));
                printf("\nSTMT_EXEC;;4109\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4110\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4111\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4112\n");
icv = *(mtfv + (gs + 11));
                printf("\nSTMT_EXEC;;4113\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4114\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4115\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4116\n");
icv = *(mtfv + (gs + 12));
                printf("\nSTMT_EXEC;;4117\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4118\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4119\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4120\n");
icv = *(mtfv + (gs + 13));
                printf("\nSTMT_EXEC;;4121\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4122\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4123\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4124\n");
icv = *(mtfv + (gs + 14));
                printf("\nSTMT_EXEC;;4125\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4126\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4127\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4128\n");
icv = *(mtfv + (gs + 15));
                printf("\nSTMT_EXEC;;4129\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4130\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4131\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4132\n");
icv = *(mtfv + (gs + 16));
                printf("\nSTMT_EXEC;;4133\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4134\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4135\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4136\n");
icv = *(mtfv + (gs + 17));
                printf("\nSTMT_EXEC;;4137\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4138\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4139\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4140\n");
icv = *(mtfv + (gs + 18));
                printf("\nSTMT_EXEC;;4141\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4142\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4143\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4144\n");
icv = *(mtfv + (gs + 19));
                printf("\nSTMT_EXEC;;4145\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4146\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4147\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4148\n");
icv = *(mtfv + (gs + 20));
                printf("\nSTMT_EXEC;;4149\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4150\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4151\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4152\n");
icv = *(mtfv + (gs + 21));
                printf("\nSTMT_EXEC;;4153\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4154\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4155\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4156\n");
icv = *(mtfv + (gs + 22));
                printf("\nSTMT_EXEC;;4157\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4158\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4159\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4160\n");
icv = *(mtfv + (gs + 23));
                printf("\nSTMT_EXEC;;4161\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4162\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4163\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4164\n");
icv = *(mtfv + (gs + 24));
                printf("\nSTMT_EXEC;;4165\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4166\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4167\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4168\n");
icv = *(mtfv + (gs + 25));
                printf("\nSTMT_EXEC;;4169\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4170\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4171\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4172\n");
icv = *(mtfv + (gs + 26));
                printf("\nSTMT_EXEC;;4173\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4174\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4175\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4176\n");
icv = *(mtfv + (gs + 27));
                printf("\nSTMT_EXEC;;4177\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4178\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4179\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4180\n");
icv = *(mtfv + (gs + 28));
                printf("\nSTMT_EXEC;;4181\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4182\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4183\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4184\n");
icv = *(mtfv + (gs + 29));
                printf("\nSTMT_EXEC;;4185\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4186\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4187\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4188\n");
icv = *(mtfv + (gs + 30));
                printf("\nSTMT_EXEC;;4189\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4190\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4191\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4192\n");
icv = *(mtfv + (gs + 31));
                printf("\nSTMT_EXEC;;4193\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4194\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4195\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4196\n");
icv = *(mtfv + (gs + 32));
                printf("\nSTMT_EXEC;;4197\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4198\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4199\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4200\n");
icv = *(mtfv + (gs + 33));
                printf("\nSTMT_EXEC;;4201\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4202\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4203\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4204\n");
icv = *(mtfv + (gs + 34));
                printf("\nSTMT_EXEC;;4205\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4206\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4207\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4208\n");
icv = *(mtfv + (gs + 35));
                printf("\nSTMT_EXEC;;4209\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4210\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4211\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4212\n");
icv = *(mtfv + (gs + 36));
                printf("\nSTMT_EXEC;;4213\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4214\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4215\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4216\n");
icv = *(mtfv + (gs + 37));
                printf("\nSTMT_EXEC;;4217\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4218\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4219\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4220\n");
icv = *(mtfv + (gs + 38));
                printf("\nSTMT_EXEC;;4221\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4222\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4223\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4224\n");
icv = *(mtfv + (gs + 39));
                printf("\nSTMT_EXEC;;4225\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4226\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4227\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4228\n");
icv = *(mtfv + (gs + 40));
                printf("\nSTMT_EXEC;;4229\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4230\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4231\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4232\n");
icv = *(mtfv + (gs + 41));
                printf("\nSTMT_EXEC;;4233\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4234\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4235\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4236\n");
icv = *(mtfv + (gs + 42));
                printf("\nSTMT_EXEC;;4237\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4238\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4239\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4240\n");
icv = *(mtfv + (gs + 43));
                printf("\nSTMT_EXEC;;4241\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4242\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4243\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4244\n");
icv = *(mtfv + (gs + 44));
                printf("\nSTMT_EXEC;;4245\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4246\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4247\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4248\n");
icv = *(mtfv + (gs + 45));
                printf("\nSTMT_EXEC;;4249\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4250\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4251\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4252\n");
icv = *(mtfv + (gs + 46));
                printf("\nSTMT_EXEC;;4253\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4254\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4255\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4256\n");
icv = *(mtfv + (gs + 47));
                printf("\nSTMT_EXEC;;4257\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4258\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4259\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4260\n");
icv = *(mtfv + (gs + 48));
                printf("\nSTMT_EXEC;;4261\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4262\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4263\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4264\n");
icv = *(mtfv + (gs + 49));
                printf("\nSTMT_EXEC;;4265\n");
cost01 += s->len_pack[icv][0];
                printf("\nSTMT_EXEC;;4266\n");
cost23 += s->len_pack[icv][1];
                printf("\nSTMT_EXEC;;4267\n");
cost45 += s->len_pack[icv][2];
                printf("\nSTMT_EXEC;;4268\n");
cost[0] = (UInt16)(cost01 & 65535U);
                printf("\nSTMT_EXEC;;4269\n");
cost[1] = (UInt16)(cost01 >> 16);
                printf("\nSTMT_EXEC;;4270\n");
cost[2] = (UInt16)(cost23 & 65535U);
                printf("\nSTMT_EXEC;;4271\n");
cost[3] = (UInt16)(cost23 >> 16);
                printf("\nSTMT_EXEC;;4272\n");
cost[4] = (UInt16)(cost45 & 65535U);
                printf("\nSTMT_EXEC;;4273\n");
cost[5] = (UInt16)(cost45 >> 16);
              }
              else
              {
                printf("\nSTMT_EXEC;;4277\n");
goto _L;
              }
            }
            else
            {
            _L:
              {
printf("\nSTMT_EXEC;;4283\n");
i = gs;
}

              {
                printf("\nSTMT_EXEC;;4285\n");
while (1)
                {
                while_continue___11: /* CIL Label */;
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
                    while_continue___12: /* CIL Label */;
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
            printf("\nSTMT_EXEC;;4313\n");
bt = -1;
            printf("\nSTMT_EXEC;;4314\n");
t = 0;
            {
              printf("\nSTMT_EXEC;;4316\n");
while (1)
              {
              while_continue___13: /* CIL Label */;
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
            printf("\nSTMT_EXEC;;4332\n");
totc += bc;
            printf("\nSTMT_EXEC;;4333\n");
(fave[bt])++;
            printf("\nSTMT_EXEC;;4334\n");
s->selector[nSelectors] = (UChar)bt;
            printf("\nSTMT_EXEC;;4335\n");
nSelectors++;
            printf("\nSTMT_EXEC;;4336\n");
if (nGroups == 6)
            {
              printf("\nSTMT_EXEC;;4338\n");
if (50 == (ge - gs) + 1)
              {
                printf("\nSTMT_EXEC;;4340\n");
(s->rfreq[bt][*(mtfv + gs)])++;
                printf("\nSTMT_EXEC;;4341\n");
(s->rfreq[bt][*(mtfv + (gs + 1))])++;
                printf("\nSTMT_EXEC;;4342\n");
(s->rfreq[bt][*(mtfv + (gs + 2))])++;
                printf("\nSTMT_EXEC;;4343\n");
(s->rfreq[bt][*(mtfv + (gs + 3))])++;
                printf("\nSTMT_EXEC;;4344\n");
(s->rfreq[bt][*(mtfv + (gs + 4))])++;
                printf("\nSTMT_EXEC;;4345\n");
(s->rfreq[bt][*(mtfv + (gs + 5))])++;
                printf("\nSTMT_EXEC;;4346\n");
(s->rfreq[bt][*(mtfv + (gs + 6))])++;
                printf("\nSTMT_EXEC;;4347\n");
(s->rfreq[bt][*(mtfv + (gs + 7))])++;
                printf("\nSTMT_EXEC;;4348\n");
(s->rfreq[bt][*(mtfv + (gs + 8))])++;
                printf("\nSTMT_EXEC;;4349\n");
(s->rfreq[bt][*(mtfv + (gs + 9))])++;
                printf("\nSTMT_EXEC;;4350\n");
(s->rfreq[bt][*(mtfv + (gs + 10))])++;
                printf("\nSTMT_EXEC;;4351\n");
(s->rfreq[bt][*(mtfv + (gs + 11))])++;
                printf("\nSTMT_EXEC;;4352\n");
(s->rfreq[bt][*(mtfv + (gs + 12))])++;
                printf("\nSTMT_EXEC;;4353\n");
(s->rfreq[bt][*(mtfv + (gs + 13))])++;
                printf("\nSTMT_EXEC;;4354\n");
(s->rfreq[bt][*(mtfv + (gs + 14))])++;
                printf("\nSTMT_EXEC;;4355\n");
(s->rfreq[bt][*(mtfv + (gs + 15))])++;
                printf("\nSTMT_EXEC;;4356\n");
(s->rfreq[bt][*(mtfv + (gs + 16))])++;
                printf("\nSTMT_EXEC;;4357\n");
(s->rfreq[bt][*(mtfv + (gs + 17))])++;
                printf("\nSTMT_EXEC;;4358\n");
(s->rfreq[bt][*(mtfv + (gs + 18))])++;
                printf("\nSTMT_EXEC;;4359\n");
(s->rfreq[bt][*(mtfv + (gs + 19))])++;
                printf("\nSTMT_EXEC;;4360\n");
(s->rfreq[bt][*(mtfv + (gs + 20))])++;
                printf("\nSTMT_EXEC;;4361\n");
(s->rfreq[bt][*(mtfv + (gs + 21))])++;
                printf("\nSTMT_EXEC;;4362\n");
(s->rfreq[bt][*(mtfv + (gs + 22))])++;
                printf("\nSTMT_EXEC;;4363\n");
(s->rfreq[bt][*(mtfv + (gs + 23))])++;
                printf("\nSTMT_EXEC;;4364\n");
(s->rfreq[bt][*(mtfv + (gs + 24))])++;
                printf("\nSTMT_EXEC;;4365\n");
(s->rfreq[bt][*(mtfv + (gs + 25))])++;
                printf("\nSTMT_EXEC;;4366\n");
(s->rfreq[bt][*(mtfv + (gs + 26))])++;
                printf("\nSTMT_EXEC;;4367\n");
(s->rfreq[bt][*(mtfv + (gs + 27))])++;
                printf("\nSTMT_EXEC;;4368\n");
(s->rfreq[bt][*(mtfv + (gs + 28))])++;
                printf("\nSTMT_EXEC;;4369\n");
(s->rfreq[bt][*(mtfv + (gs + 29))])++;
                printf("\nSTMT_EXEC;;4370\n");
(s->rfreq[bt][*(mtfv + (gs + 30))])++;
                printf("\nSTMT_EXEC;;4371\n");
(s->rfreq[bt][*(mtfv + (gs + 31))])++;
                printf("\nSTMT_EXEC;;4372\n");
(s->rfreq[bt][*(mtfv + (gs + 32))])++;
                printf("\nSTMT_EXEC;;4373\n");
(s->rfreq[bt][*(mtfv + (gs + 33))])++;
                printf("\nSTMT_EXEC;;4374\n");
(s->rfreq[bt][*(mtfv + (gs + 34))])++;
                printf("\nSTMT_EXEC;;4375\n");
(s->rfreq[bt][*(mtfv + (gs + 35))])++;
                printf("\nSTMT_EXEC;;4376\n");
(s->rfreq[bt][*(mtfv + (gs + 36))])++;
                printf("\nSTMT_EXEC;;4377\n");
(s->rfreq[bt][*(mtfv + (gs + 37))])++;
                printf("\nSTMT_EXEC;;4378\n");
(s->rfreq[bt][*(mtfv + (gs + 38))])++;
                printf("\nSTMT_EXEC;;4379\n");
(s->rfreq[bt][*(mtfv + (gs + 39))])++;
                printf("\nSTMT_EXEC;;4380\n");
(s->rfreq[bt][*(mtfv + (gs + 40))])++;
                printf("\nSTMT_EXEC;;4381\n");
(s->rfreq[bt][*(mtfv + (gs + 41))])++;
                printf("\nSTMT_EXEC;;4382\n");
(s->rfreq[bt][*(mtfv + (gs + 42))])++;
                printf("\nSTMT_EXEC;;4383\n");
(s->rfreq[bt][*(mtfv + (gs + 43))])++;
                printf("\nSTMT_EXEC;;4384\n");
(s->rfreq[bt][*(mtfv + (gs + 44))])++;
                printf("\nSTMT_EXEC;;4385\n");
(s->rfreq[bt][*(mtfv + (gs + 45))])++;
                printf("\nSTMT_EXEC;;4386\n");
(s->rfreq[bt][*(mtfv + (gs + 46))])++;
                printf("\nSTMT_EXEC;;4387\n");
(s->rfreq[bt][*(mtfv + (gs + 47))])++;
                printf("\nSTMT_EXEC;;4388\n");
(s->rfreq[bt][*(mtfv + (gs + 48))])++;
                printf("\nSTMT_EXEC;;4389\n");
(s->rfreq[bt][*(mtfv + (gs + 49))])++;
              }
              else
              {
                printf("\nSTMT_EXEC;;4393\n");
goto _L___0;
              }
            }
            else
            {
            _L___0:
              {
printf("\nSTMT_EXEC;;4399\n");
i = gs;
}

              {
                printf("\nSTMT_EXEC;;4401\n");
while (1)
                {
                while_continue___14: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;4418\n");
if (s->verbosity >= 3)
        {
          {
            printf("\nSTMT_EXEC;;4421\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "      pass %d: size is "
                                                     "%d, grp uses are ",
                    iter + 1, totc / 8);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;4425\n");
t = 0;
          }
          {
            printf("\nSTMT_EXEC;;4428\n");
while (1)
            {
            while_continue___15: /* CIL Label */;
              printf("\nSTMT_EXEC;;4431\n");
if (!(t < nGroups))
              {
                printf("\nSTMT_EXEC;;4433\n");
goto while_break___15;
              }
              {
                printf("\nSTMT_EXEC;;4436\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%d ", fave[t]);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;4437\n");
t++;
              }
            }
          while_break___15: /* CIL Label */;
          }
          {
            printf("\nSTMT_EXEC;;4443\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n");printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;4446\n");
t = 0;
        {
          printf("\nSTMT_EXEC;;4448\n");
while (1)
          {
          while_continue___16: /* CIL Label */;
            printf("\nSTMT_EXEC;;4451\n");
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
    printf("\nSTMT_EXEC;;4466\n");
if (!(nGroups < 8))
    {
      {
        printf("\nSTMT_EXEC;;4469\n");
BZ2_bz__AssertH__fail(3002);
      }
    }
    printf("\nSTMT_EXEC;;4472\n");
if (nSelectors < 32768)
    {
      printf("\nSTMT_EXEC;;4474\n");
if (!(nSelectors <= 18002))
      {
        {
          printf("\nSTMT_EXEC;;4477\n");
BZ2_bz__AssertH__fail(3003);
        }
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;4484\n");
BZ2_bz__AssertH__fail(3003);
      }
    }
    printf("\nSTMT_EXEC;;4487\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;4489\n");
while (1)
      {
      while_continue___17: /* CIL Label */;
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
      while_continue___18: /* CIL Label */;
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
          while_continue___19: /* CIL Label */;
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
      while_continue___20: /* CIL Label */;
        printf("\nSTMT_EXEC;;4539\n");
if (!(t < nGroups))
        {
          printf("\nSTMT_EXEC;;4541\n");
goto while_break___20;
        }
        printf("\nSTMT_EXEC;;4543\n");
minLen = 32;
        printf("\nSTMT_EXEC;;4544\n");
maxLen = 0;
        printf("\nSTMT_EXEC;;4545\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;4547\n");
while (1)
          {
          while_continue___21: /* CIL Label */;
            printf("\nSTMT_EXEC;;4550\n");
if (!(i < alphaSize))
            {
              printf("\nSTMT_EXEC;;4552\n");
goto while_break___21;
            }
            printf("\nSTMT_EXEC;;4554\n");
if ((int)s->len[t][i] > maxLen)
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
        printf("\nSTMT_EXEC;;4566\n");
if (!(!(maxLen > 17)))
        {
          {
            printf("\nSTMT_EXEC;;4569\n");
BZ2_bz__AssertH__fail(3004);
          }
        }
        printf("\nSTMT_EXEC;;4572\n");
if (!(!(minLen < 1)))
        {
          {
            printf("\nSTMT_EXEC;;4575\n");
BZ2_bz__AssertH__fail(3005);
          }
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
      while_continue___22: /* CIL Label */;
        printf("\nSTMT_EXEC;;4590\n");
if (!(i < 16))
        {
          printf("\nSTMT_EXEC;;4592\n");
goto while_break___22;
        }
        printf("\nSTMT_EXEC;;4594\n");
inUse16[i] = (Bool)0;
        printf("\nSTMT_EXEC;;4595\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;4597\n");
while (1)
          {
          while_continue___23: /* CIL Label */;
            printf("\nSTMT_EXEC;;4600\n");
if (!(j < 16))
            {
              printf("\nSTMT_EXEC;;4602\n");
goto while_break___23;
            }
            printf("\nSTMT_EXEC;;4604\n");
if (s->inUse[i * 16 + j])
            {
              printf("\nSTMT_EXEC;;4606\n");
inUse16[i] = (Bool)1;
            }
            printf("\nSTMT_EXEC;;4608\n");
j++;
          }
        while_break___23: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;4612\n");
i++;
      }
    while_break___22: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;4616\n");
nBytes = s->numZ;
    printf("\nSTMT_EXEC;;4617\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;4619\n");
while (1)
      {
      while_continue___24: /* CIL Label */;
        printf("\nSTMT_EXEC;;4622\n");
if (!(i < 16))
        {
          printf("\nSTMT_EXEC;;4624\n");
goto while_break___24;
        }
        printf("\nSTMT_EXEC;;4626\n");
if (inUse16[i])
        {
          {
            printf("\nSTMT_EXEC;;4629\n");
bsW(s, 1, (UInt32)1);
          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;4635\n");
bsW(s, 1, (UInt32)0);
          }
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
      while_continue___25: /* CIL Label */;
        printf("\nSTMT_EXEC;;4647\n");
if (!(i < 16))
        {
          printf("\nSTMT_EXEC;;4649\n");
goto while_break___25;
        }
        printf("\nSTMT_EXEC;;4651\n");
if (inUse16[i])
        {
          printf("\nSTMT_EXEC;;4653\n");
j = 0;
          {
            printf("\nSTMT_EXEC;;4655\n");
while (1)
            {
            while_continue___26: /* CIL Label */;
              printf("\nSTMT_EXEC;;4658\n");
if (!(j < 16))
              {
                printf("\nSTMT_EXEC;;4660\n");
goto while_break___26;
              }
              printf("\nSTMT_EXEC;;4662\n");
if (s->inUse[i * 16 + j])
              {
                {
                  printf("\nSTMT_EXEC;;4665\n");
bsW(s, 1, (UInt32)1);
                }
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;4671\n");
bsW(s, 1, (UInt32)0);
                }
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
    printf("\nSTMT_EXEC;;4683\n");
if (s->verbosity >= 3)
    {
      {
        printf("\nSTMT_EXEC;;4686\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "      bytes: mapping %d, ", s->numZ - nBytes);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;4690\n");
nBytes = s->numZ;
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
      while_continue___27: /* CIL Label */;
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
          while_continue___28: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4726\n");
if (s->verbosity >= 3)
    {
      {
        printf("\nSTMT_EXEC;;4729\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "selectors %d, ", s->numZ - nBytes);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;4732\n");
nBytes = s->numZ;
    printf("\nSTMT_EXEC;;4733\n");
t = 0;
    {
      printf("\nSTMT_EXEC;;4735\n");
while (1)
      {
      while_continue___29: /* CIL Label */;
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
          while_continue___30: /* CIL Label */;
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
              while_continue___31: /* CIL Label */;
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
              while_continue___32: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4796\n");
if (s->verbosity >= 3)
    {
      {
        printf("\nSTMT_EXEC;;4799\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "code lengths %d, ", s->numZ - nBytes);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;4802\n");
nBytes = s->numZ;
    printf("\nSTMT_EXEC;;4803\n");
selCtr = 0;
    printf("\nSTMT_EXEC;;4804\n");
gs = 0;
    {
      printf("\nSTMT_EXEC;;4806\n");
while (1)
      {
      while_continue___33: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;4818\n");
if (!((int)s->selector[selCtr] < nGroups))
        {
          {
            printf("\nSTMT_EXEC;;4821\n");
BZ2_bz__AssertH__fail(3006);
          }
        }
        printf("\nSTMT_EXEC;;4824\n");
if (nGroups == 6)
        {
          printf("\nSTMT_EXEC;;4826\n");
if (50 == (ge - gs) + 1)
          {
            {
              printf("\nSTMT_EXEC;;4829\n");
s_len_sel_selCtr = &s->len[s->selector[selCtr]][0];
              printf("\nSTMT_EXEC;;4830\n");
s_code_sel_selCtr = &s->code[s->selector[selCtr]][0];
              printf("\nSTMT_EXEC;;4831\n");
mtfv_i = *(mtfv + gs);
              printf("\nSTMT_EXEC;;4832\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4833\n");
mtfv_i = *(mtfv + (gs + 1));
              printf("\nSTMT_EXEC;;4834\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4835\n");
mtfv_i = *(mtfv + (gs + 2));
              printf("\nSTMT_EXEC;;4836\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4837\n");
mtfv_i = *(mtfv + (gs + 3));
              printf("\nSTMT_EXEC;;4838\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4839\n");
mtfv_i = *(mtfv + (gs + 4));
              printf("\nSTMT_EXEC;;4840\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4841\n");
mtfv_i = *(mtfv + (gs + 5));
              printf("\nSTMT_EXEC;;4842\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4843\n");
mtfv_i = *(mtfv + (gs + 6));
              printf("\nSTMT_EXEC;;4844\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4845\n");
mtfv_i = *(mtfv + (gs + 7));
              printf("\nSTMT_EXEC;;4846\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4847\n");
mtfv_i = *(mtfv + (gs + 8));
              printf("\nSTMT_EXEC;;4848\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4849\n");
mtfv_i = *(mtfv + (gs + 9));
              printf("\nSTMT_EXEC;;4850\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4851\n");
mtfv_i = *(mtfv + (gs + 10));
              printf("\nSTMT_EXEC;;4852\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4853\n");
mtfv_i = *(mtfv + (gs + 11));
              printf("\nSTMT_EXEC;;4854\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4855\n");
mtfv_i = *(mtfv + (gs + 12));
              printf("\nSTMT_EXEC;;4856\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4857\n");
mtfv_i = *(mtfv + (gs + 13));
              printf("\nSTMT_EXEC;;4858\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4859\n");
mtfv_i = *(mtfv + (gs + 14));
              printf("\nSTMT_EXEC;;4860\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4861\n");
mtfv_i = *(mtfv + (gs + 15));
              printf("\nSTMT_EXEC;;4862\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4863\n");
mtfv_i = *(mtfv + (gs + 16));
              printf("\nSTMT_EXEC;;4864\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4865\n");
mtfv_i = *(mtfv + (gs + 17));
              printf("\nSTMT_EXEC;;4866\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4867\n");
mtfv_i = *(mtfv + (gs + 18));
              printf("\nSTMT_EXEC;;4868\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4869\n");
mtfv_i = *(mtfv + (gs + 19));
              printf("\nSTMT_EXEC;;4870\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4871\n");
mtfv_i = *(mtfv + (gs + 20));
              printf("\nSTMT_EXEC;;4872\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4873\n");
mtfv_i = *(mtfv + (gs + 21));
              printf("\nSTMT_EXEC;;4874\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4875\n");
mtfv_i = *(mtfv + (gs + 22));
              printf("\nSTMT_EXEC;;4876\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4877\n");
mtfv_i = *(mtfv + (gs + 23));
              printf("\nSTMT_EXEC;;4878\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4879\n");
mtfv_i = *(mtfv + (gs + 24));
              printf("\nSTMT_EXEC;;4880\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4881\n");
mtfv_i = *(mtfv + (gs + 25));
              printf("\nSTMT_EXEC;;4882\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4883\n");
mtfv_i = *(mtfv + (gs + 26));
              printf("\nSTMT_EXEC;;4884\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4885\n");
mtfv_i = *(mtfv + (gs + 27));
              printf("\nSTMT_EXEC;;4886\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4887\n");
mtfv_i = *(mtfv + (gs + 28));
              printf("\nSTMT_EXEC;;4888\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4889\n");
mtfv_i = *(mtfv + (gs + 29));
              printf("\nSTMT_EXEC;;4890\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4891\n");
mtfv_i = *(mtfv + (gs + 30));
              printf("\nSTMT_EXEC;;4892\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4893\n");
mtfv_i = *(mtfv + (gs + 31));
              printf("\nSTMT_EXEC;;4894\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4895\n");
mtfv_i = *(mtfv + (gs + 32));
              printf("\nSTMT_EXEC;;4896\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4897\n");
mtfv_i = *(mtfv + (gs + 33));
              printf("\nSTMT_EXEC;;4898\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4899\n");
mtfv_i = *(mtfv + (gs + 34));
              printf("\nSTMT_EXEC;;4900\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4901\n");
mtfv_i = *(mtfv + (gs + 35));
              printf("\nSTMT_EXEC;;4902\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4903\n");
mtfv_i = *(mtfv + (gs + 36));
              printf("\nSTMT_EXEC;;4904\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4905\n");
mtfv_i = *(mtfv + (gs + 37));
              printf("\nSTMT_EXEC;;4906\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4907\n");
mtfv_i = *(mtfv + (gs + 38));
              printf("\nSTMT_EXEC;;4908\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4909\n");
mtfv_i = *(mtfv + (gs + 39));
              printf("\nSTMT_EXEC;;4910\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4911\n");
mtfv_i = *(mtfv + (gs + 40));
              printf("\nSTMT_EXEC;;4912\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4913\n");
mtfv_i = *(mtfv + (gs + 41));
              printf("\nSTMT_EXEC;;4914\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4915\n");
mtfv_i = *(mtfv + (gs + 42));
              printf("\nSTMT_EXEC;;4916\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4917\n");
mtfv_i = *(mtfv + (gs + 43));
              printf("\nSTMT_EXEC;;4918\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4919\n");
mtfv_i = *(mtfv + (gs + 44));
              printf("\nSTMT_EXEC;;4920\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4921\n");
mtfv_i = *(mtfv + (gs + 45));
              printf("\nSTMT_EXEC;;4922\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4923\n");
mtfv_i = *(mtfv + (gs + 46));
              printf("\nSTMT_EXEC;;4924\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4925\n");
mtfv_i = *(mtfv + (gs + 47));
              printf("\nSTMT_EXEC;;4926\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4927\n");
mtfv_i = *(mtfv + (gs + 48));
              printf("\nSTMT_EXEC;;4928\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
              printf("\nSTMT_EXEC;;4929\n");
mtfv_i = *(mtfv + (gs + 49));
              printf("\nSTMT_EXEC;;4930\n");
bsW(s, (Int32) * (s_len_sel_selCtr + (int)mtfv_i), (UInt32) * (s_code_sel_selCtr + (int)mtfv_i));
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;4935\n");
goto _L___1;
          }
        }
        else
        {
        _L___1:
          {
printf("\nSTMT_EXEC;;4941\n");
i = gs;
}

          {
            printf("\nSTMT_EXEC;;4943\n");
while (1)
            {
            while_continue___34: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;4963\n");
if (!(selCtr == nSelectors))
    {
      {
        printf("\nSTMT_EXEC;;4966\n");
BZ2_bz__AssertH__fail(3007);
      }
    }
    printf("\nSTMT_EXEC;;4969\n");
if (s->verbosity >= 3)
    {
      {
        printf("\nSTMT_EXEC;;4972\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "codes %d\n", s->numZ - nBytes);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;4975\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_compressBlock(EState *s, Bool is_last_block)
{
  printf("\nFUNC_CALL;BZ2_compressBlock(EState *,Bool);\n");
{
    printf("\nSTMT_EXEC;;4981\n");
if (s->nblock > 0)
    {
      printf("\nSTMT_EXEC;;4983\n");
s->blockCRC = ~s->blockCRC;
      printf("\nSTMT_EXEC;;4984\n");
s->combinedCRC = (s->combinedCRC << 1) | (s->combinedCRC >> 31);
      printf("\nSTMT_EXEC;;4985\n");
s->combinedCRC ^= s->blockCRC;
      printf("\nSTMT_EXEC;;4986\n");
if (s->blockNo > 1)
      {
        printf("\nSTMT_EXEC;;4988\n");
s->numZ = 0;
      }
      printf("\nSTMT_EXEC;;4990\n");
if (s->verbosity >= 2)
      {
        {
          printf("\nSTMT_EXEC;;4993\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "    block %d: crc = 0x%08x, combined "
                                                   "CRC = 0x%08x, size = %d\n",
                  s->blockNo, s->blockCRC, s->combinedCRC, s->nblock);printf("\nFUNC_RETURN;;\n");

        }
      }
      {
        printf("\nSTMT_EXEC;;5000\n");
BZ2_blockSort(s);
      }
    }
    printf("\nSTMT_EXEC;;5003\n");
s->zbits = (UChar *)s->arr2 + s->nblock;
    printf("\nSTMT_EXEC;;5004\n");
if (s->blockNo == 1)
    {
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
    }
    printf("\nSTMT_EXEC;;5014\n");
if (s->nblock > 0)
    {
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
    }
    printf("\nSTMT_EXEC;;5030\n");
if (is_last_block)
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
      printf("\nSTMT_EXEC;;5041\n");
if (s->verbosity >= 2)
      {
        {
          printf("\nSTMT_EXEC;;5044\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "    final combined CRC = 0x%08x\n   ", s->combinedCRC);printf("\nFUNC_RETURN;;\n");

        }
      }
      {
        printf("\nSTMT_EXEC;;5048\n");
bsFinishWrite(s);
      }
    }
    printf("\nSTMT_EXEC;;5051\n");
printf("\nFUNC_RETURN;;\n");
return;
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
void BZ2_bz__AssertH__fail(int errcode)
{
  printf("\nFUNC_CALL;BZ2_bz__AssertH__fail(int);\n");
printf("\nSTMT_EXEC;;5086\n");
char const *tmp;
  {
    {
      printf("\nSTMT_EXEC;;5089\n");
tmp = BZ2_bzlibVersion();
      printf("\nSTMT_EXEC;;5090\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "\n\nbzip2/libbzip2: internal error number "
                                               "%d.\nThis is a bug in bzip2/libbzip2, "
                                               "%s.\nPlease report it to me at: "
                                               "jseward@bzip.org.  If this happened\nwhen "
                                               "you were using some program which uses "
                                               "libbzip2 as a\ncomponent, you should also "
                                               "report this bug to the author(s)\nof that "
                                               "program.  Please make an effort to report "
                                               "this bug;\ntimely and accurate bug "
                                               "reports eventually lead to "
                                               "higher\nquality software.  Thanks.  "
                                               "Julian Seward, 10 December 2007.\n\n",
              errcode, tmp);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;5105\n");
if (errcode == 1007)
    {
      {
        printf("\nSTMT_EXEC;;5108\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n*** A special note about internal "
                                                                                    "error number 1007 ***\n\nExperience "
                                                                                    "suggests that a common cause of i.e. "
                                                                                    "1007\nis unreliable memory or other "
                                                                                    "hardware.  The 1007 assertion\njust "
                                                                                    "happens to cross-check the results of "
                                                                                    "huge numbers of\nmemory reads/writes, "
                                                                                    "and so acts (unintendedly) as a "
                                                                                    "stress\ntest of your memory "
                                                                                    "system.\n\nI suggest the following: try "
                                                                                    "compressing the file again,\npossibly "
                                                                                    "monitoring progress in detail with the "
                                                                                    "-vv flag.\n\n* If the error cannot be "
                                                                                    "reproduced, and/or happens at "
                                                                                    "different\n  points in compression, you "
                                                                                    "may have a flaky memory system.\n  Try "
                                                                                    "a memory-test program.  I have used "
                                                                                    "Memtest86\n  (www.memtest86.com).  At "
                                                                                    "the time of writing it is free "
                                                                                    "(GPLd).\n  Memtest86 tests memory much "
                                                                                    "more thorougly than your BIOSs\n  "
                                                                                    "power-on test, and may find failures "
                                                                                    "that the BIOS doesn\'t.\n\n* If the "
                                                                                    "error can be repeatably reproduced, "
                                                                                    "this is a bug in\n  bzip2, and I would "
                                                                                    "very much like to hear about it.  "
                                                                                    "Please\n  let me know, and, ideally, "
                                                                                    "save a copy of the file causing the\n  "
                                                                                    "problem -- without which I will be "
                                                                                    "unable to investigate it.\n\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;5141\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(3);printf("\nFUNC_RETURN;;\n");

    }
  }
printf("\nFUNC_RETURN;;\n");
}
static int bz_config_ok(void)
{
  printf("\nFUNC_CALL;bz_config_ok();\n");
{
    printf("\nSTMT_EXEC;;5148\n");
if (sizeof(int) != 4UL)
    {
      printf("\nSTMT_EXEC;;5150\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;5152\n");
if (sizeof(short) != 2UL)
    {
      printf("\nSTMT_EXEC;;5154\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;5156\n");
if (sizeof(char) != 1UL)
    {
      printf("\nSTMT_EXEC;;5158\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;5160\n");
printf("\nFUNC_RETURN;;\n");
return (1);
  }
printf("\nFUNC_RETURN;;\n");
}
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
{
    printf("\nSTMT_EXEC;;5178\n");
if ((unsigned long)addr != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;5181\n");
printf("\nFUNC_CALL;free(void *);\n");
free(addr);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;5184\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void prepare_new_block(EState *s)
{
  printf("\nFUNC_CALL;prepare_new_block(EState *);\n");
printf("\nSTMT_EXEC;;5189\n");
Int32 i;
  {
    printf("\nSTMT_EXEC;;5191\n");
s->nblock = 0;
    printf("\nSTMT_EXEC;;5192\n");
s->numZ = 0;
    printf("\nSTMT_EXEC;;5193\n");
s->state_out_pos = 0;
    printf("\nSTMT_EXEC;;5194\n");
s->blockCRC = (UInt32)4294967295L;
    printf("\nSTMT_EXEC;;5195\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;5197\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;5200\n");
if (!(i < 256))
        {
          printf("\nSTMT_EXEC;;5202\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5204\n");
s->inUse[i] = (Bool)0;
        printf("\nSTMT_EXEC;;5205\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5209\n");
(s->blockNo)++;
    printf("\nSTMT_EXEC;;5210\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void init_RL(EState *s)
{
  printf("\nFUNC_CALL;init_RL(EState *);\n");
{
    printf("\nSTMT_EXEC;;5216\n");
s->state_in_ch = (UInt32)256;
    printf("\nSTMT_EXEC;;5217\n");
s->state_in_len = 0;
    printf("\nSTMT_EXEC;;5218\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool isempty_RL(EState *s)
{
  printf("\nFUNC_CALL;isempty_RL(EState *);\n");
{
    printf("\nSTMT_EXEC;;5224\n");
if (s->state_in_ch < 256U)
    {
      printf("\nSTMT_EXEC;;5226\n");
if (s->state_in_len > 0)
      {
        printf("\nSTMT_EXEC;;5228\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
      }
      else
      {
        printf("\nSTMT_EXEC;;5232\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;5237\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzCompressInit(bz_stream *strm, int blockSize100k___0, int verbosity___0, int workFactor___0)
{
  printf("\nFUNC_CALL;BZ2_bzCompressInit(bz_stream *,int,int,int);\n");
printf("\nSTMT_EXEC;;5243\n");
Int32 n;
  printf("\nSTMT_EXEC;;5244\n");
EState *s;
  printf("\nSTMT_EXEC;;5245\n");
int tmp;
  {
    {
      printf("\nSTMT_EXEC;;5248\n");
tmp = bz_config_ok();
    }
    printf("\nSTMT_EXEC;;5250\n");
if (!tmp)
    {
      printf("\nSTMT_EXEC;;5252\n");
printf("\nFUNC_RETURN;;\n");
return (-9);
    }
    printf("\nSTMT_EXEC;;5254\n");
if ((unsigned long)strm == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5256\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    else
    {
      printf("\nSTMT_EXEC;;5260\n");
if (blockSize100k___0 < 1)
      {
        printf("\nSTMT_EXEC;;5262\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
      }
      else
      {
        printf("\nSTMT_EXEC;;5266\n");
if (blockSize100k___0 > 9)
        {
          printf("\nSTMT_EXEC;;5268\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
        }
        else
        {
          printf("\nSTMT_EXEC;;5272\n");
if (workFactor___0 < 0)
          {
            printf("\nSTMT_EXEC;;5274\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
          }
          else
          {
            printf("\nSTMT_EXEC;;5278\n");
if (workFactor___0 > 250)
            {
              printf("\nSTMT_EXEC;;5280\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;5286\n");
if (workFactor___0 == 0)
    {
      printf("\nSTMT_EXEC;;5288\n");
workFactor___0 = 30;
    }
    printf("\nSTMT_EXEC;;5290\n");
if ((unsigned long)strm->bzalloc == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5292\n");
strm->bzalloc = &default_bzalloc;
    }
    printf("\nSTMT_EXEC;;5294\n");
if ((unsigned long)strm->bzfree == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5296\n");
strm->bzfree = &default_bzfree;
    }
    {
      printf("\nSTMT_EXEC;;5299\n");
s = (EState *)(*(strm->bzalloc))(strm->opaque, (int)sizeof(EState), 1);
    }
    printf("\nSTMT_EXEC;;5301\n");
if ((unsigned long)s == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5303\n");
printf("\nFUNC_RETURN;;\n");
return (-3);
    }
    {
      printf("\nSTMT_EXEC;;5306\n");
s->strm = strm;
      printf("\nSTMT_EXEC;;5307\n");
s->arr1 = (UInt32 *)((void *)0);
      printf("\nSTMT_EXEC;;5308\n");
s->arr2 = (UInt32 *)((void *)0);
      printf("\nSTMT_EXEC;;5309\n");
s->ftab = (UInt32 *)((void *)0);
      printf("\nSTMT_EXEC;;5310\n");
n = 100000 * blockSize100k___0;
      printf("\nSTMT_EXEC;;5311\n");
s->arr1 = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)n * sizeof(UInt32)), 1);
      printf("\nSTMT_EXEC;;5312\n");
s->arr2 = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)(n + 34) * sizeof(UInt32)), 1);
      printf("\nSTMT_EXEC;;5313\n");
s->ftab = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)(65537UL * sizeof(UInt32)), 1);
    }
    printf("\nSTMT_EXEC;;5315\n");
if ((unsigned long)s->arr1 == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5317\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;5321\n");
if ((unsigned long)s->arr2 == (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;5323\n");
goto _L;
      }
      else
      {
        printf("\nSTMT_EXEC;;5327\n");
if ((unsigned long)s->ftab == (unsigned long)((void *)0))
        {
        _L:
          {
printf("\nSTMT_EXEC;;5330\n");
if ((unsigned long)s->arr1 != (unsigned long)((void *)0))
          {
            {
              printf("\nSTMT_EXEC;;5333\n");
(*(strm->bzfree))(strm->opaque, (void *)s->arr1);
            }
          }
}

          printf("\nSTMT_EXEC;;5336\n");
if ((unsigned long)s->arr2 != (unsigned long)((void *)0))
          {
            {
              printf("\nSTMT_EXEC;;5339\n");
(*(strm->bzfree))(strm->opaque, (void *)s->arr2);
            }
          }
          printf("\nSTMT_EXEC;;5342\n");
if ((unsigned long)s->ftab != (unsigned long)((void *)0))
          {
            {
              printf("\nSTMT_EXEC;;5345\n");
(*(strm->bzfree))(strm->opaque, (void *)s->ftab);
            }
          }
          printf("\nSTMT_EXEC;;5348\n");
if ((unsigned long)s != (unsigned long)((void *)0))
          {
            {
              printf("\nSTMT_EXEC;;5351\n");
(*(strm->bzfree))(strm->opaque, (void *)s);
            }
          }
          printf("\nSTMT_EXEC;;5354\n");
printf("\nFUNC_RETURN;;\n");
return (-3);
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;5359\n");
s->blockNo = 0;
      printf("\nSTMT_EXEC;;5360\n");
s->state = 2;
      printf("\nSTMT_EXEC;;5361\n");
s->mode = 2;
      printf("\nSTMT_EXEC;;5362\n");
s->combinedCRC = (UInt32)0;
      printf("\nSTMT_EXEC;;5363\n");
s->blockSize100k = blockSize100k___0;
      printf("\nSTMT_EXEC;;5364\n");
s->nblockMAX = 100000 * blockSize100k___0 - 19;
      printf("\nSTMT_EXEC;;5365\n");
s->verbosity = verbosity___0;
      printf("\nSTMT_EXEC;;5366\n");
s->workFactor = workFactor___0;
      printf("\nSTMT_EXEC;;5367\n");
s->block = (UChar *)s->arr2;
      printf("\nSTMT_EXEC;;5368\n");
s->mtfv = (UInt16 *)s->arr1;
      printf("\nSTMT_EXEC;;5369\n");
s->zbits = (UChar *)((void *)0);
      printf("\nSTMT_EXEC;;5370\n");
s->ptr = s->arr1;
      printf("\nSTMT_EXEC;;5371\n");
strm->state = (void *)s;
      printf("\nSTMT_EXEC;;5372\n");
strm->total_in_lo32 = 0U;
      printf("\nSTMT_EXEC;;5373\n");
strm->total_in_hi32 = 0U;
      printf("\nSTMT_EXEC;;5374\n");
strm->total_out_lo32 = 0U;
      printf("\nSTMT_EXEC;;5375\n");
strm->total_out_hi32 = 0U;
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
      while_continue: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;5402\n");
s->inUse[s->state_in_ch] = (Bool)1;
    {
      printf("\nSTMT_EXEC;;5404\n");
if (s->state_in_len == 1)
      {
        printf("\nSTMT_EXEC;;5406\n");
goto case_1;
      }
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
    case_1: /* CIL Label */
      {
printf("\nSTMT_EXEC;;5418\n");
*(s->block + s->nblock) = ch;
}

      printf("\nSTMT_EXEC;;5419\n");
(s->nblock)++;
      printf("\nSTMT_EXEC;;5420\n");
goto switch_break;
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
      printf("\nSTMT_EXEC;;5447\n");
goto switch_break;
    switch_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5450\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void flush_RL(EState *s)
{
  printf("\nFUNC_CALL;flush_RL(EState *);\n");
{
    printf("\nSTMT_EXEC;;5456\n");
if (s->state_in_ch < 256U)
    {
      {
        printf("\nSTMT_EXEC;;5459\n");
add_pair_to_block(s);
      }
    }
    {
      printf("\nSTMT_EXEC;;5463\n");
init_RL(s);
    }
    printf("\nSTMT_EXEC;;5465\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
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
  printf("\nSTMT_EXEC;;5473\n");
UInt32 zchh___0;
  printf("\nSTMT_EXEC;;5474\n");
UChar ch___0;
  {
    printf("\nSTMT_EXEC;;5476\n");
progress_in = (Bool)0;
    printf("\nSTMT_EXEC;;5477\n");
if (s->mode == 2)
    {
      {
        printf("\nSTMT_EXEC;;5480\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;5483\n");
if (!(!(s->nblock >= s->nblockMAX)))
          {
            printf("\nSTMT_EXEC;;5485\n");
goto while_break;
          }
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
              printf("\nSTMT_EXEC;;5499\n");
s->inUse[s->state_in_ch] = (Bool)1;
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
                  {
                    printf("\nSTMT_EXEC;;5524\n");
add_pair_to_block(s);
                  }
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
          printf("\nSTMT_EXEC;;5538\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;5539\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;5541\n");
((s->strm)->total_in_hi32)++;
          }
        }
      while_break: /* CIL Label */;
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;5550\n");
while (1)
        {
        while_continue___0: /* CIL Label */;
          printf("\nSTMT_EXEC;;5553\n");
if (!(!(s->nblock >= s->nblockMAX)))
          {
            printf("\nSTMT_EXEC;;5555\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;5557\n");
if ((s->strm)->avail_in == 0U)
          {
            printf("\nSTMT_EXEC;;5559\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;5561\n");
if (s->avail_in_expect == 0U)
          {
            printf("\nSTMT_EXEC;;5563\n");
goto while_break___0;
          }
          printf("\nSTMT_EXEC;;5565\n");
progress_in = (Bool)1;
          printf("\nSTMT_EXEC;;5566\n");
zchh___0 = (UInt32) * ((UChar *)(s->strm)->next_in);
          printf("\nSTMT_EXEC;;5567\n");
if (zchh___0 != s->state_in_ch)
          {
            printf("\nSTMT_EXEC;;5569\n");
if (s->state_in_len == 1)
            {
              printf("\nSTMT_EXEC;;5571\n");
ch___0 = (UChar)s->state_in_ch;
              printf("\nSTMT_EXEC;;5572\n");
s->blockCRC = (s->blockCRC << 8) ^ BZ2_crc32Table[(s->blockCRC >> 24) ^ (unsigned int)ch___0];
              printf("\nSTMT_EXEC;;5573\n");
s->inUse[s->state_in_ch] = (Bool)1;
              printf("\nSTMT_EXEC;;5574\n");
*(s->block + s->nblock) = ch___0;
              printf("\nSTMT_EXEC;;5575\n");
(s->nblock)++;
              printf("\nSTMT_EXEC;;5576\n");
s->state_in_ch = zchh___0;
            }
            else
            {
              printf("\nSTMT_EXEC;;5580\n");
goto _L___2;
            }
          }
          else
          {
          _L___2:
            {
printf("\nSTMT_EXEC;;5586\n");
if (zchh___0 != s->state_in_ch)
            {
              printf("\nSTMT_EXEC;;5588\n");
goto _L___1;
            }
            else
            {
              printf("\nSTMT_EXEC;;5592\n");
if (s->state_in_len == 255)
              {
              _L___1:
                {
printf("\nSTMT_EXEC;;5595\n");
if (s->state_in_ch < 256U)
                {
                  {
                    printf("\nSTMT_EXEC;;5598\n");
add_pair_to_block(s);
                  }
                }
}

                printf("\nSTMT_EXEC;;5601\n");
s->state_in_ch = zchh___0;
                printf("\nSTMT_EXEC;;5602\n");
s->state_in_len = 1;
              }
              else
              {
                printf("\nSTMT_EXEC;;5606\n");
(s->state_in_len)++;
              }
            }
}

          }
          printf("\nSTMT_EXEC;;5610\n");
((s->strm)->next_in)++;
          printf("\nSTMT_EXEC;;5611\n");
((s->strm)->avail_in)--;
          printf("\nSTMT_EXEC;;5612\n");
((s->strm)->total_in_lo32)++;
          printf("\nSTMT_EXEC;;5613\n");
if ((s->strm)->total_in_lo32 == 0U)
          {
            printf("\nSTMT_EXEC;;5615\n");
((s->strm)->total_in_hi32)++;
          }
          printf("\nSTMT_EXEC;;5617\n");
(s->avail_in_expect)--;
        }
      while_break___0: /* CIL Label */;
      }
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
    printf("\nSTMT_EXEC;;5629\n");
progress_out = (Bool)0;
    {
      printf("\nSTMT_EXEC;;5631\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;5634\n");
if (!(!((s->strm)->avail_out == 0U)))
        {
          printf("\nSTMT_EXEC;;5636\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5638\n");
if (s->state_out_pos >= s->numZ)
        {
          printf("\nSTMT_EXEC;;5640\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;5642\n");
progress_out = (Bool)1;
        printf("\nSTMT_EXEC;;5643\n");
*((s->strm)->next_out) = (char)*(s->zbits + s->state_out_pos);
        printf("\nSTMT_EXEC;;5644\n");
(s->state_out_pos)++;
        printf("\nSTMT_EXEC;;5645\n");
((s->strm)->avail_out)--;
        printf("\nSTMT_EXEC;;5646\n");
((s->strm)->next_out)++;
        printf("\nSTMT_EXEC;;5647\n");
((s->strm)->total_out_lo32)++;
        printf("\nSTMT_EXEC;;5648\n");
if ((s->strm)->total_out_lo32 == 0U)
        {
          printf("\nSTMT_EXEC;;5650\n");
((s->strm)->total_out_hi32)++;
        }
      }
    while_break: /* CIL Label */;
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
  printf("\nSTMT_EXEC;;5661\n");
Bool progress_out;
  printf("\nSTMT_EXEC;;5662\n");
EState *s;
  printf("\nSTMT_EXEC;;5663\n");
Bool tmp;
  printf("\nSTMT_EXEC;;5664\n");
Bool tmp___0;
  printf("\nSTMT_EXEC;;5665\n");
Bool tmp___1;
  printf("\nSTMT_EXEC;;5666\n");
Bool tmp___2;
  printf("\nSTMT_EXEC;;5667\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;5669\n");
progress_in = (Bool)0;
    printf("\nSTMT_EXEC;;5670\n");
progress_out = (Bool)0;
    printf("\nSTMT_EXEC;;5671\n");
s = (EState *)strm->state;
    {
      printf("\nSTMT_EXEC;;5673\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;5676\n");
if (s->state == 1)
        {
          {
            printf("\nSTMT_EXEC;;5679\n");
tmp = copy_output_until_stop(s);
            printf("\nSTMT_EXEC;;5680\n");
progress_out = (Bool)((int)progress_out | (int)tmp);
          }
          printf("\nSTMT_EXEC;;5682\n");
if (s->state_out_pos < s->numZ)
          {
            printf("\nSTMT_EXEC;;5684\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;5686\n");
if (s->mode == 4)
          {
            printf("\nSTMT_EXEC;;5688\n");
if (s->avail_in_expect == 0U)
            {
              {
                printf("\nSTMT_EXEC;;5691\n");
tmp___0 = isempty_RL(s);
              }
              printf("\nSTMT_EXEC;;5693\n");
if (tmp___0)
              {
                printf("\nSTMT_EXEC;;5695\n");
goto while_break;
              }
            }
          }
          {
            printf("\nSTMT_EXEC;;5700\n");
prepare_new_block(s);
            printf("\nSTMT_EXEC;;5701\n");
s->state = 2;
          }
          printf("\nSTMT_EXEC;;5703\n");
if (s->mode == 3)
          {
            printf("\nSTMT_EXEC;;5705\n");
if (s->avail_in_expect == 0U)
            {
              {
                printf("\nSTMT_EXEC;;5708\n");
tmp___1 = isempty_RL(s);
              }
              printf("\nSTMT_EXEC;;5710\n");
if (tmp___1)
              {
                printf("\nSTMT_EXEC;;5712\n");
goto while_break;
              }
            }
          }
        }
        printf("\nSTMT_EXEC;;5717\n");
if (s->state == 2)
        {
          {
            printf("\nSTMT_EXEC;;5720\n");
tmp___2 = copy_input_until_stop(s);
            printf("\nSTMT_EXEC;;5721\n");
progress_in = (Bool)((int)progress_in | (int)tmp___2);
          }
          printf("\nSTMT_EXEC;;5723\n");
if (s->mode != 2)
          {
            printf("\nSTMT_EXEC;;5725\n");
if (s->avail_in_expect == 0U)
            {
              {
                printf("\nSTMT_EXEC;;5728\n");
flush_RL(s);
                printf("\nSTMT_EXEC;;5729\n");
BZ2_compressBlock(s, (Bool)(s->mode == 4));
                printf("\nSTMT_EXEC;;5730\n");
s->state = 1;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;5735\n");
goto _L;
            }
          }
          else
          {
          _L:
            {
printf("\nSTMT_EXEC;;5741\n");
if (s->nblock >= s->nblockMAX)
            {
              {
                printf("\nSTMT_EXEC;;5744\n");
BZ2_compressBlock(s, (Bool)0);
                printf("\nSTMT_EXEC;;5745\n");
s->state = 1;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;5750\n");
if ((s->strm)->avail_in == 0U)
              {
                printf("\nSTMT_EXEC;;5752\n");
goto while_break;
              }
            }
}

          }
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;5760\n");
if (progress_in)
    {
      printf("\nSTMT_EXEC;;5762\n");
tmp___3 = 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;5766\n");
if (progress_out)
      {
        printf("\nSTMT_EXEC;;5768\n");
tmp___3 = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;5772\n");
tmp___3 = 0;
      }
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
  printf("\nSTMT_EXEC;;5783\n");
Bool tmp___0;
  printf("\nSTMT_EXEC;;5784\n");
Bool tmp___1;
  {
    printf("\nSTMT_EXEC;;5786\n");
if ((unsigned long)strm == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5788\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;5790\n");
s = (EState *)strm->state;
    printf("\nSTMT_EXEC;;5791\n");
if ((unsigned long)s == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5793\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;5795\n");
if ((unsigned long)s->strm != (unsigned long)strm)
    {
      printf("\nSTMT_EXEC;;5797\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
  preswitch:
  {
    printf("\nSTMT_EXEC;;5801\n");
if (s->mode == 1)
    {
      printf("\nSTMT_EXEC;;5803\n");
goto case_1;
    }
    printf("\nSTMT_EXEC;;5805\n");
if (s->mode == 2)
    {
      printf("\nSTMT_EXEC;;5807\n");
goto case_2;
    }
    printf("\nSTMT_EXEC;;5809\n");
if (s->mode == 3)
    {
      printf("\nSTMT_EXEC;;5811\n");
goto case_3;
    }
    printf("\nSTMT_EXEC;;5813\n");
if (s->mode == 4)
    {
      printf("\nSTMT_EXEC;;5815\n");
goto case_4;
    }
    printf("\nSTMT_EXEC;;5817\n");
goto switch_break;
  case_1: /* CIL Label */
    {
printf("\nSTMT_EXEC;;5819\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
}

  case_2: /* CIL Label */
    {
printf("\nSTMT_EXEC;;5821\n");
if (action == 0)
    {
      {
        printf("\nSTMT_EXEC;;5824\n");
progress = handle_compress(strm);
      }
      printf("\nSTMT_EXEC;;5826\n");
if (progress)
      {
        printf("\nSTMT_EXEC;;5828\n");
tmp = 1;
      }
      else
      {
        printf("\nSTMT_EXEC;;5832\n");
tmp = -2;
      }
      printf("\nSTMT_EXEC;;5834\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
    }
    else
    {
      printf("\nSTMT_EXEC;;5838\n");
if (action == 1)
      {
        printf("\nSTMT_EXEC;;5840\n");
s->avail_in_expect = strm->avail_in;
        printf("\nSTMT_EXEC;;5841\n");
s->mode = 3;
        printf("\nSTMT_EXEC;;5842\n");
goto preswitch;
      }
      else
      {
        printf("\nSTMT_EXEC;;5846\n");
if (action == 2)
        {
          printf("\nSTMT_EXEC;;5848\n");
s->avail_in_expect = strm->avail_in;
          printf("\nSTMT_EXEC;;5849\n");
s->mode = 4;
          printf("\nSTMT_EXEC;;5850\n");
goto preswitch;
        }
        else
        {
          printf("\nSTMT_EXEC;;5854\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
        }
      }
    }
}

  case_3: /* CIL Label */
    {
printf("\nSTMT_EXEC;;5859\n");
if (action != 1)
    {
      printf("\nSTMT_EXEC;;5861\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
}

    printf("\nSTMT_EXEC;;5863\n");
if (s->avail_in_expect != (s->strm)->avail_in)
    {
      printf("\nSTMT_EXEC;;5865\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    {
      printf("\nSTMT_EXEC;;5868\n");
progress = handle_compress(strm);
    }
    printf("\nSTMT_EXEC;;5870\n");
if (s->avail_in_expect > 0U)
    {
      printf("\nSTMT_EXEC;;5872\n");
printf("\nFUNC_RETURN;;\n");
return (2);
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;5877\n");
tmp___0 = isempty_RL(s);
      }
      printf("\nSTMT_EXEC;;5879\n");
if (tmp___0)
      {
        printf("\nSTMT_EXEC;;5881\n");
if (s->state_out_pos < s->numZ)
        {
          printf("\nSTMT_EXEC;;5883\n");
printf("\nFUNC_RETURN;;\n");
return (2);
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;5888\n");
printf("\nFUNC_RETURN;;\n");
return (2);
      }
    }
    printf("\nSTMT_EXEC;;5891\n");
s->mode = 2;
    printf("\nSTMT_EXEC;;5892\n");
printf("\nFUNC_RETURN;;\n");
return (1);
  case_4: /* CIL Label */
    {
printf("\nSTMT_EXEC;;5894\n");
if (action != 2)
    {
      printf("\nSTMT_EXEC;;5896\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
}

    printf("\nSTMT_EXEC;;5898\n");
if (s->avail_in_expect != (s->strm)->avail_in)
    {
      printf("\nSTMT_EXEC;;5900\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    {
      printf("\nSTMT_EXEC;;5903\n");
progress = handle_compress(strm);
    }
    printf("\nSTMT_EXEC;;5905\n");
if (!progress)
    {
      printf("\nSTMT_EXEC;;5907\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
    }
    printf("\nSTMT_EXEC;;5909\n");
if (s->avail_in_expect > 0U)
    {
      printf("\nSTMT_EXEC;;5911\n");
printf("\nFUNC_RETURN;;\n");
return (3);
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;5916\n");
tmp___1 = isempty_RL(s);
      }
      printf("\nSTMT_EXEC;;5918\n");
if (tmp___1)
      {
        printf("\nSTMT_EXEC;;5920\n");
if (s->state_out_pos < s->numZ)
        {
          printf("\nSTMT_EXEC;;5922\n");
printf("\nFUNC_RETURN;;\n");
return (3);
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;5927\n");
printf("\nFUNC_RETURN;;\n");
return (3);
      }
    }
    printf("\nSTMT_EXEC;;5930\n");
s->mode = 1;
    printf("\nSTMT_EXEC;;5931\n");
printf("\nFUNC_RETURN;;\n");
return (4);
  switch_break: /* CIL Label */;
  }
    printf("\nSTMT_EXEC;;5934\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzCompressEnd(bz_stream *strm)
{
  printf("\nFUNC_CALL;BZ2_bzCompressEnd(bz_stream *);\n");
printf("\nSTMT_EXEC;;5939\n");
EState *s;
  {
    printf("\nSTMT_EXEC;;5941\n");
if ((unsigned long)strm == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5943\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;5945\n");
s = (EState *)strm->state;
    printf("\nSTMT_EXEC;;5946\n");
if ((unsigned long)s == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5948\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;5950\n");
if ((unsigned long)s->strm != (unsigned long)strm)
    {
      printf("\nSTMT_EXEC;;5952\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;5954\n");
if ((unsigned long)s->arr1 != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;5957\n");
(*(strm->bzfree))(strm->opaque, (void *)s->arr1);
      }
    }
    printf("\nSTMT_EXEC;;5960\n");
if ((unsigned long)s->arr2 != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;5963\n");
(*(strm->bzfree))(strm->opaque, (void *)s->arr2);
      }
    }
    printf("\nSTMT_EXEC;;5966\n");
if ((unsigned long)s->ftab != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;5969\n");
(*(strm->bzfree))(strm->opaque, (void *)s->ftab);
      }
    }
    {
      printf("\nSTMT_EXEC;;5973\n");
(*(strm->bzfree))(strm->opaque, strm->state);
      printf("\nSTMT_EXEC;;5974\n");
strm->state = (void *)0;
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
  printf("\nSTMT_EXEC;;5982\n");
int tmp;
  {
    {
      printf("\nSTMT_EXEC;;5985\n");
tmp = bz_config_ok();
    }
    printf("\nSTMT_EXEC;;5987\n");
if (!tmp)
    {
      printf("\nSTMT_EXEC;;5989\n");
printf("\nFUNC_RETURN;;\n");
return (-9);
    }
    printf("\nSTMT_EXEC;;5991\n");
if ((unsigned long)strm == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;5993\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;5995\n");
if (small != 0)
    {
      printf("\nSTMT_EXEC;;5997\n");
if (small != 1)
      {
        printf("\nSTMT_EXEC;;5999\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
      }
    }
    printf("\nSTMT_EXEC;;6002\n");
if (verbosity___0 < 0)
    {
      printf("\nSTMT_EXEC;;6004\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    else
    {
      printf("\nSTMT_EXEC;;6008\n");
if (verbosity___0 > 4)
      {
        printf("\nSTMT_EXEC;;6010\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
      }
    }
    printf("\nSTMT_EXEC;;6013\n");
if ((unsigned long)strm->bzalloc == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6015\n");
strm->bzalloc = &default_bzalloc;
    }
    printf("\nSTMT_EXEC;;6017\n");
if ((unsigned long)strm->bzfree == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6019\n");
strm->bzfree = &default_bzfree;
    }
    {
      printf("\nSTMT_EXEC;;6022\n");
s = (DState *)(*(strm->bzalloc))(strm->opaque, (int)sizeof(DState), 1);
    }
    printf("\nSTMT_EXEC;;6024\n");
if ((unsigned long)s == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6026\n");
printf("\nFUNC_RETURN;;\n");
return (-3);
    }
    printf("\nSTMT_EXEC;;6028\n");
s->strm = strm;
    printf("\nSTMT_EXEC;;6029\n");
strm->state = (void *)s;
    printf("\nSTMT_EXEC;;6030\n");
s->state = 10;
    printf("\nSTMT_EXEC;;6031\n");
s->bsLive = 0;
    printf("\nSTMT_EXEC;;6032\n");
s->bsBuff = (UInt32)0;
    printf("\nSTMT_EXEC;;6033\n");
s->calculatedCombinedCRC = (UInt32)0;
    printf("\nSTMT_EXEC;;6034\n");
strm->total_in_lo32 = 0U;
    printf("\nSTMT_EXEC;;6035\n");
strm->total_in_hi32 = 0U;
    printf("\nSTMT_EXEC;;6036\n");
strm->total_out_lo32 = 0U;
    printf("\nSTMT_EXEC;;6037\n");
strm->total_out_hi32 = 0U;
    printf("\nSTMT_EXEC;;6038\n");
s->smallDecompress = (Bool)small;
    printf("\nSTMT_EXEC;;6039\n");
s->ll4 = (UChar *)((void *)0);
    printf("\nSTMT_EXEC;;6040\n");
s->ll16 = (UInt16 *)((void *)0);
    printf("\nSTMT_EXEC;;6041\n");
s->tt = (UInt32 *)((void *)0);
    printf("\nSTMT_EXEC;;6042\n");
s->currBlockNo = 0;
    printf("\nSTMT_EXEC;;6043\n");
s->verbosity = verbosity___0;
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
  printf("\nSTMT_EXEC;;6050\n");
int tmp;
  printf("\nSTMT_EXEC;;6051\n");
int tmp___0;
  printf("\nSTMT_EXEC;;6052\n");
int tmp___1;
  printf("\nSTMT_EXEC;;6053\n");
int tmp___2;
  printf("\nSTMT_EXEC;;6054\n");
int tmp___3;
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
  printf("\nSTMT_EXEC;;6065\n");
UInt32 avail_out_INIT;
  printf("\nSTMT_EXEC;;6066\n");
Int32 s_save_nblockPP;
  printf("\nSTMT_EXEC;;6067\n");
unsigned int total_out_lo32_old;
  {
    printf("\nSTMT_EXEC;;6069\n");
if (s->blockRandomised)
    {
      {
        printf("\nSTMT_EXEC;;6072\n");
while (1)
        {
        while_continue: /* CIL Label */;
          {
            printf("\nSTMT_EXEC;;6076\n");
while (1)
            {
            while_continue___0: /* CIL Label */;
              printf("\nSTMT_EXEC;;6079\n");
if ((s->strm)->avail_out == 0U)
              {
                printf("\nSTMT_EXEC;;6081\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
              }
              printf("\nSTMT_EXEC;;6083\n");
if (s->state_out_len == 0)
              {
                printf("\nSTMT_EXEC;;6085\n");
goto while_break___0;
              }
              printf("\nSTMT_EXEC;;6087\n");
*((UChar *)(s->strm)->next_out) = s->state_out_ch;
              printf("\nSTMT_EXEC;;6088\n");
s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ (unsigned int)s->state_out_ch];
              printf("\nSTMT_EXEC;;6089\n");
(s->state_out_len)--;
              printf("\nSTMT_EXEC;;6090\n");
((s->strm)->next_out)++;
              printf("\nSTMT_EXEC;;6091\n");
((s->strm)->avail_out)--;
              printf("\nSTMT_EXEC;;6092\n");
((s->strm)->total_out_lo32)++;
              printf("\nSTMT_EXEC;;6093\n");
if ((s->strm)->total_out_lo32 == 0U)
              {
                printf("\nSTMT_EXEC;;6095\n");
((s->strm)->total_out_hi32)++;
              }
            }
          while_break___0: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;6100\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6102\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
          }
          printf("\nSTMT_EXEC;;6104\n");
if (s->nblock_used > s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6106\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6108\n");
s->state_out_len = 1;
          printf("\nSTMT_EXEC;;6109\n");
s->state_out_ch = (UChar)s->k0;
          printf("\nSTMT_EXEC;;6110\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6112\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6114\n");
s->tPos = *(s->tt + s->tPos);
          printf("\nSTMT_EXEC;;6115\n");
k1 = (UChar)(s->tPos & 255U);
          printf("\nSTMT_EXEC;;6116\n");
s->tPos >>= 8;
          printf("\nSTMT_EXEC;;6117\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6119\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6120\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6121\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6123\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6126\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6127\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6129\n");
tmp = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6133\n");
tmp = 0;
          }
          printf("\nSTMT_EXEC;;6135\n");
k1 = (UChar)((int)k1 ^ tmp);
          printf("\nSTMT_EXEC;;6136\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6137\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6139\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6141\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6143\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6144\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6146\n");
s->state_out_len = 2;
          printf("\nSTMT_EXEC;;6147\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6149\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6151\n");
s->tPos = *(s->tt + s->tPos);
          printf("\nSTMT_EXEC;;6152\n");
k1 = (UChar)(s->tPos & 255U);
          printf("\nSTMT_EXEC;;6153\n");
s->tPos >>= 8;
          printf("\nSTMT_EXEC;;6154\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6156\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6157\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6158\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6160\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6163\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6164\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6166\n");
tmp___0 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6170\n");
tmp___0 = 0;
          }
          printf("\nSTMT_EXEC;;6172\n");
k1 = (UChar)((int)k1 ^ tmp___0);
          printf("\nSTMT_EXEC;;6173\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6174\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6176\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6178\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6180\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6181\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6183\n");
s->state_out_len = 3;
          printf("\nSTMT_EXEC;;6184\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6186\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6188\n");
s->tPos = *(s->tt + s->tPos);
          printf("\nSTMT_EXEC;;6189\n");
k1 = (UChar)(s->tPos & 255U);
          printf("\nSTMT_EXEC;;6190\n");
s->tPos >>= 8;
          printf("\nSTMT_EXEC;;6191\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6193\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6194\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6195\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6197\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6200\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6201\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6203\n");
tmp___1 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6207\n");
tmp___1 = 0;
          }
          printf("\nSTMT_EXEC;;6209\n");
k1 = (UChar)((int)k1 ^ tmp___1);
          printf("\nSTMT_EXEC;;6210\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6211\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6213\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6215\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6217\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6218\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6220\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6222\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6224\n");
s->tPos = *(s->tt + s->tPos);
          printf("\nSTMT_EXEC;;6225\n");
k1 = (UChar)(s->tPos & 255U);
          printf("\nSTMT_EXEC;;6226\n");
s->tPos >>= 8;
          printf("\nSTMT_EXEC;;6227\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6229\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6230\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6231\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6233\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6236\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6237\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6239\n");
tmp___2 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6243\n");
tmp___2 = 0;
          }
          printf("\nSTMT_EXEC;;6245\n");
k1 = (UChar)((int)k1 ^ tmp___2);
          printf("\nSTMT_EXEC;;6246\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6247\n");
s->state_out_len = (Int32)k1 + 4;
          printf("\nSTMT_EXEC;;6248\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6250\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6252\n");
s->tPos = *(s->tt + s->tPos);
          printf("\nSTMT_EXEC;;6253\n");
s->k0 = (Int32)((UChar)(s->tPos & 255U));
          printf("\nSTMT_EXEC;;6254\n");
s->tPos >>= 8;
          printf("\nSTMT_EXEC;;6255\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6257\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6258\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6259\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6261\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6264\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6265\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6267\n");
tmp___3 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6271\n");
tmp___3 = 0;
          }
          printf("\nSTMT_EXEC;;6273\n");
s->k0 ^= tmp___3;
          printf("\nSTMT_EXEC;;6274\n");
(s->nblock_used)++;
        }
      while_break: /* CIL Label */;
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;6281\n");
c_calculatedBlockCRC = s->calculatedBlockCRC;
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
      printf("\nSTMT_EXEC;;6290\n");
ro_blockSize100k = s->blockSize100k;
      printf("\nSTMT_EXEC;;6291\n");
avail_out_INIT = cs_avail_out;
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
              while_continue___2: /* CIL Label */;
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
                printf("\nSTMT_EXEC;;6312\n");
c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ (unsigned int)c_state_out_ch];
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
              printf("\nSTMT_EXEC;;6322\n");
c_state_out_len = 1;
              printf("\nSTMT_EXEC;;6323\n");
goto return_notr;
            }
}

            printf("\nSTMT_EXEC;;6325\n");
*((UChar *)cs_next_out) = c_state_out_ch;
            printf("\nSTMT_EXEC;;6326\n");
c_calculatedBlockCRC = (c_calculatedBlockCRC << 8) ^ BZ2_crc32Table[(c_calculatedBlockCRC >> 24) ^ (unsigned int)c_state_out_ch];
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
          printf("\nSTMT_EXEC;;6340\n");
if (c_tPos >= 100000U * (UInt32)ro_blockSize100k)
          {
            printf("\nSTMT_EXEC;;6342\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
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
          printf("\nSTMT_EXEC;;6353\n");
if (c_nblock_used == s_save_nblockPP)
          {
            printf("\nSTMT_EXEC;;6355\n");
goto s_state_out_len_eq_one;
          }
          printf("\nSTMT_EXEC;;6357\n");
c_state_out_len = 2;
          printf("\nSTMT_EXEC;;6358\n");
if (c_tPos >= 100000U * (UInt32)ro_blockSize100k)
          {
            printf("\nSTMT_EXEC;;6360\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6362\n");
c_tPos = *(c_tt + c_tPos);
          printf("\nSTMT_EXEC;;6363\n");
k1 = (UChar)(c_tPos & 255U);
          printf("\nSTMT_EXEC;;6364\n");
c_tPos >>= 8;
          printf("\nSTMT_EXEC;;6365\n");
c_nblock_used++;
          printf("\nSTMT_EXEC;;6366\n");
if (c_nblock_used == s_save_nblockPP)
          {
            printf("\nSTMT_EXEC;;6368\n");
goto while_continue___1;
          }
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
          printf("\nSTMT_EXEC;;6376\n");
if (c_tPos >= 100000U * (UInt32)ro_blockSize100k)
          {
            printf("\nSTMT_EXEC;;6378\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6380\n");
c_tPos = *(c_tt + c_tPos);
          printf("\nSTMT_EXEC;;6381\n");
k1 = (UChar)(c_tPos & 255U);
          printf("\nSTMT_EXEC;;6382\n");
c_tPos >>= 8;
          printf("\nSTMT_EXEC;;6383\n");
c_nblock_used++;
          printf("\nSTMT_EXEC;;6384\n");
if (c_nblock_used == s_save_nblockPP)
          {
            printf("\nSTMT_EXEC;;6386\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6388\n");
if ((int)k1 != c_k0)
          {
            printf("\nSTMT_EXEC;;6390\n");
c_k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6391\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6393\n");
if (c_tPos >= 100000U * (UInt32)ro_blockSize100k)
          {
            printf("\nSTMT_EXEC;;6395\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
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
          printf("\nSTMT_EXEC;;6402\n");
if (c_tPos >= 100000U * (UInt32)ro_blockSize100k)
          {
            printf("\nSTMT_EXEC;;6404\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6406\n");
c_tPos = *(c_tt + c_tPos);
          printf("\nSTMT_EXEC;;6407\n");
c_k0 = (Int32)((UChar)(c_tPos & 255U));
          printf("\nSTMT_EXEC;;6408\n");
c_tPos >>= 8;
          printf("\nSTMT_EXEC;;6409\n");
c_nblock_used++;
        }
      while_break___1: /* CIL Label */;
      }
    return_notr:
      {
printf("\nSTMT_EXEC;;6414\n");
total_out_lo32_old = (s->strm)->total_out_lo32;
}

      printf("\nSTMT_EXEC;;6415\n");
(s->strm)->total_out_lo32 += avail_out_INIT - cs_avail_out;
      printf("\nSTMT_EXEC;;6416\n");
if ((s->strm)->total_out_lo32 < total_out_lo32_old)
      {
        printf("\nSTMT_EXEC;;6418\n");
((s->strm)->total_out_hi32)++;
      }
      printf("\nSTMT_EXEC;;6420\n");
s->calculatedBlockCRC = c_calculatedBlockCRC;
      printf("\nSTMT_EXEC;;6421\n");
s->state_out_ch = c_state_out_ch;
      printf("\nSTMT_EXEC;;6422\n");
s->state_out_len = c_state_out_len;
      printf("\nSTMT_EXEC;;6423\n");
s->nblock_used = c_nblock_used;
      printf("\nSTMT_EXEC;;6424\n");
s->k0 = c_k0;
      printf("\nSTMT_EXEC;;6425\n");
s->tt = c_tt;
      printf("\nSTMT_EXEC;;6426\n");
s->tPos = c_tPos;
      printf("\nSTMT_EXEC;;6427\n");
(s->strm)->next_out = cs_next_out;
      printf("\nSTMT_EXEC;;6428\n");
(s->strm)->avail_out = cs_avail_out;
    }
    printf("\nSTMT_EXEC;;6430\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
Int32 BZ2_indexIntoF(Int32 indx, Int32 *cftab)
{
  printf("\nFUNC_CALL;BZ2_indexIntoF(Int32,Int32 *);\n");
printf("\nSTMT_EXEC;;6435\n");
Int32 nb;
  printf("\nSTMT_EXEC;;6436\n");
Int32 na;
  printf("\nSTMT_EXEC;;6437\n");
Int32 mid;
  {
    printf("\nSTMT_EXEC;;6439\n");
nb = 0;
    printf("\nSTMT_EXEC;;6440\n");
na = 256;
    {
      printf("\nSTMT_EXEC;;6442\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;6445\n");
mid = (nb + na) >> 1;
        printf("\nSTMT_EXEC;;6446\n");
if (indx >= *(cftab + mid))
        {
          printf("\nSTMT_EXEC;;6448\n");
nb = mid;
        }
        else
        {
          printf("\nSTMT_EXEC;;6452\n");
na = mid;
        }
        printf("\nSTMT_EXEC;;6454\n");
if (!(na - nb != 1))
        {
          printf("\nSTMT_EXEC;;6456\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;6461\n");
printf("\nFUNC_RETURN;;\n");
return (nb);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool unRLE_obuf_to_output_SMALL(DState *s)
{
  printf("\nFUNC_CALL;unRLE_obuf_to_output_SMALL(DState *);\n");
printf("\nSTMT_EXEC;;6466\n");
UChar k1;
  printf("\nSTMT_EXEC;;6467\n");
int tmp;
  printf("\nSTMT_EXEC;;6468\n");
int tmp___0;
  printf("\nSTMT_EXEC;;6469\n");
int tmp___1;
  printf("\nSTMT_EXEC;;6470\n");
int tmp___2;
  printf("\nSTMT_EXEC;;6471\n");
int tmp___3;
  {
    printf("\nSTMT_EXEC;;6473\n");
if (s->blockRandomised)
    {
      {
        printf("\nSTMT_EXEC;;6476\n");
while (1)
        {
        while_continue: /* CIL Label */;
          {
            printf("\nSTMT_EXEC;;6480\n");
while (1)
            {
            while_continue___0: /* CIL Label */;
              printf("\nSTMT_EXEC;;6483\n");
if ((s->strm)->avail_out == 0U)
              {
                printf("\nSTMT_EXEC;;6485\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
              }
              printf("\nSTMT_EXEC;;6487\n");
if (s->state_out_len == 0)
              {
                printf("\nSTMT_EXEC;;6489\n");
goto while_break___0;
              }
              printf("\nSTMT_EXEC;;6491\n");
*((UChar *)(s->strm)->next_out) = s->state_out_ch;
              printf("\nSTMT_EXEC;;6492\n");
s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ (unsigned int)s->state_out_ch];
              printf("\nSTMT_EXEC;;6493\n");
(s->state_out_len)--;
              printf("\nSTMT_EXEC;;6494\n");
((s->strm)->next_out)++;
              printf("\nSTMT_EXEC;;6495\n");
((s->strm)->avail_out)--;
              printf("\nSTMT_EXEC;;6496\n");
((s->strm)->total_out_lo32)++;
              printf("\nSTMT_EXEC;;6497\n");
if ((s->strm)->total_out_lo32 == 0U)
              {
                printf("\nSTMT_EXEC;;6499\n");
((s->strm)->total_out_hi32)++;
              }
            }
          while_break___0: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;6504\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6506\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
          }
          printf("\nSTMT_EXEC;;6508\n");
if (s->nblock_used > s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6510\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6512\n");
s->state_out_len = 1;
          printf("\nSTMT_EXEC;;6513\n");
s->state_out_ch = (UChar)s->k0;
          printf("\nSTMT_EXEC;;6514\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6516\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6519\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6520\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
          }
          printf("\nSTMT_EXEC;;6522\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6524\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6525\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6526\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6528\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6531\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6532\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6534\n");
tmp = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6538\n");
tmp = 0;
          }
          printf("\nSTMT_EXEC;;6540\n");
k1 = (UChar)((int)k1 ^ tmp);
          printf("\nSTMT_EXEC;;6541\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6542\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6544\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6546\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6548\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6549\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6551\n");
s->state_out_len = 2;
          printf("\nSTMT_EXEC;;6552\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6554\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6557\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6558\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
          }
          printf("\nSTMT_EXEC;;6560\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6562\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6563\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6564\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6566\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6569\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6570\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6572\n");
tmp___0 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6576\n");
tmp___0 = 0;
          }
          printf("\nSTMT_EXEC;;6578\n");
k1 = (UChar)((int)k1 ^ tmp___0);
          printf("\nSTMT_EXEC;;6579\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6580\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6582\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6584\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6586\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6587\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6589\n");
s->state_out_len = 3;
          printf("\nSTMT_EXEC;;6590\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6592\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6595\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6596\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
          }
          printf("\nSTMT_EXEC;;6598\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6600\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6601\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6602\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6604\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6607\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6608\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6610\n");
tmp___1 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6614\n");
tmp___1 = 0;
          }
          printf("\nSTMT_EXEC;;6616\n");
k1 = (UChar)((int)k1 ^ tmp___1);
          printf("\nSTMT_EXEC;;6617\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6618\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6620\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6622\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6624\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6625\n");
goto while_continue;
          }
          printf("\nSTMT_EXEC;;6627\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6629\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6632\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6633\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
          }
          printf("\nSTMT_EXEC;;6635\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6637\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6638\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6639\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6641\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6644\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6645\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6647\n");
tmp___2 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6651\n");
tmp___2 = 0;
          }
          printf("\nSTMT_EXEC;;6653\n");
k1 = (UChar)((int)k1 ^ tmp___2);
          printf("\nSTMT_EXEC;;6654\n");
(s->nblock_used)++;
          printf("\nSTMT_EXEC;;6655\n");
s->state_out_len = (Int32)k1 + 4;
          printf("\nSTMT_EXEC;;6656\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6658\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6661\n");
s->k0 = BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6662\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
          }
          printf("\nSTMT_EXEC;;6664\n");
if (s->rNToGo == 0)
          {
            printf("\nSTMT_EXEC;;6666\n");
s->rNToGo = BZ2_rNums[s->rTPos];
            printf("\nSTMT_EXEC;;6667\n");
(s->rTPos)++;
            printf("\nSTMT_EXEC;;6668\n");
if (s->rTPos == 512)
            {
              printf("\nSTMT_EXEC;;6670\n");
s->rTPos = 0;
            }
          }
          printf("\nSTMT_EXEC;;6673\n");
(s->rNToGo)--;
          printf("\nSTMT_EXEC;;6674\n");
if (s->rNToGo == 1)
          {
            printf("\nSTMT_EXEC;;6676\n");
tmp___3 = 1;
          }
          else
          {
            printf("\nSTMT_EXEC;;6680\n");
tmp___3 = 0;
          }
          printf("\nSTMT_EXEC;;6682\n");
s->k0 ^= tmp___3;
          printf("\nSTMT_EXEC;;6683\n");
(s->nblock_used)++;
        }
      while_break: /* CIL Label */;
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;6691\n");
while (1)
        {
        while_continue___1: /* CIL Label */;
          {
            printf("\nSTMT_EXEC;;6695\n");
while (1)
            {
            while_continue___2: /* CIL Label */;
              printf("\nSTMT_EXEC;;6698\n");
if ((s->strm)->avail_out == 0U)
              {
                printf("\nSTMT_EXEC;;6700\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
              }
              printf("\nSTMT_EXEC;;6702\n");
if (s->state_out_len == 0)
              {
                printf("\nSTMT_EXEC;;6704\n");
goto while_break___2;
              }
              printf("\nSTMT_EXEC;;6706\n");
*((UChar *)(s->strm)->next_out) = s->state_out_ch;
              printf("\nSTMT_EXEC;;6707\n");
s->calculatedBlockCRC = (s->calculatedBlockCRC << 8) ^ BZ2_crc32Table[(s->calculatedBlockCRC >> 24) ^ (unsigned int)s->state_out_ch];
              printf("\nSTMT_EXEC;;6708\n");
(s->state_out_len)--;
              printf("\nSTMT_EXEC;;6709\n");
((s->strm)->next_out)++;
              printf("\nSTMT_EXEC;;6710\n");
((s->strm)->avail_out)--;
              printf("\nSTMT_EXEC;;6711\n");
((s->strm)->total_out_lo32)++;
              printf("\nSTMT_EXEC;;6712\n");
if ((s->strm)->total_out_lo32 == 0U)
              {
                printf("\nSTMT_EXEC;;6714\n");
((s->strm)->total_out_hi32)++;
              }
            }
          while_break___2: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;6719\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6721\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
          }
          printf("\nSTMT_EXEC;;6723\n");
if (s->nblock_used > s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6725\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          printf("\nSTMT_EXEC;;6727\n");
s->state_out_len = 1;
          printf("\nSTMT_EXEC;;6728\n");
s->state_out_ch = (UChar)s->k0;
          printf("\nSTMT_EXEC;;6729\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6731\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6734\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6735\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
            printf("\nSTMT_EXEC;;6736\n");
(s->nblock_used)++;
          }
          printf("\nSTMT_EXEC;;6738\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6740\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6742\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6744\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6745\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6747\n");
s->state_out_len = 2;
          printf("\nSTMT_EXEC;;6748\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6750\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6753\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6754\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
            printf("\nSTMT_EXEC;;6755\n");
(s->nblock_used)++;
          }
          printf("\nSTMT_EXEC;;6757\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6759\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6761\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6763\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6764\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6766\n");
s->state_out_len = 3;
          printf("\nSTMT_EXEC;;6767\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6769\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6772\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6773\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
            printf("\nSTMT_EXEC;;6774\n");
(s->nblock_used)++;
          }
          printf("\nSTMT_EXEC;;6776\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6778\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6780\n");
if ((int)k1 != s->k0)
          {
            printf("\nSTMT_EXEC;;6782\n");
s->k0 = (Int32)k1;
            printf("\nSTMT_EXEC;;6783\n");
goto while_continue___1;
          }
          printf("\nSTMT_EXEC;;6785\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6787\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6790\n");
k1 = (UChar)BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6791\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
            printf("\nSTMT_EXEC;;6792\n");
(s->nblock_used)++;
            printf("\nSTMT_EXEC;;6793\n");
s->state_out_len = (Int32)k1 + 4;
          }
          printf("\nSTMT_EXEC;;6795\n");
if (s->tPos >= 100000U * (UInt32)s->blockSize100k)
          {
            printf("\nSTMT_EXEC;;6797\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
          }
          {
            printf("\nSTMT_EXEC;;6800\n");
s->k0 = BZ2_indexIntoF((Int32)s->tPos, s->cftab);
            printf("\nSTMT_EXEC;;6801\n");
s->tPos = (UInt32) * (s->ll16 + s->tPos) | ((((UInt32) * (s->ll4 + (s->tPos >> 1)) >> ((s->tPos << 2) & 4U)) & 15U) << 16);
            printf("\nSTMT_EXEC;;6802\n");
(s->nblock_used)++;
          }
        }
      while_break___1: /* CIL Label */;
      }
    }
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
    printf("\nSTMT_EXEC;;6817\n");
if ((unsigned long)strm == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6819\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;6821\n");
s = (DState *)strm->state;
    printf("\nSTMT_EXEC;;6822\n");
if ((unsigned long)s == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6824\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;6826\n");
if ((unsigned long)s->strm != (unsigned long)strm)
    {
      printf("\nSTMT_EXEC;;6828\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    {
      printf("\nSTMT_EXEC;;6831\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;6834\n");
if (s->state == 1)
        {
          printf("\nSTMT_EXEC;;6836\n");
printf("\nFUNC_RETURN;;\n");
return (-1);
        }
        printf("\nSTMT_EXEC;;6838\n");
if (s->state == 2)
        {
          printf("\nSTMT_EXEC;;6840\n");
if (s->smallDecompress)
          {
            {
              printf("\nSTMT_EXEC;;6843\n");
corrupt = unRLE_obuf_to_output_SMALL(s);
            }
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;6849\n");
corrupt = unRLE_obuf_to_output_FAST(s);
            }
          }
          printf("\nSTMT_EXEC;;6852\n");
if (corrupt)
          {
            printf("\nSTMT_EXEC;;6854\n");
printf("\nFUNC_RETURN;;\n");
return (-4);
          }
          printf("\nSTMT_EXEC;;6856\n");
if (s->nblock_used == s->save_nblock + 1)
          {
            printf("\nSTMT_EXEC;;6858\n");
if (s->state_out_len == 0)
            {
              printf("\nSTMT_EXEC;;6860\n");
s->calculatedBlockCRC = ~s->calculatedBlockCRC;
              printf("\nSTMT_EXEC;;6861\n");
if (s->verbosity >= 3)
              {
                {
                  printf("\nSTMT_EXEC;;6864\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " {0x%08x, 0x%08x}", s->storedBlockCRC, s->calculatedBlockCRC);printf("\nFUNC_RETURN;;\n");

                }
              }
              printf("\nSTMT_EXEC;;6867\n");
if (s->verbosity >= 2)
              {
                {
                  printf("\nSTMT_EXEC;;6870\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "]");printf("\nFUNC_RETURN;;\n");

                }
              }
              printf("\nSTMT_EXEC;;6873\n");
if (s->calculatedBlockCRC != s->storedBlockCRC)
              {
                printf("\nSTMT_EXEC;;6875\n");
printf("\nFUNC_RETURN;;\n");
return (-4);
              }
              printf("\nSTMT_EXEC;;6877\n");
s->calculatedCombinedCRC = (s->calculatedCombinedCRC << 1) | (s->calculatedCombinedCRC >> 31);
              printf("\nSTMT_EXEC;;6878\n");
s->calculatedCombinedCRC ^= s->calculatedBlockCRC;
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
          else
          {
            printf("\nSTMT_EXEC;;6888\n");
printf("\nFUNC_RETURN;;\n");
return (0);
          }
        }
        printf("\nSTMT_EXEC;;6891\n");
if (s->state >= 10)
        {
          {
            printf("\nSTMT_EXEC;;6894\n");
tmp = BZ2_decompress(s);
            printf("\nSTMT_EXEC;;6895\n");
r = tmp;
          }
          printf("\nSTMT_EXEC;;6897\n");
if (r == 4)
          {
            printf("\nSTMT_EXEC;;6899\n");
if (s->verbosity >= 3)
            {
              {
                printf("\nSTMT_EXEC;;6902\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                        (char const * /* __restrict  */) "\n    combined CRCs: stored "
                                                         "= 0x%08x, computed = 0x%08x",
                        s->storedCombinedCRC, s->calculatedCombinedCRC);printf("\nFUNC_RETURN;;\n");

              }
            }
            printf("\nSTMT_EXEC;;6908\n");
if (s->calculatedCombinedCRC != s->storedCombinedCRC)
            {
              printf("\nSTMT_EXEC;;6910\n");
printf("\nFUNC_RETURN;;\n");
return (-4);
            }
            printf("\nSTMT_EXEC;;6912\n");
printf("\nFUNC_RETURN;;\n");
return (r);
          }
          printf("\nSTMT_EXEC;;6914\n");
if (s->state != 2)
          {
            printf("\nSTMT_EXEC;;6916\n");
printf("\nFUNC_RETURN;;\n");
return (r);
          }
        }
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;6923\n");
BZ2_bz__AssertH__fail(6001);
    }
    printf("\nSTMT_EXEC;;6925\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
int BZ2_bzDecompressEnd(bz_stream *strm)
{
  printf("\nFUNC_CALL;BZ2_bzDecompressEnd(bz_stream *);\n");
printf("\nSTMT_EXEC;;6930\n");
DState *s;
  {
    printf("\nSTMT_EXEC;;6932\n");
if ((unsigned long)strm == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6934\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;6936\n");
s = (DState *)strm->state;
    printf("\nSTMT_EXEC;;6937\n");
if ((unsigned long)s == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6939\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;6941\n");
if ((unsigned long)s->strm != (unsigned long)strm)
    {
      printf("\nSTMT_EXEC;;6943\n");
printf("\nFUNC_RETURN;;\n");
return (-2);
    }
    printf("\nSTMT_EXEC;;6945\n");
if ((unsigned long)s->tt != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;6948\n");
(*(strm->bzfree))(strm->opaque, (void *)s->tt);
      }
    }
    printf("\nSTMT_EXEC;;6951\n");
if ((unsigned long)s->ll16 != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;6954\n");
(*(strm->bzfree))(strm->opaque, (void *)s->ll16);
      }
    }
    printf("\nSTMT_EXEC;;6957\n");
if ((unsigned long)s->ll4 != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;6960\n");
(*(strm->bzfree))(strm->opaque, (void *)s->ll4);
      }
    }
    {
      printf("\nSTMT_EXEC;;6964\n");
(*(strm->bzfree))(strm->opaque, strm->state);
      printf("\nSTMT_EXEC;;6965\n");
strm->state = (void *)0;
    }
    printf("\nSTMT_EXEC;;6967\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool myfeof(FILE *f)
{
  printf("\nFUNC_CALL;myfeof(FILE *);\n");
printf("\nSTMT_EXEC;;6972\n");
Int32 c;
  printf("\nSTMT_EXEC;;6973\n");
Int32 tmp;
  {
    {
      printf("\nSTMT_EXEC;;6976\n");
printf("\nFUNC_CALL;fgetc(FILE *);\n");
tmp = fgetc(f);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;6977\n");
c = tmp;
    }
    printf("\nSTMT_EXEC;;6979\n");
if (c == -1)
    {
      printf("\nSTMT_EXEC;;6981\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
    }
    {
      printf("\nSTMT_EXEC;;6984\n");
printf("\nFUNC_CALL;ungetc(int,FILE *);\n");
ungetc(c, f);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;6986\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
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
  printf("\nSTMT_EXEC;;6993\n");
int tmp;
  printf("\nSTMT_EXEC;;6994\n");
void *__cil_tmp10;
  {
    printf("\nSTMT_EXEC;;6996\n");
bzf = (bzFile *)((void *)0);
    printf("\nSTMT_EXEC;;6997\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;6999\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7001\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7003\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7005\n");
if ((unsigned long)f == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7007\n");
goto _L___0;
    }
    else
    {
      printf("\nSTMT_EXEC;;7011\n");
if (blockSize100k___0 < 1)
      {
        printf("\nSTMT_EXEC;;7013\n");
goto _L___0;
      }
      else
      {
        printf("\nSTMT_EXEC;;7017\n");
if (blockSize100k___0 > 9)
        {
          printf("\nSTMT_EXEC;;7019\n");
goto _L___0;
        }
        else
        {
          printf("\nSTMT_EXEC;;7023\n");
if (workFactor___0 < 0)
          {
            printf("\nSTMT_EXEC;;7025\n");
goto _L___0;
          }
          else
          {
            printf("\nSTMT_EXEC;;7029\n");
if (workFactor___0 > 250)
            {
              printf("\nSTMT_EXEC;;7031\n");
goto _L___0;
            }
            else
            {
              printf("\nSTMT_EXEC;;7035\n");
if (verbosity___0 < 0)
              {
                printf("\nSTMT_EXEC;;7037\n");
goto _L___0;
              }
              else
              {
                printf("\nSTMT_EXEC;;7041\n");
if (verbosity___0 > 4)
                {
                _L___0:
                  {
printf("\nSTMT_EXEC;;7044\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
                  {
                    printf("\nSTMT_EXEC;;7046\n");
*bzerror = -2;
                  }
}

                  printf("\nSTMT_EXEC;;7048\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
                  {
                    printf("\nSTMT_EXEC;;7050\n");
bzf->lastErr = -2;
                  }
                  printf("\nSTMT_EXEC;;7052\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
                }
              }
            }
          }
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;7061\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(f);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7063\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;7065\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7067\n");
*bzerror = -6;
      }
      printf("\nSTMT_EXEC;;7069\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7071\n");
bzf->lastErr = -6;
      }
      printf("\nSTMT_EXEC;;7073\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    {
      printf("\nSTMT_EXEC;;7076\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
bzf = (bzFile *)malloc(sizeof(bzFile));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7078\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7080\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7082\n");
*bzerror = -3;
      }
      printf("\nSTMT_EXEC;;7084\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7086\n");
bzf->lastErr = -3;
      }
      printf("\nSTMT_EXEC;;7088\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    printf("\nSTMT_EXEC;;7090\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7092\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7094\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7096\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7098\n");
bzf->initialisedOk = (Bool)0;
    printf("\nSTMT_EXEC;;7099\n");
bzf->bufN = 0;
    printf("\nSTMT_EXEC;;7100\n");
bzf->handle = f;
    printf("\nSTMT_EXEC;;7101\n");
bzf->writing = (Bool)1;
    printf("\nSTMT_EXEC;;7102\n");
bzf->strm.bzalloc = (void *(*)(void *, int, int))((void *)0);
    printf("\nSTMT_EXEC;;7103\n");
bzf->strm.bzfree = (void (*)(void *, void *))((void *)0);
    printf("\nSTMT_EXEC;;7104\n");
bzf->strm.opaque = (void *)0;
    printf("\nSTMT_EXEC;;7105\n");
if (workFactor___0 == 0)
    {
      printf("\nSTMT_EXEC;;7107\n");
workFactor___0 = 30;
    }
    {
      printf("\nSTMT_EXEC;;7110\n");
ret = BZ2_bzCompressInit(&bzf->strm, blockSize100k___0, verbosity___0, workFactor___0);
    }
    printf("\nSTMT_EXEC;;7112\n");
if (ret != 0)
    {
      printf("\nSTMT_EXEC;;7114\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7116\n");
*bzerror = ret;
      }
      printf("\nSTMT_EXEC;;7118\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7120\n");
bzf->lastErr = ret;
      }
      {
        printf("\nSTMT_EXEC;;7123\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)bzf);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7125\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    printf("\nSTMT_EXEC;;7127\n");
bzf->strm.avail_in = 0U;
    printf("\nSTMT_EXEC;;7128\n");
bzf->initialisedOk = (Bool)1;
    printf("\nSTMT_EXEC;;7129\n");
printf("\nFUNC_RETURN;;\n");
return ((BZFILE *)bzf);
  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_bzWrite(int *bzerror, BZFILE *b, void *buf, int len)
{
  printf("\nFUNC_CALL;BZ2_bzWrite(int *,BZFILE *,void *,int);\n");
printf("\nSTMT_EXEC;;7134\n");
Int32 n;
  printf("\nSTMT_EXEC;;7135\n");
Int32 n2;
  printf("\nSTMT_EXEC;;7136\n");
Int32 ret;
  printf("\nSTMT_EXEC;;7137\n");
bzFile *bzf;
  printf("\nSTMT_EXEC;;7138\n");
int tmp;
  printf("\nSTMT_EXEC;;7139\n");
int tmp___0;
  {
    printf("\nSTMT_EXEC;;7141\n");
bzf = (bzFile *)b;
    printf("\nSTMT_EXEC;;7142\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7144\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7146\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7148\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7150\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7152\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;7156\n");
if ((unsigned long)buf == (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7158\n");
goto _L;
      }
      else
      {
        printf("\nSTMT_EXEC;;7162\n");
if (len < 0)
        {
        _L:
          {
printf("\nSTMT_EXEC;;7165\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7167\n");
*bzerror = -2;
          }
}

          printf("\nSTMT_EXEC;;7169\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7171\n");
bzf->lastErr = -2;
          }
          printf("\nSTMT_EXEC;;7173\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;7177\n");
if (!bzf->writing)
    {
      printf("\nSTMT_EXEC;;7179\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7181\n");
*bzerror = -1;
      }
      printf("\nSTMT_EXEC;;7183\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7185\n");
bzf->lastErr = -1;
      }
      printf("\nSTMT_EXEC;;7187\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;7190\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7192\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;7194\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7196\n");
*bzerror = -6;
      }
      printf("\nSTMT_EXEC;;7198\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7200\n");
bzf->lastErr = -6;
      }
      printf("\nSTMT_EXEC;;7202\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7204\n");
if (len == 0)
    {
      printf("\nSTMT_EXEC;;7206\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7208\n");
*bzerror = 0;
      }
      printf("\nSTMT_EXEC;;7210\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7212\n");
bzf->lastErr = 0;
      }
      printf("\nSTMT_EXEC;;7214\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7216\n");
bzf->strm.avail_in = (unsigned int)len;
    printf("\nSTMT_EXEC;;7217\n");
bzf->strm.next_in = (char *)buf;
    {
      printf("\nSTMT_EXEC;;7219\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;7223\n");
bzf->strm.avail_out = 5000U;
          printf("\nSTMT_EXEC;;7224\n");
bzf->strm.next_out = bzf->buf;
          printf("\nSTMT_EXEC;;7225\n");
ret = BZ2_bzCompress(&bzf->strm, 0);
        }
        printf("\nSTMT_EXEC;;7227\n");
if (ret != 1)
        {
          printf("\nSTMT_EXEC;;7229\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7231\n");
*bzerror = ret;
          }
          printf("\nSTMT_EXEC;;7233\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7235\n");
bzf->lastErr = ret;
          }
          printf("\nSTMT_EXEC;;7237\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
        printf("\nSTMT_EXEC;;7239\n");
if (bzf->strm.avail_out < 5000U)
        {
          {
            printf("\nSTMT_EXEC;;7242\n");
n = (Int32)(5000U - bzf->strm.avail_out);
            printf("\nSTMT_EXEC;;7243\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
n2 = (Int32)fwrite((void const * /* __restrict  */)((void *)(bzf->buf)), sizeof(UChar), (size_t)n, (FILE * /* __restrict  */) bzf->handle);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;7245\n");
if (n != n2)
          {
            printf("\nSTMT_EXEC;;7247\n");
goto _L___0;
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;7252\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___0 = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;7254\n");
if (tmp___0)
            {
            _L___0:
              {
printf("\nSTMT_EXEC;;7257\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
              {
                printf("\nSTMT_EXEC;;7259\n");
*bzerror = -6;
              }
}

              printf("\nSTMT_EXEC;;7261\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
              {
                printf("\nSTMT_EXEC;;7263\n");
bzf->lastErr = -6;
              }
              printf("\nSTMT_EXEC;;7265\n");
printf("\nFUNC_RETURN;;\n");
return;
            }
          }
        }
        printf("\nSTMT_EXEC;;7269\n");
if (bzf->strm.avail_in == 0U)
        {
          printf("\nSTMT_EXEC;;7271\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7273\n");
*bzerror = 0;
          }
          printf("\nSTMT_EXEC;;7275\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7277\n");
bzf->lastErr = 0;
          }
          printf("\nSTMT_EXEC;;7279\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    while_break: /* CIL Label */;
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
  printf("\nSTMT_EXEC;;7292\n");
int tmp;
  printf("\nSTMT_EXEC;;7293\n");
int tmp___0;
  printf("\nSTMT_EXEC;;7294\n");
int tmp___1;
  printf("\nSTMT_EXEC;;7295\n");
int tmp___2;
  {
    printf("\nSTMT_EXEC;;7297\n");
bzf = (bzFile *)b;
    printf("\nSTMT_EXEC;;7298\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7300\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7302\n");
*bzerror = 0;
      }
      printf("\nSTMT_EXEC;;7304\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7306\n");
bzf->lastErr = 0;
      }
      printf("\nSTMT_EXEC;;7308\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7310\n");
if (!bzf->writing)
    {
      printf("\nSTMT_EXEC;;7312\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7314\n");
*bzerror = -1;
      }
      printf("\nSTMT_EXEC;;7316\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7318\n");
bzf->lastErr = -1;
      }
      printf("\nSTMT_EXEC;;7320\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    {
      printf("\nSTMT_EXEC;;7323\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7325\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;7327\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7329\n");
*bzerror = -6;
      }
      printf("\nSTMT_EXEC;;7331\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7333\n");
bzf->lastErr = -6;
      }
      printf("\nSTMT_EXEC;;7335\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7337\n");
if ((unsigned long)nbytes_in_lo32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7339\n");
*nbytes_in_lo32 = 0U;
    }
    printf("\nSTMT_EXEC;;7341\n");
if ((unsigned long)nbytes_in_hi32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7343\n");
*nbytes_in_hi32 = 0U;
    }
    printf("\nSTMT_EXEC;;7345\n");
if ((unsigned long)nbytes_out_lo32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7347\n");
*nbytes_out_lo32 = 0U;
    }
    printf("\nSTMT_EXEC;;7349\n");
if ((unsigned long)nbytes_out_hi32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7351\n");
*nbytes_out_hi32 = 0U;
    }
    printf("\nSTMT_EXEC;;7353\n");
if (!abandon)
    {
      printf("\nSTMT_EXEC;;7355\n");
if (bzf->lastErr == 0)
      {
        {
          printf("\nSTMT_EXEC;;7358\n");
while (1)
          {
          while_continue: /* CIL Label */;
            {
              printf("\nSTMT_EXEC;;7362\n");
bzf->strm.avail_out = 5000U;
              printf("\nSTMT_EXEC;;7363\n");
bzf->strm.next_out = bzf->buf;
              printf("\nSTMT_EXEC;;7364\n");
ret = BZ2_bzCompress(&bzf->strm, 2);
            }
            printf("\nSTMT_EXEC;;7366\n");
if (ret != 3)
            {
              printf("\nSTMT_EXEC;;7368\n");
if (ret != 4)
              {
                printf("\nSTMT_EXEC;;7370\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
                {
                  printf("\nSTMT_EXEC;;7372\n");
*bzerror = ret;
                }
                printf("\nSTMT_EXEC;;7374\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
                {
                  printf("\nSTMT_EXEC;;7376\n");
bzf->lastErr = ret;
                }
                printf("\nSTMT_EXEC;;7378\n");
printf("\nFUNC_RETURN;;\n");
return;
              }
            }
            printf("\nSTMT_EXEC;;7381\n");
if (bzf->strm.avail_out < 5000U)
            {
              {
                printf("\nSTMT_EXEC;;7384\n");
n = (Int32)(5000U - bzf->strm.avail_out);
                printf("\nSTMT_EXEC;;7385\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
n2 = (Int32)fwrite((void const * /* __restrict  */)((void *)(bzf->buf)), sizeof(UChar), (size_t)n, (FILE * /* __restrict  */) bzf->handle);printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;7387\n");
if (n != n2)
              {
                printf("\nSTMT_EXEC;;7389\n");
goto _L;
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;7394\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___0 = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

                }
                printf("\nSTMT_EXEC;;7396\n");
if (tmp___0)
                {
                _L:
                  {
printf("\nSTMT_EXEC;;7399\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
                  {
                    printf("\nSTMT_EXEC;;7401\n");
*bzerror = -6;
                  }
}

                  printf("\nSTMT_EXEC;;7403\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
                  {
                    printf("\nSTMT_EXEC;;7405\n");
bzf->lastErr = -6;
                  }
                  printf("\nSTMT_EXEC;;7407\n");
printf("\nFUNC_RETURN;;\n");
return;
                }
              }
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
      }
    }
    printf("\nSTMT_EXEC;;7420\n");
if (!abandon)
    {
      {
        printf("\nSTMT_EXEC;;7423\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___2 = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7425\n");
if (!tmp___2)
      {
        {
          printf("\nSTMT_EXEC;;7428\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
fflush(bzf->handle);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;7429\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___1 = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;7431\n");
if (tmp___1)
        {
          printf("\nSTMT_EXEC;;7433\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7435\n");
*bzerror = -6;
          }
          printf("\nSTMT_EXEC;;7437\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7439\n");
bzf->lastErr = -6;
          }
          printf("\nSTMT_EXEC;;7441\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;7445\n");
if ((unsigned long)nbytes_in_lo32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7447\n");
*nbytes_in_lo32 = bzf->strm.total_in_lo32;
    }
    printf("\nSTMT_EXEC;;7449\n");
if ((unsigned long)nbytes_in_hi32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7451\n");
*nbytes_in_hi32 = bzf->strm.total_in_hi32;
    }
    printf("\nSTMT_EXEC;;7453\n");
if ((unsigned long)nbytes_out_lo32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7455\n");
*nbytes_out_lo32 = bzf->strm.total_out_lo32;
    }
    printf("\nSTMT_EXEC;;7457\n");
if ((unsigned long)nbytes_out_hi32 != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7459\n");
*nbytes_out_hi32 = bzf->strm.total_out_hi32;
    }
    printf("\nSTMT_EXEC;;7461\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7463\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7465\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7467\n");
bzf->lastErr = 0;
    }
    {
      printf("\nSTMT_EXEC;;7470\n");
BZ2_bzCompressEnd(&bzf->strm);
      printf("\nSTMT_EXEC;;7471\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)bzf);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7473\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;7480\n");
int tmp;
  printf("\nSTMT_EXEC;;7481\n");
void *__cil_tmp11;
  {
    printf("\nSTMT_EXEC;;7483\n");
bzf = (bzFile *)((void *)0);
    printf("\nSTMT_EXEC;;7484\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7486\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7488\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7490\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7492\n");
if ((unsigned long)f == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7494\n");
goto _L___0;
    }
    else
    {
      printf("\nSTMT_EXEC;;7498\n");
if (small != 0)
      {
        printf("\nSTMT_EXEC;;7500\n");
if (small != 1)
        {
          printf("\nSTMT_EXEC;;7502\n");
goto _L___0;
        }
        else
        {
          printf("\nSTMT_EXEC;;7506\n");
goto _L___2;
        }
      }
      else
      {
      _L___2:
        {
printf("\nSTMT_EXEC;;7512\n");
if (verbosity___0 < 0)
        {
          printf("\nSTMT_EXEC;;7514\n");
goto _L___0;
        }
        else
        {
          printf("\nSTMT_EXEC;;7518\n");
if (verbosity___0 > 4)
          {
            printf("\nSTMT_EXEC;;7520\n");
goto _L___0;
          }
          else
          {
            printf("\nSTMT_EXEC;;7524\n");
if ((unsigned long)unused == (unsigned long)((void *)0))
            {
              printf("\nSTMT_EXEC;;7526\n");
if (nUnused != 0)
              {
                printf("\nSTMT_EXEC;;7528\n");
goto _L___0;
              }
              else
              {
                printf("\nSTMT_EXEC;;7532\n");
goto _L___1;
              }
            }
            else
            {
            _L___1:
              {
printf("\nSTMT_EXEC;;7538\n");
if ((unsigned long)unused != (unsigned long)((void *)0))
              {
                printf("\nSTMT_EXEC;;7540\n");
if (nUnused < 0)
                {
                  printf("\nSTMT_EXEC;;7542\n");
goto _L___0;
                }
                else
                {
                  printf("\nSTMT_EXEC;;7546\n");
if (nUnused > 5000)
                  {
                  _L___0:
                    {
printf("\nSTMT_EXEC;;7549\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
                    {
                      printf("\nSTMT_EXEC;;7551\n");
*bzerror = -2;
                    }
}

                    printf("\nSTMT_EXEC;;7553\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
                    {
                      printf("\nSTMT_EXEC;;7555\n");
bzf->lastErr = -2;
                    }
                    printf("\nSTMT_EXEC;;7557\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
                  }
                }
              }
}

            }
          }
        }
}

      }
    }
    {
      printf("\nSTMT_EXEC;;7567\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(f);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7569\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;7571\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7573\n");
*bzerror = -6;
      }
      printf("\nSTMT_EXEC;;7575\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7577\n");
bzf->lastErr = -6;
      }
      printf("\nSTMT_EXEC;;7579\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    {
      printf("\nSTMT_EXEC;;7582\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
bzf = (bzFile *)malloc(sizeof(bzFile));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7584\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7586\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7588\n");
*bzerror = -3;
      }
      printf("\nSTMT_EXEC;;7590\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7592\n");
bzf->lastErr = -3;
      }
      printf("\nSTMT_EXEC;;7594\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    printf("\nSTMT_EXEC;;7596\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7598\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7600\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7602\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7604\n");
bzf->initialisedOk = (Bool)0;
    printf("\nSTMT_EXEC;;7605\n");
bzf->handle = f;
    printf("\nSTMT_EXEC;;7606\n");
bzf->bufN = 0;
    printf("\nSTMT_EXEC;;7607\n");
bzf->writing = (Bool)0;
    printf("\nSTMT_EXEC;;7608\n");
bzf->strm.bzalloc = (void *(*)(void *, int, int))((void *)0);
    printf("\nSTMT_EXEC;;7609\n");
bzf->strm.bzfree = (void (*)(void *, void *))((void *)0);
    printf("\nSTMT_EXEC;;7610\n");
bzf->strm.opaque = (void *)0;
    {
      printf("\nSTMT_EXEC;;7612\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;7615\n");
if (!(nUnused > 0))
        {
          printf("\nSTMT_EXEC;;7617\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;7619\n");
bzf->buf[bzf->bufN] = (Char) * ((UChar *)unused);
        printf("\nSTMT_EXEC;;7620\n");
(bzf->bufN)++;
        printf("\nSTMT_EXEC;;7621\n");
unused = (void *)((UChar *)unused + 1);
        printf("\nSTMT_EXEC;;7622\n");
nUnused--;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;7627\n");
ret = BZ2_bzDecompressInit(&bzf->strm, verbosity___0, small);
    }
    printf("\nSTMT_EXEC;;7629\n");
if (ret != 0)
    {
      printf("\nSTMT_EXEC;;7631\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7633\n");
*bzerror = ret;
      }
      printf("\nSTMT_EXEC;;7635\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7637\n");
bzf->lastErr = ret;
      }
      {
        printf("\nSTMT_EXEC;;7640\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)bzf);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;7642\n");
printf("\nFUNC_RETURN;;\n");
return ((void *)0);
    }
    printf("\nSTMT_EXEC;;7644\n");
bzf->strm.avail_in = (unsigned int)bzf->bufN;
    printf("\nSTMT_EXEC;;7645\n");
bzf->strm.next_in = bzf->buf;
    printf("\nSTMT_EXEC;;7646\n");
bzf->initialisedOk = (Bool)1;
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
    printf("\nSTMT_EXEC;;7655\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7657\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7659\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7661\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7663\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7665\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7667\n");
*bzerror = 0;
      }
      printf("\nSTMT_EXEC;;7669\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7671\n");
bzf->lastErr = 0;
      }
      printf("\nSTMT_EXEC;;7673\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7675\n");
if (bzf->writing)
    {
      printf("\nSTMT_EXEC;;7677\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7679\n");
*bzerror = -1;
      }
      printf("\nSTMT_EXEC;;7681\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7683\n");
bzf->lastErr = -1;
      }
      printf("\nSTMT_EXEC;;7685\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7687\n");
if (bzf->initialisedOk)
    {
      {
        printf("\nSTMT_EXEC;;7690\n");
BZ2_bzDecompressEnd(&bzf->strm);
      }
    }
    {
      printf("\nSTMT_EXEC;;7694\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)bzf);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;7696\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;7704\n");
int tmp;
  printf("\nSTMT_EXEC;;7705\n");
int tmp___0;
  printf("\nSTMT_EXEC;;7706\n");
Bool tmp___1;
  printf("\nSTMT_EXEC;;7707\n");
Bool tmp___2;
  {
    printf("\nSTMT_EXEC;;7709\n");
bzf = (bzFile *)b;
    printf("\nSTMT_EXEC;;7710\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7712\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7714\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7716\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7718\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7720\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;7724\n");
if ((unsigned long)buf == (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7726\n");
goto _L;
      }
      else
      {
        printf("\nSTMT_EXEC;;7730\n");
if (len < 0)
        {
        _L:
          {
printf("\nSTMT_EXEC;;7733\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7735\n");
*bzerror = -2;
          }
}

          printf("\nSTMT_EXEC;;7737\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7739\n");
bzf->lastErr = -2;
          }
          printf("\nSTMT_EXEC;;7741\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
      }
    }
    printf("\nSTMT_EXEC;;7745\n");
if (bzf->writing)
    {
      printf("\nSTMT_EXEC;;7747\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7749\n");
*bzerror = -1;
      }
      printf("\nSTMT_EXEC;;7751\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7753\n");
bzf->lastErr = -1;
      }
      printf("\nSTMT_EXEC;;7755\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;7757\n");
if (len == 0)
    {
      printf("\nSTMT_EXEC;;7759\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7761\n");
*bzerror = 0;
      }
      printf("\nSTMT_EXEC;;7763\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7765\n");
bzf->lastErr = 0;
      }
      printf("\nSTMT_EXEC;;7767\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;7769\n");
bzf->strm.avail_out = (unsigned int)len;
    printf("\nSTMT_EXEC;;7770\n");
bzf->strm.next_out = (char *)buf;
    {
      printf("\nSTMT_EXEC;;7772\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;7776\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;7778\n");
if (tmp)
        {
          printf("\nSTMT_EXEC;;7780\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7782\n");
*bzerror = -6;
          }
          printf("\nSTMT_EXEC;;7784\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7786\n");
bzf->lastErr = -6;
          }
          printf("\nSTMT_EXEC;;7788\n");
printf("\nFUNC_RETURN;;\n");
return (0);
        }
        printf("\nSTMT_EXEC;;7790\n");
if (bzf->strm.avail_in == 0U)
        {
          {
            printf("\nSTMT_EXEC;;7793\n");
tmp___1 = myfeof(bzf->handle);
          }
          printf("\nSTMT_EXEC;;7795\n");
if (!tmp___1)
          {
            {
              printf("\nSTMT_EXEC;;7798\n");
printf("\nFUNC_CALL;fread(void *__restrict,size_t,size_t,FILE *__restrict);\n");
n = (Int32)fread((void * /* __restrict  */)(bzf->buf), sizeof(UChar), (size_t)5000, (FILE * /* __restrict  */) bzf->handle);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;7799\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___0 = ferror(bzf->handle);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;7801\n");
if (tmp___0)
            {
              printf("\nSTMT_EXEC;;7803\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
              {
                printf("\nSTMT_EXEC;;7805\n");
*bzerror = -6;
              }
              printf("\nSTMT_EXEC;;7807\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
              {
                printf("\nSTMT_EXEC;;7809\n");
bzf->lastErr = -6;
              }
              printf("\nSTMT_EXEC;;7811\n");
printf("\nFUNC_RETURN;;\n");
return (0);
            }
            printf("\nSTMT_EXEC;;7813\n");
bzf->bufN = n;
            printf("\nSTMT_EXEC;;7814\n");
bzf->strm.avail_in = (unsigned int)bzf->bufN;
            printf("\nSTMT_EXEC;;7815\n");
bzf->strm.next_in = bzf->buf;
          }
        }
        {
          printf("\nSTMT_EXEC;;7819\n");
ret = BZ2_bzDecompress(&bzf->strm);
        }
        printf("\nSTMT_EXEC;;7821\n");
if (ret != 0)
        {
          printf("\nSTMT_EXEC;;7823\n");
if (ret != 4)
          {
            printf("\nSTMT_EXEC;;7825\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
            {
              printf("\nSTMT_EXEC;;7827\n");
*bzerror = ret;
            }
            printf("\nSTMT_EXEC;;7829\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
            {
              printf("\nSTMT_EXEC;;7831\n");
bzf->lastErr = ret;
            }
            printf("\nSTMT_EXEC;;7833\n");
printf("\nFUNC_RETURN;;\n");
return (0);
          }
        }
        printf("\nSTMT_EXEC;;7836\n");
if (ret == 0)
        {
          {
            printf("\nSTMT_EXEC;;7839\n");
tmp___2 = myfeof(bzf->handle);
          }
          printf("\nSTMT_EXEC;;7841\n");
if (tmp___2)
          {
            printf("\nSTMT_EXEC;;7843\n");
if (bzf->strm.avail_in == 0U)
            {
              printf("\nSTMT_EXEC;;7845\n");
if (bzf->strm.avail_out > 0U)
              {
                printf("\nSTMT_EXEC;;7847\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
                {
                  printf("\nSTMT_EXEC;;7849\n");
*bzerror = -7;
                }
                printf("\nSTMT_EXEC;;7851\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
                {
                  printf("\nSTMT_EXEC;;7853\n");
bzf->lastErr = -7;
                }
                printf("\nSTMT_EXEC;;7855\n");
printf("\nFUNC_RETURN;;\n");
return (0);
              }
            }
          }
        }
        printf("\nSTMT_EXEC;;7860\n");
if (ret == 4)
        {
          printf("\nSTMT_EXEC;;7862\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7864\n");
*bzerror = 4;
          }
          printf("\nSTMT_EXEC;;7866\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7868\n");
bzf->lastErr = 4;
          }
          printf("\nSTMT_EXEC;;7870\n");
printf("\nFUNC_RETURN;;\n");
return ((int)((unsigned int)len - bzf->strm.avail_out));
        }
        printf("\nSTMT_EXEC;;7872\n");
if (bzf->strm.avail_out == 0U)
        {
          printf("\nSTMT_EXEC;;7874\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7876\n");
*bzerror = 0;
          }
          printf("\nSTMT_EXEC;;7878\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
          {
            printf("\nSTMT_EXEC;;7880\n");
bzf->lastErr = 0;
          }
          printf("\nSTMT_EXEC;;7882\n");
printf("\nFUNC_RETURN;;\n");
return (len);
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;7887\n");
printf("\nFUNC_RETURN;;\n");
return (0);
  }
printf("\nFUNC_RETURN;;\n");
}
void BZ2_bzReadGetUnused(int *bzerror, BZFILE *b, void **unused, int *nUnused)
{
  printf("\nFUNC_CALL;BZ2_bzReadGetUnused(int *,BZFILE *,void **,int *);\n");
printf("\nSTMT_EXEC;;7892\n");
bzFile *bzf;
  {
    printf("\nSTMT_EXEC;;7894\n");
bzf = (bzFile *)b;
    printf("\nSTMT_EXEC;;7895\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7897\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7899\n");
*bzerror = -2;
      }
      printf("\nSTMT_EXEC;;7901\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7903\n");
bzf->lastErr = -2;
      }
      printf("\nSTMT_EXEC;;7905\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7907\n");
if (bzf->lastErr != 4)
    {
      printf("\nSTMT_EXEC;;7909\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7911\n");
*bzerror = -1;
      }
      printf("\nSTMT_EXEC;;7913\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
      {
        printf("\nSTMT_EXEC;;7915\n");
bzf->lastErr = -1;
      }
      printf("\nSTMT_EXEC;;7917\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;7919\n");
if ((unsigned long)unused == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7921\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;7925\n");
if ((unsigned long)nUnused == (unsigned long)((void *)0))
      {
      _L:
        {
printf("\nSTMT_EXEC;;7928\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;7930\n");
*bzerror = -2;
        }
}

        printf("\nSTMT_EXEC;;7932\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;7934\n");
bzf->lastErr = -2;
        }
        printf("\nSTMT_EXEC;;7936\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;7939\n");
if ((unsigned long)bzerror != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7941\n");
*bzerror = 0;
    }
    printf("\nSTMT_EXEC;;7943\n");
if ((unsigned long)bzf != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;7945\n");
bzf->lastErr = 0;
    }
    printf("\nSTMT_EXEC;;7947\n");
*nUnused = (int)bzf->strm.avail_in;
    printf("\nSTMT_EXEC;;7948\n");
*unused = (void *)bzf->strm.next_in;
    printf("\nSTMT_EXEC;;7949\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
char const *BZ2_bzlibVersion(void)
{
  printf("\nFUNC_CALL;BZ2_bzlibVersion();\n");
printf("\nSTMT_EXEC;;7954\n");
char *__cil_tmp1;
  {
    printf("\nSTMT_EXEC;;7956\n");
printf("\nFUNC_RETURN;;\n");
return ("1.0.5, 10-Dec-2007");
  }
printf("\nFUNC_RETURN;;\n");
}
static char const *bzerrorstrings[16] = {"OK", "SEQUENCE_ERROR", "PARAM_ERROR", "MEM_ERROR", "DATA_ERROR", "DATA_ERROR_MAGIC", "IO_ERROR", "UNEXPECTED_EOF", "OUTBUFF_FULL", "CONFIG_ERROR", "???", "???", "???", "???", "???", "???"};
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
Bool keepInputFiles;
Bool smallMode;
Bool deleteOutputOnInterrupt;
Bool forceOverwrite;
Bool testFailsExist;
Bool unzFailsExist;
Bool noisy;
Int32 numFileNames;
Int32 numFilesProcessed;
Int32 blockSize100k;
Int32 exitValue;
Int32 opMode;
Int32 srcMode;
Int32 longestFileName;
Char inName[1034];
Char outName[1034];
Char tmpName[1034];
Char *progName;
Char progNameReally[1034];
FILE *outputHandleJustInCase;
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
static void uInt64_from_UInt32s(UInt64 *n, UInt32 lo32, UInt32 hi32)
{
  printf("\nFUNC_CALL;uInt64_from_UInt32s(UInt64 *,UInt32,UInt32);\n");
{
    printf("\nSTMT_EXEC;;8016\n");
n->b[7] = (UChar)((hi32 >> 24) & 255U);
    printf("\nSTMT_EXEC;;8017\n");
n->b[6] = (UChar)((hi32 >> 16) & 255U);
    printf("\nSTMT_EXEC;;8018\n");
n->b[5] = (UChar)((hi32 >> 8) & 255U);
    printf("\nSTMT_EXEC;;8019\n");
n->b[4] = (UChar)(hi32 & 255U);
    printf("\nSTMT_EXEC;;8020\n");
n->b[3] = (UChar)((lo32 >> 24) & 255U);
    printf("\nSTMT_EXEC;;8021\n");
n->b[2] = (UChar)((lo32 >> 16) & 255U);
    printf("\nSTMT_EXEC;;8022\n");
n->b[1] = (UChar)((lo32 >> 8) & 255U);
    printf("\nSTMT_EXEC;;8023\n");
n->b[0] = (UChar)(lo32 & 255U);
    printf("\nSTMT_EXEC;;8024\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static double uInt64_to_double(UInt64 *n)
{
  printf("\nFUNC_CALL;uInt64_to_double(UInt64 *);\n");
printf("\nSTMT_EXEC;;8029\n");
Int32 i;
  printf("\nSTMT_EXEC;;8030\n");
double base;
  printf("\nSTMT_EXEC;;8031\n");
double sum;
  {
    printf("\nSTMT_EXEC;;8033\n");
base = 1.0;
    printf("\nSTMT_EXEC;;8034\n");
sum = 0.0;
    printf("\nSTMT_EXEC;;8035\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;8037\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;8040\n");
if (!(i < 8))
        {
          printf("\nSTMT_EXEC;;8042\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;8044\n");
sum += base * (double)n->b[i];
        printf("\nSTMT_EXEC;;8045\n");
base *= 256.0;
        printf("\nSTMT_EXEC;;8046\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;8050\n");
printf("\nFUNC_RETURN;;\n");
return (sum);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool uInt64_isZero(UInt64 *n)
{
  printf("\nFUNC_CALL;uInt64_isZero(UInt64 *);\n");
printf("\nSTMT_EXEC;;8055\n");
Int32 i;
  {
    printf("\nSTMT_EXEC;;8057\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;8059\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;8062\n");
if (!(i < 8))
        {
          printf("\nSTMT_EXEC;;8064\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;8066\n");
if ((int)n->b[i] != 0)
        {
          printf("\nSTMT_EXEC;;8068\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
        }
        printf("\nSTMT_EXEC;;8070\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;8074\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
static Int32 uInt64_qrm10(UInt64 *n)
{
  printf("\nFUNC_CALL;uInt64_qrm10(UInt64 *);\n");
printf("\nSTMT_EXEC;;8079\n");
UInt32 rem;
  printf("\nSTMT_EXEC;;8080\n");
UInt32 tmp;
  printf("\nSTMT_EXEC;;8081\n");
Int32 i;
  {
    printf("\nSTMT_EXEC;;8083\n");
rem = (UInt32)0;
    printf("\nSTMT_EXEC;;8084\n");
i = 7;
    {
      printf("\nSTMT_EXEC;;8086\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;8089\n");
if (!(i >= 0))
        {
          printf("\nSTMT_EXEC;;8091\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;8093\n");
tmp = rem * 256U + (UInt32)n->b[i];
        printf("\nSTMT_EXEC;;8094\n");
n->b[i] = (UChar)(tmp / 10U);
        printf("\nSTMT_EXEC;;8095\n");
rem = tmp % 10U;
        printf("\nSTMT_EXEC;;8096\n");
i--;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;8100\n");
printf("\nFUNC_RETURN;;\n");
return ((Int32)rem);
  }
printf("\nFUNC_RETURN;;\n");
}
static void uInt64_toAscii(char *outbuf, UInt64 *n)
{
  printf("\nFUNC_CALL;uInt64_toAscii(char *,UInt64 *);\n");
printf("\nSTMT_EXEC;;8105\n");
Int32 i;
  printf("\nSTMT_EXEC;;8106\n");
Int32 q;
  printf("\nSTMT_EXEC;;8107\n");
UChar buf[32];
  printf("\nSTMT_EXEC;;8108\n");
Int32 nBuf;
  printf("\nSTMT_EXEC;;8109\n");
UInt64 n_copy;
  printf("\nSTMT_EXEC;;8110\n");
Bool tmp;
  printf("\nSTMT_EXEC;;8111\n");
void *__cil_tmp9;
  printf("\nSTMT_EXEC;;8112\n");
void *__cil_tmp10;
  {
    printf("\nSTMT_EXEC;;8114\n");
nBuf = 0;
    printf("\nSTMT_EXEC;;8115\n");
n_copy = *n;
    {
      printf("\nSTMT_EXEC;;8117\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;8121\n");
q = uInt64_qrm10(&n_copy);
          printf("\nSTMT_EXEC;;8122\n");
buf[nBuf] = (UChar)(q + 48);
          printf("\nSTMT_EXEC;;8123\n");
nBuf++;
          printf("\nSTMT_EXEC;;8124\n");
tmp = uInt64_isZero(&n_copy);
        }
        printf("\nSTMT_EXEC;;8126\n");
if (tmp)
        {
          printf("\nSTMT_EXEC;;8128\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;8133\n");
*(outbuf + nBuf) = (char)0;
    printf("\nSTMT_EXEC;;8134\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;8136\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;8139\n");
if (!(i < nBuf))
        {
          printf("\nSTMT_EXEC;;8141\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;8143\n");
*(outbuf + i) = (char)buf[(nBuf - i) - 1];
        printf("\nSTMT_EXEC;;8144\n");
i++;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;8148\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
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
  printf("\nSTMT_EXEC;;8180\n");
Int32 bzerr_dummy;
  printf("\nSTMT_EXEC;;8181\n");
Int32 ret;
  printf("\nSTMT_EXEC;;8182\n");
int tmp;
  printf("\nSTMT_EXEC;;8183\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8184\n");
Bool tmp___1;
  printf("\nSTMT_EXEC;;8185\n");
int tmp___2;
  printf("\nSTMT_EXEC;;8186\n");
int tmp___3;
  printf("\nSTMT_EXEC;;8187\n");
Int32 fd;
  printf("\nSTMT_EXEC;;8188\n");
Int32 tmp___4;
  printf("\nSTMT_EXEC;;8189\n");
int tmp___5;
  printf("\nSTMT_EXEC;;8190\n");
Char buf_nin[32];
  printf("\nSTMT_EXEC;;8191\n");
Char buf_nout[32];
  printf("\nSTMT_EXEC;;8192\n");
UInt64 nbytes_in;
  printf("\nSTMT_EXEC;;8193\n");
UInt64 nbytes_out;
  printf("\nSTMT_EXEC;;8194\n");
double nbytes_in_d;
  printf("\nSTMT_EXEC;;8195\n");
double nbytes_out_d;
  printf("\nSTMT_EXEC;;8196\n");
void *__cil_tmp28;
  printf("\nSTMT_EXEC;;8197\n");
void *__cil_tmp29;
  printf("\nSTMT_EXEC;;8198\n");
void *__cil_tmp30;
  printf("\nSTMT_EXEC;;8199\n");
void *__cil_tmp31;
  printf("\nSTMT_EXEC;;8200\n");
void *__cil_tmp32;
  printf("\nSTMT_EXEC;;8201\n");
char *__cil_tmp33;
  printf("\nSTMT_EXEC;;8202\n");
char *__cil_tmp34;
  {
    {
      printf("\nSTMT_EXEC;;8205\n");
bzf = (void *)0;
      printf("\nSTMT_EXEC;;8206\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(stream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8208\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;8210\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8213\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___0 = ferror(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8215\n");
if (tmp___0)
    {
      printf("\nSTMT_EXEC;;8217\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8220\n");
bzf = BZ2_bzWriteOpen(&bzerr, zStream, blockSize100k, verbosity, workFactor);
    }
    printf("\nSTMT_EXEC;;8222\n");
if (bzerr != 0)
    {
      printf("\nSTMT_EXEC;;8224\n");
goto errhandler;
    }
    printf("\nSTMT_EXEC;;8226\n");
if (verbosity >= 2)
    {
      {
        printf("\nSTMT_EXEC;;8229\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;8233\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;8251\n");
if (nIbuf > 0)
        {
          {
            printf("\nSTMT_EXEC;;8254\n");
BZ2_bzWrite(&bzerr, bzf, (void *)(ibuf), nIbuf);
          }
        }
        printf("\nSTMT_EXEC;;8257\n");
if (bzerr != 0)
        {
          printf("\nSTMT_EXEC;;8259\n");
goto errhandler;
        }
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8265\n");
BZ2_bzWriteClose64(&bzerr, bzf, 0, &nbytes_in_lo32, &nbytes_in_hi32, &nbytes_out_lo32, &nbytes_out_hi32);
    }
    printf("\nSTMT_EXEC;;8267\n");
if (bzerr != 0)
    {
      printf("\nSTMT_EXEC;;8269\n");
goto errhandler;
    }
    {
      printf("\nSTMT_EXEC;;8272\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___3 = ferror(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8274\n");
if (tmp___3)
    {
      printf("\nSTMT_EXEC;;8276\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8279\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
ret = fflush(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8281\n");
if (ret == -1)
    {
      printf("\nSTMT_EXEC;;8283\n");
goto errhandler_io;
    }
    printf("\nSTMT_EXEC;;8285\n");
if ((unsigned long)zStream != (unsigned long)stdout)
    {
      {
        printf("\nSTMT_EXEC;;8288\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___4 = fileno(zStream);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8289\n");
fd = tmp___4;
      }
      printf("\nSTMT_EXEC;;8291\n");
if (fd < 0)
      {
        printf("\nSTMT_EXEC;;8293\n");
goto errhandler_io;
      }
      {
        printf("\nSTMT_EXEC;;8296\n");
applySavedFileAttrToOutputFile(fd);
        printf("\nSTMT_EXEC;;8297\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
ret = fclose(zStream);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8298\n");
outputHandleJustInCase = (FILE *)((void *)0);
      }
      printf("\nSTMT_EXEC;;8300\n");
if (ret == -1)
      {
        printf("\nSTMT_EXEC;;8302\n");
goto errhandler_io;
      }
    }
    {
      printf("\nSTMT_EXEC;;8306\n");
outputHandleJustInCase = (FILE *)((void *)0);
      printf("\nSTMT_EXEC;;8307\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___5 = ferror(stream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8309\n");
if (tmp___5)
    {
      printf("\nSTMT_EXEC;;8311\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8314\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
ret = fclose(stream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8316\n");
if (ret == -1)
    {
      printf("\nSTMT_EXEC;;8318\n");
goto errhandler_io;
    }
    printf("\nSTMT_EXEC;;8320\n");
if (verbosity >= 1)
    {
      printf("\nSTMT_EXEC;;8322\n");
if (nbytes_in_lo32 == 0U)
      {
        printf("\nSTMT_EXEC;;8324\n");
if (nbytes_in_hi32 == 0U)
        {
          {
            printf("\nSTMT_EXEC;;8327\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " no data compressed.\n");printf("\nFUNC_RETURN;;\n");

          }
        }
        else
        {
          printf("\nSTMT_EXEC;;8332\n");
goto _L;
        }
      }
      else
      {
      _L:
      {
        printf("\nSTMT_EXEC;;8339\n");
uInt64_from_UInt32s(&nbytes_in, nbytes_in_lo32, nbytes_in_hi32);
        printf("\nSTMT_EXEC;;8340\n");
uInt64_from_UInt32s(&nbytes_out, nbytes_out_lo32, nbytes_out_hi32);
        printf("\nSTMT_EXEC;;8341\n");
nbytes_in_d = uInt64_to_double(&nbytes_in);
        printf("\nSTMT_EXEC;;8342\n");
nbytes_out_d = uInt64_to_double(&nbytes_out);
        printf("\nSTMT_EXEC;;8343\n");
uInt64_toAscii(buf_nin, &nbytes_in);
        printf("\nSTMT_EXEC;;8344\n");
uInt64_toAscii(buf_nout, &nbytes_out);
        printf("\nSTMT_EXEC;;8345\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "%6.3f:1, %6.3f bits/byte, "
                                                 "%5.2f%% saved, %s in, %s out.\n",
                nbytes_in_d / nbytes_out_d, (8.0 * nbytes_out_d) / nbytes_in_d, 100.0 * (1.0 - nbytes_out_d / nbytes_in_d), buf_nin, buf_nout);printf("\nFUNC_RETURN;;\n");

      }
      }
    }
    printf("\nSTMT_EXEC;;8352\n");
printf("\nFUNC_RETURN;;\n");
return;
  errhandler:
  {
    printf("\nSTMT_EXEC;;8355\n");
BZ2_bzWriteClose64(&bzerr_dummy, bzf, 1, &nbytes_in_lo32, &nbytes_in_hi32, &nbytes_out_lo32, &nbytes_out_hi32);
  }
    {
      printf("\nSTMT_EXEC;;8358\n");
if (bzerr == -9)
      {
        printf("\nSTMT_EXEC;;8360\n");
goto case_neg_9;
      }
      printf("\nSTMT_EXEC;;8362\n");
if (bzerr == -3)
      {
        printf("\nSTMT_EXEC;;8364\n");
goto case_neg_3;
      }
      printf("\nSTMT_EXEC;;8366\n");
if (bzerr == -6)
      {
        printf("\nSTMT_EXEC;;8368\n");
goto errhandler_io;
      }
      printf("\nSTMT_EXEC;;8370\n");
goto switch_default;
    case_neg_9: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8373\n");
configError();
    }
      printf("\nSTMT_EXEC;;8375\n");
goto switch_break;
    case_neg_3: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8378\n");
outOfMemory();
    }
      printf("\nSTMT_EXEC;;8380\n");
goto switch_break;
    errhandler_io:
    case_neg_6: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8384\n");
ioError();
    }
      printf("\nSTMT_EXEC;;8386\n");
goto switch_break;
    switch_default: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8389\n");
panic("compress:unexpected error");
    }
    switch_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8394\n");
panic("compress:end");
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
  printf("\nSTMT_EXEC;;8402\n");
Int32 bzerr_dummy;
  printf("\nSTMT_EXEC;;8403\n");
Int32 ret;
  printf("\nSTMT_EXEC;;8404\n");
Int32 nread;
  printf("\nSTMT_EXEC;;8405\n");
Int32 streamNo;
  printf("\nSTMT_EXEC;;8406\n");
Int32 i;
  printf("\nSTMT_EXEC;;8407\n");
UChar obuf[5000];
  printf("\nSTMT_EXEC;;8408\n");
UChar unused[5000];
  printf("\nSTMT_EXEC;;8409\n");
Int32 nUnused;
  printf("\nSTMT_EXEC;;8410\n");
void *unusedTmpV;
  printf("\nSTMT_EXEC;;8411\n");
UChar *unusedTmp;
  printf("\nSTMT_EXEC;;8412\n");
int tmp;
  printf("\nSTMT_EXEC;;8413\n");
int tmp___0;
  printf("\nSTMT_EXEC;;8414\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8415\n");
Bool tmp___2;
  printf("\nSTMT_EXEC;;8416\n");
int tmp___3;
  printf("\nSTMT_EXEC;;8417\n");
Int32 fd;
  printf("\nSTMT_EXEC;;8418\n");
Int32 tmp___4;
  printf("\nSTMT_EXEC;;8419\n");
int tmp___5;
  printf("\nSTMT_EXEC;;8420\n");
Bool tmp___6;
  printf("\nSTMT_EXEC;;8421\n");
int tmp___7;
  printf("\nSTMT_EXEC;;8422\n");
int tmp___8;
  printf("\nSTMT_EXEC;;8423\n");
void *__cil_tmp27;
  printf("\nSTMT_EXEC;;8424\n");
void *__cil_tmp28;
  printf("\nSTMT_EXEC;;8425\n");
char *__cil_tmp29;
  printf("\nSTMT_EXEC;;8426\n");
char *__cil_tmp30;
  printf("\nSTMT_EXEC;;8427\n");
char *__cil_tmp31;
  printf("\nSTMT_EXEC;;8428\n");
char *__cil_tmp32;
  {
    {
      printf("\nSTMT_EXEC;;8431\n");
bzf = (void *)0;
      printf("\nSTMT_EXEC;;8432\n");
nUnused = 0;
      printf("\nSTMT_EXEC;;8433\n");
streamNo = 0;
      printf("\nSTMT_EXEC;;8434\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(stream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8436\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;8438\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8441\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___0 = ferror(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8443\n");
if (tmp___0)
    {
      printf("\nSTMT_EXEC;;8445\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8448\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;8452\n");
bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int)smallMode, (void *)(unused), nUnused);
        }
        printf("\nSTMT_EXEC;;8454\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;8456\n");
goto errhandler;
        }
        else
        {
          printf("\nSTMT_EXEC;;8460\n");
if (bzerr != 0)
          {
            printf("\nSTMT_EXEC;;8462\n");
goto errhandler;
          }
        }
        printf("\nSTMT_EXEC;;8465\n");
streamNo++;
        {
          printf("\nSTMT_EXEC;;8467\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
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
            printf("\nSTMT_EXEC;;8477\n");
if (bzerr == -5)
            {
              printf("\nSTMT_EXEC;;8479\n");
goto trycat;
            }
            printf("\nSTMT_EXEC;;8481\n");
if (bzerr == 0)
            {
              printf("\nSTMT_EXEC;;8483\n");
goto _L;
            }
            else
            {
              printf("\nSTMT_EXEC;;8487\n");
if (bzerr == 4)
              {
              _L:
                {
printf("\nSTMT_EXEC;;8490\n");
if (nread > 0)
                {
                  {
                    printf("\nSTMT_EXEC;;8493\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
fwrite((void const * /* __restrict  */)(obuf), sizeof(UChar), (size_t)nread, (FILE * /* __restrict  */) stream);printf("\nFUNC_RETURN;;\n");

                  }
                }
}

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
        printf("\nSTMT_EXEC;;8508\n");
if (bzerr != 4)
        {
          printf("\nSTMT_EXEC;;8510\n");
goto errhandler;
        }
        {
          printf("\nSTMT_EXEC;;8513\n");
BZ2_bzReadGetUnused(&bzerr, bzf, &unusedTmpV, &nUnused);
        }
        printf("\nSTMT_EXEC;;8515\n");
if (bzerr != 0)
        {
          {
            printf("\nSTMT_EXEC;;8518\n");
panic("decompress:bzReadGetUnused");
          }
        }
        printf("\nSTMT_EXEC;;8521\n");
unusedTmp = (UChar *)unusedTmpV;
        printf("\nSTMT_EXEC;;8522\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;8524\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;8527\n");
if (!(i < nUnused))
            {
              printf("\nSTMT_EXEC;;8529\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;8531\n");
unused[i] = *(unusedTmp + i);
            printf("\nSTMT_EXEC;;8532\n");
i++;
          }
        while_break___1: /* CIL Label */;
        }
        {
          printf("\nSTMT_EXEC;;8537\n");
BZ2_bzReadClose(&bzerr, bzf);
        }
        printf("\nSTMT_EXEC;;8539\n");
if (bzerr != 0)
        {
          {
            printf("\nSTMT_EXEC;;8542\n");
panic("decompress:bzReadGetUnused");
          }
        }
        printf("\nSTMT_EXEC;;8545\n");
if (nUnused == 0)
        {
          {
            printf("\nSTMT_EXEC;;8548\n");
tmp___2 = myfeof___0(zStream);
          }
          printf("\nSTMT_EXEC;;8550\n");
if (tmp___2)
          {
            printf("\nSTMT_EXEC;;8552\n");
goto while_break;
          }
        }
      }
    while_break: /* CIL Label */;
    }
  closeok:
  {
    printf("\nSTMT_EXEC;;8560\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___3 = ferror(zStream);printf("\nFUNC_RETURN;;\n");

  }
    printf("\nSTMT_EXEC;;8562\n");
if (tmp___3)
    {
      printf("\nSTMT_EXEC;;8564\n");
goto errhandler_io;
    }
    printf("\nSTMT_EXEC;;8566\n");
if ((unsigned long)stream != (unsigned long)stdout)
    {
      {
        printf("\nSTMT_EXEC;;8569\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___4 = fileno(stream);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8570\n");
fd = tmp___4;
      }
      printf("\nSTMT_EXEC;;8572\n");
if (fd < 0)
      {
        printf("\nSTMT_EXEC;;8574\n");
goto errhandler_io;
      }
      {
        printf("\nSTMT_EXEC;;8577\n");
applySavedFileAttrToOutputFile(fd);
      }
    }
    {
      printf("\nSTMT_EXEC;;8581\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
ret = fclose(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8583\n");
if (ret == -1)
    {
      printf("\nSTMT_EXEC;;8585\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8588\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___5 = ferror(stream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8590\n");
if (tmp___5)
    {
      printf("\nSTMT_EXEC;;8592\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8595\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
ret = fflush(stream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8597\n");
if (ret != 0)
    {
      printf("\nSTMT_EXEC;;8599\n");
goto errhandler_io;
    }
    printf("\nSTMT_EXEC;;8601\n");
if ((unsigned long)stream != (unsigned long)stdout)
    {
      {
        printf("\nSTMT_EXEC;;8604\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
ret = fclose(stream);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;8605\n");
outputHandleJustInCase = (FILE *)((void *)0);
      }
      printf("\nSTMT_EXEC;;8607\n");
if (ret == -1)
      {
        printf("\nSTMT_EXEC;;8609\n");
goto errhandler_io;
      }
    }
    printf("\nSTMT_EXEC;;8612\n");
outputHandleJustInCase = (FILE *)((void *)0);
    printf("\nSTMT_EXEC;;8613\n");
if (verbosity >= 2)
    {
      {
        printf("\nSTMT_EXEC;;8616\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n    ");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;8619\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
  trycat:
    {
printf("\nSTMT_EXEC;;8621\n");
if (forceOverwrite)
    {
      {
        printf("\nSTMT_EXEC;;8624\n");
printf("\nFUNC_CALL;rewind(FILE *);\n");
rewind(zStream);printf("\nFUNC_RETURN;;\n");

      }
      {
        printf("\nSTMT_EXEC;;8627\n");
while (1)
        {
        while_continue___2: /* CIL Label */;
          {
            printf("\nSTMT_EXEC;;8631\n");
tmp___6 = myfeof___0(zStream);
          }
          printf("\nSTMT_EXEC;;8633\n");
if (tmp___6)
          {
            printf("\nSTMT_EXEC;;8635\n");
goto while_break___2;
          }
          {
            printf("\nSTMT_EXEC;;8638\n");
printf("\nFUNC_CALL;fread(void *__restrict,size_t,size_t,FILE *__restrict);\n");
nread = (Int32)fread((void * /* __restrict  */)(obuf), sizeof(UChar), (size_t)5000, (FILE * /* __restrict  */) zStream);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;8639\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___7 = ferror(zStream);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;8641\n");
if (tmp___7)
          {
            printf("\nSTMT_EXEC;;8643\n");
goto errhandler_io;
          }
          printf("\nSTMT_EXEC;;8645\n");
if (nread > 0)
          {
            {
              printf("\nSTMT_EXEC;;8648\n");
printf("\nFUNC_CALL;fwrite(const void *__restrict,size_t,size_t,FILE *__restrict);\n");
fwrite((void const * /* __restrict  */)(obuf), sizeof(UChar), (size_t)nread, (FILE * /* __restrict  */) stream);printf("\nFUNC_RETURN;;\n");

            }
          }
          {
            printf("\nSTMT_EXEC;;8652\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___8 = ferror(stream);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;8654\n");
if (tmp___8)
          {
            printf("\nSTMT_EXEC;;8656\n");
goto errhandler_io;
          }
        }
      while_break___2: /* CIL Label */;
      }
      printf("\nSTMT_EXEC;;8661\n");
goto closeok;
    }
}

  errhandler:
  {
    printf("\nSTMT_EXEC;;8665\n");
BZ2_bzReadClose(&bzerr_dummy, bzf);
  }
    {
      printf("\nSTMT_EXEC;;8668\n");
if (bzerr == -9)
      {
        printf("\nSTMT_EXEC;;8670\n");
goto case_neg_9;
      }
      printf("\nSTMT_EXEC;;8672\n");
if (bzerr == -6)
      {
        printf("\nSTMT_EXEC;;8674\n");
goto errhandler_io;
      }
      printf("\nSTMT_EXEC;;8676\n");
if (bzerr == -4)
      {
        printf("\nSTMT_EXEC;;8678\n");
goto case_neg_4;
      }
      printf("\nSTMT_EXEC;;8680\n");
if (bzerr == -3)
      {
        printf("\nSTMT_EXEC;;8682\n");
goto case_neg_3;
      }
      printf("\nSTMT_EXEC;;8684\n");
if (bzerr == -7)
      {
        printf("\nSTMT_EXEC;;8686\n");
goto case_neg_7;
      }
      printf("\nSTMT_EXEC;;8688\n");
if (bzerr == -5)
      {
        printf("\nSTMT_EXEC;;8690\n");
goto case_neg_5;
      }
      printf("\nSTMT_EXEC;;8692\n");
goto switch_default;
    case_neg_9: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8695\n");
configError();
    }
      printf("\nSTMT_EXEC;;8697\n");
goto switch_break;
    errhandler_io:
    case_neg_6: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8701\n");
ioError();
    }
      printf("\nSTMT_EXEC;;8703\n");
goto switch_break;
    case_neg_4: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8706\n");
crcError();
    }
    case_neg_3: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8710\n");
outOfMemory();
    }
    case_neg_7: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8714\n");
compressedStreamEOF();
    }
    case_neg_5: /* CIL Label */
      {
printf("\nSTMT_EXEC;;8717\n");
if ((unsigned long)zStream != (unsigned long)stdin)
      {
        {
          printf("\nSTMT_EXEC;;8720\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(zStream);printf("\nFUNC_RETURN;;\n");

        }
      }
}

      printf("\nSTMT_EXEC;;8723\n");
if ((unsigned long)stream != (unsigned long)stdout)
      {
        {
          printf("\nSTMT_EXEC;;8726\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(stream);printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;8729\n");
if (streamNo == 1)
      {
        printf("\nSTMT_EXEC;;8731\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
      }
      else
      {
        printf("\nSTMT_EXEC;;8735\n");
if (noisy)
        {
          {
            printf("\nSTMT_EXEC;;8738\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "\n%s: %s: trailing garbage "
                                                     "after EOF ignored\n",
                    progName, inName);printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;8744\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
      }
    switch_default: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8748\n");
panic("decompress:unexpected error");
    }
    switch_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8753\n");
panic("decompress:end");
    }
    printf("\nSTMT_EXEC;;8755\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
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
  printf("\nSTMT_EXEC;;8762\n");
Int32 bzerr_dummy;
  printf("\nSTMT_EXEC;;8763\n");
Int32 ret;
  printf("\nSTMT_EXEC;;8764\n");
Int32 nread;
  printf("\nSTMT_EXEC;;8765\n");
Int32 streamNo;
  printf("\nSTMT_EXEC;;8766\n");
Int32 i;
  printf("\nSTMT_EXEC;;8767\n");
UChar obuf[5000];
  printf("\nSTMT_EXEC;;8768\n");
UChar unused[5000];
  printf("\nSTMT_EXEC;;8769\n");
Int32 nUnused;
  printf("\nSTMT_EXEC;;8770\n");
void *unusedTmpV;
  printf("\nSTMT_EXEC;;8771\n");
UChar *unusedTmp;
  printf("\nSTMT_EXEC;;8772\n");
int tmp;
  printf("\nSTMT_EXEC;;8773\n");
Bool tmp___0;
  printf("\nSTMT_EXEC;;8774\n");
int tmp___1;
  printf("\nSTMT_EXEC;;8775\n");
void *__cil_tmp17;
  printf("\nSTMT_EXEC;;8776\n");
void *__cil_tmp18;
  printf("\nSTMT_EXEC;;8777\n");
char *__cil_tmp19;
  printf("\nSTMT_EXEC;;8778\n");
char *__cil_tmp20;
  printf("\nSTMT_EXEC;;8779\n");
char *__cil_tmp21;
  printf("\nSTMT_EXEC;;8780\n");
char *__cil_tmp22;
  {
    {
      printf("\nSTMT_EXEC;;8783\n");
bzf = (void *)0;
      printf("\nSTMT_EXEC;;8784\n");
nUnused = 0;
      printf("\nSTMT_EXEC;;8785\n");
streamNo = 0;
      printf("\nSTMT_EXEC;;8786\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp = ferror(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8788\n");
if (tmp)
    {
      printf("\nSTMT_EXEC;;8790\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8793\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;8797\n");
bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int)smallMode, (void *)(unused), nUnused);
        }
        printf("\nSTMT_EXEC;;8799\n");
if ((unsigned long)bzf == (unsigned long)((void *)0))
        {
          printf("\nSTMT_EXEC;;8801\n");
goto errhandler;
        }
        else
        {
          printf("\nSTMT_EXEC;;8805\n");
if (bzerr != 0)
          {
            printf("\nSTMT_EXEC;;8807\n");
goto errhandler;
          }
        }
        printf("\nSTMT_EXEC;;8810\n");
streamNo++;
        {
          printf("\nSTMT_EXEC;;8812\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;8815\n");
if (!(bzerr == 0))
            {
              printf("\nSTMT_EXEC;;8817\n");
goto while_break___0;
            }
            {
              printf("\nSTMT_EXEC;;8820\n");
nread = BZ2_bzRead(&bzerr, bzf, (void *)(obuf), 5000);
            }
            printf("\nSTMT_EXEC;;8822\n");
if (bzerr == -5)
            {
              printf("\nSTMT_EXEC;;8824\n");
goto errhandler;
            }
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;8829\n");
if (bzerr != 4)
        {
          printf("\nSTMT_EXEC;;8831\n");
goto errhandler;
        }
        {
          printf("\nSTMT_EXEC;;8834\n");
BZ2_bzReadGetUnused(&bzerr, bzf, &unusedTmpV, &nUnused);
        }
        printf("\nSTMT_EXEC;;8836\n");
if (bzerr != 0)
        {
          {
            printf("\nSTMT_EXEC;;8839\n");
panic("test:bzReadGetUnused");
          }
        }
        printf("\nSTMT_EXEC;;8842\n");
unusedTmp = (UChar *)unusedTmpV;
        printf("\nSTMT_EXEC;;8843\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;8845\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;8848\n");
if (!(i < nUnused))
            {
              printf("\nSTMT_EXEC;;8850\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;8852\n");
unused[i] = *(unusedTmp + i);
            printf("\nSTMT_EXEC;;8853\n");
i++;
          }
        while_break___1: /* CIL Label */;
        }
        {
          printf("\nSTMT_EXEC;;8858\n");
BZ2_bzReadClose(&bzerr, bzf);
        }
        printf("\nSTMT_EXEC;;8860\n");
if (bzerr != 0)
        {
          {
            printf("\nSTMT_EXEC;;8863\n");
panic("test:bzReadGetUnused");
          }
        }
        printf("\nSTMT_EXEC;;8866\n");
if (nUnused == 0)
        {
          {
            printf("\nSTMT_EXEC;;8869\n");
tmp___0 = myfeof___0(zStream);
          }
          printf("\nSTMT_EXEC;;8871\n");
if (tmp___0)
          {
            printf("\nSTMT_EXEC;;8873\n");
goto while_break;
          }
        }
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8880\n");
printf("\nFUNC_CALL;ferror(FILE *);\n");
tmp___1 = ferror(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8882\n");
if (tmp___1)
    {
      printf("\nSTMT_EXEC;;8884\n");
goto errhandler_io;
    }
    {
      printf("\nSTMT_EXEC;;8887\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
ret = fclose(zStream);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;8889\n");
if (ret == -1)
    {
      printf("\nSTMT_EXEC;;8891\n");
goto errhandler_io;
    }
    printf("\nSTMT_EXEC;;8893\n");
if (verbosity >= 2)
    {
      {
        printf("\nSTMT_EXEC;;8896\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n    ");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;8899\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
  errhandler:
  {
    printf("\nSTMT_EXEC;;8902\n");
BZ2_bzReadClose(&bzerr_dummy, bzf);
  }
    printf("\nSTMT_EXEC;;8904\n");
if (verbosity == 0)
    {
      {
        printf("\nSTMT_EXEC;;8907\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s: ", progName, inName);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;8911\n");
if (bzerr == -9)
      {
        printf("\nSTMT_EXEC;;8913\n");
goto case_neg_9;
      }
      printf("\nSTMT_EXEC;;8915\n");
if (bzerr == -6)
      {
        printf("\nSTMT_EXEC;;8917\n");
goto errhandler_io;
      }
      printf("\nSTMT_EXEC;;8919\n");
if (bzerr == -4)
      {
        printf("\nSTMT_EXEC;;8921\n");
goto case_neg_4;
      }
      printf("\nSTMT_EXEC;;8923\n");
if (bzerr == -3)
      {
        printf("\nSTMT_EXEC;;8925\n");
goto case_neg_3;
      }
      printf("\nSTMT_EXEC;;8927\n");
if (bzerr == -7)
      {
        printf("\nSTMT_EXEC;;8929\n");
goto case_neg_7;
      }
      printf("\nSTMT_EXEC;;8931\n");
if (bzerr == -5)
      {
        printf("\nSTMT_EXEC;;8933\n");
goto case_neg_5;
      }
      printf("\nSTMT_EXEC;;8935\n");
goto switch_default;
    case_neg_9: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8938\n");
configError();
    }
      printf("\nSTMT_EXEC;;8940\n");
goto switch_break;
    errhandler_io:
    case_neg_6: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8944\n");
ioError();
    }
      printf("\nSTMT_EXEC;;8946\n");
goto switch_break;
    case_neg_4: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8949\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "data integrity (CRC) error in data\n");printf("\nFUNC_RETURN;;\n");

    }
      printf("\nSTMT_EXEC;;8951\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
    case_neg_3: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8954\n");
outOfMemory();
    }
    case_neg_7: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8958\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "file ends unexpectedly\n");printf("\nFUNC_RETURN;;\n");

    }
      printf("\nSTMT_EXEC;;8960\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
    case_neg_5: /* CIL Label */
      {
printf("\nSTMT_EXEC;;8962\n");
if ((unsigned long)zStream != (unsigned long)stdin)
      {
        {
          printf("\nSTMT_EXEC;;8965\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(zStream);printf("\nFUNC_RETURN;;\n");

        }
      }
}

      printf("\nSTMT_EXEC;;8968\n");
if (streamNo == 1)
      {
        {
          printf("\nSTMT_EXEC;;8971\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "bad magic number (file not "
                                                                                      "created by bzip2)\n");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;8974\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
      }
      else
      {
        printf("\nSTMT_EXEC;;8978\n");
if (noisy)
        {
          {
            printf("\nSTMT_EXEC;;8981\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "trailing garbage after "
                                                                                        "EOF ignored\n");printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;8985\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
      }
    switch_default: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;8989\n");
panic("test:unexpected error");
    }
    switch_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;8994\n");
panic("test:end");
    }
    printf("\nSTMT_EXEC;;8996\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
static void setExit(Int32 v)
{
  printf("\nFUNC_CALL;setExit(Int32);\n");
{
    printf("\nSTMT_EXEC;;9002\n");
if (v > exitValue)
    {
      printf("\nSTMT_EXEC;;9004\n");
exitValue = v;
    }
    printf("\nSTMT_EXEC;;9006\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void cadvise(void)
{
  printf("\nFUNC_CALL;cadvise();\n");
{
    printf("\nSTMT_EXEC;;9012\n");
if (noisy)
    {
      {
        printf("\nSTMT_EXEC;;9015\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\nIt is possible that the compressed "
                                                                                    "file(s) have become corrupted.\nYou can "
                                                                                    "use the -tvv option to test integrity "
                                                                                    "of such files.\n\nYou can use the "
                                                                                    "`bzip2recover\' program to attempt to "
                                                                                    "recover\ndata from undamaged sections "
                                                                                    "of corrupted files.\n\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;9024\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void showFileNames(void)
{
  printf("\nFUNC_CALL;showFileNames();\n");
{
    printf("\nSTMT_EXEC;;9030\n");
if (noisy)
    {
      {
        printf("\nSTMT_EXEC;;9033\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\tInput file = %s, output file = %s\n", inName, outName);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;9036\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void cleanUpAndFail(Int32 ec);
static void cleanUpAndFail(Int32 ec)
{
  printf("\nFUNC_CALL;cleanUpAndFail(Int32);\n");
printf("\nSTMT_EXEC;;9042\n");
IntNative retVal;
  printf("\nSTMT_EXEC;;9043\n");
struct stat statBuf;
  printf("\nSTMT_EXEC;;9044\n");
void *__cil_tmp4;
  {
    printf("\nSTMT_EXEC;;9046\n");
if (srcMode == 3)
    {
      printf("\nSTMT_EXEC;;9048\n");
if (opMode != 3)
      {
        printf("\nSTMT_EXEC;;9050\n");
if (deleteOutputOnInterrupt)
        {
          {
            printf("\nSTMT_EXEC;;9053\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
retVal = stat((char const * /* __restrict  */)(inName), (struct stat * /* __restrict  */)(&statBuf));printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;9055\n");
if (retVal == 0)
          {
            printf("\nSTMT_EXEC;;9057\n");
if (noisy)
            {
              {
                printf("\nSTMT_EXEC;;9060\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                        (char const * /* __restrict  */) "%s: Deleting output file "
                                                         "%s, if it exists.\n",
                        progName, outName);printf("\nFUNC_RETURN;;\n");

              }
            }
            printf("\nSTMT_EXEC;;9066\n");
if ((unsigned long)outputHandleJustInCase != (unsigned long)((void *)0))
            {
              {
                printf("\nSTMT_EXEC;;9069\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(outputHandleJustInCase);printf("\nFUNC_RETURN;;\n");

              }
            }
            {
              printf("\nSTMT_EXEC;;9073\n");
printf("\nFUNC_CALL;remove(const char *);\n");
retVal = remove((char const *)(outName));printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;9075\n");
if (retVal != 0)
            {
              {
                printf("\nSTMT_EXEC;;9078\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                        (char const * /* __restrict  */) "%s: WARNING: deletion of output "
                                                         "file (apparently) failed.\n",
                        progName);printf("\nFUNC_RETURN;;\n");

              }
            }
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;9088\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s: WARNING: deletion of "
                                                       "output file suppressed\n",
                      progName);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;9092\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s:    since input file no "
                                                       "longer exists.  Output file\n",
                      progName);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;9096\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s:    `%s\' may be incomplete.\n", progName, outName);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;9097\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s:    I suggest doing "
                                                       "an integrity test "
                                                       "(bzip2 -tv) of it.\n",
                      progName);printf("\nFUNC_RETURN;;\n");

            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;9107\n");
if (noisy)
    {
      printf("\nSTMT_EXEC;;9109\n");
if (numFileNames > 0)
      {
        printf("\nSTMT_EXEC;;9111\n");
if (numFilesProcessed < numFileNames)
        {
          {
            printf("\nSTMT_EXEC;;9114\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: WARNING: some files have "
                                                     "not been processed:\n%s:    %d "
                                                     "specified on command line, %d "
                                                     "not processed yet.\n\n",
                    progName, progName, numFileNames, numFileNames - numFilesProcessed);printf("\nFUNC_RETURN;;\n");

          }
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;9125\n");
setExit(ec);
      printf("\nSTMT_EXEC;;9126\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitValue);printf("\nFUNC_RETURN;;\n");

    }
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void panic(Char const *s);
static void panic(Char const *s)
{
  printf("\nFUNC_CALL;panic(const Char *);\n");
{
    {
      printf("\nSTMT_EXEC;;9135\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "\n%s: PANIC -- internal consistency "
                                               "error:\n\t%s\n\tThis is a BUG.  Please "
                                               "report it to me at:\n\tjseward@bzip.org\n",
              progName, s);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9140\n");
showFileNames();
      printf("\nSTMT_EXEC;;9141\n");
cleanUpAndFail(3);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void crcError(void);
static void crcError(void)
{
  printf("\nFUNC_CALL;crcError();\n");
{
    {
      printf("\nSTMT_EXEC;;9150\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "\n%s: Data integrity error "
                                               "when decompressing.\n",
              progName);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9154\n");
showFileNames();
      printf("\nSTMT_EXEC;;9155\n");
cadvise();
      printf("\nSTMT_EXEC;;9156\n");
cleanUpAndFail(2);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void compressedStreamEOF(void);
static void compressedStreamEOF(void)
{
  printf("\nFUNC_CALL;compressedStreamEOF();\n");
{
    printf("\nSTMT_EXEC;;9164\n");
if (noisy)
    {
      {
        printf("\nSTMT_EXEC;;9167\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "\n%s: Compressed file ends "
                                                 "unexpectedly;\n\tperhaps it "
                                                 "is corrupted?  *Possible* "
                                                 "reason follows.\n",
                progName);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9173\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)progName);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9174\n");
showFileNames();
        printf("\nSTMT_EXEC;;9175\n");
cadvise();
      }
    }
    {
      printf("\nSTMT_EXEC;;9179\n");
cleanUpAndFail(2);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void ioError(void);
static void ioError(void)
{
  printf("\nFUNC_CALL;ioError();\n");
{
    {
      printf("\nSTMT_EXEC;;9188\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "\n%s: I/O or other error, bailing "
                                               "out.  Possible reason follows.\n",
              progName);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9192\n");
printf("\nFUNC_CALL;perror(const char *);\n");
perror((char const *)progName);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9193\n");
showFileNames();
      printf("\nSTMT_EXEC;;9194\n");
cleanUpAndFail(1);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static void mySignalCatcher(IntNative n)
{
  printf("\nFUNC_CALL;mySignalCatcher(IntNative);\n");
{
    {
      printf("\nSTMT_EXEC;;9202\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "\n%s: Control-C or similar "
                                               "caught, quitting.\n",
              progName);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9206\n");
cleanUpAndFail(1);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static void mySIGSEGVorSIGBUScatcher(IntNative n)
{
  printf("\nFUNC_CALL;mySIGSEGVorSIGBUScatcher(IntNative);\n");
{
    printf("\nSTMT_EXEC;;9213\n");
if (opMode == 1)
    {
      {
        printf("\nSTMT_EXEC;;9216\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "\n%s: Caught a SIGSEGV or SIGBUS whilst "
                                                 "compressing.\n\n   Possible causes are "
                                                 "(most likely first):\n   (1) This "
                                                 "computer has unreliable memory or cache "
                                                 "hardware\n       (a surprisingly common "
                                                 "problem; try a different machine.)\n   "
                                                 "(2) A bug in the compiler used to "
                                                 "create this executable\n       "
                                                 "(unlikely, if you didn\'t compile bzip2 "
                                                 "yourself.)\n   (3) A real bug in bzip2 "
                                                 "-- I hope this should never be the "
                                                 "case.\n   The user\'s manual, Section "
                                                 "4.3, has more info on (1) and (2).\n   "
                                                 "\n   If you suspect this is a bug in "
                                                 "bzip2, or are unsure about (1)\n   or "
                                                 "(2), feel free to report it to me at: "
                                                 "jseward@bzip.org.\n   Section 4.3 of "
                                                 "the user\'s manual describes the info a "
                                                 "useful\n   bug report should have.  If "
                                                 "the manual is available on your\n   "
                                                 "system, please try and read it before "
                                                 "mailing me.  If you don\'t\n   have the "
                                                 "manual or can\'t be bothered to read "
                                                 "it, mail me anyway.\n\n",
                progName);printf("\nFUNC_RETURN;;\n");

      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;9247\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "\n%s: Caught a SIGSEGV or SIGBUS whilst "
                                                 "decompressing.\n\n   Possible causes "
                                                 "are (most likely first):\n   (1) The "
                                                 "compressed data is corrupted, and "
                                                 "bzip2\'s usual checks\n       failed to "
                                                 "detect this.  Try bzip2 -tvv "
                                                 "my_file.bz2.\n   (2) This computer has "
                                                 "unreliable memory or cache hardware\n   "
                                                 "    (a surprisingly common problem; try "
                                                 "a different machine.)\n   (3) A bug in "
                                                 "the compiler used to create this "
                                                 "executable\n       (unlikely, if you "
                                                 "didn\'t compile bzip2 yourself.)\n   "
                                                 "(4) A real bug in bzip2 -- I hope this "
                                                 "should never be the case.\n   The "
                                                 "user\'s manual, Section 4.3, has more "
                                                 "info on (2) and (3).\n   \n   If you "
                                                 "suspect this is a bug in bzip2, or are "
                                                 "unsure about (2)\n   or (3), feel free "
                                                 "to report it to me at: "
                                                 "jseward@bzip.org.\n   Section 4.3 of "
                                                 "the user\'s manual describes the info a "
                                                 "useful\n   bug report should have.  If "
                                                 "the manual is available on your\n   "
                                                 "system, please try and read it before "
                                                 "mailing me.  If you don\'t\n   have the "
                                                 "manual or can\'t be bothered to read "
                                                 "it, mail me anyway.\n\n",
                progName);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;9280\n");
showFileNames();
    }
    printf("\nSTMT_EXEC;;9282\n");
if (opMode == 1)
    {
      {
        printf("\nSTMT_EXEC;;9285\n");
cleanUpAndFail(3);
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;9291\n");
cadvise();
        printf("\nSTMT_EXEC;;9292\n");
cleanUpAndFail(2);
      }
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void outOfMemory(void);
static void outOfMemory(void)
{
  printf("\nFUNC_CALL;outOfMemory();\n");
{
    {
      printf("\nSTMT_EXEC;;9302\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\n%s: couldn\'t allocate enough memory\n", progName);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9303\n");
showFileNames();
      printf("\nSTMT_EXEC;;9304\n");
cleanUpAndFail(1);
    }
  }
printf("\nFUNC_RETURN;;\n");
}
static __attribute__((__noreturn__)) void configError(void);
static void configError(void)
{
  printf("\nFUNC_CALL;configError();\n");
{
    {
      printf("\nSTMT_EXEC;;9313\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "bzip2: I\'m not configured correctly for "
                                                                                  "this platform!\n\tI require Int32, Int16 "
                                                                                  "and Char to have sizes\n\tof 4, 2 and 1 "
                                                                                  "bytes to run properly, and they "
                                                                                  "don\'t.\n\tProbably you can fix this by "
                                                                                  "defining them correctly,\n\tand "
                                                                                  "recompiling.  Bye!\n");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9320\n");
setExit(3);
      printf("\nSTMT_EXEC;;9321\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitValue);printf("\nFUNC_RETURN;;\n");

    }
  }
printf("\nFUNC_RETURN;;\n");
}
static void pad(Char *s)
{
  printf("\nFUNC_CALL;pad(Char *);\n");
printf("\nSTMT_EXEC;;9327\n");
Int32 i;
  printf("\nSTMT_EXEC;;9328\n");
size_t tmp;
  printf("\nSTMT_EXEC;;9329\n");
size_t tmp___0;
  {
    {
      printf("\nSTMT_EXEC;;9332\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen((char const *)s);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9334\n");
if ((Int32)tmp >= longestFileName)
    {
      printf("\nSTMT_EXEC;;9336\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;9338\n");
i = 1;
    {
      printf("\nSTMT_EXEC;;9340\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;9344\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen((char const *)s);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9346\n");
if (!(i <= longestFileName - (Int32)tmp___0))
        {
          printf("\nSTMT_EXEC;;9348\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;9351\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) " ");printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9352\n");
i++;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;9357\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void copyFileName(Char *to, Char *from)
{
  printf("\nFUNC_CALL;copyFileName(Char *,Char *);\n");
printf("\nSTMT_EXEC;;9362\n");
size_t tmp;
  {
    {
      printf("\nSTMT_EXEC;;9365\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = strlen((char const *)from);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9367\n");
if (tmp > 1024UL)
    {
      {
        printf("\nSTMT_EXEC;;9370\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "bzip2: file name\n`%s\'\nis "
                                                 "suspiciously (more than %d chars) "
                                                 "long.\nTry using a reasonable file "
                                                 "name instead.  Sorry! :-)\n",
                from, 1024);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9376\n");
setExit(1);
        printf("\nSTMT_EXEC;;9377\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitValue);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;9381\n");
printf("\nFUNC_CALL;strncpy(char *__restrict,const char *__restrict,size_t);\n");
strncpy((char * /* __restrict  */)to, (char const * /* __restrict  */)from, (size_t)1024);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9382\n");
*(to + 1024) = (Char)'\000';
    }
    printf("\nSTMT_EXEC;;9384\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool fileExists(Char *name)
{
  printf("\nFUNC_CALL;fileExists(Char *);\n");
printf("\nSTMT_EXEC;;9389\n");
FILE *tmp;
  printf("\nSTMT_EXEC;;9390\n");
FILE *tmp___0;
  printf("\nSTMT_EXEC;;9391\n");
Bool exists;
  {
    {
      printf("\nSTMT_EXEC;;9394\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
tmp___0 = fopen((char const * /* __restrict  */)name, (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9395\n");
tmp = tmp___0;
      printf("\nSTMT_EXEC;;9396\n");
exists = (Bool)((unsigned long)tmp != (unsigned long)((void *)0));
    }
    printf("\nSTMT_EXEC;;9398\n");
if ((unsigned long)tmp != (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;9401\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(tmp);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;9404\n");
printf("\nFUNC_RETURN;;\n");
return (exists);
  }
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
    printf("\nSTMT_EXEC;;9415\n");
if (fh == -1)
    {
      printf("\nSTMT_EXEC;;9417\n");
printf("\nFUNC_RETURN;;\n");
return ((FILE *)((void *)0));
    }
    {
      printf("\nSTMT_EXEC;;9420\n");
printf("\nFUNC_CALL;fdopen(int,const char *);\n");
fp = fdopen(fh, mode);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9422\n");
if ((unsigned long)fp == (unsigned long)((void *)0))
    {
      {
        printf("\nSTMT_EXEC;;9425\n");
printf("\nFUNC_CALL;close(int);\n");
close(fh);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;9428\n");
printf("\nFUNC_RETURN;;\n");
return (fp);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool notAStandardFile(Char *name)
{
  printf("\nFUNC_CALL;notAStandardFile(Char *);\n");
printf("\nSTMT_EXEC;;9433\n");
IntNative i;
  printf("\nSTMT_EXEC;;9434\n");
struct stat statBuf;
  printf("\nSTMT_EXEC;;9435\n");
void *__cil_tmp4;
  {
    {
      printf("\nSTMT_EXEC;;9438\n");
printf("\nFUNC_CALL;lstat(const char *__restrict,struct stat *__restrict);\n");
i = lstat((char const * /* __restrict  */)name, (struct stat * /* __restrict  */)(&statBuf));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9440\n");
if (i != 0)
    {
      printf("\nSTMT_EXEC;;9442\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
    }
    printf("\nSTMT_EXEC;;9444\n");
if ((statBuf.st_mode & 61440U) == 32768U)
    {
      printf("\nSTMT_EXEC;;9446\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
    }
    printf("\nSTMT_EXEC;;9448\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
  }
printf("\nFUNC_RETURN;;\n");
}
static Int32 countHardLinks(Char *name)
{
  printf("\nFUNC_CALL;countHardLinks(Char *);\n");
printf("\nSTMT_EXEC;;9453\n");
IntNative i;
  printf("\nSTMT_EXEC;;9454\n");
struct stat statBuf;
  printf("\nSTMT_EXEC;;9455\n");
void *__cil_tmp4;
  {
    {
      printf("\nSTMT_EXEC;;9458\n");
printf("\nFUNC_CALL;lstat(const char *__restrict,struct stat *__restrict);\n");
i = lstat((char const * /* __restrict  */)name, (struct stat * /* __restrict  */)(&statBuf));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9460\n");
if (i != 0)
    {
      printf("\nSTMT_EXEC;;9462\n");
printf("\nFUNC_RETURN;;\n");
return (0);
    }
    printf("\nSTMT_EXEC;;9464\n");
printf("\nFUNC_RETURN;;\n");
return ((Int32)(statBuf.st_nlink - 1UL));
  }
printf("\nFUNC_RETURN;;\n");
}
static struct stat fileMetaInfo;
static void saveInputFileMetaInfo(Char *srcName)
{
  printf("\nFUNC_CALL;saveInputFileMetaInfo(Char *);\n");
printf("\nSTMT_EXEC;;9470\n");
IntNative retVal;
  {
    {
      printf("\nSTMT_EXEC;;9473\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
retVal = stat((char const * /* __restrict  */)srcName, (struct stat * /* __restrict  */)(&fileMetaInfo));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9475\n");
if (retVal != 0)
    {
      {
        printf("\nSTMT_EXEC;;9478\n");
ioError();
      }
    }
    printf("\nSTMT_EXEC;;9481\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void applySavedTimeInfoToOutputFile(Char *dstName)
{
  printf("\nFUNC_CALL;applySavedTimeInfoToOutputFile(Char *);\n");
printf("\nSTMT_EXEC;;9486\n");
IntNative retVal;
  printf("\nSTMT_EXEC;;9487\n");
struct utimbuf uTimBuf;
  {
    {
      printf("\nSTMT_EXEC;;9490\n");
uTimBuf.actime = fileMetaInfo.st_atim.tv_sec;
      printf("\nSTMT_EXEC;;9491\n");
uTimBuf.modtime = fileMetaInfo.st_mtim.tv_sec;
      printf("\nSTMT_EXEC;;9492\n");
printf("\nFUNC_CALL;utime(const char *,const struct utimbuf *);\n");
retVal = utime((char const *)dstName, (struct utimbuf const *)(&uTimBuf));printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9494\n");
if (retVal != 0)
    {
      {
        printf("\nSTMT_EXEC;;9497\n");
ioError();
      }
    }
    printf("\nSTMT_EXEC;;9500\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void applySavedFileAttrToOutputFile(IntNative fd)
{
  printf("\nFUNC_CALL;applySavedFileAttrToOutputFile(IntNative);\n");
printf("\nSTMT_EXEC;;9505\n");
IntNative retVal;
  {
    {
      printf("\nSTMT_EXEC;;9508\n");
printf("\nFUNC_CALL;fchmod(int,__mode_t);\n");
retVal = fchmod(fd, fileMetaInfo.st_mode);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9510\n");
if (retVal != 0)
    {
      {
        printf("\nSTMT_EXEC;;9513\n");
ioError();
      }
    }
    {
      printf("\nSTMT_EXEC;;9517\n");
printf("\nFUNC_CALL;fchown(int,__uid_t,__gid_t);\n");
fchown(fd, fileMetaInfo.st_uid, fileMetaInfo.st_gid);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9519\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool containsDubiousChars(Char *name)
{
  printf("\nFUNC_CALL;containsDubiousChars(Char *);\n");
{
    printf("\nSTMT_EXEC;;9525\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
Char const *zSuffix[4] = {".bz2", ".bz", ".tbz2", ".tbz"};
Char const *unzSuffix[4] = {"", "", ".tar", ".tar"};
static Bool hasSuffix(Char *s, Char const *suffix)
{
  printf("\nFUNC_CALL;hasSuffix(Char *,const Char *);\n");
printf("\nSTMT_EXEC;;9532\n");
Int32 ns;
  printf("\nSTMT_EXEC;;9533\n");
Int32 tmp;
  printf("\nSTMT_EXEC;;9534\n");
Int32 nx;
  printf("\nSTMT_EXEC;;9535\n");
Int32 tmp___0;
  printf("\nSTMT_EXEC;;9536\n");
int tmp___1;
  {
    {
      printf("\nSTMT_EXEC;;9539\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp = (Int32)strlen((char const *)s);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9540\n");
ns = tmp;
      printf("\nSTMT_EXEC;;9541\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = (Int32)strlen(suffix);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9542\n");
nx = tmp___0;
    }
    printf("\nSTMT_EXEC;;9544\n");
if (ns < nx)
    {
      printf("\nSTMT_EXEC;;9546\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
    }
    {
      printf("\nSTMT_EXEC;;9549\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___1 = strcmp((char const *)((s + ns) - nx), suffix);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9551\n");
if (tmp___1 == 0)
    {
      printf("\nSTMT_EXEC;;9553\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
    }
    printf("\nSTMT_EXEC;;9555\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static Bool mapSuffix(Char *name, Char const *oldSuffix, Char const *newSuffix)
{
  printf("\nFUNC_CALL;mapSuffix(Char *,const Char *,const Char *);\n");
printf("\nSTMT_EXEC;;9560\n");
Bool tmp;
  printf("\nSTMT_EXEC;;9561\n");
size_t tmp___0;
  printf("\nSTMT_EXEC;;9562\n");
size_t tmp___1;
  {
    {
      printf("\nSTMT_EXEC;;9565\n");
tmp = hasSuffix(name, oldSuffix);
    }
    printf("\nSTMT_EXEC;;9567\n");
if (!tmp)
    {
      printf("\nSTMT_EXEC;;9569\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
    }
    {
      printf("\nSTMT_EXEC;;9572\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___0 = strlen((char const *)name);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9573\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___1 = strlen(oldSuffix);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9574\n");
*(name + (tmp___0 - tmp___1)) = (Char)0;
      printf("\nSTMT_EXEC;;9575\n");
printf("\nFUNC_CALL;strcat(char *__restrict,const char *__restrict);\n");
strcat((char * /* __restrict  */)name, (char const * /* __restrict  */)newSuffix);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;9577\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)1);
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
  printf("\nSTMT_EXEC;;9584\n");
Int32 n;
  printf("\nSTMT_EXEC;;9585\n");
Int32 i;
  printf("\nSTMT_EXEC;;9586\n");
struct stat statBuf;
  printf("\nSTMT_EXEC;;9587\n");
Bool tmp;
  printf("\nSTMT_EXEC;;9588\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;9589\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;9590\n");
Bool tmp___2;
  printf("\nSTMT_EXEC;;9591\n");
Bool tmp___3;
  printf("\nSTMT_EXEC;;9592\n");
Bool tmp___4;
  printf("\nSTMT_EXEC;;9593\n");
Bool tmp___5;
  printf("\nSTMT_EXEC;;9594\n");
char const *tmp___6;
  printf("\nSTMT_EXEC;;9595\n");
int tmp___7;
  printf("\nSTMT_EXEC;;9596\n");
int tmp___8;
  printf("\nSTMT_EXEC;;9597\n");
int tmp___9;
  printf("\nSTMT_EXEC;;9598\n");
int tmp___10;
  printf("\nSTMT_EXEC;;9599\n");
int *tmp___11;
  printf("\nSTMT_EXEC;;9600\n");
char *tmp___12;
  printf("\nSTMT_EXEC;;9601\n");
int *tmp___13;
  printf("\nSTMT_EXEC;;9602\n");
char *tmp___14;
  printf("\nSTMT_EXEC;;9603\n");
int *tmp___15;
  printf("\nSTMT_EXEC;;9604\n");
char *tmp___16;
  printf("\nSTMT_EXEC;;9605\n");
IntNative retVal;
  printf("\nSTMT_EXEC;;9606\n");
IntNative tmp___17;
  printf("\nSTMT_EXEC;;9607\n");
void *__cil_tmp27;
  printf("\nSTMT_EXEC;;9608\n");
char *__cil_tmp28;
  printf("\nSTMT_EXEC;;9609\n");
char *__cil_tmp29;
  printf("\nSTMT_EXEC;;9610\n");
char *__cil_tmp30;
  printf("\nSTMT_EXEC;;9611\n");
char *__cil_tmp31;
  printf("\nSTMT_EXEC;;9612\n");
char *__cil_tmp32;
  printf("\nSTMT_EXEC;;9613\n");
char *__cil_tmp33;
  printf("\nSTMT_EXEC;;9614\n");
char *__cil_tmp34;
  printf("\nSTMT_EXEC;;9615\n");
char *__cil_tmp35;
  printf("\nSTMT_EXEC;;9616\n");
char *__cil_tmp36;
  {
    printf("\nSTMT_EXEC;;9618\n");
deleteOutputOnInterrupt = (Bool)0;
    printf("\nSTMT_EXEC;;9619\n");
if ((unsigned long)name == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;9621\n");
if (srcMode != 1)
      {
        {
          printf("\nSTMT_EXEC;;9624\n");
panic("compress: bad modes\n");
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;9629\n");
if (srcMode == 1)
      {
        printf("\nSTMT_EXEC;;9631\n");
goto case_1;
      }
      printf("\nSTMT_EXEC;;9633\n");
if (srcMode == 3)
      {
        printf("\nSTMT_EXEC;;9635\n");
goto case_3;
      }
      printf("\nSTMT_EXEC;;9637\n");
if (srcMode == 2)
      {
        printf("\nSTMT_EXEC;;9639\n");
goto case_2;
      }
      printf("\nSTMT_EXEC;;9641\n");
goto switch_break;
    case_1: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;9644\n");
copyFileName(inName, (Char *)"(stdin)");
      printf("\nSTMT_EXEC;;9645\n");
copyFileName(outName, (Char *)"(stdout)");
    }
      printf("\nSTMT_EXEC;;9647\n");
goto switch_break;
    case_3: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;9650\n");
copyFileName(inName, name);
      printf("\nSTMT_EXEC;;9651\n");
copyFileName(outName, name);
      printf("\nSTMT_EXEC;;9652\n");
printf("\nFUNC_CALL;strcat(char *__restrict,const char *__restrict);\n");
strcat((char * /* __restrict  */)(outName), (char const * /* __restrict  */) ".bz2");printf("\nFUNC_RETURN;;\n");

    }
      printf("\nSTMT_EXEC;;9654\n");
goto switch_break;
    case_2: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;9657\n");
copyFileName(inName, name);
      printf("\nSTMT_EXEC;;9658\n");
copyFileName(outName, (Char *)"(stdout)");
    }
      printf("\nSTMT_EXEC;;9660\n");
goto switch_break;
    switch_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;9663\n");
if (srcMode != 1)
    {
      {
        printf("\nSTMT_EXEC;;9666\n");
tmp = containsDubiousChars(inName);
      }
      printf("\nSTMT_EXEC;;9668\n");
if (tmp)
      {
        printf("\nSTMT_EXEC;;9670\n");
if (noisy)
        {
          {
            printf("\nSTMT_EXEC;;9673\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: There are no files "
                                                     "matching `%s\'.\n",
                    progName, inName);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;9680\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;9682\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;9685\n");
if (srcMode != 1)
    {
      {
        printf("\nSTMT_EXEC;;9688\n");
tmp___2 = fileExists(inName);
      }
      printf("\nSTMT_EXEC;;9690\n");
if (!tmp___2)
      {
        {
          printf("\nSTMT_EXEC;;9693\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9694\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___1 = strerror(*tmp___0);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9695\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input file %s: %s.\n", progName, inName, tmp___1);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9696\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;9698\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;9701\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;9703\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;9706\n");
if (!(i < 4))
        {
          printf("\nSTMT_EXEC;;9708\n");
goto while_break;
        }
        {
          printf("\nSTMT_EXEC;;9711\n");
tmp___3 = hasSuffix(inName, zSuffix[i]);
        }
        printf("\nSTMT_EXEC;;9713\n");
if (tmp___3)
        {
          printf("\nSTMT_EXEC;;9715\n");
if (noisy)
          {
            {
              printf("\nSTMT_EXEC;;9718\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s: Input file %s already "
                                                       "has %s suffix.\n",
                      progName, inName, zSuffix[i]);printf("\nFUNC_RETURN;;\n");

            }
          }
          {
            printf("\nSTMT_EXEC;;9725\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;9727\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
        printf("\nSTMT_EXEC;;9729\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;9733\n");
if (srcMode == 3)
    {
      printf("\nSTMT_EXEC;;9735\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;9739\n");
if (srcMode == 2)
      {
      _L:
      {
        printf("\nSTMT_EXEC;;9743\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
stat((char const * /* __restrict  */)(inName), (struct stat * /* __restrict  */)(&statBuf));printf("\nFUNC_RETURN;;\n");

      }
        printf("\nSTMT_EXEC;;9745\n");
if ((statBuf.st_mode & 61440U) == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;9748\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Input file %s is a directory.\n", progName, inName);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9749\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;9751\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;9755\n");
if (srcMode == 3)
    {
      printf("\nSTMT_EXEC;;9757\n");
if (!forceOverwrite)
      {
        {
          printf("\nSTMT_EXEC;;9760\n");
tmp___4 = notAStandardFile(inName);
        }
        printf("\nSTMT_EXEC;;9762\n");
if (tmp___4)
        {
          printf("\nSTMT_EXEC;;9764\n");
if (noisy)
          {
            {
              printf("\nSTMT_EXEC;;9767\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s: Input file %s is "
                                                       "not a normal file.\n",
                      progName, inName);printf("\nFUNC_RETURN;;\n");

            }
          }
          {
            printf("\nSTMT_EXEC;;9774\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;9776\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;9780\n");
if (srcMode == 3)
    {
      {
        printf("\nSTMT_EXEC;;9783\n");
tmp___5 = fileExists(outName);
      }
      printf("\nSTMT_EXEC;;9785\n");
if (tmp___5)
      {
        printf("\nSTMT_EXEC;;9787\n");
if (forceOverwrite)
        {
          {
            printf("\nSTMT_EXEC;;9790\n");
printf("\nFUNC_CALL;remove(const char *);\n");
remove((char const *)(outName));printf("\nFUNC_RETURN;;\n");

          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;9796\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: Output file %s "
                                                     "already exists.\n",
                    progName, outName);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9800\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;9802\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;9806\n");
if (srcMode == 3)
    {
      printf("\nSTMT_EXEC;;9808\n");
if (!forceOverwrite)
      {
        {
          printf("\nSTMT_EXEC;;9811\n");
n = countHardLinks(inName);
        }
        printf("\nSTMT_EXEC;;9813\n");
if (n > 0)
        {
          printf("\nSTMT_EXEC;;9815\n");
if (n > 1)
          {
            printf("\nSTMT_EXEC;;9817\n");
tmp___6 = "s";
          }
          else
          {
            printf("\nSTMT_EXEC;;9821\n");
tmp___6 = "";
          }
          {
            printf("\nSTMT_EXEC;;9824\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: Input file %s has %d "
                                                     "other link%s.\n",
                    progName, inName, n, tmp___6);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;9828\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;9830\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;9834\n");
if (srcMode == 3)
    {
      {
        printf("\nSTMT_EXEC;;9837\n");
saveInputFileMetaInfo(inName);
      }
    }
    {
      printf("\nSTMT_EXEC;;9841\n");
if (srcMode == 1)
      {
        printf("\nSTMT_EXEC;;9843\n");
goto case_1___0;
      }
      printf("\nSTMT_EXEC;;9845\n");
if (srcMode == 2)
      {
        printf("\nSTMT_EXEC;;9847\n");
goto case_2___0;
      }
      printf("\nSTMT_EXEC;;9849\n");
if (srcMode == 3)
      {
        printf("\nSTMT_EXEC;;9851\n");
goto case_3___0;
      }
      printf("\nSTMT_EXEC;;9853\n");
goto switch_default;
    case_1___0: /* CIL Label */
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

          printf("\nSTMT_EXEC;;9869\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;9871\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;9873\n");
goto switch_break___0;
    case_2___0: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;9876\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9877\n");
outStr = stdout;
      printf("\nSTMT_EXEC;;9878\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___9 = fileno(stdout);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9879\n");
printf("\nFUNC_CALL;isatty(int);\n");
tmp___10 = isatty(tmp___9);printf("\nFUNC_RETURN;;\n");

    }
      printf("\nSTMT_EXEC;;9881\n");
if (tmp___10)
      {
        {
          printf("\nSTMT_EXEC;;9884\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: I won\'t write compressed "
                                                   "data to a terminal.\n",
                  progName);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9888\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: For help, type: `%s --help\'.\n", progName, progName);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9890\n");
if ((unsigned long)inStr != (unsigned long)((void *)0))
        {
          {
            printf("\nSTMT_EXEC;;9893\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(inStr);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;9897\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;9899\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;9901\n");
if ((unsigned long)inStr == (unsigned long)((void *)0))
      {
        {
          printf("\nSTMT_EXEC;;9904\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___11 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9905\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___12 = strerror(*tmp___11);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9906\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input file %s: %s.\n", progName, inName, tmp___12);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9907\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;9909\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;9911\n");
goto switch_break___0;
    case_3___0: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;9914\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;9915\n");
outStr = fopen_output_safely(outName, "wb");
    }
      printf("\nSTMT_EXEC;;9917\n");
if ((unsigned long)outStr == (unsigned long)((void *)0))
      {
        {
          printf("\nSTMT_EXEC;;9920\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___13 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9921\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___14 = strerror(*tmp___13);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9922\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: Can\'t create output "
                                                   "file %s: %s.\n",
                  progName, outName, tmp___14);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;9927\n");
if ((unsigned long)inStr != (unsigned long)((void *)0))
        {
          {
            printf("\nSTMT_EXEC;;9930\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(inStr);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;9934\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;9936\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;9938\n");
if ((unsigned long)inStr == (unsigned long)((void *)0))
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
        printf("\nSTMT_EXEC;;9945\n");
if ((unsigned long)outStr != (unsigned long)((void *)0))
        {
          {
            printf("\nSTMT_EXEC;;9948\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(outStr);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;9952\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;9954\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;9956\n");
goto switch_break___0;
    switch_default: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;9959\n");
panic("compress: bad srcMode");
    }
      printf("\nSTMT_EXEC;;9961\n");
goto switch_break___0;
    switch_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;9964\n");
if (verbosity >= 1)
    {
      {
        printf("\nSTMT_EXEC;;9967\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "  %s: ", inName);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;9968\n");
pad(inName);
        printf("\nSTMT_EXEC;;9969\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
fflush(stderr);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;9973\n");
outputHandleJustInCase = outStr;
      printf("\nSTMT_EXEC;;9974\n");
deleteOutputOnInterrupt = (Bool)1;
      printf("\nSTMT_EXEC;;9975\n");
compressStream(inStr, outStr);
      printf("\nSTMT_EXEC;;9976\n");
outputHandleJustInCase = (FILE *)((void *)0);
    }
    printf("\nSTMT_EXEC;;9978\n");
if (srcMode == 3)
    {
      {
        printf("\nSTMT_EXEC;;9981\n");
applySavedTimeInfoToOutputFile(outName);
        printf("\nSTMT_EXEC;;9982\n");
deleteOutputOnInterrupt = (Bool)0;
      }
      printf("\nSTMT_EXEC;;9984\n");
if (!keepInputFiles)
      {
        {
          printf("\nSTMT_EXEC;;9987\n");
printf("\nFUNC_CALL;remove(const char *);\n");
tmp___17 = remove((char const *)(inName));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;9988\n");
retVal = tmp___17;
        }
        printf("\nSTMT_EXEC;;9990\n");
if (retVal != 0)
        {
          {
            printf("\nSTMT_EXEC;;9993\n");
ioError();
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;9998\n");
deleteOutputOnInterrupt = (Bool)0;
    printf("\nSTMT_EXEC;;9999\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;10006\n");
Int32 n;
  printf("\nSTMT_EXEC;;10007\n");
Int32 i;
  printf("\nSTMT_EXEC;;10008\n");
Bool magicNumberOK;
  printf("\nSTMT_EXEC;;10009\n");
Bool cantGuess;
  printf("\nSTMT_EXEC;;10010\n");
struct stat statBuf;
  printf("\nSTMT_EXEC;;10011\n");
Bool tmp;
  printf("\nSTMT_EXEC;;10012\n");
Bool tmp___0;
  printf("\nSTMT_EXEC;;10013\n");
int *tmp___1;
  printf("\nSTMT_EXEC;;10014\n");
char *tmp___2;
  printf("\nSTMT_EXEC;;10015\n");
Bool tmp___3;
  printf("\nSTMT_EXEC;;10016\n");
Bool tmp___4;
  printf("\nSTMT_EXEC;;10017\n");
Bool tmp___5;
  printf("\nSTMT_EXEC;;10018\n");
char const *tmp___6;
  printf("\nSTMT_EXEC;;10019\n");
int tmp___7;
  printf("\nSTMT_EXEC;;10020\n");
int tmp___8;
  printf("\nSTMT_EXEC;;10021\n");
int *tmp___9;
  printf("\nSTMT_EXEC;;10022\n");
char *tmp___10;
  printf("\nSTMT_EXEC;;10023\n");
int *tmp___11;
  printf("\nSTMT_EXEC;;10024\n");
char *tmp___12;
  printf("\nSTMT_EXEC;;10025\n");
int *tmp___13;
  printf("\nSTMT_EXEC;;10026\n");
char *tmp___14;
  printf("\nSTMT_EXEC;;10027\n");
IntNative retVal;
  printf("\nSTMT_EXEC;;10028\n");
IntNative tmp___15;
  printf("\nSTMT_EXEC;;10029\n");
IntNative retVal___0;
  printf("\nSTMT_EXEC;;10030\n");
IntNative tmp___16;
  printf("\nSTMT_EXEC;;10031\n");
void *__cil_tmp29;
  printf("\nSTMT_EXEC;;10032\n");
char *__cil_tmp30;
  printf("\nSTMT_EXEC;;10033\n");
char *__cil_tmp31;
  printf("\nSTMT_EXEC;;10034\n");
char *__cil_tmp32;
  printf("\nSTMT_EXEC;;10035\n");
char *__cil_tmp33;
  printf("\nSTMT_EXEC;;10036\n");
char *__cil_tmp34;
  printf("\nSTMT_EXEC;;10037\n");
char *__cil_tmp35;
  printf("\nSTMT_EXEC;;10038\n");
char *__cil_tmp36;
  printf("\nSTMT_EXEC;;10039\n");
char *__cil_tmp37;
  printf("\nSTMT_EXEC;;10040\n");
char *__cil_tmp38;
  {
    printf("\nSTMT_EXEC;;10042\n");
deleteOutputOnInterrupt = (Bool)0;
    printf("\nSTMT_EXEC;;10043\n");
if ((unsigned long)name == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;10045\n");
if (srcMode != 1)
      {
        {
          printf("\nSTMT_EXEC;;10048\n");
panic("uncompress: bad modes\n");
        }
      }
    }
    printf("\nSTMT_EXEC;;10052\n");
cantGuess = (Bool)0;
    {
      printf("\nSTMT_EXEC;;10054\n");
if (srcMode == 1)
      {
        printf("\nSTMT_EXEC;;10056\n");
goto case_1;
      }
      printf("\nSTMT_EXEC;;10058\n");
if (srcMode == 3)
      {
        printf("\nSTMT_EXEC;;10060\n");
goto case_3;
      }
      printf("\nSTMT_EXEC;;10062\n");
if (srcMode == 2)
      {
        printf("\nSTMT_EXEC;;10064\n");
goto case_2;
      }
      printf("\nSTMT_EXEC;;10066\n");
goto switch_break;
    case_1: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10069\n");
copyFileName(inName, (Char *)"(stdin)");
      printf("\nSTMT_EXEC;;10070\n");
copyFileName(outName, (Char *)"(stdout)");
    }
      printf("\nSTMT_EXEC;;10072\n");
goto switch_break;
    case_3: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10075\n");
copyFileName(inName, name);
      printf("\nSTMT_EXEC;;10076\n");
copyFileName(outName, name);
      printf("\nSTMT_EXEC;;10077\n");
i = 0;
    }
      {
        printf("\nSTMT_EXEC;;10080\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;10083\n");
if (!(i < 4))
          {
            printf("\nSTMT_EXEC;;10085\n");
goto while_break;
          }
          {
            printf("\nSTMT_EXEC;;10088\n");
tmp = mapSuffix(outName, zSuffix[i], unzSuffix[i]);
          }
          printf("\nSTMT_EXEC;;10090\n");
if (tmp)
          {
            printf("\nSTMT_EXEC;;10092\n");
goto zzz;
          }
          printf("\nSTMT_EXEC;;10094\n");
i++;
        }
      while_break: /* CIL Label */;
      }
      {
        printf("\nSTMT_EXEC;;10099\n");
cantGuess = (Bool)1;
        printf("\nSTMT_EXEC;;10100\n");
printf("\nFUNC_CALL;strcat(char *__restrict,const char *__restrict);\n");
strcat((char * /* __restrict  */)(outName), (char const * /* __restrict  */) ".out");printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;10102\n");
goto switch_break;
    case_2: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10105\n");
copyFileName(inName, name);
      printf("\nSTMT_EXEC;;10106\n");
copyFileName(outName, (Char *)"(stdout)");
    }
      printf("\nSTMT_EXEC;;10108\n");
goto switch_break;
    switch_break: /* CIL Label */;
    }
  zzz:
    {
printf("\nSTMT_EXEC;;10112\n");
if (srcMode != 1)
    {
      {
        printf("\nSTMT_EXEC;;10115\n");
tmp___0 = containsDubiousChars(inName);
      }
      printf("\nSTMT_EXEC;;10117\n");
if (tmp___0)
      {
        printf("\nSTMT_EXEC;;10119\n");
if (noisy)
        {
          {
            printf("\nSTMT_EXEC;;10122\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: There are no files "
                                                     "matching `%s\'.\n",
                    progName, inName);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;10129\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10131\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
}

    printf("\nSTMT_EXEC;;10134\n");
if (srcMode != 1)
    {
      {
        printf("\nSTMT_EXEC;;10137\n");
tmp___3 = fileExists(inName);
      }
      printf("\nSTMT_EXEC;;10139\n");
if (!tmp___3)
      {
        {
          printf("\nSTMT_EXEC;;10142\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___1 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10143\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___2 = strerror(*tmp___1);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10144\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input file %s: %s.\n", progName, inName, tmp___2);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10145\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10147\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;10150\n");
if (srcMode == 3)
    {
      printf("\nSTMT_EXEC;;10152\n");
goto _L;
    }
    else
    {
      printf("\nSTMT_EXEC;;10156\n");
if (srcMode == 2)
      {
      _L:
      {
        printf("\nSTMT_EXEC;;10160\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
stat((char const * /* __restrict  */)(inName), (struct stat * /* __restrict  */)(&statBuf));printf("\nFUNC_RETURN;;\n");

      }
        printf("\nSTMT_EXEC;;10162\n");
if ((statBuf.st_mode & 61440U) == 16384U)
        {
          {
            printf("\nSTMT_EXEC;;10165\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Input file %s is a directory.\n", progName, inName);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10166\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;10168\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;10172\n");
if (srcMode == 3)
    {
      printf("\nSTMT_EXEC;;10174\n");
if (!forceOverwrite)
      {
        {
          printf("\nSTMT_EXEC;;10177\n");
tmp___4 = notAStandardFile(inName);
        }
        printf("\nSTMT_EXEC;;10179\n");
if (tmp___4)
        {
          printf("\nSTMT_EXEC;;10181\n");
if (noisy)
          {
            {
              printf("\nSTMT_EXEC;;10184\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                      (char const * /* __restrict  */) "%s: Input file %s is "
                                                       "not a normal file.\n",
                      progName, inName);printf("\nFUNC_RETURN;;\n");

            }
          }
          {
            printf("\nSTMT_EXEC;;10191\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;10193\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;10197\n");
if (cantGuess)
    {
      printf("\nSTMT_EXEC;;10199\n");
if (noisy)
      {
        {
          printf("\nSTMT_EXEC;;10202\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: Can\'t guess original "
                                                   "name for %s -- using %s\n",
                  progName, inName, outName);printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;10209\n");
if (srcMode == 3)
    {
      {
        printf("\nSTMT_EXEC;;10212\n");
tmp___5 = fileExists(outName);
      }
      printf("\nSTMT_EXEC;;10214\n");
if (tmp___5)
      {
        printf("\nSTMT_EXEC;;10216\n");
if (forceOverwrite)
        {
          {
            printf("\nSTMT_EXEC;;10219\n");
printf("\nFUNC_CALL;remove(const char *);\n");
remove((char const *)(outName));printf("\nFUNC_RETURN;;\n");

          }
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;10225\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: Output file %s "
                                                     "already exists.\n",
                    progName, outName);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10229\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;10231\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;10235\n");
if (srcMode == 3)
    {
      printf("\nSTMT_EXEC;;10237\n");
if (!forceOverwrite)
      {
        {
          printf("\nSTMT_EXEC;;10240\n");
n = countHardLinks(inName);
        }
        printf("\nSTMT_EXEC;;10242\n");
if (n > 0)
        {
          printf("\nSTMT_EXEC;;10244\n");
if (n > 1)
          {
            printf("\nSTMT_EXEC;;10246\n");
tmp___6 = "s";
          }
          else
          {
            printf("\nSTMT_EXEC;;10250\n");
tmp___6 = "";
          }
          {
            printf("\nSTMT_EXEC;;10253\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: Input file %s has %d "
                                                     "other link%s.\n",
                    progName, inName, n, tmp___6);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10257\n");
setExit(1);
          }
          printf("\nSTMT_EXEC;;10259\n");
printf("\nFUNC_RETURN;;\n");
return;
        }
      }
    }
    printf("\nSTMT_EXEC;;10263\n");
if (srcMode == 3)
    {
      {
        printf("\nSTMT_EXEC;;10266\n");
saveInputFileMetaInfo(inName);
      }
    }
    {
      printf("\nSTMT_EXEC;;10270\n");
if (srcMode == 1)
      {
        printf("\nSTMT_EXEC;;10272\n");
goto case_1___0;
      }
      printf("\nSTMT_EXEC;;10274\n");
if (srcMode == 2)
      {
        printf("\nSTMT_EXEC;;10276\n");
goto case_2___0;
      }
      printf("\nSTMT_EXEC;;10278\n");
if (srcMode == 3)
      {
        printf("\nSTMT_EXEC;;10280\n");
goto case_3___0;
      }
      printf("\nSTMT_EXEC;;10282\n");
goto switch_default;
    case_1___0: /* CIL Label */
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
      printf("\nSTMT_EXEC;;10290\n");
if (tmp___8)
      {
        {
          printf("\nSTMT_EXEC;;10293\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: I won\'t read compressed "
                                                   "data from a terminal.\n",
                  progName);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10297\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: For help, type: `%s --help\'.\n", progName, progName);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10298\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10300\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10302\n");
goto switch_break___0;
    case_2___0: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10305\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10306\n");
outStr = stdout;
    }
      printf("\nSTMT_EXEC;;10308\n");
if ((unsigned long)inStr == (unsigned long)((void *)0))
      {
        {
          printf("\nSTMT_EXEC;;10311\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___9 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10312\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___10 = strerror(*tmp___9);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10313\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input file %s:%s.\n", progName, inName, tmp___10);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;10315\n");
if ((unsigned long)inStr != (unsigned long)((void *)0))
        {
          {
            printf("\nSTMT_EXEC;;10318\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(inStr);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;10322\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10324\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10326\n");
goto switch_break___0;
    case_3___0: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10329\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10330\n");
outStr = fopen_output_safely(outName, "wb");
    }
      printf("\nSTMT_EXEC;;10332\n");
if ((unsigned long)outStr == (unsigned long)((void *)0))
      {
        {
          printf("\nSTMT_EXEC;;10335\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___11 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10336\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___12 = strerror(*tmp___11);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10337\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: Can\'t create output "
                                                   "file %s: %s.\n",
                  progName, outName, tmp___12);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;10342\n");
if ((unsigned long)inStr != (unsigned long)((void *)0))
        {
          {
            printf("\nSTMT_EXEC;;10345\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(inStr);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;10349\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10351\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10353\n");
if ((unsigned long)inStr == (unsigned long)((void *)0))
      {
        {
          printf("\nSTMT_EXEC;;10356\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___13 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10357\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___14 = strerror(*tmp___13);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10358\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input file %s: %s.\n", progName, inName, tmp___14);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;10360\n");
if ((unsigned long)outStr != (unsigned long)((void *)0))
        {
          {
            printf("\nSTMT_EXEC;;10363\n");
printf("\nFUNC_CALL;fclose(FILE *);\n");
fclose(outStr);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;10367\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10369\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10371\n");
goto switch_break___0;
    switch_default: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10374\n");
panic("uncompress: bad srcMode");
    }
      printf("\nSTMT_EXEC;;10376\n");
goto switch_break___0;
    switch_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;10379\n");
if (verbosity >= 1)
    {
      {
        printf("\nSTMT_EXEC;;10382\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "  %s: ", inName);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10383\n");
pad(inName);
        printf("\nSTMT_EXEC;;10384\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
fflush(stderr);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;10388\n");
outputHandleJustInCase = outStr;
      printf("\nSTMT_EXEC;;10389\n");
deleteOutputOnInterrupt = (Bool)1;
      printf("\nSTMT_EXEC;;10390\n");
magicNumberOK = uncompressStream(inStr, outStr);
      printf("\nSTMT_EXEC;;10391\n");
outputHandleJustInCase = (FILE *)((void *)0);
    }
    printf("\nSTMT_EXEC;;10393\n");
if (magicNumberOK)
    {
      printf("\nSTMT_EXEC;;10395\n");
if (srcMode == 3)
      {
        {
          printf("\nSTMT_EXEC;;10398\n");
applySavedTimeInfoToOutputFile(outName);
          printf("\nSTMT_EXEC;;10399\n");
deleteOutputOnInterrupt = (Bool)0;
        }
        printf("\nSTMT_EXEC;;10401\n");
if (!keepInputFiles)
        {
          {
            printf("\nSTMT_EXEC;;10404\n");
printf("\nFUNC_CALL;remove(const char *);\n");
tmp___15 = remove((char const *)(inName));printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;10405\n");
retVal = tmp___15;
          }
          printf("\nSTMT_EXEC;;10407\n");
if (retVal != 0)
          {
            {
              printf("\nSTMT_EXEC;;10410\n");
ioError();
            }
          }
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;10418\n");
unzFailsExist = (Bool)1;
      printf("\nSTMT_EXEC;;10419\n");
deleteOutputOnInterrupt = (Bool)0;
      printf("\nSTMT_EXEC;;10420\n");
if (srcMode == 3)
      {
        {
          printf("\nSTMT_EXEC;;10423\n");
printf("\nFUNC_CALL;remove(const char *);\n");
tmp___16 = remove((char const *)(outName));printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10424\n");
retVal___0 = tmp___16;
        }
        printf("\nSTMT_EXEC;;10426\n");
if (retVal___0 != 0)
        {
          {
            printf("\nSTMT_EXEC;;10429\n");
ioError();
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;10434\n");
deleteOutputOnInterrupt = (Bool)0;
    printf("\nSTMT_EXEC;;10435\n");
if (magicNumberOK)
    {
      printf("\nSTMT_EXEC;;10437\n");
if (verbosity >= 1)
      {
        {
          printf("\nSTMT_EXEC;;10440\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "done\n");printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;10447\n");
setExit(2);
      }
      printf("\nSTMT_EXEC;;10449\n");
if (verbosity >= 1)
      {
        {
          printf("\nSTMT_EXEC;;10452\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "not a bzip2 file.\n");printf("\nFUNC_RETURN;;\n");

        }
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;10458\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: %s is not a bzip2 file.\n", progName, inName);printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;10462\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;10469\n");
struct stat statBuf;
  printf("\nSTMT_EXEC;;10470\n");
Bool tmp;
  printf("\nSTMT_EXEC;;10471\n");
int *tmp___0;
  printf("\nSTMT_EXEC;;10472\n");
char *tmp___1;
  printf("\nSTMT_EXEC;;10473\n");
Bool tmp___2;
  printf("\nSTMT_EXEC;;10474\n");
int tmp___3;
  printf("\nSTMT_EXEC;;10475\n");
int tmp___4;
  printf("\nSTMT_EXEC;;10476\n");
int *tmp___5;
  printf("\nSTMT_EXEC;;10477\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;10478\n");
void *__cil_tmp13;
  printf("\nSTMT_EXEC;;10479\n");
char *__cil_tmp14;
  printf("\nSTMT_EXEC;;10480\n");
char *__cil_tmp15;
  printf("\nSTMT_EXEC;;10481\n");
char *__cil_tmp16;
  printf("\nSTMT_EXEC;;10482\n");
char *__cil_tmp17;
  {
    printf("\nSTMT_EXEC;;10484\n");
deleteOutputOnInterrupt = (Bool)0;
    printf("\nSTMT_EXEC;;10485\n");
if ((unsigned long)name == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;10487\n");
if (srcMode != 1)
      {
        {
          printf("\nSTMT_EXEC;;10490\n");
panic("testf: bad modes\n");
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;10495\n");
copyFileName(outName, (Char *)"(none)");
    }
    {
      printf("\nSTMT_EXEC;;10498\n");
if (srcMode == 1)
      {
        printf("\nSTMT_EXEC;;10500\n");
goto case_1;
      }
      printf("\nSTMT_EXEC;;10502\n");
if (srcMode == 3)
      {
        printf("\nSTMT_EXEC;;10504\n");
goto case_3;
      }
      printf("\nSTMT_EXEC;;10506\n");
if (srcMode == 2)
      {
        printf("\nSTMT_EXEC;;10508\n");
goto case_2;
      }
      printf("\nSTMT_EXEC;;10510\n");
goto switch_break;
    case_1: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10513\n");
copyFileName(inName, (Char *)"(stdin)");
    }
      printf("\nSTMT_EXEC;;10515\n");
goto switch_break;
    case_3: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10518\n");
copyFileName(inName, name);
    }
      printf("\nSTMT_EXEC;;10520\n");
goto switch_break;
    case_2: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10523\n");
copyFileName(inName, name);
    }
      printf("\nSTMT_EXEC;;10525\n");
goto switch_break;
    switch_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;10528\n");
if (srcMode != 1)
    {
      {
        printf("\nSTMT_EXEC;;10531\n");
tmp = containsDubiousChars(inName);
      }
      printf("\nSTMT_EXEC;;10533\n");
if (tmp)
      {
        printf("\nSTMT_EXEC;;10535\n");
if (noisy)
        {
          {
            printf("\nSTMT_EXEC;;10538\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                    (char const * /* __restrict  */) "%s: There are no files "
                                                     "matching `%s\'.\n",
                    progName, inName);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;10545\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10547\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;10550\n");
if (srcMode != 1)
    {
      {
        printf("\nSTMT_EXEC;;10553\n");
tmp___2 = fileExists(inName);
      }
      printf("\nSTMT_EXEC;;10555\n");
if (!tmp___2)
      {
        {
          printf("\nSTMT_EXEC;;10558\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___0 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10559\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___1 = strerror(*tmp___0);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10560\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input %s: %s.\n", progName, inName, tmp___1);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10561\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10563\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    printf("\nSTMT_EXEC;;10566\n");
if (srcMode != 1)
    {
      {
        printf("\nSTMT_EXEC;;10569\n");
printf("\nFUNC_CALL;stat(const char *__restrict,struct stat *__restrict);\n");
stat((char const * /* __restrict  */)(inName), (struct stat * /* __restrict  */)(&statBuf));printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;10571\n");
if ((statBuf.st_mode & 61440U) == 16384U)
      {
        {
          printf("\nSTMT_EXEC;;10574\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Input file %s is a directory.\n", progName, inName);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10575\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10577\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
    }
    {
      printf("\nSTMT_EXEC;;10581\n");
if (srcMode == 1)
      {
        printf("\nSTMT_EXEC;;10583\n");
goto case_1___0;
      }
      printf("\nSTMT_EXEC;;10585\n");
if (srcMode == 2)
      {
        printf("\nSTMT_EXEC;;10587\n");
goto case_2___0;
      }
      printf("\nSTMT_EXEC;;10589\n");
if (srcMode == 3)
      {
        printf("\nSTMT_EXEC;;10591\n");
goto case_2___0;
      }
      printf("\nSTMT_EXEC;;10593\n");
goto switch_default;
    case_1___0: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10596\n");
printf("\nFUNC_CALL;fileno(FILE *);\n");
tmp___3 = fileno(stdin);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;10597\n");
printf("\nFUNC_CALL;isatty(int);\n");
tmp___4 = isatty(tmp___3);printf("\nFUNC_RETURN;;\n");

    }
      printf("\nSTMT_EXEC;;10599\n");
if (tmp___4)
      {
        {
          printf("\nSTMT_EXEC;;10602\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: I won\'t read compressed "
                                                   "data from a terminal.\n",
                  progName);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10606\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: For help, type: `%s --help\'.\n", progName, progName);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10607\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10609\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10611\n");
inStr = stdin;
      printf("\nSTMT_EXEC;;10612\n");
goto switch_break___0;
    case_2___0: /* CIL Label */
    case_3___0: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10616\n");
printf("\nFUNC_CALL;fopen(const char *,const char *);\n");
inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");printf("\nFUNC_RETURN;;\n");

    }
      printf("\nSTMT_EXEC;;10618\n");
if ((unsigned long)inStr == (unsigned long)((void *)0))
      {
        {
          printf("\nSTMT_EXEC;;10621\n");
printf("\nFUNC_CALL;__errno_location();\n");
tmp___5 = __errno_location();printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10622\n");
printf("\nFUNC_CALL;strerror(int);\n");
tmp___6 = strerror(*tmp___5);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10623\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Can\'t open input file %s:%s.\n", progName, inName, tmp___6);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;10624\n");
setExit(1);
        }
        printf("\nSTMT_EXEC;;10626\n");
printf("\nFUNC_RETURN;;\n");
return;
      }
      printf("\nSTMT_EXEC;;10628\n");
goto switch_break___0;
    switch_default: /* CIL Label */
    {
      printf("\nSTMT_EXEC;;10631\n");
panic("testf: bad srcMode");
    }
      printf("\nSTMT_EXEC;;10633\n");
goto switch_break___0;
    switch_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;10636\n");
if (verbosity >= 1)
    {
      {
        printf("\nSTMT_EXEC;;10639\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "  %s: ", inName);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;10640\n");
pad(inName);
        printf("\nSTMT_EXEC;;10641\n");
printf("\nFUNC_CALL;fflush(FILE *);\n");
fflush(stderr);printf("\nFUNC_RETURN;;\n");

      }
    }
    {
      printf("\nSTMT_EXEC;;10645\n");
outputHandleJustInCase = (FILE *)((void *)0);
      printf("\nSTMT_EXEC;;10646\n");
allOK = testStream(inStr);
    }
    printf("\nSTMT_EXEC;;10648\n");
if (allOK)
    {
      printf("\nSTMT_EXEC;;10650\n");
if (verbosity >= 1)
      {
        {
          printf("\nSTMT_EXEC;;10653\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "ok\n");printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;10657\n");
if (!allOK)
    {
      printf("\nSTMT_EXEC;;10659\n");
testFailsExist = (Bool)1;
    }
    printf("\nSTMT_EXEC;;10661\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void license(void)
{
  printf("\nFUNC_CALL;license();\n");
printf("\nSTMT_EXEC;;10666\n");
char const *tmp;
  {
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
    printf("\nSTMT_EXEC;;10688\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void usage(Char *fullProgName)
{
  printf("\nFUNC_CALL;usage(Char *);\n");
printf("\nSTMT_EXEC;;10693\n");
char const *tmp;
  {
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
    printf("\nSTMT_EXEC;;10732\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void redundant(Char *flag)
{
  printf("\nFUNC_CALL;redundant(Char *);\n");
{
    {
      printf("\nSTMT_EXEC;;10739\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */) "%s: %s is redundant in "
                                               "versions 0.9.5 and above\n",
              progName, flag);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10744\n");
printf("\nFUNC_RETURN;;\n");
return;
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
      {
        printf("\nSTMT_EXEC;;10757\n");
outOfMemory();
      }
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
      printf("\nSTMT_EXEC;;10769\n");
c->name = (Char *)((void *)0);
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
        printf("\nSTMT_EXEC;;10797\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;10800\n");
if (!((unsigned long)tmp___3->link != (unsigned long)((void *)0)))
          {
            printf("\nSTMT_EXEC;;10802\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;10804\n");
tmp___3 = tmp___3->link;
        }
      while_break: /* CIL Label */;
      }
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
static void addFlagsFromEnvVar(Cell **argList, Char *varName)
{
  printf("\nFUNC_CALL;addFlagsFromEnvVar(Cell **,Char *);\n");
printf("\nSTMT_EXEC;;10817\n");
Int32 i;
  printf("\nSTMT_EXEC;;10818\n");
Int32 j;
  printf("\nSTMT_EXEC;;10819\n");
Int32 k;
  printf("\nSTMT_EXEC;;10820\n");
Char *envbase;
  printf("\nSTMT_EXEC;;10821\n");
Char *p;
  printf("\nSTMT_EXEC;;10822\n");
unsigned short const **tmp;
  printf("\nSTMT_EXEC;;10823\n");
unsigned short const **tmp___0;
  {
    {
      printf("\nSTMT_EXEC;;10826\n");
printf("\nFUNC_CALL;getenv(const char *);\n");
envbase = getenv((char const *)varName);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;10828\n");
if ((unsigned long)envbase != (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;10830\n");
p = envbase;
      printf("\nSTMT_EXEC;;10831\n");
i = 0;
      {
        printf("\nSTMT_EXEC;;10833\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;10836\n");
if (!(!((int)*(p + i) == 0)))
          {
            printf("\nSTMT_EXEC;;10838\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;10840\n");
p += i;
          printf("\nSTMT_EXEC;;10841\n");
i = 0;
          {
            printf("\nSTMT_EXEC;;10843\n");
while (1)
            {
            while_continue___0: /* CIL Label */;
              {
                printf("\nSTMT_EXEC;;10847\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;10849\n");
if (!((int const) * (*tmp + (Int32) * (p + 0)) & 8192))
              {
                printf("\nSTMT_EXEC;;10851\n");
goto while_break___0;
              }
              printf("\nSTMT_EXEC;;10853\n");
p++;
            }
          while_break___0: /* CIL Label */;
          }
          {
            printf("\nSTMT_EXEC;;10858\n");
while (1)
            {
            while_continue___1: /* CIL Label */;
              printf("\nSTMT_EXEC;;10861\n");
if ((int)*(p + i) != 0)
              {
                {
                  printf("\nSTMT_EXEC;;10864\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp___0 = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

                }
                printf("\nSTMT_EXEC;;10866\n");
if ((int const) * (*tmp___0 + (Int32) * (p + i)) & 8192)
                {
                  printf("\nSTMT_EXEC;;10868\n");
goto while_break___1;
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;10873\n");
goto while_break___1;
              }
              printf("\nSTMT_EXEC;;10875\n");
i++;
            }
          while_break___1: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;10879\n");
if (i > 0)
          {
            printf("\nSTMT_EXEC;;10881\n");
k = i;
            printf("\nSTMT_EXEC;;10882\n");
if (k > 1024)
            {
              printf("\nSTMT_EXEC;;10884\n");
k = 1024;
            }
            printf("\nSTMT_EXEC;;10886\n");
j = 0;
            {
              printf("\nSTMT_EXEC;;10888\n");
while (1)
              {
              while_continue___2: /* CIL Label */;
                printf("\nSTMT_EXEC;;10891\n");
if (!(j < k))
                {
                  printf("\nSTMT_EXEC;;10893\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;10895\n");
tmpName[j] = *(p + j);
                printf("\nSTMT_EXEC;;10896\n");
j++;
              }
            while_break___2: /* CIL Label */;
            }
            {
              printf("\nSTMT_EXEC;;10901\n");
tmpName[k] = (Char)0;
              printf("\nSTMT_EXEC;;10902\n");
*argList = snocString(*argList, tmpName);
            }
          }
        }
      while_break: /* CIL Label */;
      }
    }
    printf("\nSTMT_EXEC;;10909\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;10921\n");
int tmp___0;
  printf("\nSTMT_EXEC;;10922\n");
size_t tmp___2;
  printf("\nSTMT_EXEC;;10923\n");
char *tmp___3;
  printf("\nSTMT_EXEC;;10924\n");
char *tmp___4;
  printf("\nSTMT_EXEC;;10925\n");
char *tmp___5;
  printf("\nSTMT_EXEC;;10926\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;10927\n");
char *tmp___7;
  printf("\nSTMT_EXEC;;10928\n");
char *tmp___8;
  printf("\nSTMT_EXEC;;10929\n");
int tmp___9;
  printf("\nSTMT_EXEC;;10930\n");
int tmp___10;
  printf("\nSTMT_EXEC;;10931\n");
int tmp___11;
  printf("\nSTMT_EXEC;;10932\n");
int tmp___12;
  printf("\nSTMT_EXEC;;10933\n");
int tmp___13;
  printf("\nSTMT_EXEC;;10934\n");
int tmp___14;
  printf("\nSTMT_EXEC;;10935\n");
int tmp___15;
  printf("\nSTMT_EXEC;;10936\n");
int tmp___16;
  printf("\nSTMT_EXEC;;10937\n");
int tmp___17;
  printf("\nSTMT_EXEC;;10938\n");
int tmp___18;
  printf("\nSTMT_EXEC;;10939\n");
int tmp___19;
  printf("\nSTMT_EXEC;;10940\n");
int tmp___20;
  printf("\nSTMT_EXEC;;10941\n");
int tmp___21;
  printf("\nSTMT_EXEC;;10942\n");
int tmp___22;
  printf("\nSTMT_EXEC;;10943\n");
int tmp___23;
  printf("\nSTMT_EXEC;;10944\n");
int tmp___24;
  printf("\nSTMT_EXEC;;10945\n");
int tmp___25;
  printf("\nSTMT_EXEC;;10946\n");
int tmp___26;
  printf("\nSTMT_EXEC;;10947\n");
int tmp___27;
  printf("\nSTMT_EXEC;;10948\n");
int tmp___28;
  printf("\nSTMT_EXEC;;10949\n");
int tmp___29;
  printf("\nSTMT_EXEC;;10950\n");
int tmp___30;
  printf("\nSTMT_EXEC;;10951\n");
int tmp___31;
  printf("\nSTMT_EXEC;;10952\n");
Cell *aa2;
  printf("\nSTMT_EXEC;;10953\n");
char *__cil_tmp42;
  printf("\nSTMT_EXEC;;10954\n");
char *__cil_tmp43;
  printf("\nSTMT_EXEC;;10955\n");
char *__cil_tmp44;
  printf("\nSTMT_EXEC;;10956\n");
char *__cil_tmp45;
  {
    printf("\nSTMT_EXEC;;10958\n");
if (sizeof(Int32) != 4UL)
    {
      {
        printf("\nSTMT_EXEC;;10961\n");
configError();
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;10966\n");
if (sizeof(UInt32) != 4UL)
      {
        {
          printf("\nSTMT_EXEC;;10969\n");
configError();
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;10974\n");
if (sizeof(Int16) != 2UL)
        {
          {
            printf("\nSTMT_EXEC;;10977\n");
configError();
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;10982\n");
if (sizeof(UInt16) != 2UL)
          {
            {
              printf("\nSTMT_EXEC;;10985\n");
configError();
            }
          }
          else
          {
            printf("\nSTMT_EXEC;;10990\n");
if (sizeof(Char) != 1UL)
            {
              {
                printf("\nSTMT_EXEC;;10993\n");
configError();
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;10998\n");
if (sizeof(UChar) != 1UL)
              {
                {
                  printf("\nSTMT_EXEC;;11001\n");
configError();
                }
              }
            }
          }
        }
      }
    }
    {
      printf("\nSTMT_EXEC;;11010\n");
outputHandleJustInCase = (FILE *)((void *)0);
      printf("\nSTMT_EXEC;;11011\n");
smallMode = (Bool)0;
      printf("\nSTMT_EXEC;;11012\n");
keepInputFiles = (Bool)0;
      printf("\nSTMT_EXEC;;11013\n");
forceOverwrite = (Bool)0;
      printf("\nSTMT_EXEC;;11014\n");
noisy = (Bool)1;
      printf("\nSTMT_EXEC;;11015\n");
verbosity = 0;
      printf("\nSTMT_EXEC;;11016\n");
blockSize100k = 9;
      printf("\nSTMT_EXEC;;11017\n");
testFailsExist = (Bool)0;
      printf("\nSTMT_EXEC;;11018\n");
unzFailsExist = (Bool)0;
      printf("\nSTMT_EXEC;;11019\n");
numFileNames = 0;
      printf("\nSTMT_EXEC;;11020\n");
numFilesProcessed = 0;
      printf("\nSTMT_EXEC;;11021\n");
workFactor = 30;
      printf("\nSTMT_EXEC;;11022\n");
deleteOutputOnInterrupt = (Bool)0;
      printf("\nSTMT_EXEC;;11023\n");
exitValue = 0;
      printf("\nSTMT_EXEC;;11024\n");
j = 0;
      printf("\nSTMT_EXEC;;11025\n");
i = j;
      printf("\nSTMT_EXEC;;11026\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(11, &mySIGSEGVorSIGBUScatcher);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11027\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(7, &mySIGSEGVorSIGBUScatcher);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;11028\n");
copyFileName(inName, (Char *)"(none)");
      printf("\nSTMT_EXEC;;11029\n");
copyFileName(outName, (Char *)"(none)");
      printf("\nSTMT_EXEC;;11030\n");
copyFileName(progNameReally, *(argv + 0));
      printf("\nSTMT_EXEC;;11031\n");
progName = &progNameReally[0];
      printf("\nSTMT_EXEC;;11032\n");
tmp = &progNameReally[0];
    }
    {
      printf("\nSTMT_EXEC;;11035\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
      printf("\nSTMT_EXEC;;11052\n");
addFlagsFromEnvVar(&argList, (Char *)"BZIP2");
      printf("\nSTMT_EXEC;;11053\n");
addFlagsFromEnvVar(&argList, (Char *)"BZIP");
      printf("\nSTMT_EXEC;;11054\n");
i = 1;
    }
    {
      printf("\nSTMT_EXEC;;11057\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;11071\n");
longestFileName = 7;
    printf("\nSTMT_EXEC;;11072\n");
numFileNames = 0;
    printf("\nSTMT_EXEC;;11073\n");
decode = (Bool)1;
    printf("\nSTMT_EXEC;;11074\n");
aa = argList;
    {
      printf("\nSTMT_EXEC;;11076\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;11079\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11081\n");
goto while_break___1;
        }
        {
          printf("\nSTMT_EXEC;;11084\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___0 = strcmp((char const *)aa->name, "--");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;11086\n");
if (tmp___0 == 0)
        {
          printf("\nSTMT_EXEC;;11088\n");
decode = (Bool)0;
          printf("\nSTMT_EXEC;;11089\n");
goto __Cont;
        }
        printf("\nSTMT_EXEC;;11091\n");
if ((int)*(aa->name + 0) == 45)
        {
          printf("\nSTMT_EXEC;;11093\n");
if (decode)
          {
            printf("\nSTMT_EXEC;;11095\n");
goto __Cont;
          }
        }
        {
          printf("\nSTMT_EXEC;;11099\n");
numFileNames++;
          printf("\nSTMT_EXEC;;11100\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
tmp___2 = strlen((char const *)aa->name);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;11102\n");
if (longestFileName < (Int32)tmp___2)
        {
          {
            printf("\nSTMT_EXEC;;11105\n");
printf("\nFUNC_CALL;strlen(const char *);\n");
longestFileName = (Int32)strlen((char const *)aa->name);printf("\nFUNC_RETURN;;\n");

          }
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
      printf("\nSTMT_EXEC;;11115\n");
srcMode = 1;
    }
    else
    {
      printf("\nSTMT_EXEC;;11119\n");
srcMode = 3;
    }
    {
      printf("\nSTMT_EXEC;;11122\n");
opMode = 1;
      printf("\nSTMT_EXEC;;11123\n");
printf("\nFUNC_CALL;strstr(const char *,const char *);\n");
tmp___3 = strstr((char const *)progName, "unzip");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;11125\n");
if ((unsigned long)tmp___3 != (unsigned long)((char *)0))
    {
      printf("\nSTMT_EXEC;;11127\n");
opMode = 2;
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;11132\n");
printf("\nFUNC_CALL;strstr(const char *,const char *);\n");
tmp___4 = strstr((char const *)progName, "UNZIP");printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;11134\n");
if ((unsigned long)tmp___4 != (unsigned long)((char *)0))
      {
        printf("\nSTMT_EXEC;;11136\n");
opMode = 2;
      }
    }
    {
      printf("\nSTMT_EXEC;;11140\n");
printf("\nFUNC_CALL;strstr(const char *,const char *);\n");
tmp___5 = strstr((char const *)progName, "z2cat");printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;11142\n");
if ((unsigned long)tmp___5 != (unsigned long)((char *)0))
    {
      printf("\nSTMT_EXEC;;11144\n");
goto _L;
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;11149\n");
printf("\nFUNC_CALL;strstr(const char *,const char *);\n");
tmp___6 = strstr((char const *)progName, "Z2CAT");printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;11151\n");
if ((unsigned long)tmp___6 != (unsigned long)((char *)0))
      {
        printf("\nSTMT_EXEC;;11153\n");
goto _L;
      }
      else
      {
        {
          printf("\nSTMT_EXEC;;11158\n");
printf("\nFUNC_CALL;strstr(const char *,const char *);\n");
tmp___7 = strstr((char const *)progName, "zcat");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;11160\n");
if ((unsigned long)tmp___7 != (unsigned long)((char *)0))
        {
          printf("\nSTMT_EXEC;;11162\n");
goto _L;
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;11167\n");
printf("\nFUNC_CALL;strstr(const char *,const char *);\n");
tmp___8 = strstr((char const *)progName, "ZCAT");printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;11169\n");
if ((unsigned long)tmp___8 != (unsigned long)((char *)0))
          {
          _L:
            {
printf("\nSTMT_EXEC;;11172\n");
opMode = 2;
}

            printf("\nSTMT_EXEC;;11173\n");
if (numFileNames == 0)
            {
              printf("\nSTMT_EXEC;;11175\n");
srcMode = 1;
            }
            else
            {
              printf("\nSTMT_EXEC;;11179\n");
srcMode = 2;
            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;11185\n");
aa = argList;
    {
      printf("\nSTMT_EXEC;;11187\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;11190\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11192\n");
goto while_break___2;
        }
        {
          printf("\nSTMT_EXEC;;11195\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___9 = strcmp((char const *)aa->name, "--");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;11197\n");
if (tmp___9 == 0)
        {
          printf("\nSTMT_EXEC;;11199\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;11201\n");
if ((int)*(aa->name + 0) == 45)
        {
          printf("\nSTMT_EXEC;;11203\n");
if ((int)*(aa->name + 1) != 45)
          {
            printf("\nSTMT_EXEC;;11205\n");
j = 1;
            {
              printf("\nSTMT_EXEC;;11207\n");
while (1)
              {
              while_continue___3: /* CIL Label */;
                printf("\nSTMT_EXEC;;11210\n");
if (!((int)*(aa->name + j) != 0))
                {
                  printf("\nSTMT_EXEC;;11212\n");
goto while_break___3;
                }
                {
                  printf("\nSTMT_EXEC;;11215\n");
if ((int)*(aa->name + j) == 99)
                  {
                    printf("\nSTMT_EXEC;;11217\n");
goto case_99;
                  }
                  printf("\nSTMT_EXEC;;11219\n");
if ((int)*(aa->name + j) == 100)
                  {
                    printf("\nSTMT_EXEC;;11221\n");
goto case_100;
                  }
                  printf("\nSTMT_EXEC;;11223\n");
if ((int)*(aa->name + j) == 122)
                  {
                    printf("\nSTMT_EXEC;;11225\n");
goto case_122;
                  }
                  printf("\nSTMT_EXEC;;11227\n");
if ((int)*(aa->name + j) == 102)
                  {
                    printf("\nSTMT_EXEC;;11229\n");
goto case_102;
                  }
                  printf("\nSTMT_EXEC;;11231\n");
if ((int)*(aa->name + j) == 116)
                  {
                    printf("\nSTMT_EXEC;;11233\n");
goto case_116;
                  }
                  printf("\nSTMT_EXEC;;11235\n");
if ((int)*(aa->name + j) == 107)
                  {
                    printf("\nSTMT_EXEC;;11237\n");
goto case_107;
                  }
                  printf("\nSTMT_EXEC;;11239\n");
if ((int)*(aa->name + j) == 115)
                  {
                    printf("\nSTMT_EXEC;;11241\n");
goto case_115;
                  }
                  printf("\nSTMT_EXEC;;11243\n");
if ((int)*(aa->name + j) == 113)
                  {
                    printf("\nSTMT_EXEC;;11245\n");
goto case_113;
                  }
                  printf("\nSTMT_EXEC;;11247\n");
if ((int)*(aa->name + j) == 49)
                  {
                    printf("\nSTMT_EXEC;;11249\n");
goto case_49;
                  }
                  printf("\nSTMT_EXEC;;11251\n");
if ((int)*(aa->name + j) == 50)
                  {
                    printf("\nSTMT_EXEC;;11253\n");
goto case_50;
                  }
                  printf("\nSTMT_EXEC;;11255\n");
if ((int)*(aa->name + j) == 51)
                  {
                    printf("\nSTMT_EXEC;;11257\n");
goto case_51;
                  }
                  printf("\nSTMT_EXEC;;11259\n");
if ((int)*(aa->name + j) == 52)
                  {
                    printf("\nSTMT_EXEC;;11261\n");
goto case_52;
                  }
                  printf("\nSTMT_EXEC;;11263\n");
if ((int)*(aa->name + j) == 53)
                  {
                    printf("\nSTMT_EXEC;;11265\n");
goto case_53;
                  }
                  printf("\nSTMT_EXEC;;11267\n");
if ((int)*(aa->name + j) == 54)
                  {
                    printf("\nSTMT_EXEC;;11269\n");
goto case_54;
                  }
                  printf("\nSTMT_EXEC;;11271\n");
if ((int)*(aa->name + j) == 55)
                  {
                    printf("\nSTMT_EXEC;;11273\n");
goto case_55;
                  }
                  printf("\nSTMT_EXEC;;11275\n");
if ((int)*(aa->name + j) == 56)
                  {
                    printf("\nSTMT_EXEC;;11277\n");
goto case_56;
                  }
                  printf("\nSTMT_EXEC;;11279\n");
if ((int)*(aa->name + j) == 57)
                  {
                    printf("\nSTMT_EXEC;;11281\n");
goto case_57;
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
                  printf("\nSTMT_EXEC;;11291\n");
if ((int)*(aa->name + j) == 118)
                  {
                    printf("\nSTMT_EXEC;;11293\n");
goto case_118;
                  }
                  printf("\nSTMT_EXEC;;11295\n");
if ((int)*(aa->name + j) == 104)
                  {
                    printf("\nSTMT_EXEC;;11297\n");
goto case_104;
                  }
                  printf("\nSTMT_EXEC;;11299\n");
goto switch_default;
                case_99: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11301\n");
srcMode = 2;
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
                case_122: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11307\n");
opMode = 1;
}

                  printf("\nSTMT_EXEC;;11308\n");
goto switch_break;
                case_102: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11310\n");
forceOverwrite = (Bool)1;
}

                  printf("\nSTMT_EXEC;;11311\n");
goto switch_break;
                case_116: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11313\n");
opMode = 3;
}

                  printf("\nSTMT_EXEC;;11314\n");
goto switch_break;
                case_107: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11316\n");
keepInputFiles = (Bool)1;
}

                  printf("\nSTMT_EXEC;;11317\n");
goto switch_break;
                case_115: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11319\n");
smallMode = (Bool)1;
}

                  printf("\nSTMT_EXEC;;11320\n");
goto switch_break;
                case_113: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11322\n");
noisy = (Bool)0;
}

                  printf("\nSTMT_EXEC;;11323\n");
goto switch_break;
                case_49: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11325\n");
blockSize100k = 1;
}

                  printf("\nSTMT_EXEC;;11326\n");
goto switch_break;
                case_50: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11328\n");
blockSize100k = 2;
}

                  printf("\nSTMT_EXEC;;11329\n");
goto switch_break;
                case_51: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11331\n");
blockSize100k = 3;
}

                  printf("\nSTMT_EXEC;;11332\n");
goto switch_break;
                case_52: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11334\n");
blockSize100k = 4;
}

                  printf("\nSTMT_EXEC;;11335\n");
goto switch_break;
                case_53: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11337\n");
blockSize100k = 5;
}

                  printf("\nSTMT_EXEC;;11338\n");
goto switch_break;
                case_54: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11340\n");
blockSize100k = 6;
}

                  printf("\nSTMT_EXEC;;11341\n");
goto switch_break;
                case_55: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11343\n");
blockSize100k = 7;
}

                  printf("\nSTMT_EXEC;;11344\n");
goto switch_break;
                case_56: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11346\n");
blockSize100k = 8;
}

                  printf("\nSTMT_EXEC;;11347\n");
goto switch_break;
                case_57: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11349\n");
blockSize100k = 9;
}

                  printf("\nSTMT_EXEC;;11350\n");
goto switch_break;
                case_86: /* CIL Label */
                case_76: /* CIL Label */
                {
                  printf("\nSTMT_EXEC;;11354\n");
license();
                }
                  printf("\nSTMT_EXEC;;11356\n");
goto switch_break;
                case_118: /* CIL Label */
                  {
printf("\nSTMT_EXEC;;11358\n");
verbosity++;
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
                  printf("\nSTMT_EXEC;;11365\n");
goto switch_break;
                switch_default: /* CIL Label */
                {
                  printf("\nSTMT_EXEC;;11368\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%s: Bad flag `%s\'\n", progName, aa->name);printf("\nFUNC_RETURN;;\n");

                  printf("\nSTMT_EXEC;;11369\n");
usage(progName);
                  printf("\nSTMT_EXEC;;11370\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(1);printf("\nFUNC_RETURN;;\n");

                }
                  printf("\nSTMT_EXEC;;11372\n");
goto switch_break;
                switch_break: /* CIL Label */;
                }
                printf("\nSTMT_EXEC;;11375\n");
j++;
              }
            while_break___3: /* CIL Label */;
            }
          }
        }
        printf("\nSTMT_EXEC;;11381\n");
aa = aa->link;
      }
    while_break___2: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;11385\n");
aa = argList;
    {
      printf("\nSTMT_EXEC;;11387\n");
while (1)
      {
      while_continue___4: /* CIL Label */;
        printf("\nSTMT_EXEC;;11390\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11392\n");
goto while_break___4;
        }
        {
          printf("\nSTMT_EXEC;;11395\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___10 = strcmp((char const *)aa->name, "--");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;11397\n");
if (tmp___10 == 0)
        {
          printf("\nSTMT_EXEC;;11399\n");
goto while_break___4;
        }
        {
          printf("\nSTMT_EXEC;;11402\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___28 = strcmp((char const *)aa->name, "--stdout");printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;11404\n");
if (tmp___28 == 0)
        {
          printf("\nSTMT_EXEC;;11406\n");
srcMode = 2;
        }
        else
        {
          {
            printf("\nSTMT_EXEC;;11411\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___27 = strcmp((char const *)aa->name, "--decompress");printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;11413\n");
if (tmp___27 == 0)
          {
            printf("\nSTMT_EXEC;;11415\n");
opMode = 2;
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;11420\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___26 = strcmp((char const *)aa->name, "--compress");printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;11422\n");
if (tmp___26 == 0)
            {
              printf("\nSTMT_EXEC;;11424\n");
opMode = 1;
            }
            else
            {
              {
                printf("\nSTMT_EXEC;;11429\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___25 = strcmp((char const *)aa->name, "--force");printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;11431\n");
if (tmp___25 == 0)
              {
                printf("\nSTMT_EXEC;;11433\n");
forceOverwrite = (Bool)1;
              }
              else
              {
                {
                  printf("\nSTMT_EXEC;;11438\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___24 = strcmp((char const *)aa->name, "--test");printf("\nFUNC_RETURN;;\n");

                }
                printf("\nSTMT_EXEC;;11440\n");
if (tmp___24 == 0)
                {
                  printf("\nSTMT_EXEC;;11442\n");
opMode = 3;
                }
                else
                {
                  {
                    printf("\nSTMT_EXEC;;11447\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___23 = strcmp((char const *)aa->name, "--keep");printf("\nFUNC_RETURN;;\n");

                  }
                  printf("\nSTMT_EXEC;;11449\n");
if (tmp___23 == 0)
                  {
                    printf("\nSTMT_EXEC;;11451\n");
keepInputFiles = (Bool)1;
                  }
                  else
                  {
                    {
                      printf("\nSTMT_EXEC;;11456\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___22 = strcmp((char const *)aa->name, "--small");printf("\nFUNC_RETURN;;\n");

                    }
                    printf("\nSTMT_EXEC;;11458\n");
if (tmp___22 == 0)
                    {
                      printf("\nSTMT_EXEC;;11460\n");
smallMode = (Bool)1;
                    }
                    else
                    {
                      {
                        printf("\nSTMT_EXEC;;11465\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___21 = strcmp((char const *)aa->name, "--quiet");printf("\nFUNC_RETURN;;\n");

                      }
                      printf("\nSTMT_EXEC;;11467\n");
if (tmp___21 == 0)
                      {
                        printf("\nSTMT_EXEC;;11469\n");
noisy = (Bool)0;
                      }
                      else
                      {
                        {
                          printf("\nSTMT_EXEC;;11474\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___20 = strcmp((char const *)aa->name, "--version");printf("\nFUNC_RETURN;;\n");

                        }
                        printf("\nSTMT_EXEC;;11476\n");
if (tmp___20 == 0)
                        {
                          {
                            printf("\nSTMT_EXEC;;11479\n");
license();
                          }
                        }
                        else
                        {
                          {
                            printf("\nSTMT_EXEC;;11485\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___19 = strcmp((char const *)aa->name, "--license");printf("\nFUNC_RETURN;;\n");

                          }
                          printf("\nSTMT_EXEC;;11487\n");
if (tmp___19 == 0)
                          {
                            {
                              printf("\nSTMT_EXEC;;11490\n");
license();
                            }
                          }
                          else
                          {
                            {
                              printf("\nSTMT_EXEC;;11496\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___18 = strcmp((char const *)aa->name, "--exponential");printf("\nFUNC_RETURN;;\n");

                            }
                            printf("\nSTMT_EXEC;;11498\n");
if (tmp___18 == 0)
                            {
                              printf("\nSTMT_EXEC;;11500\n");
workFactor = 1;
                            }
                            else
                            {
                              {
                                printf("\nSTMT_EXEC;;11505\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___17 = strcmp((char const *)aa->name, "--repetitive-best");printf("\nFUNC_RETURN;;\n");

                              }
                              printf("\nSTMT_EXEC;;11507\n");
if (tmp___17 == 0)
                              {
                                {
                                  printf("\nSTMT_EXEC;;11510\n");
redundant(aa->name);
                                }
                              }
                              else
                              {
                                {
                                  printf("\nSTMT_EXEC;;11516\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___16 = strcmp((char const *)aa->name, "--repetitive-fast");printf("\nFUNC_RETURN;;\n");

                                }
                                printf("\nSTMT_EXEC;;11518\n");
if (tmp___16 == 0)
                                {
                                  {
                                    printf("\nSTMT_EXEC;;11521\n");
redundant(aa->name);
                                  }
                                }
                                else
                                {
                                  {
                                    printf("\nSTMT_EXEC;;11527\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___15 = strcmp((char const *)aa->name, "--fast");printf("\nFUNC_RETURN;;\n");

                                  }
                                  printf("\nSTMT_EXEC;;11529\n");
if (tmp___15 == 0)
                                  {
                                    printf("\nSTMT_EXEC;;11531\n");
blockSize100k = 1;
                                  }
                                  else
                                  {
                                    {
                                      printf("\nSTMT_EXEC;;11536\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___14 = strcmp((char const *)aa->name, "--best");printf("\nFUNC_RETURN;;\n");

                                    }
                                    printf("\nSTMT_EXEC;;11538\n");
if (tmp___14 == 0)
                                    {
                                      printf("\nSTMT_EXEC;;11540\n");
blockSize100k = 9;
                                    }
                                    else
                                    {
                                      {
                                        printf("\nSTMT_EXEC;;11545\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___13 = strcmp((char const *)aa->name, "--verbose");printf("\nFUNC_RETURN;;\n");

                                      }
                                      printf("\nSTMT_EXEC;;11547\n");
if (tmp___13 == 0)
                                      {
                                        printf("\nSTMT_EXEC;;11549\n");
verbosity++;
                                      }
                                      else
                                      {
                                        {
                                          printf("\nSTMT_EXEC;;11554\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___12 = strcmp((char const *)aa->name, "--help");printf("\nFUNC_RETURN;;\n");

                                        }
                                        printf("\nSTMT_EXEC;;11556\n");
if (tmp___12 == 0)
                                        {
                                          {
                                            printf("\nSTMT_EXEC;;11559\n");
usage(progName);
                                            printf("\nSTMT_EXEC;;11560\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(0);printf("\nFUNC_RETURN;;\n");

                                          }
                                        }
                                        else
                                        {
                                          {
                                            printf("\nSTMT_EXEC;;11566\n");
printf("\nFUNC_CALL;strncmp(const char *,const char *,size_t);\n");
tmp___11 = strncmp((char const *)aa->name, "--", (size_t)2);printf("\nFUNC_RETURN;;\n");

                                          }
                                          printf("\nSTMT_EXEC;;11568\n");
if (tmp___11 == 0)
                                          {
                                            {
                                              printf("\nSTMT_EXEC;;11571\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                                                      (char const * /* __restrict  */) "%s"
                                                                                       ": "
                                                                                       "Ba"
                                                                                       "d "
                                                                                       "fl"
                                                                                       "ag"
                                                                                       " `"
                                                                                       "%s"
                                                                                       "\'"
                                                                                       "\n",
                                                      progName, aa->name);printf("\nFUNC_RETURN;;\n");

                                              printf("\nSTMT_EXEC;;11583\n");
usage(progName);
                                              printf("\nSTMT_EXEC;;11584\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(1);printf("\nFUNC_RETURN;;\n");

                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        printf("\nSTMT_EXEC;;11604\n");
aa = aa->link;
      }
    while_break___4: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;11608\n");
if (verbosity > 4)
    {
      printf("\nSTMT_EXEC;;11610\n");
verbosity = 4;
    }
    printf("\nSTMT_EXEC;;11612\n");
if (opMode == 1)
    {
      printf("\nSTMT_EXEC;;11614\n");
if (smallMode)
      {
        printf("\nSTMT_EXEC;;11616\n");
if (blockSize100k > 2)
        {
          printf("\nSTMT_EXEC;;11618\n");
blockSize100k = 2;
        }
      }
    }
    printf("\nSTMT_EXEC;;11622\n");
if (opMode == 3)
    {
      printf("\nSTMT_EXEC;;11624\n");
if (srcMode == 2)
      {
        {
          printf("\nSTMT_EXEC;;11627\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "%s: -c and -t cannot be "
                                                   "used together.\n",
                  progName);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;11631\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(1);printf("\nFUNC_RETURN;;\n");

        }
      }
    }
    printf("\nSTMT_EXEC;;11635\n");
if (srcMode == 2)
    {
      printf("\nSTMT_EXEC;;11637\n");
if (numFileNames == 0)
      {
        printf("\nSTMT_EXEC;;11639\n");
srcMode = 1;
      }
    }
    printf("\nSTMT_EXEC;;11642\n");
if (opMode != 1)
    {
      printf("\nSTMT_EXEC;;11644\n");
blockSize100k = 0;
    }
    printf("\nSTMT_EXEC;;11646\n");
if (srcMode == 3)
    {
      {
        printf("\nSTMT_EXEC;;11649\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(2, &mySignalCatcher);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11650\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(15, &mySignalCatcher);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;11651\n");
printf("\nFUNC_CALL;signal(int,void (*)(int));\n");
signal(1, &mySignalCatcher);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;11654\n");
if (opMode == 1)
    {
      printf("\nSTMT_EXEC;;11656\n");
if (srcMode == 1)
      {
        {
          printf("\nSTMT_EXEC;;11659\n");
compress((Char *)((void *)0));
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;11664\n");
decode = (Bool)1;
        printf("\nSTMT_EXEC;;11665\n");
aa = argList;
        {
          printf("\nSTMT_EXEC;;11667\n");
while (1)
          {
          while_continue___5: /* CIL Label */;
            printf("\nSTMT_EXEC;;11670\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
            {
              printf("\nSTMT_EXEC;;11672\n");
goto while_break___5;
            }
            {
              printf("\nSTMT_EXEC;;11675\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___29 = strcmp((char const *)aa->name, "--");printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;11677\n");
if (tmp___29 == 0)
            {
              printf("\nSTMT_EXEC;;11679\n");
decode = (Bool)0;
              printf("\nSTMT_EXEC;;11680\n");
goto __Cont___0;
            }
            printf("\nSTMT_EXEC;;11682\n");
if ((int)*(aa->name + 0) == 45)
            {
              printf("\nSTMT_EXEC;;11684\n");
if (decode)
              {
                printf("\nSTMT_EXEC;;11686\n");
goto __Cont___0;
              }
            }
            {
              printf("\nSTMT_EXEC;;11690\n");
numFilesProcessed++;
              printf("\nSTMT_EXEC;;11691\n");
compress(aa->name);
            }
          __Cont___0:
            {
printf("\nSTMT_EXEC;;11694\n");
aa = aa->link;
}

          }
        while_break___5: /* CIL Label */;
        }
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;11702\n");
if (opMode == 2)
      {
        printf("\nSTMT_EXEC;;11704\n");
unzFailsExist = (Bool)0;
        printf("\nSTMT_EXEC;;11705\n");
if (srcMode == 1)
        {
          {
            printf("\nSTMT_EXEC;;11708\n");
uncompress((Char *)((void *)0));
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;11713\n");
decode = (Bool)1;
          printf("\nSTMT_EXEC;;11714\n");
aa = argList;
          {
            printf("\nSTMT_EXEC;;11716\n");
while (1)
            {
            while_continue___6: /* CIL Label */;
              printf("\nSTMT_EXEC;;11719\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
              {
                printf("\nSTMT_EXEC;;11721\n");
goto while_break___6;
              }
              {
                printf("\nSTMT_EXEC;;11724\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___30 = strcmp((char const *)aa->name, "--");printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;11726\n");
if (tmp___30 == 0)
              {
                printf("\nSTMT_EXEC;;11728\n");
decode = (Bool)0;
                printf("\nSTMT_EXEC;;11729\n");
goto __Cont___1;
              }
              printf("\nSTMT_EXEC;;11731\n");
if ((int)*(aa->name + 0) == 45)
              {
                printf("\nSTMT_EXEC;;11733\n");
if (decode)
                {
                  printf("\nSTMT_EXEC;;11735\n");
goto __Cont___1;
                }
              }
              {
                printf("\nSTMT_EXEC;;11739\n");
numFilesProcessed++;
                printf("\nSTMT_EXEC;;11740\n");
uncompress(aa->name);
              }
            __Cont___1:
              {
printf("\nSTMT_EXEC;;11743\n");
aa = aa->link;
}

            }
          while_break___6: /* CIL Label */;
          }
        }
        printf("\nSTMT_EXEC;;11748\n");
if (unzFailsExist)
        {
          {
            printf("\nSTMT_EXEC;;11751\n");
setExit(2);
            printf("\nSTMT_EXEC;;11752\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitValue);printf("\nFUNC_RETURN;;\n");

          }
        }
      }
      else
      {
        printf("\nSTMT_EXEC;;11758\n");
testFailsExist = (Bool)0;
        printf("\nSTMT_EXEC;;11759\n");
if (srcMode == 1)
        {
          {
            printf("\nSTMT_EXEC;;11762\n");
testf((Char *)((void *)0));
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;11767\n");
decode = (Bool)1;
          printf("\nSTMT_EXEC;;11768\n");
aa = argList;
          {
            printf("\nSTMT_EXEC;;11770\n");
while (1)
            {
            while_continue___7: /* CIL Label */;
              printf("\nSTMT_EXEC;;11773\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
              {
                printf("\nSTMT_EXEC;;11775\n");
goto while_break___7;
              }
              {
                printf("\nSTMT_EXEC;;11778\n");
printf("\nFUNC_CALL;strcmp(const char *,const char *);\n");
tmp___31 = strcmp((char const *)aa->name, "--");printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;11780\n");
if (tmp___31 == 0)
              {
                printf("\nSTMT_EXEC;;11782\n");
decode = (Bool)0;
                printf("\nSTMT_EXEC;;11783\n");
goto __Cont___2;
              }
              printf("\nSTMT_EXEC;;11785\n");
if ((int)*(aa->name + 0) == 45)
              {
                printf("\nSTMT_EXEC;;11787\n");
if (decode)
                {
                  printf("\nSTMT_EXEC;;11789\n");
goto __Cont___2;
                }
              }
              {
                printf("\nSTMT_EXEC;;11793\n");
numFilesProcessed++;
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
        printf("\nSTMT_EXEC;;11802\n");
if (testFailsExist)
        {
          printf("\nSTMT_EXEC;;11804\n");
if (noisy)
          {
            {
              printf("\nSTMT_EXEC;;11807\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "\nYou can use the `bzip2recover\' "
                                                                                          "program to attempt to "
                                                                                          "recover\ndata from undamaged "
                                                                                          "sections of corrupted files.\n\n");printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;11811\n");
setExit(2);
              printf("\nSTMT_EXEC;;11812\n");
printf("\nFUNC_CALL;exit(int);\n");
exit(exitValue);printf("\nFUNC_RETURN;;\n");

            }
          }
        }
      }
    }
    printf("\nSTMT_EXEC;;11818\n");
aa = argList;
    {
      printf("\nSTMT_EXEC;;11820\n");
while (1)
      {
      while_continue___8: /* CIL Label */;
        printf("\nSTMT_EXEC;;11823\n");
if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;11825\n");
goto while_break___8;
        }
        printf("\nSTMT_EXEC;;11827\n");
aa2 = aa->link;
        printf("\nSTMT_EXEC;;11828\n");
if ((unsigned long)aa->name != (unsigned long)((void *)0))
        {
          {
            printf("\nSTMT_EXEC;;11831\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)aa->name);printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;11835\n");
printf("\nFUNC_CALL;free(void *);\n");
free((void *)aa);printf("\nFUNC_RETURN;;\n");

          printf("\nSTMT_EXEC;;11836\n");
aa = aa2;
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
    printf("\nSTMT_EXEC;;11851\n");
if (lo == hi)
    {
      printf("\nSTMT_EXEC;;11853\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;11855\n");
if (hi - lo > 3)
    {
      printf("\nSTMT_EXEC;;11857\n");
i = hi - 4;
      {
        printf("\nSTMT_EXEC;;11859\n");
while (1)
        {
        while_continue: /* CIL Label */;
          printf("\nSTMT_EXEC;;11862\n");
if (!(i >= lo))
          {
            printf("\nSTMT_EXEC;;11864\n");
goto while_break;
          }
          printf("\nSTMT_EXEC;;11866\n");
tmp = (Int32) * (fmap + i);
          printf("\nSTMT_EXEC;;11867\n");
ec_tmp = *(eclass + tmp);
          printf("\nSTMT_EXEC;;11868\n");
j = i + 4;
          {
            printf("\nSTMT_EXEC;;11870\n");
while (1)
            {
            while_continue___0: /* CIL Label */;
              printf("\nSTMT_EXEC;;11873\n");
if (j <= hi)
              {
                printf("\nSTMT_EXEC;;11875\n");
if (!(ec_tmp > *(eclass + *(fmap + j))))
                {
                  printf("\nSTMT_EXEC;;11877\n");
goto while_break___0;
                }
              }
              else
              {
                printf("\nSTMT_EXEC;;11882\n");
goto while_break___0;
              }
              printf("\nSTMT_EXEC;;11884\n");
*(fmap + (j - 4)) = *(fmap + j);
              printf("\nSTMT_EXEC;;11885\n");
j += 4;
            }
          while_break___0: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;11889\n");
*(fmap + (j - 4)) = (UInt32)tmp;
          printf("\nSTMT_EXEC;;11890\n");
i--;
        }
      while_break: /* CIL Label */;
      }
    }
    printf("\nSTMT_EXEC;;11895\n");
i = hi - 1;
    {
      printf("\nSTMT_EXEC;;11897\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
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
          while_continue___2: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;11932\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;11952\n");
Int32 zztmp___0;
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
  printf("\nSTMT_EXEC;;11962\n");
void *__cil_tmp30;
  printf("\nSTMT_EXEC;;11963\n");
void *__cil_tmp31;
  {
    printf("\nSTMT_EXEC;;11965\n");
r = (UInt32)0;
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
        printf("\nSTMT_EXEC;;11978\n");
if (!(sp < 99))
        {
          {
            printf("\nSTMT_EXEC;;11981\n");
BZ2_bz__AssertH__fail(1004);
          }
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
        printf("\nSTMT_EXEC;;11994\n");
r = (r * 7621U + 1U) % 32768U;
        printf("\nSTMT_EXEC;;11995\n");
r3 = r % 3U;
        printf("\nSTMT_EXEC;;11996\n");
if (r3 == 0U)
        {
          printf("\nSTMT_EXEC;;11998\n");
med = *(eclass + *(fmap + lo));
        }
        else
        {
          printf("\nSTMT_EXEC;;12002\n");
if (r3 == 1U)
          {
            printf("\nSTMT_EXEC;;12004\n");
med = *(eclass + *(fmap + ((lo + hi) >> 1)));
          }
          else
          {
            printf("\nSTMT_EXEC;;12008\n");
med = *(eclass + *(fmap + hi));
          }
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
          while_continue___0: /* CIL Label */;
            {
              printf("\nSTMT_EXEC;;12020\n");
while (1)
              {
              while_continue___1: /* CIL Label */;
                printf("\nSTMT_EXEC;;12023\n");
if (!(!(unLo > unHi)))
                {
                  printf("\nSTMT_EXEC;;12025\n");
goto while_break___1;
                }
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
                  printf("\nSTMT_EXEC;;12034\n");
unLo++;
                  printf("\nSTMT_EXEC;;12035\n");
goto while_continue___1;
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
              printf("\nSTMT_EXEC;;12046\n");
while (1)
              {
              while_continue___2: /* CIL Label */;
                printf("\nSTMT_EXEC;;12049\n");
if (!(!(unLo > unHi)))
                {
                  printf("\nSTMT_EXEC;;12051\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;12053\n");
n = (Int32) * (eclass + *(fmap + unHi)) - (Int32)med;
                printf("\nSTMT_EXEC;;12054\n");
if (n == 0)
                {
                  printf("\nSTMT_EXEC;;12056\n");
zztmp___0 = (Int32) * (fmap + unHi);
                  printf("\nSTMT_EXEC;;12057\n");
*(fmap + unHi) = *(fmap + gtHi);
                  printf("\nSTMT_EXEC;;12058\n");
*(fmap + gtHi) = (UInt32)zztmp___0;
                  printf("\nSTMT_EXEC;;12059\n");
gtHi--;
                  printf("\nSTMT_EXEC;;12060\n");
unHi--;
                  printf("\nSTMT_EXEC;;12061\n");
goto while_continue___2;
                }
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
            printf("\nSTMT_EXEC;;12078\n");
unLo++;
            printf("\nSTMT_EXEC;;12079\n");
unHi--;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;12083\n");
if (gtHi < ltLo)
        {
          printf("\nSTMT_EXEC;;12085\n");
goto while_continue;
        }
        printf("\nSTMT_EXEC;;12087\n");
if (ltLo - lo < unLo - ltLo)
        {
          printf("\nSTMT_EXEC;;12089\n");
n = ltLo - lo;
        }
        else
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
          while_continue___3: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;12115\n");
if (hi - gtHi < gtHi - unHi)
        {
          printf("\nSTMT_EXEC;;12117\n");
m = hi - gtHi;
        }
        else
        {
          printf("\nSTMT_EXEC;;12121\n");
m = gtHi - unHi;
        }
        printf("\nSTMT_EXEC;;12123\n");
yyp1___0 = unLo;
        printf("\nSTMT_EXEC;;12124\n");
yyp2___0 = (hi - m) + 1;
        printf("\nSTMT_EXEC;;12125\n");
yyn___0 = m;
        {
          printf("\nSTMT_EXEC;;12127\n");
while (1)
          {
          while_continue___4: /* CIL Label */;
            printf("\nSTMT_EXEC;;12130\n");
if (!(yyn___0 > 0))
            {
              printf("\nSTMT_EXEC;;12132\n");
goto while_break___4;
            }
            printf("\nSTMT_EXEC;;12134\n");
zztmp___3 = (Int32) * (fmap + yyp1___0);
            printf("\nSTMT_EXEC;;12135\n");
*(fmap + yyp1___0) = *(fmap + yyp2___0);
            printf("\nSTMT_EXEC;;12136\n");
*(fmap + yyp2___0) = (UInt32)zztmp___3;
            printf("\nSTMT_EXEC;;12137\n");
yyp1___0++;
            printf("\nSTMT_EXEC;;12138\n");
yyp2___0++;
            printf("\nSTMT_EXEC;;12139\n");
yyn___0--;
          }
        while_break___4: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;12143\n");
n = ((lo + unLo) - ltLo) - 1;
        printf("\nSTMT_EXEC;;12144\n");
m = (hi - (gtHi - unHi)) + 1;
        printf("\nSTMT_EXEC;;12145\n");
if (n - lo > hi - m)
        {
          printf("\nSTMT_EXEC;;12147\n");
stackLo[sp] = lo;
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
        else
        {
          printf("\nSTMT_EXEC;;12156\n");
stackLo[sp] = m;
          printf("\nSTMT_EXEC;;12157\n");
stackHi[sp] = hi;
          printf("\nSTMT_EXEC;;12158\n");
sp++;
          printf("\nSTMT_EXEC;;12159\n");
stackLo[sp] = lo;
          printf("\nSTMT_EXEC;;12160\n");
stackHi[sp] = n;
          printf("\nSTMT_EXEC;;12161\n");
sp++;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12166\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;12184\n");
void *__cil_tmp19;
  printf("\nSTMT_EXEC;;12185\n");
void *__cil_tmp20;
  {
    printf("\nSTMT_EXEC;;12187\n");
eclass8 = (UChar *)eclass;
    printf("\nSTMT_EXEC;;12188\n");
if (verb >= 4)
    {
      {
        printf("\nSTMT_EXEC;;12191\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "        bucket sorting ...\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;12194\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12196\n");
while (1)
      {
      while_continue: /* CIL Label */;
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
      while_continue___0: /* CIL Label */;
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
      while_continue___1: /* CIL Label */;
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
      while_continue___2: /* CIL Label */;
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
      while_continue___3: /* CIL Label */;
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
      while_continue___4: /* CIL Label */;
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
      while_continue___5: /* CIL Label */;
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
      printf("\nSTMT_EXEC;;12298\n");
while (1)
      {
      while_continue___6: /* CIL Label */;
        printf("\nSTMT_EXEC;;12301\n");
if (!(i < 32))
        {
          printf("\nSTMT_EXEC;;12303\n");
goto while_break___6;
        }
        printf("\nSTMT_EXEC;;12305\n");
*(bhtab + ((nblock + 2 * i) >> 5)) |= (unsigned int)(1 << ((nblock + 2 * i) & 31));
        printf("\nSTMT_EXEC;;12306\n");
*(bhtab + (((nblock + 2 * i) + 1) >> 5)) &= (unsigned int)(~(1 << (((nblock + 2 * i) + 1) & 31)));
        printf("\nSTMT_EXEC;;12307\n");
i++;
      }
    while_break___6: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12311\n");
H = 1;
    {
      printf("\nSTMT_EXEC;;12313\n");
while (1)
      {
      while_continue___7: /* CIL Label */;
        printf("\nSTMT_EXEC;;12316\n");
if (verb >= 4)
        {
          {
            printf("\nSTMT_EXEC;;12319\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "        depth %6d has ", H);printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;12322\n");
j = 0;
        printf("\nSTMT_EXEC;;12323\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;12325\n");
while (1)
          {
          while_continue___8: /* CIL Label */;
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
          while_continue___9: /* CIL Label */;
            printf("\nSTMT_EXEC;;12352\n");
k = r + 1;
            {
              printf("\nSTMT_EXEC;;12354\n");
while (1)
              {
              while_continue___10: /* CIL Label */;
                printf("\nSTMT_EXEC;;12357\n");
if (*(bhtab + (k >> 5)) & (unsigned int)(1 << (k & 31)))
                {
                  printf("\nSTMT_EXEC;;12359\n");
if (!(k & 31))
                  {
                    printf("\nSTMT_EXEC;;12361\n");
goto while_break___10;
                  }
                }
                else
                {
                  printf("\nSTMT_EXEC;;12366\n");
goto while_break___10;
                }
                printf("\nSTMT_EXEC;;12368\n");
k++;
              }
            while_break___10: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;12372\n");
if (*(bhtab + (k >> 5)) & (unsigned int)(1 << (k & 31)))
            {
              {
                printf("\nSTMT_EXEC;;12375\n");
while (1)
                {
                while_continue___11: /* CIL Label */;
                  printf("\nSTMT_EXEC;;12378\n");
if (!(*(bhtab + (k >> 5)) == 4294967295U))
                  {
                    printf("\nSTMT_EXEC;;12380\n");
goto while_break___11;
                  }
                  printf("\nSTMT_EXEC;;12382\n");
k += 32;
                }
              while_break___11: /* CIL Label */;
              }
              {
                printf("\nSTMT_EXEC;;12387\n");
while (1)
                {
                while_continue___12: /* CIL Label */;
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
              while_continue___13: /* CIL Label */;
                printf("\nSTMT_EXEC;;12408\n");
if (!(*(bhtab + (k >> 5)) & (unsigned int)(1 << (k & 31))))
                {
                  printf("\nSTMT_EXEC;;12410\n");
if (!(k & 31))
                  {
                    printf("\nSTMT_EXEC;;12412\n");
goto while_break___13;
                  }
                }
                else
                {
                  printf("\nSTMT_EXEC;;12417\n");
goto while_break___13;
                }
                printf("\nSTMT_EXEC;;12419\n");
k++;
              }
            while_break___13: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;12423\n");
if (!(*(bhtab + (k >> 5)) & (unsigned int)(1 << (k & 31))))
            {
              {
                printf("\nSTMT_EXEC;;12426\n");
while (1)
                {
                while_continue___14: /* CIL Label */;
                  printf("\nSTMT_EXEC;;12429\n");
if (!(*(bhtab + (k >> 5)) == 0U))
                  {
                    printf("\nSTMT_EXEC;;12431\n");
goto while_break___14;
                  }
                  printf("\nSTMT_EXEC;;12433\n");
k += 32;
                }
              while_break___14: /* CIL Label */;
              }
              {
                printf("\nSTMT_EXEC;;12438\n");
while (1)
                {
                while_continue___15: /* CIL Label */;
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
            }
            printf("\nSTMT_EXEC;;12450\n");
r = k - 1;
            printf("\nSTMT_EXEC;;12451\n");
if (r >= nblock)
            {
              printf("\nSTMT_EXEC;;12453\n");
goto while_break___9;
            }
            printf("\nSTMT_EXEC;;12455\n");
if (r > l)
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
                while_continue___16: /* CIL Label */;
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
        printf("\nSTMT_EXEC;;12485\n");
if (verb >= 4)
        {
          {
            printf("\nSTMT_EXEC;;12488\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "%6d unresolved strings\n", nNotDone);printf("\nFUNC_RETURN;;\n");

          }
        }
        printf("\nSTMT_EXEC;;12491\n");
H *= 2;
        printf("\nSTMT_EXEC;;12492\n");
if (H > nblock)
        {
          printf("\nSTMT_EXEC;;12494\n");
goto while_break___7;
        }
        else
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
    printf("\nSTMT_EXEC;;12506\n");
if (verb >= 4)
    {
      {
        printf("\nSTMT_EXEC;;12509\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "        reconstructing block ...\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;12512\n");
j = 0;
    printf("\nSTMT_EXEC;;12513\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;12515\n");
while (1)
      {
      while_continue___17: /* CIL Label */;
        printf("\nSTMT_EXEC;;12518\n");
if (!(i < nblock))
        {
          printf("\nSTMT_EXEC;;12520\n");
goto while_break___17;
        }
        {
          printf("\nSTMT_EXEC;;12523\n");
while (1)
          {
          while_continue___18: /* CIL Label */;
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
    printf("\nSTMT_EXEC;;12540\n");
if (!(j < 256))
    {
      {
        printf("\nSTMT_EXEC;;12543\n");
BZ2_bz__AssertH__fail(1005);
      }
    }
    printf("\nSTMT_EXEC;;12546\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static Bool mainGtU(UInt32 i1, UInt32 i2, UChar *block, UInt16 *quadrant, UInt32 nblock, Int32 *budget)
{
  printf("\nFUNC_CALL;mainGtU(UInt32,UInt32,UChar *,UInt16 *,UInt32,Int32 *);\n");
printf("\nSTMT_EXEC;;12551\n");
Int32 k;
  printf("\nSTMT_EXEC;;12552\n");
UChar c1;
  printf("\nSTMT_EXEC;;12553\n");
UChar c2;
  printf("\nSTMT_EXEC;;12554\n");
UInt16 s1;
  printf("\nSTMT_EXEC;;12555\n");
UInt16 s2;
  {
    printf("\nSTMT_EXEC;;12557\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12558\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12559\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12561\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12563\n");
i1++;
    printf("\nSTMT_EXEC;;12564\n");
i2++;
    printf("\nSTMT_EXEC;;12565\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12566\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12567\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12569\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12571\n");
i1++;
    printf("\nSTMT_EXEC;;12572\n");
i2++;
    printf("\nSTMT_EXEC;;12573\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12574\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12575\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12577\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12579\n");
i1++;
    printf("\nSTMT_EXEC;;12580\n");
i2++;
    printf("\nSTMT_EXEC;;12581\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12582\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12583\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12585\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12587\n");
i1++;
    printf("\nSTMT_EXEC;;12588\n");
i2++;
    printf("\nSTMT_EXEC;;12589\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12590\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12591\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12593\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12595\n");
i1++;
    printf("\nSTMT_EXEC;;12596\n");
i2++;
    printf("\nSTMT_EXEC;;12597\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12598\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12599\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12601\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12603\n");
i1++;
    printf("\nSTMT_EXEC;;12604\n");
i2++;
    printf("\nSTMT_EXEC;;12605\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12606\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12607\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12609\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12611\n");
i1++;
    printf("\nSTMT_EXEC;;12612\n");
i2++;
    printf("\nSTMT_EXEC;;12613\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12614\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12615\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12617\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12619\n");
i1++;
    printf("\nSTMT_EXEC;;12620\n");
i2++;
    printf("\nSTMT_EXEC;;12621\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12622\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12623\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12625\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12627\n");
i1++;
    printf("\nSTMT_EXEC;;12628\n");
i2++;
    printf("\nSTMT_EXEC;;12629\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12630\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12631\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12633\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12635\n");
i1++;
    printf("\nSTMT_EXEC;;12636\n");
i2++;
    printf("\nSTMT_EXEC;;12637\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12638\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12639\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12641\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12643\n");
i1++;
    printf("\nSTMT_EXEC;;12644\n");
i2++;
    printf("\nSTMT_EXEC;;12645\n");
c1 = *(block + i1);
    printf("\nSTMT_EXEC;;12646\n");
c2 = *(block + i2);
    printf("\nSTMT_EXEC;;12647\n");
if ((int)c1 != (int)c2)
    {
      printf("\nSTMT_EXEC;;12649\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
    }
    printf("\nSTMT_EXEC;;12651\n");
i1++;
    printf("\nSTMT_EXEC;;12652\n");
i2++;
    printf("\nSTMT_EXEC;;12653\n");
k = (Int32)(nblock + 8U);
    {
      printf("\nSTMT_EXEC;;12655\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;12658\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12659\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12660\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12662\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12664\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12665\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12666\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12668\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12670\n");
i1++;
        printf("\nSTMT_EXEC;;12671\n");
i2++;
        printf("\nSTMT_EXEC;;12672\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12673\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12674\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12676\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12678\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12679\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12680\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12682\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12684\n");
i1++;
        printf("\nSTMT_EXEC;;12685\n");
i2++;
        printf("\nSTMT_EXEC;;12686\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12687\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12688\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12690\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12692\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12693\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12694\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12696\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12698\n");
i1++;
        printf("\nSTMT_EXEC;;12699\n");
i2++;
        printf("\nSTMT_EXEC;;12700\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12701\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12702\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12704\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12706\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12707\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12708\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12710\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12712\n");
i1++;
        printf("\nSTMT_EXEC;;12713\n");
i2++;
        printf("\nSTMT_EXEC;;12714\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12715\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12716\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12718\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12720\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12721\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12722\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12724\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12726\n");
i1++;
        printf("\nSTMT_EXEC;;12727\n");
i2++;
        printf("\nSTMT_EXEC;;12728\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12729\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12730\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12732\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12734\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12735\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12736\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12738\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12740\n");
i1++;
        printf("\nSTMT_EXEC;;12741\n");
i2++;
        printf("\nSTMT_EXEC;;12742\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12743\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12744\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12746\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12748\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12749\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12750\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12752\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12754\n");
i1++;
        printf("\nSTMT_EXEC;;12755\n");
i2++;
        printf("\nSTMT_EXEC;;12756\n");
c1 = *(block + i1);
        printf("\nSTMT_EXEC;;12757\n");
c2 = *(block + i2);
        printf("\nSTMT_EXEC;;12758\n");
if ((int)c1 != (int)c2)
        {
          printf("\nSTMT_EXEC;;12760\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)c1 > (int)c2));
        }
        printf("\nSTMT_EXEC;;12762\n");
s1 = *(quadrant + i1);
        printf("\nSTMT_EXEC;;12763\n");
s2 = *(quadrant + i2);
        printf("\nSTMT_EXEC;;12764\n");
if ((int)s1 != (int)s2)
        {
          printf("\nSTMT_EXEC;;12766\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)((int)s1 > (int)s2));
        }
        printf("\nSTMT_EXEC;;12768\n");
i1++;
        printf("\nSTMT_EXEC;;12769\n");
i2++;
        printf("\nSTMT_EXEC;;12770\n");
if (i1 >= nblock)
        {
          printf("\nSTMT_EXEC;;12772\n");
i1 -= nblock;
        }
        printf("\nSTMT_EXEC;;12774\n");
if (i2 >= nblock)
        {
          printf("\nSTMT_EXEC;;12776\n");
i2 -= nblock;
        }
        printf("\nSTMT_EXEC;;12778\n");
k -= 8;
        printf("\nSTMT_EXEC;;12779\n");
(*budget)--;
        printf("\nSTMT_EXEC;;12780\n");
if (!(k >= 0))
        {
          printf("\nSTMT_EXEC;;12782\n");
goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12787\n");
printf("\nFUNC_RETURN;;\n");
return ((Bool)0);
  }
printf("\nFUNC_RETURN;;\n");
}
static Int32 incs[14] = {1, 4, 13, 40, 121, 364, 1093, 3280, 9841, 29524, 88573, 265720, 797161, 2391484};
static void mainSimpleSort(UInt32 *ptr, UChar *block, UInt16 *quadrant, Int32 nblock, Int32 lo, Int32 hi, Int32 d, Int32 *budget)
{
  printf("\nFUNC_CALL;mainSimpleSort(UInt32 *,UChar *,UInt16 *,Int32,Int32,Int32,Int32,Int32 *);\n");
printf("\nSTMT_EXEC;;12793\n");
Int32 i;
  printf("\nSTMT_EXEC;;12794\n");
Int32 j;
  printf("\nSTMT_EXEC;;12795\n");
Int32 h;
  printf("\nSTMT_EXEC;;12796\n");
Int32 bigN;
  printf("\nSTMT_EXEC;;12797\n");
Int32 hp;
  printf("\nSTMT_EXEC;;12798\n");
UInt32 v;
  printf("\nSTMT_EXEC;;12799\n");
Bool tmp;
  printf("\nSTMT_EXEC;;12800\n");
Bool tmp___0;
  printf("\nSTMT_EXEC;;12801\n");
Bool tmp___1;
  {
    printf("\nSTMT_EXEC;;12803\n");
bigN = (hi - lo) + 1;
    printf("\nSTMT_EXEC;;12804\n");
if (bigN < 2)
    {
      printf("\nSTMT_EXEC;;12806\n");
printf("\nFUNC_RETURN;;\n");
return;
    }
    printf("\nSTMT_EXEC;;12808\n");
hp = 0;
    {
      printf("\nSTMT_EXEC;;12810\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;12813\n");
if (!(incs[hp] < bigN))
        {
          printf("\nSTMT_EXEC;;12815\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;12817\n");
hp++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12821\n");
hp--;
    {
      printf("\nSTMT_EXEC;;12823\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;12826\n");
if (!(hp >= 0))
        {
          printf("\nSTMT_EXEC;;12828\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;12830\n");
h = incs[hp];
        printf("\nSTMT_EXEC;;12831\n");
i = lo + h;
        {
          printf("\nSTMT_EXEC;;12833\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;12836\n");
if (!(!(i > hi)))
            {
              printf("\nSTMT_EXEC;;12838\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;12840\n");
v = *(ptr + i);
            printf("\nSTMT_EXEC;;12841\n");
j = i;
            {
              printf("\nSTMT_EXEC;;12843\n");
while (1)
              {
              while_continue___2: /* CIL Label */;
                {
                  printf("\nSTMT_EXEC;;12847\n");
tmp = mainGtU(*(ptr + (j - h)) + (UInt32)d, v + (UInt32)d, block, quadrant, (UInt32)nblock, budget);
                }
                printf("\nSTMT_EXEC;;12849\n");
if (!tmp)
                {
                  printf("\nSTMT_EXEC;;12851\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;12853\n");
*(ptr + j) = *(ptr + (j - h));
                printf("\nSTMT_EXEC;;12854\n");
j -= h;
                printf("\nSTMT_EXEC;;12855\n");
if (j <= (lo + h) - 1)
                {
                  printf("\nSTMT_EXEC;;12857\n");
goto while_break___2;
                }
              }
            while_break___2: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;12862\n");
*(ptr + j) = v;
            printf("\nSTMT_EXEC;;12863\n");
i++;
            printf("\nSTMT_EXEC;;12864\n");
if (i > hi)
            {
              printf("\nSTMT_EXEC;;12866\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;12868\n");
v = *(ptr + i);
            printf("\nSTMT_EXEC;;12869\n");
j = i;
            {
              printf("\nSTMT_EXEC;;12871\n");
while (1)
              {
              while_continue___3: /* CIL Label */;
                {
                  printf("\nSTMT_EXEC;;12875\n");
tmp___0 = mainGtU(*(ptr + (j - h)) + (UInt32)d, v + (UInt32)d, block, quadrant, (UInt32)nblock, budget);
                }
                printf("\nSTMT_EXEC;;12877\n");
if (!tmp___0)
                {
                  printf("\nSTMT_EXEC;;12879\n");
goto while_break___3;
                }
                printf("\nSTMT_EXEC;;12881\n");
*(ptr + j) = *(ptr + (j - h));
                printf("\nSTMT_EXEC;;12882\n");
j -= h;
                printf("\nSTMT_EXEC;;12883\n");
if (j <= (lo + h) - 1)
                {
                  printf("\nSTMT_EXEC;;12885\n");
goto while_break___3;
                }
              }
            while_break___3: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;12890\n");
*(ptr + j) = v;
            printf("\nSTMT_EXEC;;12891\n");
i++;
            printf("\nSTMT_EXEC;;12892\n");
if (i > hi)
            {
              printf("\nSTMT_EXEC;;12894\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;12896\n");
v = *(ptr + i);
            printf("\nSTMT_EXEC;;12897\n");
j = i;
            {
              printf("\nSTMT_EXEC;;12899\n");
while (1)
              {
              while_continue___4: /* CIL Label */;
                {
                  printf("\nSTMT_EXEC;;12903\n");
tmp___1 = mainGtU(*(ptr + (j - h)) + (UInt32)d, v + (UInt32)d, block, quadrant, (UInt32)nblock, budget);
                }
                printf("\nSTMT_EXEC;;12905\n");
if (!tmp___1)
                {
                  printf("\nSTMT_EXEC;;12907\n");
goto while_break___4;
                }
                printf("\nSTMT_EXEC;;12909\n");
*(ptr + j) = *(ptr + (j - h));
                printf("\nSTMT_EXEC;;12910\n");
j -= h;
                printf("\nSTMT_EXEC;;12911\n");
if (j <= (lo + h) - 1)
                {
                  printf("\nSTMT_EXEC;;12913\n");
goto while_break___4;
                }
              }
            while_break___4: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;12918\n");
*(ptr + j) = v;
            printf("\nSTMT_EXEC;;12919\n");
i++;
            printf("\nSTMT_EXEC;;12920\n");
if (*budget < 0)
            {
              printf("\nSTMT_EXEC;;12922\n");
printf("\nFUNC_RETURN;;\n");
return;
            }
          }
        while_break___1: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;12927\n");
hp--;
      }
    while_break___0: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;12931\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
__inline static UChar mmed3(UChar a, UChar b, UChar c)
{
  printf("\nFUNC_CALL;mmed3(UChar,UChar,UChar);\n");
printf("\nSTMT_EXEC;;12936\n");
UChar t;
  {
    printf("\nSTMT_EXEC;;12938\n");
if ((int)a > (int)b)
    {
      printf("\nSTMT_EXEC;;12940\n");
t = a;
      printf("\nSTMT_EXEC;;12941\n");
a = b;
      printf("\nSTMT_EXEC;;12942\n");
b = t;
    }
    printf("\nSTMT_EXEC;;12944\n");
if ((int)b > (int)c)
    {
      printf("\nSTMT_EXEC;;12946\n");
b = c;
      printf("\nSTMT_EXEC;;12947\n");
if ((int)a > (int)b)
      {
        printf("\nSTMT_EXEC;;12949\n");
b = a;
      }
    }
    printf("\nSTMT_EXEC;;12952\n");
printf("\nFUNC_RETURN;;\n");
return (b);
  }
printf("\nFUNC_RETURN;;\n");
}
static void mainQSort3(UInt32 *ptr, UChar *block, UInt16 *quadrant, Int32 nblock, Int32 loSt, Int32 hiSt, Int32 dSt, Int32 *budget)
{
  printf("\nFUNC_CALL;mainQSort3(UInt32 *,UChar *,UInt16 *,Int32,Int32,Int32,Int32,Int32 *);\n");
printf("\nSTMT_EXEC;;12957\n");
Int32 unLo;
  printf("\nSTMT_EXEC;;12958\n");
Int32 unHi;
  printf("\nSTMT_EXEC;;12959\n");
Int32 ltLo;
  printf("\nSTMT_EXEC;;12960\n");
Int32 gtHi;
  printf("\nSTMT_EXEC;;12961\n");
Int32 n;
  printf("\nSTMT_EXEC;;12962\n");
Int32 m;
  printf("\nSTMT_EXEC;;12963\n");
Int32 med;
  printf("\nSTMT_EXEC;;12964\n");
Int32 sp;
  printf("\nSTMT_EXEC;;12965\n");
Int32 lo;
  printf("\nSTMT_EXEC;;12966\n");
Int32 hi;
  printf("\nSTMT_EXEC;;12967\n");
Int32 d;
  printf("\nSTMT_EXEC;;12968\n");
Int32 stackLo[100];
  printf("\nSTMT_EXEC;;12969\n");
Int32 stackHi[100];
  printf("\nSTMT_EXEC;;12970\n");
Int32 stackD[100];
  printf("\nSTMT_EXEC;;12971\n");
Int32 nextLo[3];
  printf("\nSTMT_EXEC;;12972\n");
Int32 nextHi[3];
  printf("\nSTMT_EXEC;;12973\n");
Int32 nextD[3];
  printf("\nSTMT_EXEC;;12974\n");
Int32 zztmp;
  printf("\nSTMT_EXEC;;12975\n");
Int32 zztmp___0;
  printf("\nSTMT_EXEC;;12976\n");
Int32 zztmp___1;
  printf("\nSTMT_EXEC;;12977\n");
Int32 yyp1;
  printf("\nSTMT_EXEC;;12978\n");
Int32 yyp2;
  printf("\nSTMT_EXEC;;12979\n");
Int32 yyn;
  printf("\nSTMT_EXEC;;12980\n");
Int32 zztmp___2;
  printf("\nSTMT_EXEC;;12981\n");
Int32 yyp1___0;
  printf("\nSTMT_EXEC;;12982\n");
Int32 yyp2___0;
  printf("\nSTMT_EXEC;;12983\n");
Int32 yyn___0;
  printf("\nSTMT_EXEC;;12984\n");
Int32 zztmp___3;
  printf("\nSTMT_EXEC;;12985\n");
Int32 tz;
  printf("\nSTMT_EXEC;;12986\n");
Int32 tz___0;
  printf("\nSTMT_EXEC;;12987\n");
Int32 tz___1;
  printf("\nSTMT_EXEC;;12988\n");
void *__cil_tmp41;
  printf("\nSTMT_EXEC;;12989\n");
void *__cil_tmp42;
  printf("\nSTMT_EXEC;;12990\n");
void *__cil_tmp43;
  printf("\nSTMT_EXEC;;12991\n");
void *__cil_tmp44;
  printf("\nSTMT_EXEC;;12992\n");
void *__cil_tmp45;
  printf("\nSTMT_EXEC;;12993\n");
void *__cil_tmp46;
  {
    printf("\nSTMT_EXEC;;12995\n");
sp = 0;
    printf("\nSTMT_EXEC;;12996\n");
stackLo[sp] = loSt;
    printf("\nSTMT_EXEC;;12997\n");
stackHi[sp] = hiSt;
    printf("\nSTMT_EXEC;;12998\n");
stackD[sp] = dSt;
    printf("\nSTMT_EXEC;;12999\n");
sp++;
    {
      printf("\nSTMT_EXEC;;13001\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;13004\n");
if (!(sp > 0))
        {
          printf("\nSTMT_EXEC;;13006\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;13008\n");
if (!(sp < 98))
        {
          {
            printf("\nSTMT_EXEC;;13011\n");
BZ2_bz__AssertH__fail(1001);
          }
        }
        printf("\nSTMT_EXEC;;13014\n");
sp--;
        printf("\nSTMT_EXEC;;13015\n");
lo = stackLo[sp];
        printf("\nSTMT_EXEC;;13016\n");
hi = stackHi[sp];
        printf("\nSTMT_EXEC;;13017\n");
d = stackD[sp];
        printf("\nSTMT_EXEC;;13018\n");
if (hi - lo < 20)
        {
          printf("\nSTMT_EXEC;;13020\n");
goto _L;
        }
        else
        {
          printf("\nSTMT_EXEC;;13024\n");
if (d > 14)
          {
          _L:
          {
            printf("\nSTMT_EXEC;;13028\n");
mainSimpleSort(ptr, block, quadrant, nblock, lo, hi, d, budget);
          }
            printf("\nSTMT_EXEC;;13030\n");
if (*budget < 0)
            {
              printf("\nSTMT_EXEC;;13032\n");
printf("\nFUNC_RETURN;;\n");
return;
            }
            printf("\nSTMT_EXEC;;13034\n");
goto while_continue;
          }
        }
        {
          printf("\nSTMT_EXEC;;13038\n");
med = (Int32)mmed3(*(block + (*(ptr + lo) + (UInt32)d)), *(block + (*(ptr + hi) + (UInt32)d)), *(block + (*(ptr + ((lo + hi) >> 1)) + (UInt32)d)));
          printf("\nSTMT_EXEC;;13039\n");
ltLo = lo;
          printf("\nSTMT_EXEC;;13040\n");
unLo = ltLo;
          printf("\nSTMT_EXEC;;13041\n");
gtHi = hi;
          printf("\nSTMT_EXEC;;13042\n");
unHi = gtHi;
        }
        {
          printf("\nSTMT_EXEC;;13045\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            {
              printf("\nSTMT_EXEC;;13049\n");
while (1)
              {
              while_continue___1: /* CIL Label */;
                printf("\nSTMT_EXEC;;13052\n");
if (!(!(unLo > unHi)))
                {
                  printf("\nSTMT_EXEC;;13054\n");
goto while_break___1;
                }
                printf("\nSTMT_EXEC;;13056\n");
n = (Int32) * (block + (*(ptr + unLo) + (UInt32)d)) - med;
                printf("\nSTMT_EXEC;;13057\n");
if (n == 0)
                {
                  printf("\nSTMT_EXEC;;13059\n");
zztmp = (Int32) * (ptr + unLo);
                  printf("\nSTMT_EXEC;;13060\n");
*(ptr + unLo) = *(ptr + ltLo);
                  printf("\nSTMT_EXEC;;13061\n");
*(ptr + ltLo) = (UInt32)zztmp;
                  printf("\nSTMT_EXEC;;13062\n");
ltLo++;
                  printf("\nSTMT_EXEC;;13063\n");
unLo++;
                  printf("\nSTMT_EXEC;;13064\n");
goto while_continue___1;
                }
                printf("\nSTMT_EXEC;;13066\n");
if (n > 0)
                {
                  printf("\nSTMT_EXEC;;13068\n");
goto while_break___1;
                }
                printf("\nSTMT_EXEC;;13070\n");
unLo++;
              }
            while_break___1: /* CIL Label */;
            }
            {
              printf("\nSTMT_EXEC;;13075\n");
while (1)
              {
              while_continue___2: /* CIL Label */;
                printf("\nSTMT_EXEC;;13078\n");
if (!(!(unLo > unHi)))
                {
                  printf("\nSTMT_EXEC;;13080\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;13082\n");
n = (Int32) * (block + (*(ptr + unHi) + (UInt32)d)) - med;
                printf("\nSTMT_EXEC;;13083\n");
if (n == 0)
                {
                  printf("\nSTMT_EXEC;;13085\n");
zztmp___0 = (Int32) * (ptr + unHi);
                  printf("\nSTMT_EXEC;;13086\n");
*(ptr + unHi) = *(ptr + gtHi);
                  printf("\nSTMT_EXEC;;13087\n");
*(ptr + gtHi) = (UInt32)zztmp___0;
                  printf("\nSTMT_EXEC;;13088\n");
gtHi--;
                  printf("\nSTMT_EXEC;;13089\n");
unHi--;
                  printf("\nSTMT_EXEC;;13090\n");
goto while_continue___2;
                }
                printf("\nSTMT_EXEC;;13092\n");
if (n < 0)
                {
                  printf("\nSTMT_EXEC;;13094\n");
goto while_break___2;
                }
                printf("\nSTMT_EXEC;;13096\n");
unHi--;
              }
            while_break___2: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;13100\n");
if (unLo > unHi)
            {
              printf("\nSTMT_EXEC;;13102\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;13104\n");
zztmp___1 = (Int32) * (ptr + unLo);
            printf("\nSTMT_EXEC;;13105\n");
*(ptr + unLo) = *(ptr + unHi);
            printf("\nSTMT_EXEC;;13106\n");
*(ptr + unHi) = (UInt32)zztmp___1;
            printf("\nSTMT_EXEC;;13107\n");
unLo++;
            printf("\nSTMT_EXEC;;13108\n");
unHi--;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13112\n");
if (gtHi < ltLo)
        {
          printf("\nSTMT_EXEC;;13114\n");
stackLo[sp] = lo;
          printf("\nSTMT_EXEC;;13115\n");
stackHi[sp] = hi;
          printf("\nSTMT_EXEC;;13116\n");
stackD[sp] = d + 1;
          printf("\nSTMT_EXEC;;13117\n");
sp++;
          printf("\nSTMT_EXEC;;13118\n");
goto while_continue;
        }
        printf("\nSTMT_EXEC;;13120\n");
if (ltLo - lo < unLo - ltLo)
        {
          printf("\nSTMT_EXEC;;13122\n");
n = ltLo - lo;
        }
        else
        {
          printf("\nSTMT_EXEC;;13126\n");
n = unLo - ltLo;
        }
        printf("\nSTMT_EXEC;;13128\n");
yyp1 = lo;
        printf("\nSTMT_EXEC;;13129\n");
yyp2 = unLo - n;
        printf("\nSTMT_EXEC;;13130\n");
yyn = n;
        {
          printf("\nSTMT_EXEC;;13132\n");
while (1)
          {
          while_continue___3: /* CIL Label */;
            printf("\nSTMT_EXEC;;13135\n");
if (!(yyn > 0))
            {
              printf("\nSTMT_EXEC;;13137\n");
goto while_break___3;
            }
            printf("\nSTMT_EXEC;;13139\n");
zztmp___2 = (Int32) * (ptr + yyp1);
            printf("\nSTMT_EXEC;;13140\n");
*(ptr + yyp1) = *(ptr + yyp2);
            printf("\nSTMT_EXEC;;13141\n");
*(ptr + yyp2) = (UInt32)zztmp___2;
            printf("\nSTMT_EXEC;;13142\n");
yyp1++;
            printf("\nSTMT_EXEC;;13143\n");
yyp2++;
            printf("\nSTMT_EXEC;;13144\n");
yyn--;
          }
        while_break___3: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13148\n");
if (hi - gtHi < gtHi - unHi)
        {
          printf("\nSTMT_EXEC;;13150\n");
m = hi - gtHi;
        }
        else
        {
          printf("\nSTMT_EXEC;;13154\n");
m = gtHi - unHi;
        }
        printf("\nSTMT_EXEC;;13156\n");
yyp1___0 = unLo;
        printf("\nSTMT_EXEC;;13157\n");
yyp2___0 = (hi - m) + 1;
        printf("\nSTMT_EXEC;;13158\n");
yyn___0 = m;
        {
          printf("\nSTMT_EXEC;;13160\n");
while (1)
          {
          while_continue___4: /* CIL Label */;
            printf("\nSTMT_EXEC;;13163\n");
if (!(yyn___0 > 0))
            {
              printf("\nSTMT_EXEC;;13165\n");
goto while_break___4;
            }
            printf("\nSTMT_EXEC;;13167\n");
zztmp___3 = (Int32) * (ptr + yyp1___0);
            printf("\nSTMT_EXEC;;13168\n");
*(ptr + yyp1___0) = *(ptr + yyp2___0);
            printf("\nSTMT_EXEC;;13169\n");
*(ptr + yyp2___0) = (UInt32)zztmp___3;
            printf("\nSTMT_EXEC;;13170\n");
yyp1___0++;
            printf("\nSTMT_EXEC;;13171\n");
yyp2___0++;
            printf("\nSTMT_EXEC;;13172\n");
yyn___0--;
          }
        while_break___4: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13176\n");
n = ((lo + unLo) - ltLo) - 1;
        printf("\nSTMT_EXEC;;13177\n");
m = (hi - (gtHi - unHi)) + 1;
        printf("\nSTMT_EXEC;;13178\n");
nextLo[0] = lo;
        printf("\nSTMT_EXEC;;13179\n");
nextHi[0] = n;
        printf("\nSTMT_EXEC;;13180\n");
nextD[0] = d;
        printf("\nSTMT_EXEC;;13181\n");
nextLo[1] = m;
        printf("\nSTMT_EXEC;;13182\n");
nextHi[1] = hi;
        printf("\nSTMT_EXEC;;13183\n");
nextD[1] = d;
        printf("\nSTMT_EXEC;;13184\n");
nextLo[2] = n + 1;
        printf("\nSTMT_EXEC;;13185\n");
nextHi[2] = m - 1;
        printf("\nSTMT_EXEC;;13186\n");
nextD[2] = d + 1;
        printf("\nSTMT_EXEC;;13187\n");
if (nextHi[0] - nextLo[0] < nextHi[1] - nextLo[1])
        {
          printf("\nSTMT_EXEC;;13189\n");
tz = nextLo[0];
          printf("\nSTMT_EXEC;;13190\n");
nextLo[0] = nextLo[1];
          printf("\nSTMT_EXEC;;13191\n");
nextLo[1] = tz;
          printf("\nSTMT_EXEC;;13192\n");
tz = nextHi[0];
          printf("\nSTMT_EXEC;;13193\n");
nextHi[0] = nextHi[1];
          printf("\nSTMT_EXEC;;13194\n");
nextHi[1] = tz;
          printf("\nSTMT_EXEC;;13195\n");
tz = nextD[0];
          printf("\nSTMT_EXEC;;13196\n");
nextD[0] = nextD[1];
          printf("\nSTMT_EXEC;;13197\n");
nextD[1] = tz;
        }
        printf("\nSTMT_EXEC;;13199\n");
if (nextHi[1] - nextLo[1] < nextHi[2] - nextLo[2])
        {
          printf("\nSTMT_EXEC;;13201\n");
tz___0 = nextLo[1];
          printf("\nSTMT_EXEC;;13202\n");
nextLo[1] = nextLo[2];
          printf("\nSTMT_EXEC;;13203\n");
nextLo[2] = tz___0;
          printf("\nSTMT_EXEC;;13204\n");
tz___0 = nextHi[1];
          printf("\nSTMT_EXEC;;13205\n");
nextHi[1] = nextHi[2];
          printf("\nSTMT_EXEC;;13206\n");
nextHi[2] = tz___0;
          printf("\nSTMT_EXEC;;13207\n");
tz___0 = nextD[1];
          printf("\nSTMT_EXEC;;13208\n");
nextD[1] = nextD[2];
          printf("\nSTMT_EXEC;;13209\n");
nextD[2] = tz___0;
        }
        printf("\nSTMT_EXEC;;13211\n");
if (nextHi[0] - nextLo[0] < nextHi[1] - nextLo[1])
        {
          printf("\nSTMT_EXEC;;13213\n");
tz___1 = nextLo[0];
          printf("\nSTMT_EXEC;;13214\n");
nextLo[0] = nextLo[1];
          printf("\nSTMT_EXEC;;13215\n");
nextLo[1] = tz___1;
          printf("\nSTMT_EXEC;;13216\n");
tz___1 = nextHi[0];
          printf("\nSTMT_EXEC;;13217\n");
nextHi[0] = nextHi[1];
          printf("\nSTMT_EXEC;;13218\n");
nextHi[1] = tz___1;
          printf("\nSTMT_EXEC;;13219\n");
tz___1 = nextD[0];
          printf("\nSTMT_EXEC;;13220\n");
nextD[0] = nextD[1];
          printf("\nSTMT_EXEC;;13221\n");
nextD[1] = tz___1;
        }
        printf("\nSTMT_EXEC;;13223\n");
stackLo[sp] = nextLo[0];
        printf("\nSTMT_EXEC;;13224\n");
stackHi[sp] = nextHi[0];
        printf("\nSTMT_EXEC;;13225\n");
stackD[sp] = nextD[0];
        printf("\nSTMT_EXEC;;13226\n");
sp++;
        printf("\nSTMT_EXEC;;13227\n");
stackLo[sp] = nextLo[1];
        printf("\nSTMT_EXEC;;13228\n");
stackHi[sp] = nextHi[1];
        printf("\nSTMT_EXEC;;13229\n");
stackD[sp] = nextD[1];
        printf("\nSTMT_EXEC;;13230\n");
sp++;
        printf("\nSTMT_EXEC;;13231\n");
stackLo[sp] = nextLo[2];
        printf("\nSTMT_EXEC;;13232\n");
stackHi[sp] = nextHi[2];
        printf("\nSTMT_EXEC;;13233\n");
stackD[sp] = nextD[2];
        printf("\nSTMT_EXEC;;13234\n");
sp++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13238\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}
static void mainSort(UInt32 *ptr, UChar *block, UInt16 *quadrant, UInt32 *ftab, Int32 nblock, Int32 verb, Int32 *budget)
{
  printf("\nFUNC_CALL;mainSort(UInt32 *,UChar *,UInt16 *,UInt32 *,Int32,Int32,Int32 *);\n");
printf("\nSTMT_EXEC;;13243\n");
Int32 i;
  printf("\nSTMT_EXEC;;13244\n");
Int32 j;
  printf("\nSTMT_EXEC;;13245\n");
Int32 k;
  printf("\nSTMT_EXEC;;13246\n");
Int32 ss;
  printf("\nSTMT_EXEC;;13247\n");
Int32 sb;
  printf("\nSTMT_EXEC;;13248\n");
Int32 runningOrder[256];
  printf("\nSTMT_EXEC;;13249\n");
Bool bigDone[256];
  printf("\nSTMT_EXEC;;13250\n");
Int32 copyStart[256];
  printf("\nSTMT_EXEC;;13251\n");
Int32 copyEnd[256];
  printf("\nSTMT_EXEC;;13252\n");
UChar c1;
  printf("\nSTMT_EXEC;;13253\n");
Int32 numQSorted;
  printf("\nSTMT_EXEC;;13254\n");
UInt16 s;
  printf("\nSTMT_EXEC;;13255\n");
Int32 vv;
  printf("\nSTMT_EXEC;;13256\n");
Int32 h;
  printf("\nSTMT_EXEC;;13257\n");
Int32 lo;
  printf("\nSTMT_EXEC;;13258\n");
Int32 hi;
  printf("\nSTMT_EXEC;;13259\n");
Int32 tmp;
  printf("\nSTMT_EXEC;;13260\n");
Int32 tmp___0;
  printf("\nSTMT_EXEC;;13261\n");
Int32 bbStart;
  printf("\nSTMT_EXEC;;13262\n");
Int32 bbSize;
  printf("\nSTMT_EXEC;;13263\n");
Int32 shifts;
  printf("\nSTMT_EXEC;;13264\n");
Int32 a2update;
  printf("\nSTMT_EXEC;;13265\n");
UInt16 qVal;
  printf("\nSTMT_EXEC;;13266\n");
void *__cil_tmp31;
  printf("\nSTMT_EXEC;;13267\n");
void *__cil_tmp32;
  printf("\nSTMT_EXEC;;13268\n");
void *__cil_tmp33;
  printf("\nSTMT_EXEC;;13269\n");
void *__cil_tmp34;
  {
    printf("\nSTMT_EXEC;;13271\n");
if (verb >= 4)
    {
      {
        printf("\nSTMT_EXEC;;13274\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "        main sort initialise ...\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;13277\n");
i = 65536;
    {
      printf("\nSTMT_EXEC;;13279\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;13282\n");
if (!(i >= 0))
        {
          printf("\nSTMT_EXEC;;13284\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;13286\n");
*(ftab + i) = (UInt32)0;
        printf("\nSTMT_EXEC;;13287\n");
i--;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13291\n");
j = (int)*(block + 0) << 8;
    printf("\nSTMT_EXEC;;13292\n");
i = nblock - 1;
    {
      printf("\nSTMT_EXEC;;13294\n");
while (1)
      {
      while_continue___0: /* CIL Label */;
        printf("\nSTMT_EXEC;;13297\n");
if (!(i >= 3))
        {
          printf("\nSTMT_EXEC;;13299\n");
goto while_break___0;
        }
        printf("\nSTMT_EXEC;;13301\n");
*(quadrant + i) = (UInt16)0;
        printf("\nSTMT_EXEC;;13302\n");
j = (j >> 8) | ((int)((UInt16) * (block + i)) << 8);
        printf("\nSTMT_EXEC;;13303\n");
(*(ftab + j))++;
        printf("\nSTMT_EXEC;;13304\n");
*(quadrant + (i - 1)) = (UInt16)0;
        printf("\nSTMT_EXEC;;13305\n");
j = (j >> 8) | ((int)((UInt16) * (block + (i - 1))) << 8);
        printf("\nSTMT_EXEC;;13306\n");
(*(ftab + j))++;
        printf("\nSTMT_EXEC;;13307\n");
*(quadrant + (i - 2)) = (UInt16)0;
        printf("\nSTMT_EXEC;;13308\n");
j = (j >> 8) | ((int)((UInt16) * (block + (i - 2))) << 8);
        printf("\nSTMT_EXEC;;13309\n");
(*(ftab + j))++;
        printf("\nSTMT_EXEC;;13310\n");
*(quadrant + (i - 3)) = (UInt16)0;
        printf("\nSTMT_EXEC;;13311\n");
j = (j >> 8) | ((int)((UInt16) * (block + (i - 3))) << 8);
        printf("\nSTMT_EXEC;;13312\n");
(*(ftab + j))++;
        printf("\nSTMT_EXEC;;13313\n");
i -= 4;
      }
    while_break___0: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;13318\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;13321\n");
if (!(i >= 0))
        {
          printf("\nSTMT_EXEC;;13323\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;13325\n");
*(quadrant + i) = (UInt16)0;
        printf("\nSTMT_EXEC;;13326\n");
j = (j >> 8) | ((int)((UInt16) * (block + i)) << 8);
        printf("\nSTMT_EXEC;;13327\n");
(*(ftab + j))++;
        printf("\nSTMT_EXEC;;13328\n");
i--;
      }
    while_break___1: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13332\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;13334\n");
while (1)
      {
      while_continue___2: /* CIL Label */;
        printf("\nSTMT_EXEC;;13337\n");
if (!(i < 34))
        {
          printf("\nSTMT_EXEC;;13339\n");
goto while_break___2;
        }
        printf("\nSTMT_EXEC;;13341\n");
*(block + (nblock + i)) = *(block + i);
        printf("\nSTMT_EXEC;;13342\n");
*(quadrant + (nblock + i)) = (UInt16)0;
        printf("\nSTMT_EXEC;;13343\n");
i++;
      }
    while_break___2: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13347\n");
if (verb >= 4)
    {
      {
        printf("\nSTMT_EXEC;;13350\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "        bucket sorting ...\n");printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;13353\n");
i = 1;
    {
      printf("\nSTMT_EXEC;;13355\n");
while (1)
      {
      while_continue___3: /* CIL Label */;
        printf("\nSTMT_EXEC;;13358\n");
if (!(i <= 65536))
        {
          printf("\nSTMT_EXEC;;13360\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;13362\n");
*(ftab + i) += *(ftab + (i - 1));
        printf("\nSTMT_EXEC;;13363\n");
i++;
      }
    while_break___3: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13367\n");
s = (UInt16)((int)*(block + 0) << 8);
    printf("\nSTMT_EXEC;;13368\n");
i = nblock - 1;
    {
      printf("\nSTMT_EXEC;;13370\n");
while (1)
      {
      while_continue___4: /* CIL Label */;
        printf("\nSTMT_EXEC;;13373\n");
if (!(i >= 3))
        {
          printf("\nSTMT_EXEC;;13375\n");
goto while_break___4;
        }
        printf("\nSTMT_EXEC;;13377\n");
s = (UInt16)(((int)s >> 8) | ((int)*(block + i) << 8));
        printf("\nSTMT_EXEC;;13378\n");
j = (Int32)(*(ftab + (int)s) - 1U);
        printf("\nSTMT_EXEC;;13379\n");
*(ftab + (int)s) = (UInt32)j;
        printf("\nSTMT_EXEC;;13380\n");
*(ptr + j) = (UInt32)i;
        printf("\nSTMT_EXEC;;13381\n");
s = (UInt16)(((int)s >> 8) | ((int)*(block + (i - 1)) << 8));
        printf("\nSTMT_EXEC;;13382\n");
j = (Int32)(*(ftab + (int)s) - 1U);
        printf("\nSTMT_EXEC;;13383\n");
*(ftab + (int)s) = (UInt32)j;
        printf("\nSTMT_EXEC;;13384\n");
*(ptr + j) = (UInt32)(i - 1);
        printf("\nSTMT_EXEC;;13385\n");
s = (UInt16)(((int)s >> 8) | ((int)*(block + (i - 2)) << 8));
        printf("\nSTMT_EXEC;;13386\n");
j = (Int32)(*(ftab + (int)s) - 1U);
        printf("\nSTMT_EXEC;;13387\n");
*(ftab + (int)s) = (UInt32)j;
        printf("\nSTMT_EXEC;;13388\n");
*(ptr + j) = (UInt32)(i - 2);
        printf("\nSTMT_EXEC;;13389\n");
s = (UInt16)(((int)s >> 8) | ((int)*(block + (i - 3)) << 8));
        printf("\nSTMT_EXEC;;13390\n");
j = (Int32)(*(ftab + (int)s) - 1U);
        printf("\nSTMT_EXEC;;13391\n");
*(ftab + (int)s) = (UInt32)j;
        printf("\nSTMT_EXEC;;13392\n");
*(ptr + j) = (UInt32)(i - 3);
        printf("\nSTMT_EXEC;;13393\n");
i -= 4;
      }
    while_break___4: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;13398\n");
while (1)
      {
      while_continue___5: /* CIL Label */;
        printf("\nSTMT_EXEC;;13401\n");
if (!(i >= 0))
        {
          printf("\nSTMT_EXEC;;13403\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;13405\n");
s = (UInt16)(((int)s >> 8) | ((int)*(block + i) << 8));
        printf("\nSTMT_EXEC;;13406\n");
j = (Int32)(*(ftab + (int)s) - 1U);
        printf("\nSTMT_EXEC;;13407\n");
*(ftab + (int)s) = (UInt32)j;
        printf("\nSTMT_EXEC;;13408\n");
*(ptr + j) = (UInt32)i;
        printf("\nSTMT_EXEC;;13409\n");
i--;
      }
    while_break___5: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13413\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;13415\n");
while (1)
      {
      while_continue___6: /* CIL Label */;
        printf("\nSTMT_EXEC;;13418\n");
if (!(i <= 255))
        {
          printf("\nSTMT_EXEC;;13420\n");
goto while_break___6;
        }
        printf("\nSTMT_EXEC;;13422\n");
bigDone[i] = (Bool)0;
        printf("\nSTMT_EXEC;;13423\n");
runningOrder[i] = i;
        printf("\nSTMT_EXEC;;13424\n");
i++;
      }
    while_break___6: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13428\n");
h = 1;
    {
      printf("\nSTMT_EXEC;;13430\n");
while (1)
      {
      while_continue___7: /* CIL Label */;
        printf("\nSTMT_EXEC;;13433\n");
h = 3 * h + 1;
        printf("\nSTMT_EXEC;;13434\n");
if (!(h <= 256))
        {
          printf("\nSTMT_EXEC;;13436\n");
goto while_break___7;
        }
      }
    while_break___7: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;13442\n");
while (1)
      {
      while_continue___8: /* CIL Label */;
        printf("\nSTMT_EXEC;;13445\n");
h /= 3;
        printf("\nSTMT_EXEC;;13446\n");
i = h;
        {
          printf("\nSTMT_EXEC;;13448\n");
while (1)
          {
          while_continue___9: /* CIL Label */;
            printf("\nSTMT_EXEC;;13451\n");
if (!(i <= 255))
            {
              printf("\nSTMT_EXEC;;13453\n");
goto while_break___9;
            }
            printf("\nSTMT_EXEC;;13455\n");
vv = runningOrder[i];
            printf("\nSTMT_EXEC;;13456\n");
j = i;
            {
              printf("\nSTMT_EXEC;;13458\n");
while (1)
              {
              while_continue___10: /* CIL Label */;
                printf("\nSTMT_EXEC;;13461\n");
if (!(*(ftab + ((runningOrder[j - h] + 1) << 8)) - *(ftab + (runningOrder[j - h] << 8)) > *(ftab + ((vv + 1) << 8)) - *(ftab + (vv << 8))))
                {
                  printf("\nSTMT_EXEC;;13463\n");
goto while_break___10;
                }
                printf("\nSTMT_EXEC;;13465\n");
runningOrder[j] = runningOrder[j - h];
                printf("\nSTMT_EXEC;;13466\n");
j -= h;
                printf("\nSTMT_EXEC;;13467\n");
if (j <= h - 1)
                {
                  printf("\nSTMT_EXEC;;13469\n");
goto zero;
                }
              }
            while_break___10: /* CIL Label */;
            }
          zero:
            {
printf("\nSTMT_EXEC;;13475\n");
runningOrder[j] = vv;
}

            printf("\nSTMT_EXEC;;13476\n");
i++;
          }
        while_break___9: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13480\n");
if (!(h != 1))
        {
          printf("\nSTMT_EXEC;;13482\n");
goto while_break___8;
        }
      }
    while_break___8: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13487\n");
numQSorted = 0;
    printf("\nSTMT_EXEC;;13488\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;13490\n");
while (1)
      {
      while_continue___11: /* CIL Label */;
        printf("\nSTMT_EXEC;;13493\n");
if (!(i <= 255))
        {
          printf("\nSTMT_EXEC;;13495\n");
goto while_break___11;
        }
        printf("\nSTMT_EXEC;;13497\n");
ss = runningOrder[i];
        printf("\nSTMT_EXEC;;13498\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;13500\n");
while (1)
          {
          while_continue___12: /* CIL Label */;
            printf("\nSTMT_EXEC;;13503\n");
if (!(j <= 255))
            {
              printf("\nSTMT_EXEC;;13505\n");
goto while_break___12;
            }
            printf("\nSTMT_EXEC;;13507\n");
if (j != ss)
            {
              printf("\nSTMT_EXEC;;13509\n");
sb = (ss << 8) + j;
              printf("\nSTMT_EXEC;;13510\n");
if (!(*(ftab + sb) & (unsigned int)(1 << 21)))
              {
                printf("\nSTMT_EXEC;;13512\n");
lo = (Int32)(*(ftab + sb) & (unsigned int)(~(1 << 21)));
                printf("\nSTMT_EXEC;;13513\n");
hi = (Int32)((*(ftab + (sb + 1)) & (unsigned int)(~(1 << 21))) - 1U);
                printf("\nSTMT_EXEC;;13514\n");
if (hi > lo)
                {
                  printf("\nSTMT_EXEC;;13516\n");
if (verb >= 4)
                  {
                    {
                      printf("\nSTMT_EXEC;;13519\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                              (char const * /* __restrict  */) "        qsort [0x%x, "
                                                               "0x%x]   done %d   "
                                                               "this %d\n",
                              ss, j, numQSorted, (hi - lo) + 1);printf("\nFUNC_RETURN;;\n");

                    }
                  }
                  {
                    printf("\nSTMT_EXEC;;13527\n");
mainQSort3(ptr, block, quadrant, nblock, lo, hi, 2, budget);
                    printf("\nSTMT_EXEC;;13528\n");
numQSorted += (hi - lo) + 1;
                  }
                  printf("\nSTMT_EXEC;;13530\n");
if (*budget < 0)
                  {
                    printf("\nSTMT_EXEC;;13532\n");
printf("\nFUNC_RETURN;;\n");
return;
                  }
                }
              }
              printf("\nSTMT_EXEC;;13536\n");
*(ftab + sb) |= (unsigned int)(1 << 21);
            }
            printf("\nSTMT_EXEC;;13538\n");
j++;
          }
        while_break___12: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13542\n");
if (!(!bigDone[ss]))
        {
          {
            printf("\nSTMT_EXEC;;13545\n");
BZ2_bz__AssertH__fail(1006);
          }
        }
        printf("\nSTMT_EXEC;;13548\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;13550\n");
while (1)
          {
          while_continue___13: /* CIL Label */;
            printf("\nSTMT_EXEC;;13553\n");
if (!(j <= 255))
            {
              printf("\nSTMT_EXEC;;13555\n");
goto while_break___13;
            }
            printf("\nSTMT_EXEC;;13557\n");
copyStart[j] = (Int32)(*(ftab + ((j << 8) + ss)) & (unsigned int)(~(1 << 21)));
            printf("\nSTMT_EXEC;;13558\n");
copyEnd[j] = (Int32)((*(ftab + (((j << 8) + ss) + 1)) & (unsigned int)(~(1 << 21))) - 1U);
            printf("\nSTMT_EXEC;;13559\n");
j++;
          }
        while_break___13: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13563\n");
j = (Int32)(*(ftab + (ss << 8)) & (unsigned int)(~(1 << 21)));
        {
          printf("\nSTMT_EXEC;;13565\n");
while (1)
          {
          while_continue___14: /* CIL Label */;
            printf("\nSTMT_EXEC;;13568\n");
if (!(j < copyStart[ss]))
            {
              printf("\nSTMT_EXEC;;13570\n");
goto while_break___14;
            }
            printf("\nSTMT_EXEC;;13572\n");
k = (Int32)(*(ptr + j) - 1U);
            printf("\nSTMT_EXEC;;13573\n");
if (k < 0)
            {
              printf("\nSTMT_EXEC;;13575\n");
k += nblock;
            }
            printf("\nSTMT_EXEC;;13577\n");
c1 = *(block + k);
            printf("\nSTMT_EXEC;;13578\n");
if (!bigDone[c1])
            {
              printf("\nSTMT_EXEC;;13580\n");
tmp = copyStart[c1];
              printf("\nSTMT_EXEC;;13581\n");
(copyStart[c1])++;
              printf("\nSTMT_EXEC;;13582\n");
*(ptr + tmp) = (UInt32)k;
            }
            printf("\nSTMT_EXEC;;13584\n");
j++;
          }
        while_break___14: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13588\n");
j = (Int32)((*(ftab + ((ss + 1) << 8)) & (unsigned int)(~(1 << 21))) - 1U);
        {
          printf("\nSTMT_EXEC;;13590\n");
while (1)
          {
          while_continue___15: /* CIL Label */;
            printf("\nSTMT_EXEC;;13593\n");
if (!(j > copyEnd[ss]))
            {
              printf("\nSTMT_EXEC;;13595\n");
goto while_break___15;
            }
            printf("\nSTMT_EXEC;;13597\n");
k = (Int32)(*(ptr + j) - 1U);
            printf("\nSTMT_EXEC;;13598\n");
if (k < 0)
            {
              printf("\nSTMT_EXEC;;13600\n");
k += nblock;
            }
            printf("\nSTMT_EXEC;;13602\n");
c1 = *(block + k);
            printf("\nSTMT_EXEC;;13603\n");
if (!bigDone[c1])
            {
              printf("\nSTMT_EXEC;;13605\n");
tmp___0 = copyEnd[c1];
              printf("\nSTMT_EXEC;;13606\n");
(copyEnd[c1])--;
              printf("\nSTMT_EXEC;;13607\n");
*(ptr + tmp___0) = (UInt32)k;
            }
            printf("\nSTMT_EXEC;;13609\n");
j--;
          }
        while_break___15: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13613\n");
if (!(copyStart[ss] - 1 == copyEnd[ss]))
        {
          printf("\nSTMT_EXEC;;13615\n");
if (copyStart[ss] == 0)
          {
            printf("\nSTMT_EXEC;;13617\n");
if (!(copyEnd[ss] == nblock - 1))
            {
              {
                printf("\nSTMT_EXEC;;13620\n");
BZ2_bz__AssertH__fail(1007);
              }
            }
          }
          else
          {
            {
              printf("\nSTMT_EXEC;;13627\n");
BZ2_bz__AssertH__fail(1007);
            }
          }
        }
        printf("\nSTMT_EXEC;;13631\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;13633\n");
while (1)
          {
          while_continue___16: /* CIL Label */;
            printf("\nSTMT_EXEC;;13636\n");
if (!(j <= 255))
            {
              printf("\nSTMT_EXEC;;13638\n");
goto while_break___16;
            }
            printf("\nSTMT_EXEC;;13640\n");
*(ftab + ((j << 8) + ss)) |= (unsigned int)(1 << 21);
            printf("\nSTMT_EXEC;;13641\n");
j++;
          }
        while_break___16: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;13645\n");
bigDone[ss] = (Bool)1;
        printf("\nSTMT_EXEC;;13646\n");
if (i < 255)
        {
          printf("\nSTMT_EXEC;;13648\n");
bbStart = (Int32)(*(ftab + (ss << 8)) & (unsigned int)(~(1 << 21)));
          printf("\nSTMT_EXEC;;13649\n");
bbSize = (Int32)((*(ftab + ((ss + 1) << 8)) & (unsigned int)(~(1 << 21))) - (unsigned int)bbStart);
          printf("\nSTMT_EXEC;;13650\n");
shifts = 0;
          {
            printf("\nSTMT_EXEC;;13652\n");
while (1)
            {
            while_continue___17: /* CIL Label */;
              printf("\nSTMT_EXEC;;13655\n");
if (!(bbSize >> shifts > 65534))
              {
                printf("\nSTMT_EXEC;;13657\n");
goto while_break___17;
              }
              printf("\nSTMT_EXEC;;13659\n");
shifts++;
            }
          while_break___17: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;13663\n");
j = bbSize - 1;
          {
            printf("\nSTMT_EXEC;;13665\n");
while (1)
            {
            while_continue___18: /* CIL Label */;
              printf("\nSTMT_EXEC;;13668\n");
if (!(j >= 0))
              {
                printf("\nSTMT_EXEC;;13670\n");
goto while_break___18;
              }
              printf("\nSTMT_EXEC;;13672\n");
a2update = (Int32) * (ptr + (bbStart + j));
              printf("\nSTMT_EXEC;;13673\n");
qVal = (UInt16)(j >> shifts);
              printf("\nSTMT_EXEC;;13674\n");
*(quadrant + a2update) = qVal;
              printf("\nSTMT_EXEC;;13675\n");
if (a2update < 34)
              {
                printf("\nSTMT_EXEC;;13677\n");
*(quadrant + (a2update + nblock)) = qVal;
              }
              printf("\nSTMT_EXEC;;13679\n");
j--;
            }
          while_break___18: /* CIL Label */;
          }
          printf("\nSTMT_EXEC;;13683\n");
if (!((bbSize - 1) >> shifts <= 65535))
          {
            {
              printf("\nSTMT_EXEC;;13686\n");
BZ2_bz__AssertH__fail(1002);
            }
          }
        }
        printf("\nSTMT_EXEC;;13690\n");
i++;
      }
    while_break___11: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;13694\n");
if (verb >= 4)
    {
      {
        printf("\nSTMT_EXEC;;13697\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */) "        %d pointers, %d "
                                                 "sorted, %d scanned\n",
                nblock, numQSorted, nblock - numQSorted);printf("\nFUNC_RETURN;;\n");

      }
    }
    printf("\nSTMT_EXEC;;13703\n");
printf("\nFUNC_RETURN;;\n");
return;
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
  printf("\nSTMT_EXEC;;13714\n");
UInt16 *quadrant;
  printf("\nSTMT_EXEC;;13715\n");
Int32 budget;
  printf("\nSTMT_EXEC;;13716\n");
Int32 budgetInit;
  printf("\nSTMT_EXEC;;13717\n");
Int32 i;
  printf("\nSTMT_EXEC;;13718\n");
int tmp;
  {
    printf("\nSTMT_EXEC;;13720\n");
ptr = s->ptr;
    printf("\nSTMT_EXEC;;13721\n");
block = s->block;
    printf("\nSTMT_EXEC;;13722\n");
ftab = s->ftab;
    printf("\nSTMT_EXEC;;13723\n");
nblock = s->nblock;
    printf("\nSTMT_EXEC;;13724\n");
verb = s->verbosity;
    printf("\nSTMT_EXEC;;13725\n");
wfact = s->workFactor;
    printf("\nSTMT_EXEC;;13726\n");
if (nblock < 10000)
    {
      {
        printf("\nSTMT_EXEC;;13729\n");
fallbackSort(s->arr1, s->arr2, ftab, nblock, verb);
      }
    }
    else
    {
      printf("\nSTMT_EXEC;;13734\n");
i = nblock + 34;
      printf("\nSTMT_EXEC;;13735\n");
if (i & 1)
      {
        printf("\nSTMT_EXEC;;13737\n");
i++;
      }
      printf("\nSTMT_EXEC;;13739\n");
quadrant = (UInt16 *)(block + i);
      printf("\nSTMT_EXEC;;13740\n");
if (wfact < 1)
      {
        printf("\nSTMT_EXEC;;13742\n");
wfact = 1;
      }
      printf("\nSTMT_EXEC;;13744\n");
if (wfact > 100)
      {
        printf("\nSTMT_EXEC;;13746\n");
wfact = 100;
      }
      {
        printf("\nSTMT_EXEC;;13749\n");
budgetInit = nblock * ((wfact - 1) / 3);
        printf("\nSTMT_EXEC;;13750\n");
budget = budgetInit;
        printf("\nSTMT_EXEC;;13751\n");
mainSort(ptr, block, quadrant, ftab, nblock, verb, &budget);
      }
      printf("\nSTMT_EXEC;;13753\n");
if (verb >= 3)
      {
        printf("\nSTMT_EXEC;;13755\n");
if (nblock == 0)
        {
          printf("\nSTMT_EXEC;;13757\n");
tmp = 1;
        }
        else
        {
          printf("\nSTMT_EXEC;;13761\n");
tmp = nblock;
        }
        {
          printf("\nSTMT_EXEC;;13764\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr,
                  (char const * /* __restrict  */) "      %d work, %d block, "
                                                   "ratio %5.2f\n",
                  budgetInit - budget, nblock, (double)((float)(budgetInit - budget) / (float)tmp));printf("\nFUNC_RETURN;;\n");

        }
      }
      printf("\nSTMT_EXEC;;13770\n");
if (budget < 0)
      {
        printf("\nSTMT_EXEC;;13772\n");
if (verb >= 2)
        {
          {
            printf("\nSTMT_EXEC;;13775\n");
printf("\nFUNC_CALL;fprintf(FILE *__restrict,const char *__restrict);\n");
fprintf((FILE * /* __restrict  */) stderr, (char const * /* __restrict  */) "    too repetitive; using "
                                                                                        "fallback sorting algorithm\n");printf("\nFUNC_RETURN;;\n");

          }
        }
        {
          printf("\nSTMT_EXEC;;13780\n");
fallbackSort(s->arr1, s->arr2, ftab, nblock, verb);
        }
      }
    }
    printf("\nSTMT_EXEC;;13784\n");
s->origPtr = -1;
    printf("\nSTMT_EXEC;;13785\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;13787\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;13790\n");
if (!(i < s->nblock))
        {
          printf("\nSTMT_EXEC;;13792\n");
goto while_break;
        }
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
    printf("\nSTMT_EXEC;;13803\n");
if (!(s->origPtr != -1))
    {
      {
        printf("\nSTMT_EXEC;;13806\n");
BZ2_bz__AssertH__fail(1003);
      }
    }
    printf("\nSTMT_EXEC;;13809\n");
printf("\nFUNC_RETURN;;\n");
return;
  }
printf("\nFUNC_RETURN;;\n");
}