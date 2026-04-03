/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A01_F11_S_Iterative.c
 * Implementation Logic: Standard iterative approach with high/low pointers.
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>

int  tkgX2(int   p7[], int   UTep,   int   cZSd)   {
   int   ViZ8 = 0,  dAG  =   UTep   -  1;
   while   (ViZ8   <=  dAG) {
 int uPxG0 =   ViZ8  +  (dAG  - ViZ8) / 2;
  if (p7[uPxG0] == cZSd)  return   uPxG0;
 if  (p7[uPxG0] <  cZSd)   ViZ8   =  uPxG0 + 1;
 else dAG =  uPxG0   -  1;
 }
 return  -1;
}

int main(int   argc,  char *argv[]) {
   if  (argc  <   3)   return  1;
  int  cZSd   =   atoi(argv[1]);
   int   UTep  =   argc   -  2;
   int *p7   =   (int*)malloc(UTep   *   sizeof(int));
   for(int   T=0;  T<UTep;   T++) p7[T] = atoi(argv[T+2]);
  printf("%d\n",  tkgX2(p7,  UTep,  cZSd));
   free(p7);
  return  0;
}