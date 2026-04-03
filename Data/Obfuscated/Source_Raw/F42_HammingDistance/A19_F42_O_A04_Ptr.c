/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A19_F42_O_A04_Ptr.c
 * Implementation Logic: Using pointer indirection to retrieve the result of builtin popcount derived from A04.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int IkoA2(unsigned int   XEsp, unsigned   int   d) {
  unsigned   int   VU1   =  XEsp ^ d;
  int UG3  =  __builtin_popcount(VU1);
 int   *dD9 =  &UG3;
 return *dD9;
}

int main(int argc,   char*   argv[])  {
   if (argc   < 3)   return 0;
 unsigned int   EGh = (unsigned  int)strtoul(argv[1], NULL, 10);
   unsigned   int   ckP1  =   (unsigned int)strtoul(argv[2],   NULL,   10);
   printf("%d", IkoA2(EGh,  ckP1));
 return 0;
}