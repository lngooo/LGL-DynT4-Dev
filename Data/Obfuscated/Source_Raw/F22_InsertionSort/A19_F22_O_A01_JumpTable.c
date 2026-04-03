/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A19_F22_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Dd2(int H[],   int  tO) {
 for (int Lh =  1; Lh < tO; Lh++) {
 int RAf =  H[Lh],  p  =  Lh - 1;
  ek:
 if  (p   >=  0   &&   H[p]   > RAf)  {
  H[p+1]   =   H[p];
 p--;
   goto ek;
  }
  H[p+1] =   RAf;
 }
}

int  main(int argc,   char  *argv[])   {
  if  (argc   <   2)  return   0;
   int   tO   =  argc   - 1;
  int  *H   =   (int  *)malloc(tO   *  sizeof(int));
 for (int Lh  = 0;  Lh   <  tO;  Lh++)   H[Lh]   =  atoi(argv[Lh  + 1]);

   Dd2(H,  tO);

   for  (int Lh =   0;  Lh   < tO; Lh++)  {
 printf("%d%s", H[Lh],   (Lh  ==  tO  - 1   ?  ""   : " "));
 }
 printf("\n");
 free(H);
 return 0;
}