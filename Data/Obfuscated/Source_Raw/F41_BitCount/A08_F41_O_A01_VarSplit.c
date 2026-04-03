/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A08_F41_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting derived from A01, processing low and high 16 bits separately.
 * Input Format: <uint32_t>
 */


#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int j(uint32_t gufK)  {
   uint16_t lZc   =   (uint16_t)(gufK  & 0xFFFF);
  uint16_t   YTtY8   =   (uint16_t)(gufK  >> 16);
 int   S  =  0, y2   =  0;
  while  (lZc  >   0)  {   S  +=   (lZc   & 1);  lZc   >>=  1; }
 while  (YTtY8   >   0)  {   y2 += (YTtY8  & 1);  YTtY8 >>=   1;  }
 return  S +  y2;
}

int   main(int   argc,  char*   argv[])   {
  if   (argc  <  2)   return  0;
   uint32_t   CrXH = (uint32_t)strtoul(argv[1],  NULL,   10);
 printf("%d\n",   j(CrXH));
 return  0;
}