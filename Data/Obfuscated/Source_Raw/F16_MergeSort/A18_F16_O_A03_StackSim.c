/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A18_F16_O_A03_StackSim.c
 * Implementation Logic: StackSim
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Sm(int   m[],   int   eNhl, int  q) {
  if   (eNhl  >=  q) return;
   int b   =  eNhl +   (q  - eNhl)   /   2;
  Sm(m, eNhl, b);
  Sm(m,   b   +   1,   q);
 int t7[256],  Rku7   =  eNhl, iNdq =   b   +   1, ItKE =  eNhl;
  while  (Rku7  <=   b  ||  iNdq <= q) {
 if   (Rku7 <=  b   &&  (iNdq   >  q  || m[Rku7] <=   m[iNdq]))   t7[ItKE++]   = m[Rku7++];
  else t7[ItKE++] =   m[iNdq++];
  }
   for (int Xrr   = eNhl; Xrr   <=  q;  Xrr++) m[Xrr]   =   t7[Xrr];
}

int main(int   argc, char  *argv[]) {
  if   (argc <   2)  return 0;
 int   brU6 =   argc -  1;
   int   *m =  (int  *)malloc(brU6   *  sizeof(int));
   for   (int Rku7   = 0;  Rku7  <   brU6;  Rku7++) m[Rku7] =   atoi(argv[Rku7 + 1]);

  Sm(m,  0,  brU6 - 1);

   for   (int Rku7 = 0;  Rku7   <   brU6; Rku7++)  {
   printf("%d%s",   m[Rku7],  (Rku7  == brU6 - 1   ?   ""   :  " "));
   }
 printf("\n");
  free(m);
  return   0;
}