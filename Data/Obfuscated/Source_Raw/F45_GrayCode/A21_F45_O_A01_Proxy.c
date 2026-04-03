/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A21_F45_O_A01_Proxy.c
 * Implementation Logic: Functional proxying and parameter wrapping derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned int  KM(unsigned   int  E,   unsigned   int  lxx) {
 return  E  ^ lxx;
}

unsigned  int bU(unsigned   int   Qbs)  {
   return   KM(Qbs,   Qbs >>   1);
}

int  main(int  argc, char*  argv[])  {
   if   (argc  < 2)   return   0;
  unsigned   int   Qbs =   (unsigned   int)strtoul(argv[1], NULL,   10);
 printf("%u",  bU(Qbs));
   return   0;
}