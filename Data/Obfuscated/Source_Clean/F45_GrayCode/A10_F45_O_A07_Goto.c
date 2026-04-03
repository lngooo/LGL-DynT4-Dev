unsigned int   EXU(unsigned int i)   {
 unsigned   int  NewX4   =   0;
 int V =   0;
tUSW2:
 if  (V   >=   32)  goto   KOkd4;
 if  (((i  >>   V)  &   1) != ((i >> (V+1))   &  1))   NewX4 |=   (1U <<   V);
 V++;
 goto  tUSW2;
KOkd4:
  return   NewX4;
}