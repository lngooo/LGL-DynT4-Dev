/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A07_F45_S_Parity.c
 * Implementation Logic: Calculating G[i] = B[i] ^ B[i+1] via parity condition.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int   CDH(unsigned  int  J)   {
 unsigned int   Qn4   = 0;
   unsigned int Zcdz,   g;
   for  (int   CO6  =   0;   CO6 <   32;  CO6++) {
  Zcdz   =  (J   >> CO6)  &  1;
  g   = (J  >> (CO6   +  1))  & 1;
  if   (Zcdz   !=   g) Qn4 |=   (1U  << CO6);
 }
   return  Qn4;
}

int main(int argc,  char*  argv[])  {
 if  (argc <  2)  return   0;
 unsigned int  J =   (unsigned  int)strtoul(argv[1],   NULL,  10);
   printf("%u",  CDH(J));
   return  0;
}