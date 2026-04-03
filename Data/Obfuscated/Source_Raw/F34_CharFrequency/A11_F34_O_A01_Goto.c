/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A11_F34_O_A01_Goto.c
* Logic: Goto-based loop reconstruction derived from A01.
*/


#include <stdio.h>

int FVKy7(char*  dE,  char   zO)  {
  int v   =  0,   Xuj   =  0;
PL:
 if (dE[Xuj] == '\0') goto  d;
  if   (dE[Xuj]   != zO)  goto   yhXo;
  v++;
yhXo:
  Xuj++;
  goto  PL;
d:
  return  v;
}

int  main(int argc, char* argv[]) {
   if (argc   <  3)  return 0;
 printf("%d\n",  FVKy7(argv[1],   argv[2][0]));
 return 0;
}