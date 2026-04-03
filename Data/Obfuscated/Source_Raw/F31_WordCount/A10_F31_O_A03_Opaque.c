/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A10_F31_O_A03_Opaque.c
* Implementation Logic: Injected opaque predicates derived from A03.
*/


#include <stdio.h>
#include <ctype.h>

int  kkd9(char*  y1) {
 int  rqSC  =   0;
   int   S  =  5, CXtg0 = 10;
   for (int gk = 0; y1[gk]   != '\0';  gk++) {
  if   (S   +  CXtg0  ==   15)  {
 if   (!isspace(y1[gk]) && (isspace(y1[gk+1])   ||  y1[gk+1] == '\0'))  rqSC++;
 }   else  {
  rqSC--; //  Never reached
 }
  }
  return   rqSC;
}

int main(int   argc, char* argv[])  {
   if   (argc  <   2)   return  0;
  printf("%d\n",  kkd9(argv[1]));
  return 0;
}