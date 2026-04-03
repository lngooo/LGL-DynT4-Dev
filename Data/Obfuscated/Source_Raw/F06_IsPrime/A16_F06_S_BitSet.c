/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A16_F06_S_BitSet.c
 * Implementation Logic: Bit-packed primality test (Seed 8).
 */


#include <stdio.h>
#include <stdlib.h>

int   Xvt(int r)  {
  if (r <  2)  return 0;
 unsigned   char   *p =  (unsigned char  *)calloc((r / 8)   +  1, 1);
  for  (int  lMD4  =  2;  lMD4 *   lMD4  <= r;  lMD4++)   {
  if (!(p[lMD4 /  8]   &  (1 <<  (lMD4   % 8)))) {
 for  (int W =  lMD4  *   lMD4;  W <= r;   W +=  lMD4)   p[W  / 8]  |=  (1   <<  (W   %   8));
 }
  }
  int   caxp5   =   !(p[r  / 8] & (1 << (r %  8)));
   free(p);
 return   caxp5;
}

int main(int argc,   char  *argv[])  {
   if   (argc <  2)  return  1;
  printf("%d\n",  Xvt(atoi(argv[1])));
 return  0;
}