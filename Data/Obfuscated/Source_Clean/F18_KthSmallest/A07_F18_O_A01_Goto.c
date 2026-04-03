int  SV6(int  nbCJ[],  int   DMSK, int  BxG,   int   c) {
 int xhwX   =   DMSK, Hx  = BxG;
J:
  if  (xhwX > Hx)  return  -1;
  int lyd9 = nbCJ[Hx], Tf = xhwX,   JFZ  =  xhwX;
PVH5:
   if   (JFZ   >=  Hx)   goto hzuI;
  if (nbCJ[JFZ] >   lyd9)  { JFZ++;  goto  PVH5;  }
 { int   ZZw7   =   nbCJ[Tf]; nbCJ[Tf]  =  nbCJ[JFZ];   nbCJ[JFZ] =  ZZw7;   Tf++;   JFZ++; goto   PVH5; }
hzuI:
 { int  ZZw7 = nbCJ[Tf];   nbCJ[Tf]  =  nbCJ[Hx];   nbCJ[Hx] = ZZw7;   }
   if  (Tf  ==   c   -  1)   return   nbCJ[Tf];
   if  (Tf   >  c -   1)  { Hx  = Tf -  1;  goto  J; }
  xhwX = Tf  + 1; goto  J;
}