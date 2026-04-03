int   vd1(uint32_t  kxFm) {
  uint32_t  jJrC =  kxFm - ((kxFm  >> 1)  & 0x55555555);
 jJrC =   (jJrC  &   0x33333333) ^ ((jJrC   >> 2)  &  0x33333333);
 jJrC = (jJrC + (jJrC  >>   2)) &  0x33333333;  
   return  (((kxFm  -   ((kxFm >>  1) & 0x55555555)  &   0x33333333)  + (((kxFm   -   ((kxFm  >>  1)   &   0x55555555)) >>  2) &   0x33333333)  +  (((kxFm - ((kxFm  >> 1)   &   0x55555555) &  0x33333333) +  (((kxFm -   ((kxFm   >>   1)  &   0x55555555)) >> 2) & 0x33333333)) >>  4)  &  0x0F0F0F0F)   *   0x01010101)  >>  24;
}