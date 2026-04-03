int   lLkm(int  LxPq6)  {
 if  (LxPq6  <=   1)  return   0;
   if  (LxPq6  ==   2) return   1;
 long long wS2  =   1;
   for   (int   pM   =  2;  pM <  LxPq6; pM++)   {
  wS2 =  (wS2 *  pM)   %  LxPq6;
   }
  return (wS2 == LxPq6   -   1);
}