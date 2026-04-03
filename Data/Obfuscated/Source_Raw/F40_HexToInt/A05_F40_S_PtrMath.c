/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A05_F40_S_PtrMath.c
 * Implementation Logic: Calculates power of 16 based on pointer distance from end.
 * Input Format: <hex_string>
 */


#include <stdio.h>
#include <string.h>

int bl6(const char*  G) {
 int  hB =  (int)strlen(G);
  int   xM   =  0;
 int WWmh3  =  1;
   for   (int   U3   =   hB -  1;  U3   >=  0;   U3--) {
   int Cq4   = (G[U3]   | 32);
  Cq4  =   (Cq4   >=   'a')   ? (Cq4  -  'a' +   10)   : (Cq4 -   '0');
 xM  +=   Cq4   * WWmh3;
  WWmh3   *= 16;
   }
   return  xM;
}

int main(int   argc,  char* argv[])   {
   if (argc   <  2)  return  0;
 printf("%d",  bl6(argv[1]));
  return 0;
}