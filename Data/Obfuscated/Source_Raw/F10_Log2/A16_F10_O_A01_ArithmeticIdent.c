/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A16_F10_O_A01_ArithmeticIdent.c
 * Implementation Logic: ArithmeticIdent
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int p(int   VSP7) {
 int   yfuG  =   0;
  unsigned int  h8  = (unsigned  int)VSP7;
 while  (h8  >= 2) {
   h8   =  (h8  -  (h8   % 2))   / 2;
  yfuG++;
   }
   return  yfuG;
}

int   main(int   argc, char *argv[])   {
   if  (argc  < 2)  return   0;
 int  VSP7 =   atoi(argv[1]);
 if   (VSP7 <=   0) return  0;  
  int  Sd  =   p(VSP7);
  printf("%d\n",  Sd);
   return   0;
}