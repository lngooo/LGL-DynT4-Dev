/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A07_F40_S_Switch.c
 * Implementation Logic: Uses a large switch statement for character conversion logic.
 * Input Format: <hex_string>
 */


#include <stdio.h>

int yX5(const char* bijb) {
   int Bj =   0;
 while(*bijb)   {
 int a9;
 switch(*bijb) {
   case   'a':  case   'A': a9  = 10;  break;
 case  'b':   case   'B': a9  =  11;  break;
 case 'c':  case 'C':   a9  = 12;   break;
  case   'd':  case  'D': a9   =  13; break;
   case  'e':   case 'E':  a9   =  14; break;
 case   'f':   case 'F':  a9   =   15; break;
 default:   a9   = *bijb  - '0';   break;
  }
   Bj  =  Bj  *  16   +  a9;
 bijb++;
 }
  return Bj;
}

int  main(int  argc,  char* argv[])  {
  if (argc   <  2)   return  0;
 printf("%d", yX5(argv[1]));
 return   0;
}