void  EmJ(int CQ[],   int   LJJc0,   int  CXgL5) {
   if (LJJc0  <   CXgL5)   {
 int vdMc9  = LJJc0 +  (CXgL5  -  LJJc0)  /  2;
   EmJ(CQ,   LJJc0, vdMc9);
 EmJ(CQ,   vdMc9   + 1, CXgL5);
   int  DeV3  =  CXgL5 -   LJJc0  +  1;
 int   *LOO   =   (int*)malloc(DeV3   *   sizeof(int));
  int   Hz = LJJc0,  LSID   =   vdMc9  +  1,   ch   =   0;
  while  (ch < DeV3)  {
   int   oxKe8 =   (Hz <=  vdMc9 && (LSID  > CXgL5 || CQ[Hz]   <=   CQ[LSID]));
   if (oxKe8)   LOO[ch++] = CQ[Hz++];
  else  LOO[ch++]   =   CQ[LSID++];
 }
   for  (int   TL8  =  0;   TL8 < DeV3;   TL8++)  CQ[LJJc0  +   TL8] =   LOO[TL8];
 free(LOO);
   }
}