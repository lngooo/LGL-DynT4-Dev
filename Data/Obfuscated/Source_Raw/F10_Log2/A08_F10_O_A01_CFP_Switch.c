/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A08_F10_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int T(int  ZGua)   {
 int  hX0 = 0,  yokz8   =  0;
   while  (hX0 != 2)   {
  switch (hX0)  {
  case 0:  ZGua   >>= 1;  hX0   =  (ZGua   >   0)  ?   1 :   2; break;
   case  1:  yokz8++;   hX0  =   0; break;
  }
   }
  return yokz8;
}

int main(int  argc,  char  *argv[]) {
 if  (argc   < 2)  return   0;
  int  ZGua   =  atoi(argv[1]);
   if  (ZGua   <= 0) return  0;   
   int lzL   =   T(ZGua);
   printf("%d\n", lzL);
 return  0;
}