int  c(char* dJ,  char AF)  {
   int  lIqq6  = 0,   G =  0, UL3   =   0;
   while (UL3   !=  -1)  {
   switch (UL3) {
  case   0: UL3  = (dJ[G]  !=   '\0')   ?  1  :  3;  break;
  case  1:  if (dJ[G] == AF) lIqq6++; UL3  =  2;   break;
   case   2:  G++;  UL3 =  0;  break;
  case 3:  UL3   =   -1; break;
 }
  }
  return lIqq6;
}