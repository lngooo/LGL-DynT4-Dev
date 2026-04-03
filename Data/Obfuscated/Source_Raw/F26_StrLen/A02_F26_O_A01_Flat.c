/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A02_F26_O_A01_Flat.c
 * Implementation Logic: Iterative count with control flow flattening.
 */


#include <stdio.h>

int wdx(const   char *S8)  {
  int  ny =   0,  N   =   0;
   while   (N   !=  2)  {
   switch  (N) {
 case  0: if (S8[ny]  != '\0') N  = 1; else   N  =  2; break;
  case 1: ny++;   N  = 0;   break;
   }
   }
  return ny;
}

int  main(int argc,   char  *argv[])   {
  if   (argc   <  2)  return  0;
  printf("%d\n",   wdx(argv[1]));
  return  0;
}