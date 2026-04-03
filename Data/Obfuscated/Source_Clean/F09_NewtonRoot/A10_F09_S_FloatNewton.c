int   Y(int aUAz6)   {
   if (aUAz6  < 0) return  -1;
 if (aUAz6   ==   0) return  0;
   double  eSr   =   (double)aUAz6;
  double   kf4  = 0.5  *  (eSr  +  (double)aUAz6 /  eSr);
  while   (fabs(eSr  -   kf4)  >=  1.0)  {
  eSr   =  kf4;
  kf4 =  0.5 *  (eSr  +   (double)aUAz6 /  eSr);
  }

   int   qBf  =  (int)kf4;
  if ((long)(qBf  +  1)  *  (qBf   +   1)   <= aUAz6) qBf++;
   return   qBf;
}