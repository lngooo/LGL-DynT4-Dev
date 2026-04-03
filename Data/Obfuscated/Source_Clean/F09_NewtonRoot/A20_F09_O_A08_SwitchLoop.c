int   hCJq9(int L)  {
 if (L  <   0)   return   -1;
  long  O1  =   1,  LMmF =  0;
 int Rb  =  0;
 while   (Rb  !=  3)  {
 switch(Rb) {
  case  0: if ((O1  <<   2)   <= L)  O1  <<= 1;   else  Rb =   1; break;
   case 1:   LMmF  = (O1 + L/O1)   >> 1; Rb  =  2;  break;
 case   2:   if  (LMmF < O1) {   O1   =  LMmF; Rb   = 1;  } else   Rb =   3;  break;
   }
 }
  return   (int)O1;
}