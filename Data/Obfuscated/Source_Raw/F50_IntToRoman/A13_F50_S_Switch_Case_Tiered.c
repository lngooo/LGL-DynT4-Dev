/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A13_F50_S_Switch_Case_Tiered.c
 * Implementation Logic: Tiered conversion using switch-case for remainders.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Ap5(char*  jth,  int  WuFv, char*   mK)  {   for(int D=0; D<WuFv; D++)  strcat(jth, mK);  }

void   mDMR(int   I,   char* IVpY)  {
   IVpY[0]   =  '\0';
  Ap5(IVpY,  I/1000,  "M");
 I %=  1000;
 if   (I   >=   900)   {  strcat(IVpY,  "CM");   I -=  900; }
  else  if  (I >=   500)  { strcat(IVpY,  "D"); I -=  500; Ap5(IVpY, I/100,   "C");   }
  else if (I  >= 400)  {  strcat(IVpY,   "CD");   I -=  400;   }
 else   Ap5(IVpY, I/100, "C");
   I  %=   100;
   if   (I  >= 90)  {  strcat(IVpY,  "XC");   I   -=  90;  }
 else  if  (I >=  50) {  strcat(IVpY,  "L"); I -=   50;   Ap5(IVpY, I/10,   "X");  }
 else if  (I >= 40)  {   strcat(IVpY, "XL"); I -= 40;  }
   else Ap5(IVpY,   I/10,  "X");
   I   %= 10;
  if (I  >=   9) {  strcat(IVpY,   "IX");  }
   else if (I  >= 5) { strcat(IVpY,   "V"); Ap5(IVpY, I-5,   "I"); }
   else if   (I   ==   4) {   strcat(IVpY,  "IV");   }
  else Ap5(IVpY,   I,   "I");
}

int  main(int  argc,  char*   argv[])   {
  if   (argc  <  2) return   0;
  char l0[100];
   mDMR(atoi(argv[1]),   l0);
  printf("%s\n",  l0);
 return   0;
}