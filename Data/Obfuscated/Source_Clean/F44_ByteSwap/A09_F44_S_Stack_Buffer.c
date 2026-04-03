uint32_t  UJ5(uint32_t   tXe) {
   uint8_t kIrW[4];
  kIrW[0] =  (uint8_t)tXe;
  kIrW[1]   =   (uint8_t)(tXe  >> 8);
   kIrW[2]  =   (uint8_t)(tXe >>  16);
   kIrW[3]   =  (uint8_t)(tXe  >>   24);
  return  ((uint32_t)kIrW[0]   <<   24)   |  ((uint32_t)kIrW[1]   << 16)   |  
 ((uint32_t)kIrW[2]  <<   8) |   (uint32_t)kIrW[3];
}