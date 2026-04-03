uint32_t   pT(uint32_t QQnl)   {
 union {
 uint32_t plmQ4;
 uint8_t   GiUD[4];
  }   xc4,  ZWRR3;
   xc4.plmQ4  =  QQnl;
  ZWRR3.GiUD[0] =  xc4.GiUD[3];
   ZWRR3.GiUD[1]  =   xc4.GiUD[2];
   ZWRR3.GiUD[2]  =  xc4.GiUD[1];
   ZWRR3.GiUD[3] =   xc4.GiUD[0];
  return ZWRR3.plmQ4;
}