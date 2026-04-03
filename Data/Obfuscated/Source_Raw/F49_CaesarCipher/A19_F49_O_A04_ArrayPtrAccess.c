/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A19_F49_O_A04_ArrayPtrAccess.c
 * Implementation Logic: A19_F49_O_A04_ArrayPtrAccess
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void DK5(char   *p,   int W)  {

 int  X6   =  (W   %   26 +   26)   %  26;
 char   wr[]  =  "abcdefghijklmnopqrstuvwxyz";
 char tw9[]  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   for(int   Hax=0;   p[Hax];  Hax++) {
   for(int   Ss9=0; Ss9<26;   Ss9++) {
   if(p[Hax]  == wr[Ss9]) {  p[Hax] =   wr[(Ss9+X6)%26];   break; }
   if(p[Hax] == tw9[Ss9])   {  p[Hax]  = tw9[(Ss9+X6)%26];  break; }
 }
   }
}

int  main(int   argc,   char *argv[]) {
   if (argc  <   3)  {
  return   1;
  }
 int W   =   atoi(argv[2]);
   DK5(argv[1], W);
  printf("%s\n",   argv[1]);
 return   0;
}
