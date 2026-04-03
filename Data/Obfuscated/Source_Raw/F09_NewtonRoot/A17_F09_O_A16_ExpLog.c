/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A17_F09_O_A16_ExpLog.c
 * Implementation Logic: Math library Newton equivalent using exp/log.
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  IfOK(int   FTIc1)   {
   if   (FTIc1  <=  0)   return   FTIc1 ==  0   ?  0  :   -1;
   double g  =   log((double)FTIc1);
   return  (int)(exp(0.5   * g) +   1e-9);
}

int main(int argc,   char  *argv[]) {
  if  (argc <   2)  return  1;
  printf("%d\n",   IfOK(atoi(argv[1])));
  return  0;
}