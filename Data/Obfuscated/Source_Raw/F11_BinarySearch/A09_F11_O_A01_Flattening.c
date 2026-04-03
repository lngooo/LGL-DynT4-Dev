/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A09_F11_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening for A01.
 */


#include <stdio.h>
#include <stdlib.h>

int t(int   LCcy[], int  vS,   int OaG)   {
   int gd  =  0, S8 =   vS - 1,   U,  n   =   0;
  while   (n !=   -1)   {
   switch   (n)   {
   case  0:  n  = (gd <= S8)  ?   1 :  5;   break;
   case   1:  U = gd  +  (S8 -  gd) /  2;  n   =  (LCcy[U] ==  OaG)  ?  2 : 3;  break;
 case   2:   return  U;
  case   3:   n =  (LCcy[U] <   OaG) ?   4 :  6;  break;
  case  4:  gd  =   U   +   1;   n = 0;   break;
 case  5: return   -1;
   case   6:   S8 =  U  -   1; n  =   0;   break;
 }
   }
   return  -1;
}

int main(int  argc,   char   *argv[]) {
  if (argc < 3) return  1;
 int   OaG  =   atoi(argv[1]);
  int   vS =  argc   - 2;
 int *LCcy = (int*)malloc(vS   *   sizeof(int));
  for(int   Cy=0;  Cy<vS;   Cy++) LCcy[Cy]   = atoi(argv[Cy+2]);
   printf("%d\n", t(LCcy, vS,   OaG));
 free(LCcy);
   return   0;
}