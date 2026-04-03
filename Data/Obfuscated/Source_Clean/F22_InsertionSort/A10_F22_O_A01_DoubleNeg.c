void  wtYZ(int jzH1[],  int QsW)  {
   int   Gc  =  1;
 while   (!!(Gc <  QsW)) {
   int bkEl = jzH1[Gc],  wsuX   = Gc   - 1;
 while  (!!(wsuX   >= 0) && !!(jzH1[wsuX] > bkEl))   {
 jzH1[wsuX+1] =   jzH1[wsuX];
 wsuX--;
 }
  jzH1[wsuX+1] =  bkEl;
 Gc++;
   }
}