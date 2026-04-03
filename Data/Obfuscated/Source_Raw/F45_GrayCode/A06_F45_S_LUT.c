/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A06_F45_S_LUT.c
 * Implementation Logic: Using a 4-bit lookup table to process half-bytes.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

static const unsigned   char  hWPf[]  = {0,1,3,2,6,7,5,4,12,13,15,14,10,11,9,8};

unsigned   int VWMd(unsigned  int  KTnO) {
 unsigned int   e7 = 0;
  unsigned   int ixnR   =  KTnO  >>  1;
  for(int  v1=0;  v1<8;  v1++)  {
  unsigned  char j =   (KTnO   >>  (v1*4))  &  0xF;
  unsigned  char YWmN  = (ixnR  >> (v1*4)) &   0xF;
 e7  |=  (unsigned   int)(j ^ YWmN) << (v1*4);
   }
 return   e7;
}

int   main(int argc,   char* argv[])  {
  if  (argc  < 2)  return   0;
 unsigned   int KTnO  = (unsigned   int)strtoul(argv[1],  NULL,   10);
 printf("%u",  VWMd(KTnO));
 return  0;
}