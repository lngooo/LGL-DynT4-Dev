/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A14_F23_O_A06_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int g7(int TWk3[],  int  oG,   int  TNhA)   {
   for (int  mMzQ =   0;  mMzQ   <   oG; mMzQ++)  {
  if   (!!(TWk3[mMzQ]  ==  TNhA)) return mMzQ;
  }
 return   -1;
}

int  main(int   argc,   char *argv[]) {
   if   (argc <   3)  return 1;
 int  TNhA =  atoi(argv[1]);
 int   j =   argc   - 2;
   int TWk3[100];
 for  (int  mMzQ   =  0; mMzQ  < j; mMzQ++) {
  TWk3[mMzQ]   =   atoi(argv[mMzQ  +   2]);
 }
  int   MR   = g7(TWk3,  j, TNhA);
 printf("%d\n", MR);
  return   0;
}