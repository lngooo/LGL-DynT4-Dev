/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A14_F42_O_A01_Unroll.c
 * Implementation Logic: Manually unrolling the loop by a factor of 2 to change CFG and Token sequence derived from A01.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int   JYB(unsigned   int Z,  unsigned int  zAM)   {
 unsigned int   zAk9   = Z  ^   zAM;
 int tpi   =   0;
 while   (zAk9 >   0)  {
 if (zAk9  & 1) tpi++;
  zAk9   >>= 1;
  if   (zAk9 ==  0)  break;
 if  (zAk9 &  1) tpi++;
  zAk9   >>=   1;
   }
   return  tpi;
}

int main(int argc,  char* argv[]) {
   if  (argc   < 3) return   0;
 unsigned   int   qLSt = (unsigned int)strtoul(argv[1], NULL,   10);
   unsigned int   ZNj  =   (unsigned   int)strtoul(argv[2],   NULL,  10);
 printf("%d",  JYB(qLSt,   ZNj));
   return 0;
}