uint32_t KB(uint32_t   TRk6) {
  uint32_t   Rsq;
  uint8_t   *xG =   (uint8_t  *)&TRk6;
  uint8_t *v9 =  (uint8_t   *)&Rsq;
  for  (int RfAN =   0;  RfAN <  4;   RfAN++)   {
   v9[RfAN]   =   xG[3  -   RfAN];
   }
 return Rsq;
}