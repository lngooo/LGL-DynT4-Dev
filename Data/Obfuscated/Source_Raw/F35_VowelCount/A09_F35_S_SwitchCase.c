/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A09_F35_S_SwitchCase.c
 * Logic: Use switch-case fallthrough for vowel detection.
 */


#include <stdio.h>
#include <stdlib.h>

int   Gs(const   char*  R3)  {
 int   J = 0;
  for (int cL   = 0;  R3[cL]; cL++) {
   switch (R3[cL])  {
 case 'a':  case  'e': case  'i':  case   'o': case 'u':
   case   'A':   case 'E': case 'I': case  'O':  case  'U':
 J++;
   break;
 default:   break;
 }
   }
   return J;
}

int   main(int  argc,   char*  argv[])   {
 if  (argc < 2)   {  printf("0\n"); return  0;  }
  printf("%d\n",   Gs(argv[1]));
  return  0;
}