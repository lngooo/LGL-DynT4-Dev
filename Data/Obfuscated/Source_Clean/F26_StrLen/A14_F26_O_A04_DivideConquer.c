int aFi(const char  *e)  {
  if  (!*e) return 0;
   if   (!*(e+1)) return   1;

 return  1 +   aFi(e   +   1);
}