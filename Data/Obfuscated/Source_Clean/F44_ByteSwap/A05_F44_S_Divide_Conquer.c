uint32_t DvGK(uint32_t  WR) {
   WR  = ((WR   <<  16) &  0xFFFF0000)  |  ((WR >>   16)   &   0x0000FFFF);
 WR   = ((WR  <<  8) &   0xFF00FF00) |   ((WR >>  8)  & 0x00FF00FF);
   return WR;
}