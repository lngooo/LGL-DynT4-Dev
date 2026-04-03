/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A07_F20_O_A01_Goto.c
 * Implementation Logic: Goto
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  D(int dYzF4[], int  ZFvS8)   {
   int tqs  = 0,  ju0,   EnMA;
req1:
 if (tqs   >=  ZFvS8   -  1)  return;
  EnMA =   tqs; ju0  =  tqs   +   1;
cVqe:
  if  (ju0 >=  ZFvS8)  goto   eRKb;
  if (dYzF4[ju0]  <  dYzF4[EnMA])   EnMA =   ju0;
  ju0++; goto   cVqe;
eRKb:
  {  int   rnfA =   dYzF4[EnMA];   dYzF4[EnMA] =   dYzF4[tqs];  dYzF4[tqs] = rnfA;  }
 tqs++; goto  req1;
}

int   main(int   argc,   char  *argv[]) {
  if   (argc  <   2)  return 0;
  int ZFvS8  = argc  -   1;
   int   *dYzF4   = (int  *)malloc(ZFvS8 * sizeof(int));
  for  (int   tqs   = 0;  tqs   < ZFvS8; tqs++)  dYzF4[tqs]   = atoi(argv[tqs  + 1]);

  D(dYzF4,  ZFvS8);

   for  (int tqs   = 0;   tqs   <   ZFvS8;  tqs++)  {
  printf("%d%s",   dYzF4[tqs], (tqs   == ZFvS8  -  1 ?  "" :  " "));
 }
 printf("\n");
  free(dYzF4);
  return 0;
}