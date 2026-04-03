int SGh7(int   PEs7,   int   btoH)  {
  PEs7   =   abs(PEs7);   btoH =  abs(btoH);
   if   (btoH ==  0)   return  PEs7;
   return SGh7(btoH, PEs7  % btoH);
}