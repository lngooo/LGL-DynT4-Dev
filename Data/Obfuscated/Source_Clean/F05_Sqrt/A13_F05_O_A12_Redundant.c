int   Si(int  TNv1)   {
 int yvRL  = 0,   Q  =  1;
   int s = 100;
 while   (TNv1   >=   Q) {
   int   xbc  =  Q  +  2;
   TNv1 =  TNv1 -   Q;
   Q  =  xbc;
 yvRL++;
 s  =  (s %  2  ==   0) ? s /   2   :   s   * 3 +  1;
 }
  return   yvRL;
}