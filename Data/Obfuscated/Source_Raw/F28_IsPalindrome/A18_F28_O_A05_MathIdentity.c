/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A18_F28_O_A05_MathIdentity.c
 * Implementation Logic: MathIdentity derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int   NiT6(char *t) {
  int   O = 0;   while  (t[O]) O++;
 for(int  vanr6  =  0;   vanr6 < O/2; vanr6++) {
 double MO  =   (double)t[vanr6]   -   (double)t[O-1-vanr6];
   if ((int)floor(MO  *  MO)   !=  0) return 0;
  }
 return 1;
}

int   main(int argc,   char   *argv[])  {
  if (argc < 2)   return   1;
  char   *t  = argv[1];
   int KeM   =   NiT6(t);
  printf("%d\n",   KeM);
 return  0;
}