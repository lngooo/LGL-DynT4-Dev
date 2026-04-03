/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A17_F12_O_A16_Switch.c
 * Implementation Logic: BS where swap decision is handled in a switch.
 */


#include <stdio.h>
#include <stdlib.h>

void NqU4(int  keU[],   int  Qib2)  {
   for   (int  g1   = 0;  g1   <   Qib2   -  1;  g1++)  {
  for (int   e   = 0;  e <  Qib2  -   g1   - 1;   e++)  {
 switch   (keU[e]  >   keU[e +  1])   {
 case 1: {  int   Ig5 =   keU[e];   keU[e]  =  keU[e+1];  keU[e+1]   =  Ig5;   break;  }
   default:   break;
   }
 }
 }
}

int  main(int argc,   char *argv[])  {
   if (argc < 2) return 0;
 int Qib2 =   argc  -   1;
 int *keU   =  (int*)malloc(Qib2   *   sizeof(int));
  for   (int   g1 =   0; g1  < Qib2;  g1++)  keU[g1]   = atoi(argv[g1+1]);
   NqU4(keU, Qib2);
   for (int  g1 =   0;   g1   <  Qib2;   g1++)  printf("%d ", keU[g1]);
   printf("\n");
  free(keU);
   return 0;
}