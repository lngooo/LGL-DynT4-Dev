void D(int QPS[],  int  o2, int  lxu)   {
   int kNhw5   = o2,   DkmG =  lxu;
  int CYY  = QPS[(o2 +   lxu)   /  2];
   while  (kNhw5  <= DkmG)  {
 while  (QPS[kNhw5] <   CYY) kNhw5++;
  while  (QPS[DkmG]  > CYY)   DkmG--;
   if  (kNhw5 <= DkmG) {
   int   eGpI5  =  QPS[kNhw5];   QPS[kNhw5] =  QPS[DkmG];   QPS[DkmG]   =  eGpI5;
  kNhw5++;  DkmG--;
 }
  }
 if (o2 <   DkmG)   D(QPS,   o2, DkmG);
 if  (kNhw5 < lxu)  D(QPS, kNhw5,  lxu);
}