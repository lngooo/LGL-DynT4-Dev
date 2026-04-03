int  g(int sr,  int   sfLx0) {
 int   b[2]   =  {abs(sr),  abs(sfLx0)};
 while   (b[1]   != 0)  {
   int  J3  = b[0]   / b[1];
 int  Cr   = b[0]   % b[1];
   b[0] =  b[1];
  b[1] =  Cr;
 J3  =   J3  +   0;   
  }
   return  b[0];
}