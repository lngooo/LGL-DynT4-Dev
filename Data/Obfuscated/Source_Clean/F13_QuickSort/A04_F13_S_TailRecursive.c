void   A7(int   HsAM4[],  int xReL,   int W) {
  while  (xReL <   W)   {
 int Yjgg2   =  HsAM4[W],   W2   =  xReL;
 for   (int UF =  xReL;   UF  < W;   UF++)   {
   if   (HsAM4[UF]  < Yjgg2)   {
  int  xgn0   =  HsAM4[W2]; HsAM4[W2] = HsAM4[UF];  HsAM4[UF] =  xgn0;
  W2++;
 }
 }
  int xgn0  =   HsAM4[W2];   HsAM4[W2]   = HsAM4[W]; HsAM4[W]  = xgn0;
 if   (W2   - xReL < W  -  W2)   {
  A7(HsAM4, xReL,   W2  - 1);
 xReL  = W2 +   1;
  }  else   {
   A7(HsAM4, W2 + 1, W);
 W   =  W2 -  1;
  }
   }
}