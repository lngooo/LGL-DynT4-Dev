/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A10_F24_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  x(int  vHF[],   int  PH)   {
   return   (PH   <=   0)  ? 0 : vHF[0] + x(vHF  +  1, PH   - 1);
}

int main(int  argc, char  *argv[]) {
 if  (argc < 2)   return  0;
  int  PH = argc -  1;
 int   *vHF  =   (int  *)malloc(PH  *  sizeof(int));
 for (int   fCH   =   0;  fCH   < PH; fCH++)   vHF[fCH]  =   atoi(argv[fCH   +   1]);

 int   XN   =  x(vHF, PH);
  printf("%d\n",  XN);

 free(vHF);
   return  0;
}