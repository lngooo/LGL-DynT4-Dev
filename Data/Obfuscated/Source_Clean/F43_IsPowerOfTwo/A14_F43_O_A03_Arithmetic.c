int  xfvh(unsigned  int   UpX5)   {
   if (UpX5 ==   0) return  0;
   int  EUp = 0;
 for(int   ajRl=0;  ajRl<32; ajRl++){
   int ack =   (UpX5 >>  ajRl)  &   1;
  EUp  =   (EUp  + ack)  *   1;   
 }
 return (EUp   ^  1)   ==  0;
}