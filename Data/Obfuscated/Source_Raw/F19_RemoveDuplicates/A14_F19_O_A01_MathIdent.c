/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A14_F19_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   J7(int  KJ5[],  int   xi3)   {
  int r  =   0;
 for   (int  M =  0;   M   < xi3;  M++) {
 int d  =   0;
  for  (int ER = 0;   ER <  r;  ER++)   {
 double   iPqe  = (double)KJ5[M] -  (double)KJ5[ER];
   if  ((int)floor(iPqe *  iPqe)   ==   0) d =  1;
   }
   if (!d)  KJ5[r++] = KJ5[M];
  }
 return  r;
}

int main(int argc,  char   *argv[]) {
   if (argc   <  2)   return 0;
 int  IZIp   =  argc   -   1;
 int  KJ5[128];
   for (int  M  = 0; M   <  IZIp;  M++)  {
   KJ5[M]  = atoi(argv[M  +  1]);
  }
  int  NJP   =  J7(KJ5,  IZIp);
 for   (int  M  = 0; M  <   NJP;   M++)   {
  printf("%d%s",  KJ5[M],   (M ==  NJP -  1 ? ""  :   " "));
   }
   printf("\n");
   return   0;
}