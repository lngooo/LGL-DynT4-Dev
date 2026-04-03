/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A14_F44_O_A01_DoubleWidth.c
 * Implementation Logic: Instruction replacement using uint64_t for intermediate storage to mask logic.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t rs(uint32_t   TKoW9)   {
   uint64_t QU =  TKoW9;
  uint64_t  qci = 0;
   qci   |=   (QU   &   0xFF)   << 24;
   qci  |= (QU   & 0xFF00) << 8;
   qci |=   (QU   &  0xFF0000)  >> 8;
  qci  |=   (QU &  0xFF000000)  >>   24;
   return (uint32_t)qci;
}

int   main(int   argc,   char*   argv[])  {
   if   (argc   <   2)  return   0;
   uint32_t   xaz   =   (uint32_t)strtoul(argv[1], NULL,   10);
 printf("%u\n",   rs(xaz));
   return   0;
}