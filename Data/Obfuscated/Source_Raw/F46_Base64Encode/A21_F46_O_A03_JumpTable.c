/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A21_F46_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  CD5(unsigned   char *s,  int  HJG4, char *vVi)  {
  const char  *EtK9  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int Xo0=0;  Xo0<HJG4;   Xo0+=3)   {
   unsigned   int  p  =   (s[Xo0]<<16) | (Xo0+1<HJG4?s[Xo0+1]<<8:0)  | (Xo0+2<HJG4?s[Xo0+2]:0);
  for(int   BKp9=0;   BKp9<4;   BKp9++)   {
  int  j   =   BKp9;
  if(j ==  0)  vVi[(Xo0/3)*4] =  EtK9[(p>>18)&63];
   else if(j  ==   1)   vVi[(Xo0/3)*4+1]  =  EtK9[(p>>12)&63];
  else if(j ==   2)  vVi[(Xo0/3)*4+2]   =  (Xo0+1<HJG4)?EtK9[(p>>6)&63]:'=';
  else  vVi[(Xo0/3)*4+3]   = (Xo0+2<HJG4)?EtK9[p&63]:'=';
 }
  }
  vVi[((HJG4+2)/3)*4]  =   0;
}

int main(int   argc, char   *argv[])  {
 if (argc   <  2) return  1;
  unsigned char   *s =  (unsigned char  *)argv[1];
  int  HJG4  =   0;
  while (s[HJG4])   HJG4++;
 char vVi[400]  =   {0};
   CD5(s,   HJG4,  vVi);
  printf("%s\n",  vVi);
 return  0;
}