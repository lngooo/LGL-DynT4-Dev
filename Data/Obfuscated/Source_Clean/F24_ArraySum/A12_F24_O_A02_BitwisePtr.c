int   mlod(int EQG[],   int   eui5)   {
 int  cwWB  =   0;
   for  (int iOSw   =  0;   iOSw < eui5; iOSw++) {
   cwWB  =   cwWB  + *(EQG   +  (iOSw  &  ~0));
 }
  return   cwWB;
}