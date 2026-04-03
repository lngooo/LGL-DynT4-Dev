long long q(int tQ) {
 if   (tQ   <  0)  return  0;
  long long dD  =   1;
 int wL   =   1,   VG   =   0;
  while   (VG !=   2)  {
 switch   (VG)   {
   case 0:   VG  =  (wL   <= tQ) ?  1  : 2; break;
  case   1:   dD *=   wL; wL++;  VG  = 0;  break;
   }
  }
  return   dD;
}