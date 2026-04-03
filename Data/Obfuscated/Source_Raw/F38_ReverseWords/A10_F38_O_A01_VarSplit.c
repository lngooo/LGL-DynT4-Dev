/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A10_F38_O_A01_VarSplit.c
 * Implementation Logic: 数据流混淆：对 A01 变量进行拆分与冗余化
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void   G5(char  *obu)   {
  int   FG =  0, K  =   0; while(obu[FG+K])  FG++;
 int  DNr = FG + K;
  for(int  fzjk=0; fzjk <   (DNr  >> 1); fzjk++)  {
   char x3   = obu[fzjk];
 int DwY =  DNr  - 1  - fzjk;
   obu[fzjk]   =  obu[DwY];
   obu[DwY]   =   x3;
 }
   int  a2  =  0;
   for(int nf2=0;  nf2  <= DNr;   nf2++)   {
 if((obu[nf2] ^  32) ==   0 ||  obu[nf2]  == 0) {
 int   q   = (nf2  -  a2)  /  2;
   for(int  NqW6=0;   NqW6 <  q; NqW6++)   {
  char  nKSp   = obu[a2 +  NqW6];
 obu[a2 +   NqW6]  =   obu[nf2   -   1  -   NqW6];
  obu[nf2   -   1 -   NqW6]  =   nKSp;
   }
  a2 =  nf2   +  1;
  }
   }
}

int   main(int argc,   char *argv[])  {
   if (argc   <  2)   return   0;
   char   xf1[512]   =  "";
  for(int fzjk = 1; fzjk <  argc; fzjk++) {
 strcat(xf1,  argv[fzjk]);
   if(fzjk < argc  -  1)   strcat(xf1,   " ");
 }
 G5(xf1);
   printf("%s\n",   xf1);
   return 0;
}
