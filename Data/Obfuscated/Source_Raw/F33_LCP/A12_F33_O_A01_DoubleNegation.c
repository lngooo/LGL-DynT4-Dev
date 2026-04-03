/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A12_F33_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void g(char  **AdXy,   int  IBSi,   char *D)   {
   int   Xhqp  = 0;
  while   (!!AdXy[0][Xhqp])   {
  int F6  =   1;
 for  (int Gb   = 1; Gb  < IBSi;  Gb++)   if (AdXy[Gb][Xhqp]  !=  AdXy[0][Xhqp]) F6 =  0;
   if   (!!F6)  { D[Xhqp] =   AdXy[0][Xhqp]; Xhqp++;  } else break;
 }
 D[Xhqp]   =   '\0';
}

int main(int  argc, char   *argv[])  {
  if  (argc <  2)   return  0;
   int  vtu = argc - 1;
 char  **AdXy   =  &argv[1];
   char  v[128]  = {0};
  g(AdXy,  vtu,  v);
 printf("%s\n", v);
  return 0;
}