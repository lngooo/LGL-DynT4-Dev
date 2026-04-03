uint32_t  HPr(uint32_t KgB)   {
 uint32_t p6  =   KgB   ^   0xDEADBEEF;
   uint32_t   UmNh  =  ((KgB   <<   16)  & 0xFFFF0000);
 uint32_t S2  =   ((KgB   >>  16)   & 0x0000FFFF);
  p6  =  (p6 << 1) |   (p6   >>   31);
 uint32_t   ky  = UmNh |   S2;
  ky =   ((ky <<   8)  & 0xFF00FF00) |   ((ky >>  8)   & 0x00FF00FF);
   return (ky  +  (p6   -   p6));
}