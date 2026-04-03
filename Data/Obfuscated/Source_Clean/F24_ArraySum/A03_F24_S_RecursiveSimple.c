int   bUQ(int  gP9[], int  d)   {
  if   (d <=   0) return   0;
   return gP9[d-1]  + bUQ(gP9, d-1);
}