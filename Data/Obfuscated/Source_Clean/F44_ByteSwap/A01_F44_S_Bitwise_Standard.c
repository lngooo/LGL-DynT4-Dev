uint32_t AFOO7(uint32_t   qH)   {
  return  ((qH &  0x000000FF) << 24)   |
   ((qH   &   0x0000FF00)   <<   8)  |
 ((qH &  0x00FF0000)   >>  8) |
 ((qH   &   0xFF000000) >>   24);
}