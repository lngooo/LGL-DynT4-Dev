void DNLY(int bL[],  int  S)   {
  for   (int   TBe   =   1;   TBe   < S;   TBe++) {
   if  ((TBe   *   TBe +   1)  >   0)   {
 int   gT3 = bL[TBe],  asnj  = TBe  -   1;
  while  (asnj   >=   0 && bL[asnj]  >   gT3)  {   bL[asnj+1]   = bL[asnj];  asnj--; }
   bL[asnj+1] = gT3;
  }
   }
}