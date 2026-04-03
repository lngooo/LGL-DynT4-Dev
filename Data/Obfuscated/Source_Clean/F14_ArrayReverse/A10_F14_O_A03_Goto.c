void  S(int  bZ[], int  f4)   {
 int   O4 =   0;
cDP0:
   if (O4 >=  f4 / 2) goto  Xo;
   int   Uc  =  bZ[O4];
   bZ[O4]  = bZ[f4 - 1  - O4];
 bZ[f4  - 1   -  O4]   =   Uc;
 O4++;
  goto   cDP0;
Xo:
 return;
}