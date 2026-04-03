/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A18_F06_O_A01_DoubleLoop.c
 * Implementation Logic: Trial division with nested loops and redundant counters.
 */


#include <stdio.h>
#include <stdlib.h>

int ktU9(int c) {
 if  (c   <   2)  return   0;
  int  kx8  =   0;
   for (int  pyN =  1;  pyN   <=   c; pyN++) {
   if  (c   % pyN  == 0)   kx8++;
 if   (kx8 >   2)  return  0;
   }
   return   kx8 == 2;
}

int  main(int   argc,  char   *argv[])  {
  if   (argc  < 2) return 1;
 printf("%d\n",   ktU9(atoi(argv[1])));
 return   0;
}