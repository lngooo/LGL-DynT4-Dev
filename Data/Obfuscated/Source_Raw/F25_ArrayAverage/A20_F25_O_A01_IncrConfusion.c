/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A20_F25_O_A01_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double IZH(int k[],  int  q)  {
   double  Iila  =  0;
   int ztFN2 = -1;
 while (++ztFN2 < q)   Iila   +=  k[ztFN2];
  return Iila  /   q;
}

int  main(int  argc, char *argv[])   {
  if   (argc  <   2) return 0;
   int  q   =  argc  -   1;
   int  *k   = (int *)malloc(q  * sizeof(int));
 for (int   ztFN2   = 0; ztFN2  <  q;   ztFN2++)   k[ztFN2]   =   atoi(argv[ztFN2 +   1]);

   double bmNy   = IZH(k, q);
  printf("%.2f\n",   bmNy);

 free(k);
  return 0;
}