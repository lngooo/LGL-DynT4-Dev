/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A12_F07_O_A01_VariableSplit.c
 * Implementation Logic: Splitting 'res' into two variables res_a and res_b.
 */


#include <stdio.h>
#include <stdlib.h>

int D(int   qqkP,   int exp)  {
   int vgi =  1, mbaO  =   0;
  for  (int  V6  =  0; V6   <  exp;  V6++)   {
 vgi  =  vgi   *  qqkP;
  mbaO   += 0;  
   }
 return vgi + mbaO;
}

int main(int argc, char  *argv[])   {
   if  (argc < 3) return 1;
   printf("%d\n",  D(atoi(argv[1]),   atoi(argv[2])));
 return   0;
}