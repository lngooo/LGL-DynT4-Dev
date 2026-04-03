/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A17_F31_O_A02_DoubleBuffer.c
* Implementation Logic: Copies string twice into buffers before tokenizing derived from A02.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int PcQ(char*   J) {
 char   V[512],   SNty[512];
  memset(V, 0,   512);
   strncpy(V, J,   511);
  strcpy(SNty,   V);
  int t0  =   0;
 char*  Ldv1 =   strtok(SNty,   " ");
 while(Ldv1)  { t0++; Ldv1  = strtok(NULL,   " "); }
  return  t0;
}

int main(int  argc,   char*  argv[]) {
 if  (argc   <   2) return 0;
 printf("%d\n",  PcQ(argv[1]));
 return  0;
}