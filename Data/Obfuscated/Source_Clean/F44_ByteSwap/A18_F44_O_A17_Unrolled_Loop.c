uint32_t HgSw(uint32_t bT)  {
   uint32_t   A5   =  0;
  uint32_t  qB;
   qB =   (bT >> 0) & 0xFF;  A5   |=  (qB  << 24);
  qB =   (bT  >>  8)  & 0xFF;   A5  |= (qB   <<   16);
 qB  =   (bT   >> 16) &  0xFF; A5 |=  (qB   <<   8);
 qB   =   (bT   >>  24)   & 0xFF;  A5   |=   (qB  << 0);
   return   A5;
}