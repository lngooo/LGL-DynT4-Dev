/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A03_F39_S_Recursive.c
 * Implementation Logic: Processes the string recursively, passing the "isNewWord" state.
 * Input Format: <string>
 */


#include <stdio.h>
#include <ctype.h>

void  eC(char*   BM1,   int  sTy)   {
  if (!*BM1) return;
   if  (isspace(*BM1))  {
   eC(BM1 +   1,   1);
 } else {
  *BM1   =   sTy   ? toupper(*BM1) :  tolower(*BM1);
   eC(BM1 +   1,   0);
   }
}

void   Vom2(char*   BM1)   {
   eC(BM1,  1);
}

int   main(int   argc, char*   argv[])   {
   if   (argc <  2)   return  0;
 Vom2(argv[1]);
 printf("%s", argv[1]);
  return   0;
}