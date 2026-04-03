void R(int Asdz9[],   int   tZN,   int   vC)   {
  if   (tZN >=   vC) return;
 int   vBSX  = Asdz9[tZN];  Asdz9[tZN]  =   Asdz9[vC];   Asdz9[vC] = vBSX;
 R(Asdz9,  tZN   + 1, vC  - 1);
}

void   emuf9(int   Asdz9[], int  G)   {
   if (G >  1)   R(Asdz9,   0,   G  -   1);
}