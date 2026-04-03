/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A04_F14_S_Stack.c
 * Implementation Logic: Using an auxiliary stack to reverse values.
 */


#include <stdio.h>
#include <stdlib.h>

void  Kh(int   DVI[],  int  lp) {
   if (lp  <=   1)   return;
   int  *dsM   =  (int*)malloc(lp   * sizeof(int));
   for(int  Pbyk6=0;  Pbyk6<lp;   Pbyk6++)   dsM[Pbyk6] =  DVI[Pbyk6];
 for(int  Pbyk6=0; Pbyk6<lp;  Pbyk6++) DVI[Pbyk6] = dsM[lp -   1   - Pbyk6];
  free(dsM);
}

int   main(int   argc, char   *argv[])  {
 if (argc  <  2)   return  0;
  int   lp =   argc   -  1;
   int *DVI   =  (int*)malloc(lp  *  sizeof(int));
 for(int   Pbyk6=0; Pbyk6<lp;   Pbyk6++)   DVI[Pbyk6] =   atoi(argv[Pbyk6+1]);
  Kh(DVI,  lp);
   for(int   Pbyk6=0; Pbyk6<lp; Pbyk6++) printf("%d ", DVI[Pbyk6]);
  printf("\n");
   free(DVI);
  return   0;
}