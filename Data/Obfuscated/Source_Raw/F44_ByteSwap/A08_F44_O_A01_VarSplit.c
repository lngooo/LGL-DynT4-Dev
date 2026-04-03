/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A08_F44_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting obfuscation derived from A01, separating logic into multiple registers.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ogvb(uint32_t  OT)   {
   uint32_t  ly   =  0;
  uint32_t   wp  =   0;
  ly   |=   (OT &  0x000000FF)  <<   24;
   ly  |=  (OT &   0x0000FF00)  <<   8;
   wp   |=  (OT &  0x00FF0000)  >>  8;
  wp |=   (OT  &   0xFF000000) >> 24;
 return   (ly   |  wp);
}

int main(int argc,   char* argv[])  {
   if  (argc   < 2)   return  0;
   uint32_t  kK8  =   (uint32_t)strtoul(argv[1],  NULL, 10);
 printf("%u\n",  ogvb(kK8));
  return   0;
}