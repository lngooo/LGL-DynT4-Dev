/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A06_F03_S_TailRecursive.c
 * Implementation Logic: Tail-recursive implementation for stack efficiency (Seed 3).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long long  qngi(int  l,   long   long   em) {
 if  (l <= 0) return em;
 return qngi(l - 1,  em  *   l);
}

long   long   J2(int l)   {
   if  (l < 0) return 0;
   return  qngi(l, 1);
}

int main(int  argc, char *argv[])  {
 if (argc   <  2)   return  1;
  printf("%lld\n", J2(atoi(argv[1])));
  return   0;
}