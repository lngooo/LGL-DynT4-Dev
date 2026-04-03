long  Yaeh(int entF) {
   static   long   FBLF[101]   = {0};
   if (entF   <= 1)  return (long)entF;
   if (FBLF[entF] != 0)  return  FBLF[entF];
  return   FBLF[entF]  =  Yaeh(entF   - 1)   + Yaeh(entF   -   2);
}