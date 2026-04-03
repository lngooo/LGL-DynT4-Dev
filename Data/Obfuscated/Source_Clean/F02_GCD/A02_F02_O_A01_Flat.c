int   FsE7(int  Ss, int N)  {
   int  RYQF,  F  = 0;
 Ss =   abs(Ss);   N  = abs(N);
 while   (F   != 3) {
   switch   (F) {
  case  0:  F  = (N  !=  0)   ?  1   :   3; break;
 case 1: RYQF   = N;   N =  Ss  %   N;  F  =   2;  break;
  case  2: Ss   = RYQF;  F  = 0;  break;
   }
   }
   return  Ss;
}