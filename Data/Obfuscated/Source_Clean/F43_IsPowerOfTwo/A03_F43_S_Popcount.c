int H6(unsigned  int  bZs) {
   if  (bZs  ==   0) return   0;
  int  Tl  =  0;
 while   (bZs   > 0) {
 Tl +=   (bZs  &   1);
 bZs   >>=   1;
  }
   return   Tl ==   1;
}