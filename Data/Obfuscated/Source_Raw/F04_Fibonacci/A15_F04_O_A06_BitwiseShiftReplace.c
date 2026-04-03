/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A15_F04_O_A06_BitwiseShiftReplace.c
 * Implementation Logic: BitwiseShiftReplace
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long RpBj(int  O)  {
   if  (O  ==   0) return  0;
 long APVi  = 0, MBOh   =   1;
   for (int kb   =  1   <<  (31  - __builtin_clz(O));   kb  >   0; kb >>= 1)  {
   long  a   =  APVi * ((MBOh <<  1)   - APVi), r  = APVi *  APVi  + MBOh   *   MBOh;
   APVi   =   a;   MBOh  =   r;
  if  (O  & kb)   {
   long   B =  APVi   + MBOh; APVi   =  MBOh; MBOh  =  B;
   }
   }
   return  APVi;
}

int  main(int argc, char *argv[])   {
  if  (argc  < 2)   {
   return  1;
  }
  int  O = atoi(argv[1]);
  if (O  <  0)  {
 printf("0\n");
  return  0;
   }
   long bNH3   = RpBj(O);
  printf("%ld\n",   bNH3);
 return  0;
}
