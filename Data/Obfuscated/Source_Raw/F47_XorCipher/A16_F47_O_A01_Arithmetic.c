/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A16_F47_O_A01_Arithmetic.c
 * Implementation Logic: Arithmetic
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  DH3(char *rDry,   char   *dKSO)   {
   int  xPY =  0;  while(dKSO[xPY])   xPY++;
 int   qX   =  0;
  while(rDry[qX])  {
   unsigned   char  SY =   rDry[qX],   ycDi   =  dKSO[qX   % xPY];
  rDry[qX]  = (char)(SY  + ycDi   -  2   * (SY   & ycDi));   // XOR identity:  a+b-2(a&b)
 qX++;
 }
}

int   main(int  argc, char  *argv[])   {
 if   (argc  <  3) return  0;
 char  *rDry = argv[1];
   char   *dKSO =  argv[2];
  int   sC = 0;
 while   (rDry[sC])   sC++;

   DH3(rDry, dKSO);

  for (int qX   = 0;   qX <  sC; qX++)  {
  printf("%02x",   (unsigned  char)rDry[qX]);
   }
 printf("\n");
  return 0;
}