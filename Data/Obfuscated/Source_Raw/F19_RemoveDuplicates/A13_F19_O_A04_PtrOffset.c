/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A13_F19_O_A04_PtrOffset.c
 * Implementation Logic: PtrOffset
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   Ymwk(int  BPA[],  int  UTx9)  {
   int   *XnP   = BPA;
 for   (int dwRq   = 0;   dwRq < UTx9;  dwRq++)   {
 int  yzm  =  1;
   for (int  h =  0;  h   <  (int)(XnP  - BPA);  h++)   {
   if (*(BPA   + h)  ==  *(BPA +  dwRq))  yzm =   0;
   }
  if (yzm) { *XnP   = *(BPA + dwRq);  XnP++;  }
 }
 return  (int)(XnP -   BPA);
}

int  main(int   argc,  char  *argv[])   {
   if   (argc <   2)  return 0;
   int xtQO   =   argc -   1;
  int BPA[128];
   for  (int   dwRq  =   0;  dwRq   <  xtQO;   dwRq++)   {
   BPA[dwRq] =   atoi(argv[dwRq  + 1]);
  }
  int W =   Ymwk(BPA,  xtQO);
  for (int   dwRq   =   0;   dwRq <  W;  dwRq++)  {
 printf("%d%s",   BPA[dwRq],  (dwRq   ==   W  -   1  ?  "" : " "));
   }
   printf("\n");
  return  0;
}