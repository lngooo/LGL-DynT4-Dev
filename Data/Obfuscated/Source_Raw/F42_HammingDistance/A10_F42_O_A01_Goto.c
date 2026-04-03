/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A10_F42_O_A01_Goto.c
 * Implementation Logic: Loop reconstruction using goto labels to disrupt structured control flow derived from A01.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int   Bh8(unsigned int  kyg8, unsigned  int   GH)   {
   unsigned int UKq9 =  kyg8   ^   GH;
   int  iZaA  =   0;
us:
   if  (UKq9   ==   0)   goto  MG;
 if (UKq9  &  1)   goto  KuN;
UkIf2:
 UKq9  >>=   1;
 goto us;
KuN:
  iZaA++;
 goto  UkIf2;
MG:
   return  iZaA;
}

int   main(int  argc,  char* argv[])   {
 if (argc   < 3)   return 0;
   unsigned int  C4  =  (unsigned   int)strtoul(argv[1],   NULL,   10);
   unsigned int  g   =   (unsigned   int)strtoul(argv[2],   NULL, 10);
  printf("%d", Bh8(C4,  g));
  return 0;
}