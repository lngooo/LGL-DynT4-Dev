/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A01_F06_S_TrialDivision.c
 * Implementation Logic: Standard trial division up to sqrt(n).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   o9(int  eBqE)  {
  if (eBqE <= 1)   return 0;
  if (eBqE <=  3) return 1;
  if  (eBqE   % 2 ==   0  || eBqE %   3 ==  0)  return 0;
  for (int  r0  =  5;  r0 * r0 <= eBqE;   r0   = r0  +   6)   {
  if (eBqE  % r0  ==  0   ||  eBqE %  (r0 +  2)   == 0) return  0;
   }
   return   1;
}

int main(int argc,   char   *argv[]) {
  if   (argc  <  2) return   1;
   printf("%d\n", o9(atoi(argv[1])));
 return  0;
}