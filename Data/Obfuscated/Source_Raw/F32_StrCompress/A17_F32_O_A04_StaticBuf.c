/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A17_F32_O_A04_StaticBuf.c
* Implementation Logic: Uses static storage for buffer derived from A04.
*/


#include <stdio.h>
#include <string.h>

static  char   Fxe[2048];
void   i(char* q4) {
  int  lCQ2 =  (int)strlen(q4),   FAHk2  =  1,  A   =   0;
  if (lCQ2   ==  0)   return;
  for   (int H   =  0; H  <  lCQ2;   H++)   {
   if   (H  +   1   <   lCQ2   && q4[H]   == q4[H+1])   FAHk2++;
  else  {
  A  +=  sprintf(Fxe   + A, "%c%d",   q4[H], FAHk2);
 FAHk2 =  1;
   }
   }
  Fxe[A]   =  0;
  puts(Fxe);
}

int main(int argc,   char* argv[]) {
   if   (argc   <  2)   return   0;
  i(argv[1]);
  return 0;
}