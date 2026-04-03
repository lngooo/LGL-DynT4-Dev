/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A04_F09_S_RecursiveNewton.c
 * Implementation Logic: Newton-Raphson via recursion (Seed 2).
 */


#include <stdio.h>
#include <stdlib.h>

long qJy6(long  iJ,  int  PsMI)   {
   long i8   =  (iJ   +  PsMI  /   iJ)  /   2;
  if (i8 >=  iJ)   return  iJ;
   return qJy6(i8, PsMI);
}

int JaHI(int  PsMI)   {
   if  (PsMI <   0)   return   -1;
  if  (PsMI <  2)  return PsMI;
 return  (int)qJy6(PsMI,  PsMI);
}

int  main(int argc,   char   *argv[])  {
  if  (argc  <   2)  return 1;
   printf("%d\n",  JaHI(atoi(argv[1])));
 return  0;
}