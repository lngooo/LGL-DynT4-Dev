int yy(char* zL,   char*   pM) {
  char* zq =  zL;
   int   SI   =   strlen(pM);
  if  (SI   ==   0)   return  0;
   while   (*zq) {
   if  (strncmp(zq,   pM, SI)  ==   0)   return (int)(zq -  zL);
  zq++;
  }
 return   -1;
}