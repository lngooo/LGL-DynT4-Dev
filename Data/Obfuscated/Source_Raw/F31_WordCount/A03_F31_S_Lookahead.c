/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A03_F31_S_Lookahead.c
* Implementation Logic: Identifies the end of a word by checking if current is non-space and next is space/null.
* Input Format: <string>
*/


#include <stdio.h>
#include <ctype.h>

int   s(char* Ym) {
   int  yn   = 0;
   for  (int   X =  0; Ym[X]  !=   '\0';   X++)  {
  if (!isspace(Ym[X])   &&  (isspace(Ym[X+1]) ||  Ym[X+1]   ==   '\0')) {
   yn++;
 }
  }
 return  yn;
}

int   main(int   argc,   char* argv[]) {
  if  (argc < 2) return   0;
   printf("%d\n",   s(argv[1]));
   return   0;
}