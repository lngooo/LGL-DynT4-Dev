/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A20_F44_O_A19_PointerIndirection.c
 * Implementation Logic: Multi-level pointer indirection obfuscation derived from A19.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t  kYRR(uint32_t L)   {
 uint32_t   qm;
 uint8_t  *r = (uint8_t   *)&L;
   uint8_t  *TW = (uint8_t   *)&qm;
 uint8_t  **kvPa =   &r;
 uint8_t **XKe  =   &TW;
  (*XKe)[0] =  (*kvPa)[3];
   (*XKe)[1]   =  (*kvPa)[2];
   (*XKe)[2]   =  (*kvPa)[1];
  (*XKe)[3]  =  (*kvPa)[0];
  return   qm;
}

int   main(int  argc,   char* argv[])  {
 if (argc <  2)   return 0;
 uint32_t E4   =  (uint32_t)strtoul(argv[1],  NULL,  10);
  printf("%u\n",   kYRR(E4));
   return 0;
}