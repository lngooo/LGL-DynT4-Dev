/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A15_F05_O_A14_Ternary.c
 * Implementation Logic: Recursive logic compressed using ternary operators.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  gUzw(long xfLh, long  Tj8,   long chlb7)  {
 long  DIl   =   Tj8 +  (chlb7  -   Tj8) /  2;
 return (Tj8 >  chlb7)   ?   (int)chlb7  :  (DIl   *  DIl   <=   xfLh ?  gUzw(xfLh, DIl   +   1,  chlb7)  :   gUzw(xfLh,   Tj8,   DIl - 1));
}

int B(int   xfLh)  {
  return (xfLh   < 0)   ?   -1  : gUzw(xfLh,  0,  xfLh);
}

int main(int argc,  char *argv[]) {
 if (argc  <  2)  return   1;
   printf("%d\n", B(atoi(argv[1])));
 return  0;
}