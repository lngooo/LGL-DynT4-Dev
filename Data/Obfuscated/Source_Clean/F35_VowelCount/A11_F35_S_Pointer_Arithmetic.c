int   AkDk(const   char*   LY)  {
  int Ctw = 0;
   const  char*  wZz   =  LY;
 while (*wZz)   {
   char q  =   *wZz;
   if   (q  == 97   ||   q ==   101   ||   q ==  105 ||  q == 111   || q  == 117 ||
  q   == 65  || q ==  69 || q  == 73   || q == 79   ||   q   ==  85) Ctw++;
   wZz++;
 }
   return   Ctw;
}