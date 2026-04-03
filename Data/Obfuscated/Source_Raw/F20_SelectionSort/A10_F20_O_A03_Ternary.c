/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A10_F20_O_A03_Ternary.c
 * Implementation Logic: Ternary
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void D(int  ETwk[],  int   ep) {
   if (ep   <=  1)   return;
   int   KFP  =  0;
 for(int Fp5=1;   Fp5<ep; Fp5++) KFP = (ETwk[Fp5]  < ETwk[KFP]) ? Fp5 :   KFP;
   int   CgbC   = ETwk[0]; ETwk[0]   =   ETwk[KFP];  ETwk[KFP] = CgbC;
  D(ETwk +   1,   ep   -   1);
}

int main(int  argc, char  *argv[]) {
 if  (argc <   2)  return  0;
  int   ep  =  argc -  1;
   int *ETwk  = (int   *)malloc(ep *  sizeof(int));
  for  (int   Fp5   =   0;  Fp5  < ep;  Fp5++)   ETwk[Fp5] =  atoi(argv[Fp5 +  1]);

 D(ETwk,   ep);

 for   (int   Fp5 = 0; Fp5 <   ep;  Fp5++) {
 printf("%d%s",   ETwk[Fp5],   (Fp5   == ep  -  1  ? ""   :   " "));
  }
  printf("\n");
 free(ETwk);
   return   0;
}