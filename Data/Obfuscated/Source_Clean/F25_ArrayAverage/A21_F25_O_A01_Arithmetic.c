double  WN(int  xdzG[],  int   Rp)   {
  double pQy   =  0;
  for   (int  dlfQ  =   0; dlfQ   < Rp; dlfQ++)   {
 pQy =  pQy   -   (-xdzG[dlfQ]);
  }
   return   pQy  / (double)Rp;
}