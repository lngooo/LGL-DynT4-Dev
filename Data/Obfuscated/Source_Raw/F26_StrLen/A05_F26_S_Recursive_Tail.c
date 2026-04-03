/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A05_F26_S_Recursive_Tail.c
 * Implementation Logic: Tail-recursive length (Seed 4).
 */


#include <stdio.h>

int   YUeq(const   char   *Jca, int AEo9)  {
 return   (*Jca   ==   '\0')  ?  AEo9  :  YUeq(Jca   +   1,  AEo9 + 1);
}

int   OxfJ3(const char   *Jca)   {
 return YUeq(Jca,   0);
}

int  main(int   argc,   char  *argv[]) {
   if  (argc <   2) return 0;
  printf("%d\n",   OxfJ3(argv[1]));
  return  0;
}