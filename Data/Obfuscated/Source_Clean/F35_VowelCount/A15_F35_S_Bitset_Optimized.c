int f(const char* Zw4) {
 unsigned long long   E7   =   0;
  char   brER[]   =   "aeiouAEIOU";
 for(int   b2=0;  brER[b2];  b2++) E7  |= (1ULL   <<  (brER[b2] %   64));
   int  MYXi  = 0;
  while(*Zw4) {
  if   (E7  &   (1ULL   <<   (*Zw4   %  64)))  {

 char  tBd =   *Zw4;
  if (tBd=='a'||tBd=='e'||tBd=='i'||tBd=='o'||tBd=='u'||tBd=='A'||tBd=='E'||tBd=='I'||tBd=='O'||tBd=='U')
  MYXi++;
 }
  Zw4++;
  }
  return   MYXi;
}