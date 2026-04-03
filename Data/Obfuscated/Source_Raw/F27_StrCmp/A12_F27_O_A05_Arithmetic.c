/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A12_F27_O_A05_Arithmetic.c
 * Implementation Logic: A05 with arithmetic pointer manipulation.
 */


#include <stdio.h>
#include <stdlib.h>

int e(const  char   *b,  const  char  *ucr)   {
  while   (!(*b  - *ucr) && *b   !=   0)  {
 b  =   (char*)((size_t)b   + 1);
 ucr  =   (char*)((size_t)ucr   + 1);
   }
 return   (int)(*(unsigned   char*)b - *(unsigned  char*)ucr);
}

int main(int argc,  char  *argv[])   {
   if   (argc <  3)  return   0;
   printf("%d\n",   e(argv[1],  argv[2]));
  return  0;
}