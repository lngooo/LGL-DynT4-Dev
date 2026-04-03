uint32_t pv3(uint32_t   ed,   int bTdT)   {
   if   (bTdT ==  0)   return  0;
 return ((ed  &   0xFF)  <<  (8  *  (bTdT - 1))) |   pv3(ed   >> 8, bTdT  -  1);
}

uint32_t  Ut(uint32_t ed) {
 return pv3(ed, 4);
}