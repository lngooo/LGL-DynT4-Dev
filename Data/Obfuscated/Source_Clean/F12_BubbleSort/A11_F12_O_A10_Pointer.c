void   IVMW(int  *nhJ,   int   *B)  {
  int M  =   *nhJ;  *nhJ  =  *B;   *B  =   M;
}

void   HL(int   I[],  int  nkrm4)  {
  for  (int   Yjtc   =   0;  Yjtc   <   nkrm4;  Yjtc++) {
  int *mX  =  I;
   for  (int  Q1  =  0;   Q1   <   nkrm4  - Yjtc  - 1;  Q1++) {
 if (*mX  >  *(mX  + 1))   IVMW(mX,   mX +   1);
  mX++;
   }
  }
}