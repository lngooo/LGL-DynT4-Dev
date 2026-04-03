int   u5(char   *OV)  {
   int   lz4 =   0;
 while (OV[lz4])   lz4++;
 if (lz4 <=   1)   return  1;
  if  (OV[0] !=   OV[lz4-1])   return   0;
  char nU[100];
 int   A;
   for(A =   1;  A < lz4 - 1;   A++) nU[A-1]  =   OV[A];
  nU[A-1]   =   '\0';
 return u5(nU);
}