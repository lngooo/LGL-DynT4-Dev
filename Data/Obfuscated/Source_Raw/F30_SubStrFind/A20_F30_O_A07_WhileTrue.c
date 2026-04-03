/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A20_F30_O_A07_WhileTrue.c
* Implementation Logic: Replaces strchr loop with while(1) + manual break derived from A07.
*/


#include <stdio.h>
#include <string.h>

int  SDme5(char*  RL,  char* s) {
 char*  WBi  =   RL;
   int tACi5 = strlen(s);
   if (tACi5 ==  0)  return 0;
  while (1) {
   WBi =  strchr(WBi, s[0]);
  if (!WBi) break;
  int  d  =  1;
   for(int  KiL=0;   KiL<tACi5;  KiL++)  if(WBi[KiL]   != s[KiL])  d =   0;
 if (d) return  (int)(WBi  -   RL);
  WBi++;
   }
  return  -1;
}

int  main(int  argc,   char* argv[])  {
   if   (argc <  3)  return  0;
  printf("%d\n",   SDme5(argv[1],   argv[2]));
 return  0;
}