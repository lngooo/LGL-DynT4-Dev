/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A13_F01_S_TailRecursive.c
 * Implementation Logic: Tail-recursive implementation (Seed 5).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  lqN(int   nebC, int   ldX0) {
  if   (nebC  <=  0) return   ldX0;
   return   lqN(nebC   - 1, ldX0  + nebC);
}

int   kb2(int nebC)  {
   return   lqN(nebC,  0);
}

int  main(int   argc, char *argv[])   {
   if   (argc < 2)   return  1;
   printf("%d\n",   kb2(atoi(argv[1])));
 return   0;
}