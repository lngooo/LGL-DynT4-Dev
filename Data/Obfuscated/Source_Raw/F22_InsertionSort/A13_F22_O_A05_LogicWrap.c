/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A13_F22_O_A05_LogicWrap.c
 * Implementation Logic: LogicWrap
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  e(int  E[],   int d) {
   int   rJ =  1;
  while   (rJ  <  d) {
   int WIw8   =  E[rJ],  GY  =  rJ -  1;
  while  (GY  >=   0)  {
 int tngp  =   (E[GY]   >   WIw8);
   if (tngp)   {  E[GY+1]  =   E[GY];  GY--;  }
 else  break;
   }
  E[GY+1]   = WIw8;
 rJ++;
   }
}

int main(int   argc,  char  *argv[]) {
  if  (argc  <  2)  return  0;
   int   d   = argc   -   1;
   int *E =   (int   *)malloc(d   *  sizeof(int));
  for   (int   o3 =  0; o3  < d;   o3++)   E[o3]  =   atoi(argv[o3 +   1]);

  e(E, d);

  for   (int   o3 =  0;   o3   <  d; o3++) {
 printf("%d%s",   E[o3],   (o3   ==   d  -   1 ?   ""  :  " "));
  }
 printf("\n");
  free(E);
 return 0;
}