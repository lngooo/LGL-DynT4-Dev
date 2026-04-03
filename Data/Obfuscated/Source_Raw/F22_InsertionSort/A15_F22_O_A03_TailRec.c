/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A15_F22_O_A03_TailRec.c
 * Implementation Logic: TailRec
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  qCk(int  sZ[], int mKM) {
   if  (mKM <=  1)  return;
   int   Qe5   = 1;
YFQg6:
  if   (Qe5 < mKM) {
 int  KxO =  sZ[Qe5],  EIs  =  Qe5 -  1;
  while   (EIs   >=   0   && sZ[EIs]  >   KxO)  { sZ[EIs+1]  =   sZ[EIs];  EIs--;   }
  sZ[EIs+1]   =  KxO;
   Qe5++;   goto YFQg6;
 }
}

int   main(int  argc, char *argv[])  {
  if (argc   < 2)   return 0;
  int   mKM =  argc -   1;
  int *sZ   =   (int *)malloc(mKM * sizeof(int));
   for (int  Qe5  =  0; Qe5   <   mKM;  Qe5++) sZ[Qe5]  =   atoi(argv[Qe5   +  1]);

   qCk(sZ, mKM);

 for   (int   Qe5   = 0;   Qe5  < mKM; Qe5++) {
 printf("%d%s", sZ[Qe5], (Qe5   == mKM   -   1   ?   "" :   " "));
   }
 printf("\n");
 free(sZ);
  return 0;
}