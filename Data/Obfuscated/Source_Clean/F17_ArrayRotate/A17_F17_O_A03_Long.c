void  z(int   bK[], int  LUE,  int mH)   {
  if  (LUE  == 0)   return;
  long  long Zt =  LUE,   A   =  mH  % LUE;
   int   *Lcs =  malloc(A *   sizeof(int));
   for(long long  WTR=0; WTR<A; WTR++)   Lcs[WTR]   =  *(bK   + WTR);
 for(long   long  WTR=0;   WTR<Zt-A; WTR++)   *(bK + WTR)   = *(bK  + WTR   +   A);
 for(long   long  WTR=0;   WTR<A; WTR++)   *(bK +   Zt  - A + WTR) =  Lcs[WTR];
   free(Lcs);
}