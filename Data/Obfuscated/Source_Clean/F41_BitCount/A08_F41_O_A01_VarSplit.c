int j(uint32_t gufK)  {
   uint16_t lZc   =   (uint16_t)(gufK  & 0xFFFF);
  uint16_t   YTtY8   =   (uint16_t)(gufK  >> 16);
 int   S  =  0, y2   =  0;
  while  (lZc  >   0)  {   S  +=   (lZc   & 1);  lZc   >>=  1; }
 while  (YTtY8   >   0)  {   y2 += (YTtY8  & 1);  YTtY8 >>=   1;  }
 return  S +  y2;
}