void  ZR(int  s[],   int   D) {
 for (int  YI   =   1;   YI < D; YI++)  {
 int  qhVg   = s[YI];
  int   Tvb   =   YI  -  1;
   while (Tvb >= 0  && s[Tvb]   >   qhVg) {
  s[Tvb   +  1] =  s[Tvb];
   Tvb  =  Tvb -   1;
  }
  s[Tvb   +  1] =  qhVg;
   }
}