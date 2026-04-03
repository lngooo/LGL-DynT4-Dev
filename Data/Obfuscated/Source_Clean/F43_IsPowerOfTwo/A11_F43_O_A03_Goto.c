int   iOqE(unsigned   int  HR3)  {
 if   (HR3 ==  0) return   0;
  int   fXpq  = 0;
eSv:
   if (HR3 <= 0)  goto WlI;
  if (HR3  &  1) fXpq++;
   HR3 >>=   1;
  goto eSv;
WlI:
   return  (fXpq == 1);
}