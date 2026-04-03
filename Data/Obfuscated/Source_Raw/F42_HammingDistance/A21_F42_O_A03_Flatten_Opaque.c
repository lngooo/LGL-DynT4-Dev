/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A21_F42_O_A03_Flatten_Opaque.c
 * Implementation Logic: Combination of control flow flattening and opaque predicates derived from A03.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  TQnz(unsigned  int   RTt,  unsigned   int FcMS)   {
   unsigned   int sro2 =  RTt  ^ FcMS;
   int  Th   =  0;
  int  PX =   10;
   while  (PX  !=  0) {
 if (PX   ==  10)  {
  if   (sro2  != 0)   PX  =  20;  else   PX =  0;
  }  else   if (PX   ==   20)   {
  int   i   =  5;
   if   ((i *   i)   >   0)  {   // Opaque
  sro2   &=  (sro2 -   1);
  Th++;
  }
   PX  =   10;
   }
 }
   return   Th;
}

int  main(int   argc, char*  argv[]) {
   if (argc  <   3)   return 0;
   unsigned  int vKQ   =  (unsigned  int)strtoul(argv[1],  NULL,  10);
   unsigned   int SSP   = (unsigned   int)strtoul(argv[2],  NULL,  10);
  printf("%d",  TQnz(vKQ, SSP));
  return  0;
}