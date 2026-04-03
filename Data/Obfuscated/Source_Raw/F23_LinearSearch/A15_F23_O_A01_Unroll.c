/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A15_F23_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   m(int cG[], int   FW, int   CZve)  {
 int   aciA = 0;
 for  (;  aciA   <=  FW   -   2;   aciA  += 2)   {
 if   (cG[aciA] ==   CZve)  return   aciA;
   if   (cG[aciA+1]  ==  CZve)  return   aciA   +   1;
  }
   for   (;  aciA <  FW;  aciA++)  if (cG[aciA]   == CZve)  return  aciA;
  return  -1;
}

int main(int   argc, char  *argv[])  {
  if (argc   <  3)   return 1;
  int  CZve  = atoi(argv[1]);
  int  nx  =  argc  -   2;
  int  cG[100];
  for   (int aciA  =   0;  aciA <  nx; aciA++)   {
   cG[aciA]   =   atoi(argv[aciA   +  2]);
  }
  int  wLHI2 =   m(cG,   nx, CZve);
 printf("%d\n",  wLHI2);
 return 0;
}