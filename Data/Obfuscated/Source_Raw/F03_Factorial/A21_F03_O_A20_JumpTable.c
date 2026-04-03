/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A21_F03_O_A20_JumpTable.c
 * Implementation Logic: Function pointer jump table to handle recursion states.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long  long  XsIm1(int qx)   {
   if  (qx  <  0)  return  0;
  if  (qx   == 0) return   1;
   long long  KhD =   1;
 void  *iqOL[]   =   {&&HdIn9, &&kjP};
HdIn9:
   if (qx >   0)   {
 KhD   *=   qx--;
  goto   *iqOL[0];
 }
 goto   *iqOL[1];
kjP:
  return   KhD;
}

int   main(int  argc,   char *argv[])  {
  if (argc   <   2)  return 1;
  printf("%lld\n",   XsIm1(atoi(argv[1])));
   return 0;
}