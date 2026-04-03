/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A11_F20_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  RuBZ1(int   CDat[],  int SAVd) {
 int EqTt   = 0;
   while (!!(EqTt  <   SAVd   - 1))   {
   int  tAb   =  EqTt,  J   =  EqTt   +   1;
 while  (!!(J   < SAVd)) {
  if  (!!(CDat[J]  <   CDat[tAb]))  tAb   =  J;
   J++;
   }
 int  Gf = CDat[tAb]; CDat[tAb] = CDat[EqTt];   CDat[EqTt]   =   Gf;
 EqTt++;
  }
}

int   main(int  argc,   char   *argv[])  {
  if (argc  <   2)   return   0;
  int   SAVd   =  argc -   1;
 int   *CDat  =   (int   *)malloc(SAVd *   sizeof(int));
 for  (int   EqTt =   0;  EqTt   < SAVd;  EqTt++) CDat[EqTt] =  atoi(argv[EqTt   +   1]);

   RuBZ1(CDat,  SAVd);

 for  (int EqTt  =  0;  EqTt   <   SAVd; EqTt++) {
   printf("%d%s",   CDat[EqTt],  (EqTt ==   SAVd -  1 ? ""  :   " "));
  }
  printf("\n");
 free(CDat);
  return  0;
}