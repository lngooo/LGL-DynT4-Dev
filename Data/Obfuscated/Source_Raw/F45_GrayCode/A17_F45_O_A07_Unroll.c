/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A17_F45_O_A07_Unroll.c
 * Implementation Logic: Loop unrolling with combined bit-checks derived from A07.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned  int KcQ(unsigned  int   Z) {
   unsigned   int  FyJN =  0;
   for (int NwsO3 =   0;  NwsO3 < 32;   NwsO3 += 4)   {
   if(((Z>>NwsO3)&1)   !=   ((Z>>(NwsO3+1))&1))  FyJN |= (1U<<NwsO3);
   if(((Z>>(NwsO3+1))&1) !=  ((Z>>(NwsO3+2))&1))  FyJN  |=   (1U<<(NwsO3+1));
 if(((Z>>(NwsO3+2))&1)  != ((Z>>(NwsO3+3))&1))  FyJN |= (1U<<(NwsO3+2));
 if(((Z>>(NwsO3+3))&1) !=   ((Z>>(NwsO3+4))&1)) FyJN |=  (1U<<(NwsO3+3));
 }
   return   FyJN;
}

int  main(int   argc,   char*  argv[]) {
 if (argc   < 2)  return   0;
  unsigned int   Z   = (unsigned int)strtoul(argv[1],  NULL,   10);
 printf("%u", KcQ(Z));
 return  0;
}