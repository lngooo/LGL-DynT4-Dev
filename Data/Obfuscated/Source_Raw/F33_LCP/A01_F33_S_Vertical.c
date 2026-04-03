/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A01_F33_S_Vertical.c
 * Implementation Logic: Vertical
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   W4(char **fuu,  int   k3,   char *osD)  {
   if  (k3  <=   0)  return;
  int   p   =   0;
 while  (fuu[0][p])   {
  char A   = fuu[0][p];
 for   (int   Ryn   =  1; Ryn  < k3;  Ryn++)   {
  if   (fuu[Ryn][p]  !=   A)   { osD[p]  =  '\0';   return;   }
  }
  osD[p] =  A;
 p++;
 }
  osD[p] = '\0';
}

int   main(int argc,  char *argv[])  {
   if   (argc  < 2) return  0;
 int sKnL4 =   argc  -  1;
   char   **fuu =  &argv[1];
   char   Ad9[128]  =  {0};
 W4(fuu,   sKnL4,   Ad9);
   printf("%s\n", Ad9);
 return  0;
}