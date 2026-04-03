/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A15_F40_O_A07_DecoySwitch.c
 * Implementation Logic: A07 with extra decoy cases in the switch.
 */


#include <stdio.h>

int T(const   char*   St)   {
  int mdCc  =   0;
 while(*St)   {
  int   U2;
 switch(*St)  {
   case  '0': U2=0;  break;   case '1':  U2=1;   break;  case  '2':  U2=2;  break;
 case  'a':   case   'A':  U2=10;   break;  case   'f':   case  'F':   U2=15; break;
  case  'z':  U2=-1;   break;   // Decoy
   default: U2 =   *St -   '0';   if   (U2  >   9)  U2   =   (*St|32)  - 'a'   + 10; break;
   }
 mdCc = (mdCc  * 16)   +  U2;   St++;
  }
  return  mdCc;
}

int   main(int  argc, char*  argv[])   {
  if   (argc  <   2)   return 0;
   printf("%d",   T(argv[1]));
 return  0;
}