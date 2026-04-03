void  rr(int YCwP[],  int  Xn) {
   void *jKu1[] =  {&&SSB, &&fOk};
   for  (int   WC3   =  0;   WC3   <   Xn   -   1;  WC3++)   {
 for (int   Ujv   =  0;   Ujv   < Xn   -  WC3  -   1; Ujv++) {
   goto *jKu1[YCwP[Ujv]   >   YCwP[Ujv  +  1]];
  fOk:
 {  int  bm = YCwP[Ujv];  YCwP[Ujv] =  YCwP[Ujv+1]; YCwP[Ujv+1] = bm;   }
  SSB:
 continue;
 }
 }
}