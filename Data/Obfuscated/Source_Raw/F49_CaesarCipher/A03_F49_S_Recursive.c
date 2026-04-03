/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A03_F49_S_Recursive.c
 * Implementation Logic: A03_F49_S_Recursive
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  cXl3(char  *IToC,   int   OQ7) {

   if (*IToC  ==  '\0')  return;
  int wur  =   (OQ7   % 26  + 26)  %  26;
  if   (*IToC  >= 'A'  && *IToC  <=   'Z')  *IToC   =  (*IToC -   'A'  +  wur) %  26  +  'A';
 else if   (*IToC >=   'a'   &&  *IToC  <=  'z') *IToC  =   (*IToC  - 'a'   +   wur)  %  26 + 'a';
   cXl3(IToC   + 1,  OQ7);
}

int  main(int argc,  char *argv[])  {
  if (argc  <   3) {
   return   1;
  }
   int   OQ7  =  atoi(argv[2]);
  cXl3(argv[1],   OQ7);
 printf("%s\n",  argv[1]);
 return   0;
}
