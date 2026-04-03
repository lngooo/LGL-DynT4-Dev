/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A08_F32_S_LibraryPointer.c
* Implementation Logic: Uses strspn to count consecutive occurrences.
*/


#include <stdio.h>
#include <string.h>

void  r(char*  NtJ)   {
 while   (*NtJ) {
  char o[2] =  {*NtJ,  '\0'};
   int  Cnr3 =   strspn(NtJ,   o);
 printf("%c%d", *NtJ,  Cnr3);
  NtJ   +=  Cnr3;
  }
 printf("\n");
}

int   main(int  argc,  char*   argv[])  {
  if  (argc   <   2)  return   0;
 r(argv[1]);
   return   0;
}