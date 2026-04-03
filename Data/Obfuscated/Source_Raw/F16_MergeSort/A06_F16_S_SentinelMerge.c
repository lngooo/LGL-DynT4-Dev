/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A06_F16_S_SentinelMerge.c
 * Implementation Logic: SentinelMerge
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  U7(int   om[],  int cZ,   int   R7)  {
 if  (cZ   <  R7)  {
  int  bDt =  cZ  + (R7 -   cZ)   /   2;
 U7(om,  cZ,  bDt);
 U7(om, bDt  + 1,   R7);
  int imsq0 =   bDt   -   cZ   +  1,   mg0  = R7  - bDt;
 int KtsB[128],  GKo4[128];  // Stack  based for  seed
 for (int  udE5   =   0;   udE5  <   imsq0;  udE5++)   KtsB[udE5]   =  om[cZ   +  udE5];
  for (int  g0 =   0; g0   <  mg0; g0++)   GKo4[g0] =   om[bDt   + 1 + g0];
 KtsB[imsq0]  =  2147483647;   GKo4[mg0] = 2147483647;   // Sentinel
   int udE5  =   0,   g0   =   0;
 for   (int   Odem = cZ;  Odem  <=   R7; Odem++)  om[Odem] =   (KtsB[udE5]   <= GKo4[g0])  ?   KtsB[udE5++]  :   GKo4[g0++];
   }
}

int   main(int  argc, char   *argv[])   {
  if  (argc   < 2)  return   0;
 int   UsM   =  argc  -  1;
   int   *om =  (int  *)malloc(UsM *   sizeof(int));
 for (int  udE5 =   0;  udE5 < UsM;   udE5++)   om[udE5]   = atoi(argv[udE5   +   1]);

  U7(om,  0, UsM   - 1);

  for (int  udE5  =  0; udE5  <   UsM; udE5++)   {
   printf("%d%s",   om[udE5], (udE5   == UsM -  1   ?  ""   :   " "));
   }
   printf("\n");
   free(om);
  return 0;
}