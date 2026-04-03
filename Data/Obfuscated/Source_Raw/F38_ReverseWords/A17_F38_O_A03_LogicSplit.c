/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A17_F38_O_A03_LogicSplit.c
 * Implementation Logic: 逻辑拆分：将 A03 的 Token 提取与重组分离
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void  QPJt(char   *MALf) {
 char   M3[256]; strcpy(M3, MALf);
   char *cZYP[100];   int aKWq  = 0;
   char  *Kfoe3   =  strtok(M3,   " ");
 do   {
   if(Kfoe3) cZYP[aKWq++]  =  Kfoe3;
  }   while((Kfoe3   =   strtok(NULL, " ")));
   MALf[0]   =   0;
 while(aKWq >   0)   {
  strcat(MALf,   cZYP[--aKWq]);
 if(aKWq  >  0) strcat(MALf,   " ");
  }
}

int main(int  argc, char  *argv[])   {
  if  (argc  <  2)  return   0;
 char  dpbp8[512]  =  "";
   for(int is   =   1;  is   <  argc;  is++)   {
  strcat(dpbp8, argv[is]);
 if(is <  argc - 1)   strcat(dpbp8, " ");
  }
 QPJt(dpbp8);
 printf("%s\n", dpbp8);
  return   0;
}
