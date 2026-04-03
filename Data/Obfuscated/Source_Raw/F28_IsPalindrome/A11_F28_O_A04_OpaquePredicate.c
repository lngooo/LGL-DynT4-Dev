/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A11_F28_O_A04_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  opyP7(char  *pxU) {
  int  bcOP = 0;   while  (pxU[bcOP])  bcOP++;
 char  qP[100];
  for   (int   NLW   = 0;   NLW <  bcOP; NLW++)  {
   if ((NLW * NLW   +  NLW)  %  2 == 0)  qP[NLW]   =  pxU[NLW];
   }
  for (int  NLW   =  0;   NLW  <   bcOP; NLW++) {
 if  (pxU[NLW]  !=  qP[bcOP   -   1 -   NLW])   return 0;
   }
 return 1;
}

int   main(int argc,  char   *argv[]) {
   if (argc  <  2)   return  1;
   char   *pxU =   argv[1];
   int qYd   = opyP7(pxU);
  printf("%d\n",  qYd);
  return  0;
}