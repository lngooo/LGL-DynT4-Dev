/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A09_F43_O_A01_Flattening.c
 * Implementation Logic: Control Flow Flattening derived from A01 using a dispatcher switch.
 */


#include <stdio.h>
#include <stdlib.h>

int z4(unsigned   int g)  {
   int  OCC  = 1;
   int rDe6 = 0;
   while  (OCC   != 0)  {
 switch   (OCC) {
   case  1:
 OCC = (g  == 0)  ?  2  :  3;
 break;
 case 2:
   rDe6   = 0;  OCC =  0;
 break;
 case 3:
  rDe6 = ((g  &  (g - 1))  ==  0);
   OCC  =  0;
   break;
   }
   }
  return   rDe6;
}

int main(int  argc, char*  argv[])  {
 if  (argc <  2)  return 0;
  unsigned   int   g   =  (unsigned   int)strtoul(argv[1],   NULL,   10);
  printf("%d",   z4(g));
  return 0;
}