/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A05_F48_S_TwoIndexLookahead.c
 * Implementation Logic: TwoIndexLookahead
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  OxQk3(const  char  *Lez, char   *Qg)  {
 int   rs =  0;
   for  (int   OA  = 0, dHqc  =  0;  Lez[OA];   OA  =   dHqc)   {
 while  (Lez[dHqc]  && Lez[dHqc]  ==   Lez[OA])   dHqc++;
 Qg[rs++]  = Lez[OA];
   char AFf6[12];
 sprintf(AFf6, "%d",  dHqc   -   OA);
 for(int J=0;   AFf6[J]; J++) Qg[rs++]  =   AFf6[J];
  }
  Qg[rs] =  '\0';
}

int main(int  argc,   char *argv[])  {
  if (argc  <   2) return 0;
  char  *WB =   argv[1];
  char   SZXh5[256]   = {0};
   OxQk3(WB, SZXh5);
  printf("%s\n",   SZXh5);
  return   0;
}