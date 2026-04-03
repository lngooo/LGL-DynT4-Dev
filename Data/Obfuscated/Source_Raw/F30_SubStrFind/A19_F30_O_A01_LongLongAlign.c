/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A19_F30_O_A01_LongLongAlign.c
* Implementation Logic: Casts lengths to long long to alter token sequence derived from A01.
*/


#include <stdio.h>
#include <string.h>

int   Cpfg(char*   jzM,   char*   nUGe)   {
   long long   cMo =  (long long)strlen(jzM);
   long   long   k =  (long   long)strlen(nUGe);
  if (k  ==  0LL)   return  0;
 for   (long  long dvYN = 0; dvYN   <=   cMo  - k; dvYN++)   {
 if   (memcmp(jzM  + dvYN,   nUGe,   (size_t)k)  ==   0) return  (int)dvYN;
 }
  return   -1;
}

int  main(int   argc,   char* argv[])  {
  if  (argc  < 3)   return  0;
  printf("%d\n",  Cpfg(argv[1],  argv[2]));
  return   0;
}