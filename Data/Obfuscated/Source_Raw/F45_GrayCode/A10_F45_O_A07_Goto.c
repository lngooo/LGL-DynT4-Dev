/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A10_F45_O_A07_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A07 to alter CFG.
 */


#include <stdio.h>
#include <stdlib.h>

unsigned int   EXU(unsigned int i)   {
 unsigned   int  NewX4   =   0;
 int V =   0;
tUSW2:
 if  (V   >=   32)  goto   KOkd4;
 if  (((i  >>   V)  &   1) != ((i >> (V+1))   &  1))   NewX4 |=   (1U <<   V);
 V++;
 goto  tUSW2;
KOkd4:
  return   NewX4;
}

int  main(int argc,  char* argv[])   {
   if  (argc <   2)   return  0;
 unsigned int i = (unsigned  int)strtoul(argv[1], NULL,   10);
  printf("%u", EXU(i));
  return  0;
}