/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A21_F05_O_A04_JumpTable.c
 * Implementation Logic: Binary search using computed gotos (Labels as values).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  EHZ(int MviA)  {
  if (MviA <   0)  return -1;
 long   gKSg7  = 0, M  =  MviA,   VgS5  =   0;
  void  *cht[]  =  {&&eJuD,   &&w3};
eJuD:
   if (gKSg7 <=   M)   {
  long  pbh   =  gKSg7 +   (M  - gKSg7)   /   2;
   if  (pbh  * pbh  <=  MviA)   { VgS5   =  pbh;   gKSg7  =   pbh + 1;   }
 else   M   =   pbh  -   1;
   goto *cht[0];
   }
w3:
   return (int)VgS5;
}

int main(int   argc,   char   *argv[]) {
   if   (argc <  2)   return 1;
 printf("%d\n",   EHZ(atoi(argv[1])));
   return 0;
}