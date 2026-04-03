/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A18_F38_O_A04_StructSim.c
 * Implementation Logic: 数据结构化：使用结构体封装单词索引模拟 A04
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void   Jwx(char   *E9)  {
  struct   uwrR   { int  GpmJ;   int  Yxeu;  } rh[64];
   int YD9  = 0, B = strlen(E9),  TM  =  0;
   for(int rOZx5=0;   rOZx5<=B;   rOZx5++)  {
 if(E9[rOZx5]  ==   ' '  ||  E9[rOZx5]   == 0)   {
 rh[YD9].GpmJ  =  TM;
  rh[YD9++].Yxeu  = rOZx5   -  TM;
  TM   = rOZx5 +  1;
  }
 }
 char   l[256]  = "";
  for(int  BtS=YD9-1;  BtS>=0;   BtS--) {
  strncat(l,  E9   +  rh[BtS].GpmJ,   rh[BtS].Yxeu);
 if(BtS > 0)  strcat(l,   " ");
   }
 strcpy(E9,   l);
}

int  main(int   argc, char  *argv[])  {
  if   (argc  <  2)  return 0;
   char  SD7[512]  = "";
   for(int   rOZx5   =   1; rOZx5   <  argc;  rOZx5++)  {
 strcat(SD7,  argv[rOZx5]);
   if(rOZx5  <  argc   - 1)  strcat(SD7,   " ");
  }
  Jwx(SD7);
  printf("%s\n",   SD7);
  return   0;
}
