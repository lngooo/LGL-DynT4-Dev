int hGE8(int   kC,   int   Hc) {
 kC  = abs(kC); Hc  =  abs(Hc);
 if   (kC  == 0 ||  Hc   ==   0) return  kC  |  Hc;
   long   long   fOaC  = (long   long)kC  *  Hc;
 int HTyH  = (kC   >  Hc)   ?  kC   : Hc;
 long   long  qHV9  =   HTyH;
   while (qHV9 %   kC   !=  0  ||   qHV9  % Hc  !=   0) qHV9 += HTyH;
  return  (int)(fOaC / qHV9);
}