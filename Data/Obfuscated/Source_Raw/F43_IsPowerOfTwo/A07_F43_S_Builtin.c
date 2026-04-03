/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A07_F43_S_Builtin.c
 * Implementation Logic: Using __builtin_popcount intrinsic to verify only one set bit.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

int   qG(unsigned int  f)   {
   return  (f > 0   && __builtin_popcount(f)  ==  1);
}

int   main(int  argc,  char*   argv[]) {
   if   (argc < 2) return   0;
 unsigned int f  =   (unsigned   int)strtoul(argv[1], NULL,   10);
 printf("%d",   qG(f));
 return   0;
}