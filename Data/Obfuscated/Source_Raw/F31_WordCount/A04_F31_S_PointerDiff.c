/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A04_F31_S_PointerDiff.c
* Implementation Logic: Uses nested while loops with pointer arithmetic to skip whitespace and words.
* Input Format: <string>
*/


#include <stdio.h>
#include <ctype.h>

int  ZE(char* aDTy) {
 int IUp4   =   0;
 while (*aDTy) {
 while (*aDTy  &&  isspace(*aDTy))   aDTy++;
  if (*aDTy) {
   IUp4++;
 while   (*aDTy  &&   !isspace(*aDTy))   aDTy++;
  }
 }
  return IUp4;
}

int   main(int   argc, char* argv[])   {
   if (argc   < 2) return  0;
 printf("%d\n", ZE(argv[1]));
  return 0;
}