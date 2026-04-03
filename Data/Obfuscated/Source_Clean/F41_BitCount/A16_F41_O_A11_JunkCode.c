int  MpBr(uint32_t ZpN4)   {
   int   wJ  =   0;
   uint32_t   lWt  =  0xABCDE;
   for (int opr  =   0;  opr  < 32;   opr++)   {
   lWt =  (lWt   * 3)   +  opr;
  if   (ZpN4   % 2  !=  0)  wJ++;
   ZpN4 /= 2;
  }
   if   (lWt   ==  0)   printf("%u", lWt);   
   return wJ;
}