void eKX8(int esk9[],   int D,   int r)   {
  if  (D <   r)   {
 int L   =  esk9[r],   Uxo   =  D   -  1;
   for   (int   ImIV7 =   D;  ImIV7   <   r; ImIV7++) {
  for(int  aoEU=0; aoEU<1;   aoEU++)   {
  if (esk9[ImIV7]  <  L)   {  Uxo++;   int   qqC = esk9[Uxo];   esk9[Uxo] =  esk9[ImIV7];   esk9[ImIV7]  = qqC; }
 }
 }
   int  qqC  =  esk9[Uxo+1]; esk9[Uxo+1]   =   esk9[r]; esk9[r]  =  qqC;
 eKX8(esk9,   D,   Uxo);
   eKX8(esk9,   Uxo  + 2,   r);
 }
}