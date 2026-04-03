/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A08_F45_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening using state machine derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned  int kg(unsigned   int   Dh)  {
   unsigned int   yBks;
  int  w   =  1;
   while (w !=   0) {
   switch  (w) {
   case  1:  yBks   =  Dh ^ (Dh   >> 1); w =   0;  break;
 }
  }
  return  yBks;
}

int  main(int argc,   char*   argv[]) {
  if   (argc <  2)   return 0;
  unsigned int Dh  = (unsigned  int)strtoul(argv[1], NULL,   10);
  printf("%u",   kg(Dh));
 return 0;
}