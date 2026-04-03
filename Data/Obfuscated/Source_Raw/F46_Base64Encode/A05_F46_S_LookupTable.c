/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A05_F46_S_LookupTable.c
 * Implementation Logic: LookupTable
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   Vu8(unsigned char   *sy,   int   XOx, char   *dnav)   {
 const  char   *o = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
   for  (int  Ryr =   0,   tw   =  0;  Ryr   <  XOx; Ryr +=   3) {
 unsigned  char   r   =  sy[Ryr], xOE0  = (Ryr+1   <  XOx)  ? sy[Ryr+1]  :  0,   QDoH  = (Ryr+2 <   XOx) ?  sy[Ryr+2]   :  0;
 dnav[tw++]   =   o[r   >>  2];
   dnav[tw++] = o[((r   &   0x03)  <<  4)  | (xOE0 >>   4)];
 dnav[tw++] =  (Ryr+1   < XOx)  ?   o[((xOE0   &  0x0F) <<  2)   |   (QDoH >> 6)]  :  '=';
  dnav[tw++]  =   (Ryr+2 <  XOx)   ?   o[QDoH   &  0x3F]   :  '=';
  }
 dnav[((XOx +   2)  / 3) *  4]  =  '\0';
}

int   main(int  argc, char *argv[])  {
 if (argc   < 2) return   1;
   unsigned   char  *sy  =   (unsigned  char  *)argv[1];
   int  XOx = 0;
   while   (sy[XOx]) XOx++;
   char dnav[400]   =  {0};
 Vu8(sy,  XOx, dnav);
 printf("%s\n", dnav);
   return   0;
}