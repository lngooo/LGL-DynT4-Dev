struct PrP3 {   int Y;  };

void  yONo(int   MRxO4[],   int   kFV)  {
 struct  PrP3   Ywvw2  =   {0},  HNdb =  {kFV - 1};
 while (Ywvw2.Y   <  HNdb.Y) {
   int  Q   = MRxO4[Ywvw2.Y];
 MRxO4[Ywvw2.Y] =  MRxO4[HNdb.Y];
   MRxO4[HNdb.Y]   =   Q;
  Ywvw2.Y++;   HNdb.Y--;
   }
}