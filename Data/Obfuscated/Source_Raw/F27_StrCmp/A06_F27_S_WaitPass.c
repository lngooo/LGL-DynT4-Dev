/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A06_F27_S_WaitPass.c
 * Implementation Logic: Scans until divergence, then performs final subtraction.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>

int  r(const  char *I, const  char   *A7) {
 int   c9  =  0;
 while(I[c9]   ==  A7[c9]  &&   I[c9]  !=  '\0')   c9++;
  return   (unsigned   char)I[c9] -   (unsigned char)A7[c9];
}

int main(int   argc,  char   *argv[])  {
  if   (argc   <  3)  return   0;
 printf("%d\n",  r(argv[1],  argv[2]));
   return 0;
}