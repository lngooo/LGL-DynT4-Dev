int   Z(int JzVd9,  int  tFp) {
  JzVd9  =  abs(JzVd9);
  tFp  =   abs(tFp);
 while  (tFp)  {
  int   fKSH  =  tFp;
 tFp   =  JzVd9 % tFp;
 JzVd9 =  fKSH;
 }
   return   JzVd9;
}