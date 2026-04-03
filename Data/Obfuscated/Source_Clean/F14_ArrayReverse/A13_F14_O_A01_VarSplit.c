void bl(int J8[],  int   I9)   {
 int  nVmL   =   0, q =  0;
 int   XVO =   I9  - 1,  KbN0   =  0;
   while   ((nVmL +   q)   <  (XVO  +  KbN0))  {
  int  FwHJ =  nVmL +   q;
  int   BP = XVO   + KbN0;
  int dcrx4 =  J8[FwHJ];
   J8[FwHJ] = J8[BP];
  J8[BP] =  dcrx4;
   q++;
 KbN0--;
  }
}