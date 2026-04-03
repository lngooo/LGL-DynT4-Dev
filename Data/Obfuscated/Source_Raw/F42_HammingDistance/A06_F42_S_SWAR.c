/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A06_F42_S_SWAR.c
 * Implementation Logic: SIMD Within A Register (SWAR) parallel bit counting on the XOR result.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  K(unsigned int  VOMy,   unsigned  int  Fv)   {
   unsigned int   EWoR4  = VOMy  ^ Fv;
 EWoR4 =  EWoR4  - ((EWoR4   >> 1)  &  0x55555555);
   EWoR4 =   (EWoR4  &  0x33333333)  + ((EWoR4 >> 2) &   0x33333333);
   return (((EWoR4  + (EWoR4  >>   4))  &  0x0F0F0F0F) *  0x01010101)   >>  24;
}

int  main(int argc,   char* argv[])  {
   if  (argc   < 3)  return   0;
  unsigned  int   nxLA9  =   (unsigned  int)strtoul(argv[1], NULL,   10);
 unsigned  int  LSY   =   (unsigned  int)strtoul(argv[2],  NULL, 10);
  printf("%d",  K(nxLA9,   LSY));
  return 0;
}