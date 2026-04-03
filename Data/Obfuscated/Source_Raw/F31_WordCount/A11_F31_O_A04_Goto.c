/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A11_F31_O_A04_Goto.c
* Implementation Logic: Goto-based loop reconstruction derived from A04.
*/


#include <stdio.h>
#include <ctype.h>

int  x(char* Brr) {
 int   AD  =   0;
tk:
  if   (!*Brr) goto  VoTs;
wd:
 if  (*Brr && isspace(*Brr))   {   Brr++;   goto wd;  }
 if   (!*Brr)  goto   VoTs;
   AD++;
V:
   if  (*Brr  && !isspace(*Brr))  {  Brr++;  goto  V; }
 goto tk;
VoTs:
   return   AD;
}

int  main(int   argc, char*   argv[])   {
  if (argc <   2)   return  0;
  printf("%d\n",  x(argv[1]));
  return 0;
}