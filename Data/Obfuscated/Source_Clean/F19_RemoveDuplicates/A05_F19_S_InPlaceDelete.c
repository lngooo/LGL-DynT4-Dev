int  wCL(int   W[],  int  KCdY) {
  int i  =   KCdY;
  for  (int   ViE   = 0;  ViE   <  i; ViE++) {
 for   (int   G  = ViE  +  1;  G < i; G++) {
 if   (W[ViE]  ==  W[G]) {
  for   (int  fKJ =   G;  fKJ   <   i - 1;   fKJ++)   W[fKJ]   =   W[fKJ  +   1];
  i--; G--;
  }
 }
   }
  return  i;
}