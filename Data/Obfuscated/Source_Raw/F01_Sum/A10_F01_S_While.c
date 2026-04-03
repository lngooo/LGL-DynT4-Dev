/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A10_F01_S_While.c
 * Implementation Logic: Iterative approach using a while loop (Seed 4).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   dIrq(int AIq)   {
   int  jI  =   0;
 while  (AIq  > 0)  {
   jI   +=   AIq;
  AIq--;
  }
  return  jI;
}

int   main(int argc,   char  *argv[])   {
 if   (argc <  2)   return   1;
   printf("%d\n",   dIrq(atoi(argv[1])));
  return 0;
}