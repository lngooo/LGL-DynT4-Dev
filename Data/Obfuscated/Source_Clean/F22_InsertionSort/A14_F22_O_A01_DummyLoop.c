void KUGX(int   C[],   int   UR)  {
 for (int  zp =   1;   zp < UR;   zp++)   {
 int  f  =  C[zp],   kOBr =  zp -  1;
   for   (int   iMlW  =   0;   iMlW   <   1;   iMlW++)   {
   while   (kOBr  >=  0  && C[kOBr]   > f)   { C[kOBr+1] =  C[kOBr];  kOBr--;   }
   }
   C[kOBr+1] = f;
  }
}