/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A19_F05_O_A06_Indirect.c
 * Implementation Logic: Bit-by-bit method using function pointers for core steps.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

typedef  unsigned   int (*D)(unsigned int);
unsigned   int  OOO(unsigned  int ST) { return  ST  >> 1; }

int  K(int  PYNY)  {
   if (PYNY <  0)  return   -1;
  unsigned  int   Q1   = 0, GT   =  1 << 30;
  D  LK  =  OOO;
   while   (GT  > (unsigned  int)PYNY) GT >>=   2;
   while (GT) {
  if  ((unsigned  int)PYNY >=  Q1 +  GT) {
   PYNY   -= (Q1   + GT);
   Q1   =   LK(Q1)   +  GT;
  }  else   Q1   =   LK(Q1);
  GT   >>=   2;
  }
  return (int)Q1;
}

int  main(int   argc,   char *argv[])   {
  if  (argc   < 2)   return   1;
   printf("%d\n",   K(atoi(argv[1])));
  return   0;
}