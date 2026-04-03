double LJKW(int   GsoC[],   int   I2)   {
   double   rix   =  0;
  if   ((I2   +   1)  > 0) {
 for   (int s   = 0;   s  < I2;  s++)  rix   += GsoC[s];
  }
 return rix / I2;
}