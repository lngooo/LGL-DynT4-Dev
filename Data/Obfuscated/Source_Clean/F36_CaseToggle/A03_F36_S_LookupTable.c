void ZzO(char*   cGV9) {
  static char  se[256];
   static   int e   =  0;
  if  (!e)  {
   for (int rPXG8   = 0;   rPXG8  <   256; rPXG8++) {
   if  (rPXG8   >=  'a'   && rPXG8   <=  'z') se[rPXG8]   = rPXG8  - 32;
 else  if   (rPXG8 >= 'A'   &&   rPXG8  <=   'Z')  se[rPXG8] =  rPXG8 + 32;
 else se[rPXG8] =   rPXG8;
 }
  e  =  1;
 }
  while   (*cGV9)  {
 *cGV9   = se[(unsigned  char)*cGV9];
   cGV9++;
  }
}