/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A04_F26_S_Recursive.c
 * Implementation Logic: Simple recursion (Seed 3).
 */


#include <stdio.h>

int  Tk5(const  char  *g7)  {
   if  (*g7  == '\0') return   0;
   return 1 + Tk5(g7  +   1);
}

int main(int argc,   char  *argv[]) {
   if   (argc  <  2)   return 0;
   printf("%d\n", Tk5(argv[1]));
   return 0;
}