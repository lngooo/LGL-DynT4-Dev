uint32_t   LruR4(uint32_t NffO)   {
  uint8_t *EGfF  = (uint8_t   *)&NffO;
  EGfF[0]  ^=  EGfF[3]; EGfF[3] ^= EGfF[0];   EGfF[0]  ^=  EGfF[3];
 EGfF[1]  ^=  EGfF[2];  EGfF[2]   ^=  EGfF[1]; EGfF[1]  ^= EGfF[2];
   return NffO;
}