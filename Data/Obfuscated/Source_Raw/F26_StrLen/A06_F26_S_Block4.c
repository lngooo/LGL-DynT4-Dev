/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A06_F26_S_Block4.c
 * Implementation Logic: Manual unrolling/blocking (Seed 5).
 */


#include <stdio.h>

int  cyQY(const char *Rz0)  {
   int surP =   0;
 for   (;;) {
  if (Rz0[0]   ==   0)  return  surP;
  if  (Rz0[1]   ==   0)   return   surP   +   1;
 if  (Rz0[2]   == 0)  return surP   +  2;
   if  (Rz0[3] ==   0)  return  surP  + 3;
 Rz0   +=   4; surP   +=   4;
 }
}

int main(int   argc, char  *argv[])  {
   if  (argc  < 2)  return   0;
 printf("%d\n", cyQY(argv[1]));
   return  0;
}