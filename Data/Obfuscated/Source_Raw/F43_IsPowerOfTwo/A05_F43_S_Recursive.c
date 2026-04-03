/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A05_F43_S_Recursive.c
 * Implementation Logic: Recursive approach. Check parity and divide until base case.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

int  J(unsigned int   qDux) {
 if  (qDux ==  0)  return   0;
   if   (qDux ==  1)   return 1;
   if   (qDux   %  2   != 0)  return  0;
 return  J(qDux /  2);
}

int   main(int argc,   char*   argv[])  {
 if   (argc <  2) return   0;
   unsigned  int  qDux = (unsigned int)strtoul(argv[1],   NULL,  10);
  printf("%d",  J(qDux));
  return 0;
}