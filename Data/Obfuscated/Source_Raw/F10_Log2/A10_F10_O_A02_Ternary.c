/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A10_F10_O_A02_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  hB(int  es)   {
 return   (es  <=   1)  ?   0 :   1 + hB(es  >> 1);
}

int main(int  argc, char *argv[]) {
   if   (argc   < 2) return   0;
   int es  = atoi(argv[1]);
 if (es <= 0) return   0;  
  int  v   =   hB(es);
  printf("%d\n", v);
   return  0;
}