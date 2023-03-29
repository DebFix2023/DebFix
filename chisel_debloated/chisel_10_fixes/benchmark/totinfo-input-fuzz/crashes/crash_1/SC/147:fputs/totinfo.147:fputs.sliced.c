LineNo:68
{
LineNo:87
    totinfo = 0.0;
LineNo:88
    totdf = 0;
LineNo:94
          tmp___6 = fgets((char *__restrict)(line), 256, (FILE * __restrict) stdin);
LineNo:96
        if (!((unsigned long)tmp___6 != (unsigned long)((void *)0)))
LineNo:100
        p = line;
LineNo:105
            if ((int)*p != 0)
LineNo:108
                tmp = __ctype_b_loc();
LineNo:110
              if (!((int const) * (*tmp + (int)*p) & 8192))
LineNo:119
            p++;
LineNo:123
        if ((int)*p == 0)
LineNo:94
          tmp___6 = fgets((char *__restrict)(line), 256, (FILE * __restrict) stdin);
LineNo:127
        if ((int)*p == 35)
LineNo:135
          tmp___0 = sscanf((char const *__restrict)p, (char const *__restrict) "%d %d\n", &r, &c);
LineNo:137
        if (tmp___0 != 2)
LineNo:144
        if (r * c > 1000)
LineNo:147
            fputs((char const *__restrict) "* table too large *\n", (FILE * __restrict) stdout);
LineNo:151
        i = 0;
LineNo:156
            if (!(i < r))
LineNo:160
            j = 0;
LineNo:165
                if (!(j < c))
LineNo:170
                  tmp___1 = scanf((char const *__restrict) " %ld", &f[i * c + j]);
LineNo:172
                if (tmp___1 != 1)
LineNo:179
                j++;
LineNo:183
            i++;
LineNo:188
          info = InfoTbl(r, c, (long const *)(f), &infodf);
LineNo:190
        if (info >= 0.0)
LineNo:193
            tmp___2 = QChiSq(info, infodf);
LineNo:195
            totinfo += info;
LineNo:196
            totdf += infodf;
LineNo:201
          if (info < -3.5)
LineNo:203
            tmp___5 = "out of memory\n";
LineNo:207
            if (info < -2.5)
LineNo:209
              tmp___4 = "table too small\n";
LineNo:213
              if (info < -1.5)
LineNo:215
                tmp___3 = "negative freq\n";
LineNo:219
                tmp___3 = "table all zeros\n";
LineNo:221
              tmp___4 = tmp___3;
LineNo:223
            tmp___5 = tmp___4;
LineNo:232
    if (totdf <= 0)
LineNo:240
      tmp___7 = QChiSq(totinfo, totdf);
LineNo:614
{
LineNo:638
    rdf = r___0 - 1;
LineNo:639
    cdf = c___0 - 1;
LineNo:640
    if (rdf <= 0)
LineNo:642
      info = -3.0;
LineNo:647
      if (cdf <= 0)
LineNo:649
        info = -3.0;
LineNo:654
      *pdf = rdf * cdf;
LineNo:655
      tmp = malloc((unsigned long)r___0 * sizeof(double));
LineNo:656
      xi = (double *)tmp;
LineNo:658
    if ((unsigned long)xi == (unsigned long)((void *)0))
LineNo:660
      info = -4.0;
LineNo:664
      tmp___0 = malloc((unsigned long)c___0 * sizeof(double));
LineNo:665
      xj = (double *)tmp___0;
LineNo:667
    if ((unsigned long)xj == (unsigned long)((void *)0))
LineNo:669
      info = -4.0;
LineNo:672
    N = 0.0;
LineNo:673
    i = 0;
LineNo:678
        if (!(i < r___0))
LineNo:682
        sum = 0.0;
LineNo:683
        j = 0;
LineNo:688
            if (!(j < c___0))
LineNo:692
            k = (long)*(f___0 + (i * c___0 + j));
LineNo:693
            if (k < 0L)
LineNo:695
              info = -2.0;
LineNo:698
            sum += (double)k;
LineNo:699
            j++;
LineNo:703
        tmp___1 = sum;
LineNo:704
        *(xi + i) = tmp___1;
LineNo:705
        N += tmp___1;
LineNo:706
        i++;
LineNo:710
    if (N <= 0.0)
LineNo:712
      info = -1.0;
LineNo:715
    j = 0;
LineNo:720
        if (!(j < c___0))
LineNo:724
        sum___0 = 0.0;
LineNo:725
        i = 0;
LineNo:730
            if (!(i < r___0))
LineNo:734
            sum___0 += (double)*(f___0 + (i * c___0 + j));
LineNo:735
            i++;
LineNo:739
        *(xj + j) = sum___0;
LineNo:740
        j++;
LineNo:745
      tmp___2 = log(N);
LineNo:746
      info = N * tmp___2;
LineNo:747
      i = 0;
LineNo:753
        if (!(i < r___0))
LineNo:757
        pi = *(xi + i);
LineNo:758
        if (pi > 0.0)
LineNo:762
            tmp___3 = log(pi);
LineNo:763
            info -= pi * tmp___3;
LineNo:766
        j = 0;
LineNo:771
            if (!(j < c___0))
LineNo:775
            pij = (double)*(f___0 + (i * c___0 + j));
LineNo:776
            if (pij > 0.0)
LineNo:779
                tmp___4 = log(pij);
LineNo:780
                info += pij * tmp___4;
LineNo:783
            j++;
LineNo:787
        i++;
LineNo:791
    j = 0;
LineNo:796
        if (!(j < c___0))
LineNo:800
        pj = *(xj + j);
LineNo:801
        if (pj > 0.0)
LineNo:804
            tmp___5 = log(pj);
LineNo:805
            info -= pj * tmp___5;
LineNo:808
        j++;
LineNo:812
    info *= 2.0;
LineNo:850
    return (info);
LineNo:601
{
LineNo:606
      tmp = QGamma((double)df / 2.0, chisq / 2.0);
LineNo:608
    return (tmp);
LineNo:277
{
LineNo:289
    x -= (double)1;
LineNo:290
    if (x < 0.0)
LineNo:293
        pix = 3.14159265358979323846264338327950288419716939937511 * x;
LineNo:294
        tmp___0 = sin(pix);
LineNo:295
        tmp___1 = log(pix / tmp___0);
LineNo:296
        tmp___2 = LGamma(1.0 - x);
LineNo:298
      return (tmp___1 - tmp___2);
LineNo:301
      tmp = x + 5.5;
LineNo:302
      tmp___3 = log(tmp);
LineNo:303
      tmp -= (x + 0.5) * tmp___3;
LineNo:304
      ser = 1.0;
LineNo:305
      j = 0;
LineNo:323
        if (!(j < 6))
LineNo:327
        x += (double)1;
LineNo:328
        ser += (double)(cof[j] / (double const)x);
LineNo:329
        j++;
LineNo:334
      tmp___4 = log(2.50662827465 * ser);
LineNo:336
    return (-tmp + tmp___4);
LineNo:338
}
LineNo:576
{
LineNo:582
    if (x < a + 1.0)
LineNo:585
        tmp = gser(a, x);
LineNo:586
        tmp___1 = 1.0 - tmp;
LineNo:592
        tmp___0 = gcf(a, x);
LineNo:593
        tmp___1 = tmp___0;
LineNo:597
    return (tmp___1);
LineNo:340
{
LineNo:352
    if (x <= 0.0)
LineNo:354
      return (0.0);
LineNo:356
    ap = a;
LineNo:357
    sum = 1.0 / ap;
LineNo:358
    del = sum;
LineNo:359
    n = 1;
LineNo:364
        if (!(n <= 100))
LineNo:368
        ap += (double)1;
LineNo:369
        del *= x / ap;
LineNo:370
        sum += del;
LineNo:371
        if (del < (double)0)
LineNo:373
          tmp___2 = -del;
LineNo:377
          tmp___2 = del;
LineNo:379
        if (sum < (double)0)
LineNo:381
          tmp___3 = -sum;
LineNo:385
          tmp___3 = sum;
LineNo:387
        if (tmp___2 < tmp___3 * 3.0e-7)
LineNo:390
            tmp = log(x);
LineNo:391
            tmp___0 = LGamma(a);
LineNo:392
            tmp___1 = exp((-x + a * tmp) - tmp___0);
LineNo:394
          return (sum * tmp___1);
LineNo:396
        n++;
LineNo:400
    return ((double)0);
LineNo:418
}
LineNo:420
{
LineNo:439
    gold = 0.0;
LineNo:440
    fac = 1.0;
LineNo:441
    b1 = 1.0;
LineNo:442
    b0 = 0.0;
LineNo:443
    a0 = 1.0;
LineNo:444
    a1 = x;
LineNo:445
    n = 1;
LineNo:450
        if (!(n <= 100))
LineNo:454
        an = (double)n;
LineNo:455
        ana = an - a;
LineNo:456
        a0 = (a1 + a0 * ana) * fac;
LineNo:457
        b0 = (b1 + b0 * ana) * fac;
LineNo:458
        anf = an * fac;
LineNo:459
        b1 = x * b0 + anf * b1;
LineNo:460
        a1 = x * a0 + anf * a1;
LineNo:461
        if (a1 != 0.0)
LineNo:463
          fac = 1.0 / a1;
LineNo:464
          g = b1 * fac;
LineNo:465
          gold = g - gold;
LineNo:466
          if (gold < (double)0)
LineNo:468
            tmp___2 = -gold;
LineNo:472
            tmp___2 = gold;
LineNo:474
          if (g < (double)0)
LineNo:476
            tmp___3 = -g;
LineNo:480
            tmp___3 = g;
LineNo:482
          if (tmp___2 < 3.0e-7 * tmp___3)
LineNo:485
              tmp = log(x);
LineNo:486
              tmp___0 = LGamma(a);
LineNo:487
              tmp___1 = exp((-x + a * tmp) - tmp___0);
LineNo:489
            return (tmp___1 * g);
LineNo:491
          gold = g;
LineNo:493
        n++;
LineNo:497
    return ((double)0);
LineNo:574
}
