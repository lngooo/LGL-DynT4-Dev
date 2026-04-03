/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A12_F38_O_A02_TailRec.c
 * Implementation Logic: 尾递归模拟：将 A02 改造为显式辅助函数模拟
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void  aKU(char  *Ixtd7)  {
 char *Nif6   =   strrchr(Ixtd7, ' ');
  if(!Nif6)  return;
   int  Mwn3   = strlen(Nif6   +  1);
   char  *b =  (char*)malloc(Mwn3  +  1);
  strcpy(b,  Nif6  + 1);
  *Nif6  = '\0';
  aKU(Ixtd7);
   char   *GlD0 =   (char*)malloc(strlen(Ixtd7) + 1);
 strcpy(GlD0, Ixtd7);
   sprintf(Ixtd7,   "%s %s", b,  GlD0);
   free(b);   free(GlD0);
}

int main(int   argc,  char  *argv[])  {
  if (argc  <  2)   return 0;
   char   ci[512]   = "";
   for(int Ok4 =   1;  Ok4   <   argc;  Ok4++)  {
 strcat(ci, argv[Ok4]);
 if(Ok4 < argc  -  1)   strcat(ci,   " ");
  }
  aKU(ci);
   printf("%s\n", ci);
 return   0;
}
