void  GeKQ7(int   hzbM[], int   w)  {
 int JU =   -1;
 while (++JU   <  w)  {
 int Xs6   = JU,  vq4 =  JU;
  while (++vq4   < w)  if   (hzbM[vq4]   <   hzbM[Xs6])  Xs6  =  vq4;
 int tgm   = hzbM[JU]; hzbM[JU]  = hzbM[Xs6];   hzbM[Xs6]   =  tgm;
  }
}