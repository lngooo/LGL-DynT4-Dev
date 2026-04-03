/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A19_F38_O_A01_StepMod.c
 * Implementation Logic: 循环步长混淆：修改 A01 的翻转步长逻辑
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void gWrf(char   *a4)  {
   int  sB =  0;  while(a4[sB]) sB++;
 for(int   a=0;  a < sB/2; a+=1)  {
   char   bWxw4  =  a4[a];  a4[a]   =   a4[sB-1-a];  a4[sB-1-a] =   bWxw4;
   }
   int   lbQ  = 0;
 while(lbQ  < sB)  {
   int   os  =   lbQ;
 while(a4[os]   != ' ' &&   a4[os] !=  0) os++;
  for(int  MZ=0;  MZ < (os-lbQ)/2; MZ++)  {
 char   kd  =   a4[lbQ+MZ];
 a4[lbQ+MZ] = a4[os-1-MZ];
 a4[os-1-MZ]  = kd;
  }
  lbQ =  os +   1;
  }
}

int   main(int  argc,  char  *argv[]) {
 if   (argc <   2)  return  0;
 char   PB8[512]  =   "";
 for(int  a = 1; a   < argc;   a++)   {
  strcat(PB8, argv[a]);
  if(a  < argc  -  1)  strcat(PB8,  " ");
  }
   gWrf(PB8);
  printf("%s\n",   PB8);
   return   0;
}
