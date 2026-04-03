/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A02_F42_S_BitCompare.c
 * Implementation Logic: Directly compares bits of both numbers at each position without initial XOR.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int M(unsigned  int yDbr3,   unsigned  int  y2) {
   int yziW = 0;
   for  (int IDUz7 = 0; IDUz7  <  32;   IDUz7++)  {
 if ((yDbr3 &   (1U   << IDUz7)) !=  (y2   &   (1U   <<   IDUz7))) {
 yziW++;
  }
   }
 return   yziW;
}

int   main(int  argc, char*   argv[])  {
   if  (argc < 3)   return 0;
 unsigned   int   Nr3   = (unsigned   int)strtoul(argv[1],   NULL,   10);
  unsigned int   TAM6   =   (unsigned  int)strtoul(argv[2], NULL, 10);
 printf("%d", M(Nr3,   TAM6));
   return   0;
}