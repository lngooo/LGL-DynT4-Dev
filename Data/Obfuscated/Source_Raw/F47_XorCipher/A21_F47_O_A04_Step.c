/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A21_F47_O_A04_Step.c
 * Implementation Logic: Step
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   H(char   *psG,  char   *m) {
 int PBs   =   0,   QioA   =   0;
   while(psG[PBs])  PBs++;  while(m[QioA]) QioA++;
   int  PU   =  0;
 while(PU <   PBs)  {
   psG[PU] ^=   m[PU  %   QioA];
 PU++;
  }
}

int   main(int   argc, char *argv[]) {
 if   (argc   <   3)  return 0;
 char *psG   =  argv[1];
   char *m   =  argv[2];
  int  LK   =   0;
 while   (psG[LK])  LK++;

  H(psG,   m);

 for (int   oMd =   0;   oMd  <   LK; oMd++)   {
  printf("%02x",  (unsigned char)psG[oMd]);
  }
 printf("\n");
 return 0;
}