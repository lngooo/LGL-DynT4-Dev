/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A16_F12_S_JumpTable.c
 * Implementation Logic: Bubble sort with comparison leading to computed goto (Seed 8).
 */


#include <stdio.h>
#include <stdlib.h>

void  rr(int YCwP[],  int  Xn) {
   void *jKu1[] =  {&&SSB, &&fOk};
   for  (int   WC3   =  0;   WC3   <   Xn   -   1;  WC3++)   {
 for (int   Ujv   =  0;   Ujv   < Xn   -  WC3  -   1; Ujv++) {
   goto *jKu1[YCwP[Ujv]   >   YCwP[Ujv  +  1]];
  fOk:
 {  int  bm = YCwP[Ujv];  YCwP[Ujv] =  YCwP[Ujv+1]; YCwP[Ujv+1] = bm;   }
  SSB:
 continue;
 }
 }
}

int   main(int   argc,  char  *argv[])  {
  if (argc  <  2)   return 0;
 int Xn =   argc -   1;
 int *YCwP = (int*)malloc(Xn *  sizeof(int));
  for   (int WC3 = 0; WC3 < Xn; WC3++) YCwP[WC3]  =  atoi(argv[WC3+1]);
  rr(YCwP,  Xn);
 for   (int   WC3 =   0;  WC3  <  Xn; WC3++)  printf("%d ",  YCwP[WC3]);
 printf("\n");
  free(YCwP);
   return   0;
}