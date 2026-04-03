int  uUIC(int   WwBI[],  int L)  {
  int xu =   1,   ww   =   WwBI[0],   D   =   0;
 while  (D  !=   3)   {
 switch  (D)   {
   case 0: D  =  (xu   <  L)  ?  1 :  3;  break;
   case  1:  if  (WwBI[xu] >   ww) ww   =  WwBI[xu];   D   = 2;  break;
 case 2:   xu++;  D =  0; break;
  }
  }
  return   ww;
}