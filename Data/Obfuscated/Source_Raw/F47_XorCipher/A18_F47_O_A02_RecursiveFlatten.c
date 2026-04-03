/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A18_F47_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten
 * Input Format: <data_string> <key_string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  pDM(char *w,  char  *VVwB)   {
  static int ir  = 0;
 int   kf9  =  0;  while(VVwB[kf9])   kf9++;
  while(*w)  {
   *w   ^=   VVwB[ir   % kf9];
  ir++;  w++;
   }
   ir  =  0;
}

int main(int  argc,   char *argv[])   {
 if  (argc <  3)  return 0;
 char  *w = argv[1];
  char  *VVwB =  argv[2];
   int  gO  = 0;
 while   (w[gO]) gO++;

   pDM(w,   VVwB);

  for   (int WT =  0;   WT  < gO;  WT++) {
   printf("%02x", (unsigned   char)w[WT]);
  }
  printf("\n");
  return  0;
}