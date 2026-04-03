/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A14_F25_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   vsKV(int   jT[], int BRv)   {
 double  NQ2 = 0;
 for  (int  ET  =   0;  ET   <   BRv;   ET++)   {
 for(int lQg=0;  lQg<1; lQg++)  NQ2  +=  jT[ET];
   }
 return (BRv  >  0)   ?  (NQ2 /   BRv)   :   0.0;
}

int main(int   argc,  char   *argv[]) {
 if   (argc  <   2)   return   0;
 int  BRv  = argc  -   1;
 int   *jT   = (int   *)malloc(BRv *   sizeof(int));
  for  (int   ET   = 0;  ET <  BRv;   ET++)  jT[ET] =  atoi(argv[ET   + 1]);

  double  L9   =  vsKV(jT, BRv);
  printf("%.2f\n",   L9);

  free(jT);
  return 0;
}