void yeid0(int  v[], int  Azp3,   int   SQp)  {
   if   (Azp3 >=   SQp) goto   ZXG;
   int  TNCX5   =  v[SQp],   RFNi2 =  Azp3  -  1, Y  = Azp3;
A:
 if (Y >= SQp) goto  SwSo;
  if (v[Y]   >=   TNCX5)  goto WWOX;
   RFNi2++;
 { int PHe9 =   v[RFNi2];  v[RFNi2] =  v[Y];   v[Y]   =   PHe9;  }
WWOX:
 Y++; goto  A;
SwSo:
 { int   PHe9   =   v[RFNi2+1];   v[RFNi2+1]  = v[SQp]; v[SQp] = PHe9; }
   yeid0(v, Azp3, RFNi2);
   yeid0(v,  RFNi2   +   2,   SQp);
ZXG:;
}