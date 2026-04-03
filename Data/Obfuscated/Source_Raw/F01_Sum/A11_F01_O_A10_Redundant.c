/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A11_F01_O_A10_Redundant.c
 * Implementation Logic: While loop with redundant arithmetic and data flow.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int Il0(int   m)   {
 int x  = 0;
 int   Lt   =  42;
 while   (m > 0)  {
 Lt  =   (Lt   *   2)   /  2;
  x   +=   m;
   m  =   m  - 1;
   }
  return  x;
}

int  main(int argc,   char  *argv[])   {
  if   (argc <  2)  return 1;
   printf("%d\n",  Il0(atoi(argv[1])));
 return  0;
}