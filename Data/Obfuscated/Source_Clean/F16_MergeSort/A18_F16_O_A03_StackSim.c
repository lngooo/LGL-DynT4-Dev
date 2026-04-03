void Sm(int   m[],   int   eNhl, int  q) {
  if   (eNhl  >=  q) return;
   int b   =  eNhl +   (q  - eNhl)   /   2;
  Sm(m, eNhl, b);
  Sm(m,   b   +   1,   q);
 int t7[256],  Rku7   =  eNhl, iNdq =   b   +   1, ItKE =  eNhl;
  while  (Rku7  <=   b  ||  iNdq <= q) {
 if   (Rku7 <=  b   &&  (iNdq   >  q  || m[Rku7] <=   m[iNdq]))   t7[ItKE++]   = m[Rku7++];
  else t7[ItKE++] =   m[iNdq++];
  }
   for (int Xrr   = eNhl; Xrr   <=  q;  Xrr++) m[Xrr]   =   t7[Xrr];
}