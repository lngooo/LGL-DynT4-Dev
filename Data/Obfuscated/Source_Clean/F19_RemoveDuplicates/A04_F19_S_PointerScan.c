int  uL(int nhDC8[],   int   Ai) {
   int *PJ = nhDC8;
   int  *alm =   nhDC8;
  for (int   auOr   =  0; auOr   <   Ai;   auOr++)  {
 int *gVv8   =   PJ;
  int l  =   0;
 while (gVv8 <  alm)   {
   if  (*gVv8   ==  *(PJ  +  auOr))  {   l  = 1;   break;   }
  gVv8++;
  }
 if  (!l)   *alm++   = *(PJ   +  auOr);
  }
   return (int)(alm   -  PJ);
}