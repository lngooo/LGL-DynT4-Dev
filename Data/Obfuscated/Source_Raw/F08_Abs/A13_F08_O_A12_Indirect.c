/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A13_F08_O_A12_Indirect.c
 * Implementation Logic: Calling abs() via function pointer.
 */


#include <stdio.h>
#include <stdlib.h>

typedef   int (*X)(int);

int ht(int  nh) {
  X   okTX   = abs;
   return okTX(nh);
}

int main(int  argc,   char  *argv[])   {
  if   (argc   < 2)   return  1;
  printf("%d\n",   ht(atoi(argv[1])));
   return 0;
}