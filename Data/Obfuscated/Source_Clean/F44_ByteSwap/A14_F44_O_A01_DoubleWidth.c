uint32_t rs(uint32_t   TKoW9)   {
   uint64_t QU =  TKoW9;
  uint64_t  qci = 0;
   qci   |=   (QU   &   0xFF)   << 24;
   qci  |= (QU   & 0xFF00) << 8;
   qci |=   (QU   &  0xFF0000)  >> 8;
  qci  |=   (QU &  0xFF000000)  >>   24;
   return (uint32_t)qci;
}