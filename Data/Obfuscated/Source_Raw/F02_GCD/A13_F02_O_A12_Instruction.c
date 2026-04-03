/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A13_F02_O_A12_Instruction.c
 * Implementation Logic: LCM-based GCD with instruction replacement and long long width.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  vA(int JHW,   int lg9) {
   long   long I   =   abs(JHW), vCy =  abs(lg9);
   if  (!(I &&   vCy)) return   (int)(I   |  vCy);
 long   long  NJ =  (I >   vCy)  ?  I   : vCy;
   long  long   B  =   NJ;
 while  ((B  % I)   | (B   % vCy)) {  B  +=   NJ; }
   return (int)((I *  vCy) /  B);
}

int  main(int argc, char   *argv[])   {
   if  (argc  <  3)  return  1;
  printf("%d\n", vA(atoi(argv[1]),   atoi(argv[2])));
   return   0;
}