void vbhy(char*  Rde)  {
  char   jzvh6[256];
  for(int  w=0;   w<256;   w++)   jzvh6[w]   =  (char)w;
  for(int w='a'; w<='z';   w++)  jzvh6[w]   =   (char)(w -   32);
 for(int   w='A'; w<='Z';  w++) jzvh6[w]   =   (char)(w  + 32);

 char  *WyX  =  Rde;
 while(*WyX)  {
   *WyX   =   *(jzvh6   +   (unsigned  char)*WyX);
  WyX++;
   }
}