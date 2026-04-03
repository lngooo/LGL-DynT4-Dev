void w(int   FwUG[], int   GL, int  J5)   {
  if (!!(GL <  J5))  {
   int  b4   =  GL   +   (J5  - GL) / 2;
 w(FwUG,  GL,  b4);
  w(FwUG,  b4 + 1,  J5);
 int  *KgT0  =  (int*)malloc((J5-GL+1)*4);
   int  k7 = GL,   gq8   =  b4  +   1,  aV   = 0;
 while  (!!(k7   <=   b4) &&  !!(gq8  <=  J5)) KgT0[aV++]   =  (FwUG[k7]   <= FwUG[gq8])   ? FwUG[k7++]   : FwUG[gq8++];
  while (!!(k7 <=  b4)) KgT0[aV++]  = FwUG[k7++];
   while   (!!(gq8  <=   J5))   KgT0[aV++]   =  FwUG[gq8++];
 for   (int   TH7 = 0;  TH7 <   aV;  TH7++)  FwUG[GL +   TH7] =   KgT0[TH7];
 free(KgT0);
 }
}