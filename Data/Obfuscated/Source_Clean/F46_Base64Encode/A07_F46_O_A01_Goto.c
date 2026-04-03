void Fk(unsigned char  *P8,   int TKMF,  char *FVRr) {
  const   char  *cUOR  =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 int JOg9  =  0,   D  =  0;
huMy:
   if  (JOg9   >= TKMF)  goto   zc;
  FVRr[D++]  =  cUOR[P8[JOg9]  >>   2];
 FVRr[D++]  =   cUOR[((P8[JOg9] &   3)  << 4) |  (JOg9+1  < TKMF   ?  P8[JOg9+1] >>  4  :  0)];
  if (JOg9 + 1 >=   TKMF)  {   FVRr[D++] =  '='; FVRr[D++]   = '='; goto   zc;   }
  FVRr[D++]  = cUOR[((P8[JOg9+1]  &   15) <<   2)  |   (JOg9+2 <  TKMF   ?   P8[JOg9+2]  >>  6   :   0)];
 if   (JOg9   +   2  >= TKMF) {  FVRr[D++]   =  '=';  goto   zc;   }
   FVRr[D++]  =  cUOR[P8[JOg9+2]  &  63];
  JOg9 += 3;
  goto  huMy;
zc:
 FVRr[D] = '\0';
}