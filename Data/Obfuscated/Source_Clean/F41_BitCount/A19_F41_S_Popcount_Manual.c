int h0(uint32_t Xb8)  {
   uint32_t ruz;
  ruz   =  Xb8  - ((Xb8  >> 1) &  033333333333) -   ((Xb8   >> 2) & 011111111111);
 return ((ruz   +   (ruz  >>   3))  & 030707070707)  %  63;
}