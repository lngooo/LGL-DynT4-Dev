/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A01_F29_S_FreqArray.c
* Implementation Logic: Uses a fixed-size frequency array (256 ASCII) to count characters.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int   TXw(char*  uejZ,  char*  YUx) {
  if   (strlen(uejZ)   != strlen(YUx)) return   0;
 int fAn[256]   =  {0};
  for  (int Ql  =   0;  uejZ[Ql]  !=  '\0';   Ql++)  {
   fAn[(unsigned  char)uejZ[Ql]]++;
 fAn[(unsigned char)YUx[Ql]]--;
  }
   for   (int   Ql = 0;  Ql  < 256;  Ql++)  {
  if   (fAn[Ql]  !=   0)   return   0;
 }
   return   1;
}

int main(int  argc,   char* argv[])   {
 if  (argc   <   3) return  0;
 printf("%d\n",  TXw(argv[1],   argv[2]));
   return   0;
}