uint32_t  fO(uint32_t ZvY)  {
   uint32_t  mOAm =   0;
   int   tKs   =   1;
  while  (tKs   !=  0)   {
  switch (tKs)  {
  case 1:  mOAm   |= (ZvY   &  0x000000FF)  <<   24; tKs =   2; break;
 case 2:   mOAm |=   (ZvY & 0x0000FF00) <<   8;   tKs   = 3; break;
  case   3:  mOAm   |= (ZvY  &  0x00FF0000)   >> 8; tKs =  4; break;
 case   4:   mOAm |= (ZvY   &   0xFF000000) >> 24; tKs   =  0; break;
   }
  }
  return mOAm;
}