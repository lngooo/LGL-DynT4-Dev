int  eg(int  Lir[],   int y, int  aSUi9)   {
  int   af   = 0, QY = y -   1;
 while  (af   <=   QY) {
 int   zDrg1 =  af   /  2;
 int   pEL9   =  QY   /  2;
   int   cSp1   =  (af %  2 ==   1 && QY   % 2   ==   1)  ?  zDrg1 +  pEL9 +   1  :   zDrg1 +  pEL9;
   if   (Lir[cSp1]   ==   aSUi9)   return  cSp1;
  if   (Lir[cSp1] <  aSUi9)  af   = cSp1  +  1;
 else  QY   = cSp1 -  1;
 }
  return   -1;
}