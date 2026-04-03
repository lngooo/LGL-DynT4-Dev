/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A21_F41_S_Array_Map.c
 * Implementation Logic: Iterating through an array representation of bits to sum set positions.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int   bM(uint32_t  H)   {
   int  WSwJ7[32];
   int  ZpUs  =   0;
  for(int  JhZ=0;   JhZ<32; JhZ++) {
   WSwJ7[JhZ] =  (H  >>   JhZ)   & 1;
 }
 for(int   k=0; k<32; k++)  {
   ZpUs +=   WSwJ7[k];
 }
 return ZpUs;
}

int  main(int  argc,   char* argv[])  {
  if   (argc < 2)   return 0;
  uint32_t   bl =   (uint32_t)strtoul(argv[1],   NULL, 10);
  printf("%d\n",   bM(bl));
 return  0;
}