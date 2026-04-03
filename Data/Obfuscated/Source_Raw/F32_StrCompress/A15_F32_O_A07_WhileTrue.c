/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A15_F32_O_A07_WhileTrue.c
* Implementation Logic: Infinite loop with manual break derived from A07.
*/


#include <stdio.h>
#include <string.h>

void   Qv(char*  XHbb) {
  int   Kj   =   0;
 while (1)   {
   if  (!XHbb[Kj])  break;
  int  HI   =   Kj;
  while   (XHbb[HI]   && XHbb[HI]  ==  XHbb[Kj]) HI++;
 printf("%c%d",  XHbb[Kj],   HI  -  Kj);
   Kj = HI;
 }
 printf("\n");
}

int  main(int   argc,  char* argv[])  {
 if (argc   <   2) return  0;
   Qv(argv[1]);
   return  0;
}