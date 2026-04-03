/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A02_F33_S_Horizontal.c
 * Implementation Logic: Horizontal
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  R3(char  **Z,  int   kq3,  char *QmX2) {
   if (kq3  <=  0)   return;
   strcpy(QmX2,   Z[0]);
 for  (int U =   1;   U  < kq3;   U++)   {
  int  GQl  =  0;
 while   (QmX2[GQl]  &&   Z[U][GQl] &&  QmX2[GQl]  ==   Z[U][GQl])  GQl++;
 QmX2[GQl]  =   '\0';
   }
}

int main(int  argc,   char   *argv[])  {
 if (argc  < 2)  return   0;
 int t9   =   argc - 1;
   char **Z = &argv[1];
 char NOIx4[128] = {0};
  R3(Z,  t9, NOIx4);
  printf("%s\n",   NOIx4);
  return  0;
}