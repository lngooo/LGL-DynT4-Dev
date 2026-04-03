/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A09_F33_O_A02_MathIdent.c
 * Implementation Logic: MathIdent
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Bm(char  **YcxS,   int  ChCU,  char *LzeJ)   {
   if (ChCU  <= 0)   return;
   strcpy(LzeJ,  YcxS[0]);
   for (int   QGJc = 1;   QGJc   <   ChCU;   QGJc++) {
   int  RRv =   0;
   while   (LzeJ[RRv]) {
 double  qCfP  =   (double)LzeJ[RRv]   -   (double)YcxS[QGJc][RRv];
 if   ((int)floor(qCfP * qCfP) !=  0) break;
   RRv++;
 }
 LzeJ[RRv]   =  '\0';
  }
}

int   main(int   argc, char   *argv[])  {
  if (argc   <   2)   return 0;
  int  M   = argc  - 1;
  char   **YcxS = &argv[1];
 char iv[128]  =   {0};
 Bm(YcxS, M,  iv);
 printf("%s\n",  iv);
 return 0;
}