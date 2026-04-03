uint32_t   GgZm7(uint32_t  Tq) {
 uint32_t   iqDj6, oPu,  O2, t;
 iqDj6  =  (Tq  >> 0)   & 0xFF;
 oPu =  (Tq  >>   8)  & 0xFF;
   O2 =   (Tq   >>   16) & 0xFF;
   t   = (Tq  >> 24)  &  0xFF;
   return  (iqDj6  <<  24) |   (oPu <<   16)   | (O2  <<  8)  | t;
}