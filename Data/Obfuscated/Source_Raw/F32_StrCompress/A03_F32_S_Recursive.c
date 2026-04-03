/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A03_F32_S_Recursive.c
* Implementation Logic: Recursive compression by finding the first run and recursing on the tail.
*/


#include <stdio.h>
#include <string.h>

void  ThtF(char* WlGU)  {
  if   (!WlGU || !*WlGU) return;
  int Yeqb   =   1;
  while (WlGU[Yeqb]  && WlGU[Yeqb]  == WlGU[0])   Yeqb++;
  printf("%c%d",  WlGU[0], Yeqb);
   ThtF(WlGU   +  Yeqb);
}

void   NDL(char* WlGU)   {
   ThtF(WlGU);
   printf("\n");
}

int  main(int argc, char* argv[])  {
  if   (argc   <  2)  return  0;
 NDL(argv[1]);
 return 0;
}