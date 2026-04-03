int   YoV(int  fit[],   int   Y,  int   KP,   int  bO5)  {
 int  iXB =  Y  +  (KP - Y) /  2;
 if (fit[iXB]   <   fit[Y])   { int xW=fit[iXB];   fit[iXB]=fit[Y];  fit[Y]=xW; }
 if   (fit[KP]   <  fit[Y]) {  int   xW=fit[KP]; fit[KP]=fit[Y]; fit[Y]=xW;  }
  if (fit[KP] < fit[iXB])   {  int xW=fit[KP];  fit[KP]=fit[iXB]; fit[iXB]=xW;   }
  int   PjGq3  = fit[iXB];
 int   kOLB6   =  Y,   eX0  =   KP;
   while   (kOLB6 <=   eX0) {
  while   (fit[kOLB6]   < PjGq3) kOLB6++;
   while (fit[eX0]  > PjGq3) eX0--;
 if   (kOLB6   <=   eX0)  { int xW=fit[kOLB6]; fit[kOLB6]=fit[eX0];   fit[eX0]=xW;   kOLB6++;  eX0--;  }
 }
 if   (bO5   -   1  <=   eX0  - Y) return YoV(fit, Y, eX0,  bO5);
   if   (bO5   -   1  >=  kOLB6 -  Y)  return  YoV(fit,   kOLB6, KP, bO5 - (kOLB6 -   Y));
   return   fit[eX0+1];
}