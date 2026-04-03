/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A11_F13_O_A02_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  eTc(int  qTFg2[],  int Yu7, int   Eod2) {
   if  (!!(Yu7 <  Eod2)) {
 int HDU   =   qTFg2[Yu7], E7   =   Yu7   -  1,  K5 =  Eod2 + 1;
 while   (!!1) {
 do  {   E7++; }  while  (qTFg2[E7] <  HDU);
 do  { K5--;   } while (qTFg2[K5]   >   HDU);
 if  (!!(E7 >=   K5)) break;
   int  Lg  =   qTFg2[E7];  qTFg2[E7]   = qTFg2[K5];  qTFg2[K5]  =   Lg;
 }
  eTc(qTFg2,   Yu7,   K5);
  eTc(qTFg2, K5 + 1,   Eod2);
   }
}

int main(int   argc,  char   *argv[])   {
  if   (argc   < 2)   return 0;
   int yhS  =   argc  -  1;
 int  *qTFg2  =   (int  *)malloc(yhS   * sizeof(int));
 for (int E7   =   0;   E7  <  yhS; E7++)  qTFg2[E7]   = atoi(argv[E7 +  1]);

  eTc(qTFg2,   0,   yhS   -  1);

  for  (int E7   =  0;   E7   <  yhS;   E7++)   {
   printf("%d%s", qTFg2[E7],   (E7   == yhS  -   1  ?   ""  : " "));
  }
 printf("\n");
 free(qTFg2);
   return   0;
}