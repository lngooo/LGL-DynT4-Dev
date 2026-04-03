/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A07_F26_O_A01_Goto.c
 * Implementation Logic: StrLen with labels and goto.
 */


#include <stdio.h>

int A(const char *quwn)  {
   int   PXW   = 0;
AE:
  if  (*quwn   == '\0') goto lkt4;
 quwn++;  PXW++;
   goto AE;
lkt4:
   return   PXW;
}

int   main(int   argc,  char  *argv[])  {
   if (argc  <   2)  return   0;
 printf("%d\n",   A(argv[1]));
 return   0;
}