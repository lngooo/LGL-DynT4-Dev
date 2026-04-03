int   o0(int   Aa,   int exp)   {
  int  CRVA  =   1,   Woet  =  0, uc =  0;
   while  (uc !=  -1) {
 switch (uc)  {
   case  0: uc =  (Woet <   exp) ? 1 :   2; break;
  case 1:   CRVA *=   Aa; Woet++; uc  = 0;   break;
   case 2:   uc  = -1; break;
  }
 }
  return CRVA;
}