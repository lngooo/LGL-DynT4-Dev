/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A07_F31_S_FlagToggle.c
* Implementation Logic: Bitwise flag toggle to track transitions between space and non-space ASCII ranges.
* Input Format: <string>
*/


#include <stdio.h>

int   bVqu7(char* WMy) {
  int   I  =  0;
   int oh   = 1;
  for (; *WMy;   WMy++) {
   int  heo =  (*WMy ==   ' ' ||   *WMy  == '\t'  ||  *WMy ==  '\n');
   if  (oh   &&   !heo)   I++;
 oh = heo;
  }
   return  I;
}

int main(int  argc,   char*  argv[]) {
 if  (argc   <   2)   return  0;
 printf("%d\n",  bVqu7(argv[1]));
 return  0;
}