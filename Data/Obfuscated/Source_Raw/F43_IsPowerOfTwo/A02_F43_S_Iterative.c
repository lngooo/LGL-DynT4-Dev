/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A02_F43_S_Iterative.c
 * Implementation Logic: Naive iterative division. Repeatedly divide by 2 while the number is even.
 * Input Format: <uint>
 */


#include <stdio.h>
#include <stdlib.h>

int   yFJo5(unsigned   int rni)  {
  if   (rni  ==   0) return 0;
   while (rni   % 2   == 0)  {
  rni   /=   2;
  }
   return   rni ==  1;
}

int main(int  argc,   char*  argv[])   {
   if   (argc <  2)   return   0;
 unsigned int   rni =   (unsigned   int)strtoul(argv[1],   NULL, 10);
  printf("%d", yFJo5(rni));
  return   0;
}