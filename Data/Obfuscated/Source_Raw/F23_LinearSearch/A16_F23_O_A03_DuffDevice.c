/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A16_F23_O_A03_DuffDevice.c
 * Implementation Logic: DuffDevice
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  WpdW6(int rBFz[],  int MZ,   int nhn5)  {
 if (MZ <=   0)   return   -1;
   int   L   =  0,  of2 = (MZ  + 1) / 2;
   switch  (MZ   % 2)   {
  case  0:  do   {   if (rBFz[L]  == nhn5) return L;   L++;
   case  1:  if (rBFz[L]   == nhn5)   return   L;  L++;
   }   while   (--of2   >   0);
   }
   return   -1;
}

int main(int   argc, char *argv[])   {
   if  (argc <   3) return  1;
   int   nhn5 =  atoi(argv[1]);
 int   lS =  argc  - 2;
 int   rBFz[100];
   for   (int   L  =  0; L  < lS; L++)  {
   rBFz[L]   =  atoi(argv[L   + 2]);
   }
  int cp7   = WpdW6(rBFz,  lS, nhn5);
   printf("%d\n",   cp7);
 return 0;
}