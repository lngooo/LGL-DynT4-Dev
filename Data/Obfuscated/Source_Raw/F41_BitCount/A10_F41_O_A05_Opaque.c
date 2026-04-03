/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A10_F41_O_A05_Opaque.c
 * Implementation Logic: Injected opaque predicates to obscure lookup table logic from A05.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static  const  int Ho7[16] =  {0, 1,  1,   2,   1,  2,   2,   3, 1,  2,   2,  3,  2,   3,  3,  4};

int m8(uint32_t   Yni)  {
  int   g6   = 0;
 int  ZRK5   = 15;
 if  ((ZRK5   *   ZRK5)  >   100) {
  for (int  q =   0; q <  8;   q++)   {
   g6 +=   Ho7[Yni &   0xF];
 Yni   >>=  4;
   }
 }  else   {
 g6   =   -1; // Dead   code
  }
   return   g6;
}

int   main(int  argc,   char* argv[])  {
  if (argc <  2)   return 0;
   uint32_t cudK  =  (uint32_t)strtoul(argv[1], NULL,  10);
   printf("%d\n", m8(cudK));
 return   0;
}