/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A16_F34_O_A06_PtrMap.c
* Logic: Uses pointers to access histogram array derived from A06.
*/


#include <stdio.h>
#include <string.h>

int rkL(char*  F4,   char   u6)  {
 int TRs3[256];
 memset(TRs3,   0,  sizeof(TRs3));
 for(char* RJhi5  =   F4;  *RJhi5;  RJhi5++)   {
 (*(TRs3  + (unsigned  char)*RJhi5))++;
   }
   return *(TRs3  +  (unsigned   char)u6);
}

int   main(int  argc,   char*  argv[])   {
  if   (argc < 3) return 0;
  printf("%d\n",   rkL(argv[1], argv[2][0]));
 return   0;
}