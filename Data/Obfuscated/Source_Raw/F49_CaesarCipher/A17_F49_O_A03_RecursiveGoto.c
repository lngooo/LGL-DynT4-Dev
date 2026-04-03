/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A17_F49_O_A03_RecursiveGoto.c
 * Implementation Logic: A17_F49_O_A03_RecursiveGoto
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Om(char  *Kfha,   int  DDaU4) {

 int   C8  = (DDaU4   % 26 +  26) %   26;
   int lNy  =  0;
 O:   if (Kfha[lNy] ==  0) goto   mGw;
   if (Kfha[lNy] >=  'a'  &&   Kfha[lNy]  <=   'z')   Kfha[lNy]   = (Kfha[lNy]-'a'+C8)%26+'a';
  else  if   (Kfha[lNy]  >=  'A'   &&  Kfha[lNy]   <= 'Z') Kfha[lNy]  = (Kfha[lNy]-'A'+C8)%26+'A';
  lNy++; goto O;
  mGw:;
}

int main(int  argc,   char  *argv[])   {
 if (argc  <   3)  {
 return 1;
  }
 int DDaU4   =   atoi(argv[2]);
   Om(argv[1], DDaU4);
  printf("%s\n", argv[1]);
  return 0;
}
