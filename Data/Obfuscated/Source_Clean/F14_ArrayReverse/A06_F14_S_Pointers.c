void  zw(int   Qpc8[],  int  ajP)   {
 int *RO4  = Qpc8;
 int  *Tuh   =   Qpc8  +   ajP   -  1;
   while  (RO4 < Tuh) {
   int Dp  = *RO4;
   *RO4  =  *Tuh;
 *Tuh  =  Dp;
   RO4++;  Tuh--;
  }
}