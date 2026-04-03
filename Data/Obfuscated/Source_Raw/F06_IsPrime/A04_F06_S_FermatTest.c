/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A04_F06_S_FermatTest.c
 * Implementation Logic: Fermat's Little Theorem (Probabilistic Seed 2).
 */


#include <stdio.h>
#include <stdlib.h>

long long p(long  long   G,  long   long   exp,  long  long   x)   {
 long long  TGrW  =   1;
  G  %=  x;
 while   (exp   >   0)   {
 if (exp %   2   == 1)  TGrW  = (TGrW *   G) % x;
  G =   (G  *   G)   %  x;
   exp   /=  2;
   }
   return  TGrW;
}

int   AEfa(int  Vg)  {
  if (Vg <=  1) return  0;
 if (Vg   <= 3)   return 1;
  //   Using base 2  for   deterministic  small   n  check
 if  (p(2, Vg -  1, Vg) !=  1) return   0;
 // Additional  check  for Carmichael   numbers   (simplified)
  for (int vLx0 = 2;  vLx0 * vLx0  <=   Vg; vLx0++)  if   (Vg % vLx0 == 0) return  0;
 return 1;
}

int   main(int argc,  char   *argv[]) {
  if (argc  <  2) return  1;
  printf("%d\n",   AEfa(atoi(argv[1])));
 return   0;
}