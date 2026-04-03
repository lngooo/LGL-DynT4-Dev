/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A09_F32_O_A01_Flattening.c
* Implementation Logic: Control-flow flattening with state machine derived from A01.
*/


#include <stdio.h>
#include <string.h>

void   ycc4(char*   W3)  {
   int UVv   = strlen(W3),  BSj  =  0,  bIp   =  1,  BQo  =   0;
 if  (UVv   == 0)  return;
   while   (BQo   != -1)   {
 switch   (BQo)   {
   case  0: BQo   = (BSj <  UVv)  ?   1   : 4;  break;
  case  1:  bIp  =  1; BQo =  2; break;
   case   2:   if  (BSj +  1  <  UVv && W3[BSj]   ==   W3[BSj+1]) { bIp++; BSj++;  } else   BQo =  3;   break;
 case   3:  printf("%c%d",   W3[BSj],  bIp);   BSj++;  BQo   = 0; break;
   case   4:  printf("\n"); BQo   =  -1; break;
 }
  }
}

int main(int   argc, char* argv[])  {
   if   (argc  < 2)  return 0;
 ycc4(argv[1]);
 return 0;
}