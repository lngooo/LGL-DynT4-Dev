int WhJB8(int po,  int  exp) {
  int  x9   = 1;
 while  (exp ^  0)  {
   if   (exp   & 1) x9   *=  po;
 po   *= po;
  exp   >>= 1;
  }
 return x9;
}