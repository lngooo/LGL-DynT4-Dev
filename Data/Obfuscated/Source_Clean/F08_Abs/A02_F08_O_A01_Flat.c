int   u(int ww7) {
  int   U   =   0;
 int srV1   = 0;
 while (U != 3)  {
 switch  (U) {
  case  0:   U   = (ww7  < 0)   ?  1  :   2; break;
   case 1: srV1  =   -ww7; U  =   3;   break;
  case 2:  srV1   =  ww7;  U   =  3;   break;
 }
   }
  return  srV1;
}