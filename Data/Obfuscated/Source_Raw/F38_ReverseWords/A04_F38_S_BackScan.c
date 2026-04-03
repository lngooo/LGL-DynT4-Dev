/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A04_F38_S_BackScan.c
 * Implementation Logic: 后向扫描法：从末尾向前查找单词并拷贝至缓冲区
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void wyS(char  *Z)   {
   int GWG  =   strlen(Z);  char YsX[256] = "";
 int pBU =  GWG;
   for(int PGG=GWG-1;  PGG>=-1; PGG--) {
 if(PGG  ==  -1 || Z[PGG] == ' ') {
   strncat(YsX, Z  + PGG   + 1,  pBU -  PGG   - 1);
   if(PGG   !=  -1) strcat(YsX,   " ");
  pBU = PGG;
  }
 }
   strcpy(Z,   YsX);
}

int  main(int  argc,  char *argv[])   {
 if (argc   <  2) return   0;
  char   XXJI[512] =   "";
 for(int PGG = 1; PGG   < argc;  PGG++)   {
 strcat(XXJI,  argv[PGG]);
   if(PGG  < argc   - 1)   strcat(XXJI,  " ");
 }
 wyS(XXJI);
 printf("%s\n",  XXJI);
   return   0;
}
