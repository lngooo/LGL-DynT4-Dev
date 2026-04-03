/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A02_F32_S_TwoPointers.c
* Implementation Logic: Classic two-pointer approach (anchor and explorer).
* Input Format: <string>
*/


#include <stdio.h>
#include <string.h>

void  qib(char*  ZfW6) {
 char *Rzc7   = ZfW6,  *n   =  ZfW6;
 while  (*Rzc7)   {
   n =   Rzc7;
   while  (*n  ==   *Rzc7) n++;
 printf("%c%ld",   *Rzc7,   (long)(n   -   Rzc7));
 Rzc7   =  n;
 }
   printf("\n");
}

int   main(int   argc, char*  argv[]) {
  if (argc <  2)  return 0;
 qib(argv[1]);
   return   0;
}