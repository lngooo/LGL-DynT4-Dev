/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A07_F38_O_A01_Goto.c
 * Implementation Logic: 跳转重构：将 A01 的循环拆解为 Goto 标签链
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void yEIz(char  *duZ4)  {
 int   TYQ  =   0; Yv: if(duZ4[TYQ]) { TYQ++; goto  Yv;   }
 int   OPn5  =   0;  V: if(OPn5  < TYQ/2)  {  char   U=duZ4[OPn5];   duZ4[OPn5]=duZ4[TYQ-1-OPn5];  duZ4[TYQ-1-OPn5]=U;  OPn5++;   goto   V;   }
  int  psAD = 0;  OPn5  =   0;
  z7:   if(OPn5   <=   TYQ) {
  if(duZ4[OPn5]   == ' '  || duZ4[OPn5]  == '\0') {
  int   qir6 =   0;   
   G:  if(qir6 < (OPn5-psAD)/2)  { char  U=duZ4[psAD+qir6]; duZ4[psAD+qir6]=duZ4[OPn5-1-qir6]; duZ4[OPn5-1-qir6]=U;  qir6++; goto  G; }
  psAD   =  OPn5 +   1;
 }
 OPn5++; goto   z7;
  }
}

int main(int   argc,   char  *argv[])   {
   if  (argc  < 2)  return 0;
  char   XxYX[512]  =  "";
 for(int OPn5 =   1;  OPn5 <  argc;  OPn5++)  {
   strcat(XxYX, argv[OPn5]);
 if(OPn5   < argc - 1)  strcat(XxYX, " ");
 }
   yEIz(XxYX);
   printf("%s\n",   XxYX);
 return  0;
}
