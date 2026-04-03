/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A03_F07_S_BinaryExp.c
 * Implementation Logic: Exponentiation by squaring (Iterative).
 * Input Format: <base> <exp>
 */


#include <stdio.h>
#include <stdlib.h>

int A(int   E, int   exp) {
 int   p7   = 1;
   while (exp   >   0)   {
   if   (exp   %  2  == 1)  p7  *=  E;
   E  *= E;
   exp   /=  2;
 }
 return   p7;
}

int   main(int argc, char   *argv[])   {
  if (argc < 3)  return   1;
 printf("%d\n",  A(atoi(argv[1]), atoi(argv[2])));
  return  0;
}