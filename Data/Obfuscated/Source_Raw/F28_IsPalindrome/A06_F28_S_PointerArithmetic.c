/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A06_F28_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int M(char *B8)   {
  char *jlg  =   B8;
   while (*jlg) jlg++;
 jlg--;
 while   (B8  < jlg)  {
 if   (*B8  !=  *jlg) return   0;
 B8++;  jlg--;
  }
  return  1;
}

int   main(int  argc, char  *argv[])  {
  if (argc   <   2)   return   1;
  char  *B8 =  argv[1];
 int   WWjJ  =  M(B8);
   printf("%d\n",  WWjJ);
   return  0;
}