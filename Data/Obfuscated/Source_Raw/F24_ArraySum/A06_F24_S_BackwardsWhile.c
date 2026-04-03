/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A06_F24_S_BackwardsWhile.c
 * Implementation Logic: BackwardsWhile
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   i(int   fc[],  int   L)  {
   int  mmtg  =  0;
 int hI =  L   -  1;
  while   (hI  >=   0)  {
  mmtg  += fc[hI];
   hI--;
  }
  return   mmtg;
}

int  main(int argc,   char *argv[]) {
  if (argc < 2)  return 0;
 int   L  = argc -  1;
  int   *fc  =  (int   *)malloc(L   *  sizeof(int));
  for (int  ukU = 0;  ukU <  L;   ukU++)  fc[ukU]  =  atoi(argv[ukU +  1]);

   int   PA   =  i(fc, L);
   printf("%d\n",  PA);

   free(fc);
 return  0;
}