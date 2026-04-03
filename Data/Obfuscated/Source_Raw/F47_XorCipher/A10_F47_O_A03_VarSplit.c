/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A10_F47_O_A03_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void aVx(char *bXo,  char   *qS)  {
   char *OMS  = bXo;
 int   qf6  =   0, aDL  =  0;
  int  sGPG  =   0;  while(qS[sGPG])   sGPG++;
   while(*OMS)   {
 *OMS ^=  qS[(qf6  + aDL)  % sGPG];
   OMS++;  qf6++;
   }
}

int  main(int  argc, char *argv[]) {
   if   (argc <  3) return 0;
  char *bXo   =   argv[1];
  char *qS  = argv[2];
   int   u = 0;
   while (bXo[u]) u++;

   aVx(bXo, qS);

  for   (int kwk  = 0;   kwk   <  u; kwk++)   {
 printf("%02x", (unsigned char)bXo[kwk]);
   }
  printf("\n");
 return   0;
}