/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A08_F15_S_SortedExtract.c
 * Implementation Logic: Find max by sorting (Seed 4).
 */


#include <stdio.h>
#include <stdlib.h>

int nsF6(const void  *rQF,  const void   *ewMQ)  { return   (*(int*)rQF   - *(int*)ewMQ);  }

int NSms6(int  Wwlb[],   int xk) {
   if  (xk   <=   0)  return 0;
  int  *MQcL4  = (int*)malloc(xk  *  sizeof(int));
  for(int  XpOU6=0;   XpOU6<xk;   XpOU6++)  MQcL4[XpOU6]   =   Wwlb[XpOU6];
  qsort(MQcL4, xk, sizeof(int),  nsF6);
   int   La = MQcL4[xk-1];
 free(MQcL4);
  return   La;
}

int main(int  argc,   char   *argv[])   {
 if  (argc   < 2)   return 0;
  int   xk =   argc -   1;
   int *Wwlb   =   (int*)malloc(xk *  sizeof(int));
 for  (int  XpOU6   = 0;  XpOU6 < xk;  XpOU6++) Wwlb[XpOU6]  =   atoi(argv[XpOU6+1]);
   printf("%d\n", NSms6(Wwlb,   xk));
 free(Wwlb);
 return   0;
}