/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A01_F14_S_TwoPointer.c
 * Implementation Logic: Standard iterative approach with start/end pointers.
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>

void  Rq(int KPoD3[],   int Yw)  {
   int   LtG7 =  0, RpAf  =  Yw  -   1;
  while  (LtG7   <   RpAf)   {
 int  Kt9 = KPoD3[LtG7];
 KPoD3[LtG7]  =   KPoD3[RpAf];
 KPoD3[RpAf] =   Kt9;
  LtG7++;
 RpAf--;
  }
}

int   main(int   argc,   char *argv[]) {
 if (argc  <   2)   return 0;
 int   Yw  =  argc  -   1;
   int   *KPoD3   =  (int*)malloc(Yw *   sizeof(int));
   for(int  IH=0;  IH<Yw;  IH++)   KPoD3[IH]  =   atoi(argv[IH+1]);
  Rq(KPoD3, Yw);
   for(int  IH=0;  IH<Yw;  IH++)  printf("%d ",  KPoD3[IH]);
 printf("\n");
   free(KPoD3);
   return 0;
}