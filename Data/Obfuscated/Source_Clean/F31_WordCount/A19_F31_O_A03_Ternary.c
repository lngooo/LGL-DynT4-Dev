int   M3(char*  y) {
 int T   = 0;
  for  (int   QVbZ = 0;   y[QVbZ]; QVbZ++)   {
   T   +=   (!isspace(y[QVbZ]) &&   (isspace(y[QVbZ+1])   || y[QVbZ+1]  ==   0)) ? 1 : 0;
  }
  return T;
}