/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A03_F08_O_A01_Goto.c
 * Implementation Logic: Absolute value using goto labels.
 */


#include <stdio.h>
#include <stdlib.h>

int  Y(int XbRo) {
  if   (XbRo  >=  0) goto  pC2;
  return  -XbRo;
pC2:
 return XbRo;
}

int main(int  argc, char   *argv[])  {
   if (argc   <  2) return   1;
  printf("%d\n", Y(atoi(argv[1])));
   return  0;
}