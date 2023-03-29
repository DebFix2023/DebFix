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
  char *p;
  int i;
  int j;
  double info;
  int infodf;
  double totinfo;
  int totdf;
  unsigned short const **tmp;
  int tmp___0;
  int tmp___1;
  double tmp___2;
  char const *tmp___3;
  char const *tmp___4;
  char const *tmp___5;
  char *tmp___6;
  double tmp___7;

  {

    totdf = 0;
    {
      while (1)
      {
      while_continue: /* CIL Label */;
        {
          tmp___6 = fgets((char *__restrict)(line), 256, (FILE * __restrict) stdin);
        }
        if (!((unsigned long)tmp___6 != (unsigned long)((void *)0)))
        {
          goto while_break;
        }
        p = line;
        {
          while (1)
          {
            ;

            {
              {
                tmp = __ctype_b_loc();
              }
              if (!((int const) * (*tmp + (int)*p) & 8192))
              {
                goto while_break___0;
              }
            }




            p++;
          }
        while_break___0: /* CIL Label */;
        }
        if ((int)*p == 0)
        {
          goto while_continue;
        }
        if ((int)*p == 35)
        {
          {
            fputs((char const *__restrict)(line), (FILE * __restrict) stdout);
          }
          goto while_continue;
        }
        {
          tmp___0 = sscanf((char const *__restrict)p, (char const *__restrict) "%d %d\n", &r, &c);
        }
        if (tmp___0 != 2)
        {
          {
            fputs((char const *__restrict) "* invalid row/column line *\n", (FILE * __restrict) stdout);
          }
          return (1);
        }







        i = 0;
        {
          while (1)
          {
            ;
            if (!(i < r))
            {
              goto while_break___1;
            }
            j = 0;
            {
              while (1)
              {
                ;
                if (!(j < c))
                {
                  goto while_break___2;
                }
                {
                  tmp___1 = scanf((char const *__restrict) " %ld", &f[i * c + j]);
                }







                j++;
              }
            while_break___2: /* CIL Label */;
            }
            i++;
          }
        while_break___1: /* CIL Label */;
        }
        {
          info = InfoTbl(r, c, (long const *)(f), &infodf);
        }
        if (info >= 0.0)
        {

          tmp___2 = QChiSq(info, infodf);
          printf((char const *__restrict) "2info = %5.2f\tdf = %2d\tq = %7.4f\n", info, infodf, tmp___2);
          totinfo += info;
          totdf += infodf;
        }

        else
        {





          {
            if (info < -2.5)
            {
              tmp___4 = "table too small\n";
            }
            else
            {





              {
                tmp___3 = "table all zeros\n";
              }
              tmp___4 = tmp___3;
            }
            tmp___5 = tmp___4;
          }
          {
            fputs((char const *__restrict)tmp___5, (FILE * __restrict) stdout);
          }
        }
      }
    while_break: /* CIL Label */;
    }
    if (totdf <= 0)
    {
      {
        fputs((char const *__restrict) "\n*** no information accumulated ***\n", (FILE * __restrict) stdout);
      }
      return (1);
    }
    {
      tmp___7 = QChiSq(totinfo, totdf);
      printf((char const *__restrict) "\ntotal 2info = %5.2f\tdf = %2d\tq = %7.4f\n", totinfo, totdf, tmp___7);
    }



























  }
}
extern __attribute__((__nothrow__)) double(__attribute__((__leaf__)) sin)(double __x);
extern __attribute__((__nothrow__)) double(__attribute__((__leaf__)) exp)(double __x);
extern __attribute__((__nothrow__)) double(__attribute__((__leaf__)) log)(double __x);
static double const cof[6] = {(double const)76.18009173, (double const)(-86.50532033), (double const)24.01409822, (double const)(-1.231739516), (double const)0.120858003e-2, (double const)(-0.536382e-5)};
double LGamma(double x)
{
  double tmp;
  double ser;
  int j;




  double tmp___3;
  double tmp___4;

  {
    x -= (double)1;










    {
      tmp = x + 5.5;
      tmp___3 = log(tmp);
      tmp -= (x + 0.5) * tmp___3;
      ser = 1.0;
      j = 0;
    }
    {
      while (1)
      {
        ;












        if (!(j < 6))
        {
          goto while_break;
        }
        x += (double)1;
        ser += (double)(cof[j] / (double const)x);
        j++;
      }
    while_break: /* CIL Label */;
    }
    {
      tmp___4 = log(2.50662827465 * ser);
    }
    return (-tmp + tmp___4);
  }
}
static double gser(double a, double x)
{
  double ap;
  double del;
  double sum;
  int n;
  double tmp;
  double tmp___0;
  double tmp___1;
  double tmp___2;
  double tmp___3;

  {




    ap = a;
    sum = 1.0 / ap;
    del = sum;
    n = 1;
    {
      while (1)
      {
        ;




        ap += (double)1;
        del *= x / ap;
        sum += del;





        {
          tmp___2 = del;
        }





        {
          tmp___3 = sum;
        }
        if (tmp___2 < tmp___3 * 3.0e-7)
        {
          {
            tmp = log(x);
            tmp___0 = LGamma(a);
            tmp___1 = exp((-x + a * tmp) - tmp___0);
          }
          return (sum * tmp___1);
        }

      };

    }

















  }
}
static double gcf(double a, double x)
{












































































  return ((double)0);












































































}
double QGamma(double a, double x)
{
  double tmp;

  double tmp___1;

  {
    if (x < a + 1.0)
    {

      tmp = gser(a, x);
      tmp___1 = 1.0 - tmp;
    }

    else
    {





    }
    return (tmp___1);
  }
}
double QChiSq(double chisq, int df)
{
  double tmp;

  {
    {
      tmp = QGamma((double)df / 2.0, chisq / 2.0);
    }
    return (tmp);
  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__)) malloc)(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__)) free)(void *__ptr);
double InfoTbl(int r___0, int c___0, long const *f___0, int *pdf)
{
  int i;
  int j;
  double N;
  double info;
  double *xi;
  double *xj;
  int rdf;
  int cdf;
  void *tmp;
  void *tmp___0;
  double sum;
  long k;
  double tmp___1;
  double sum___0;
  double tmp___2;
  double pi;
  double tmp___3;
  double pij;
  double tmp___4;
  double pj;
  double tmp___5;

  {
    rdf = r___0 - 1;
    cdf = c___0 - 1;
    if (rdf <= 0)
    {
      info = -3.0;
      goto ret3;
    }
    else
    { // Added block





    }
    {
      *pdf = rdf * cdf;
      tmp = malloc((unsigned long)r___0 * sizeof(double));
      xi = (double *)tmp;
    }





    {
      tmp___0 = malloc((unsigned long)c___0 * sizeof(double));
      xj = (double *)tmp___0;
    }







    {
      while (1)
      {
        ;
        if (!(i < r___0))
        {
          goto while_break;
        }
        sum = 0.0;
        j = 0;
        {
          while (1)
          {
            ;
            if (!(j < c___0))
            {
              goto while_break___0;
            }
            k = (long)*(f___0 + (i * c___0 + j));





            sum += (double)k;
            j++;
          }
        while_break___0: /* CIL Label */;
        }
        tmp___1 = sum;
        *(xi + i) = tmp___1;
        N += tmp___1;
        i++;
      }
    while_break: /* CIL Label */;
    }





    j = 0;
    {
      while (1)
      {
        ;
        if (!(j < c___0))
        {
          goto while_break___1;
        }
        sum___0 = 0.0;
        i = 0;
        {
          while (1)
          {
            ;
            if (!(i < r___0))
            {
              goto while_break___2;
            }
            sum___0 += (double)*(f___0 + (i * c___0 + j));
            i++;
          }
        while_break___2: /* CIL Label */;
        }
        *(xj + j) = sum___0;
        j++;
      }
    while_break___1: /* CIL Label */;
    }
    {
      tmp___2 = log(N);
      info = N * tmp___2;
      i = 0;
    }
    {
      while (1)
      {
        ;
        if (!(i < r___0))
        {
          goto while_break___3;
        }
        pi = *(xi + i);

        {


          tmp___3 = log(pi);
          info -= pi * tmp___3;
        }

        j = 0;
        {
          while (1)
          {
            ;
            if (!(j < c___0))
            {
              goto while_break___4;
            }
            pij = (double)*(f___0 + (i * c___0 + j));
            if (pij > 0.0)
            {

              tmp___4 = log(pij);
              info += pij * tmp___4;
            }

            j++;
          }
        while_break___4: /* CIL Label */;
        }
        i++;
      }
    while_break___3: /* CIL Label */;
    }
    j = 0;
    {
      while (1)
      {
        ;
        if (!(j < c___0))
        {
          goto while_break___5;
        }
        pj = *(xj + j);
        if (pj > 0.0)
        {

          tmp___5 = log(pj);
          info -= pj * tmp___5;
        }

        j++;
      }
    while_break___5: /* CIL Label */;
    }
    info *= 2.0;

    {

    }
































  ret3:
    return (info);
  }
}
#pragma merger("0", "/tmp/cil-Xev7FB_3.i", "")