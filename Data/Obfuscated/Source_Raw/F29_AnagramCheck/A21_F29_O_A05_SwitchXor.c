/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A21_F29_O_A05_SwitchXor.c
* Implementation Logic: Uses a state machine to perform XOR/Sum operations derived from A05.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int Reaf(char*   JRza,  char* WKG)  {
 if  (strlen(JRza)  !=  strlen(WKG)) return 0;
 int   x =  0, cc = 0,   apb7  =   0,  XYZ  =  0;
  while(JRza[apb7]){
  switch(XYZ){
  case  0:  x   ^=   JRza[apb7];   XYZ =  1; break;
 case 1: x   ^=  WKG[apb7];   XYZ   = 2;  break;
   case  2: cc +=   JRza[apb7];   XYZ   =   3; break;
   case   3:  cc -= WKG[apb7];  XYZ  = 0;   apb7++;  break;
 }
   }
   return (x  ==   0 &&   cc ==  0);
}

int  main(int  argc,   char* argv[]) {
  if   (argc  <  3) return  0;
 printf("%d\n",   Reaf(argv[1],   argv[2]));
   return 0;
}