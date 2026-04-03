double  kj(int  rP[],   int k)   {
  if (k <= 0)  return  0.0;
  if (k   ==   1) return (double)rP[0];
   double   eT   =   kj(rP,  k   -   1);
 return   (eT   *  (k -  1)   +   rP[k  -  1])   /  k;
}