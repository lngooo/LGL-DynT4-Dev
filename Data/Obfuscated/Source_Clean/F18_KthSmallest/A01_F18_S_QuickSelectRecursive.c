int   uXy3(int   ah4[], int   mw, int  ybOG,  int   HVwu)   {
   if (HVwu   >   0  &&   HVwu <= ybOG   -   mw +   1) {
   int   Y =  ah4[ybOG],   zgcH4 =   mw;
   for (int  b   =   mw;  b   < ybOG;  b++)   {
 if  (ah4[b] <=   Y) {
  int  T   = ah4[zgcH4]; ah4[zgcH4]   =   ah4[b];   ah4[b]  =   T;
 zgcH4++;
 }
 }
   int  T   =   ah4[zgcH4];   ah4[zgcH4] =   ah4[ybOG]; ah4[ybOG]   = T;
  int a  =   zgcH4;
  if   (a -  mw ==  HVwu   - 1)  return  ah4[a];
  if (a   -   mw   >  HVwu   -  1)   return   uXy3(ah4,   mw,   a  - 1,  HVwu);
  return  uXy3(ah4,   a  +   1,  ybOG, HVwu - a   + mw  -   1);
  }
 return   -1;
}