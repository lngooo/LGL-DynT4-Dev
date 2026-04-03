/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A07_F08_O_A06_Redundant.c
 * Implementation Logic: Math approach with redundant type conversions.
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   F(int  WtE)   {
   float tZ1   = (float)WtE;
   double  DZ   =   pow((double)tZ1,   2.0);
  return  (int)pow(DZ,  0.5);
}

int main(int   argc,  char *argv[])  {
 if  (argc <  2)  return   1;
 printf("%d\n",   F(atoi(argv[1])));
 return  0;
}