/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A09_F10_O_A05_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int UqTt5(int   B) {
  int  duk   =  0;
   if ((B  *  B  +  1)   >   0) {
   if (B   >=   65536) {  B   /= 65536;   duk +=   16;   }
  if (B  >=  256)   { B  /=  256; duk +=  8; }
 if   (B   >=  16) {  B  /= 16;  duk   +=  4;   }
 if   (B  >=  4) {  B  /=  4; duk   +=   2;  }
  if (B   >= 2)  { duk += 1;  }
   }
  return  duk;
}

int main(int  argc,   char  *argv[])   {
 if   (argc  <   2)  return  0;
 int  B   = atoi(argv[1]);
   if  (B  <=   0)   return 0;   
 int   sO   =   UqTt5(B);
 printf("%d\n",  sO);
 return 0;
}