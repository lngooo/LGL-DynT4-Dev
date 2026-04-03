/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A21_F19_O_A02_StackSim.c
 * Implementation Logic: StackSim
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  GCK0(int   ibL[],  int   bsV1) {
   if (bsV1 <= 0) return 0;
 int  xhu3  =  GCK0(ibL,  bsV1 -  1);
 int   ow   = ibL[bsV1   -  1],  F =  0;
 int   Q  =   0;
 while  (Q < xhu3)  {
 if  (ibL[Q]   ==   ow)  { F = 1;  break;   }
  Q++;
 }
   if  (!F)  { ibL[xhu3] =   ow;  return   xhu3 + 1;   }
  return xhu3;
}

int main(int  argc,   char *argv[])  {
  if (argc  <   2)   return  0;
 int   jzHU8   =   argc  - 1;
  int ibL[128];
   for  (int   u =   0;  u <   jzHU8; u++)   {
  ibL[u]  =   atoi(argv[u   +   1]);
   }
  int  N1   =   GCK0(ibL,   jzHU8);
 for  (int  u   = 0;  u <  N1;   u++)  {
  printf("%d%s", ibL[u], (u   ==   N1   - 1  ?   "" : " "));
   }
 printf("\n");
 return 0;
}