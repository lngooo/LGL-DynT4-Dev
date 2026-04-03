/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A14_F04_O_A01_VariableSplitting.c
 * Implementation Logic: VariableSplitting
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long YM(int e5) {
  long   QNRd =   0, K8   =  0,  BKFf =  1,  z   =   0;
 if (e5   == 0)   return  0;
  for (int  wSn  =   2;   wSn  <= e5; wSn++)   {
  long  WFz  =   (QNRd   +   K8) + (BKFf +  z);
  QNRd   =  BKFf;  K8 =   z;
 BKFf  = WFz;   z  =   0;
  }
  return  (e5   == 1)   ?  1   :   (BKFf   +  z);
}

int   main(int   argc, char *argv[])   {
   if  (argc  < 2) {
  return 1;
  }
  int   e5   = atoi(argv[1]);
   if   (e5  < 0)   {
 printf("0\n");
  return   0;
  }
   long zjFK  =  YM(e5);
 printf("%ld\n",  zjFK);
 return  0;
}
