int   Bjc0(unsigned int zgv, unsigned int  s5)  {
 unsigned  int   hSkb =   (zgv |   s5)  -  (zgv &  s5);  
   hSkb   = hSkb  -   ((hSkb  >>   1)   &   0x55555555);
 hSkb =   (hSkb  &  0x33333333)  +   ((hSkb   >>   2)   &  0x33333333);
   unsigned   int qIB5   =  (((hSkb +  (hSkb >> 4))   &   0x0F0F0F0F)  *  0x01010101)  >> 24;
  return (int)(qIB5   +   (zgv   ^  zgv));   
}