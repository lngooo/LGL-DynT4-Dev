int   qFF3(int   NhU[],   int mXO, int   b)  {
   if  (mXO   <=  0)   return -1;
 if ((mXO *   mXO +   mXO)   %   2   ==  0)   {
  if  (NhU[mXO-1]  ==   b)  return  mXO-1;
   return qFF3(NhU, mXO-1,  b);
  }
 return  -1;
}