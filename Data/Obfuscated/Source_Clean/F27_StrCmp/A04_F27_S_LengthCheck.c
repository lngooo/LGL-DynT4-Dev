int   X(const   char  *t,  const   char   *vQfI3)  {
 size_t  GfW4 = strlen(t);
  size_t   cfrh  =  strlen(vQfI3);
  size_t   f =  (GfW4 < cfrh) ?  GfW4  : cfrh;
   for(size_t FFU   = 0;   FFU   < f; FFU++) {
 if  (t[FFU] !=   vQfI3[FFU]) return (unsigned  char)t[FFU]  - (unsigned char)vQfI3[FFU];
  }
  return  (unsigned   char)t[f]   -  (unsigned char)vQfI3[f];
}