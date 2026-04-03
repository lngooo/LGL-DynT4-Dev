/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A14_F01_O_A13_Inlined.c
 * Implementation Logic: Manual inlining of tail recursion into a jump loop.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  dHa(int  fXHR)  {
   int   jBHG  =  0;
s:
 if (fXHR  <=  0) return  jBHG;
   jBHG   +=   fXHR;
  fXHR--;
  goto s;
}

int  main(int  argc, char  *argv[]) {
  if  (argc  <  2)   return   1;
  printf("%d\n",   dHa(atoi(argv[1])));
 return   0;
}