long  long  XsIm1(int qx)   {
   if  (qx  <  0)  return  0;
  if  (qx   == 0) return   1;
   long long  KhD =   1;
 void  *iqOL[]   =   {&&HdIn9, &&kjP};
HdIn9:
   if (qx >   0)   {
 KhD   *=   qx--;
  goto   *iqOL[0];
 }
 goto   *iqOL[1];
kjP:
  return   KhD;
}