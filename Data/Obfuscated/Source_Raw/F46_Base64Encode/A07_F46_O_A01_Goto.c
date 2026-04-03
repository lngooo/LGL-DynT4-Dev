/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A07_F46_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Fk(unsigned char  *P8,   int TKMF,  char *FVRr) {
  const   char  *cUOR  =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 int JOg9  =  0,   D  =  0;
huMy:
   if  (JOg9   >= TKMF)  goto   zc;
  FVRr[D++]  =  cUOR[P8[JOg9]  >>   2];
 FVRr[D++]  =   cUOR[((P8[JOg9] &   3)  << 4) |  (JOg9+1  < TKMF   ?  P8[JOg9+1] >>  4  :  0)];
  if (JOg9 + 1 >=   TKMF)  {   FVRr[D++] =  '='; FVRr[D++]   = '='; goto   zc;   }
  FVRr[D++]  = cUOR[((P8[JOg9+1]  &   15) <<   2)  |   (JOg9+2 <  TKMF   ?   P8[JOg9+2]  >>  6   :   0)];
 if   (JOg9   +   2  >= TKMF) {  FVRr[D++]   =  '=';  goto   zc;   }
   FVRr[D++]  =  cUOR[P8[JOg9+2]  &  63];
  JOg9 += 3;
  goto  huMy;
zc:
 FVRr[D] = '\0';
}

int  main(int argc, char *argv[])  {
   if  (argc   <   2) return 1;
  unsigned char *P8  =   (unsigned   char  *)argv[1];
   int  TKMF  = 0;
   while  (P8[TKMF])   TKMF++;
 char  FVRr[400]  =   {0};
   Fk(P8, TKMF,   FVRr);
  printf("%s\n",   FVRr);
 return  0;
}