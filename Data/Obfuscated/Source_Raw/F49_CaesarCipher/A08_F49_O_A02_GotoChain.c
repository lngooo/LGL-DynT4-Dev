/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A08_F49_O_A02_GotoChain.c
 * Implementation Logic: A08_F49_O_A02_GotoChain
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  PsOM7(char *Q4,  int  KL1)   {

  char  *xfi2   = Q4;
 int xX   = (KL1   %   26  + 26)   %   26;
   KwmR:   if  (!*xfi2)  goto   R;
  if   (*xfi2   >=  'A'  && *xfi2 <=  'Z')   {   *xfi2  =  (*xfi2   - 'A'  +   xX) % 26   + 'A';   goto m;  }
 if   (*xfi2 >= 'a'  && *xfi2   <=   'z') *xfi2  =  (*xfi2 -  'a'   +   xX) % 26 + 'a';
  m: xfi2++;   goto   KwmR;
   R:   ;
}

int main(int  argc,  char  *argv[])  {
   if   (argc  <  3) {
 return 1;
 }
   int  KL1 =  atoi(argv[2]);
   PsOM7(argv[1],  KL1);
 printf("%s\n", argv[1]);
   return  0;
}
