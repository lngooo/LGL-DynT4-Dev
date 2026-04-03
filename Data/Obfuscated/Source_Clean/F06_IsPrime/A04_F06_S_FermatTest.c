long long p(long  long   G,  long   long   exp,  long  long   x)   {
 long long  TGrW  =   1;
  G  %=  x;
 while   (exp   >   0)   {
 if (exp %   2   == 1)  TGrW  = (TGrW *   G) % x;
  G =   (G  *   G)   %  x;
   exp   /=  2;
   }
   return  TGrW;
}

int   AEfa(int  Vg)  {
  if (Vg <=  1) return  0;
 if (Vg   <= 3)   return 1;

 if  (p(2, Vg -  1, Vg) !=  1) return   0;

  for (int vLx0 = 2;  vLx0 * vLx0  <=   Vg; vLx0++)  if   (Vg % vLx0 == 0) return  0;
 return 1;
}