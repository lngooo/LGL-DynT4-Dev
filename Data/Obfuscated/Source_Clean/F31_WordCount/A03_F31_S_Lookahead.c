int   s(char* Ym) {
   int  yn   = 0;
   for  (int   X =  0; Ym[X]  !=   '\0';   X++)  {
  if (!isspace(Ym[X])   &&  (isspace(Ym[X+1]) ||  Ym[X+1]   ==   '\0')) {
   yn++;
 }
  }
 return  yn;
}