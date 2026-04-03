int   IM(int UiZ)   {
  if (UiZ <  0) return  -1;
   if (UiZ   <   2)  return UiZ;
   long   AWu =  UiZ;
  long   d  = (AWu  +  UiZ   /   AWu) /   2;
  while (d < AWu) {
   AWu = d;
  d   =   (AWu + UiZ / AWu)   /  2;
  }
 return   (int)AWu;
}