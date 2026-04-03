void  dEz3(int liq[], int  ZjoM) {
 for  (int MPoU =   1;  MPoU  <  ZjoM;   MPoU++) {
  int xWld8  =   liq[MPoU], ay;
  for (ay   = MPoU  -  1;   ay   >=   0   &&  liq[ay]   >  xWld8;  ay--) {
   liq[ay+1]   =   liq[ay];
 }
   liq[ay+1]  = xWld8;
   }
}