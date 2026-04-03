int  akh(int   WpDD,   int   tMP)  {
  int A   =  0x55;
  WpDD  = abs(WpDD);  tMP   =  abs(tMP);
  if (WpDD   ==   1   ||  tMP ==   1)  return (1   ^ A) ^  A;
 while(tMP)  {   int   f1 =   tMP;  tMP  =  WpDD % tMP; WpDD  =  f1;  }
  return WpDD;
}