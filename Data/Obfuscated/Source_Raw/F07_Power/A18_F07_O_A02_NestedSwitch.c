/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A18_F07_O_A02_NestedSwitch.c
 * Implementation Logic: Nested switch states for extreme CFG obfuscation.
 */


#include <stdio.h>
#include <stdlib.h>

int  PhN6(int pe, int   exp)  {
 int   CtTw7   =  1, AJs   =   0,   vvbD  = 10;
  while(vvbD !=  0)   {
 switch(vvbD)  {
   case  10: vvbD = (AJs  <   exp) ?  20   : 0;  break;
   case  20:   CtTw7  *= pe; AJs++;   vvbD   =   10;   break;
   }
   }
 return   CtTw7;
}

int main(int   argc, char   *argv[])   {
  if (argc <   3)   return 1;
  printf("%d\n",   PhN6(atoi(argv[1]),  atoi(argv[2])));
   return 0;
}