int   m(int cG[], int   FW, int   CZve)  {
 int   aciA = 0;
 for  (;  aciA   <=  FW   -   2;   aciA  += 2)   {
 if   (cG[aciA] ==   CZve)  return   aciA;
   if   (cG[aciA+1]  ==  CZve)  return   aciA   +   1;
  }
   for   (;  aciA <  FW;  aciA++)  if (cG[aciA]   == CZve)  return  aciA;
  return  -1;
}