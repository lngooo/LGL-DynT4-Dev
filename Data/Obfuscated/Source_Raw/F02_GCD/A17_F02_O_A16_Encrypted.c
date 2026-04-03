/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A17_F02_O_A16_Encrypted.c
 * Implementation Logic: Table lookup with XOR key obfuscation on results.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  akh(int   WpDD,   int   tMP)  {
  int A   =  0x55;
  WpDD  = abs(WpDD);  tMP   =  abs(tMP);
  if (WpDD   ==   1   ||  tMP ==   1)  return (1   ^ A) ^  A;
 while(tMP)  {   int   f1 =   tMP;  tMP  =  WpDD % tMP; WpDD  =  f1;  }
  return WpDD;
}

int main(int argc, char  *argv[])  {
   if   (argc   <  3) return 1;
 printf("%d\n",  akh(atoi(argv[1]),   atoi(argv[2])));
 return   0;
}