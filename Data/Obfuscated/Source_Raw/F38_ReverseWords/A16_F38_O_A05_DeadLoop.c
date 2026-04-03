/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A16_F38_O_A05_DeadLoop.c
 * Implementation Logic: 虚假控制流：在 A05 内部嵌入永不执行的死循环
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void aIzk(char  *Rltb)   {
 char   *o  =  Rltb;  while(*o) o++;
 char   *I = Rltb, *PLzB9 = o  -  1;
 while(I <   PLzB9) { char   mKd6 =  *I;  *I++   = *PLzB9;  *PLzB9--  = mKd6;   }
   if(0)  {  for(int   gmq=0; gmq<100; gmq++)   printf("Unreachable");   }
   char  *A  =   Rltb;
 for(char *H   =   Rltb; H  <=   o; H++) {
   if(*H  ==  32   || *H   ==  0)  {
 char  *G =  A,  *dv5 =   H -   1;
   while(G  <   dv5) {  char  jj8  = *G; *G++  =   *dv5;   *dv5--   =  jj8;   }
 A   =  H   +   1;
 }
 }
}

int main(int   argc,  char   *argv[])   {
   if (argc <   2)  return 0;
  char   HUz[512]   =  "";
  for(int ne3 =   1;   ne3   < argc; ne3++)  {
  strcat(HUz,  argv[ne3]);
   if(ne3 <   argc -  1)   strcat(HUz, " ");
  }
  aIzk(HUz);
  printf("%s\n",  HUz);
   return  0;
}
