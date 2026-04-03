/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A07_F44_S_Recursion.c
 * Implementation Logic: Recursive extraction and shifting of bytes to rebuild the integer in reverse order.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t pv3(uint32_t   ed,   int bTdT)   {
   if   (bTdT ==  0)   return  0;
 return ((ed  &   0xFF)  <<  (8  *  (bTdT - 1))) |   pv3(ed   >> 8, bTdT  -  1);
}

uint32_t  Ut(uint32_t ed) {
 return pv3(ed, 4);
}

int main(int  argc,  char* argv[]) {
   if  (argc  < 2)   return  0;
   uint32_t   L  =   (uint32_t)strtoul(argv[1], NULL, 10);
   printf("%u\n",   Ut(L));
  return  0;
}