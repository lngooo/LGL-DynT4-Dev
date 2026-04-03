/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A02_F45_S_Loop.c
 * Implementation Logic: Constructing Gray code bit-by-bit by checking adjacent binary bits.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int   i(unsigned int   oGw)   {
  unsigned   int  RGG  =  0;
   for  (int rUqO  =   0;  rUqO <   31; rUqO++) {
   if  (((oGw >>  rUqO)   & 1)   ^   ((oGw >> (rUqO   +   1))   &  1))  {
 RGG   |=  (1U  << rUqO);
   }
   }
   RGG   |=   (oGw   & 0x80000000); //  Preserve MSB
  return  RGG;
}

int main(int  argc, char*   argv[])   {
  if (argc  < 2)  return   0;
 unsigned  int   oGw =  (unsigned   int)strtoul(argv[1],  NULL, 10);
   printf("%u",   i(oGw));
  return   0;
}