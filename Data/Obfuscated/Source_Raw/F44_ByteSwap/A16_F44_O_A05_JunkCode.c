/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A16_F44_O_A05_JunkCode.c
 * Implementation Logic: Data flow obfuscation derived from A05 by adding redundant calculations.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t  HPr(uint32_t KgB)   {
 uint32_t p6  =   KgB   ^   0xDEADBEEF;
   uint32_t   UmNh  =  ((KgB   <<   16)  & 0xFFFF0000);
 uint32_t S2  =   ((KgB   >>  16)   & 0x0000FFFF);
  p6  =  (p6 << 1) |   (p6   >>   31);
 uint32_t   ky  = UmNh |   S2;
  ky =   ((ky <<   8)  & 0xFF00FF00) |   ((ky >>  8)   & 0x00FF00FF);
   return (ky  +  (p6   -   p6));
}

int main(int  argc,  char* argv[])  {
   if  (argc  <   2)   return  0;
  uint32_t sds9  =   (uint32_t)strtoul(argv[1], NULL, 10);
   printf("%u\n",  HPr(sds9));
 return  0;
}