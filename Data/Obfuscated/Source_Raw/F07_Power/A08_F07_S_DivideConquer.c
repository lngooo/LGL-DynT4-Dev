/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A08_F07_S_DivideConquer.c
 * Implementation Logic: Recursive binary exponentiation.
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int H(int fMGC,  int   exp)  {
 if (exp  == 0)  return  1;
  int   I   =   H(fMGC,  exp /  2);
 if   (exp  %  2   ==  0)  return  I   * I;
 return  fMGC * I * I;
}

int  main(int   argc,   char   *argv[])  {
  if (argc   <  3) return   1;
  printf("%d\n", H(atoi(argv[1]),   atoi(argv[2])));
   return  0;
}