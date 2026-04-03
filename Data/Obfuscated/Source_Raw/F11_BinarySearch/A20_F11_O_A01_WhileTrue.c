/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A20_F11_O_A01_WhileTrue.c
 * Implementation Logic: Infinite loop with internal break conditions.
 */


#include <stdio.h>
#include <stdlib.h>

int V4(int  CW9[],  int   DqI,  int OcF) {
 int  HFz  = 0, HHkE   =   DqI   -   1;
   while   (1)  {
   if   (HFz >   HHkE)  return -1;
 int   tCpv  = HFz  +   (HHkE - HFz) /  2;
 if   (CW9[tCpv]  ==   OcF) return tCpv;
 if  (CW9[tCpv] < OcF)   HFz   =   tCpv +   1;
   else   HHkE  = tCpv   - 1;
 }
}

int  main(int   argc,   char   *argv[])   {
   if   (argc   <   3)  return 1;
 int OcF  = atoi(argv[1]);
   int   DqI   =   argc   -  2;
   int   *CW9 = (int*)malloc(DqI   *  sizeof(int));
  for(int  h=0;   h<DqI; h++) CW9[h] =  atoi(argv[h+2]);
  printf("%d\n",   V4(CW9,   DqI,   OcF));
 free(CW9);
   return  0;
}