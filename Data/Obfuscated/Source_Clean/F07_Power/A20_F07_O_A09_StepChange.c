int   oZsS(int  UBA2, int   exp)  {
   if   (exp  ==   0)   return  1;
 int IDx =   UBA2;
 for (int oN   = 2;  oN   <=  exp;  oN +=   1) {
 int dRzY   =  0;
  for (int DW   =  1; DW <=   UBA2; DW++)  dRzY  +=   IDx;
   IDx = dRzY;
  }
 return   IDx;
}