/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A02_F49_S_PtrArithmetic.c
 * Implementation Logic: A02_F49_S_PtrArithmetic
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void nPS(char *kc8, int WlU) {

 char  *s   = kc8;
   int Aian =   (WlU   %   26  +   26) % 26;
  for  (;  *s   !=   '\0'; s++)   {
  if  (*s >=   65   && *s  <=  90) *s  =  ((*s -  65)   +  Aian)   %   26  +   65;
  else   if   (*s   >= 97   &&   *s <=  122) *s  = ((*s  -   97)  +  Aian)  %  26  +  97;
  }
}

int main(int  argc, char *argv[])   {
 if (argc <  3)  {
 return   1;
 }
   int   WlU  =   atoi(argv[2]);
 nPS(argv[1],   WlU);
 printf("%s\n",  argv[1]);
   return  0;
}
