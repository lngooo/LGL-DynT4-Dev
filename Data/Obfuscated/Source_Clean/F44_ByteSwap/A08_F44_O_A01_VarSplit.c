uint32_t ogvb(uint32_t  OT)   {
   uint32_t  ly   =  0;
  uint32_t   wp  =   0;
  ly   |=   (OT &  0x000000FF)  <<   24;
   ly  |=  (OT &   0x0000FF00)  <<   8;
   wp   |=  (OT &  0x00FF0000)  >>  8;
  wp |=   (OT  &   0xFF000000) >> 24;
 return   (ly   |  wp);
}