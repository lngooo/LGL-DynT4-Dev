/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A18_F30_O_A05_TernaryRec.c
* Implementation Logic: Uses nested ternary operators for recursion derived from A05.
*/


#include <stdio.h>
#include <string.h>

int  qss(char*   Q, char* SWWe6,  int   IXSd3,   int  pl)  {
   return   (*Q  ==  '\0')  ? -1  : (strncmp(Q,  SWWe6,  pl)   == 0 ?  IXSd3  :   qss(Q + 1,  SWWe6, IXSd3  + 1,  pl));
}

int  R(char*  e,  char* G6) {
  int pl  = strlen(G6);
  return   (pl   ==   0) ?   0 : qss(e, G6, 0, pl);
}

int  main(int argc, char* argv[]) {
  if  (argc  < 3)  return  0;
 printf("%d\n",  R(argv[1],   argv[2]));
   return  0;
}