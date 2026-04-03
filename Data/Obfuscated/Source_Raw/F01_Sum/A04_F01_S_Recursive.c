/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A04_F01_S_Recursive.c
 * Implementation Logic: Classic recursive implementation (Seed 2).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   l(int   dmI2)   {
  if (dmI2  <=  0) return 0;
 return   dmI2  +  l(dmI2  -  1);
}

int  main(int   argc, char   *argv[])   {
   if (argc <  2)   return  1;
 printf("%d\n", l(atoi(argv[1])));
 return 0;
}