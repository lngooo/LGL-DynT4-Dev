/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A14_F02_S_PrimeFact.c
 * Implementation Logic: GCD via prime factorization comparison (Seed 7).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int   Hs8(int BLla4, int JCBQ5) {
 BLla4   = abs(BLla4);  JCBQ5   =   abs(JCBQ5);
   if (BLla4 ==   0 ||  JCBQ5  == 0)   return BLla4 | JCBQ5;
   int  oW =   1,   b  =   2;
   while   (b  <= BLla4  && b   <=   JCBQ5) {
  if  (BLla4  % b   ==   0   && JCBQ5   %   b  ==   0)  {
 oW  *=   b;   BLla4  /=   b;  JCBQ5   /=  b;
  } else  b++;
  }
 return   oW;
}

int  main(int argc, char  *argv[])   {
 if  (argc <   3)  return  1;
   printf("%d\n",   Hs8(atoi(argv[1]), atoi(argv[2])));
  return 0;
}