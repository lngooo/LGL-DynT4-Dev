/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A03_F18_S_SortingIndex.c
 * Implementation Logic: SortingIndex
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  cs(int rAW[],   int   H,  int  oC, int  z) {
   //  Simple  sort  and return for seed
   for(int  OLcG=0;   OLcG<oC; OLcG++)  {
 for(int  TPA=OLcG+1;   TPA<=oC;   TPA++)  {
 if(rAW[OLcG] >   rAW[TPA])  {  int   N=rAW[OLcG];   rAW[OLcG]=rAW[TPA];  rAW[TPA]=N;   }
  }
 }
   return  rAW[z-1];
}

int  main(int  argc, char  *argv[])   {
   if   (argc   <  3)  return  0;
   int   z   =   atoi(argv[1]);
   int muh   =   argc   - 2;
 int *rAW   = (int  *)malloc(muh *   sizeof(int));
   for (int  OLcG =   0;  OLcG  < muh; OLcG++) rAW[OLcG]  =  atoi(argv[OLcG +   2]);

  //  假设   K  是从   1   开始的 (1st  smallest)
 int RFN   =  cs(rAW,   0,  muh  -  1, z);

   printf("%d\n",  RFN);
  free(rAW);
  return 0;
}