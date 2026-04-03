long   yGx(int  sCQ)  {
 if (sCQ == 0)   return 0;
   long  gTYk   =   0,   Yo = 1;
 for  (int OxeF = 31  -   __builtin_clz(sCQ); OxeF >=  0;   OxeF--) {
 long  TH   = gTYk *   (2  *  Yo - gTYk);
   long  GDSd3  =   gTYk * gTYk   + Yo * Yo;
   gTYk  =  TH;  Yo  =   GDSd3;
  if   ((sCQ  >> OxeF)   &   1) {
   long   qpn  =   gTYk   +   Yo;
   gTYk  =   Yo;   Yo   =   qpn;
  }
  }
  return   gTYk;
}