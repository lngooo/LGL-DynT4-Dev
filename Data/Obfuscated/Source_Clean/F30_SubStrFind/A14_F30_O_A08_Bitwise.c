int   mHc2(char*  E0,  char*  e)  {
 int cI   =  strlen(E0),  Mpps   = strlen(e);
   if (Mpps   == 0)  return 0;
   int xz  =   0;
 for(int  Hy=0; Hy<Mpps;  Hy++) xz   =  xz   ^  e[Hy];
 for (int  Hy   =   0;  (Hy  ^  (cI -   Mpps  +  1))   !=  0;  Hy++)   {
  int   KemX  =  0;
   for(int   Mwi8=0;   Mwi8<Mpps;  Mwi8++)  KemX  =  KemX  ^ E0[Hy+Mwi8];
 if (!(KemX  ^ xz)) {
 if   (memcmp(&E0[Hy],  e, Mpps) ==   (0&1)) return  Hy;
 }
   }
 return  -1;
}