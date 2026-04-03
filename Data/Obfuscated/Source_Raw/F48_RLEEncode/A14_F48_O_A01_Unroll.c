/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A14_F48_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   Uj(const  char *eo, char *ZV) {
 int n8 = 0,  I   = 0;
   while (eo[n8]) {
  int  J6 =  1;
   if (eo[n8+1] ==   eo[n8]) {
  J6  = 2;
   while  (eo[n8+J6]   ==  eo[n8]) J6++;
   }
  ZV[I++]   =   eo[n8];
  I   += sprintf(ZV  + I, "%d",   J6);
   n8  += J6;
 }
}

int  main(int  argc,   char   *argv[])  {
  if (argc  < 2)   return  0;
   char   *Gln  =   argv[1];
  char  Juq[256]   =   {0};
  Uj(Gln, Juq);
  printf("%s\n",   Juq);
 return 0;
}