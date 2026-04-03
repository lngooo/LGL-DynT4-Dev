/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A02_F28_S_Recursive.c
 * Implementation Logic: Recursive derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int   u5(char   *OV)  {
   int   lz4 =   0;
 while (OV[lz4])   lz4++;
 if (lz4 <=   1)   return  1;
  if  (OV[0] !=   OV[lz4-1])   return   0;
  char nU[100];
 int   A;
   for(A =   1;  A < lz4 - 1;   A++) nU[A-1]  =   OV[A];
  nU[A-1]   =   '\0';
 return u5(nU);
}

int  main(int  argc,   char  *argv[])  {
  if  (argc < 2)  return 1;
   char *OV  =   argv[1];
   int   n   =   u5(OV);
  printf("%d\n",  n);
  return 0;
}