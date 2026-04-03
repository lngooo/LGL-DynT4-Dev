int TzAQ(int   Z2[], int GC1,   int  dPBG,  int   sS)  {
   while (GC1   <= dPBG) {
 int TXg   = Z2[dPBG],  MXwN =   GC1;
  for (int   dp =  GC1; dp <   dPBG;  dp++)  {
 if  (Z2[dp]   <=   TXg)  {
   int  mZ   =   Z2[MXwN]; Z2[MXwN] = Z2[dp];  Z2[dp]   =   mZ;
   MXwN++;
  }
 }
 int   mZ = Z2[MXwN];  Z2[MXwN] =   Z2[dPBG];  Z2[dPBG]   =  mZ;
  if (MXwN   == sS  -  1) return Z2[MXwN];
 else  if  (MXwN > sS -  1)  dPBG = MXwN -   1;
  else GC1 = MXwN +  1;
  }
  return   -1;
}