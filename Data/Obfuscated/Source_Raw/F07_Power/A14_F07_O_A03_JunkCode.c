/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A14_F07_O_A03_JunkCode.c
 * Implementation Logic: A03 with redundant mathematical operations.
 */


#include <stdio.h>
#include <stdlib.h>

int Sf5(int  YTAO4, int  exp)   {
   int  ipTH1  =  1;
 int   m =  YTAO4  + exp;
 while  (exp   >  0)   {
  if (exp  %  2  == 1) {
   ipTH1  *=   YTAO4;
  m++;
 }
  YTAO4 *=  YTAO4;
 exp   /=  2;
   m   =  m   *  0;
 }
   return ipTH1   + m;
}

int main(int argc, char *argv[]) {
   if  (argc < 3)   return 1;
  printf("%d\n", Sf5(atoi(argv[1]),   atoi(argv[2])));
   return   0;
}