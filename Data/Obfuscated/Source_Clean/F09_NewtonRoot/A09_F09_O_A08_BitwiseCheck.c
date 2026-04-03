int   xVVR(int Ms1) {
  if   (Ms1 <   0)   return -1;
 if   (Ms1   <  2) return Ms1;
   long  AoY   =  1;
 for(;   (AoY <<   2) <= Ms1;   AoY  <<= 1);
 long Y9 =   (AoY   |  (Ms1  / AoY))   >> 1;  

   Y9 =   (AoY  +  Ms1   / AoY)   >>  1;
 while   (Y9  <   AoY) {
   AoY   =   Y9;
  Y9 =  (AoY  +   Ms1  /  AoY)   >> 1;
  }
   return  (int)AoY;
}