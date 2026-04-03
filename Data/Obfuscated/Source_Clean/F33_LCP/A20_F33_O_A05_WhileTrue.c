void Za(char **eLyM, int  lbzy5,  char  *tnmk0)  {
  int  Q  = 0;
   while  (1) {
   char   a =  eLyM[0][Q];
 if  (!a)  break;
 int  CgZk = 0;
 for   (int  Bho =   1;   Bho   <   lbzy5; Bho++)   if   (eLyM[Bho][Q] != a)   { CgZk  =   1;  break;  }
  if  (CgZk)   break;
 tnmk0[Q++] =  a;
   }
   tnmk0[Q]   =  0;
}