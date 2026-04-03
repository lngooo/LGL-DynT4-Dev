int rsN7(int   W[],  int   jRvk,   int   eRRI)   {
 if (jRvk   ==   eRRI)   return  W[jRvk];
  int YLN   = jRvk + (eRRI-jRvk)/2;
  int qe   =   rsN7(W,   jRvk, YLN),  nfNb1   =  rsN7(W, YLN+1,   eRRI);
  return   (qe > nfNb1) ?  qe   : nfNb1;
}

int  uaGd(int  F[],  int P9)   { return   (P9 >   0) ? rsN7(F, 0,  P9-1) :  0;  }