/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A07_F33_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  JCjE5(char **Jm,  int  xVS,  char  *pJ) {
  int   BLlg  =  0;
  if  (xVS <= 0)  goto e1;
wbKA:
 if  (!Jm[0][BLlg])   goto e1;
  int NC3 =   1;
pT8:
   if  (NC3   >=   xVS) goto  Uu1;
   if (Jm[NC3][BLlg] !=   Jm[0][BLlg])  goto e1;
  NC3++;   goto  pT8;
Uu1:
   pJ[BLlg]   =  Jm[0][BLlg];  BLlg++;  goto   wbKA;
e1:
 pJ[BLlg]   =  '\0';
}

int main(int argc,  char  *argv[])  {
  if  (argc   <  2) return  0;
  int KR  = argc  - 1;
 char  **Jm   =   &argv[1];
  char O[128]  = {0};
  JCjE5(Jm,  KR,  O);
   printf("%s\n",  O);
   return 0;
}