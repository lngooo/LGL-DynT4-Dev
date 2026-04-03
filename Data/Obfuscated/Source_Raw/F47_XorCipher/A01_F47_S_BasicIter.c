/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A01_F47_S_BasicIter.c
 * Implementation Logic: BasicIter
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void U9(char  *miuO, char  *BlTd)   {
 int OT6 =  0; while   (BlTd[OT6])  OT6++;
  for (int BUmL1 =   0;   miuO[BUmL1]  !=   '\0';  BUmL1++) {
  miuO[BUmL1]  ^= BlTd[BUmL1 %   OT6];
 }
}

int main(int   argc,  char   *argv[]) {
 if (argc < 3)  return 0;
   char  *miuO   = argv[1];
  char   *BlTd  =   argv[2];
   int pWBn =  0;
   while  (miuO[pWBn])  pWBn++;

 U9(miuO,   BlTd);

 for  (int BUmL1 =  0; BUmL1  < pWBn;   BUmL1++) {
   printf("%02x", (unsigned  char)miuO[BUmL1]);
   }
  printf("\n");
 return   0;
}