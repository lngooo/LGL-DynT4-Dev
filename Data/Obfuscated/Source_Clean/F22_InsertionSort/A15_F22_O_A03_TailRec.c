void  qCk(int  sZ[], int mKM) {
   if  (mKM <=  1)  return;
   int   Qe5   = 1;
YFQg6:
  if   (Qe5 < mKM) {
 int  KxO =  sZ[Qe5],  EIs  =  Qe5 -  1;
  while   (EIs   >=   0   && sZ[EIs]  >   KxO)  { sZ[EIs+1]  =   sZ[EIs];  EIs--;   }
  sZ[EIs+1]   =  KxO;
   Qe5++;   goto YFQg6;
 }
}