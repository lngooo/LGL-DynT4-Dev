int  gUzw(long xfLh, long  Tj8,   long chlb7)  {
 long  DIl   =   Tj8 +  (chlb7  -   Tj8) /  2;
 return (Tj8 >  chlb7)   ?   (int)chlb7  :  (DIl   *  DIl   <=   xfLh ?  gUzw(xfLh, DIl   +   1,  chlb7)  :   gUzw(xfLh,   Tj8,   DIl - 1));
}

int B(int   xfLh)  {
  return (xfLh   < 0)   ?   -1  : gUzw(xfLh,  0,  xfLh);
}