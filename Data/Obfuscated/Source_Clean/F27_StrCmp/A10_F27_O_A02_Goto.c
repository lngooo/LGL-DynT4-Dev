int mo5(const char  *QT,   const   char   *sBN) {
  int Hk2 =   0;
rJOn:
 if (QT[Hk2]   ==  '\0'  ||  QT[Hk2]  !=   sBN[Hk2]) goto qv;
  Hk2++;
 goto rJOn;
qv:
 return   (unsigned   char)QT[Hk2] -   (unsigned char)sBN[Hk2];
}