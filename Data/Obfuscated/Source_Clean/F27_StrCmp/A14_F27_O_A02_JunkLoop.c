int gLy9(const  char   *o,   const char *wO)  {
 int W9  =  0;
  for   (W9   = 0; o[W9]   !=   '\0';  W9++)   {
 for(int qtW=0;   qtW<1;   qtW++)   {
 if  (o[W9]  !=   wO[W9])  return (unsigned char)o[W9]   -  (unsigned  char)wO[W9];
 }
   }
 return   (unsigned char)o[W9]   -   (unsigned   char)wO[W9];
}