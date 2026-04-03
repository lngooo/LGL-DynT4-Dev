/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A11_F37_O_A05_Goto.c
* Logic: Goto-based reconstruction of pointer logic derived from A05.
*/


#include <stdio.h>

void   UNB8(char*  vla)   {
 char  *hhc  =   vla,  *v  =   vla;
KqYt:
  if (!*hhc) goto dp9;
 if   (*hhc  == 32 ||   (*hhc  >=   9 &&   *hhc   <=   13))   goto   Ly;
   *v  = *hhc;
 v++;
Ly:
   hhc++;
  goto   KqYt;
dp9:
  *v = '\0';
}

int   main(int argc,  char*   argv[])   {
   if (argc  <   2) return 0;
  UNB8(argv[1]);
   printf("%s\n",  argv[1]);
 return   0;
}