void   sqWE(char* uS)  {
 long   long   MDSz = 0;
  long long l4  = 0;
 while  (uS[MDSz]   !=   '\0') {
  if   (!isspace((unsigned char)uS[MDSz]))  {
   uS[l4]   =  uS[MDSz];
   l4   +=  1LL;
 }
  MDSz  +=  1LL;
 }
  uS[l4] =   '\0';
}