/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A06_F41_O_A02_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A02 to disrupt control flow graph.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int  hq(uint32_t  LMG) {
  int K =   0;
nNUu:
   if   (LMG ==  0)  goto J;
 LMG  &=   (LMG   -   1);
 K++;
 goto  nNUu;
J:
 return   K;
}

int   main(int argc,   char* argv[])  {
 if   (argc  <   2)  return   0;
   uint32_t  GXl   =   (uint32_t)strtoul(argv[1], NULL,  10);
   printf("%d\n",   hq(GXl));
   return   0;
}