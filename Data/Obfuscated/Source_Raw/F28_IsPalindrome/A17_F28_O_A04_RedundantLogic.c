/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A17_F28_O_A04_RedundantLogic.c
 * Implementation Logic: RedundantLogic derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int   kpzy(char   *T)   {
  int   qBAx =   0;   while   (T[qBAx]) qBAx++;
  char   pQP[100];
  int  r =   0;
 while(r  <  qBAx) {  pQP[r]  = T[r]; r++;   }
  r--;
  for(int  lbmz = 0;  lbmz  <   qBAx;   lbmz++)   {
 if(pQP[r--]   !=   T[lbmz])  return   0;
  }
 return 1;
}

int  main(int   argc,   char   *argv[]) {
 if  (argc <   2)   return  1;
 char   *T  = argv[1];
 int   ZWV =  kpzy(T);
   printf("%d\n", ZWV);
   return 0;
}