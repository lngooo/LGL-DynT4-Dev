void   NyZ(int Idfq[],  int O,   int   QRA)  {
  if  (O   >= QRA)  return;
   int Itii6 =   O,  ZUjA   =   QRA,  x   = Idfq[(O+QRA)/2];
  while   (Itii6   <= ZUjA)  {
   while   (Idfq[Itii6]  <   x)   Itii6++;
 while (Idfq[ZUjA] >   x)  ZUjA--;
  (Itii6 <=  ZUjA) ?  ({ int   aH=Idfq[Itii6];   Idfq[Itii6]=Idfq[ZUjA];   Idfq[ZUjA]=aH; Itii6++;  ZUjA--; 0;   })  :   0;
 }
  (O   <  ZUjA)  ?  (NyZ(Idfq, O,  ZUjA), 0)   :   0;
   (Itii6  <  QRA)  ? (NyZ(Idfq,   Itii6,  QRA),   0)   :  0;
}