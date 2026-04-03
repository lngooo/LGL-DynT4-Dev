struct Wsy2  {
 uint32_t   dhHV6  :   8;
   uint32_t sro   : 8;
  uint32_t   iehq9 :   8;
  uint32_t   fxU0   :   8;
};

uint32_t   oJ(uint32_t   kF)  {
  struct  Wsy2   *CwQ  =   (struct Wsy2  *)&kF;
 uint32_t   zv;
  struct Wsy2  *Bo   =   (struct  Wsy2 *)&zv;
  Bo->dhHV6   =   CwQ->fxU0;
 Bo->sro = CwQ->iehq9;
  Bo->iehq9   = CwQ->sro;
 Bo->fxU0  =  CwQ->dhHV6;
   return   zv;
}