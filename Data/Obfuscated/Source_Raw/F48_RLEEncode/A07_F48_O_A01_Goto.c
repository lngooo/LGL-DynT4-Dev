/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A07_F48_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void br(const   char *Pz, char   *to)   {
  int  CF =   0,  TOeS   = 0;
jdA:
 if (!Pz[CF])  goto  meM6;
  int   a =   1;
nnor7:
  if  (Pz[CF+a]   &&  Pz[CF+a] == Pz[CF])   {  a++;   goto  nnor7;   }
  to[TOeS++]   =  Pz[CF];
   TOeS   +=   sprintf(to  +   TOeS,   "%d",   a);
  CF   +=  a;
 goto   jdA;
meM6:
  to[TOeS] =   0;
}

int   main(int   argc,   char *argv[])  {
  if   (argc <  2)  return 0;
   char *fS =  argv[1];
   char  mRS2[256] =  {0};
  br(fS, mRS2);
 printf("%s\n",   mRS2);
 return   0;
}