/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A10_F30_O_A01_Opaque.c
* Implementation Logic: Injected opaque predicates (if(7*7==49)) derived from A01.
*/


#include <stdio.h>
#include <string.h>

int  j(char* t7, char*   Qc4) {
   int   b2   = strlen(t7), a8 =  strlen(Qc4);
 if (a8 ==   0)  return 0;
   for   (int   Ra  = 0;   Ra  <=  b2 - a8;   Ra++) {
  if ((Ra *   0)  ==   0)  {
   int p1   =   1;
 for (int   BR1  =   0;   BR1  <   a8;  BR1++)  {
 if   (t7[Ra  +  BR1]   != Qc4[BR1])   {  p1   =  0; break;  }
 }
   if   (p1) return Ra;
   }
  }
  return -1;
}

int main(int argc,   char*  argv[])   {
   if  (argc  <   3)   return   0;
  printf("%d\n",   j(argv[1], argv[2]));
   return  0;
}