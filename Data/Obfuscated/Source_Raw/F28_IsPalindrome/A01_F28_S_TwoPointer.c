/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A01_F28_S_TwoPointer.c
 * Implementation Logic: TwoPointer derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  C(char   *J) {
  int  uSA  =  0;
 while  (J[uSA]) uSA++;
  int   oWh   = 0,  JICV   = uSA  - 1;
   while (oWh <   JICV)   {
 if (J[oWh]   != J[JICV]) return   0;
   oWh++; JICV--;
   }
  return   1;
}

int main(int  argc,   char  *argv[])   {
   if (argc   <  2)  return  1;
   char  *J = argv[1];
   int fTT = C(J);
 printf("%d\n", fTT);
 return   0;
}