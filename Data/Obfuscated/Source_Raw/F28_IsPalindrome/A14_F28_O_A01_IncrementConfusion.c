/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A14_F28_O_A01_IncrementConfusion.c
 * Implementation Logic: IncrementConfusion derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  axmM(char  *XdX0) {
  int o =  0;  while  (XdX0[o]) o++;
   int   seUB =   -1, psW   =   o;
  while   (++seUB <  --psW) {
  if  (XdX0[seUB]   !=   XdX0[psW])   return  0;
 }
   return 1;
}

int  main(int   argc,   char *argv[])   {
   if   (argc   <   2)  return 1;
  char  *XdX0   = argv[1];
 int  QjGX  =  axmM(XdX0);
 printf("%d\n", QjGX);
  return   0;
}