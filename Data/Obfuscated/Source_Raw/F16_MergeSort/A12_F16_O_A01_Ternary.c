/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A12_F16_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   tK(int   IsT5[],   int   xxFZ3,   int   ZPlK) {
 if   (xxFZ3  >=  ZPlK)  return;
 int   vhTq =   xxFZ3 +   (ZPlK   -   xxFZ3)   /  2;
   tK(IsT5,   xxFZ3, vhTq);
  tK(IsT5, vhTq   +  1,   ZPlK);
  int *e = (int*)malloc((ZPlK-xxFZ3+1)*4),   YDV1   =  xxFZ3,   IYj   =   vhTq   +  1, tB   =  0;
   while   (YDV1   <=   vhTq   ||  IYj   <=   ZPlK) 
   e[tB++]  = (YDV1   <=  vhTq  &&   (IYj > ZPlK   ||   IsT5[YDV1] <=   IsT5[IYj])) ?  IsT5[YDV1++] :  IsT5[IYj++];
   for  (int   a   =   0;   a   <  tB;  a++)  IsT5[xxFZ3  +   a]   =   e[a];
  free(e);
}

int  main(int  argc, char *argv[])  {
  if   (argc <   2)  return 0;
  int   xJd  =  argc   - 1;
  int  *IsT5  =   (int *)malloc(xJd   *  sizeof(int));
 for   (int  YDV1 =  0;   YDV1   <   xJd; YDV1++)   IsT5[YDV1]   =  atoi(argv[YDV1   +   1]);

   tK(IsT5,   0,   xJd -  1);

   for   (int   YDV1  =  0;   YDV1  <  xJd;   YDV1++) {
   printf("%d%s",  IsT5[YDV1],  (YDV1  ==   xJd   - 1  ?  ""   :  " "));
 }
  printf("\n");
   free(IsT5);
 return  0;
}