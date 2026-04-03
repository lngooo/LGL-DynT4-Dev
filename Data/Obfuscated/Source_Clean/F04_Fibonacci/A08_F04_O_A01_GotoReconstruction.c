long di4(int xOA)   {
   long  G   =  0,   qd   =   1,   jJNi6;
  int fBd  = 2;
   if   (xOA == 0) return   0;
  if (xOA  ==   1) return  1;
   qyT:
   if  (fBd  >   xOA) goto   KDCz;
  jJNi6   = G   + qd;  G = qd;   qd = jJNi6;   fBd++;
 goto   qyT;
  KDCz: return qd;
}