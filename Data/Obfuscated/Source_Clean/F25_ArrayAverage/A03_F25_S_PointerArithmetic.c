double  MlP5(int  pALm[],  int Dg4) {
   if (Dg4   <= 0) return 0.0;
 double bS = 0;
   int Wr =   Dg4;
  int  *dkZ = pALm;
 while  (Wr--)   bS   += *dkZ++;
 return bS /   Dg4;
}