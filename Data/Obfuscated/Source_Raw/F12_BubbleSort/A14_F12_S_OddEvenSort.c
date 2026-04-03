/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A14_F12_S_OddEvenSort.c
 * Implementation Logic: Odd-Even Brick Sort (Parallel Bubble variant) (Seed 7).
 */


#include <stdio.h>
#include <stdlib.h>

void   cjUZ(int  IUm[],   int  SmSf6) {
   int   oRaI8  =   0;
  while  (!oRaI8) {
  oRaI8   =  1;
  for (int  OHq1  =  1;   OHq1 < SmSf6   -   1; OHq1  += 2)  {
   if  (IUm[OHq1] > IUm[OHq1   +   1])  {
  int  Oj  = IUm[OHq1];   IUm[OHq1]   = IUm[OHq1+1];   IUm[OHq1+1]   =  Oj;
   oRaI8 =   0;
  }
  }
   for  (int  OHq1 = 0;  OHq1 < SmSf6 -  1; OHq1  += 2)   {
 if (IUm[OHq1]   >   IUm[OHq1  + 1]) {
   int   Oj = IUm[OHq1];  IUm[OHq1] = IUm[OHq1+1];   IUm[OHq1+1] =   Oj;
  oRaI8   =  0;
  }
   }
   }
}

int   main(int  argc,  char *argv[])   {
   if  (argc < 2) return  0;
  int  SmSf6 = argc   - 1;
 int  *IUm   =  (int*)malloc(SmSf6   * sizeof(int));
  for  (int   OHq1   =   0;   OHq1   <  SmSf6;   OHq1++)   IUm[OHq1]  =  atoi(argv[OHq1+1]);
 cjUZ(IUm,   SmSf6);
 for   (int   OHq1   =   0;   OHq1  < SmSf6; OHq1++)   printf("%d ", IUm[OHq1]);
   printf("\n");
  free(IUm);
  return  0;
}