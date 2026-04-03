/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A01_F23_S_BasicIter.c
 * Implementation Logic: BasicIter
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  K(int gtE9[],   int   bBse3,  int Ujz4) {
  for  (int   eJ   =  0;   eJ   <  bBse3; eJ++)   {
   if (gtE9[eJ] == Ujz4) return eJ;
 }
   return  -1;
}

int main(int   argc,   char *argv[]) {
   if (argc  < 3) return 1;
  int  Ujz4  = atoi(argv[1]);
  int  ihyG   = argc  -   2;
 int   gtE9[100];
 for  (int  eJ   =   0;   eJ  <   ihyG;  eJ++)  {
 gtE9[eJ]  = atoi(argv[eJ   + 2]);
  }
 int  VDM   =   K(gtE9,  ihyG,  Ujz4);
   printf("%d\n",  VDM);
 return  0;
}