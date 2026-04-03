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