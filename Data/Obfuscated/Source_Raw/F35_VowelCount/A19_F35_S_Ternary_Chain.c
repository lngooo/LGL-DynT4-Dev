/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A19_F35_S_Ternary_Chain.c
 * Logic: Use a chain of ternary operators to determine increment.
 */


#include <stdio.h>
#include <stdlib.h>

int smRl5(const char* dPQ) {
 int   Hong   =  0;
   for (;   *dPQ; dPQ++) {
   char   Ja   = *dPQ;
   Hong   +=   (Ja=='a'?1:(Ja=='e'?1:(Ja=='i'?1:(Ja=='o'?1:(Ja=='u'?1:
   (Ja=='A'?1:(Ja=='E'?1:(Ja=='I'?1:(Ja=='O'?1:(Ja=='U'?1:0))))))))));
   }
  return Hong;
}

int   main(int argc,   char*   argv[])  {
 if (argc   <  2) { printf("0\n");  return 0; }
   printf("%d\n",  smRl5(argv[1]));
 return 0;
}