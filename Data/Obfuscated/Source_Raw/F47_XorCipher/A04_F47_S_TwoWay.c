/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A04_F47_S_TwoWay.c
 * Implementation Logic: TwoWay
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void cE(char *lr, char *yAN) {
   int  LuiR  =  0, fOK1   =   0;
   while(lr[LuiR])   LuiR++;   while(yAN[fOK1])   fOK1++;
 int  d  =  0, b8 = LuiR - 1;
   while(d <=  b8) {
 lr[d] ^= yAN[d   %   fOK1];
  if(d   !=  b8) lr[b8]  ^= yAN[b8  % fOK1];
 d++;  b8--;
  }
}

int  main(int  argc, char   *argv[])  {
 if (argc   < 3) return   0;
 char  *lr  =  argv[1];
 char   *yAN   = argv[2];
 int  P6   =   0;
   while (lr[P6])   P6++;

   cE(lr,  yAN);

  for   (int   bu  =   0;   bu   < P6;  bu++)  {
  printf("%02x",   (unsigned   char)lr[bu]);
  }
  printf("\n");
 return  0;
}