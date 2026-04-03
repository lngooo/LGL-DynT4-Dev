/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A08_F06_S_RecursiveTrial.c
 * Implementation Logic: Recursive trial division (Seed 4).
 */


#include <stdio.h>
#include <stdlib.h>

int   d(int  tMSu1, int  rM)  {
 if (rM *   rM > tMSu1)  return 1;
   if   (tMSu1  % rM ==   0) return   0;
  return d(tMSu1,  rM  + 1);
}

int e(int   tMSu1) {
   if   (tMSu1 <=  1)   return 0;
   return   d(tMSu1,   2);
}

int   main(int   argc,   char *argv[])  {
   if  (argc  < 2)   return 1;
 printf("%d\n",  e(atoi(argv[1])));
 return 0;
}