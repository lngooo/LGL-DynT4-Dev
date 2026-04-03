/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A21_F43_O_A01_LongLongPromote.c
 * Implementation Logic: Data width expansion to long long to change token signature derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

int   RZH(unsigned int EY) {
   unsigned   long   long J4   =  EY;
   if (J4 ==   0)  return   0;
   unsigned   long  long eiC  =   J4   - 1;
  return (J4 &   eiC)   ==  0;
}

int  main(int  argc, char*  argv[])  {
 if (argc <   2)   return   0;
   unsigned int EY   =   (unsigned   int)strtoul(argv[1],   NULL,  10);
   printf("%d",  RZH(EY));
   return   0;
}