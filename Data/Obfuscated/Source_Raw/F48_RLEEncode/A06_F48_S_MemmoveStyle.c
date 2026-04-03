/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A06_F48_S_MemmoveStyle.c
 * Implementation Logic: MemmoveStyle
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Ekmm(const   char  *voOh,  char   *LLDl) {
 char bT5[256];   strcpy(bT5, voOh);
 int   h  = 0, wNY =   0;
 while   (bT5[h])   {
 int  mQB  = 1;
  char   E   =   bT5[h];
 while   (bT5[h + mQB]  ==   E) mQB++;
 LLDl[wNY++]   = E;
 wNY  +=   sprintf(LLDl +   wNY,  "%d",   mQB);
  h   +=   mQB;
 }
 LLDl[wNY] = '\0';
}

int  main(int argc,   char  *argv[]) {
   if (argc   <   2) return 0;
  char *vgBu   = argv[1];
  char   OIwD2[256]  =  {0};
 Ekmm(vgBu, OIwD2);
 printf("%s\n",   OIwD2);
  return  0;
}