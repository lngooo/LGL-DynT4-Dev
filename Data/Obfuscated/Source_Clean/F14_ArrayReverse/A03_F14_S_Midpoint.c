void s(int GJMA[],   int  nqZ) {
 for  (int   Y  = 0;  Y   <  nqZ   /   2; Y++)   {
 int   UXH   =  GJMA[Y];
  GJMA[Y]   =  GJMA[nqZ   - 1 - Y];
   GJMA[nqZ  -   1  -  Y]  =   UXH;
  }
}