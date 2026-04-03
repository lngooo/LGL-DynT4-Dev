/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A20_F34_O_A04_WhileTrue.c
* Logic: while(1) loop with manual break and pointer casting derived from A04.
*/


#include <stdio.h>
#include <string.h>

int  K9(char*   ibK8,   char  RMt) {
  int  zQ   = 0;
 char*   g4  =  ibK8;
  while   (1)  {
   g4   =   strchr(g4,   RMt);
   if  (g4  == NULL)  break;
  zQ++;
  g4++;
 }
 return  zQ;
}

int  main(int argc,   char*   argv[])  {
  if (argc <   3)   return 0;
   printf("%d\n",   K9(argv[1], argv[2][0]));
   return 0;
}