/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A21_F39_O_A07_BufferShuffle.c
 * Implementation Logic: A07 with redundant memory allocation and string copying.
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void Fn8(char*  WpE6)  {
  int u8   = strlen(WpE6);
  char*  ZYnA3 =  malloc(u8 +   1);
  char*   Gc  =   malloc(u8   + 1);
 Gc[0]  = 0;
   strcpy(ZYnA3,  WpE6);
 char*   ym   =  strtok(ZYnA3,   " ");
 while(ym) {
   char   Rz[128];
   strcpy(Rz, ym);
 Rz[0]  =   toupper(Rz[0]);
 for(int   JiCs=1;  Rz[JiCs];  JiCs++) Rz[JiCs]  =   tolower(Rz[JiCs]);
 strcat(Gc, Rz);
 ym   = strtok(NULL, " ");
   if(ym)  strcat(Gc,  " ");
  }
  strcpy(WpE6, Gc);
  free(ZYnA3);   free(Gc);
}

int   main(int  argc,   char*   argv[])   {
  if  (argc   < 2)   return   0;
  Fn8(argv[1]);
  printf("%s",   argv[1]);
   return   0;
}