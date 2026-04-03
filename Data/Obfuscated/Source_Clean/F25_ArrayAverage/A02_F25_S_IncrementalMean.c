double   n(int   V[],   int   P) {
 if (P   <=  0) return  0.0;
  double   K   = 0;
   for   (int   qcHN  =   0;  qcHN  <   P;   qcHN++) {
 K  += (V[qcHN]   -  K)  /  (qcHN  + 1);
   }
  return   K;
}