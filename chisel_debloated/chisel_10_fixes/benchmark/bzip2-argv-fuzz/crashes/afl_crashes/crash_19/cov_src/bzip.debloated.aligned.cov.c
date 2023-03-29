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











































































































































































































































































}
void BZ2_hbAssignCodes(Int32 *code, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize)
{







































}
void BZ2_hbCreateDecodeTables(Int32 *limit, Int32 *base, Int32 *perm, UChar *length, Int32 minLen, Int32 maxLen, Int32 alphaSize)
{






























































































































}
extern struct _IO_FILE *stderr;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
Int32 BZ2_indexIntoF(Int32 indx, Int32 *cftab);
Int32 BZ2_decompress(DState *s);
static void makeMaps_d(DState *s)
{
  Int32 i;
  {
    s->nInUse = 0;
    i = 0;
    {
      while (1)
      {
        ;
        if (!(i < 256))
        {
          goto while_break;
        }

        {
          s->seqToUnseq[s->nInUse] = (UChar)i;
          (s->nInUse)++;
        }
        i++;
      }
    while_break: /* CIL Label */;
    }

  }
}
Int32 BZ2_decompress(DState *s)
{
  UChar uc;
  Int32 retVal;
  Int32 minLen;
  Int32 maxLen;
  bz_stream *strm;
  Int32 i;
  Int32 j;
  Int32 t;
  Int32 alphaSize;
  Int32 nGroups;
  Int32 nSelectors;
  Int32 EOB;
  Int32 groupNo;
  Int32 groupPos;
  Int32 nextSym;
  Int32 nblockMAX;
  Int32 nblock;
  Int32 es;
  Int32 N;
  Int32 curr;

  Int32 zn;
  Int32 zvec;
  Int32 zj;
  Int32 gSel;
  Int32 gMinlen;
  Int32 *gLimit;
  Int32 *gBase;
  Int32 *gPerm;



  UInt32 v___2;
  UInt32 v___3;





  UInt32 v___9;
  UInt32 v___10;
  UInt32 v___11;
  UInt32 v___12;
  UInt32 v___13;
  UInt32 v___14;
  UInt32 v___15;
  UInt32 v___16;


  UInt32 v___19;
  UInt32 v___20;
  UInt32 v___21;
  UChar pos[6];
  UChar tmp;
  UChar v___22;
  UInt32 v___23;
  UInt32 v___24;
  UInt32 v___25;
  Int32 ii;
  Int32 jj;
  Int32 kk;
  UInt32 v___26;
  UInt32 v___27;
  UInt32 v___28;
  UInt32 v___29;



  Int32 pp;


  UInt32 nn;

  UInt32 v___30;
  UInt32 v___31;








  UInt32 v___37;
  UInt32 v___38;
  UInt32 v___39;
  UInt32 v___40;

  {
    strm = s->strm;

































    EOB = s->save_EOB;
    groupNo = s->save_groupNo;
    groupPos = s->save_groupPos;


    nblock = s->save_nblock;
    es = s->save_es;
    N = s->save_N;


    zn = s->save_zn;
    zvec = s->save_zvec;


    gMinlen = s->save_gMinlen;
    gLimit = s->save_gLimit;
    gBase = s->save_gBase;
    gPerm = s->save_gPerm;

    {
















                         
       

       




























































































                         
       

       
                         
       

       
                         
       

       
                         
       

       

      {{;























































      ((s->strm)->next_in)++;
      ((s->strm)->avail_in)--;




    }
  }



  {

    ;





















    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;




  }




  {

    ;





















    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;




  }










  {
    while (1)
    {
      ;
      if (s->bsLive >= 8)
      {
        v___2 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
        s->bsLive -= 8;
        s->blockSize100k = (Int32)v___2;
        goto while_break___2;
      }





      s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
      s->bsLive += 8;
      ((s->strm)->next_in)++;
      ((s->strm)->avail_in)--;





    }
  while_break___2: /* CIL Label */;
  }

  {



































    s->tt = (UInt32 *)(*(strm->bzalloc))(strm->opaque, (int)((unsigned long)(s->blockSize100k * 100000) * sizeof(Int32)), 1);






  }
case_14: ;/* CIL Label */
  s->state = 14;
  {
    while (1)
    {
      ;
      if (s->bsLive >= 8)
      {
        v___3 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
        s->bsLive -= 8;
        uc = (UChar)v___3;
        goto while_break___3;
      }





      s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
      s->bsLive += 8;
      ((s->strm)->next_in)++;
      ((s->strm)->avail_in)--;





    }
  while_break___3: /* CIL Label */;
  }
                    
   

   

  {

    ;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;
  }


  {

    ;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;
  }
  {

    ;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;
  }
  {

    ;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;
  }
  {
    ;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;
  }
  {{;
  ((s->strm)->next_in)++;
  ((s->strm)->avail_in)--;
}
}
{
  ;
  {
    s->bsLive -= 8;


  }




}
{
  ;
  {
    s->bsLive -= 8;
  }
}
{
  ;
  {
    s->bsLive -= 8;
  }
}
{
  while (1)
  {
    ;
    if (s->bsLive >= 1)
    {
      (s->bsLive)--;
      goto while_break___13;
    }
    s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    s->bsLive += 8;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;
























































































































































































































































































































  }
while_break___13: /* CIL Label */;
}



{

  ;


  {
    v___14 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
    s->bsLive -= 8;
    uc = (UChar)v___14;

  }
















}
s->origPtr = (s->origPtr << 8) | (Int32)uc;


{
  while (1)
  {
    ;
    if (s->bsLive >= 8)
    {
      v___15 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
      s->bsLive -= 8;
      uc = (UChar)v___15;
      goto while_break___15;
    }





    s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    s->bsLive += 8;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;





  }
while_break___15: /* CIL Label */;
}



{
  while (1)
  {
    ;
    if (s->bsLive >= 8)
    {
      v___16 = (s->bsBuff >> (s->bsLive - 8)) & (unsigned int)((1 << 8) - 1);
      s->bsLive -= 8;
      uc = (UChar)v___16;
      goto while_break___16;
    }





    s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    s->bsLive += 8;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;





  }
while_break___16: /* CIL Label */;
}











i = 0;
{
  while (1)
  {
    ;
    if (!(i < 16))
    {
      goto while_break___17;
    }


    {

      ;
      {




        (s->bsLive)--;


      }




    }
    i++;
  }
while_break___17: /* CIL Label */;
}

{
  while (1)
  {
    ;
    if (!(i < 16))
    {
      goto while_break___20;
    }
    {
      j = 0;
      {
        while (1)
        {
          ;
          if (!(j < 16))
          {
            goto while_break___21;
          }
          {
            while (1)
            {
              ;
              if (s->bsLive >= 1)
              {
                (s->bsLive)--;
                goto while_break___22;
              }
              s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
              s->bsLive += 8;
              ((s->strm)->next_in)++;
              ((s->strm)->avail_in)--;

















































































            }
          while_break___22: /* CIL Label */;
          }





        }
      while_break___21: /* CIL Label */;
      }
    }

  }
while_break___20: /* CIL Label */;
}
{
  makeMaps_d(s);
}





alphaSize = s->nInUse + 2;


{

  {
    ;

    {
      v___19 = (s->bsBuff >> (s->bsLive - 3)) & (unsigned int)((1 << 3) - 1);
      s->bsLive -= 3;
      nGroups = (Int32)v___19;















    }
  };

}















{
  while (1)
  {
    ;
    if (s->bsLive >= 15)
    {
      v___20 = (s->bsBuff >> (s->bsLive - 15)) & (unsigned int)((1 << 15) - 1);
      s->bsLive -= 15;
      nSelectors = (Int32)v___20;
      goto while_break___24;
    }





    s->bsBuff = (s->bsBuff << 8) | (UInt32) * ((UChar *)(s->strm)->next_in);
    s->bsLive += 8;
    ((s->strm)->next_in)++;
    ((s->strm)->avail_in)--;





  }
while_break___24: /* CIL Label */;
}






{
  while (1)
  {
    ;
    if (!(i < nSelectors))
    {
      goto while_break___25;
    }

    {













































    }


  }
while_break___25: /* CIL Label */;
}

{
  while (1)
  {
    ;
    if (!((int)v___22 < nGroups))
    {
      goto while_break___28;
    }


  }
while_break___28: /* CIL Label */;
}

{
  while (1)
  {
    ;
    if (!(i < nSelectors))
    {
      goto while_break___29;
    }


    {











    }



  }
while_break___29: /* CIL Label */;
}

{
  while (1)
  {
    ;
    if (!(t < nGroups))
    {
      goto while_break___31;
    }


    {


























    }

    {







































































































    }

  }
while_break___31: /* CIL Label */;
}

{
  while (1)
  {
    ;
    if (!(t < nGroups))
    {
      goto while_break___37;
    }



    {


















    }
    {



    }
  }
while_break___37: /* CIL Label */;
}


groupNo = -1;

i = 0;
{
  while (1)
  {
    ;
    if (!(i <= 255))
    {
      goto while_break___39;
    }
    s->unzftab[i] = 0;
    i++;
  }
while_break___39: /* CIL Label */;
}

ii = 15;
{
  while (1)
  {
    ;
    if (!(ii >= 0))
    {
      goto while_break___40;
    }
    jj = 15;
    {
      while (1)
      {
        ;
        if (!(jj >= 0))
        {
          goto while_break___41;
        }
        s->mtfa[kk] = (UChar)(ii * 16 + jj);
        kk--;
        jj--;
      }
    while_break___41: /* CIL Label */;
    }

    ii--;
  }
while_break___40: /* CIL Label */;
}


{
  groupNo++;





  groupPos = 50;
  gSel = (Int32)s->selector[groupNo];
  gMinlen = s->minLens[gSel];
  gLimit = &s->limit[gSel][0];
  gPerm = &s->perm[gSel][0];
  gBase = &s->base[gSel][0];
}
groupPos--;
zn = gMinlen;


{

  {
    ;

    {
      v___26 = (s->bsBuff >> (s->bsLive - zn)) & (unsigned int)((1 << zn) - 1);
      s->bsLive -= zn;
      zvec = (Int32)v___26;















    }
  };

}
{
  while (1)
  {
    ;





    if (zvec <= *(gLimit + zn))
    {
      goto while_break___43;
    }



    {


























    }

  }
while_break___43: /* CIL Label */;
}














{

  {
  while_continue___45: /* CIL Label */;
                             
     

     
    if (nextSym == 0)
    {
      goto _L;
    }
    else
    {
      if (nextSym == 1)
      {
      _L:;
        es = -1;
        N = 1;
        {
          while (1)
          {
            ;
            if (nextSym == 0)
            {
              es += N;
            }
            else
            {




            }
            N *= 2;
            if (groupPos == 0)
            {
              groupNo++;





              groupPos = 50;
              gSel = (Int32)s->selector[groupNo];
              gMinlen = s->minLens[gSel];
              gLimit = &s->limit[gSel][0];
              gPerm = &s->perm[gSel][0];
              gBase = &s->base[gSel][0];
            }
            groupPos--;
            zn = gMinlen;
          case_38: ;/* CIL Label */
            s->state = 38;
            {
              while (1)
              {
                ;
                if (s->bsLive >= zn)
                {
                  v___28 = (s->bsBuff >> (s->bsLive - zn)) & (unsigned int)((1 << zn) - 1);
                  s->bsLive -= zn;
                  zvec = (Int32)v___28;
                  goto while_break___47;
                }














              }
            while_break___47: /* CIL Label */;
            }
            {
              while (1)
              {
                ;





                if (zvec <= *(gLimit + zn))
                {
                  goto while_break___48;
                }
                zn++;
              case_39: ;/* CIL Label */

                {


























                }

              }
            while_break___48: /* CIL Label */;
            }














                                
             




             
          }

        }




        {








































        }


      }
      else
      {







        {


          {




























          }

        }












































































        {

        }


















      case_40: ;/* CIL Label */

        {


























        }
        {














































        }















      }
    }
  }

}















{











}

{











}





































{

  {






























































































































  }



  {








































  }
}


endhdr_2 :;


















































































































































































































































































































}































}
}

UInt32 BZ2_crc32Table[256] = {(UInt32)0L, (UInt32)79764919L, (UInt32)159529838L, (UInt32)222504665L, (UInt32)319059676L, (UInt32)398814059L, (UInt32)445009330L, (UInt32)507990021L, (UInt32)638119352L, (UInt32)583659535L, (UInt32)797628118L, (UInt32)726387553L, (UInt32)890018660L, (UInt32)835552979L, (UInt32)1015980042L, (UInt32)944750013L, (UInt32)1276238704L, (UInt32)1221641927L, (UInt32)1167319070L, (UInt32)1095957929L, (UInt32)1595256236L, (UInt32)1540665371L, (UInt32)1452775106L, (UInt32)1381403509L, (UInt32)1780037320L, (UInt32)1859660671L, (UInt32)1671105958L, (UInt32)1733955601L, (UInt32)2031960084L, (UInt32)2111593891L, (UInt32)1889500026L, (UInt32)1952343757L, (UInt32)2552477408L, (UInt32)2632100695L, (UInt32)2443283854L, (UInt32)2506133561L, (UInt32)2334638140L, (UInt32)2414271883L, (UInt32)2191915858L, (UInt32)2254759653L, (UInt32)3190512472L, (UInt32)3135915759L, (UInt32)3081330742L, (UInt32)3009969537L, (UInt32)2905550212L, (UInt32)2850959411L, (UInt32)2762807018L, (UInt32)2691435357L, (UInt32)3560074640L, (UInt32)3505614887L, (UInt32)3719321342L, (UInt32)3648080713L, (UInt32)3342211916L, (UInt32)3287746299L, (UInt32)3467911202L, (UInt32)3396681109L, (UInt32)4063920168L, (UInt32)4143685023L, (UInt32)4223187782L, (UInt32)4286162673L, (UInt32)3779000052L, (UInt32)3858754371L, (UInt32)3904687514L, (UInt32)3967668269L, (UInt32)881225847L, (UInt32)809987520L, (UInt32)1023691545L, (UInt32)969234094L, (UInt32)662832811L, (UInt32)591600412L, (UInt32)771767749L, (UInt32)717299826L, (UInt32)311336399L, (UInt32)374308984L, (UInt32)453813921L, (UInt32)533576470L, (UInt32)25881363L, (UInt32)88864420L, (UInt32)134795389L, (UInt32)214552010L, (UInt32)2023205639L, (UInt32)2086057648L, (UInt32)1897238633L, (UInt32)1976864222L, (UInt32)1804852699L, (UInt32)1867694188L, (UInt32)1645340341L, (UInt32)1724971778L, (UInt32)1587496639L, (UInt32)1516133128L, (UInt32)1461550545L, (UInt32)1406951526L, (UInt32)1302016099L, (UInt32)1230646740L, (UInt32)1142491917L, (UInt32)1087903418L, (UInt32)2896545431L, (UInt32)2825181984L, (UInt32)2770861561L, (UInt32)2716262478L, (UInt32)3215044683L, (UInt32)3143675388L, (UInt32)3055782693L, (UInt32)3001194130L, (UInt32)2326604591L, (UInt32)2389456536L, (UInt32)2200899649L, (UInt32)2280525302L, (UInt32)2578013683L, (UInt32)2640855108L, (UInt32)2418763421L, (UInt32)2498394922L, (UInt32)3769900519L, (UInt32)3832873040L, (UInt32)3912640137L, (UInt32)3992402750L, (UInt32)4088425275L, (UInt32)4151408268L, (UInt32)4197601365L, (UInt32)4277358050L, (UInt32)3334271071L, (UInt32)3263032808L, (UInt32)3476998961L, (UInt32)3422541446L, (UInt32)3585640067L, (UInt32)3514407732L, (UInt32)3694837229L, (UInt32)3640369242L, (UInt32)1762451694L, (UInt32)1842216281L, (UInt32)1619975040L, (UInt32)1682949687L, (UInt32)2047383090L, (UInt32)2127137669L, (UInt32)1938468188L, (UInt32)2001449195L, (UInt32)1325665622L, (UInt32)1271206113L, (UInt32)1183200824L, (UInt32)1111960463L, (UInt32)1543535498L, (UInt32)1489069629L, (UInt32)1434599652L, (UInt32)1363369299L, (UInt32)622672798L, (UInt32)568075817L, (UInt32)748617968L, (UInt32)677256519L, (UInt32)907627842L, (UInt32)853037301L, (UInt32)1067152940L, (UInt32)995781531L, (UInt32)51762726L, (UInt32)131386257L, (UInt32)177728840L, (UInt32)240578815L, (UInt32)269590778L, (UInt32)349224269L, (UInt32)429104020L, (UInt32)491947555L, (UInt32)4046411278L, (UInt32)4126034873L, (UInt32)4172115296L, (UInt32)4234965207L, (UInt32)3794477266L, (UInt32)3874110821L, (UInt32)3953728444L, (UInt32)4016571915L, (UInt32)3609705398L, (UInt32)3555108353L, (UInt32)3735388376L, (UInt32)3664026991L, (UInt32)3290680682L, (UInt32)3236090077L, (UInt32)3449943556L, (UInt32)3378572211L, (UInt32)3174993278L, (UInt32)3120533705L, (UInt32)3032266256L, (UInt32)2961025959L, (UInt32)2923101090L, (UInt32)2868635157L, (UInt32)2813903052L, (UInt32)2742672763L, (UInt32)2604032198L, (UInt32)2683796849L, (UInt32)2461293480L, (UInt32)2524268063L, (UInt32)2284983834L, (UInt32)2364738477L, (UInt32)2175806836L, (UInt32)2238787779L, (UInt32)1569362073L, (UInt32)1498123566L, (UInt32)1409854455L, (UInt32)1355396672L, (UInt32)1317987909L, (UInt32)1246755826L, (UInt32)1192025387L, (UInt32)1137557660L, (UInt32)2072149281L, (UInt32)2135122070L, (UInt32)1912620623L, (UInt32)1992383480L, (UInt32)1753615357L, (UInt32)1816598090L, (UInt32)1627664531L, (UInt32)1707420964L, (UInt32)295390185L, (UInt32)358241886L, (UInt32)404320391L, (UInt32)483945776L, (UInt32)43990325L, (UInt32)106832002L, (UInt32)186451547L, (UInt32)266083308L, (UInt32)932423249L, (UInt32)861060070L, (UInt32)1041341759L, (UInt32)986742920L, (UInt32)613929101L, (UInt32)542559546L, (UInt32)756411363L, (UInt32)701822548L, (UInt32)3316196985L, (UInt32)3244833742L, (UInt32)3425377559L, (UInt32)3370778784L, (UInt32)3601682597L, (UInt32)3530312978L, (UInt32)3744426955L, (UInt32)3689838204L, (UInt32)3819031489L, (UInt32)3881883254L, (UInt32)3928223919L, (UInt32)4007849240L, (UInt32)4037393693L, (UInt32)4100235434L, (UInt32)4180117107L, (UInt32)4259748804L, (UInt32)2310601993L, (UInt32)2373574846L, (UInt32)2151335527L, (UInt32)2231098320L, (UInt32)2596047829L, (UInt32)2659030626L, (UInt32)2470359227L, (UInt32)2550115596L, (UInt32)2947551409L, (UInt32)2876312838L, (UInt32)2788305887L, (UInt32)2733848168L, (UInt32)3165939309L, (UInt32)3094707162L, (UInt32)3040238851L, (UInt32)2985771188L};
void BZ2_blockSort(EState *s);
void BZ2_compressBlock(EState *s, Bool is_last_block);
void BZ2_bsInitWrite(EState *s);
void BZ2_bsInitWrite(EState *s)
{





}
static void bsFinishWrite(EState *s)
{


















}
__inline static void bsW(EState *s, Int32 n, UInt32 v)
{




















}
static void bsPutUInt32(EState *s, UInt32 u)
{









}
static void bsPutUChar(EState *s, UChar c)
{






}
static void makeMaps_e(EState *s)
{























}
static void generateMTFValues(EState *s)
{







































































































































































}
static void sendMTFValues(EState *s)
{






































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































}
void BZ2_compressBlock(EState *s, Bool is_last_block)
{









































































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
  void *v;
  void *tmp;
  {
    {
      tmp = malloc((size_t)(items * size));
      v = tmp;
    }
    return (v);
  }
}
static void default_bzfree(void *opaque, void *addr)
{









}
static void prepare_new_block(EState *s)
{























}
static void init_RL(EState *s)
{




}





















int BZ2_bzCompressInit(bz_stream *strm, int blockSize100k___0, int verbosity___0, int workFactor___0)
{










































































































































}
static void add_pair_to_block(EState *s)
{




































































}
static void flush_RL(EState *s)
{












}
static Bool copy_input_until_stop(EState *s)
{


























































































































































}
static Bool copy_output_until_stop(EState *s)
{






























}
static Bool handle_compress(bz_stream *strm)
{





















































































































}
int BZ2_bzCompress(bz_stream *strm, int action)
{




























































































































































}
int BZ2_bzCompressEnd(bz_stream *strm)
{







































}
int BZ2_bzDecompressInit(bz_stream *strm, int verbosity___0, int small)
{
  DState *s;

  {






























    {
      strm->bzalloc = &default_bzalloc;
    }

    {
      strm->bzfree = &default_bzfree;
    }
    {
      s = (DState *)(*(strm->bzalloc))(strm->opaque, (int)sizeof(DState), 1);
    }




    s->strm = strm;
    strm->state = (void *)s;
    s->state = 10;
    s->bsLive = 0;












    return (0);
  }
}
static Bool unRLE_obuf_to_output_FAST(DState *s)
{






























































































































































































































































































































































































}


























































































































































































































































































































































































int BZ2_bzDecompress(bz_stream *strm)
{
  Bool corrupt;
  DState *s;
  Int32 r;
  Int32 tmp;
  {




    s = (DState *)strm->state;

    {



      {
        ;









                          
         








           

           






           



























           



         


        {
          {
            tmp = BZ2_decompress(s);
            r = tmp;
          }

          {













            return (r);
          }



        }
      };
    }






  }
}
int BZ2_bzDecompressEnd(bz_stream *strm)
{







































}



















BZFILE *BZ2_bzWriteOpen(int *bzerror, FILE *f, int blockSize100k___0, int verbosity___0, int workFactor___0)
{












































































































































}
void BZ2_bzWrite(int *bzerror, BZFILE *b, void *buf, int len)
{























































































































































}
void BZ2_bzWriteClose64(int *bzerror, BZFILE *b, int abandon, unsigned int *nbytes_in_lo32, unsigned int *nbytes_in_hi32, unsigned int *nbytes_out_lo32, unsigned int *nbytes_out_hi32)
{



























































































































































































}
BZFILE *BZ2_bzReadOpen(int *bzerror, FILE *f, int verbosity___0, int small, void *unused, int nUnused)
{
  bzFile *bzf;
  int ret;


  {


































































































    {
      bzf = (bzFile *)malloc(sizeof(bzFile));
    }













    {
      *bzerror = 0;
    }





    bzf->handle = f;
    bzf->bufN = 0;



















    {
      ret = BZ2_bzDecompressInit(&bzf->strm, verbosity___0, small);
    }















    bzf->strm.avail_in = (unsigned int)bzf->bufN;


    return ((BZFILE *)bzf);
  }
}
void BZ2_bzReadClose(int *bzerror, BZFILE *b)
{














































}
int BZ2_bzRead(int *bzerror, BZFILE *b, void *buf, int len)
{
  Int32 n;
  Int32 ret;
  bzFile *bzf;


  Bool tmp___1;

  {
    bzf = (bzFile *)b;



























































    bzf->strm.avail_out = (unsigned int)len;
    bzf->strm.next_out = (char *)buf;
    {
      while (1)
      {
        ;















        if (bzf->strm.avail_in == 0U)
        {





          {
            n = (Int32)fread((void * /* __restrict  */)(bzf->buf), sizeof(UChar), (size_t)5000, (FILE * /* __restrict  */) bzf->handle);

          }












          bzf->bufN = n;
          bzf->strm.avail_in = (unsigned int)bzf->bufN;
          bzf->strm.next_in = bzf->buf;
        }

        {
          ret = BZ2_bzDecompress(&bzf->strm);
        }







































                     
         

           

           





         
                                      
         









         
      };



    }
  }










}



















































char const *BZ2_bzlibVersion(void)
{


  return ("1.0.5, 10-Dec-2007");
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
















}
static void compressStream(FILE *stream, FILE *zStream)
{

































































































































































































































}
static Bool uncompressStream(FILE *zStream, FILE *stream)
{





































































































































































































































































































































































}
static Bool testStream(FILE *zStream)
{
  BZFILE *bzf;
  Int32 bzerr;


  Int32 nread;


  UChar obuf[5000];
  UChar unused[5000];
  Int32 nUnused;











  {
    {

      nUnused = 0;


    }

    {


      {
        ;


        {
          bzf = BZ2_bzReadOpen(&bzerr, zStream, verbosity, (int)smallMode, (void *)(unused), nUnused);
        }

        {



          {
            ;













            {
              nread = BZ2_bzRead(&bzerr, bzf, (void *)(obuf), 5000);
            }



          };
        }






























        {
          BZ2_bzReadClose(&bzerr, bzf);
        }




      };
    }

































    return ((Bool)1);








  }
}

































































































































static __attribute__((__noreturn__)) void cleanUpAndFail(Int32 ec);


























































































static __attribute__((__noreturn__)) void panic(Char const *s);














static __attribute__((__noreturn__)) void crcError(void);














static __attribute__((__noreturn__)) void compressedStreamEOF(void);






















static __attribute__((__noreturn__)) void ioError(void);
static void ioError(void)
{









}





































































































static __attribute__((__noreturn__)) void outOfMemory(void);
static void outOfMemory(void)
{







}
static __attribute__((__noreturn__)) void configError(void);



















































static void copyFileName(Char *to, Char *from)
{



















  strncpy((char * /* __restrict  */)to, (char const * /* __restrict  */)from, (size_t)1024);

}























static FILE *fopen_output_safely(Char *name, char const *mode)
{





















}





















































































































































static void compress(Char *name)
{



































































































































































































































































































































































































































}
static void uncompress(Char *name)
{












































































































































































































































































































































































































































































}
static void testf(Char *name)
{
  FILE *inStr;
  Bool allOK;














  {


    {































      copyFileName(inName, name);
    }


    {





























































































      inStr = fopen((char const * /* __restrict  */)(inName), (char const * /* __restrict  */) "rb");
    }

    {


























      allOK = testStream(inStr);
    }














  }
}
static void license(void)
{
  char const *tmp;
  {

    tmp = BZ2_bzlibVersion();
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
            tmp);


  }
}
static void usage(Char *fullProgName)
{








































}













static void *myMalloc(Int32 n)
{
  void *p;
  {
    {
      p = malloc((size_t)n);
    }
                                                       
     



     
    return (p);
  }
}
static Cell *mkCell(void)
{
  Cell *c;
  {
    {
      c = (Cell *)myMalloc((Int32)sizeof(Cell));

      c->link = (struct zzzz *)((void *)0);
    }
    return (c);
  }
}
static Cell *snocString(Cell *root, Char *name)
{
  Cell *tmp;
  Cell *tmp___0;
  size_t tmp___1;
  Cell *tmp___3;
  {
    if ((unsigned long)root == (unsigned long)((void *)0))
    {
      {
        tmp___0 = mkCell();
        tmp = tmp___0;
        tmp___1 = strlen((char const *)name);
        tmp->name = (Char *)myMalloc((Int32)(5UL + tmp___1));
        strcpy((char * /* __restrict  */)tmp->name, (char const * /* __restrict  */)name);
      }
      return (tmp);
    }
    else
    {
      tmp___3 = root;












      {
        tmp___3->link = snocString(tmp___3->link, name);
      }
      return (root);
    }
  }
}

































































































IntNative main(IntNative argc, Char **argv)
{
  AFL_INIT_SET0("bzip2");
  Int32 i;
  Int32 j;
  Char *tmp;
  Cell *argList;
  Cell *aa;
  Bool decode;































  Cell *aa2;




  {

    {
























































      blockSize100k = 9;













      copyFileName(progNameReally, *(argv + 0));

      tmp = &progNameReally[0];
    }
    {
      while (1)
      {
        ;
        if (!((int)*tmp != 0))
        {
          goto while_break;
        }
                            
         

         
        tmp++;
      }
    while_break: /* CIL Label */;
    }
    {
      argList = (Cell *)((void *)0);


      i = 1;
    }
    {
      while (1)
      {
        ;
        if (!(i <= argc - 1))
        {
          goto while_break___0;
        }
        {
          argList = snocString(argList, *(argv + i));
          i++;
        }
      }
    while_break___0: /* CIL Label */;
    }




    {
      while (1)
      {
        ;
        if (!((unsigned long)aa != (unsigned long)((void *)0)))
        {
          goto while_break___1;
        }








        if ((int)*(aa->name + 0) == 45)
        {


          goto __Cont;
        }

        {
          numFileNames++;

        }






      __Cont:;
        aa = aa->link;
      }
    while_break___1: /* CIL Label */;
    }
    if (numFileNames == 0)
    {

    }
    else
    {
      srcMode = 3;
    }
    {
      opMode = 1;

    }




























































    aa = argList;
    {

      {
        ;
                                                               
         

         







        if ((int)*(aa->name + 0) == 45)
        {


          j = 1;
          {

            {
              ;

              {







                                                
                 

                 








                if ((int)*(aa->name + j) == 116)
                {
                  goto case_116;
                }




































































              case_100: ;/* CIL Label */








              case_116: ;/* CIL Label */
                opMode = 3;





































              case_86: ;/* CIL Label */

              {
                license();
              }



                goto switch_break;
              case_104: ;/* CIL Label */
              {


              }








              switch_break: /* CIL Label */;
              }



            };
          }
        }

      }
    while_break___2: /* CIL Label */;
    }



































































































































































































































    if (opMode == 1)
    {



















































































    }


    else
    {
      if (opMode == 2)
      {





      }

      else
      {



        while (1)
        {
          ;
                                                                 
           























































           








          if ((int)*(aa->name + 0) == 45)
          {


            goto __Cont___2;
          }

          {

            testf(aa->name);
          }
        __Cont___2:;
          aa = aa->link;
        }

      }
    }

















    {

      {







        {


        }

        {


        }
      }

    }

  }
}
__inline static void fallbackSimpleSort(UInt32 *fmap, UInt32 *eclass, Int32 lo, Int32 hi)
{
























































































}
static void fallbackQSort3(UInt32 *fmap, UInt32 *eclass, Int32 loSt, Int32 hiSt)
{







































































































































































































































}
static void fallbackSort(UInt32 *fmap, UInt32 *eclass, UInt32 *bhtab, Int32 nblock, Int32 verb)
{






















































































































































































































































































































































































}








































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































void BZ2_blockSort(EState *s)
{




































































































}


