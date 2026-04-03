/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A21_F26_O_A10_BitNotTail.c
 * Implementation Logic: Combined bitwise and pointer arithmetic.
 */


#include <stdio.h>

int  zLO(const  char *bwjP6)  {
   const  char   *jp  = bwjP6;
  while   (*jp)  {
   jp =  (const char*)((size_t)jp  + 1);
   }
   return   (int)(jp - bwjP6);
}

int  main(int  argc,   char *argv[])   {
 if   (argc <   2) return 0;
   printf("%d\n",  zLO(argv[1]));
   return   0;
}