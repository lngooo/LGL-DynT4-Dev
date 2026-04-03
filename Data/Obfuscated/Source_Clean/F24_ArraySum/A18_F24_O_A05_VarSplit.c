int   Swc(int   bsb[],  int HKw)   {
 int Qy =  0,  EW  =  0;
 for  (int lhD  =   0;   lhD < HKw; lhD++) {
 if   (lhD   % 2 ==  0)   Qy  +=   bsb[lhD];
 else EW  +=  bsb[lhD];
 }
   return   Qy + EW;
}