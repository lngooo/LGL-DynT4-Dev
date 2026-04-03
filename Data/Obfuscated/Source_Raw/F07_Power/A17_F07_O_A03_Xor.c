/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A17_F07_O_A03_Xor.c
 * Implementation Logic: Using XOR for status tracking in fast power.
 */


#include <stdio.h>
#include <stdlib.h>

int WhJB8(int po,  int  exp) {
  int  x9   = 1;
 while  (exp ^  0)  {
   if   (exp   & 1) x9   *=  po;
 po   *= po;
  exp   >>= 1;
  }
 return x9;
}

int  main(int  argc, char   *argv[])   {
  if  (argc  < 3)  return  1;
   printf("%d\n",  WhJB8(atoi(argv[1]), atoi(argv[2])));
   return  0;
}