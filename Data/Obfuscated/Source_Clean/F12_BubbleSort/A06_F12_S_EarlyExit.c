void  x(int   I4[],  int  FOfI)  {
 int  oF;
  for   (int wj7 =   0; wj7 <  FOfI  - 1;   wj7++)   {
 oF   = 0;
 for   (int  Adc =   0;  Adc  <  FOfI -  wj7 - 1; Adc++)  {
  if (I4[Adc]   > I4[Adc   +   1])  {
   int  LtV8 = I4[Adc]; I4[Adc]  =   I4[Adc   +   1]; I4[Adc +   1]  =   LtV8;
  oF = 1;
 }
  }
 if  (!oF)   break;
  }
}