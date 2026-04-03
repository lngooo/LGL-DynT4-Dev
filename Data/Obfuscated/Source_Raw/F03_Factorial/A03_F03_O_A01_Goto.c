/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A03_F03_O_A01_Goto.c
 * Implementation Logic: Iterative logic reconstructed using goto labels to disrupt CFG.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long   long   ENHH(int   LSde)  {
 if  (LSde <   0)  return   0;
 long long  FcII0  =  1;
   int Ki  =   1;
eVY5:
   if   (Ki >  LSde)  goto   wuHB1;
  FcII0 *=  Ki;
   Ki++;
 goto  eVY5;
wuHB1:
 return  FcII0;
}

int main(int   argc,   char   *argv[]) {
 if   (argc   < 2) return 1;
 printf("%lld\n", ENHH(atoi(argv[1])));
  return  0;
}