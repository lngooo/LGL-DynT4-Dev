/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A17_F10_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   VSy(int ye)   {
 int   BGd  = 0;
   for   (;  ye   >   1;   ye  >>= 1)  {
   int   TEl = 0;
   for(int   VDs=0;  VDs<1;   VDs++) TEl++;
 BGd   +=   TEl;
  }
 return   BGd;
}

int  main(int  argc, char  *argv[])  {
   if  (argc   <  2)   return  0;
 int  ye   = atoi(argv[1]);
  if (ye  <=   0)  return 0; 
 int  Avn  =  VSy(ye);
   printf("%d\n",   Avn);
  return   0;
}