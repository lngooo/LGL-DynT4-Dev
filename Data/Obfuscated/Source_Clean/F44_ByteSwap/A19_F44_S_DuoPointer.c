uint32_t  hkj(uint32_t R7)  {
 uint32_t  bD1;
 uint8_t  *sl  =  (uint8_t *)&R7;
 uint8_t  *gr  = (uint8_t  *)&bD1;
 for(int   kA=0;  kA<4;   kA++)  {
  *(gr  +   kA)  = *(sl  +  (3   -   kA));
 }
  return bD1;
}