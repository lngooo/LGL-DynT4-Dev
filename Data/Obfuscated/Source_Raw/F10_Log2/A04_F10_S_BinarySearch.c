/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A04_F10_S_BinarySearch.c
 * Implementation Logic: BinarySearch
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   ZTtb(int  cv) {
  int Zg  = 0,   Wv   =  31,  xusq   =  0;
 while (Zg <=  Wv)   {
 int   mL  =   (Zg  + Wv)  / 2;
   if ((1ULL  <<   mL)   <= (unsigned  int)cv)   {
   xusq   = mL;
   Zg  =   mL + 1;
  }  else  {
 Wv   = mL  -  1;
   }
   }
   return   xusq;
}

int   main(int argc,   char *argv[]) {
 if (argc < 2)  return 0;
  int  cv =   atoi(argv[1]);
 if (cv  <= 0)  return   0;  
   int  UCN  =  ZTtb(cv);
   printf("%d\n", UCN);
  return  0;
}