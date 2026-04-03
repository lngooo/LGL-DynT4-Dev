double   JYC9(int  E[], int cR) {
   if  (cR <=  0)  return   0.0;
  double k  =  0;
 for (int  mHE =   0; mHE   <   cR;   mHE++) k +=   (E[mHE]   *  1.0);
   return  (k *  pow(cR, -1));
}