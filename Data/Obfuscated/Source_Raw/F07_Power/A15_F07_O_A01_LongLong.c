/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A15_F07_O_A01_LongLong.c
 * Implementation Logic: Expanding data width to long long for computation.
 */


#include <stdio.h>
#include <stdlib.h>

int   ufMT3(int  Os9,  int  exp) {
 long  long MeA =   1;
 long   long  MSJi  =   Os9;
 for  (int jU0  = 0; jU0 <   exp;   jU0++)  MeA *=   MSJi;
   return (int)MeA;
}

int main(int argc, char  *argv[])   {
  if  (argc  <   3)  return   1;
  printf("%d\n",   ufMT3(atoi(argv[1]),  atoi(argv[2])));
  return  0;
}