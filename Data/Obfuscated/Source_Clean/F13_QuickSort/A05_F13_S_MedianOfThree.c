void   pOU2(int   H5[], int  lE,   int   XV) {
 if  (lE   <  XV)   {
  int   E   =   lE  +  (XV  -   lE)  /   2;
   if  (H5[E] < H5[lE])  {  int PyjG2 =   H5[E];   H5[E]  =  H5[lE];  H5[lE]  = PyjG2;   }
   if (H5[XV]  <   H5[lE])   { int   PyjG2 =   H5[XV]; H5[XV]  =  H5[lE];   H5[lE]   = PyjG2; }
  if  (H5[XV] < H5[E])  {   int   PyjG2   =   H5[XV]; H5[XV]  =   H5[E];   H5[E]   = PyjG2; }
  int HseV  =   H5[E];
  int   H  =  lE,  LbY5 =   XV;
 while (H <=   LbY5)   {
  while  (H5[H]  <  HseV) H++;
 while   (H5[LbY5] > HseV) LbY5--;
 if (H   <=   LbY5)  {
   int   PyjG2 = H5[H];  H5[H]  = H5[LbY5]; H5[LbY5] = PyjG2;
 H++; LbY5--;
 }
   }
   if  (lE <  LbY5)   pOU2(H5,   lE,  LbY5);
  if (H   < XV)   pOU2(H5, H, XV);
   }
}