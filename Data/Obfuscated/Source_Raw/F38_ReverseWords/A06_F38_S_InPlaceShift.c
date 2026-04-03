/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A06_F38_S_InPlaceShift.c
 * Implementation Logic: 原地移动法：利用字符平移覆盖实现
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void   d(char   *J2) {
  int   wX  =  strlen(J2);
 char  *COs8 =   (char*)malloc(wX  +   1);
  int   KWig   = 0;
   for(int  YX = wX-1;  YX   >=   0;  YX--) {
   if(J2[YX]  ==  ' ')  {
 for(int   Gs4=YX+1;  J2[Gs4]!=' '   &&  J2[Gs4]!='\0';   Gs4++)  COs8[KWig++] =   J2[Gs4];
 COs8[KWig++]  = ' ';
  }
   }
   for(int  Gs4=0;   J2[Gs4]!=' '   &&  J2[Gs4]!='\0';   Gs4++) COs8[KWig++]  =   J2[Gs4];
   COs8[KWig]  = '\0';
   strcpy(J2,   COs8); free(COs8);
}

int   main(int argc, char   *argv[]) {
  if (argc < 2)   return 0;
 char G[512] =  "";
 for(int  YX =  1;   YX  <   argc;   YX++)   {
  strcat(G, argv[YX]);
  if(YX  <   argc -  1) strcat(G, " ");
   }
   d(G);
  printf("%s\n",   G);
 return 0;
}
