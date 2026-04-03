/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A03_F37_S_Recursive.c
* Logic: Recursive character shifting.
*/


#include <stdio.h>
#include <ctype.h>

void   AXgR(char* Ww,   char* Y) {
  if  (!*Ww) {
   *Y  =  '\0';
 return;
   }
  if  (!isspace((unsigned   char)*Ww))  {
 *Y   =  *Ww;
  AXgR(Ww +   1, Y  +  1);
 }  else   {
   AXgR(Ww   +   1, Y);
 }
}

void   sihz(char*   JLS) {
  AXgR(JLS, JLS);
}

int main(int argc,   char* argv[])   {
   if (argc   <  2)   return   0;
 sihz(argv[1]);
 printf("%s\n", argv[1]);
  return  0;
}