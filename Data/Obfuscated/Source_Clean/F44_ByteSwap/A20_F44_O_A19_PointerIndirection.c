uint32_t  kYRR(uint32_t L)   {
 uint32_t   qm;
 uint8_t  *r = (uint8_t   *)&L;
   uint8_t  *TW = (uint8_t   *)&qm;
 uint8_t  **kvPa =   &r;
 uint8_t **XKe  =   &TW;
  (*XKe)[0] =  (*kvPa)[3];
   (*XKe)[1]   =  (*kvPa)[2];
   (*XKe)[2]   =  (*kvPa)[1];
  (*XKe)[3]  =  (*kvPa)[0];
  return   qm;
}