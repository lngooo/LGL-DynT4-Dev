/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A20_F29_O_A04_IterativeRec.c
* Implementation Logic: Reconstructs recursive logic into a stack-based loop (simulated) derived from A04.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int EWDt(char*   JgY, char*   j7)  {
   if   (strlen(JgY) != strlen(j7)) return  0;
 char zcXA3[256]; strcpy(zcXA3,   j7);
  int   i   =   strlen(JgY);
  for(int   ku=0;   ku<i; ku++){
  char* dhzh4  = strchr(zcXA3,  JgY[ku]);
  if(!dhzh4) return 0;
 *dhzh4 =   zcXA3[strlen(zcXA3)-1];
 zcXA3[strlen(zcXA3)-1] =   '\0';
  }
  return   1;
}

int  main(int  argc,   char*   argv[])  {
 if (argc   <  3)  return   0;
 printf("%d\n", EWDt(argv[1],   argv[2]));
   return 0;
}