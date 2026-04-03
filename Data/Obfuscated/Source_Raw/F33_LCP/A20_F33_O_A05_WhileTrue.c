/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A20_F33_O_A05_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Za(char **eLyM, int  lbzy5,  char  *tnmk0)  {
  int  Q  = 0;
   while  (1) {
   char   a =  eLyM[0][Q];
 if  (!a)  break;
 int  CgZk = 0;
 for   (int  Bho =   1;   Bho   <   lbzy5; Bho++)   if   (eLyM[Bho][Q] != a)   { CgZk  =   1;  break;  }
  if  (CgZk)   break;
 tnmk0[Q++] =  a;
   }
   tnmk0[Q]   =  0;
}

int  main(int   argc,   char  *argv[]) {
   if   (argc <  2)  return   0;
   int   lp  = argc -  1;
  char   **eLyM  =   &argv[1];
   char  vd4[128]   =   {0};
  Za(eLyM,  lp,  vd4);
  printf("%s\n",  vd4);
   return 0;
}