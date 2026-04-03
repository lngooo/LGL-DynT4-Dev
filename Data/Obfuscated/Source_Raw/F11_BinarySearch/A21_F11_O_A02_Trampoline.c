/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A21_F11_O_A02_Trampoline.c
 * Implementation Logic: Pseudo-trampolined recursive calls.
 */


#include <stdio.h>
#include <stdlib.h>

int wai(int  Cvq[],   int   Rt9, int eHei)  {
  int   PFw   =   0,   yN =  Rt9   -  1;
  while (PFw  <=   yN)   {
   int   Iccs  = PFw  +   (yN -   PFw)  /   2;
   if  (Cvq[Iccs]   ==  eHei)  return   Iccs;
 if   (Cvq[Iccs]  <   eHei)  { PFw  =  Iccs   +  1; continue; }
  yN = Iccs   -  1;
 }
  return -1;
}

int main(int  argc,   char *argv[])   {
  if  (argc   <   3) return 1;
   int   eHei =  atoi(argv[1]);
   int  Rt9   =   argc   - 2;
   int *Cvq  = (int*)malloc(Rt9  *  sizeof(int));
  for(int VeE6=0;   VeE6<Rt9;  VeE6++)   Cvq[VeE6]   = atoi(argv[VeE6+2]);
  printf("%d\n", wai(Cvq,   Rt9, eHei));
 free(Cvq);
  return 0;
}