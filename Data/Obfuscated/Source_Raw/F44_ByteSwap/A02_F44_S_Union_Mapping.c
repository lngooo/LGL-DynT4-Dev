/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A02_F44_S_Union_Mapping.c
 * Implementation Logic: Utilizes a union to map a 32-bit integer to a 4-byte array for direct memory swapping.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t   pT(uint32_t QQnl)   {
 union {
 uint32_t plmQ4;
 uint8_t   GiUD[4];
  }   xc4,  ZWRR3;
   xc4.plmQ4  =  QQnl;
  ZWRR3.GiUD[0] =  xc4.GiUD[3];
   ZWRR3.GiUD[1]  =   xc4.GiUD[2];
   ZWRR3.GiUD[2]  =  xc4.GiUD[1];
   ZWRR3.GiUD[3] =   xc4.GiUD[0];
  return ZWRR3.plmQ4;
}

int   main(int argc, char*  argv[])  {
  if (argc  <   2)   return   0;
 uint32_t plmQ4 = (uint32_t)strtoul(argv[1],  NULL,  10);
  printf("%u\n", pT(plmQ4));
 return   0;
}