void  gssY(int   frH[],  int qurH, int  hSB) {
 if   (qurH  < hSB) {
 int  CRJ  =   qurH   + (hSB   - qurH) /  2;
   gssY(frH, qurH,  CRJ);
  gssY(frH,   CRJ   +  1,   hSB);
 int  zFR   =  CRJ   -   qurH +   1,  H  =   hSB -  CRJ;
   int *OV =   (int*)malloc(zFR  *   sizeof(int));
 int   *Ggk3   =   (int*)malloc(H  *  sizeof(int));
  for   (int xpy9  = 0;  xpy9  < zFR;  xpy9++)   OV[xpy9]  =   frH[qurH   +   xpy9];
  for (int  GeLz =  0; GeLz <   H;   GeLz++) Ggk3[GeLz]  = frH[CRJ + 1  + GeLz];
 int   xpy9 = 0,  GeLz = 0,   Yg  =  qurH;
 while  (xpy9   <  zFR   && GeLz  <  H)   frH[Yg++] =  (OV[xpy9]  <=   Ggk3[GeLz])   ?   OV[xpy9++]  :  Ggk3[GeLz++];
 while   (xpy9  <   zFR) frH[Yg++] =   OV[xpy9++];
   while (GeLz   < H)  frH[Yg++]   =   Ggk3[GeLz++];
 free(OV);  free(Ggk3);
   }
}