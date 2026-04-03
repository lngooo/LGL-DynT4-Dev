/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A21_F48_O_A05_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void MmbX9(const char   *F, char   *cSHP2)   {
 int   kNEo5  =  0,  THp0   = 0;
  while (1)   {
 if   (F[kNEo5]  ==   '\0')  break;
 int  LHMn =  0;
  char  Y = F[kNEo5];
   while   (F[kNEo5  +   LHMn] ==   Y)   LHMn++;
   cSHP2[THp0++] =  Y;
 THp0  +=  sprintf(cSHP2  +   THp0,  "%d",   LHMn);
   kNEo5 +=   LHMn;
   }
   cSHP2[THp0] = '\0';
}

int  main(int argc, char   *argv[])   {
  if   (argc   <   2) return  0;
 char   *yK   =  argv[1];
   char   Rox[256]   = {0};
   MmbX9(yK, Rox);
   printf("%s\n", Rox);
 return 0;
}