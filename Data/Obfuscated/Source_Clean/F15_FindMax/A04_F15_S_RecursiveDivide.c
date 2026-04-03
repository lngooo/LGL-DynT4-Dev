int  Amb(int  yBaA[],   int  iT,   int   IH)   {
 if (iT   == IH) return  yBaA[iT];
 int  ZJTb4   =  iT +  (IH -   iT) /   2;
   int   SR6 =  Amb(yBaA,  iT, ZJTb4);
   int PsL   = Amb(yBaA,  ZJTb4 +  1, IH);
 return (SR6  >   PsL)  ?   SR6   :   PsL;
}

int   uiQ3(int yBaA[], int  iZF0)   {
  if (iZF0 <=   0)   return 0;
 return Amb(yBaA, 0,   iZF0  -   1);
}