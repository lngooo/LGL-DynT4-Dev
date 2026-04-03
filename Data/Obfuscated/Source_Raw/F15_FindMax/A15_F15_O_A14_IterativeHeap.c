/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A15_F15_O_A14_IterativeHeap.c
 * Implementation Logic: Iterative max-heap build logic.
 */


#include <stdio.h>
#include <stdlib.h>

int   M(int QeF[], int   RZef) {
   int   *Mx =  (int*)malloc(RZef  *  sizeof(int));
 for(int  wqpx=0;  wqpx<RZef;  wqpx++)   Mx[wqpx] =   QeF[wqpx];
   for  (int wqpx = 1;  wqpx <  RZef; wqpx++) {
 int   AIoy  =  wqpx;
 while  (AIoy  >  0)  {
 int ISRC9   =   (AIoy -  1)  /   2;
   if   (Mx[AIoy]  > Mx[ISRC9])  {  int  vYE9  = Mx[AIoy]; Mx[AIoy] =  Mx[ISRC9];   Mx[ISRC9]  =  vYE9; AIoy =   ISRC9;   }
 else   break;
 }
   }
  int   o3 =  Mx[0];
 free(Mx);
   return   o3;
}

int   main(int   argc,  char  *argv[])  {
  if  (argc  < 2) return 0;
 int  RZef =   argc   - 1;
 int *QeF  =   (int*)malloc(RZef  * sizeof(int));
  for  (int  wqpx   = 0;  wqpx <   RZef;   wqpx++)   QeF[wqpx]  =   atoi(argv[wqpx+1]);
 printf("%d\n",   M(QeF, RZef));
  free(QeF);
   return   0;
}