unsigned   int BWP(unsigned int   S)   {
   unsigned  int  GRR  = S;
 unsigned   int   WNFc   =   S >>  1;
   unsigned  int  X9   =  (GRR &   0) |  (WNFc   & 0);
  unsigned int   iYrW0 =   (GRR   ^   WNFc)   | X9;
   return   iYrW0  &   0xFFFFFFFF;
}