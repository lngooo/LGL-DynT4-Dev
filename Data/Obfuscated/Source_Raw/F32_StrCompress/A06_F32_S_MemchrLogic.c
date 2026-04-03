/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A06_F32_S_MemchrLogic.c
* Implementation Logic: Uses a while loop to jump to the next different character.
*/


#include <stdio.h>
#include <string.h>

void   hkZR(char*   A) {
   while   (*A) {
   char  X   =   *A;
 int LjW1 = 0;
   char   *f = A;
   while   (*f   && *f   ==   X)   {
   LjW1++;
  f++;
 }
 printf("%c%d", X,   LjW1);
 A   =   f;
  }
   printf("\n");
}

int   main(int   argc,   char*   argv[]) {
   if (argc  < 2) return  0;
   hkZR(argv[1]);
   return  0;
}