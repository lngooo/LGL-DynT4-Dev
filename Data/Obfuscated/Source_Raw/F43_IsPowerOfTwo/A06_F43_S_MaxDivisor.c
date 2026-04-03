/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A06_F43_S_MaxDivisor.c
 * Implementation Logic: For 32-bit unsigned, 2^31 (2147483648) is the largest power of 2.
 * Any power of two must divide it evenly.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

int   Bpj(unsigned  int  U)   {
 unsigned  int qmpZ = 2147483648U;
   return   (U  >   0   &&  qmpZ  %  U   ==  0);
}

int   main(int argc,   char*   argv[])   {
   if  (argc   < 2) return   0;
 unsigned  int   U  =  (unsigned   int)strtoul(argv[1], NULL, 10);
 printf("%d",  Bpj(U));
 return   0;
}