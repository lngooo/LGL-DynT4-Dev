/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A01_F19_S_DoubleLoop.c
 * Implementation Logic: DoubleLoop
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Y(int  ZS6[],   int   Kjz) {
  int cVpM  = 0;
   for   (int   JS   =  0; JS   <   Kjz;   JS++)   {
  int   mG  =   0;
  for  (int  oq1   = 0; oq1   <  cVpM; oq1++) {
   if   (ZS6[JS]  ==   ZS6[oq1])  {  mG   =  1;   break; }
  }
   if (!mG)   ZS6[cVpM++] = ZS6[JS];
   }
 return cVpM;
}

int   main(int   argc,  char *argv[])   {
 if   (argc < 2)   return   0;
 int  STL =  argc -   1;
   int  ZS6[128];
   for (int   JS  =  0;  JS  <  STL; JS++)   {
   ZS6[JS] =  atoi(argv[JS   +   1]);
 }
 int  uB3 = Y(ZS6, STL);
  for  (int JS = 0; JS   < uB3;  JS++)  {
 printf("%d%s",  ZS6[JS],   (JS  ==   uB3 -  1  ?   ""   :  " "));
  }
  printf("\n");
 return  0;
}