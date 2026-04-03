/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A20_F13_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GP4(int  L7[],   int   Lgz6,   int  Otix9) {
   if   (Lgz6   >=  Otix9)  return;
 int  R   =   L7[Otix9],   ac = Lgz6  -  1;
  for (int PI =   Lgz6; PI   <  Otix9;  PI++) {
 int TPXL7 =   (L7[PI]   <   R);
   if   (TPXL7)   { ac++;   int qzE3  =   L7[ac];  L7[ac]   =  L7[PI]; L7[PI]  = qzE3; }
   }
 int qzE3   =  L7[ac+1];  L7[ac+1]   =   L7[Otix9]; L7[Otix9] = qzE3;
   GP4(L7,   Lgz6,   ac);
  GP4(L7,  ac  + 2,   Otix9);
}

int main(int  argc,  char   *argv[])  {
   if   (argc   <  2) return   0;
   int   MRKR = argc -  1;
   int   *L7   =   (int  *)malloc(MRKR *  sizeof(int));
   for   (int  ac =  0;   ac <  MRKR;   ac++) L7[ac]   = atoi(argv[ac   +   1]);

  GP4(L7,   0,   MRKR  -  1);

  for  (int   ac   =   0;   ac  <  MRKR; ac++)   {
  printf("%d%s",   L7[ac],  (ac   ==  MRKR   -  1   ?  "" :   " "));
   }
 printf("\n");
 free(L7);
   return  0;
}