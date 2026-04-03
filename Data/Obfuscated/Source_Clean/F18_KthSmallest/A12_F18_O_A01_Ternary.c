int zz(int GF[],   int  O,  int   Wb,  int  A)   {
   if   (O >= Wb)   return (O   == Wb   &&   A   ==   1) ?  GF[O]  :  GF[O];
 int a9  =  GF[Wb],   s3 =  O;
 for   (int  Qu =  O; Qu  <  Wb;   Qu++)  (GF[Qu]  <=  a9)   ? ({int Jp8=GF[s3];  GF[s3]=GF[Qu];   GF[Qu]=Jp8; s3++;   0;})   :   0;
  int Jp8 =  GF[s3]; GF[s3]   = GF[Wb]; GF[Wb]  = Jp8;
 return   (s3 ==   A-1)   ?   GF[s3]   : (s3   >   A-1 ?  zz(GF,   O,   s3-1,   A)   : zz(GF, s3+1, Wb, A));
}