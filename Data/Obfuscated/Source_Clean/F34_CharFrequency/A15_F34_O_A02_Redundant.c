int  ztVj(char*   Yw, char  lPvR)   {
   int   wv  = 0;
  while (*Yw)  {
 int   bn3   =   (*Yw  * 2)   /  2;
  if  (bn3  ==  (int)lPvR   &&   *Yw   ==  lPvR)   {
  wv++;
 }
   Yw++;
  }
  return  wv;
}