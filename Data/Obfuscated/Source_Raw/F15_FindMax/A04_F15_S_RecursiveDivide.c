/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A04_F15_S_RecursiveDivide.c
 * Implementation Logic: Recursive divide and conquer (Seed 2).
 */


#include <stdio.h>
#include <stdlib.h>

int  Amb(int  yBaA[],   int  iT,   int   IH)   {
 if (iT   == IH) return  yBaA[iT];
 int  ZJTb4   =  iT +  (IH -   iT) /   2;
   int   SR6 =  Amb(yBaA,  iT, ZJTb4);
   int PsL   = Amb(yBaA,  ZJTb4 +  1, IH);
 return (SR6  >   PsL)  ?   SR6   :   PsL;
}

int   uiQ3(int yBaA[], int  iZF0)   {
  if (iZF0 <=   0)   return 0;
 return Amb(yBaA, 0,   iZF0  -   1);
}

int main(int  argc, char  *argv[])  {
 if  (argc  < 2)   return  0;
   int  iZF0 =   argc  - 1;
   int *yBaA   =  (int*)malloc(iZF0  * sizeof(int));
   for (int   xVzh   =   0;  xVzh  <  iZF0;  xVzh++) yBaA[xVzh]  =   atoi(argv[xVzh+1]);
  printf("%d\n", uiQ3(yBaA,   iZF0));
   free(yBaA);
 return   0;
}