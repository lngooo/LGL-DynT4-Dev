/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A20_F37_O_A01_WhileTrue.c
* Logic: while(1) loop with manual break and pointer casting derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

void   Y(char*   KNH) {
 int   JvQ6 =   0,  n   =   0;
   while   (1) {
   if   (KNH[JvQ6]   ==   '\0')  break;
 unsigned   char DEn  =  (unsigned  char)KNH[JvQ6];
  if   (!isspace(DEn))  {
 KNH[n]  =   (char)DEn;
 n++;
  }
   JvQ6++;
  }
   KNH[n] = '\0';
}

int main(int   argc,  char*   argv[])  {
 if   (argc   < 2)   return   0;
   Y(argv[1]);
   printf("%s\n", argv[1]);
 return 0;
}