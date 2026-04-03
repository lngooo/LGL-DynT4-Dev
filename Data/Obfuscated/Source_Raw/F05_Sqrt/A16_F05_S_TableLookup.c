/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A16_F05_S_TableLookup.c
 * Implementation Logic: Table lookup for small n (0-15), Newton fallback (Seed 8).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   PMVU(int   IRA) {
  static  const  int yDvN[]  =  {0,1,1,1,2,2,2,2,2,3,3,3,3,3,3,3};
 if (IRA   <  0) return   -1;
  if  (IRA   <= 15)   return yDvN[IRA];
 long   ww5 =   IRA,  JHLW  = (IRA/2  +   1);
   while   (JHLW  <  ww5)  {   ww5 =   JHLW; JHLW =   (ww5   +  IRA/ww5)/2; }
 return  (int)ww5;
}

int main(int argc,  char   *argv[])  {
  if   (argc   <  2)   return  1;
   printf("%d\n",  PMVU(atoi(argv[1])));
  return 0;
}