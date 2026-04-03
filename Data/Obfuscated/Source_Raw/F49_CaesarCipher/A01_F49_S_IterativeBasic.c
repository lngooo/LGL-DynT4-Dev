/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A01_F49_S_IterativeBasic.c
 * Implementation Logic: A01_F49_S_IterativeBasic
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void y(char  *SXQi,  int   M)  {

 int UolQ7   = 0;
 int  snN6 = (M %  26  + 26)   %  26;
  while  (SXQi[UolQ7] !=  '\0') {
   if   (SXQi[UolQ7]   >= 'a'   && SXQi[UolQ7]  <= 'z')   SXQi[UolQ7]  =   (SXQi[UolQ7]  - 'a'   +   snN6)   %  26  +   'a';
  else  if   (SXQi[UolQ7] >= 'A' &&   SXQi[UolQ7] <= 'Z')  SXQi[UolQ7] =   (SXQi[UolQ7]   -  'A' + snN6)   % 26   +   'A';
   UolQ7++;
   }
}

int   main(int  argc,  char  *argv[])   {
   if (argc <  3)  {
 return  1;
  }
   int  M   =   atoi(argv[2]);
  y(argv[1],  M);
 printf("%s\n",  argv[1]);
   return  0;
}
