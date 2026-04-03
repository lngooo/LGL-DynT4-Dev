void   R(int   XsA0[],   int c0)  {
  if  (c0 <=  1)  return;
  int Lns = 0;
   for (int   BkMB  =   1;  BkMB   < c0; BkMB++)   if (XsA0[BkMB] <   XsA0[Lns]) Lns  =  BkMB;
 int   sa   =  XsA0[0]; XsA0[0]   =   XsA0[Lns]; XsA0[Lns]  =   sa;
  R(XsA0   + 1,  c0 - 1);
}