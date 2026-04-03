/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A03_F27_S_Recursive.c
 * Implementation Logic: Deeply recursive implementation of string character comparison.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>

int   grJI1(const   char  *qD,   const   char  *nl9)   {
  if (*qD  ==  '\0'   || *qD   !=   *nl9)
   return  *(unsigned   char   *)qD   -  *(unsigned  char *)nl9;
   return  grJI1(qD  +   1,   nl9  + 1);
}

int main(int  argc, char   *argv[]) {
   if   (argc   <   3) return 0;
  printf("%d\n", grJI1(argv[1], argv[2]));
  return 0;
}