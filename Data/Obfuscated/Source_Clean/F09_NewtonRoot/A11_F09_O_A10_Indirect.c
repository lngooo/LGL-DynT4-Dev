typedef   double   (*mZEd5)(double);

int   Bwo(int  q)  {
  if   (q < 0)  return  -1;
 mZEd5  QTED  =  fabs;
 double   mDNn   =  q,  JhO   =   (mDNn + q/mDNn)/2.0;
 while   (QTED(mDNn  -  JhO)  >=  0.999) {
   mDNn =   JhO;
  JhO =   (mDNn  + q/mDNn)/2.0;
   }
  return   (int)(JhO  +  0.000001);
}