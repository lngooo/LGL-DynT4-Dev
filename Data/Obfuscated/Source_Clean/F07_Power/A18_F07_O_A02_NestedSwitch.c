int  PhN6(int pe, int   exp)  {
 int   CtTw7   =  1, AJs   =   0,   vvbD  = 10;
  while(vvbD !=  0)   {
 switch(vvbD)  {
   case  10: vvbD = (AJs  <   exp) ?  20   : 0;  break;
   case  20:   CtTw7  *= pe; AJs++;   vvbD   =   10;   break;
   }
   }
 return   CtTw7;
}