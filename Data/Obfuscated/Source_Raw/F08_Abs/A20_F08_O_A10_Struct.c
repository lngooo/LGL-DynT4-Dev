/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A20_F08_O_A10_Struct.c
 * Implementation Logic: Wrapping input and sign in a struct.
 */


#include <stdio.h>
#include <stdlib.h>

struct rOEo   { int kaml;   int  hy1;   };

int h(int  IrAg)   {
  struct  rOEo   OKsR;
  OKsR.kaml   = IrAg;
   OKsR.hy1  =   (IrAg  < 0);
 if  (OKsR.hy1)  return   -OKsR.kaml;
  return   OKsR.kaml;
}

int  main(int argc,   char   *argv[]) {
  if  (argc <   2) return 1;
  printf("%d\n",  h(atoi(argv[1])));
   return 0;
}