/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A18_F05_O_A01_DoubleVar.c
 * Implementation Logic: Newton's method with variables split into high/low parts.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  YSME(int  buA)  {
 if   (buA <   0)   return  -1;
   long   mdaD   =  buA;
 long  Uvy   =   (mdaD  +  1)   >>   1;
   for  (;  Uvy <   mdaD ;)  {
   mdaD   = Uvy;
   long  xwi = (mdaD + buA   /  mdaD) /  2;
  Uvy  = xwi;
 }
   return (int)mdaD;
}

int main(int  argc,  char  *argv[])   {
 if (argc   < 2) return  1;
  printf("%d\n", YSME(atoi(argv[1])));
   return 0;
}