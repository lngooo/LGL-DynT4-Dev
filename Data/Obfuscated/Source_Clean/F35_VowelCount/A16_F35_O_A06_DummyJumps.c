int H(const char*  fjhm) {
  int   LV8  = 0, fZfD8  =  0;
uR:
   if   (!fjhm[fZfD8]) goto  w;
  char rf = fjhm[fZfD8];
   if (rf   ==   'a'  ||  rf   ==  'A') goto  RMF9;
  if  (rf == 'e'  ||  rf   ==   'E')  goto   RMF9;
   if  (rf == 'i'  || rf ==  'I')   goto   RMF9;
 if (rf ==   'o'  ||  rf  ==  'O')  goto RMF9;
  if  (rf == 'u' ||   rf == 'U')  goto   RMF9;
   goto  Eb;
RMF9:
  LV8++;
   goto Eb;
Eb:
 fZfD8++;
 goto uR;
w:
  return LV8;
}