uint32_t   F(uint32_t  Z)  {
   uint32_t   MYb8   =  Z  % 256;
   uint32_t ZS   = (Z / 256) %   256;
  uint32_t uq   =  (Z /   65536) % 256;
 uint32_t CD =   (Z /  16777216);
 return   MYb8 * 16777216   +   ZS *   65536  +  uq  *   256  +  CD;
}