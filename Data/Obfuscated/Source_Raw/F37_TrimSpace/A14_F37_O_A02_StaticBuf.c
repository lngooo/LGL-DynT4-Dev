/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A14_F37_O_A02_StaticBuf.c
* Logic: Uses static buffer with pointer arithmetic derived from A02.
*/


#include <stdio.h>
#include <string.h>

static  char KvM3[4096];
void  oF(char* mQ1)   {
 int  iQB = 0;
   char   *XrO  =   mQ1;
   while   (*XrO) {
 if  (*XrO != ' ' &&  *XrO   != '\t'  &&   *XrO  !=   '\n')   {
 *(KvM3   +   iQB) =  *XrO;
   iQB++;
  }
 XrO++;
   }
 *(KvM3  + iQB)  = '\0';
  strcpy(mQ1, KvM3);
}

int  main(int  argc,   char*   argv[])   {
 if  (argc   <  2)  return  0;
 oF(argv[1]);
 printf("%s\n",  argv[1]);
   return 0;
}