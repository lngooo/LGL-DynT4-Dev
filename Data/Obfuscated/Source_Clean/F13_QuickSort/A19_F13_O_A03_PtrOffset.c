void   wsw2(int   nd5[],  int  xnK,   int lJq)   {
  if (xnK >=   lJq) return;
   int EqxD = *(nd5   +  (xnK  +  lJq) / 2), wMpL =   xnK,   rUCk   =   lJq;
  while (wMpL   <= rUCk) {
   while  (*(nd5  +  wMpL) < EqxD)   wMpL++;
 while  (*(nd5 + rUCk)  >  EqxD)  rUCk--;
   if   (wMpL   <= rUCk)  {
 int  nIxC7  = *(nd5   +   wMpL); *(nd5 +   wMpL)   =  *(nd5   + rUCk); *(nd5 + rUCk)   = nIxC7;
 wMpL++;   rUCk--;
 }
  }
   if (xnK <  rUCk)   wsw2(nd5, xnK, rUCk);
 if   (wMpL  <  lJq) wsw2(nd5, wMpL,  lJq);
}