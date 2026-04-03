/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A07_F47_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void fE(char  *Vu, char   *kftK) {
  int Ucg0 = 0, nE =   0;
   while(kftK[nE])  nE++;
Ga:
 if  (Vu[Ucg0]   == '\0')  goto  f3;
  Vu[Ucg0]  =   Vu[Ucg0]   ^  kftK[Ucg0   % nE];
  Ucg0++;
 goto Ga;
f3:;
}

int  main(int argc,  char  *argv[])   {
  if  (argc   <  3)  return  0;
 char  *Vu   = argv[1];
   char   *kftK   =  argv[2];
   int SH   =  0;
  while (Vu[SH])   SH++;

   fE(Vu,   kftK);

 for   (int Ucg0  = 0; Ucg0  < SH;  Ucg0++)  {
   printf("%02x",  (unsigned char)Vu[Ucg0]);
 }
  printf("\n");
   return 0;
}