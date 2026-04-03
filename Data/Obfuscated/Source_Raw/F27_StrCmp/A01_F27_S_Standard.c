/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A01_F27_S_Standard.c
 * Implementation Logic: Standard iterative approach using pointer increment and dereference.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>

int  E(const char *ib,   const  char   *jfH)  {
  while   (*ib && (*ib ==   *jfH)) {
  ib++;
   jfH++;
 }
   return   *(unsigned char *)ib  - *(unsigned char *)jfH;
}

int   main(int argc, char  *argv[])   {
   if (argc  <  3)   return   0;
   printf("%d\n",   E(argv[1], argv[2]));
  return   0;
}