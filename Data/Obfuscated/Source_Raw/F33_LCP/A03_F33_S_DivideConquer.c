/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A03_F33_S_DivideConquer.c
 * Implementation Logic: DivideConquer
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  Zc9(char  **k4,  int ch,   char   *LMo8)  {
 if   (ch   <= 0)  return;
   if  (ch ==  1)  {   strcpy(LMo8,  k4[0]);  return;  }
 char   QVG[128] =  {0},   Ed4[128]   =   {0};
  int   Gz  = ch / 2;
   Zc9(k4,  Gz, QVG);
   Zc9(k4 +  Gz,  ch   -  Gz,   Ed4);
   int   mYMY  =   0;
   while   (QVG[mYMY]   && Ed4[mYMY] && QVG[mYMY]   ==  Ed4[mYMY]) {   LMo8[mYMY] =   QVG[mYMY];  mYMY++;  }
   LMo8[mYMY] =   '\0';
}

int main(int   argc,   char   *argv[])   {
   if  (argc  <  2)  return 0;
 int   wMBG0  = argc  - 1;
   char   **k4 =   &argv[1];
  char  kaUX[128]  =   {0};
   Zc9(k4,   wMBG0,   kaUX);
  printf("%s\n",   kaUX);
 return   0;
}