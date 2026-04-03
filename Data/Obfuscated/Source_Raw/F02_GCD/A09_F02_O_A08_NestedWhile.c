/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A09_F02_O_A08_NestedWhile.c
 * Implementation Logic: Subtraction-based GCD with nested while loops to alter CFG.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int LW(int  Agk7,   int   IKC4)  {
  Agk7   = abs(Agk7);   IKC4 = abs(IKC4);
  while  (Agk7   !=   IKC4)  {
   while  (Agk7  >   IKC4) Agk7 -=  IKC4;
   while (IKC4  >  Agk7)   IKC4   -=  Agk7;
 if   (Agk7   ==   0 || IKC4  ==   0) break;
 }
   return (Agk7  == 0) ?  IKC4   : Agk7;
}

int  main(int   argc,  char *argv[])  {
 if   (argc   <  3) return   1;
  printf("%d\n",   LW(atoi(argv[1]),   atoi(argv[2])));
 return   0;
}