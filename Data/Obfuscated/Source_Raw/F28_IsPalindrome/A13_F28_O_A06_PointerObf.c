/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A13_F28_O_A06_PointerObf.c
 * Implementation Logic: PointerObf derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int   tfzd3(char   *sptD)  {
 char  *BEjX  =  sptD;
   char   *JTXg = sptD;
 while (*JTXg)   JTXg++;
   JTXg   =   JTXg -  1;
   while   (BEjX   <   JTXg)  {
 if  (*BEjX -  *JTXg   !=  0) return 0;
 BEjX++;
   JTXg--;
  }
  return  1;
}

int   main(int   argc,  char *argv[])  {
   if  (argc  <  2)   return   1;
   char   *sptD =  argv[1];
  int i = tfzd3(sptD);
 printf("%d\n", i);
   return 0;
}