int   Bax(int   GH, int  exp,  int l)  {
  if   (exp <=   0)  return   l;
  return  Bax(GH,  exp  -  1,   l  *   GH);
}

int  KOFl3(int GH, int  exp)  {
  return Bax(GH,   exp,   1);
}