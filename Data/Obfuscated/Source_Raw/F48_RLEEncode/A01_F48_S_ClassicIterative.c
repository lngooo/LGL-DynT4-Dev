/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A01_F48_S_ClassicIterative.c
 * Implementation Logic: ClassicIterative
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  ze1(const  char  *sB5,   char  *OjWn)   {
  int   cE8 =  0, C   =  0,  BHJ9   =  strlen(sB5);
   while (cE8 < BHJ9)  {
 int  ewt = 1;
  while   (cE8  +   1 <   BHJ9  && sB5[cE8] ==   sB5[cE8+1])   { ewt++; cE8++;   }
 C  +=  sprintf(OjWn   + C,   "%c%d",  sB5[cE8], ewt);
  cE8++;
   }
}

int   main(int argc,  char   *argv[])   {
   if (argc  <   2)  return  0;
 char *rn3 =  argv[1];
   char  OcRg[256]   =  {0};
  ze1(rn3,   OcRg);
   printf("%s\n",  OcRg);
   return   0;
}