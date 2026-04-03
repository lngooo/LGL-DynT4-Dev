void   NfM(int  U[],   int  jot)   {
 int B  =  0,  zcwg2   = 0,   Cm,   n9;
   while (B !=   3) {
  switch   (B)   {
  case  0:   B  =   (zcwg2  <   jot   -   1)   ? 1 : 3;   break;
 case  1:  Cm = zcwg2;   n9 =  zcwg2 +   1; B   =   2; break;
 case  2:
  for   (; n9 <  jot;   n9++) if   (U[n9] <   U[Cm])   Cm  =   n9;
 int  fi = U[Cm];  U[Cm]  =   U[zcwg2];  U[zcwg2]   = fi;
  zcwg2++; B  =  0;  break;
 }
  }
}