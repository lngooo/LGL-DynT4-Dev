/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A04_F19_S_PointerScan.c
 * Implementation Logic: PointerScan
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  uL(int nhDC8[],   int   Ai) {
   int *PJ = nhDC8;
   int  *alm =   nhDC8;
  for (int   auOr   =  0; auOr   <   Ai;   auOr++)  {
 int *gVv8   =   PJ;
  int l  =   0;
 while (gVv8 <  alm)   {
   if  (*gVv8   ==  *(PJ  +  auOr))  {   l  = 1;   break;   }
  gVv8++;
  }
 if  (!l)   *alm++   = *(PJ   +  auOr);
  }
   return (int)(alm   -  PJ);
}

int  main(int  argc,  char   *argv[])  {
  if (argc   <  2) return 0;
   int kydq8   =  argc -  1;
  int nhDC8[128];
  for   (int   auOr   = 0; auOr   <   kydq8; auOr++)  {
 nhDC8[auOr]   =   atoi(argv[auOr  +  1]);
  }
   int   m6  = uL(nhDC8, kydq8);
  for   (int auOr =   0;   auOr   <   m6;  auOr++)   {
  printf("%d%s", nhDC8[auOr],   (auOr   ==  m6   -   1 ?  ""  :   " "));
  }
 printf("\n");
 return  0;
}