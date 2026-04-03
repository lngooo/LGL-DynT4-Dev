/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A10_F14_O_A03_Goto.c
 * Implementation Logic: Loop of A03 using goto.
 */


#include <stdio.h>
#include <stdlib.h>

void  S(int  bZ[], int  f4)   {
 int   O4 =   0;
cDP0:
   if (O4 >=  f4 / 2) goto  Xo;
   int   Uc  =  bZ[O4];
   bZ[O4]  = bZ[f4 - 1  - O4];
 bZ[f4  - 1   -  O4]   =   Uc;
 O4++;
  goto   cDP0;
Xo:
 return;
}

int main(int   argc,  char *argv[]) {
  if  (argc <   2) return  0;
 int f4 =   argc -   1;
   int  *bZ = (int*)malloc(f4  *  sizeof(int));
   for(int O4=0; O4<f4;   O4++)   bZ[O4]   = atoi(argv[O4+1]);
  S(bZ, f4);
 for(int O4=0;   O4<f4;  O4++)   printf("%d ",  bZ[O4]);
  printf("\n");
 free(bZ);
  return   0;
}