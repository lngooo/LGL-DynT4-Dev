/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A09_F46_O_A02_Opaque.c
 * Implementation Logic: Opaque
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   OJ(unsigned  char *Te,   int heAA,   char   *NpnY6) {
  if  (heAA  <=  0)  {   *NpnY6   = '\0';   return;  }
  const char  *PbK  =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if ((heAA   * heAA   + heAA)   % 2  == 0)   {
   unsigned  int  Gk  =   Te[0]  << 16 |  (heAA   >  1 ?  Te[1]  <<  8  :   0) |  (heAA > 2 ? Te[2]   :  0);
  NpnY6[0]   =   PbK[(Gk   >> 18)  &  0x3F];
  NpnY6[1]   =   PbK[(Gk  >> 12)   & 0x3F];
  NpnY6[2]   =  heAA   >  1  ?  PbK[(Gk  >>  6) &  0x3F]   :  '=';
   NpnY6[3]   = heAA  >  2 ?   PbK[Gk & 0x3F]   :  '=';
  OJ(Te +   3, heAA -   3,  NpnY6   +  4);
   }
}

int   main(int   argc, char  *argv[])  {
  if   (argc   <  2) return 1;
   unsigned   char  *Te   = (unsigned   char   *)argv[1];
  int   heAA   =   0;
   while (Te[heAA]) heAA++;
  char NpnY6[400]   =  {0};
   OJ(Te, heAA,   NpnY6);
  printf("%s\n",   NpnY6);
  return 0;
}