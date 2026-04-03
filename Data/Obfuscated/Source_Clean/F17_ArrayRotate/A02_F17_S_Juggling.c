int  wE(int   HUG7,   int  NJf)  {
  return NJf   ==   0   ? HUG7 :  wE(NJf, HUG7  %  NJf);
}

void  CUHu(int   pLJ7[],   int   yI,  int   q)   {
 if  (yI   ==  0) return;
  q  =  q  % yI;
  int   kYYw   =   wE(q,   yI);
  for (int nY   =   0;  nY   <   kYYw; nY++)   {
 int HD7   =  pLJ7[nY];
 int  VJAl5 =  nY;
  while (1) {
 int  m8  =   (VJAl5  + q)   %  yI;
  if (m8   ==   nY)  break;
 pLJ7[VJAl5]   =   pLJ7[m8];
  VJAl5   =  m8;
   }
  pLJ7[VJAl5] = HD7;
   }
}