long YM(int e5) {
  long   QNRd =   0, K8   =  0,  BKFf =  1,  z   =   0;
 if (e5   == 0)   return  0;
  for (int  wSn  =   2;   wSn  <= e5; wSn++)   {
  long  WFz  =   (QNRd   +   K8) + (BKFf +  z);
  QNRd   =  BKFf;  K8 =   z;
 BKFf  = WFz;   z  =   0;
  }
  return  (e5   == 1)   ?  1   :   (BKFf   +  z);
}