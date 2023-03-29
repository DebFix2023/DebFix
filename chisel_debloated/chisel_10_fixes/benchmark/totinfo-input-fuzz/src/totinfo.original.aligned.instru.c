/* Generated by CIL v. 1.7.3 */
/* print_CIL_Input is true */

typedef long __off_t;
typedef long __off64_t;
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
typedef void *pointer;
#pragma merger("0", "/tmp/cil-cGPRAcs7.i", "")
extern __attribute__((__nothrow__)) unsigned short const **(__attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern int printf(char const *__restrict __format, ...);
extern int scanf(char const *__restrict __format, ...) __asm__("__isoc99_scanf");
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) sscanf)(char const *__restrict __s, char const *__restrict __format, ...) __asm__("__isoc99_sscanf");
extern char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream);
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
double InfoTbl(int r___0, int c___0, long const *f___0, int *pdf);
double LGamma(double x);
double QGamma(double a, double x);
double QChiSq(double chisq, int df);
static char line[256];
static long f[1000];
static int r;
static int c;
int main(int argc, char **argv)
{
  printf("\nFUNC_CALL;main(int,char **);\n");
printf("\nSTMT_EXEC;;69\n");
char *p;
  printf("\nSTMT_EXEC;;70\n");
int i;
  printf("\nSTMT_EXEC;;71\n");
int j;
  printf("\nSTMT_EXEC;;72\n");
double info;
  printf("\nSTMT_EXEC;;73\n");
int infodf;
  printf("\nSTMT_EXEC;;74\n");
double totinfo;
  printf("\nSTMT_EXEC;;75\n");
int totdf;
  printf("\nSTMT_EXEC;;76\n");
unsigned short const **tmp;
  printf("\nSTMT_EXEC;;77\n");
int tmp___0;
  printf("\nSTMT_EXEC;;78\n");
int tmp___1;
  printf("\nSTMT_EXEC;;79\n");
double tmp___2;
  printf("\nSTMT_EXEC;;80\n");
char const *tmp___3;
  printf("\nSTMT_EXEC;;81\n");
char const *tmp___4;
  printf("\nSTMT_EXEC;;82\n");
char const *tmp___5;
  printf("\nSTMT_EXEC;;83\n");
char *tmp___6;
  printf("\nSTMT_EXEC;;84\n");
double tmp___7;

  {
    printf("\nSTMT_EXEC;;87\n");
totinfo = 0.0;
    printf("\nSTMT_EXEC;;88\n");
totdf = 0;
    {
      printf("\nSTMT_EXEC;;90\n");
while (1)
      {
      while_continue: /* CIL Label */;
        {
          printf("\nSTMT_EXEC;;94\n");
printf("\nFUNC_CALL;fgets(char *__restrict,int,FILE *__restrict);\n");
tmp___6 = fgets((char *__restrict)(line), 256, (FILE * __restrict) stdin);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;96\n");
if (!((unsigned long)tmp___6 != (unsigned long)((void *)0)))
        {
          printf("\nSTMT_EXEC;;98\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;100\n");
p = line;
        {
          printf("\nSTMT_EXEC;;102\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;105\n");
if ((int)*p != 0)
            {
              {
                printf("\nSTMT_EXEC;;108\n");
printf("\nFUNC_CALL;__ctype_b_loc();\n");
tmp = __ctype_b_loc();printf("\nFUNC_RETURN;;\n");

              }
              printf("\nSTMT_EXEC;;110\n");
if (!((int const) * (*tmp + (int)*p) & 8192))
              {
                printf("\nSTMT_EXEC;;112\n");
goto while_break___0;
              }
            }
            else
            {
              printf("\nSTMT_EXEC;;117\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;119\n");
p++;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;123\n");
if ((int)*p == 0)
        {
          printf("\nSTMT_EXEC;;125\n");
goto while_continue;
        }
        printf("\nSTMT_EXEC;;127\n");
if ((int)*p == 35)
        {
          {
            printf("\nSTMT_EXEC;;130\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs((char const *__restrict)(line), (FILE * __restrict) stdout);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;132\n");
goto while_continue;
        }
        {
          printf("\nSTMT_EXEC;;135\n");
printf("\nFUNC_CALL;sscanf(const char *__restrict,const char *__restrict);\n");
tmp___0 = sscanf((char const *__restrict)p, (char const *__restrict) "%d %d\n", &r, &c);printf("\nFUNC_RETURN;;\n");

        }
        printf("\nSTMT_EXEC;;137\n");
if (tmp___0 != 2)
        {
          {
            printf("\nSTMT_EXEC;;140\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs((char const *__restrict) "* invalid row/column line *\n", (FILE * __restrict) stdout);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;142\n");
printf("\nFUNC_RETURN;;\n");
return (1);
        }
        printf("\nSTMT_EXEC;;144\n");
if (r * c > 1000)
        {
          {
            printf("\nSTMT_EXEC;;147\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs((char const *__restrict) "* table too large *\n", (FILE * __restrict) stdout);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;149\n");
printf("\nFUNC_RETURN;;\n");
return (1);
        }
        printf("\nSTMT_EXEC;;151\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;153\n");
while (1)
          {
          while_continue___1: /* CIL Label */;
            printf("\nSTMT_EXEC;;156\n");
if (!(i < r))
            {
              printf("\nSTMT_EXEC;;158\n");
goto while_break___1;
            }
            printf("\nSTMT_EXEC;;160\n");
j = 0;
            {
              printf("\nSTMT_EXEC;;162\n");
while (1)
              {
              while_continue___2: /* CIL Label */;
                printf("\nSTMT_EXEC;;165\n");
if (!(j < c))
                {
                  printf("\nSTMT_EXEC;;167\n");
goto while_break___2;
                }
                {
                  printf("\nSTMT_EXEC;;170\n");
printf("\nFUNC_CALL;scanf(const char *__restrict);\n");
tmp___1 = scanf((char const *__restrict) " %ld", &f[i * c + j]);printf("\nFUNC_RETURN;;\n");

                }
                printf("\nSTMT_EXEC;;172\n");
if (tmp___1 != 1)
                {
                  {
                    printf("\nSTMT_EXEC;;175\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs((char const *__restrict) "* EOF in table *\n", (FILE * __restrict) stdout);printf("\nFUNC_RETURN;;\n");

                  }
                  printf("\nSTMT_EXEC;;177\n");
printf("\nFUNC_RETURN;;\n");
return (1);
                }
                printf("\nSTMT_EXEC;;179\n");
j++;
              }
            while_break___2: /* CIL Label */;
            }
            printf("\nSTMT_EXEC;;183\n");
i++;
          }
        while_break___1: /* CIL Label */;
        }
        {
          printf("\nSTMT_EXEC;;188\n");
info = InfoTbl(r, c, (long const *)(f), &infodf);
        }
        printf("\nSTMT_EXEC;;190\n");
if (info >= 0.0)
        {
          {
            printf("\nSTMT_EXEC;;193\n");
tmp___2 = QChiSq(info, infodf);
            printf("\nSTMT_EXEC;;194\n");
printf((char const *__restrict) "2info = %5.2f\tdf = %2d\tq = %7.4f\n", info, infodf, tmp___2);
            printf("\nSTMT_EXEC;;195\n");
totinfo += info;
            printf("\nSTMT_EXEC;;196\n");
totdf += infodf;
          }
        }
        else
        {
          printf("\nSTMT_EXEC;;201\n");
if (info < -3.5)
          {
            printf("\nSTMT_EXEC;;203\n");
tmp___5 = "out of memory\n";
          }
          else
          {
            printf("\nSTMT_EXEC;;207\n");
if (info < -2.5)
            {
              printf("\nSTMT_EXEC;;209\n");
tmp___4 = "table too small\n";
            }
            else
            {
              printf("\nSTMT_EXEC;;213\n");
if (info < -1.5)
              {
                printf("\nSTMT_EXEC;;215\n");
tmp___3 = "negative freq\n";
              }
              else
              {
                printf("\nSTMT_EXEC;;219\n");
tmp___3 = "table all zeros\n";
              }
              printf("\nSTMT_EXEC;;221\n");
tmp___4 = tmp___3;
            }
            printf("\nSTMT_EXEC;;223\n");
tmp___5 = tmp___4;
          }
          {
            printf("\nSTMT_EXEC;;226\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs((char const *__restrict)tmp___5, (FILE * __restrict) stdout);printf("\nFUNC_RETURN;;\n");

          }
        }
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;232\n");
if (totdf <= 0)
    {
      {
        printf("\nSTMT_EXEC;;235\n");
printf("\nFUNC_CALL;fputs(const char *__restrict,FILE *__restrict);\n");
fputs((char const *__restrict) "\n*** no information accumulated ***\n", (FILE * __restrict) stdout);printf("\nFUNC_RETURN;;\n");

      }
      printf("\nSTMT_EXEC;;237\n");
printf("\nFUNC_RETURN;;\n");
return (1);
    }
    {
      printf("\nSTMT_EXEC;;240\n");
tmp___7 = QChiSq(totinfo, totdf);
      printf("\nSTMT_EXEC;;241\n");
printf((char const *__restrict) "\ntotal 2info = %5.2f\tdf = %2d\tq = %7.4f\n", totinfo, totdf, tmp___7);
    }
    printf("\nSTMT_EXEC;;243\n");
printf("\nFUNC_RETURN;;\n");
return (0);


























  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) double(__attribute__((__leaf__)) sin)(double __x);
extern __attribute__((__nothrow__)) double(__attribute__((__leaf__)) exp)(double __x);
extern __attribute__((__nothrow__)) double(__attribute__((__leaf__)) log)(double __x);
static double const cof[6] = {(double const)76.18009173, (double const)(-86.50532033), (double const)24.01409822, (double const)(-1.231739516), (double const)0.120858003e-2, (double const)(-0.536382e-5)};
double LGamma(double x)
{
  printf("\nFUNC_CALL;LGamma(double);\n");
printf("\nSTMT_EXEC;;278\n");
double tmp;
  printf("\nSTMT_EXEC;;279\n");
double ser;
  printf("\nSTMT_EXEC;;280\n");
int j;
  printf("\nSTMT_EXEC;;281\n");
double pix;
  printf("\nSTMT_EXEC;;282\n");
double tmp___0;
  printf("\nSTMT_EXEC;;283\n");
double tmp___1;
  printf("\nSTMT_EXEC;;284\n");
double tmp___2;
  printf("\nSTMT_EXEC;;285\n");
double tmp___3;
  printf("\nSTMT_EXEC;;286\n");
double tmp___4;

  {
    printf("\nSTMT_EXEC;;289\n");
x -= (double)1;
    printf("\nSTMT_EXEC;;290\n");
if (x < 0.0)
    {
      {
        printf("\nSTMT_EXEC;;293\n");
pix = 3.14159265358979323846264338327950288419716939937511 * x;
        printf("\nSTMT_EXEC;;294\n");
printf("\nFUNC_CALL;sin(double);\n");
tmp___0 = sin(pix);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;295\n");
printf("\nFUNC_CALL;log(double);\n");
tmp___1 = log(pix / tmp___0);printf("\nFUNC_RETURN;;\n");

        printf("\nSTMT_EXEC;;296\n");
tmp___2 = LGamma(1.0 - x);
      }
      printf("\nSTMT_EXEC;;298\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1 - tmp___2);
    }
    {
      printf("\nSTMT_EXEC;;301\n");
tmp = x + 5.5;
      printf("\nSTMT_EXEC;;302\n");
printf("\nFUNC_CALL;log(double);\n");
tmp___3 = log(tmp);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;303\n");
tmp -= (x + 0.5) * tmp___3;
      printf("\nSTMT_EXEC;;304\n");
ser = 1.0;
      printf("\nSTMT_EXEC;;305\n");
j = 0;
    }
    {
      printf("\nSTMT_EXEC;;308\n");
while (1)
      {
      while_continue: /* CIL Label */;












        printf("\nSTMT_EXEC;;323\n");
if (!(j < 6))
        {
          printf("\nSTMT_EXEC;;325\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;327\n");
x += (double)1;
        printf("\nSTMT_EXEC;;328\n");
ser += (double)(cof[j] / (double const)x);
        printf("\nSTMT_EXEC;;329\n");
j++;
      }
    while_break: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;334\n");
printf("\nFUNC_CALL;log(double);\n");
tmp___4 = log(2.50662827465 * ser);printf("\nFUNC_RETURN;;\n");

    }
    printf("\nSTMT_EXEC;;336\n");
printf("\nFUNC_RETURN;;\n");
return (-tmp + tmp___4);
  }
printf("\nFUNC_RETURN;;\n");
}
static double gser(double a, double x)
{
  printf("\nFUNC_CALL;gser(double,double);\n");
printf("\nSTMT_EXEC;;341\n");
double ap;
  printf("\nSTMT_EXEC;;342\n");
double del;
  printf("\nSTMT_EXEC;;343\n");
double sum;
  printf("\nSTMT_EXEC;;344\n");
int n;
  printf("\nSTMT_EXEC;;345\n");
double tmp;
  printf("\nSTMT_EXEC;;346\n");
double tmp___0;
  printf("\nSTMT_EXEC;;347\n");
double tmp___1;
  printf("\nSTMT_EXEC;;348\n");
double tmp___2;
  printf("\nSTMT_EXEC;;349\n");
double tmp___3;

  {
    printf("\nSTMT_EXEC;;352\n");
if (x <= 0.0)
    {
      printf("\nSTMT_EXEC;;354\n");
printf("\nFUNC_RETURN;;\n");
return (0.0);
    }
    printf("\nSTMT_EXEC;;356\n");
ap = a;
    printf("\nSTMT_EXEC;;357\n");
sum = 1.0 / ap;
    printf("\nSTMT_EXEC;;358\n");
del = sum;
    printf("\nSTMT_EXEC;;359\n");
n = 1;
    {
      printf("\nSTMT_EXEC;;361\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;364\n");
if (!(n <= 100))
        {
          printf("\nSTMT_EXEC;;366\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;368\n");
ap += (double)1;
        printf("\nSTMT_EXEC;;369\n");
del *= x / ap;
        printf("\nSTMT_EXEC;;370\n");
sum += del;
        printf("\nSTMT_EXEC;;371\n");
if (del < (double)0)
        {
          printf("\nSTMT_EXEC;;373\n");
tmp___2 = -del;
        }
        else
        {
          printf("\nSTMT_EXEC;;377\n");
tmp___2 = del;
        }
        printf("\nSTMT_EXEC;;379\n");
if (sum < (double)0)
        {
          printf("\nSTMT_EXEC;;381\n");
tmp___3 = -sum;
        }
        else
        {
          printf("\nSTMT_EXEC;;385\n");
tmp___3 = sum;
        }
        printf("\nSTMT_EXEC;;387\n");
if (tmp___2 < tmp___3 * 3.0e-7)
        {
          {
            printf("\nSTMT_EXEC;;390\n");
printf("\nFUNC_CALL;log(double);\n");
tmp = log(x);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;391\n");
tmp___0 = LGamma(a);
            printf("\nSTMT_EXEC;;392\n");
printf("\nFUNC_CALL;exp(double);\n");
tmp___1 = exp((-x + a * tmp) - tmp___0);printf("\nFUNC_RETURN;;\n");

          }
          printf("\nSTMT_EXEC;;394\n");
printf("\nFUNC_RETURN;;\n");
return (sum * tmp___1);
        }
        printf("\nSTMT_EXEC;;396\n");
n++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;400\n");
printf("\nFUNC_RETURN;;\n");
return ((double)0);
















  }
printf("\nFUNC_RETURN;;\n");
}
static double gcf(double a, double x)
{
  printf("\nFUNC_CALL;gcf(double,double);\n");
printf("\nSTMT_EXEC;;421\n");
int n;
  printf("\nSTMT_EXEC;;422\n");
double gold;
  printf("\nSTMT_EXEC;;423\n");
double fac;
  printf("\nSTMT_EXEC;;424\n");
double b1;
  printf("\nSTMT_EXEC;;425\n");
double b0;
  printf("\nSTMT_EXEC;;426\n");
double a0;
  printf("\nSTMT_EXEC;;427\n");
double a1;
  printf("\nSTMT_EXEC;;428\n");
double anf;
  printf("\nSTMT_EXEC;;429\n");
double an;
  printf("\nSTMT_EXEC;;430\n");
double ana;
  printf("\nSTMT_EXEC;;431\n");
double g;
  printf("\nSTMT_EXEC;;432\n");
double tmp;
  printf("\nSTMT_EXEC;;433\n");
double tmp___0;
  printf("\nSTMT_EXEC;;434\n");
double tmp___1;
  printf("\nSTMT_EXEC;;435\n");
double tmp___2;
  printf("\nSTMT_EXEC;;436\n");
double tmp___3;

  {
    printf("\nSTMT_EXEC;;439\n");
gold = 0.0;
    printf("\nSTMT_EXEC;;440\n");
fac = 1.0;
    printf("\nSTMT_EXEC;;441\n");
b1 = 1.0;
    printf("\nSTMT_EXEC;;442\n");
b0 = 0.0;
    printf("\nSTMT_EXEC;;443\n");
a0 = 1.0;
    printf("\nSTMT_EXEC;;444\n");
a1 = x;
    printf("\nSTMT_EXEC;;445\n");
n = 1;
    {
      printf("\nSTMT_EXEC;;447\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;450\n");
if (!(n <= 100))
        {
          printf("\nSTMT_EXEC;;452\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;454\n");
an = (double)n;
        printf("\nSTMT_EXEC;;455\n");
ana = an - a;
        printf("\nSTMT_EXEC;;456\n");
a0 = (a1 + a0 * ana) * fac;
        printf("\nSTMT_EXEC;;457\n");
b0 = (b1 + b0 * ana) * fac;
        printf("\nSTMT_EXEC;;458\n");
anf = an * fac;
        printf("\nSTMT_EXEC;;459\n");
b1 = x * b0 + anf * b1;
        printf("\nSTMT_EXEC;;460\n");
a1 = x * a0 + anf * a1;
        printf("\nSTMT_EXEC;;461\n");
if (a1 != 0.0)
        {
          printf("\nSTMT_EXEC;;463\n");
fac = 1.0 / a1;
          printf("\nSTMT_EXEC;;464\n");
g = b1 * fac;
          printf("\nSTMT_EXEC;;465\n");
gold = g - gold;
          printf("\nSTMT_EXEC;;466\n");
if (gold < (double)0)
          {
            printf("\nSTMT_EXEC;;468\n");
tmp___2 = -gold;
          }
          else
          {
            printf("\nSTMT_EXEC;;472\n");
tmp___2 = gold;
          }
          printf("\nSTMT_EXEC;;474\n");
if (g < (double)0)
          {
            printf("\nSTMT_EXEC;;476\n");
tmp___3 = -g;
          }
          else
          {
            printf("\nSTMT_EXEC;;480\n");
tmp___3 = g;
          }
          printf("\nSTMT_EXEC;;482\n");
if (tmp___2 < 3.0e-7 * tmp___3)
          {
            {
              printf("\nSTMT_EXEC;;485\n");
printf("\nFUNC_CALL;log(double);\n");
tmp = log(x);printf("\nFUNC_RETURN;;\n");

              printf("\nSTMT_EXEC;;486\n");
tmp___0 = LGamma(a);
              printf("\nSTMT_EXEC;;487\n");
printf("\nFUNC_CALL;exp(double);\n");
tmp___1 = exp((-x + a * tmp) - tmp___0);printf("\nFUNC_RETURN;;\n");

            }
            printf("\nSTMT_EXEC;;489\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1 * g);
          }
          printf("\nSTMT_EXEC;;491\n");
gold = g;
        }
        printf("\nSTMT_EXEC;;493\n");
n++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;497\n");
printf("\nFUNC_RETURN;;\n");
return ((double)0);
  }











































































printf("\nFUNC_RETURN;;\n");
}
double QGamma(double a, double x)
{
  printf("\nFUNC_CALL;QGamma(double,double);\n");
printf("\nSTMT_EXEC;;577\n");
double tmp;
  printf("\nSTMT_EXEC;;578\n");
double tmp___0;
  printf("\nSTMT_EXEC;;579\n");
double tmp___1;

  {
    printf("\nSTMT_EXEC;;582\n");
if (x < a + 1.0)
    {
      {
        printf("\nSTMT_EXEC;;585\n");
tmp = gser(a, x);
        printf("\nSTMT_EXEC;;586\n");
tmp___1 = 1.0 - tmp;
      }
    }
    else
    {
      {
        printf("\nSTMT_EXEC;;592\n");
tmp___0 = gcf(a, x);
        printf("\nSTMT_EXEC;;593\n");
tmp___1 = tmp___0;
      }

    }
    printf("\nSTMT_EXEC;;597\n");
printf("\nFUNC_RETURN;;\n");
return (tmp___1);
  }
printf("\nFUNC_RETURN;;\n");
}
double QChiSq(double chisq, int df)
{
  printf("\nFUNC_CALL;QChiSq(double,int);\n");
printf("\nSTMT_EXEC;;602\n");
double tmp;

  {
    {
      printf("\nSTMT_EXEC;;606\n");
tmp = QGamma((double)df / 2.0, chisq / 2.0);
    }
    printf("\nSTMT_EXEC;;608\n");
printf("\nFUNC_RETURN;;\n");
return (tmp);
  }
printf("\nFUNC_RETURN;;\n");
}
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) free)(void *__ptr);
double InfoTbl(int r___0, int c___0, long const *f___0, int *pdf)
{
  printf("\nFUNC_CALL;InfoTbl(int,int,const long *,int *);\n");
printf("\nSTMT_EXEC;;615\n");
int i;
  printf("\nSTMT_EXEC;;616\n");
int j;
  printf("\nSTMT_EXEC;;617\n");
double N;
  printf("\nSTMT_EXEC;;618\n");
double info;
  printf("\nSTMT_EXEC;;619\n");
double *xi;
  printf("\nSTMT_EXEC;;620\n");
double *xj;
  printf("\nSTMT_EXEC;;621\n");
int rdf;
  printf("\nSTMT_EXEC;;622\n");
int cdf;
  printf("\nSTMT_EXEC;;623\n");
void *tmp;
  printf("\nSTMT_EXEC;;624\n");
void *tmp___0;
  printf("\nSTMT_EXEC;;625\n");
double sum;
  printf("\nSTMT_EXEC;;626\n");
long k;
  printf("\nSTMT_EXEC;;627\n");
double tmp___1;
  printf("\nSTMT_EXEC;;628\n");
double sum___0;
  printf("\nSTMT_EXEC;;629\n");
double tmp___2;
  printf("\nSTMT_EXEC;;630\n");
double pi;
  printf("\nSTMT_EXEC;;631\n");
double tmp___3;
  printf("\nSTMT_EXEC;;632\n");
double pij;
  printf("\nSTMT_EXEC;;633\n");
double tmp___4;
  printf("\nSTMT_EXEC;;634\n");
double pj;
  printf("\nSTMT_EXEC;;635\n");
double tmp___5;

  {
    printf("\nSTMT_EXEC;;638\n");
rdf = r___0 - 1;
    printf("\nSTMT_EXEC;;639\n");
cdf = c___0 - 1;
    printf("\nSTMT_EXEC;;640\n");
if (rdf <= 0)
    {
      printf("\nSTMT_EXEC;;642\n");
info = -3.0;
      printf("\nSTMT_EXEC;;643\n");
goto ret3;
    }
    else
    { // Added block
      printf("\nSTMT_EXEC;;647\n");
if (cdf <= 0)
      {
        printf("\nSTMT_EXEC;;649\n");
info = -3.0;
        printf("\nSTMT_EXEC;;650\n");
goto ret3;
      }
    }
    {
      printf("\nSTMT_EXEC;;654\n");
*pdf = rdf * cdf;
      printf("\nSTMT_EXEC;;655\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
tmp = malloc((unsigned long)r___0 * sizeof(double));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;656\n");
xi = (double *)tmp;
    }
    printf("\nSTMT_EXEC;;658\n");
if ((unsigned long)xi == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;660\n");
info = -4.0;
      printf("\nSTMT_EXEC;;661\n");
goto ret3;
    }
    {
      printf("\nSTMT_EXEC;;664\n");
printf("\nFUNC_CALL;malloc(size_t);\n");
tmp___0 = malloc((unsigned long)c___0 * sizeof(double));printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;665\n");
xj = (double *)tmp___0;
    }
    printf("\nSTMT_EXEC;;667\n");
if ((unsigned long)xj == (unsigned long)((void *)0))
    {
      printf("\nSTMT_EXEC;;669\n");
info = -4.0;
      printf("\nSTMT_EXEC;;670\n");
goto ret2;
    }
    printf("\nSTMT_EXEC;;672\n");
N = 0.0;
    printf("\nSTMT_EXEC;;673\n");
i = 0;
    {
      printf("\nSTMT_EXEC;;675\n");
while (1)
      {
      while_continue: /* CIL Label */;
        printf("\nSTMT_EXEC;;678\n");
if (!(i < r___0))
        {
          printf("\nSTMT_EXEC;;680\n");
goto while_break;
        }
        printf("\nSTMT_EXEC;;682\n");
sum = 0.0;
        printf("\nSTMT_EXEC;;683\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;685\n");
while (1)
          {
          while_continue___0: /* CIL Label */;
            printf("\nSTMT_EXEC;;688\n");
if (!(j < c___0))
            {
              printf("\nSTMT_EXEC;;690\n");
goto while_break___0;
            }
            printf("\nSTMT_EXEC;;692\n");
k = (long)*(f___0 + (i * c___0 + j));
            printf("\nSTMT_EXEC;;693\n");
if (k < 0L)
            {
              printf("\nSTMT_EXEC;;695\n");
info = -2.0;
              printf("\nSTMT_EXEC;;696\n");
goto ret1;
            }
            printf("\nSTMT_EXEC;;698\n");
sum += (double)k;
            printf("\nSTMT_EXEC;;699\n");
j++;
          }
        while_break___0: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;703\n");
tmp___1 = sum;
        printf("\nSTMT_EXEC;;704\n");
*(xi + i) = tmp___1;
        printf("\nSTMT_EXEC;;705\n");
N += tmp___1;
        printf("\nSTMT_EXEC;;706\n");
i++;
      }
    while_break: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;710\n");
if (N <= 0.0)
    {
      printf("\nSTMT_EXEC;;712\n");
info = -1.0;
      printf("\nSTMT_EXEC;;713\n");
goto ret1;
    }
    printf("\nSTMT_EXEC;;715\n");
j = 0;
    {
      printf("\nSTMT_EXEC;;717\n");
while (1)
      {
      while_continue___1: /* CIL Label */;
        printf("\nSTMT_EXEC;;720\n");
if (!(j < c___0))
        {
          printf("\nSTMT_EXEC;;722\n");
goto while_break___1;
        }
        printf("\nSTMT_EXEC;;724\n");
sum___0 = 0.0;
        printf("\nSTMT_EXEC;;725\n");
i = 0;
        {
          printf("\nSTMT_EXEC;;727\n");
while (1)
          {
          while_continue___2: /* CIL Label */;
            printf("\nSTMT_EXEC;;730\n");
if (!(i < r___0))
            {
              printf("\nSTMT_EXEC;;732\n");
goto while_break___2;
            }
            printf("\nSTMT_EXEC;;734\n");
sum___0 += (double)*(f___0 + (i * c___0 + j));
            printf("\nSTMT_EXEC;;735\n");
i++;
          }
        while_break___2: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;739\n");
*(xj + j) = sum___0;
        printf("\nSTMT_EXEC;;740\n");
j++;
      }
    while_break___1: /* CIL Label */;
    }
    {
      printf("\nSTMT_EXEC;;745\n");
printf("\nFUNC_CALL;log(double);\n");
tmp___2 = log(N);printf("\nFUNC_RETURN;;\n");

      printf("\nSTMT_EXEC;;746\n");
info = N * tmp___2;
      printf("\nSTMT_EXEC;;747\n");
i = 0;
    }
    {
      printf("\nSTMT_EXEC;;750\n");
while (1)
      {
      while_continue___3: /* CIL Label */;
        printf("\nSTMT_EXEC;;753\n");
if (!(i < r___0))
        {
          printf("\nSTMT_EXEC;;755\n");
goto while_break___3;
        }
        printf("\nSTMT_EXEC;;757\n");
pi = *(xi + i);
        printf("\nSTMT_EXEC;;758\n");
if (pi > 0.0)
        {
          {

            printf("\nSTMT_EXEC;;762\n");
printf("\nFUNC_CALL;log(double);\n");
tmp___3 = log(pi);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;763\n");
info -= pi * tmp___3;
          }
        }
        printf("\nSTMT_EXEC;;766\n");
j = 0;
        {
          printf("\nSTMT_EXEC;;768\n");
while (1)
          {
          while_continue___4: /* CIL Label */;
            printf("\nSTMT_EXEC;;771\n");
if (!(j < c___0))
            {
              printf("\nSTMT_EXEC;;773\n");
goto while_break___4;
            }
            printf("\nSTMT_EXEC;;775\n");
pij = (double)*(f___0 + (i * c___0 + j));
            printf("\nSTMT_EXEC;;776\n");
if (pij > 0.0)
            {
              {
                printf("\nSTMT_EXEC;;779\n");
printf("\nFUNC_CALL;log(double);\n");
tmp___4 = log(pij);printf("\nFUNC_RETURN;;\n");

                printf("\nSTMT_EXEC;;780\n");
info += pij * tmp___4;
              }
            }
            printf("\nSTMT_EXEC;;783\n");
j++;
          }
        while_break___4: /* CIL Label */;
        }
        printf("\nSTMT_EXEC;;787\n");
i++;
      }
    while_break___3: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;791\n");
j = 0;
    {
      printf("\nSTMT_EXEC;;793\n");
while (1)
      {
      while_continue___5: /* CIL Label */;
        printf("\nSTMT_EXEC;;796\n");
if (!(j < c___0))
        {
          printf("\nSTMT_EXEC;;798\n");
goto while_break___5;
        }
        printf("\nSTMT_EXEC;;800\n");
pj = *(xj + j);
        printf("\nSTMT_EXEC;;801\n");
if (pj > 0.0)
        {
          {
            printf("\nSTMT_EXEC;;804\n");
printf("\nFUNC_CALL;log(double);\n");
tmp___5 = log(pj);printf("\nFUNC_RETURN;;\n");

            printf("\nSTMT_EXEC;;805\n");
info -= pj * tmp___5;
          }
        }
        printf("\nSTMT_EXEC;;808\n");
j++;
      }
    while_break___5: /* CIL Label */;
    }
    printf("\nSTMT_EXEC;;812\n");
info *= 2.0;
  ret1:
  {
    printf("\nSTMT_EXEC;;815\n");
printf("\nFUNC_CALL;free(void *);\n");
free((pointer)xj);printf("\nFUNC_RETURN;;\n");

  }
  ret2:
  {
    printf("\nSTMT_EXEC;;819\n");
printf("\nFUNC_CALL;free(void *);\n");
free((pointer)xi);printf("\nFUNC_RETURN;;\n");

  }




























  ret3:
    {
printf("\nSTMT_EXEC;;850\n");
printf("\nFUNC_RETURN;;\n");
return (info);
}

  }
printf("\nFUNC_RETURN;;\n");
}
#pragma merger("0", "/tmp/cil-Xev7FB_3.i", "")