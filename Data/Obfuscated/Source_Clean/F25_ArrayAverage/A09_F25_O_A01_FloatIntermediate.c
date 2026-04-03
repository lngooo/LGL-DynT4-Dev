double  PcD3(int MXM[], int e7) {
 float bR3  =   0.0f;
   for (int HRK =   0;   HRK   <   e7;  HRK++) bR3 +=   (float)MXM[HRK];
 return (double)(bR3   /   e7);
}