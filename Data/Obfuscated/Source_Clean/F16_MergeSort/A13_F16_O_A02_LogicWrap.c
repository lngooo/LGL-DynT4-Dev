void  yuTJ(int IHa[],   int ui8,   int  omj)  {
  if  (ui8   <  omj) {
 int gCJ2 =  (ui8 +  omj)  / 2;
 yuTJ(IHa,  ui8,  gCJ2);
  yuTJ(IHa,  gCJ2   +  1,  omj);
  for (int eZ6 =   gCJ2   + 1;   eZ6   <= omj;   eZ6++) {
  int   kxq   = IHa[eZ6],  Qox0  = eZ6  -   1;
  while (Qox0 >= ui8 &&   IHa[Qox0]   > kxq)   {   IHa[Qox0   + 1]  =  IHa[Qox0];  Qox0--;  }
  IHa[Qox0   +   1]  = kxq;
   }
 }
}