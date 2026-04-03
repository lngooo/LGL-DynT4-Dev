/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A02_F47_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   fYm0(char  *qF, char *buYJ) {
  static int gf   = 0;
   if (*qF  == '\0') { gf  = 0;  return;  }
   int G  =  0; while  (buYJ[G])   G++;
  *qF  ^=   buYJ[gf %   G];
   gf++;
  fYm0(qF  +   1,  buYJ);
}

int main(int   argc,  char  *argv[])   {
   if   (argc  <   3)   return   0;
   char *qF  =   argv[1];
   char *buYJ   =   argv[2];
 int  ydIS  = 0;
  while  (qF[ydIS])  ydIS++;

 fYm0(qF,  buYJ);

 for  (int   F2 =  0;  F2 <  ydIS;  F2++)  {
  printf("%02x",  (unsigned char)qF[F2]);
  }
 printf("\n");
   return  0;
}