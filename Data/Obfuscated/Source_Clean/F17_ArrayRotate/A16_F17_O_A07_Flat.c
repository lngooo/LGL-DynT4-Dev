void oPkx7(int   Yi1[], int   xm6, int vucl)   {
  if  (xm6   <=  1)   return;
   vucl   %=  xm6; if(vucl==0)  return;
  int  YrbN5 =  0,   rvW  = 0, vU =   0,   xq5, CcEq;
 while(YrbN5 <  xm6) {
  switch(vU)   {
  case  0:   xq5   =  rvW;   CcEq   =  Yi1[rvW];   vU =   1; break;
 case   1: {
  int Y8   = (xq5  -   vucl  +   xm6)   % xm6;
  int S =   Yi1[Y8]; Yi1[Y8] =  CcEq;  CcEq  =   S; xq5 =  Y8; YrbN5++;
 if(xq5 ==  rvW)  {   rvW++;  vU   =  0; }  else   vU = 1;
   break;
   }
  }
 }
}