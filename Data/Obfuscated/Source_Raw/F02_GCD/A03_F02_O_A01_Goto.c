/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A03_F02_O_A01_Goto.c
 * Implementation Logic: Euclidean algorithm reconstructed using goto labels to disrupt CFG.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  dSc1(int DDK,  int v) {
  DDK   =  abs(DDK);   v =  abs(v);
gB8:
  if   (v  == 0)  goto a;
 int   PG   = v;
   v   = DDK  %  v;
   DDK   = PG;
 goto gB8;
a:
 return  DDK;
}

int main(int argc,   char *argv[])   {
 if (argc   <  3)  return   1;
   printf("%d\n",  dSc1(atoi(argv[1]),   atoi(argv[2])));
   return   0;
}