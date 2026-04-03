int  nvZ(int  fT1[], int  wE)  {
 int  Oi[128]  = {0},  WPH =  0;
  if  ((wE  *   wE   +   wE)   %   2 ==   0)  {
   for   (int  obdD   =  0;  obdD <   wE;   obdD++)   {
 for (int   gUHe  =   obdD +  1;   gUHe   <  wE;  gUHe++) if (fT1[obdD]   == fT1[gUHe])   Oi[gUHe] =  1;
 }
   }
  for  (int   obdD =  0; obdD  <   wE;  obdD++) if   (!Oi[obdD])  fT1[WPH++]  =   fT1[obdD];
   return WPH;
}