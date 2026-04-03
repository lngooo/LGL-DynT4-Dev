/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A03_F26_S_PointerDiff.c
 * Implementation Logic: Pointer subtraction method (Seed 2).
 */


#include <stdio.h>

int uHIL(const  char  *o) {
  const   char  *aaV1  =   o;
 while (*aaV1)  aaV1++;
 return   (int)(aaV1 - o);
}

int main(int argc,  char   *argv[])   {
   if   (argc   < 2) return  0;
  printf("%d\n", uHIL(argv[1]));
   return   0;
}