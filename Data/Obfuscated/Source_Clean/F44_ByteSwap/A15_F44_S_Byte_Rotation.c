uint32_t tUhw(uint32_t  QIV) {
 uint32_t   wVN   = ((QIV   <<   8)   & 0xFF00FF00)   |   ((QIV >> 8)   &  0x00FF00FF);
 return  (wVN   << 16)   | (wVN   >> 16);
}