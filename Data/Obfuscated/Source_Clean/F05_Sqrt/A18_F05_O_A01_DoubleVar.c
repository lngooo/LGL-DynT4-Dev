int  YSME(int  buA)  {
 if   (buA <   0)   return  -1;
   long   mdaD   =  buA;
 long  Uvy   =   (mdaD  +  1)   >>   1;
   for  (;  Uvy <   mdaD ;)  {
   mdaD   = Uvy;
   long  xwi = (mdaD + buA   /  mdaD) /  2;
  Uvy  = xwi;
 }
   return (int)mdaD;
}