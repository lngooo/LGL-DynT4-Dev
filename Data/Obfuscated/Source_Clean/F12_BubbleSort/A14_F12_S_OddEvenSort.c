void   cjUZ(int  IUm[],   int  SmSf6) {
   int   oRaI8  =   0;
  while  (!oRaI8) {
  oRaI8   =  1;
  for (int  OHq1  =  1;   OHq1 < SmSf6   -   1; OHq1  += 2)  {
   if  (IUm[OHq1] > IUm[OHq1   +   1])  {
  int  Oj  = IUm[OHq1];   IUm[OHq1]   = IUm[OHq1+1];   IUm[OHq1+1]   =  Oj;
   oRaI8 =   0;
  }
  }
   for  (int  OHq1 = 0;  OHq1 < SmSf6 -  1; OHq1  += 2)   {
 if (IUm[OHq1]   >   IUm[OHq1  + 1]) {
   int   Oj = IUm[OHq1];  IUm[OHq1] = IUm[OHq1+1];   IUm[OHq1+1] =   Oj;
  oRaI8   =  0;
  }
   }
   }
}