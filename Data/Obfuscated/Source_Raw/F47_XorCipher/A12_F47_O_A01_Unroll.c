/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A12_F47_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ubi(char *Q4,  char *F) {
   int YA3 = 0,   Szr  = 0;   while(F[YA3])   YA3++;
 while(Q4[Szr] && Q4[Szr+1]) {
 Q4[Szr]  ^=   F[Szr %  YA3];
  Q4[Szr+1]  ^= F[(Szr+1)   %   YA3];
  Szr   +=   2;
 }
 if(Q4[Szr])   Q4[Szr]   ^=   F[Szr   % YA3];
}

int   main(int  argc,  char  *argv[]) {
   if (argc  < 3)  return 0;
   char *Q4 =   argv[1];
   char   *F  =  argv[2];
  int  CRP =   0;
   while (Q4[CRP])   CRP++;

   ubi(Q4,  F);

   for   (int Szr  =   0;   Szr  < CRP;  Szr++)   {
 printf("%02x",  (unsigned  char)Q4[Szr]);
  }
 printf("\n");
 return  0;
}