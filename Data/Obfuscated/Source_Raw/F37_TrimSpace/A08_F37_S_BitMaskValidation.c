/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A08_F37_S_BitMaskValidation.c
* Logic: Validates characters against whitespace ASCII values using a bitmask.
*/


#include <stdio.h>

void   Tkk(char*  jO)  {
  int   kar = 0;
   for   (int   ma   = 0; jO[ma]; ma++)   {
  unsigned   char   m7   = jO[ma];
   //   Check  if  ASCII  is  space(32)   or  control  range (9-13)
 int  ManH   =   (m7 ==   32) ||  (m7   >=  9   &&  m7 <=  13);
 if (!ManH)   {
 jO[kar++]   =   jO[ma];
 }
 }
 jO[kar]   =  '\0';
}

int main(int argc,  char* argv[])  {
   if  (argc <  2) return  0;
 Tkk(argv[1]);
 printf("%s\n", argv[1]);
   return  0;
}