/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A02_F39_S_PtrArith.c
 * Implementation Logic: Navigates the string using raw pointers instead of array indices.
 * Input Format: <string>
 */


#include <stdio.h>

void y(char*  we6)   {
 char* r9 = we6;
 int  uTa   =  1;
 while   (*r9) {
 if   (*r9  ==  ' '   || *r9 == '\t'  ||  *r9   ==   '\n') {
 uTa  =   1;
   }  else   {
 if (uTa)  {
   if  (*r9   >=   'a'   &&   *r9  <= 'z')  *r9   -= 32;
   uTa =  0;
 }   else  {
   if   (*r9 >=  'A'   && *r9  <=   'Z') *r9   +=  32;
 }
 }
 r9++;
 }
}

int   main(int  argc,   char*   argv[]) {
  if (argc   <  2) return  0;
   y(argv[1]);
 printf("%s", argv[1]);
   return 0;
}