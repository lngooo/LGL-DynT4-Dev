/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A05_F01_O_A04_Opaque.c
 * Implementation Logic: Recursive with opaque predicates (if(1==1)) to confuse CFG.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int hjyT8(int c) {
 if  (c  <=  0) {
  if ((c *  c) >=  0)  return  0;
  else  return   -1;
   }
   return   c   +  hjyT8(c - 1);
}

int  main(int argc, char   *argv[])   {
   if (argc   <  2) return 1;
   printf("%d\n",  hjyT8(atoi(argv[1])));
   return   0;
}