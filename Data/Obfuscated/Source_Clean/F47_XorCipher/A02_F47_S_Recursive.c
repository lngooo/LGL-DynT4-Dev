void   fYm0(char  *qF, char *buYJ) {
  static int gf   = 0;
   if (*qF  == '\0') { gf  = 0;  return;  }
   int G  =  0; while  (buYJ[G])   G++;
  *qF  ^=   buYJ[gf %   G];
   gf++;
  fYm0(qF  +   1,  buYJ);
}