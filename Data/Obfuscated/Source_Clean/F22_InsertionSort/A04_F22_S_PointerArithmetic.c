void A5(int  DUZl[],   int  uAE2) {
   int   *TFO6,  *c, zXQ;
  for  (TFO6  =  DUZl + 1;  TFO6  < DUZl  +  uAE2;   TFO6++)  {
  zXQ  =   *TFO6;
   c   =   TFO6   - 1;
   while  (c  >=   DUZl  &&   *c  >   zXQ)   {
   *(c + 1) = *c;
  c--;
 }
 *(c  + 1) = zXQ;
  }
}