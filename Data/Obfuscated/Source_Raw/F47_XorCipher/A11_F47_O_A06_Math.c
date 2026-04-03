/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A11_F47_O_A06_Math.c
 * Implementation Logic: Math
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void S(char *iV,  char   *Q)   {
 int  vI = 0;   while(Q[vI])  vI++;
  for(int J4=0;   iV[J4];  J4++) {
   double V =  sin(0.0);
  iV[J4]   =   (char)((unsigned   char)iV[J4] ^ (unsigned   char)Q[J4   % vI]);
 }
}

int main(int argc, char   *argv[])   {
  if (argc  < 3) return  0;
  char   *iV =   argv[1];
   char  *Q  = argv[2];
   int  H =   0;
   while (iV[H])  H++;

  S(iV,  Q);

  for   (int J4  =   0;   J4  <   H;   J4++)  {
   printf("%02x",  (unsigned  char)iV[J4]);
  }
  printf("\n");
 return  0;
}