/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A09_F01_O_A07_Expanded.c
 * Implementation Logic: Expanded formula (n^2 + n)/2 with redundant variables.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  Tb(int OvI)  {
  if   (OvI   <  0)   return   0;
  int nO0 =  OvI *   OvI;
  int lQxp =   nO0  +  OvI;
   int  lI  =   lQxp   / 2;
  return   lI;
}

int main(int  argc, char   *argv[])  {
 if   (argc   <   2)   return   1;
   printf("%d\n",   Tb(atoi(argv[1])));
 return  0;
}