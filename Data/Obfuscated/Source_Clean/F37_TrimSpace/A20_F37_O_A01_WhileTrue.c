void   Y(char*   KNH) {
 int   JvQ6 =   0,  n   =   0;
   while   (1) {
   if   (KNH[JvQ6]   ==   '\0')  break;
 unsigned   char DEn  =  (unsigned  char)KNH[JvQ6];
  if   (!isspace(DEn))  {
 KNH[n]  =   (char)DEn;
 n++;
  }
   JvQ6++;
  }
   KNH[n] = '\0';
}