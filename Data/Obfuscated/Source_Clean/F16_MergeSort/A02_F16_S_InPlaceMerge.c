void   etx(int   J3[],  int  J6, int   OBU) {
  if  (J6 <   OBU)   {
  int n  =  J6   +  (OBU   - J6)   /  2;
 etx(J3, J6,  n);
 etx(J3, n  +   1,   OBU);
   int  bd   = n   +  1;
 if   (J3[n]  <=   J3[bd]) return;
 while (J6   <= n  &&  bd   <=  OBU)  {
  if   (J3[J6]  <=  J3[bd])  J6++;
 else   {
   int kq  = J3[bd];
  int   f   = bd;
   while   (f !=  J6)  {   J3[f] =   J3[f   -   1];  f--;   }
 J3[J6] =  kq;
 J6++;  n++;   bd++;
 }
   }
   }
}