/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A15_F41_S_Unrolled_8.c
 * Implementation Logic: Manually unrolled loop checking 8 bits at a time to reduce branch overhead.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int  oQj9(uint32_t Az)   {
   int Oky0  =   0;
  while(Az)   {
   Oky0  +=   (Az  &   1); Oky0   +=  ((Az  >>   1)  &  1);
  Oky0   +=   ((Az  >>  2)   &   1);   Oky0   +=  ((Az >> 3) & 1);
   Oky0   +=  ((Az >> 4)  & 1); Oky0  +=   ((Az   >> 5)  &   1);
 Oky0 +=   ((Az >>   6)  &   1);  Oky0  +=   ((Az  >>   7)  &  1);
   Az  >>=   8;
   }
  return  Oky0;
}

int   main(int  argc, char* argv[])   {
 if  (argc  <   2) return  0;
   uint32_t  SBK7 = (uint32_t)strtoul(argv[1],   NULL, 10);
   printf("%d\n",  oQj9(SBK7));
 return 0;
}