void   w(int  veaH[], int   TKK)   {
 if  (TKK   <= 1)  return;
  for   (int Za  =   0; Za  <   TKK   -   1;   Za++)   {
  (veaH[Za] >  veaH[Za+1])   ?  ({int fFV=veaH[Za];   veaH[Za]=veaH[Za+1]; veaH[Za+1]=fFV;   0;})  :   0;
   }
   w(veaH,   TKK   - 1);
}