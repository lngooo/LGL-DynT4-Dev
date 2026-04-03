void  Dd2(int H[],   int  tO) {
 for (int Lh =  1; Lh < tO; Lh++) {
 int RAf =  H[Lh],  p  =  Lh - 1;
  ek:
 if  (p   >=  0   &&   H[p]   > RAf)  {
  H[p+1]   =   H[p];
 p--;
   goto ek;
  }
  H[p+1] =   RAf;
 }
}