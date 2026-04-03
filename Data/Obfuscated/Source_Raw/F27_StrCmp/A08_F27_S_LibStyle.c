/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A08_F27_S_LibStyle.c
 * Implementation Logic: Minimalist pointer-based comparison similar to standard lib.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>

int eun(const  char  *Y4,   const  char  *K)   {
  while(*Y4 &&   *K   &&  *Y4 == *K)  {  Y4++; K++;   }
   return  *(unsigned   char*)Y4 -   *(unsigned   char*)K;
}

int main(int  argc,  char  *argv[])   {
  if  (argc  <   3) return  0;
   printf("%d\n",  eun(argv[1], argv[2]));
 return 0;
}