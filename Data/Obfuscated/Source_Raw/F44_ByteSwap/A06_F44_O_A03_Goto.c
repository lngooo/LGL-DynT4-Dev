/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A06_F44_O_A03_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A03 to disrupt CFG structure.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t Uve2(uint32_t xNh3) {
   uint32_t   sB7;
 uint8_t   *fgMT5   =  (uint8_t   *)&xNh3;
   uint8_t  *HW1  =  (uint8_t  *)&sB7;
  int P7   = 0;
ZvgF:
  if (P7  >= 4)   goto  WW;
 HW1[P7]   =   fgMT5[3   -   P7];
 P7++;
 goto  ZvgF;
WW:
   return   sB7;
}

int   main(int argc, char*  argv[])   {
   if (argc  <   2) return 0;
  uint32_t   AR8   =   (uint32_t)strtoul(argv[1],  NULL, 10);
   printf("%u\n",  Uve2(AR8));
   return 0;
}