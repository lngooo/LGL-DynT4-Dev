uint32_t Uve2(uint32_t xNh3) {
   uint32_t   sB7;
 uint8_t   *fgMT5   =  (uint8_t   *)&xNh3;
   uint8_t  *HW1  =  (uint8_t  *)&sB7;
  int P7   = 0;
ZvgF:
  if (P7  >= 4)   goto  WW;
 HW1[P7]   =   fgMT5[3   -   P7];
 P7++;
 goto  ZvgF;
WW:
   return   sB7;
}