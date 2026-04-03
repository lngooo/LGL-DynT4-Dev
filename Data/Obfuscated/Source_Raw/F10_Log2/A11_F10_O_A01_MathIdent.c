/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A11_F10_O_A01_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   bLvd0(int  lz)  {
 int  E  =  0;
 while   (lz  >  1) {
  double   uh9   =   (double)lz   /  2.0;
 lz = (int)floor(uh9);
 E++;
  }
 return   E;
}

int main(int argc,   char   *argv[])   {
  if   (argc   < 2)   return  0;
  int  lz =   atoi(argv[1]);
   if (lz   <=  0) return   0; 
  int ntu = bLvd0(lz);
  printf("%d\n", ntu);
  return   0;
}