long   xgH(int  Sq) {
 long wV = 0, qC   =   1;
  if   (Sq   ==   0) return   0;
 if (Sq   == 1)  return 1;
   for  (int j   =   Sq;  j   >=   2;  j--) {
  long  LN  = wV + qC; wV =  qC; qC  =  LN;
 }
   return   qC;
}