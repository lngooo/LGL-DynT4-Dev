/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A20_F49_O_A02_WhileTrueBreak.c
 * Implementation Logic: A20_F49_O_A02_WhileTrueBreak
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  vrZ(char *WKJ,  int  qAK)   {

  char  *WveB = WKJ;
 int G =  (qAK  %  26   + 26) %   26;
  while(1)   {
  if(*WveB   == 0)  break;
  if(*WveB   >=  'A'   &&  *WveB  <=  'Z')  *WveB  = (*WveB  -   'A' +  G) %   26 +   'A';
   else if(*WveB  >= 'a' &&  *WveB   <=  'z')  *WveB  =  (*WveB   -  'a'   +   G) % 26 + 'a';
   WveB++;
 }
}

int main(int argc,  char   *argv[])   {
 if (argc <  3)  {
   return  1;
 }
   int qAK   =  atoi(argv[2]);
  vrZ(argv[1],   qAK);
   printf("%s\n",   argv[1]);
 return  0;
}
