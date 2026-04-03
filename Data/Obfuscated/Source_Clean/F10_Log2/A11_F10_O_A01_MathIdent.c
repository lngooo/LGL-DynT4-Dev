int   bLvd0(int  lz)  {
 int  E  =  0;
 while   (lz  >  1) {
  double   uh9   =   (double)lz   /  2.0;
 lz = (int)floor(uh9);
 E++;
  }
 return   E;
}