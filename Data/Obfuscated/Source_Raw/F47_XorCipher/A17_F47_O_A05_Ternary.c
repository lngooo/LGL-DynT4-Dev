/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A17_F47_O_A05_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  lt(char   *Nk, char *zMV)   {
  int RiH =   0;   while(zMV[RiH])   RiH++;
  for(int  izx3=0; Nk[izx3]; izx3++)  {
  int  or9   =   izx3   % RiH;
   Nk[izx3]   = (or9 >=   0) ?   (Nk[izx3]  ^  zMV[or9])  :   Nk[izx3];
 }
}

int main(int  argc, char  *argv[])   {
  if   (argc  <  3)   return   0;
  char *Nk  =  argv[1];
  char   *zMV  = argv[2];
   int foW   =   0;
  while (Nk[foW]) foW++;

  lt(Nk,   zMV);

  for (int  izx3   =   0;  izx3 <   foW;   izx3++)   {
  printf("%02x",  (unsigned   char)Nk[izx3]);
 }
  printf("\n");
   return  0;
}