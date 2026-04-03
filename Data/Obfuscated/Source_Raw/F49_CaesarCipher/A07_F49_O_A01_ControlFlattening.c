/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A07_F49_O_A01_ControlFlattening.c
 * Implementation Logic: A07_F49_O_A01_ControlFlattening
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  IZmT(char   *FC,   int  fU) {

 int DqEC  =   0,  Rb8   =  0,  MnL =   (fU  %   26 +  26)   %   26;
 while   (DqEC   !=   4)   {
 switch (DqEC)   {
 case 0:   if (FC[Rb8])   DqEC =  1; else  DqEC   = 4;   break;
  case   1:   if (FC[Rb8]>='a'&&FC[Rb8]<='z') FC[Rb8]=(FC[Rb8]-'a'+MnL)%26+'a';   DqEC=2; break;
 case 2:  if   (FC[Rb8]>='A'&&FC[Rb8]<='Z') FC[Rb8]=(FC[Rb8]-'A'+MnL)%26+'A';  DqEC=3;   break;
  case 3:  Rb8++;  DqEC = 0;   break;
   }
   }
}

int  main(int argc,  char *argv[])   {
   if  (argc <   3)   {
  return 1;
   }
   int fU = atoi(argv[2]);
 IZmT(argv[1], fU);
  printf("%s\n",  argv[1]);
  return 0;
}
