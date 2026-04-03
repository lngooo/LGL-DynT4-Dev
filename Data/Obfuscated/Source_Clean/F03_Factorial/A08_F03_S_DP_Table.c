long long sRRj(int  VbK)   {
 if  (VbK < 0) return   0;
   if (VbK ==   0)  return 1;
  long   long   *Dj  =   (long long  *)malloc((VbK  +  1) * sizeof(long   long));
  Dj[0]   =  1;
   for  (int Cjbc   =   1;   Cjbc   <=  VbK; Cjbc++)   {
   Dj[Cjbc] =  Dj[Cjbc  -   1]   *  Cjbc;
 }
 long   long B9   =   Dj[VbK];
  free(Dj);
   return B9;
}