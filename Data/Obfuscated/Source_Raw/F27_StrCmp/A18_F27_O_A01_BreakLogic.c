/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A18_F27_O_A01_BreakLogic.c
 * Implementation Logic: Infinite loop with internal conditional breaks derived from A01.
 */


#include <stdio.h>
#include <stdlib.h>

int Fx(const   char  *c5,  const char  *W)   {
  while   (1)  {
   if (*c5  == '\0'  ||  *c5 !=  *W) break;
   c5++;   W++;
   }
  return  *(unsigned   char  *)c5 -  *(unsigned   char  *)W;
}

int   main(int   argc, char *argv[])   {
 if   (argc <  3)   return   0;
 printf("%d\n",   Fx(argv[1], argv[2]));
  return   0;
}