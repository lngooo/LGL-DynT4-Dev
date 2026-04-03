/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A05_F49_S_MathCast.c
 * Implementation Logic: A05_F49_S_MathCast
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Y(char *sB6,   int   eKix0)   {

   int   Qxv   =  (int)((eKix0 %   26  +   26)  %   26);
   for(int   hvw4=0; sB6[hvw4]   !=   0; hvw4++)   {
 int   npP  = (int)sB6[hvw4];
   if(npP   >=   97 && npP <=   122) sB6[hvw4]   =  (char)(97 +   (npP   - 97   + Qxv)   %   26);
  if(npP  >=  65   &&   npP  <= 90) sB6[hvw4] =  (char)(65 + (npP  -  65  + Qxv) %   26);
   }
}

int  main(int argc,   char *argv[])   {
  if   (argc   <  3) {
 return  1;
 }
  int  eKix0 =   atoi(argv[2]);
   Y(argv[1],   eKix0);
   printf("%s\n",   argv[1]);
  return  0;
}
