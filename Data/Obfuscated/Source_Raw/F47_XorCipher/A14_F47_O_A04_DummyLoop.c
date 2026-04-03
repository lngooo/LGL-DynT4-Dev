/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A14_F47_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void vFM(char  *AvR,   char  *GgqL1)  {
   int  v4   =  0, g = 0;
  while(AvR[v4]) v4++;  while(GgqL1[g])   g++;
  for(int   Ul7=0; Ul7<v4;   Ul7++)  {
  for(int   uz=0;   uz<1;   uz++)   AvR[Ul7]  ^=   GgqL1[Ul7 %  g];
  }
}

int   main(int  argc,   char *argv[]) {
 if   (argc  <   3) return 0;
 char  *AvR =   argv[1];
   char  *GgqL1  = argv[2];
  int nBF =  0;
 while (AvR[nBF])  nBF++;

  vFM(AvR,  GgqL1);

  for (int  Ul7  =  0; Ul7  <  nBF;   Ul7++) {
 printf("%02x",  (unsigned  char)AvR[Ul7]);
   }
 printf("\n");
   return 0;
}