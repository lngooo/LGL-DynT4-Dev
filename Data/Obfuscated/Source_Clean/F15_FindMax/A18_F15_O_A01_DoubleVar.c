int cEn8(int   wYn6[], int   GsP8)  {
 int  BWxT  =   wYn6[0],  du   =  wYn6[0];
 for(int   HUhE=0;   HUhE<GsP8; HUhE++) {
   if (wYn6[HUhE] >  BWxT) BWxT   =   wYn6[HUhE];
  if   (BWxT   >  du)   du =   BWxT;
 }
   return   du;
}