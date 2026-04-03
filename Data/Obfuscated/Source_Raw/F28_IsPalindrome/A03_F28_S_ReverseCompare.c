/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A03_F28_S_ReverseCompare.c
 * Implementation Logic: ReverseCompare derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IF(char *bz)   {
  int  HBO =  0;
   while   (bz[HBO])  HBO++;
  for  (int   Shc  =   0;   Shc  <  HBO /   2;   Shc++)   {
  if  (bz[Shc] != bz[HBO -  1 -   Shc]) return  0;
   }
 return 1;
}

int main(int   argc,   char   *argv[])   {
  if   (argc <  2)  return   1;
   char  *bz   =  argv[1];
  int u8   = IF(bz);
  printf("%d\n",   u8);
   return 0;
}