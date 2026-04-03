/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A08_F12_S_CocktailShaker.c
 * Implementation Logic: Bidirectional bubble sort (Cocktail Shaker) (Seed 4).
 */


#include <stdio.h>
#include <stdlib.h>

void   U(int   wq[],   int   Tdi)  {
   int e3 =   0, Vs = Tdi  -  1,   wUr   = 1;
  while   (wUr) {
 wUr   =   0;
 for (int  X  = e3; X <  Vs; ++X)   {
   if   (wq[X]  > wq[X +   1])  {
   int   KRyC = wq[X];   wq[X]  =   wq[X+1];   wq[X+1] =   KRyC;
  wUr  = 1;
  }
   }
   if  (!wUr) break;
 wUr  =  0;
 --Vs;
 for (int  X  =   Vs   - 1;   X >=  e3;   --X)  {
   if (wq[X] >   wq[X  +   1])  {
  int  KRyC =   wq[X]; wq[X]  =   wq[X+1];  wq[X+1]   =   KRyC;
 wUr   = 1;
   }
 }
   ++e3;
  }
}

int  main(int   argc,   char  *argv[]) {
 if (argc  <  2)  return  0;
 int  Tdi  = argc - 1;
   int  *wq = (int*)malloc(Tdi  * sizeof(int));
  for  (int  X =  0; X  < Tdi;  X++)   wq[X]  = atoi(argv[X+1]);
   U(wq, Tdi);
   for (int   X   =   0; X < Tdi;  X++)  printf("%d ", wq[X]);
 printf("\n");
 free(wq);
   return 0;
}