/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A20_F38_O_A02_RecursivePointer.c
 * Implementation Logic: 递归指针偏移：基于 A02 的指针版递归
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void UOL(char   *w) {
 char *KV = strchr(w,  ' ');
 if   (KV)   {
 char WlaJ9[256];
   strcpy(WlaJ9, KV   +   1);
 UOL(WlaJ9);
  int   ugRk =   KV  -   w;
   char Lei[256];  strncpy(Lei, w, ugRk);   Lei[ugRk] =  '\0';
   sprintf(w, "%s %s",  WlaJ9,   Lei);
  }
}

int main(int   argc,  char *argv[])   {
  if (argc <  2)  return 0;
   char  spC[512]   =   "";
   for(int   bCE =   1; bCE <  argc;  bCE++)  {
   strcat(spC,   argv[bCE]);
  if(bCE   < argc   -   1)  strcat(spC,  " ");
 }
 UOL(spC);
  printf("%s\n",  spC);
  return   0;
}
