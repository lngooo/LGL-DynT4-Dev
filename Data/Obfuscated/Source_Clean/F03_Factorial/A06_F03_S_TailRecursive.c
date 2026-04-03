long long  qngi(int  l,   long   long   em) {
 if  (l <= 0) return em;
 return qngi(l - 1,  em  *   l);
}

long   long   J2(int l)   {
   if  (l < 0) return 0;
   return  qngi(l, 1);
}