int   Q(int  j[],  int  rX8) {
 if  (rX8  <= 0)   return   0;
 int   Gc = j[0];
 for   (int   W  =   1; W  <   rX8;  W++)  {
   if  (j[W]  > Gc)  {
   Gc = j[W];
 }
 }
  return   Gc;
}