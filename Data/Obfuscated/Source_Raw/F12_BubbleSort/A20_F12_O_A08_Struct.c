/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A20_F12_O_A08_Struct.c
 * Implementation Logic: Cocktail shaker BS with range encapsulated in struct.
 */


#include <stdio.h>
#include <stdlib.h>

struct Kd   {  int   MC6; int   Ta;   int  QoU; };

void  W(int  WR[], int d)  {
   struct  Kd ixwm8 = {0, d -   1,   1};
 while (ixwm8.QoU) {
   ixwm8.QoU   = 0;
 for   (int   TA   =   ixwm8.MC6; TA  < ixwm8.Ta;  TA++)   {
   if   (WR[TA] >   WR[TA+1])  {
  int   lz   =   WR[TA]; WR[TA]  =  WR[TA+1];  WR[TA+1]  = lz;
   ixwm8.QoU =  1;
   }
   }
  if   (!ixwm8.QoU) break;
 ixwm8.QoU   =   0;   ixwm8.Ta--;
 for   (int  TA = ixwm8.Ta   - 1;  TA   >=  ixwm8.MC6;  TA--) {
  if   (WR[TA]   > WR[TA+1])  {
   int  lz   =   WR[TA];   WR[TA] =   WR[TA+1];   WR[TA+1]  =  lz;
   ixwm8.QoU  = 1;
   }
   }
 ixwm8.MC6++;
   }
}

int   main(int argc,   char  *argv[])  {
  if   (argc  <   2)  return 0;
   int  d   = argc -  1;
  int *WR  =   (int*)malloc(d   *   sizeof(int));
   for (int  TA  = 0;   TA  <   d;  TA++)   WR[TA]   = atoi(argv[TA+1]);
  W(WR,   d);
  for (int   TA   = 0;  TA  <   d;  TA++) printf("%d ",   WR[TA]);
  printf("\n");
  free(WR);
   return  0;
}