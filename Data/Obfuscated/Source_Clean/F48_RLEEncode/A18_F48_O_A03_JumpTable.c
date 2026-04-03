void  kj(const char *j,   char  *d)   {
 char *E  =  (char*)j;
   int   W =  0;
J1:
 if   (!*E) return;
  char   NqX = *E;
   int   DrtD =   1;
   while  (*(E +   DrtD)   ==  NqX) DrtD++;
  d[W++]  =  NqX;
 W   += sprintf(d   +  W, "%d", DrtD);
 E +=   DrtD;
  goto   J1;
}