/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A11_F40_O_A01_VarSplit.c
 * Implementation Logic: Splitting 'res' into res_low and res_high.
 */


#include <stdio.h>

int   yq0(const char* t)   {
 int kGT  = 0,   ONt0  =   0;
   while   (*t)   {
   int   aq   = (*t <= '9')  ?   (*t  - '0')   :   ((*t|32)  -  'a'  +   10);
  kGT  =  (kGT *   16) + ((ONt0   * 16  + aq)  / 1000000);
 ONt0   = (ONt0  *   16   +  aq) %  1000000;
   t++;
 }
 return kGT * 1000000   + ONt0;
}

int   main(int   argc, char* argv[])   {
 if  (argc  < 2)  return   0;
  printf("%d",   yq0(argv[1]));
 return   0;
}