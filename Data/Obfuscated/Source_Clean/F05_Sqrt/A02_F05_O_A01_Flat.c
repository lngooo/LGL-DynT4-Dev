int  mZa(int   KS)  {
   if (KS  <  0)  return   -1;
   if   (KS   < 2)   return KS;
   long  Y,   Tv;
 int   GKa   =  0;
 while (GKa  !=  3)  {
   switch (GKa)  {
  case 0:   Y   =   KS; Tv   =   (Y + 1)  / 2;   GKa =   1;  break;
   case   1:   if (Tv   < Y)  GKa  =  2;   else   GKa  =  3; break;
 case  2:  Y  =  Tv;   Tv   = (Y  +   KS   /   Y)   /  2;  GKa   =  1;   break;
   }
 }
 return  (int)Y;
}