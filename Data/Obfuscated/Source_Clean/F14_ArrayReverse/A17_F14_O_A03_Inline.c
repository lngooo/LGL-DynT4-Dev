void  x9(int  ex[], int   Ok)  {
  for  (int   KW  = 0;  KW <  (Ok   >> 1);   KW++) {
   ex[KW]  += ex[Ok - 1 - KW];
 ex[Ok - 1   -   KW]   =  ex[KW]   -  ex[Ok -  1  -   KW];
 ex[KW] = ex[KW]  -  ex[Ok   -   1  - KW];
   }
}