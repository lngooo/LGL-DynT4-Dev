/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A11_F44_S_BitField.c
 * Implementation Logic: Using bit-field structures to explicitly define byte boundaries for swapping.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

struct Wsy2  {
 uint32_t   dhHV6  :   8;
   uint32_t sro   : 8;
  uint32_t   iehq9 :   8;
  uint32_t   fxU0   :   8;
};

uint32_t   oJ(uint32_t   kF)  {
  struct  Wsy2   *CwQ  =   (struct Wsy2  *)&kF;
 uint32_t   zv;
  struct Wsy2  *Bo   =   (struct  Wsy2 *)&zv;
  Bo->dhHV6   =   CwQ->fxU0;
 Bo->sro = CwQ->iehq9;
  Bo->iehq9   = CwQ->sro;
 Bo->fxU0  =  CwQ->dhHV6;
   return   zv;
}

int main(int  argc, char*  argv[]) {
 if  (argc   <   2)   return  0;
 uint32_t  Hq  =   (uint32_t)strtoul(argv[1],   NULL,   10);
 printf("%u\n",  oJ(Hq));
 return   0;
}