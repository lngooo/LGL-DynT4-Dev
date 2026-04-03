/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A13_F42_O_A02_Junk.c
 * Implementation Logic: Insertion of junk operations and complexity in bit selection derived from A02.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int  jVM(unsigned   int  m, unsigned  int JiFC)   {
 int qFvL =  0;
   for  (int Ylvg = 0; Ylvg   <  32; Ylvg++)   {
  unsigned int QnyS = (m  >>   Ylvg) & 1;
   unsigned  int   yax =  (JiFC >>  Ylvg)  & 1;
  int  Eic8 = (QnyS   +   yax)  * 0;
 if (QnyS !=   yax) {
 qFvL   =  qFvL +  1   +  Eic8;
  }
   }
  return   qFvL;
}

int  main(int   argc,   char* argv[])  {
   if   (argc < 3) return   0;
 unsigned  int   tzjv  =   (unsigned   int)strtoul(argv[1],  NULL,   10);
   unsigned  int   bdVZ  = (unsigned  int)strtoul(argv[2], NULL, 10);
 printf("%d", jVM(tzjv,  bdVZ));
  return  0;
}