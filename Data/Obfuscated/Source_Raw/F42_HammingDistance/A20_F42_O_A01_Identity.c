/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A20_F42_O_A01_Identity.c
 * Implementation Logic: Replacing XOR with addition/multiplication identity derived from A01.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int WYr(unsigned int  KpK5,   unsigned int  vEa) {
  unsigned   int  SomH  = (KpK5   +  vEa) - 2  * (KpK5  & vEa);   //  Math  identity   for XOR
   int  pE   = 0;
  while  (SomH)   {
   pE +=  (SomH   % 2);
   SomH  /=  2;
 }
 return   pE;
}

int   main(int   argc,  char*  argv[]) {
  if  (argc   < 3)   return  0;
  unsigned  int   Hik9  = (unsigned  int)strtoul(argv[1], NULL, 10);
   unsigned   int cSiH1  =  (unsigned   int)strtoul(argv[2],   NULL,   10);
  printf("%d",   WYr(Hik9,  cSiH1));
 return 0;
}