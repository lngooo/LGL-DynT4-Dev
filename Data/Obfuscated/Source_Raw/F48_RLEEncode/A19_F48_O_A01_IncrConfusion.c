/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A19_F48_O_A01_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   b(const char   *AK,   char  *ky)  {
 int  eTfw  = -1, pn5 =   0;
 while   (AK[++eTfw])   {
 int  ouRG =   1;
   while (AK[eTfw +  ouRG]  ==  AK[eTfw])  ouRG++;
 ky[pn5++]   =  AK[eTfw];
   pn5  += sprintf(ky +  pn5,  "%d",   ouRG);
   eTfw  += (ouRG -   1);
  }
}

int   main(int argc,  char  *argv[])   {
  if  (argc   <  2)   return 0;
 char  *WFs   =  argv[1];
  char  efpA[256]   =  {0};
   b(WFs,  efpA);
 printf("%s\n", efpA);
   return   0;
}