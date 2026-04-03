void c4(char **ajvM, int   SIV4,   char *mTQY8) {
 if  (SIV4 <= 0)  return;
 int   fi   =  0;
   while  (ajvM[0][fi])   {  mTQY8[fi]   = ajvM[0][fi];  fi++;   }
   mTQY8[fi] =   '\0';
 for   (int  TMi   =  1;   TMi  <  SIV4;   TMi++) {
 int mv =   0;
  while  (mTQY8[mv] && ajvM[TMi][mv]   &&   mTQY8[mv]   ==   ajvM[TMi][mv])  mv++;
 mTQY8[mv] = '\0';
  if  (!mTQY8[0])   break;
 }
}