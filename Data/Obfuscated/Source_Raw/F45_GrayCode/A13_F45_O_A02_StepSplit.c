/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A13_F45_O_A02_StepSplit.c
 * Implementation Logic: Splitting loop into odd and even steps derived from A02.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int   N(unsigned int   pm5)   {
 unsigned int  J1   =  0;
   for   (int m  =   0; m  <  31; m +=   2)  {
  if  (((pm5   >>   m)  & 1) ^ ((pm5 >> (m +   1)) & 1))   J1 |=  (1U <<  m);
   if (((pm5  >> (m  +   1))  & 1) ^  ((pm5  >>   (m +  2))   &  1))  J1  |=   (1U <<  (m   +  1));
   }
  J1   |=  (pm5   &   0x80000000);
   return   J1;
}

int   main(int  argc, char* argv[]) {
   if  (argc  <  2) return   0;
  unsigned   int  pm5   = (unsigned int)strtoul(argv[1],  NULL,  10);
 printf("%u",   N(pm5));
  return  0;
}