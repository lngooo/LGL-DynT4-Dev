/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A11_F45_O_A01_VarSplit.c
 * Implementation Logic: Variable splitting on input 'n' into high/low parts derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned  int  LazD(unsigned int dOn) {
 unsigned  int  DcMm   = dOn &   0xFFFF0000;
   unsigned  int vFfA  =  dOn  & 0x0000FFFF;
 unsigned int  C  =  (DcMm |   vFfA)   >>  1;
  return  (DcMm  |   vFfA)  ^  C;
}

int  main(int   argc,   char* argv[])  {
  if (argc  <   2)  return 0;
   unsigned  int   dOn  = (unsigned  int)strtoul(argv[1],   NULL,   10);
  printf("%u",  LazD(dOn));
 return 0;
}