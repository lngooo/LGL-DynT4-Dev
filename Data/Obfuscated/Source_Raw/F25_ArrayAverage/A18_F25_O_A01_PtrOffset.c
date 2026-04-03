/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A18_F25_O_A01_PtrOffset.c
 * Implementation Logic: PtrOffset
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  I(int BpjQ[],   int  OrB)  {
  double Ore1 =  0;
 for   (int  Lg   = 0;   Lg  <  OrB; Lg++) Ore1   +=  *(BpjQ  +   Lg);
 return Ore1  /  (double)OrB;
}

int main(int   argc, char  *argv[])  {
  if  (argc <   2)   return   0;
   int  OrB   =  argc   -  1;
 int  *BpjQ =  (int   *)malloc(OrB * sizeof(int));
 for (int Lg  =   0; Lg < OrB;   Lg++) BpjQ[Lg]   = atoi(argv[Lg + 1]);

 double   GBRw  =   I(BpjQ,   OrB);
 printf("%.2f\n", GBRw);

   free(BpjQ);
   return  0;
}