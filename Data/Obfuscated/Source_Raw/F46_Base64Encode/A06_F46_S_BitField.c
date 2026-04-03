/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A06_F46_S_BitField.c
 * Implementation Logic: BitField
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  q(unsigned char *APPP,  int daK6, char   *hZx)   {
 const  char   *FxJk =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 struct   {   unsigned int  sNTd8:6; unsigned  int   gCCK4:6; unsigned   int fAG:6;  unsigned  int   aOR:6;   } LQJ;
   int   Bla  =   0,  YyKQ  =  0;
 while(Bla < daK6) {
 unsigned   int ST   =  (APPP[Bla]  <<   16) | ((Bla+1   <  daK6   ? APPP[Bla+1] : 0)   << 8)   |  (Bla+2 <   daK6   ?   APPP[Bla+2] :  0);
 LQJ.sNTd8  =  (ST   >>   18)   &   0x3F;  LQJ.gCCK4 =   (ST  >>  12) &   0x3F;
  LQJ.fAG  =  (ST  >> 6)  &  0x3F;   LQJ.aOR   =  ST  &  0x3F;
   hZx[YyKQ++]   =  FxJk[LQJ.sNTd8];   hZx[YyKQ++]   = FxJk[LQJ.gCCK4];
 hZx[YyKQ++] =   (Bla+1 <   daK6)   ?  FxJk[LQJ.fAG]   : '=';
   hZx[YyKQ++]  = (Bla+2 < daK6) ?  FxJk[LQJ.aOR]   :   '=';
   Bla   +=   3;
  }
   hZx[YyKQ] =   '\0';
}

int  main(int  argc, char   *argv[])   {
   if (argc < 2)   return   1;
   unsigned   char *APPP  =  (unsigned   char  *)argv[1];
  int daK6 =  0;
  while (APPP[daK6])  daK6++;
   char  hZx[400] =  {0};
   q(APPP,  daK6, hZx);
  printf("%s\n",  hZx);
   return   0;
}