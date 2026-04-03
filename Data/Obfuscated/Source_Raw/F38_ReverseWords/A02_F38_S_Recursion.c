/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A02_F38_S_Recursion.c
 * Implementation Logic: 递归拆解法：递归查找空格并重新拼接
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void kD(char *TKHz)  {
 char   *v5   =  strchr(TKHz,   ' ');
  if(!v5)   return;
  char GUgk[256]; strcpy(GUgk,  v5   + 1);
 kD(GUgk);
   int  YM5   =  v5 -   TKHz;
 TKHz[YM5]   =   '\0';
 char   hQ[256]; strcpy(hQ,   TKHz);
   sprintf(TKHz,  "%s %s",  GUgk,  hQ);
}

int  main(int   argc,  char   *argv[]) {
  if (argc <   2)   return  0;
 char   PfXJ[512]  =   "";
  for(int   ruX7   =  1; ruX7  < argc;  ruX7++) {
   strcat(PfXJ, argv[ruX7]);
 if(ruX7   <   argc   - 1) strcat(PfXJ, " ");
 }
  kD(PfXJ);
   printf("%s\n", PfXJ);
 return 0;
}
