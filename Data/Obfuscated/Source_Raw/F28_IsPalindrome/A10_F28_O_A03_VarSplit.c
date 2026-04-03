/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A10_F28_O_A03_VarSplit.c
 * Implementation Logic: VarSplit derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int x(char   *iY6)   {
 int  Bld   =  0;  while (iY6[Bld])  Bld++;
 int   pbL  = Bld  >>   1;
   for (int  tbR  =   0; tbR <  pbL; tbR++)  {
 int DdH   =   tbR;
  int  BR  = (Bld   - 1)  -  DdH;
   char   K9  = iY6[DdH];
 char  YU7  = iY6[BR];
   if   (K9   !=   YU7)   return  0;
  }
  return   1;
}

int  main(int argc,  char   *argv[])   {
   if  (argc   <   2) return  1;
   char  *iY6   =   argv[1];
 int   TZH9  =  x(iY6);
 printf("%d\n", TZH9);
   return   0;
}