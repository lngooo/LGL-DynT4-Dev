int  KJ2(int  kl[],  int  gD7, int   l,  int p8) {
   int   Vsx   =  0;
   while (Vsx   !=  2)  {
  switch  (Vsx) {
 case  0:  if (gD7  <=   l)   Vsx   =   1;  else   Vsx =   2;   break;
   case  1: {
  int  s  =   kl[l],  fXH = gD7;
 for  (int p   =   gD7;   p  <   l; p++)  if   (kl[p] <=   s)   {  int   DU=kl[fXH]; kl[fXH]=kl[p];   kl[p]=DU;   fXH++;  }
   int  DU=kl[fXH]; kl[fXH]=kl[l]; kl[l]=DU;
  if  (fXH ==  p8  -  1) return   kl[fXH];
 if (fXH > p8  - 1) l = fXH   -   1; else   gD7 = fXH + 1;
 Vsx =   0;  break;
   }
 }
  }
  return  -1;
}