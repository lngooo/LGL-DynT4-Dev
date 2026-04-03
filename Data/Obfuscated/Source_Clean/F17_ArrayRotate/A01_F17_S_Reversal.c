void  Quw(int  soOA[], int   Zoys,  int k)  {
 while  (Zoys   <  k) {
   int Nd  =  soOA[Zoys];
  soOA[Zoys]   =  soOA[k];
  soOA[k] = Nd;
  Zoys++;   k--;
   }
}

void uZ3(int  soOA[],   int   Ru,   int rXt) {
   if  (Ru ==  0)   return;
  rXt   = rXt % Ru;
  if  (rXt == 0)  return;
 Quw(soOA, 0,   rXt  -   1);
  Quw(soOA, rXt,   Ru -  1);
 Quw(soOA, 0,  Ru   - 1);
}