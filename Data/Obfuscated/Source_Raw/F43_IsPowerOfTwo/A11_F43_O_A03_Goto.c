/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A11_F43_O_A03_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A03 to disrupt CFG.
 */


#include <stdio.h>
#include <stdlib.h>

int   iOqE(unsigned   int  HR3)  {
 if   (HR3 ==  0) return   0;
  int   fXpq  = 0;
eSv:
   if (HR3 <= 0)  goto WlI;
  if (HR3  &  1) fXpq++;
   HR3 >>=   1;
  goto eSv;
WlI:
   return  (fXpq == 1);
}

int  main(int argc,  char*  argv[])  {
   if   (argc <  2) return  0;
  unsigned int  HR3  = (unsigned int)strtoul(argv[1],   NULL,   10);
 printf("%d",  iOqE(HR3));
 return 0;
}