/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A02_F37_S_BufferCopy.c
* Logic: Copies non-space characters into a temporary stack buffer.
*/


#include <stdio.h>
#include <string.h>

void   yIH(char* jDb) {
   char   oW[4096];
   int ItK   =  0;
   for (int  tjp = 0;  jDb[tjp];   tjp++)  {
   if   (jDb[tjp] !=  ' ' &&   jDb[tjp]  !=   '\t' && jDb[tjp]   !=  '\n'  && jDb[tjp]  !=   '\r')   {
  oW[ItK++]  = jDb[tjp];
 }
 }
  oW[ItK]   = '\0';
  strcpy(jDb,  oW);
}

int  main(int  argc,  char*   argv[]) {
   if   (argc < 2)   return   0;
 yIH(argv[1]);
  printf("%s\n", argv[1]);
   return   0;
}