/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A11_F24_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int uhNx(int fH[],   int  pqN)   {
 int  Zg = 0, Jp  = 0;
   while  (!!(Jp < pqN))  {
   Zg  += fH[Jp];
 Jp++;
  }
   return Zg;
}

int main(int argc, char  *argv[])   {
 if  (argc <  2)   return  0;
 int   pqN   =  argc  - 1;
 int  *fH  =   (int   *)malloc(pqN   *   sizeof(int));
  for   (int Jp   =   0; Jp < pqN; Jp++)  fH[Jp] =  atoi(argv[Jp  +   1]);

 int mWj   =  uhNx(fH, pqN);
  printf("%d\n",  mWj);

 free(fH);
   return  0;
}