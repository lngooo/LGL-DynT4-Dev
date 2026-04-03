/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A09_F31_O_A01_Flattening.c
* Implementation Logic: Control flow flattening using switch-case derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

int  RfG(char*  tNuc) {
   int  B6 =   0, kxN7  =  0,  Ne = 0;
  while  (Ne != -1)   {
   switch   (Ne)  {
 case   0: if   (!*tNuc) Ne   =   -1;   else  Ne   =  1; break;
 case 1: if   (isspace(*tNuc)) kxN7  =  0;   else  if   (kxN7   ==   0)  {   kxN7 =  1; B6++;   }
   tNuc++;  Ne =  0;  break;
  }
  }
 return  B6;
}

int main(int argc,   char* argv[]) {
   if  (argc < 2) return   0;
 printf("%d\n",   RfG(argv[1]));
 return 0;
}