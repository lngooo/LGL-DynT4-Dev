/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A15_F08_O_A14_BitAdder.c
 * Implementation Logic: Bitwise negation and bitwise addition.
 */


#include <stdio.h>
#include <stdlib.h>

int  nczl(int   q, int BO9)   {
  while   (BO9 !=  0) {
  int  gCX6  = q   &   BO9;
 q = q ^   BO9;
 BO9   =  gCX6  << 1;
 }
  return  q;
}

int O(int NCI)   {
   if (NCI >=  0)   return NCI;
  return   nczl(~NCI,  1);
}

int main(int   argc,  char *argv[]) {
 if   (argc   <   2)   return  1;
 printf("%d\n", O(atoi(argv[1])));
   return   0;
}