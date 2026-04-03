/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A03_F46_S_UnionLogic.c
 * Implementation Logic: UnionLogic
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  KlBM(unsigned   char   *tl, int  esm0,  char   *y)   {
  const char   *fHwe   = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 union  { unsigned   char   gEr[3];   unsigned   int J;   } JyTy;
 int   qxkD =   0, sJ   =  0;
 while  (qxkD  <   esm0) {
 JyTy.J  =   0;
  int   aXNr7   =  0;
 for(int   SS=0; SS<3 && qxkD<esm0; SS++,   qxkD++,  aXNr7++)  JyTy.gEr[2-SS]  =  tl[qxkD];
 y[sJ++]   =  fHwe[(JyTy.J >>   18)  &  0x3F];
   y[sJ++]   =   fHwe[(JyTy.J  >>  12)   &  0x3F];
   y[sJ++] =   (aXNr7 >  1)  ? fHwe[(JyTy.J >>   6)   & 0x3F]   :  '=';
   y[sJ++]  =  (aXNr7   > 2) ?   fHwe[JyTy.J   &  0x3F]  : '=';
   }
  y[sJ]  =  '\0';
}

int main(int   argc,  char *argv[]) {
   if  (argc <   2) return   1;
  unsigned char   *tl =   (unsigned   char *)argv[1];
 int  esm0  =   0;
 while   (tl[esm0])   esm0++;
 char   y[400]  = {0};
  KlBM(tl,  esm0,  y);
  printf("%s\n", y);
   return   0;
}