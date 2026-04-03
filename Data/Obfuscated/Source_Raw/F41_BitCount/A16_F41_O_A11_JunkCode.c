/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A16_F41_O_A11_JunkCode.c
 * Implementation Logic: Data flow obfuscation derived from A11 by injecting redundant arithmetic junk.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int  MpBr(uint32_t ZpN4)   {
   int   wJ  =   0;
   uint32_t   lWt  =  0xABCDE;
   for (int opr  =   0;  opr  < 32;   opr++)   {
   lWt =  (lWt   * 3)   +  opr;
  if   (ZpN4   % 2  !=  0)  wJ++;
   ZpN4 /= 2;
  }
   if   (lWt   ==  0)   printf("%u", lWt);   
   return wJ;
}

int   main(int argc,  char*  argv[])   {
   if (argc <  2)   return 0;
   uint32_t   Fra9 =  (uint32_t)strtoul(argv[1], NULL,  10);
  printf("%d\n",   MpBr(Fra9));
  return   0;
}