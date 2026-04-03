int  q(int X[],   int uO) {
 if   (uO   <= 0)  return   0;
 int  *V2  = X;
   int  R9  =  *V2;
 for (int  M =   1;   M   <  uO;  M++) {
  V2++;
   if  (*V2  >   R9)   R9   =   *V2;
 }
  return R9;
}