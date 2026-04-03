/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A04_F44_O_A01_Flattening.c
 * Implementation Logic: Control-flow flattening variant of A01 using a state machine and switch-case.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t  fO(uint32_t ZvY)  {
   uint32_t  mOAm =   0;
   int   tKs   =   1;
  while  (tKs   !=  0)   {
  switch (tKs)  {
  case 1:  mOAm   |= (ZvY   &  0x000000FF)  <<   24; tKs =   2; break;
 case 2:   mOAm |=   (ZvY & 0x0000FF00) <<   8;   tKs   = 3; break;
  case   3:  mOAm   |= (ZvY  &  0x00FF0000)   >> 8; tKs =  4; break;
 case   4:   mOAm |= (ZvY   &   0xFF000000) >> 24; tKs   =  0; break;
   }
  }
  return mOAm;
}

int   main(int argc, char*   argv[])   {
 if (argc  < 2)   return   0;
 uint32_t X   =   (uint32_t)strtoul(argv[1], NULL,   10);
   printf("%u\n",  fO(X));
  return   0;
}