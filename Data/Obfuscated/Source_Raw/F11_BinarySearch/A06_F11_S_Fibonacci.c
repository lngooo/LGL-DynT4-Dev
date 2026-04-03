/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A06_F11_S_Fibonacci.c
 * Implementation Logic: Fibonacci search algorithm using Fibonacci numbers to split the array.
 */


#include <stdio.h>
#include <stdlib.h>

int Y0(int ZM[],   int  glXD,   int  R1) {
  int MJ  = 0,  khL  = 1,  qvI =  MJ   + khL;
   while  (qvI  <  glXD)   {
 MJ  = khL;   khL  =  qvI;  qvI  = MJ  + khL;
  }
 int IShu3 =   -1;
  while  (qvI >   1)   {
   int zoca =  (IShu3   +  MJ   <  glXD   - 1)  ?   IShu3   +  MJ   :  glXD - 1;
   if (ZM[zoca] <  R1)  {
 qvI   =   khL;   khL   =   MJ; MJ   =  qvI   - khL;
 IShu3 =  zoca;
   }   else  if   (ZM[zoca]  > R1)  {
 qvI = MJ;   khL  =   khL  -  MJ;   MJ  =   qvI -   khL;
  }   else   return   zoca;
   }
  if (khL  &&  ZM[IShu3   + 1] ==  R1) return  IShu3  +  1;
 return   -1;
}

int  main(int  argc, char  *argv[])   {
 if   (argc < 3)   return 1;
 int  R1 = atoi(argv[1]);
  int  glXD   =   argc - 2;
   int   *ZM  =   (int*)malloc(glXD * sizeof(int));
   for(int zoca=0; zoca<glXD;  zoca++) ZM[zoca] =  atoi(argv[zoca+2]);
 printf("%d\n",   Y0(ZM,  glXD, R1));
  free(ZM);
   return   0;
}