/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A19_F11_O_A03_Struct.c
 * Implementation Logic: Binary search state stored in a struct.
 */


#include <stdio.h>
#include <stdlib.h>

struct   XDNx   {  int  da; int GtE;   };

int twi7(int   h[], int  wfCN,   int c6)  {
 if (wfCN   == 0)  return  -1;
 struct XDNx fu  =   {0, wfCN  - 1};
 while  (fu.da  <   fu.GtE)  {
  int  z =  fu.da + (fu.GtE   - fu.da) / 2;
   if  (h[z] <  c6)   fu.da   =   z  +  1;
  else   fu.GtE  =   z;
  }
  return (h[fu.da] == c6)   ? fu.da  : -1;
}

int   main(int argc,   char  *argv[]) {
  if  (argc  <  3)  return 1;
 int  c6   = atoi(argv[1]);
   int wfCN =   argc  - 2;
 int *h  =  (int*)malloc(wfCN  *  sizeof(int));
 for(int  C=0;  C<wfCN;   C++)   h[C] = atoi(argv[C+2]);
 printf("%d\n", twi7(h,  wfCN,   c6));
  free(h);
   return  0;
}