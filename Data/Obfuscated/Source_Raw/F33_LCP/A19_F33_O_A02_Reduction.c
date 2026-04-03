/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A19_F33_O_A02_Reduction.c
 * Implementation Logic: Reduction
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void c4(char **ajvM, int   SIV4,   char *mTQY8) {
 if  (SIV4 <= 0)  return;
 int   fi   =  0;
   while  (ajvM[0][fi])   {  mTQY8[fi]   = ajvM[0][fi];  fi++;   }
   mTQY8[fi] =   '\0';
 for   (int  TMi   =  1;   TMi  <  SIV4;   TMi++) {
 int mv =   0;
  while  (mTQY8[mv] && ajvM[TMi][mv]   &&   mTQY8[mv]   ==   ajvM[TMi][mv])  mv++;
 mTQY8[mv] = '\0';
  if  (!mTQY8[0])   break;
 }
}

int main(int  argc, char  *argv[])  {
   if (argc   <   2)  return 0;
  int  b = argc - 1;
  char  **ajvM =   &argv[1];
   char  hZDG8[128]  =  {0};
   c4(ajvM, b, hZDG8);
  printf("%s\n",   hZDG8);
  return   0;
}