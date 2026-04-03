/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A21_F38_O_A05_ManualCopy.c
 * Implementation Logic: 手动拷贝混淆：不使用 string.h 函数实现 A05
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void  aS4(char *kiP1) {
   char   *Lb  =   kiP1;  while(*Lb)  Lb++;
  int Ct  =  Lb - kiP1;
 for(int hy5=0;  hy5<Ct/2;  hy5++)   {  char fFov5=kiP1[hy5];  kiP1[hy5]=kiP1[Ct-1-hy5]; kiP1[Ct-1-hy5]=fFov5;  }
  char *hxCm  = kiP1;
 for(char   *YW =  kiP1;  ; YW++)  {
   if(*YW == ' '  || *YW   == '\0')   {
  char   *pqP   =  hxCm,   *Aku   =   YW - 1;
   while(pqP < Aku)   {   char fFov5  =  *pqP;   *pqP++  =   *Aku;   *Aku--  =   fFov5;   }
   hxCm =   YW   + 1;
   if(*YW   ==   '\0')   break;
 }
 }
}

int  main(int  argc,   char  *argv[]) {
 if   (argc <  2)  return   0;
  char fWCB7[512]  =  "";
  for(int hy5   =  1; hy5  <   argc;   hy5++) {
 strcat(fWCB7,   argv[hy5]);
  if(hy5 <  argc - 1)  strcat(fWCB7, " ");
   }
   aS4(fWCB7);
 printf("%s\n",   fWCB7);
  return   0;
}
