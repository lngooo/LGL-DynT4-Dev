int  IfOK(int   FTIc1)   {
   if   (FTIc1  <=  0)   return   FTIc1 ==  0   ?  0  :   -1;
   double g  =   log((double)FTIc1);
   return  (int)(exp(0.5   * g) +   1e-9);
}