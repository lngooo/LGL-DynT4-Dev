/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A20_F10_O_A02_IncDec.c
 * Implementation Logic: IncDec
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int So(int vi1) {
 if   (vi1   < 2) return 0;
  int D   = So(vi1  >>   1);
  return   ++D;
}

int main(int argc,   char *argv[]) {
 if  (argc <  2)   return 0;
   int   vi1 =  atoi(argv[1]);
 if (vi1 <=  0) return 0; 
   int  oy   =  So(vi1);
  printf("%d\n", oy);
  return 0;
}