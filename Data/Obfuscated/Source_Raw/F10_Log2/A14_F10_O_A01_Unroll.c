/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A14_F10_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  pkHX0(int p1)  {
  int   n   =  0;
   while   (p1   >= 4)   {  p1 >>=  2;  n  += 2;  }
   while  (p1  >=   2) {  p1   >>=   1;   n  +=   1;  }
 return  n;
}

int main(int  argc, char  *argv[])  {
   if (argc < 2)   return   0;
   int p1  =  atoi(argv[1]);
   if  (p1 <=   0)  return 0;  
  int   XIaF   =  pkHX0(p1);
 printf("%d\n",   XIaF);
  return 0;
}