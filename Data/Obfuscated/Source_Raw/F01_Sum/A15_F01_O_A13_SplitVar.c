/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A15_F01_O_A13_SplitVar.c
 * Implementation Logic: Accumulator split into two variables to obfuscate data flow.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  eL(int JH)   {
   int   e3 = 0, ItC   =  0;
  for   (int   sxp3   =   1;  sxp3 <= JH;  sxp3++) {
  if (sxp3  % 2   ==   0) e3  += sxp3;
 else   ItC  +=   sxp3;
 }
   return  e3 + ItC;
}

int   main(int  argc,  char  *argv[])  {
  if (argc <  2)  return 1;
 printf("%d\n",  eL(atoi(argv[1])));
  return 0;
}