/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A06_F49_S_BitwiseToggle.c
 * Implementation Logic: A06_F49_S_BitwiseToggle
 * Input Format: <string> <shift_int>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void fL7(char *vkI,  int   pE)  {

  int  Z   = (pE  %  26 + 26)   % 26;
  for(int   tavb=0; vkI[tavb]; tavb++) {
 char   Bp   =   vkI[tavb] & 32;
   char w  = vkI[tavb] & ~32;
 if(w >=   'A'   && w   <=   'Z')  {
 vkI[tavb]   =   ((w   -   'A'  +   Z)  % 26   + 'A') | Bp;
   }
 }
}

int   main(int argc, char  *argv[])  {
  if  (argc  <  3) {
   return 1;
  }
   int pE   =  atoi(argv[2]);
  fL7(argv[1],   pE);
   printf("%s\n",   argv[1]);
   return   0;
}
