void   NnYy6(int  TAf0[],  int   rn)  {
 for (int   Smx   = 1;   Smx < rn;   Smx++) {
  int EH   =   TAf0[Smx];
   int  oaQ  =   0, trM3 =   Smx - 1;
   while   (oaQ  <=  trM3)   {
  int  cFrf1 =  oaQ +  (trM3   -   oaQ) /   2;
   if  (EH   < TAf0[cFrf1])  trM3 =  cFrf1 -   1;
  else   oaQ  =  cFrf1  +   1;
 }
   for  (int  HkHS  =   Smx   -   1;   HkHS >=   oaQ;   HkHS--)  TAf0[HkHS +  1]   =   TAf0[HkHS];
 TAf0[oaQ]   =   EH;
   }
}