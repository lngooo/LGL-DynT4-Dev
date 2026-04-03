/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A07_F36_S_MaskAndValidation.c
* Logic: Bitmasking to isolate the letter and applying logic XOR only on alpha range.
*/


#include <stdio.h>

void   yt(char*  vyS)   {
  for   (int  KyFR   = 0; vyS[KyFR]; KyFR++)  {
 unsigned   char L   =  (unsigned char)vyS[KyFR];
   unsigned   char  whWS4  = L   | 32;
 if (whWS4 >=  'a'   && whWS4  <=   'z')  {
   vyS[KyFR]  =   (char)(L   ^ 32);
   }
   }
}

int main(int  argc, char*  argv[]) {
   if  (argc <   2)   return 0;
  yt(argv[1]);
  printf("%s\n", argv[1]);
  return   0;
}