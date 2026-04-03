/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A05_F28_S_BitwiseXor.c
 * Implementation Logic: BitwiseXor derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int   h(char   *PbO)   {
  int O   = 0;
   while (PbO[O])  O++;
 int DZy2  =  0,  Tz9   =  O - 1;
 while   (DZy2 <  Tz9)   {
 if   ((PbO[DZy2]  ^   PbO[Tz9])  !=  0) return  0;
   DZy2++;  Tz9--;
   }
   return   1;
}

int   main(int  argc,  char  *argv[])  {
   if (argc <   2)  return 1;
 char *PbO  =  argv[1];
   int Vm  = h(PbO);
  printf("%d\n",  Vm);
  return 0;
}