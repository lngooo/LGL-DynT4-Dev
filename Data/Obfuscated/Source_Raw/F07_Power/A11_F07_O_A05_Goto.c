/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A11_F07_O_A05_Goto.c
 * Implementation Logic: Recursive logic A05 replaced by goto labels.
 */


#include <stdio.h>
#include <stdlib.h>

int  ksUQ(int X6, int exp)  {
  int FTX  = 1;
wMQG:
 if (exp   <=  0)  goto ikL;
  FTX *= X6;
  exp--;
   goto wMQG;
ikL:
   return  FTX;
}

int main(int  argc,   char  *argv[]) {
   if (argc  <  3)   return 1;
   printf("%d\n", ksUQ(atoi(argv[1]), atoi(argv[2])));
   return  0;
}