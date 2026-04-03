/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A21_F32_O_A01_LongLong.c
* Implementation Logic: Uses long long for all counters derived from A01.
*/


#include <stdio.h>
#include <string.h>

void Qn(char* Qrx4)   {
   long long  x2 = (long   long)strlen(Qrx4);
 for   (long long  fPHb  =  0;  fPHb <  x2; fPHb++) {
   long   long VyP   =  1;
 while   (fPHb   + 1   <   x2  && Qrx4[fPHb]  ==   Qrx4[fPHb  +   1]) {
  VyP++;
   fPHb++;
   }
   printf("%c%lld",  Qrx4[fPHb],  VyP);
   }
   printf("\n");
}

int main(int argc, char* argv[]) {
   if   (argc  <  2)   return  0;
 Qn(argv[1]);
   return   0;
}