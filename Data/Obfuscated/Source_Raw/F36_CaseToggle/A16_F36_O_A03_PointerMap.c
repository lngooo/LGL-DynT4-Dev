/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A16_F36_O_A03_PointerMap.c
* Logic: Pointer-based table access derived from A03.
*/


#include <stdio.h>

void vbhy(char*  Rde)  {
  char   jzvh6[256];
  for(int  w=0;   w<256;   w++)   jzvh6[w]   =  (char)w;
  for(int w='a'; w<='z';   w++)  jzvh6[w]   =   (char)(w -   32);
 for(int   w='A'; w<='Z';  w++) jzvh6[w]   =   (char)(w  + 32);

 char  *WyX  =  Rde;
 while(*WyX)  {
   *WyX   =   *(jzvh6   +   (unsigned  char)*WyX);
  WyX++;
   }
}

int main(int   argc,  char*   argv[])  {
  if   (argc  <   2)   return  0;
 vbhy(argv[1]);
  printf("%s\n", argv[1]);
   return  0;
}