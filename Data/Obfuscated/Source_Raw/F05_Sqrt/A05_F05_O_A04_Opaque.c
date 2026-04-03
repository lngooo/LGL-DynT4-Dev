/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A05_F05_O_A04_Opaque.c
 * Implementation Logic: Binary search with opaque predicates to confuse static analysis.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int bN(int  F)  {
  if   (F  < 0)  return  -1;
   long   DTGy =   0, t   = F, R0   = 0;
   while  (DTGy  <=   t)  {
  long   qT2   =   DTGy  + (t   -   DTGy)  / 2;
 if (qT2   *  qT2  <=  F)  {
  R0 = qT2;
 if ((qT2   * qT2) >=   0)   DTGy   =   qT2   +   1;   //   Opaque predicate
  }  else {
 t = qT2  -  1;
  }
   }
  return (int)R0;
}

int  main(int   argc,   char  *argv[]) {
   if  (argc <   2) return 1;
 printf("%d\n",   bN(atoi(argv[1])));
 return   0;
}