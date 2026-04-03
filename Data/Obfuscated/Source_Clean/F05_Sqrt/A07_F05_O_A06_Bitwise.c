int oFqY(int pSjd)  {
 int  WtaJ =   0,  wIeh = 0x40000000;
  while   (wIeh  >  pSjd)   wIeh   >>=   2;
  while   (wIeh)  {
  int  M   =   WtaJ  |  wIeh;
   if  (pSjd >=  M) {
 pSjd  -=  M;
  WtaJ =   (WtaJ >> 1) |   wIeh;
 } else  WtaJ   >>= 1;
 wIeh  >>=   2;
   }
  return WtaJ;
}