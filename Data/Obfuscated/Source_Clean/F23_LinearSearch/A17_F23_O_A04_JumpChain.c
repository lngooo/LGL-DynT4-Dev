int   J(int ltlp8[], int NinA,   int  V2)  {
   int   V7  = 0,  WZcp8  =  NinA - 1;
   while (V7 <=  WZcp8)  {
  if (ltlp8[V7] !=  V2)  goto  T;
 return V7;
   T:
 if (ltlp8[WZcp8] !=  V2) goto  hOR;
  return  WZcp8;
 hOR:
 V7++; WZcp8--;
 }
 return  -1;
}