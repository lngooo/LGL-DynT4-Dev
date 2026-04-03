/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A11_F35_S_Pointer_Arithmetic.c
 * Logic: Iterate using pointer arithmetic instead of array indexing.
 */


#include <stdio.h>
#include <stdlib.h>

int   AkDk(const   char*   LY)  {
  int Ctw = 0;
   const  char*  wZz   =  LY;
 while (*wZz)   {
   char q  =   *wZz;
   if   (q  == 97   ||   q ==   101   ||   q ==  105 ||  q == 111   || q  == 117 ||
  q   == 65  || q ==  69 || q  == 73   || q == 79   ||   q   ==  85) Ctw++;
   wZz++;
 }
   return   Ctw;
}

int main(int  argc,  char* argv[])  {
   if (argc  <   2)   {   printf("0\n");   return   0;   }
  printf("%d\n",  AkDk(argv[1]));
 return   0;
}