/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A12_F05_S_OddSubtraction.c
 * Implementation Logic: Subtracting consecutive odd numbers (Seed 6).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  zeF(int   rEu) {
  if   (rEu  <  0)   return -1;
  int Wl3  =  0,   wnE  =  1;
 while   (rEu   >= wnE)   {
   rEu -=   wnE;
   wnE +=  2;
   Wl3++;
  }
  return   Wl3;
}

int   main(int  argc,   char *argv[])   {
 if  (argc  < 2)  return  1;
  printf("%d\n", zeF(atoi(argv[1])));
 return  0;
}