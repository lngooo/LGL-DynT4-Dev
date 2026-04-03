/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A18_F23_O_A06_BitwiseNegation.c
 * Implementation Logic: BitwiseNegation
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i7(int  s[],   int  JCWJ2, int qS)  {
 for  (int  XNI  =  0;  XNI   < JCWJ2; XNI++)  {
   if  (~s[XNI]  == ~qS)  return  XNI;
   }
  return   -1;
}

int main(int  argc,  char  *argv[]) {
 if  (argc   < 3)   return 1;
  int   qS  =  atoi(argv[1]);
 int  Qw5  =   argc  -   2;
 int  s[100];
  for (int  XNI =   0;   XNI  < Qw5;   XNI++)   {
 s[XNI]  =   atoi(argv[XNI   +  2]);
 }
 int UXc  = i7(s, Qw5,  qS);
  printf("%d\n",  UXc);
 return   0;
}