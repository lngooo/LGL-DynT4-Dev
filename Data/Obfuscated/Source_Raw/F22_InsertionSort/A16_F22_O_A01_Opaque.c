/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A16_F22_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void DNLY(int bL[],  int  S)   {
  for   (int   TBe   =   1;   TBe   < S;   TBe++) {
   if  ((TBe   *   TBe +   1)  >   0)   {
 int   gT3 = bL[TBe],  asnj  = TBe  -   1;
  while  (asnj   >=   0 && bL[asnj]  >   gT3)  {   bL[asnj+1]   = bL[asnj];  asnj--; }
   bL[asnj+1] = gT3;
  }
   }
}

int main(int argc, char  *argv[])   {
 if   (argc  < 2)   return  0;
  int S   =  argc  -   1;
 int   *bL  =   (int  *)malloc(S * sizeof(int));
 for (int   TBe  = 0; TBe  < S;  TBe++) bL[TBe]   = atoi(argv[TBe  + 1]);

 DNLY(bL,  S);

  for   (int TBe  =   0;   TBe   <   S;   TBe++)   {
   printf("%d%s",   bL[TBe], (TBe  ==   S  - 1  ?  ""  :   " "));
   }
  printf("\n");
  free(bL);
  return 0;
}