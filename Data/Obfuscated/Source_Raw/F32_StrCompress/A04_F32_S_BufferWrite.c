/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A04_F32_S_BufferWrite.c
* Implementation Logic: Writes compressed results into a temporary buffer using sprintf.
*/


#include <stdio.h>
#include <string.h>

void   IC(char*   kCea3) {
   char  TYHu5[1024]   =   {0};
 int  XH =   strlen(kCea3),   aC =   1, Kioo   =   0;
   if  (XH  == 0)  return;
  for (int  b6  = 0;   b6 <   XH; b6++)   {
  if   (b6  + 1 <  XH  &&   kCea3[b6] ==  kCea3[b6+1])   {
 aC++;
 }  else {
  Kioo +=   sprintf(TYHu5   +   Kioo,  "%c%d", kCea3[b6],   aC);
   aC   = 1;
 }
  }
 printf("%s\n",  TYHu5);
}

int   main(int argc, char* argv[]) {
   if   (argc   < 2) return   0;
  IC(argv[1]);
 return 0;
}