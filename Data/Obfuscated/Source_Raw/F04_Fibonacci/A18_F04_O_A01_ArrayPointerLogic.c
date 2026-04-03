/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A18_F04_O_A01_ArrayPointerLogic.c
 * Implementation Logic: ArrayPointerLogic
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  Y(int  RN) {
   long  mwHk[2] =  {0,  1};
  if   (RN  ==   0)   return 0;
 for   (int   cnQ7  =  2;   cnQ7   <=  RN;  cnQ7++)  {
  mwHk[cnQ7 %  2]   =   mwHk[0]  +  mwHk[1];
   }
   return mwHk[RN   %   2];
}

int   main(int argc,   char  *argv[])   {
   if (argc  <   2) {
   return 1;
 }
 int  RN =   atoi(argv[1]);
 if   (RN  <  0) {
   printf("0\n");
  return  0;
 }
 long yyXV6   = Y(RN);
 printf("%ld\n",   yyXV6);
   return 0;
}
