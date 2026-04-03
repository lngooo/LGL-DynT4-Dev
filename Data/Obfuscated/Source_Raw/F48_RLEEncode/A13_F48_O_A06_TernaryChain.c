/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A13_F48_O_A06_TernaryChain.c
 * Implementation Logic: TernaryChain
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  UmW(const  char *Bnh,  char *wv) {
 int NQZ =  0, tjG   = 0;
 while (Bnh[NQZ])  {
 int   nH   = 1;
  while (Bnh[NQZ  +  nH] ? (Bnh[NQZ+nH]  ==   Bnh[NQZ])  :   0) nH++;
  wv[tjG++]  = Bnh[NQZ];
 tjG +=   sprintf(wv + tjG, "%d", nH);
  NQZ +=   nH;
   }
}

int main(int  argc,   char   *argv[]) {
 if   (argc  <   2) return  0;
 char *dNh2 =  argv[1];
  char   p[256]   =  {0};
 UmW(dNh2,  p);
   printf("%s\n",  p);
 return  0;
}