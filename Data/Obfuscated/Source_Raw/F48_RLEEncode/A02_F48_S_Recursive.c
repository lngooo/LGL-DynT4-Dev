/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A02_F48_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  Xcvp(const char *tcR,   char *z) {
   if   (*tcR   == '\0')   return;
 int r = 1;
  while   (tcR[r] !=   '\0' && tcR[r]   == tcR[0])  r++;
   char   BhO[16];
 sprintf(BhO,  "%c%d",  tcR[0], r);
  strcat(z,  BhO);
   Xcvp(tcR  + r,   z);
}

int  main(int   argc,   char  *argv[])  {
  if   (argc < 2)   return   0;
 char  *X   = argv[1];
   char   BQba1[256]  = {0};
 Xcvp(X,   BQba1);
  printf("%s\n",  BQba1);
 return   0;
}