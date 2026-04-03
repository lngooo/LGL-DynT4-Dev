/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A09_F45_O_A02_Opaque.c
 * Implementation Logic: Opaque predicates and fake control flow derived from A02.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned   int   sQ(unsigned  int   PWho)  {
  unsigned  int MG = 0;
   int YdzW  =  10;
  for   (int  Bw  = 0;   Bw < 31;  Bw++)   {
 if   ((YdzW  *  YdzW) >= 100)  { //  Opaque:   always true
   if   (((PWho   >> Bw)   & 1) ^  ((PWho >>  (Bw   +  1)) &  1)) MG   |=   (1U <<  Bw);
 } else {  PWho++;  }   //   Dead   code
 }
 MG   |=   (PWho &  0x80000000);
   return MG;
}

int  main(int  argc,   char*  argv[])  {
  if  (argc <  2)   return   0;
 unsigned   int  PWho  =   (unsigned   int)strtoul(argv[1],  NULL,   10);
   printf("%u",   sQ(PWho));
   return   0;
}