/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A15_F31_O_A08_PtrWrap.c
* Implementation Logic: Uses pointer to pointer to manipulate string access derived from A08.
*/


#include <stdio.h>
#include <string.h>

int OsS(char* zbsE)   {
  char**   Dqq2 =  &zbsE;
  int q =  0;
   int  WRTE8   =  (int)strlen(*Dqq2);
  for   (int   xmtS0  = 0;  xmtS0  <  WRTE8; xmtS0++) {
   char MhcG =  (*Dqq2)[xmtS0];
  char YsR   =  (xmtS0   ==   0) ? ' '  :   (*Dqq2)[xmtS0-1];
   if  ((MhcG !=   ' '  &&  MhcG   !=  '\t') &&  (YsR == ' '   ||   YsR   ==  '\t'))  q++;
   }
  return q;
}

int main(int   argc,   char*   argv[])  {
  if   (argc <  2) return  0;
  printf("%d\n",  OsS(argv[1]));
 return 0;
}