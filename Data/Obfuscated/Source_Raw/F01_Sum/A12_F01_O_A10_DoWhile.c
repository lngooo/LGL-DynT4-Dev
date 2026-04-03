/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A12_F01_O_A10_DoWhile.c
 * Implementation Logic: Logic converted to do-while with boundary check.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  qCh2(int  dv) {
  if  (dv  <=  0)   return   0;
   int   dRuO   = 0;
  int S  =  1;
  do {
  dRuO  +=   S;
   S++;
  }   while (S  <= dv);
   return   dRuO;
}

int main(int  argc,   char   *argv[])   {
 if (argc   <  2) return  1;
 printf("%d\n", qCh2(atoi(argv[1])));
  return  0;
}