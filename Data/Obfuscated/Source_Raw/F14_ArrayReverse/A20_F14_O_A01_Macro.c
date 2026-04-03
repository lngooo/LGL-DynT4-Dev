/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A20_F14_O_A01_Macro.c
 * Implementation Logic: Reversal logic hidden in macros.
 */


#include <stdio.h>
#include <stdlib.h>

#define c4(a, b) {int t=a; a=b; b=t;}

void   kJ(int   s[],  int   ZeGW) {
 int  WJEy  = 0, suOv9   =   ZeGW  - 1;
 while(WJEy  < suOv9)   {
  c4(s[WJEy],   s[suOv9]);
   WJEy++;  suOv9--;
 }
}

int  main(int   argc, char   *argv[]) {
 if (argc   < 2)  return 0;
   int   ZeGW =  argc -  1;
   int  *s  =   (int*)malloc(ZeGW *  sizeof(int));
 for(int WJEy=0;  WJEy<ZeGW;  WJEy++)   s[WJEy]   = atoi(argv[WJEy+1]);
 kJ(s,  ZeGW);
 for(int   WJEy=0;   WJEy<ZeGW; WJEy++) printf("%d ", s[WJEy]);
  printf("\n");
   free(s);
 return  0;
}