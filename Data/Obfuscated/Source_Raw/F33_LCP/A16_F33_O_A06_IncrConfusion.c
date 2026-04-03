/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A16_F33_O_A06_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  mdNu(char   **W,   int D2,  char  *uu)   {
 if  (D2 <= 0)  return;
  if (D2 ==   1)  { strcpy(uu, W[0]);   return;  }
   char ooA[128]   =   {0};
 mdNu(W,   D2 -   1, ooA);
 int N   =   -1;
 while   (ooA[++N] !=   '\0'   &&  W[D2-1][N]  ==   ooA[N]) uu[N] =  ooA[N];
  uu[N] = '\0';
}

int  main(int argc,   char   *argv[])   {
  if (argc < 2)   return  0;
  int Qd   =   argc -  1;
  char  **W =   &argv[1];
  char  x[128] =  {0};
  mdNu(W, Qd, x);
 printf("%s\n",  x);
  return  0;
}