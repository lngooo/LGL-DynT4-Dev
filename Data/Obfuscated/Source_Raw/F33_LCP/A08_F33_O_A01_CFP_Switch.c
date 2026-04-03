/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A08_F33_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Vt(char **p, int  vi,  char   *E)   {
  int  LAm   = 0,  g =  0;
  while   (LAm !=  3)  {
 switch (LAm)  {
   case   0:   LAm   =   (vi > 0   && p[0][g])  ?   1  :  3;   break;
  case 1:  {
 int   A   =  1;
 while  (A   <  vi   && p[A][g]  == p[0][g]) A++;
  if  (A   == vi)  { E[g]  = p[0][g]; g++;   LAm  = 0; }
   else LAm  = 3;
   break;
   }
  }
 }
  E[g] =   '\0';
}

int main(int  argc,  char   *argv[])  {
 if   (argc   <   2)   return  0;
  int   AO  =  argc   - 1;
 char   **p   = &argv[1];
  char   W[128]  =  {0};
   Vt(p, AO,  W);
  printf("%s\n", W);
   return 0;
}