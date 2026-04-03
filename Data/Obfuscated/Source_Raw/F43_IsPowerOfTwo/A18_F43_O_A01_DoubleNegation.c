/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A18_F43_O_A01_DoubleNegation.c
 * Implementation Logic: Logical obfuscation using double negations derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

int   zm(unsigned  int   fM)   {
  if (!fM) return   0;
  return  !!((fM   &  (fM  -   1)) ==   0);
}

int   main(int   argc, char* argv[])   {
 if   (argc <  2)   return 0;
   unsigned  int   fM   =  (unsigned   int)strtoul(argv[1], NULL,  10);
   printf("%d",  zm(fM));
   return 0;
}