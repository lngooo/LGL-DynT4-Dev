int wai(int  Cvq[],   int   Rt9, int eHei)  {
  int   PFw   =   0,   yN =  Rt9   -  1;
  while (PFw  <=   yN)   {
   int   Iccs  = PFw  +   (yN -   PFw)  /   2;
   if  (Cvq[Iccs]   ==  eHei)  return   Iccs;
 if   (Cvq[Iccs]  <   eHei)  { PFw  =  Iccs   +  1; continue; }
  yN = Iccs   -  1;
 }
  return -1;
}