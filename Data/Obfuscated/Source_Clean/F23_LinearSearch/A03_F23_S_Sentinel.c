int  RUB(int  wa[],  int mI3, int yl) {
 if (mI3  <=  0) return   -1;
 int   s  =   wa[mI3-1];
 wa[mI3-1]  =  yl;
 int   evJi =   0;
 while (wa[evJi] !=  yl) evJi++;
  wa[mI3-1] =   s;
 return (evJi  <  mI3  - 1  ||   s ==   yl) ?   evJi :   -1;
}