/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A12_F20_O_A02_Bitwise.c
 * Implementation Logic: Bitwise
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  xL9(int  vhBQ[],  int BLuU)   {
 for   (int   wpY9 =  0; wpY9 <   BLuU;  wpY9++)  {
   int  *AqwG =  vhBQ   + wpY9;
 for  (int  Ipn = wpY9   + 1;  Ipn   < BLuU;   Ipn++)  {
   if   (*(vhBQ   + Ipn) <   *AqwG) AqwG =   vhBQ   +   Ipn;
   }
  if (AqwG !=  (vhBQ   +  wpY9))  {
   *AqwG   ^=   vhBQ[wpY9];  vhBQ[wpY9] ^=   *AqwG;  *AqwG  ^= vhBQ[wpY9];
 }
 }
}

int  main(int  argc,  char  *argv[])  {
   if   (argc <   2)  return 0;
  int   BLuU =   argc  -   1;
 int  *vhBQ =  (int *)malloc(BLuU   *  sizeof(int));
 for   (int  wpY9 = 0;   wpY9 < BLuU;  wpY9++)  vhBQ[wpY9]  =  atoi(argv[wpY9   + 1]);

   xL9(vhBQ,  BLuU);

 for  (int   wpY9 =   0; wpY9 < BLuU;   wpY9++) {
  printf("%d%s",  vhBQ[wpY9],  (wpY9   ==   BLuU  -  1  ?  ""   : " "));
 }
 printf("\n");
 free(vhBQ);
  return   0;
}