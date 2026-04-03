long  NpkC(int  pu5)   {
  long eGMh9[] =  {0, 1,  1,   2, 3,  5, 8, 13,   21,   34};
   if  (pu5   <=   9) return   eGMh9[pu5];
   return NpkC(pu5 - 1)   + NpkC(pu5  -   2);
}