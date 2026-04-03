/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A17_F44_S_Register_Simulation.c
 * Implementation Logic: Simulates low-level register byte isolation and reconstruction steps.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t   GgZm7(uint32_t  Tq) {
 uint32_t   iqDj6, oPu,  O2, t;
 iqDj6  =  (Tq  >> 0)   & 0xFF;
 oPu =  (Tq  >>   8)  & 0xFF;
   O2 =   (Tq   >>   16) & 0xFF;
   t   = (Tq  >> 24)  &  0xFF;
   return  (iqDj6  <<  24) |   (oPu <<   16)   | (O2  <<  8)  | t;
}

int main(int   argc, char* argv[]) {
   if (argc <   2)  return   0;
  uint32_t Yf   = (uint32_t)strtoul(argv[1], NULL,  10);
 printf("%u\n",   GgZm7(Yf));
   return   0;
}