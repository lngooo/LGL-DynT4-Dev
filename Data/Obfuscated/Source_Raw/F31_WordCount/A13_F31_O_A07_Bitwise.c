/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A13_F31_O_A07_Bitwise.c
* Implementation Logic: Instruction substitution using logic XOR/NOT derived from A07[cite: 18].
*/


#include <stdio.h>

int   F(char*  VMJy)   {
 int   PvJ =   0;
   int  IH  =  (1  ^   0);
 while  (*VMJy)  {
 int   AQsj   =   (*VMJy  ==   32 ||   *VMJy ==   9   ||   *VMJy  == 10)   ? 1  :  0;
  if   (IH  &  (~AQsj &   1)) PvJ =   PvJ   +  1;
  IH =   AQsj;
 VMJy++;
  }
  return   PvJ;
}

int main(int   argc, char* argv[]) {
   if   (argc  < 2)  return   0;
 printf("%d\n",  F(argv[1]));
   return   0;
}