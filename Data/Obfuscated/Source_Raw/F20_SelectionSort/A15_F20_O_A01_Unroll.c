/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A15_F20_O_A01_Unroll.c
 * Implementation Logic: Unroll
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  ZV(int  Bu9[],  int f)   {
  for   (int fFE4  =  0;  fFE4   < f - 1; fFE4++) {
 int SCMz5  =   fFE4,  kk  =   fFE4   +   1;
  for   (;   kk  < f -  1; kk   += 2)  {
 if   (Bu9[kk]   < Bu9[SCMz5])   SCMz5  = kk;
 if   (Bu9[kk+1]   < Bu9[SCMz5])  SCMz5 =  kk  +   1;
 }
 for   (;   kk  <   f;   kk++)   if (Bu9[kk]   <  Bu9[SCMz5])  SCMz5   =  kk;
 int DOdI  =   Bu9[fFE4];   Bu9[fFE4]   =  Bu9[SCMz5];  Bu9[SCMz5] = DOdI;
 }
}

int   main(int  argc, char   *argv[])  {
 if   (argc  < 2)   return 0;
  int  f  =   argc -   1;
 int  *Bu9   =  (int  *)malloc(f   *   sizeof(int));
  for (int   fFE4   =   0;  fFE4   <  f;  fFE4++)   Bu9[fFE4]   =   atoi(argv[fFE4  + 1]);

   ZV(Bu9,  f);

   for (int   fFE4  = 0;   fFE4   < f;  fFE4++)  {
   printf("%d%s", Bu9[fFE4],  (fFE4  == f   -   1  ?   ""  : " "));
   }
  printf("\n");
 free(Bu9);
  return   0;
}