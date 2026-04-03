/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A02_F06_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using a state machine.
 */


#include <stdio.h>
#include <stdlib.h>

int   OB(int   cQXG)  {
 int aW   =   0,   Rts =  5;
 while  (aW   != 5) {
   switch   (aW)  {
  case 0:   aW   =  (cQXG   <=  1)   ?  5   :  1;  if(cQXG <=   1)  return  0; break;
  case   1:  aW =   (cQXG <=   3) ?   5  : 2; if(cQXG   <= 3)  return   1;   break;
   case  2:  if   (cQXG %   2   == 0   || cQXG   %  3   == 0)  return  0;   aW  =  3; break;
   case 3: aW  =  (Rts *  Rts <= cQXG)   ? 4  :   5;   break;
  case 4: if   (cQXG   %  Rts   == 0 ||  cQXG  % (Rts  +  2)   ==   0)   return 0; Rts +=   6;  aW =  3;   break;
   }
  }
 return   1;
}

int main(int   argc,   char   *argv[])   {
   if   (argc   < 2) return   1;
 printf("%d\n",   OB(atoi(argv[1])));
 return 0;
}